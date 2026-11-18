// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4cf170

UScriptStruct * __cdecl FRigUnit_BoneHarmonics::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_BoneHarmonics.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_BoneHarmonics.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics,(UObject *)pUVar1,
                         L"RigUnit_BoneHarmonics");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_BoneHarmonics.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_BoneHarmonics.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4cf1f0

UScriptStruct * __thiscall
FRigUnit_BoneHarmonics::GetExecuteContextStruct(FRigUnit_BoneHarmonics *this)

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

// Execute @ 14a4cf640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_BoneHarmonics::Execute(FRigUnit_BoneHarmonics *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2e8 [32];
  TArrayView<FRigUnit_BoneHarmonics_BoneTarget_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
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
  local_278.DataPtr = (FRigUnit_BoneHarmonics_BoneTarget *)(this->Bones).AllocatorInstance.Data;
  iVar1 = (this->Bones).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->WaveSpeed,
                &this->WaveFrequency,&this->WaveAmplitude,&this->WaveOffset,&this->WaveNoise,
                this->WaveEase,this->WaveMinimum,this->WaveMaximum,this->RotationOrder,
                this->bPropagateToChildren,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4d87c0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_BoneHarmonics::GetUpgradeInfo
          (FRigUnit_BoneHarmonics *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  FRigVMStructUpgradeInfo *pFVar5;
  UPackage *pUVar6;
  FRigVMRegistry_RWLock *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  ulonglong local_158;
  undefined8 uStack_150;
  uint local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  FString local_138;
  FString local_128;
  FRigUnit_ItemHarmonics local_118;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_48;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_38;
  
  FRigUnit_ItemHarmonics::FRigUnit_ItemHarmonics(&local_118);
  uVar9 = 0;
  uVar11 = uVar9;
  uVar12 = uVar9;
  if (0 < (this->Bones).ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      local_148 = CONCAT31(local_148._1_3_,1);
      uStack_144 = 0;
      uStack_140 = 0;
      local_158 = (ulonglong)local_148;
      uVar8 = 0;
      if ((int)uVar10 < (this->Bones).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      uStack_150 = 0;
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRigVMStructUpgradeInfo *)(*pcVar3)();
        return pFVar5;
      }
      local_168 = CONCAT31(local_168._1_3_,1);
      uVar2 = *(undefined8 *)((this->Bones).AllocatorInstance.Data + uVar12);
      uStack_164 = (undefined4)uVar2;
      uStack_160 = (undefined4)((ulonglong)uVar2 >> 0x20);
      local_158 = CONCAT44(uStack_164,local_168);
      uStack_150 = CONCAT44(uStack_150._4_4_,uStack_160);
      uVar8 = 0;
      if ((int)uVar10 < (this->Bones).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRigVMStructUpgradeInfo *)(*pcVar3)();
        return pFVar5;
      }
      uStack_150 = CONCAT44(*(undefined4 *)((this->Bones).AllocatorInstance.Data + uVar12 + 8),
                            (undefined4)uStack_150);
      if (((local_118.Targets.AllocatorInstance.Data <= (FScriptContainerElement *)&local_158) &&
          ((FScriptContainerElement *)&local_158 <
           local_118.Targets.AllocatorInstance.Data + (longlong)local_118.Targets.ArrayMax * 0x10))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRigVMStructUpgradeInfo *)(*pcVar3)();
        return pFVar5;
      }
      if (local_118.Targets.ArrayNum == local_118.Targets.ArrayMax) {
        local_118.Targets.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&local_118.Targets.AllocatorInstance,&local_118.Targets.ArrayMax);
      }
      iVar1 = local_118.Targets.ArrayNum + 1;
      *(ulonglong *)
       (local_118.Targets.AllocatorInstance.Data + (longlong)local_118.Targets.ArrayNum * 0x10) =
           local_158;
      *(undefined8 *)
       (local_118.Targets.AllocatorInstance.Data + (longlong)local_118.Targets.ArrayNum * 0x10 + 8)
           = uStack_150;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 0xc;
      local_118.Targets.ArrayNum = iVar1;
    } while ((int)(uVar10 + 1) < (this->Bones).ArrayNum);
  }
  local_118.WaveEase = this->WaveEase;
  local_118.WaveSpeed.field0_0x0._s_0.X = (this->WaveSpeed).field0_0x0._s_0.X;
  local_118.WaveSpeed.field0_0x0._s_0.Y = (this->WaveSpeed).field0_0x0._s_0.Y;
  local_118.WaveSpeed.field0_0x0._s_0.Z = (this->WaveSpeed).field0_0x0._s_0.Z;
  local_118.WaveFrequency.field0_0x0._s_0.X = (this->WaveFrequency).field0_0x0._s_0.X;
  local_118.WaveFrequency.field0_0x0._s_0.Y = (this->WaveFrequency).field0_0x0._s_0.Y;
  local_118.RotationOrder = this->RotationOrder;
  local_118.WaveFrequency.field0_0x0._s_0.Z = (this->WaveFrequency).field0_0x0._s_0.Z;
  local_118.WaveAmplitude.field0_0x0._s_0.X = (this->WaveAmplitude).field0_0x0._s_0.X;
  local_118.WaveAmplitude.field0_0x0._s_0.Y = (this->WaveAmplitude).field0_0x0._s_0.Y;
  local_118.WaveAmplitude.field0_0x0._s_0.Z = (this->WaveAmplitude).field0_0x0._s_0.Z;
  local_118.WaveOffset.field0_0x0._s_0.X = (this->WaveOffset).field0_0x0._s_0.X;
  local_118.WaveOffset.field0_0x0._s_0.Y = (this->WaveOffset).field0_0x0._s_0.Y;
  local_118.WaveOffset.field0_0x0._s_0.Z = (this->WaveOffset).field0_0x0._s_0.Z;
  local_118.WaveNoise.field0_0x0._s_0.X = (this->WaveNoise).field0_0x0._s_0.X;
  local_118.WaveNoise.field0_0x0._s_0.Y = (this->WaveNoise).field0_0x0._s_0.Y;
  local_118.WaveNoise.field0_0x0._s_0.Z = (this->WaveNoise).field0_0x0._s_0.Z;
  local_118.WaveMinimum = this->WaveMinimum;
  local_118.WaveMaximum = this->WaveMaximum;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_BoneHarmonics.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_BoneHarmonics.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics,(UObject *)pUVar6,
                         L"RigUnit_BoneHarmonics");
    pFVar7 = FRigVMRegistry_RWLock::Get();
    local_48.DataPtr = Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::RigVMFunctions;
    local_48._12_4_ = uStack_15c;
    local_48.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar7,Z_Registration_Info_UScriptStruct_FRigUnit_BoneHarmonics.OuterSingleton,
               &local_48);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_BoneHarmonics.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ItemHarmonics.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ItemHarmonics.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics,(UObject *)pUVar6,
                         L"RigUnit_ItemHarmonics");
    pFVar7 = FRigVMRegistry_RWLock::Get();
    local_38.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::RigVMFunctions;
    local_38._12_4_ = uStack_15c;
    local_38.ArrayNum = 1;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (pFVar7,Z_Registration_Info_UScriptStruct_FRigUnit_ItemHarmonics.OuterSingleton,
               &local_38);
  }
  __return_storage_ptr__->NewStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_ItemHarmonics.OuterSingleton;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)&local_118);
  if (0 < (this->Bones).ArrayNum) {
    do {
      ::FString::PrintfImpl(&local_128,L"Targets.%d.Item.Name");
      ::FString::PrintfImpl(&local_138,L"Bones.%d.Bone");
      FRigVMStructUpgradeInfo::AddRemappedPin
                (__return_storage_ptr__,&local_138,&local_128,true,true);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < (this->Bones).ArrayNum);
  }
  if (local_118.WorkData.CachedItems.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.WorkData.CachedItems.AllocatorInstance.Data);
  }
  if (local_118.Targets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Targets.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FRigUnit_BoneHarmonics @ 14a50c450

FRigUnit_BoneHarmonics * __thiscall
FRigUnit_BoneHarmonics::FRigUnit_BoneHarmonics(FRigUnit_BoneHarmonics *this)

{
  undefined8 uVar1;
  
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  (this->Bones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bones).ArrayNum = 0;
  (this->Bones).ArrayMax = 0;
  (this->WorkData).CachedItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).CachedItems.ArrayNum = 0;
  (this->WorkData).CachedItems.ArrayMax = 0;
  this->_padding_ = (longlong)&___7FRigUnit_BoneHarmonics__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorkData).WaveTime.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorkData).WaveTime.field0_0x0._s_0.Y = (double)uVar1;
  (this->WorkData).WaveTime.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->WaveSpeed).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->WaveSpeed).field0_0x0._s_0.Y = (double)uVar1;
  (this->WaveSpeed).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->WaveAmplitude).field0_0x0._s_0.X = 0.0;
  (this->WaveAmplitude).field0_0x0._s_0.Y = 70.0;
  (this->WaveAmplitude).field0_0x0._s_0.Z = 0.0;
  (this->WaveFrequency).field0_0x0._s_0.X = 1.0;
  (this->WaveFrequency).field0_0x0._s_0.Y = 0.6000000238418579;
  (this->WaveFrequency).field0_0x0._s_0.Z = 0.800000011920929;
  (this->WaveOffset).field0_0x0._s_0.X = 0.0;
  (this->WaveOffset).field0_0x0._s_0.Y = 1.0;
  (this->WaveOffset).field0_0x0._s_0.Z = 2.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WaveNoise).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WaveNoise).field0_0x0._s_0.Y = (double)uVar1;
  (this->WaveNoise).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->WaveEase = Linear;
  this->WaveMinimum = 0.5;
  this->WaveMaximum = 1.0;
  this->RotationOrder = YZX;
  this->bPropagateToChildren = true;
  return this;
}

