// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4b9610

UScriptStruct * __cdecl FRigUnit_DebugTransformArrayMutable::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutable,
                         (UObject *)pUVar1,L"RigUnit_DebugTransformArrayMutable");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutable_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutable.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutable.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4b9690

UScriptStruct * __thiscall
FRigUnit_DebugTransformArrayMutable::GetExecuteContextStruct
          (FRigUnit_DebugTransformArrayMutable *this)

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

// Execute @ 14a4b9850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DebugTransformArrayMutable::Execute(FRigUnit_DebugTransformArrayMutable *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2d8 [32];
  TArrayView<UE::Math::TTransform<double>_const_,int> local_278;
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
  local_278.DataPtr = (TTransform<double> *)(this->Transforms).AllocatorInstance.Data;
  iVar1 = (this->Transforms).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,this->Mode,&this->Color,
                this->Thickness,this->Scale,&this->Space,&this->WorldOffset,this->bEnabled,
                &this->WorkData,(FRigVMDebugDrawSettings *)&this->field_0x10);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4b9c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_DebugTransformArrayMutable::GetUpgradeInfo
          (FRigUnit_DebugTransformArrayMutable *this,FRigVMStructUpgradeInfo *__return_storage_ptr__
          )

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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutable,
                         (UObject *)pUVar2,L"RigUnit_DebugTransformArrayMutable");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_118.ArrayNum = 1;
    local_118.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutable_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutable.
                       OuterSingleton,&local_118);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_DebugTransformArrayMutable.OuterSingleton;
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

// FRigUnit_DebugTransformArrayMutable @ 14a50eb10

FRigUnit_DebugTransformArrayMutable * __thiscall
FRigUnit_DebugTransformArrayMutable::FRigUnit_DebugTransformArrayMutable
          (FRigUnit_DebugTransformArrayMutable *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  FLinearColor FVar9;
  
  this->field_0x10 = 1;
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  *(undefined4 *)&this->field_0x14 = 0xbf800000;
  *(undefined ***)this = &___7FRigUnit_DebugTransformArrayMutable__6B_;
  (this->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transforms).ArrayNum = 0;
  (this->Transforms).ArrayMax = 0;
  (this->Space).ComparisonIndex = 0;
  (this->Space).Number = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
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
  (this->WorkData).DrawTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).DrawTransforms.ArrayNum = 0;
  (this->WorkData).DrawTransforms.ArrayMax = 0;
  this->Mode = Axes;
  FVar9 = FLinearColor::Red;
  this->Thickness = 0.0;
  this->Scale = 10.0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar9.field0_0x0;
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
  this->bEnabled = true;
  return this;
}

// Execute @ 14a526b20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DebugTransformArrayMutable::Execute
          (FRigUnit_DebugTransformArrayMutable *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_18;
  
  local_18.DataPtr = (TTransform<double> *)(this->Transforms).AllocatorInstance.Data;
  iVar1 = (this->Transforms).ArrayNum;
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
  StaticExecute(param_1,&local_18,this->Mode,&this->Color,this->Thickness,this->Scale,&this->Space,
                &this->WorldOffset,this->bEnabled,&this->WorkData,
                (FRigVMDebugDrawSettings *)&this->field_0x10);
  return;
}

