// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4bab50

UScriptStruct * __cdecl FRigUnit_DebugTransformArrayMutableItemSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace,
                         (UObject *)pUVar1,L"RigUnit_DebugTransformArrayMutableItemSpace");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace.
         OuterSingleton;
}

// GetExecuteContextStruct @ 14a4bac00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_DebugTransformArrayMutableItemSpace::GetExecuteContextStruct
          (FRigUnit_DebugTransformArrayMutableItemSpace *this)

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

// Execute @ 14a4bafc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DebugTransformArrayMutableItemSpace::Execute
          (FRigUnit_DebugTransformArrayMutableItemSpace *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackY_2e8 [32];
  TArrayView<int_const_,int> local_288;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_278;
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
  local_278.DataPtr = (TTransform<double> *)(this->Transforms).AllocatorInstance.Data;
  iVar1 = (this->Transforms).ArrayNum;
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
  local_288.DataPtr = (int *)(this->ParentIndices).AllocatorInstance.Data;
  iVar2 = (this->ParentIndices).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&local_288,this->Mode,&this->Color
                ,this->Thickness,this->Scale,&this->Space,&this->WorldOffset,this->bEnabled,
                (FRigVMDebugDrawSettings *)&this->field_0x10);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4bb400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_DebugTransformArrayMutableItemSpace::GetUpgradeInfo
          (FRigUnit_DebugTransformArrayMutableItemSpace *this,
          FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar3;
  undefined1 auStackY_158 [32];
  TArrayView<FRigVMCompiledInFunction_const_,int> local_118;
  FRigVMStruct local_108;
  undefined **local_100;
  undefined1 local_f8;
  undefined4 local_f4;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  ERigUnitDebugTransformMode local_d0;
  FLinearColor_u_0 local_cc;
  float local_bc;
  float local_b8;
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_a8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_88 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_100 = &___7FRigVMExecutePin__6B_;
  local_98 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_68 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_108 = (FRigVMStruct)&___7FRigVMFunction_DebugTransformArrayMutableNoSpace__6B_;
  local_78 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_f8 = 1;
  local_f4 = 0xbf800000;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  local_58 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_d0 = 1;
  local_bc = 0.0;
  local_b8 = 10.0;
  local_48 = 1;
  local_cc = FLinearColor::White.field0_0x0;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)&local_f0 !=
      &this->Transforms) {
    uVar1 = (this->Transforms).ArrayNum;
    _Src = (this->Transforms).AllocatorInstance.Data;
    local_e8 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar1,0,&local_f0,uVar1,(int *)((longlong)&local_e8 + 4));
      memcpy(local_f0.Data,_Src,(longlong)(int)uVar1 * 0x60);
    }
  }
  local_d0 = this->Mode;
  local_cc = (this->Color).field0_0x0;
  local_bc = this->Thickness;
  local_48 = this->bEnabled;
  local_b8 = this->Scale;
  local_98 = *&(this->WorldOffset).Rotation.ZW.m128d_f64;
  local_a8 = *&(this->WorldOffset).Rotation.XY.m128d_f64;
  local_78 = *&(this->WorldOffset).Translation.ZW.m128d_f64;
  local_88 = *&(this->WorldOffset).Translation.XY.m128d_f64;
  local_58 = *&(this->WorldOffset).Scale3D.ZW.m128d_f64;
  local_68 = *&(this->WorldOffset).Scale3D.XY.m128d_f64;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace,
                         (UObject *)pUVar2,L"RigUnit_DebugTransformArrayMutableItemSpace");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_118.ArrayNum = 1;
    local_118.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace
                       .OuterSingleton,&local_118);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace.OuterSingleton
  ;
  pUVar3 = FRigVMFunction_DebugTransformArrayMutableNoSpace::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar3;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  local_118.DataPtr = (FRigVMCompiledInFunction *)0x0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_108);
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  return __return_storage_ptr__;
}

// FRigUnit_DebugTransformArrayMutableItemSpace @ 14a50ec20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_DebugTransformArrayMutableItemSpace * __thiscall
FRigUnit_DebugTransformArrayMutableItemSpace::FRigUnit_DebugTransformArrayMutableItemSpace
          (FRigUnit_DebugTransformArrayMutableItemSpace *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  FLinearColor FVar10;
  uint local_18;
  
  this->field_0x10 = 1;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined4 *)&this->field_0x14 = 0xbf800000;
  *(undefined ***)this = &___7FRigUnit_DebugTransformArrayMutableItemSpace__6B_;
  (this->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transforms).ArrayNum = 0;
  (this->Transforms).ArrayMax = 0;
  (this->ParentIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentIndices).ArrayNum = 0;
  (this->ParentIndices).ArrayMax = 0;
  (this->Space).Type = None;
  (this->Space).Name.ComparisonIndex = 0;
  (this->Space).Name.Number = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_18 = CONCAT31(local_18._1_3_,1);
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldOffset).Scale3D.ZW.m128d_f64 = auVar8;
  *&(this->WorldOffset).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->WorldOffset).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->WorldOffset).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->WorldOffset).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->WorldOffset).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->WorldOffset).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->Mode = Axes;
  FVar10 = FLinearColor::White;
  this->Thickness = 0.0;
  this->Scale = 10.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar10.field0_0x0;
  this->bEnabled = true;
  uVar9 = (ulonglong)local_18;
  (this->Space).Type = (char)uVar9;
  *(int3 *)&(this->Space).field_0x1 = (int3)(uVar9 >> 8);
  (this->Space).Name.ComparisonIndex = (FNameEntryId)(int)(uVar9 >> 0x20);
  (this->Space).Name.Number = 0;
  return this;
}