// Execute @ 14a524930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_BoneHarmonics::Execute(FRigUnit_BoneHarmonics *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigUnit_BoneHarmonics_BoneTarget_const_,int> local_18;
  
  local_18.DataPtr = (FRigUnit_BoneHarmonics_BoneTarget *)(this->Bones).AllocatorInstance.Data;
  iVar1 = (this->Bones).ArrayNum;
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
  StaticExecute(param_1,&local_18,&this->WaveSpeed,&this->WaveFrequency,&this->WaveAmplitude,
                &this->WaveOffset,&this->WaveNoise,this->WaveEase,this->WaveMinimum,
                this->WaveMaximum,this->RotationOrder,this->bPropagateToChildren,&this->WorkData);
  return;
}

// RigVMExecute @ 14a535be0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_BoneHarmonics::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  ERigVMAnimEasingType EVar3;
  EEulerRotationOrder EVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uchar *puVar9;
  TVector<double> *pTVar10;
  TVector<double> *pTVar11;
  FRigVMMemoryHandle *pFVar12;
  TVector<double> *pTVar13;
  TVector<double> *pTVar14;
  TVector<double> *pTVar15;
  ERigVMAnimEasingType *pEVar16;
  float *pfVar17;
  EEulerRotationOrder *pEVar18;
  uchar *puVar19;
  FRigVMSlice *pFVar20;
  FRigUnit_BoneHarmonics_WorkData *pFVar21;
  FControlRigExecuteContext *pFVar22;
  TArrayView<FRigUnit_BoneHarmonics_BoneTarget_const_,int> local_68 [3];
  
  iVar5 = param_2->ArrayNum;
  if (iVar5 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar12 = param_2->DataPtr;
  if (pFVar12->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar9 = pFVar12->Ptr;
  }
  else {
    puVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar12->PropertyPath,pFVar12->Ptr,pFVar12->Property);
  }
  if (iVar5 < 2) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar12 = param_2->DataPtr;
  if (pFVar12[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar10 = (TVector<double> *)pFVar12[1].Ptr;
  }
  else {
    pTVar10 = (TVector<double> *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar12[1].PropertyPath,pFVar12[1].Ptr,pFVar12[1].Property);
  }
  if (iVar5 < 3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar12 = param_2->DataPtr;
  if (pFVar12[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar11 = (TVector<double> *)pFVar12[2].Ptr;
  }
  else {
    pTVar11 = (TVector<double> *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar12[2].PropertyPath,pFVar12[2].Ptr,pFVar12[2].Property);
  }
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar13 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar14 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar15 = (TVector<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pEVar16 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  EVar3 = *pEVar16;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pfVar17 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar1 = *pfVar17;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pfVar17 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar2 = *pfVar17;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pEVar18 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  EVar4 = *pEVar18;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  puVar19 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  bVar7 = (bool)*puVar19;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,0xb);
  pFVar20 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar21 = (FRigUnit_BoneHarmonics_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar12,false,pFVar20->Offset + pFVar20->Index);
  local_68[0].DataPtr = *(FRigUnit_BoneHarmonics_BoneTarget **)puVar9;
  local_68[0].ArrayNum = *(int *)(puVar9 + 8);
  if (local_68[0].ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar22 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar22,local_68,pTVar10,pTVar11,pTVar13,pTVar14,pTVar15,EVar3,fVar1,fVar2,EVar4,
                bVar7,pFVar21);
  return;
}

// StaticExecute @ 14a5622a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_BoneHarmonics::StaticExecute
          (FControlRigExecuteContext *param_1,
          TArrayView<FRigUnit_BoneHarmonics_BoneTarget_const_,int> *param_2,TVector<double> *param_3
          ,TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7,ERigVMAnimEasingType param_8,float param_9,float param_10,
          EEulerRotationOrder param_11,bool param_12,FRigUnit_BoneHarmonics_WorkData *param_13)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint local_78;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ForAnyElementType local_60;
  int local_58;
  int iStack_54;
  ulonglong local_50;
  undefined8 uStack_48;
  TArrayView<FRigUnit_Harmonics_TargetItem_const_,int> local_40;
  
  iVar8 = param_2->ArrayNum;
  uVar5 = 0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  iStack_54 = 0;
  uVar9 = uVar5;
  if (0 < iVar8) {
    do {
      uVar7 = (uint)uVar5;
      local_78 = CONCAT31(local_78._1_3_,1);
      local_50 = (ulonglong)local_78;
      uStack_48 = 0;
      uVar4 = 0;
      if ((int)uVar7 < iVar8) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_6c = CONCAT31(local_6c._1_3_,1);
      uVar1 = *(undefined8 *)((longlong)&(param_2->DataPtr->Bone).ComparisonIndex.Value + uVar9);
      uStack_68 = (undefined4)uVar1;
      uStack_64 = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_50 = CONCAT44(uStack_68,local_6c);
      uStack_48 = CONCAT44(uStack_48._4_4_,uStack_64);
      uVar4 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_48 = CONCAT44(*(undefined4 *)((longlong)&param_2->DataPtr->Ratio + uVar9),
                           (undefined4)uStack_48);
      if (((local_60.Data <= (FScriptContainerElement *)&local_50) &&
          ((FScriptContainerElement *)&local_50 < local_60.Data + (longlong)iStack_54 * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_58 == iStack_54) {
        local_58 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&local_60,&iStack_54);
      }
      lVar6 = (longlong)local_58;
      uVar5 = (ulonglong)(uVar7 + 1);
      local_58 = local_58 + 1;
      *(ulonglong *)(local_60.Data + lVar6 * 0x10) = local_50;
      *(ulonglong *)(local_60.Data + lVar6 * 0x10 + 8) = uStack_48;
      iVar8 = param_2->ArrayNum;
      uVar9 = uVar9 + 0xc;
    } while ((int)(uVar7 + 1) < iVar8);
  }
  iVar8 = local_58;
  local_40.DataPtr = (FRigUnit_Harmonics_TargetItem *)local_60.Data;
  if ((local_58 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_40.ArrayNum = iVar8;
  FRigUnit_ItemHarmonics::StaticExecute
            (param_1,&local_40,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_13);
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