// RigVMExecute @ 14a53c2e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugTransformArrayMutable::RigVMExecute
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
  ERigUnitDebugTransformMode *pEVar9;
  FLinearColor *pFVar10;
  FRigVMMemoryHandle *pFVar11;
  float *pfVar12;
  FName *pFVar13;
  TTransform<double> *pTVar14;
  uchar *puVar15;
  FRigVMSlice *pFVar16;
  FRigUnit_DebugTransformArrayMutable_WorkData *pFVar17;
  FRigVMDebugDrawSettings *pFVar18;
  FControlRigExecuteContext *pFVar19;
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
    pEVar9 = pFVar11[1].Ptr;
  }
  else {
    pEVar9 = FRigVMPropertyPath::GetData_Internal
                       (pFVar11[1].PropertyPath,pFVar11[1].Ptr,pFVar11[1].Property);
  }
  EVar3 = *pEVar9;
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
    pFVar10 = (FLinearColor *)pFVar11[2].Ptr;
  }
  else {
    pFVar10 = (FLinearColor *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar11[2].PropertyPath,pFVar11[2].Ptr,pFVar11[2].Property);
  }
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar1 = *pfVar12;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar2 = *pfVar12;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar13 = (FName *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pTVar14 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  bVar6 = (bool)*puVar15;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar16 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar17 = (FRigUnit_DebugTransformArrayMutable_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar11,false,pFVar16->Offset + pFVar16->Index);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pFVar18 = (FRigVMDebugDrawSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  local_68[0].DataPtr = *(TTransform<double> **)puVar8;
  local_68[0].ArrayNum = *(int *)(puVar8 + 8);
  if (local_68[0].ArrayNum < 0) {
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
  pFVar19 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar19,local_68,EVar3,pFVar10,fVar1,fVar2,pFVar13,pTVar14,bVar6,pFVar17,pFVar18);
  return;
}

// StaticExecute @ 14a56b500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugTransformArrayMutable::StaticExecute
          (FControlRigExecuteContext *param_1,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,
          ERigUnitDebugTransformMode param_3,FLinearColor *param_4,float param_5,float param_6,
          FName *param_7,TTransform<double> *param_8,bool param_9,
          FRigUnit_DebugTransformArrayMutable_WorkData *param_10,FRigVMDebugDrawSettings *param_11)

{
  int *piVar1;
  FName FVar2;
  URigHierarchy *this;
  code *pcVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TTransform<double> *pTVar16;
  bool bVar17;
  int iVar18;
  TTransform<double> *pTVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  longlong lVar22;
  VectorRegister4Double *pVVar23;
  uint uVar24;
  uint uVar25;
  TTransform<double> *pTVar26;
  double dVar27;
  undefined1 auStackY_248 [32];
  undefined1 local_207 [3];
  uint local_204;
  FLinearColor *local_200;
  undefined4 local_1f8;
  FNameEntryId FStack_1f4;
  uint uStack_1f0;
  TTransform<double> *local_1e8;
  FRigElementKey local_1d8;
  TVector<double>_u_0 local_1c8 [3];
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1e8 = param_8;
  if ((*(longlong *)&param_1->field_0x58 != 0) && (param_9)) {
    iVar18 = (param_10->DrawTransforms).ArrayNum;
    uVar25 = param_2->ArrayNum;
    piVar1 = &(param_10->DrawTransforms).ArrayNum;
    local_200 = param_4;
    if (iVar18 < (int)uVar25) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar25 - iVar18,(ForAnyElementType *)param_10,piVar1,
                 &(param_10->DrawTransforms).ArrayMax);
    }
    else {
      if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
      }
      if ((int)uVar25 < iVar18) {
        uVar24 = iVar18 - uVar25;
        if (((int)(uVar24 | uVar25) < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar24 != 0) {
          pFVar20 = (param_10->DrawTransforms).AllocatorInstance.Data + (longlong)(int)uVar25 * 0x60
          ;
          iVar18 = (*piVar1 - uVar25) - uVar24;
          if (iVar18 != 0) {
            memmove(pFVar20,pFVar20 + (longlong)(int)uVar24 * 0x60,(longlong)iVar18 * 0x60);
          }
          *piVar1 = *piVar1 - uVar24;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,(ForAnyElementType *)param_10,*piVar1,
                     &(param_10->DrawTransforms).ArrayMax);
        }
      }
    }
    FVar2 = *param_7;
    if ((FVar2 == (FName)0x0) || (this = param_1->Hierarchy, this == (URigHierarchy *)0x0)) {
      uVar25 = 0;
      if (0 < param_2->ArrayNum) {
        lVar22 = 0;
        do {
          pTVar19 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_2,uVar25);
          dVar4 = (pTVar19->Rotation).XY.m128d_f64[0];
          dVar27 = (pTVar19->Rotation).XY.m128d_f64[1];
          dVar6 = (pTVar19->Rotation).ZW.m128d_f64[0];
          dVar7 = (pTVar19->Rotation).ZW.m128d_f64[1];
          dVar8 = (pTVar19->Translation).XY.m128d_f64[0];
          dVar9 = (pTVar19->Translation).XY.m128d_f64[1];
          dVar10 = (pTVar19->Translation).ZW.m128d_f64[0];
          dVar11 = (pTVar19->Translation).ZW.m128d_f64[1];
          dVar12 = (pTVar19->Scale3D).XY.m128d_f64[0];
          dVar13 = (pTVar19->Scale3D).XY.m128d_f64[1];
          dVar14 = (pTVar19->Scale3D).ZW.m128d_f64[0];
          dVar15 = (pTVar19->Scale3D).ZW.m128d_f64[1];
          uVar24 = 0;
          if ((int)uVar25 < *piVar1) {
            uVar24 = ~uVar25 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar20 = (param_10->DrawTransforms).AllocatorInstance.Data;
          uVar25 = uVar25 + 1;
          *(double *)(pFVar20 + lVar22) = dVar4;
          *(double *)(pFVar20 + lVar22 + 8) = dVar27;
          *(double *)(pFVar20 + lVar22 + 0x10) = dVar6;
          *(double *)(pFVar20 + lVar22 + 0x10 + 8) = dVar7;
          *(double *)(pFVar20 + lVar22 + 0x20) = dVar8;
          *(double *)(pFVar20 + lVar22 + 0x20 + 8) = dVar9;
          *(double *)(pFVar20 + lVar22 + 0x30) = dVar10;
          *(double *)(pFVar20 + lVar22 + 0x30 + 8) = dVar11;
          *(double *)(pFVar20 + lVar22 + 0x40) = dVar12;
          *(double *)(pFVar20 + lVar22 + 0x40 + 8) = dVar13;
          *(double *)(pFVar20 + lVar22 + 0x50) = dVar14;
          *(double *)(pFVar20 + lVar22 + 0x50 + 8) = dVar15;
          lVar22 = lVar22 + 0x60;
        } while ((int)uVar25 < param_2->ArrayNum);
      }
    }
    else {
      FStack_1f4 = FVar2.ComparisonIndex.Value;
      uStack_1f0 = FVar2.Number;
      local_1f8 = CONCAT31(local_1f8._1_3_,1);
      local_1d8.Name.ComparisonIndex.Value = FStack_1f4.Value;
      local_1d8._0_4_ = local_1f8;
      local_1d8.Name.Number = uStack_1f0;
      iVar18 = URigHierarchy::GetIndex(this,&local_1d8,true);
      URigHierarchy::GetGlobalTransformByIndex(this,&local_118,iVar18,false);
      uVar25 = 0;
      if (0 < param_2->ArrayNum) {
        lVar22 = 0;
        do {
          pTVar19 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_2,uVar25);
          local_178.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_178.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_178.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_178.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_178.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_178.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_178.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_178.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_178.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_178.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_178.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_178.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_178.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_178,pTVar19,&local_118);
          dVar4 = local_178.Rotation.XY.m128d_f64[0];
          dVar27 = local_178.Rotation.XY.m128d_f64[1];
          dVar6 = local_178.Rotation.ZW.m128d_f64[0];
          dVar7 = local_178.Rotation.ZW.m128d_f64[1];
          dVar8 = local_178.Translation.XY.m128d_f64[0];
          dVar9 = local_178.Translation.XY.m128d_f64[1];
          dVar10 = local_178.Translation.ZW.m128d_f64[0];
          dVar11 = local_178.Translation.ZW.m128d_f64[1];
          dVar12 = local_178.Scale3D.XY.m128d_f64[0];
          dVar13 = local_178.Scale3D.XY.m128d_f64[1];
          dVar14 = local_178.Scale3D.ZW.m128d_f64[0];
          dVar15 = local_178.Scale3D.ZW.m128d_f64[1];
          uVar24 = 0;
          if ((int)uVar25 < *piVar1) {
            uVar24 = ~uVar25 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar20 = (param_10->DrawTransforms).AllocatorInstance.Data;
          uVar25 = uVar25 + 1;
          *(double *)(pFVar20 + lVar22) = dVar4;
          *(double *)(pFVar20 + lVar22 + 8) = dVar27;
          *(double *)(pFVar20 + lVar22 + 0x10) = dVar6;
          *(double *)(pFVar20 + lVar22 + 0x10 + 8) = dVar7;
          *(double *)(pFVar20 + lVar22 + 0x20) = dVar8;
          *(double *)(pFVar20 + lVar22 + 0x20 + 8) = dVar9;
          *(double *)(pFVar20 + lVar22 + 0x30) = dVar10;
          *(double *)(pFVar20 + lVar22 + 0x30 + 8) = dVar11;
          *(double *)(pFVar20 + lVar22 + 0x40) = dVar12;
          *(double *)(pFVar20 + lVar22 + 0x40 + 8) = dVar13;
          *(double *)(pFVar20 + lVar22 + 0x50) = dVar14;
          *(double *)(pFVar20 + lVar22 + 0x50 + 8) = dVar15;
          lVar22 = lVar22 + 0x60;
        } while ((int)uVar25 < param_2->ArrayNum);
      }
    }
    pTVar16 = local_1e8;
    pTVar19 = (TTransform<double> *)(param_10->DrawTransforms).AllocatorInstance.Data;
    local_204 = *piVar1;
    uVar21 = (ulonglong)(int)local_204;
    pVVar23 = &pTVar19->Scale3D;
    pTVar26 = pTVar19 + uVar21;
    while( true ) {
      if (*piVar1 != (int)uVar21) {
        `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_207);
      }
      if (pTVar19 == pTVar26) break;
      if (param_3 == Point) {
        local_1c8[0]._0_8_ = pVVar23[-1].XY.m128d_f64[0];
        local_1c8[0]._8_8_ = pVVar23[-1].XY.m128d_f64[1];
        local_1c8[0]._16_8_ = pVVar23[-1].ZW.m128d_f64[0];
        FRigVMDrawInterface::DrawPoint
                  (*(FRigVMDrawInterface **)&param_1->field_0x58,pTVar16,
                   (TVector<double> *)&local_1c8[0]._s_0,param_6,local_200,
                   (uint)(param_11->DepthPriority).Value,param_11->Lifetime);
LAB_14a56ba43:
        uVar21 = (ulonglong)local_204;
        pTVar19 = pTVar19 + 1;
        pVVar23 = pVVar23 + 3;
      }
      else if (param_3 == Axes) {
        FRigVMDrawInterface::DrawAxes
                  (*(FRigVMDrawInterface **)&param_1->field_0x58,pTVar16,pTVar19,param_6,param_5,
                   (uint)(param_11->DepthPriority).Value,param_11->Lifetime);
        uVar21 = (ulonglong)local_204;
        pTVar19 = pTVar19 + 1;
        pVVar23 = pVVar23 + 3;
      }
      else {
        if (param_3 != Box) goto LAB_14a56ba43;
        dVar4 = (double)param_6;
        dVar27 = dVar4 * (pVVar23->XY).m128d_f64[1];
        auVar5._8_4_ = SUB84(dVar27,0);
        auVar5._0_8_ = dVar4 * (pVVar23->XY).m128d_f64[0];
        auVar5._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        *(undefined1 (*) [16])(pVVar23->XY).m128d_f64 = auVar5;
        (pVVar23->ZW).m128d_f64[0] = dVar4 * (pVVar23->ZW).m128d_f64[0];
        (pVVar23->ZW).m128d_f64[1] = 0.0;
        FRigVMDrawInterface::DrawBox
                  (*(FRigVMDrawInterface **)&param_1->field_0x58,pTVar16,pTVar19,local_200,param_5,
                   (uint)(param_11->DepthPriority).Value,param_11->Lifetime);
        uVar21 = (ulonglong)local_204;
        pTVar19 = pTVar19 + 1;
        pVVar23 = pVVar23 + 3;
      }
    }
  }
  return;
}