// Execute @ 14a526bf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DebugTransformArrayMutableItemSpace::Execute
          (FRigUnit_DebugTransformArrayMutableItemSpace *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<int_const_,int> local_28;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_18;
  
  local_18.DataPtr = (TTransform<double> *)(this->Transforms).AllocatorInstance.Data;
  iVar1 = (this->Transforms).ArrayNum;
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
  local_28.DataPtr = (int *)(this->ParentIndices).AllocatorInstance.Data;
  iVar2 = (this->ParentIndices).ArrayNum;
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
  StaticExecute(param_1,&local_18,&local_28,this->Mode,&this->Color,this->Thickness,this->Scale,
                &this->Space,&this->WorldOffset,this->bEnabled,
                (FRigVMDebugDrawSettings *)&this->field_0x10);
  return;
}

// RigVMExecute @ 14a53c5e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugTransformArrayMutableItemSpace::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  ERigUnitDebugTransformMode EVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uchar *puVar8;
  uchar *puVar9;
  ERigUnitDebugTransformMode *pEVar10;
  FRigVMMemoryHandle *pFVar11;
  FLinearColor *pFVar12;
  float *pfVar13;
  FRigElementKey *pFVar14;
  TTransform<double> *pTVar15;
  uchar *puVar16;
  FRigVMDebugDrawSettings *pFVar17;
  FControlRigExecuteContext *pFVar18;
  TArrayView<int_const_,int> local_78;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_68 [3];
  
  iVar4 = param_2->ArrayNum;
  if (iVar4 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar11->Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar11->PropertyPath,pFVar11->Ptr,pFVar11->Property);
  }
  if (iVar4 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar9 = pFVar11[1].Ptr;
  }
  else {
    puVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar11[1].PropertyPath,pFVar11[1].Ptr,pFVar11[1].Property);
  }
  if (iVar4 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar11 = param_2->DataPtr;
  if (pFVar11[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar10 = pFVar11[2].Ptr;
  }
  else {
    pEVar10 = FRigVMPropertyPath::GetData_Internal
                        (pFVar11[2].PropertyPath,pFVar11[2].Ptr,pFVar11[2].Property);
  }
  EVar3 = *pEVar10;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar12 = (FLinearColor *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar1 = *pfVar13;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar2 = *pfVar13;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar14 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pTVar15 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  puVar16 = FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  bVar6 = (bool)*puVar16;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pFVar17 = (FRigVMDebugDrawSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  local_78.DataPtr = *(int **)puVar9;
  local_78.ArrayNum = *(int *)(puVar9 + 8);
  if (local_78.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_68[0].DataPtr = *(TTransform<double> **)puVar8;
  iVar4 = *(int *)(puVar8 + 8);
  if (iVar4 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_68[0].ArrayNum = iVar4;
  pFVar18 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar18,local_68,&local_78,EVar3,pFVar12,fVar1,fVar2,pFVar14,pTVar15,bVar6,pFVar17);
  return;
}

// StaticExecute @ 14a56bab0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugTransformArrayMutableItemSpace::StaticExecute
          (FControlRigExecuteContext *param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,
          TArrayView<int_const_,int> *param_3,ERigUnitDebugTransformMode param_4,
          FLinearColor *param_5,float param_6,float param_7,FRigElementKey *param_8,
          TTransform<double> *param_9,bool param_10,FRigVMDebugDrawSettings *param_11)

{
  float fVar1;
  byte bVar2;
  FRigVMDrawInterface *this;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  TTransform<double> *pTVar7;
  int iVar8;
  uint uVar9;
  TTransform<double> *pTVar10;
  longlong lVar11;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70 [2];
  
  if (((*(longlong *)&param_1->field_0x58 != 0) && (param_10)) && (param_2->ArrayNum != 0)) {
    pTVar7 = param_2->DataPtr;
    pTVar10 = pTVar7 + param_2->ArrayNum;
    for (; pTVar7 != pTVar10; pTVar7 = pTVar7 + 1) {
      FRigUnit_DebugTransformMutableItemSpace::StaticExecute
                (param_1,pTVar7,param_4,param_5,param_6,param_7,param_8,param_9,true,param_11);
    }
    iVar8 = param_3->ArrayNum;
    if ((iVar8 == param_2->ArrayNum) && (uVar9 = 0, 0 < iVar8)) {
      lVar11 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar9 < iVar8) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = *(int *)(lVar11 + (longlong)param_3->DataPtr);
        if ((-1 < iVar8) && (iVar8 < param_2->ArrayNum)) {
          this = *(FRigVMDrawInterface **)&param_1->field_0x58;
          fVar1 = param_11->Lifetime;
          bVar2 = (param_11->DepthPriority).Value;
          piVar6 = TArrayView<int_const_,int>::operator[](param_3,uVar9);
          pTVar7 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_2,*piVar6);
          local_88._s_0.X = (pTVar7->Translation).XY.m128d_f64[0];
          local_88._s_0.Y = (pTVar7->Translation).XY.m128d_f64[1];
          local_88._s_0.Z = (pTVar7->Translation).ZW.m128d_f64[0];
          pTVar7 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_2,uVar9);
          local_70[0]._0_8_ = (pTVar7->Translation).XY.m128d_f64[0];
          local_70[0]._8_8_ = (pTVar7->Translation).XY.m128d_f64[1];
          local_70[0]._16_8_ = (pTVar7->Translation).ZW.m128d_f64[0];
          FRigVMDrawInterface::DrawLine
                    (this,param_9,(TVector<double> *)&local_70[0]._s_0,
                     (TVector<double> *)&local_88._s_0,param_5,param_6,(uint)bVar2,fVar1);
        }
        iVar8 = param_3->ArrayNum;
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 4;
      } while ((int)uVar9 < iVar8);
    }
  }
  return;
}

