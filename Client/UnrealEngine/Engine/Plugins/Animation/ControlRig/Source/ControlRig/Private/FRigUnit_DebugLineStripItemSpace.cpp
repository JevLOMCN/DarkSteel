// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a47a920

UScriptStruct * __cdecl FRigUnit_DebugLineStripItemSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineStripItemSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineStripItemSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace,
                         (UObject *)pUVar1,L"RigUnit_DebugLineStripItemSpace");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineStripItemSpace.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineStripItemSpace.OuterSingleton;
}

// GetExecuteContextStruct @ 14a47a9a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_DebugLineStripItemSpace::GetExecuteContextStruct(FRigUnit_DebugLineStripItemSpace *this)

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

// Execute @ 14a47b200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_DebugLineStripItemSpace::Execute(FRigUnit_DebugLineStripItemSpace *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2b8 [32];
  TArrayView<UE::Math::TVector<double>_const_,int> local_278;
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
  local_278.DataPtr = (TVector<double> *)(this->Points).AllocatorInstance.Data;
  iVar1 = (this->Points).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->Color,this->Thickness,
                &this->Space,&this->WorldOffset,this->bEnabled,
                (FRigVMDebugDrawSettings *)&this->field_0x10);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a47b5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_DebugLineStripItemSpace::GetUpgradeInfo
          (FRigUnit_DebugLineStripItemSpace *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UPackage *pUVar2;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar3;
  undefined1 auStackY_138 [32];
  TArrayView<FRigVMCompiledInFunction_const_,int> local_f8;
  FRigVMStruct local_e8;
  undefined **local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  FLinearColor_u_0 local_c0;
  float local_b0;
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  undefined1 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_c0 = FLinearColor::Red.field0_0x0;
  local_e0 = &___7FRigVMExecutePin__6B_;
  local_98 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_a8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_e8 = (FRigVMStruct)&___7FRigVMFunction_DebugLineStripNoSpace__6B_;
  local_78 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_88 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_58 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_d8 = 1;
  local_d4 = 0xbf800000;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_b0 = 0.0;
  local_68 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_48 = 1;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&local_d0 != &this->Points) {
    uVar1 = (this->Points).ArrayNum;
    _Src = (this->Points).AllocatorInstance.Data;
    local_c8 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar1,0,&local_d0,uVar1,(int *)((longlong)&local_c8 + 4));
      memcpy(local_d0.Data,_Src,(longlong)(int)uVar1 * 0x18);
    }
  }
  local_c0 = (this->Color).field0_0x0;
  local_48 = this->bEnabled;
  local_b0 = this->Thickness;
  local_a8 = *&(this->WorldOffset).Rotation.XY.m128d_f64;
  local_98 = *&(this->WorldOffset).Rotation.ZW.m128d_f64;
  local_88 = *&(this->WorldOffset).Translation.XY.m128d_f64;
  local_78 = *&(this->WorldOffset).Translation.ZW.m128d_f64;
  local_68 = *&(this->WorldOffset).Scale3D.XY.m128d_f64;
  local_58 = *&(this->WorldOffset).Scale3D.ZW.m128d_f64;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineStripItemSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineStripItemSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace,
                         (UObject *)pUVar2,L"RigUnit_DebugLineStripItemSpace");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_f8.ArrayNum = 1;
    local_f8.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineStripItemSpace.
                       OuterSingleton,&local_f8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_DebugLineStripItemSpace.OuterSingleton;
  pUVar3 = FRigVMFunction_DebugLineStripNoSpace::StaticStruct();
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  __return_storage_ptr__->NewStruct = pUVar3;
  local_f8.DataPtr = (FRigVMCompiledInFunction *)0x0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_e8);
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  return __return_storage_ptr__;
}

// FRigUnit_DebugLineStripItemSpace @ 14a50e330

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_DebugLineStripItemSpace * __thiscall
FRigUnit_DebugLineStripItemSpace::FRigUnit_DebugLineStripItemSpace
          (FRigUnit_DebugLineStripItemSpace *this)

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
  *(undefined ***)this = &___7FRigUnit_DebugLineStripItemSpace__6B_;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
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
  FVar10 = FLinearColor::Red;
  this->Thickness = 0.0;
  uVar9 = (ulonglong)local_18;
  (this->Space).Type = (char)uVar9;
  *(int3 *)&(this->Space).field_0x1 = (int3)(uVar9 >> 8);
  (this->Space).Name.ComparisonIndex = (FNameEntryId)(int)(uVar9 >> 0x20);
  (this->Space).Name.Number = 0;
  (this->Color).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar10.field0_0x0;
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

// Execute @ 14a526840

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DebugLineStripItemSpace::Execute
          (FRigUnit_DebugLineStripItemSpace *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TVector<double>_const_,int> local_18;
  
  local_18.DataPtr = (TVector<double> *)(this->Points).AllocatorInstance.Data;
  iVar1 = (this->Points).ArrayNum;
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
  StaticExecute(param_1,&local_18,&this->Color,this->Thickness,&this->Space,&this->WorldOffset,
                this->bEnabled,(FRigVMDebugDrawSettings *)&this->field_0x10);
  return;
}

// RigVMExecute @ 14a53b6b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugLineStripItemSpace::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uchar *puVar6;
  FLinearColor *pFVar7;
  float *pfVar8;
  FRigVMMemoryHandle *pFVar9;
  FRigElementKey *pFVar10;
  TTransform<double> *pTVar11;
  uchar *puVar12;
  FRigVMDebugDrawSettings *pFVar13;
  FControlRigExecuteContext *pFVar14;
  TArrayView<UE::Math::TVector<double>_const_,int> local_48 [2];
  
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
    puVar6 = pFVar9->Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FLinearColor *)pFVar9[1].Ptr;
  }
  else {
    pFVar7 = (FLinearColor *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
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
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar8 = (float *)pFVar9[2].Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  fVar1 = *pfVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar10 = (FRigElementKey *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar11 = (TTransform<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar4 = (bool)*puVar12;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar13 = (FRigVMDebugDrawSettings *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  local_48[0].DataPtr = *(TVector<double> **)puVar6;
  local_48[0].ArrayNum = *(int *)(puVar6 + 8);
  if (local_48[0].ArrayNum < 0) {
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
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar14,local_48,pFVar7,fVar1,pFVar10,pTVar11,bVar4,pFVar13);
  return;
}

// StaticExecute @ 14a56aaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DebugLineStripItemSpace::StaticExecute
          (FControlRigExecuteContext *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2,FLinearColor *param_3,
          float param_4,FRigElementKey *param_5,TTransform<double> *param_6,bool param_7,
          FRigVMDebugDrawSettings *param_8)

{
  TVector<double> *pTVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  URigHierarchy *this;
  FRigVMDrawInterface *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  TVector<double> *pTVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStackY_1d8 [32];
  ForAnyElementType local_188;
  int local_180;
  int iStack_17c;
  undefined1 local_178 [16];
  double local_168;
  FRigElementKey local_158;
  TArrayView<UE::Math::TVector<double>_const_,int> local_148;
  TArrayView<UE::Math::TVector<double>_const_,int> local_138;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((*(longlong *)&param_1->field_0x58 != 0) && (param_7)) {
    bVar14 = ::FName::IsWithinBounds((FNameEntryId)(param_5->Name).ComparisonIndex.Value);
    if ((bVar14) && ((param_5->Name != (FName)0x0 && (param_5->Type != None)))) {
      this = param_1->Hierarchy;
      local_158.Type = param_5->Type;
      local_158._1_3_ = *(undefined3 *)&param_5->field_0x1;
      local_158.Name.ComparisonIndex.Value = (param_5->Name).ComparisonIndex.Value;
      local_158.Name.Number = (param_5->Name).Number;
      iVar15 = URigHierarchy::GetIndex(this,&local_158,true);
      URigHierarchy::GetGlobalTransformByIndex(this,&local_128,iVar15,false);
      uVar4 = param_2->ArrayNum;
      local_188.Data = (FScriptContainerElement *)0x0;
      local_180 = 0;
      iStack_17c = 0;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      if (0 < (int)uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar4,&local_188,0,&iStack_17c);
      }
      pTVar16 = param_2->DataPtr;
      pTVar1 = pTVar16 + param_2->ArrayNum;
      iVar15 = local_180;
      for (; local_180 = iVar15, pTVar16 != pTVar1; pTVar16 = pTVar16 + 1) {
        dVar24 = local_128.Rotation.XY.m128d_f64[1];
        dVar8 = local_128.Rotation.ZW.m128d_f64[0];
        dVar9 = local_128.Rotation.ZW.m128d_f64[1];
        dVar10 = (pTVar16->field0_0x0)._s_0.X * local_128.Scale3D.XY.m128d_f64[0];
        dVar11 = (pTVar16->field0_0x0)._s_0.Y * local_128.Scale3D.XY.m128d_f64[1];
        uVar23 = (undefined4)((ulonglong)dVar11 >> 0x20);
        dVar12 = (pTVar16->field0_0x0)._s_0.Z * local_128.Scale3D.ZW.m128d_f64[0];
        dVar13 = local_128.Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar26._8_4_ = SUB84(dVar11,0);
        auVar26._0_8_ = dVar10;
        auVar26._12_4_ = uVar23;
        auVar25._8_4_ = SUB84(dVar11,0);
        auVar25._0_8_ = dVar10;
        auVar25._12_4_ = uVar23;
        auVar17._8_4_ = SUB84(dVar13,0);
        auVar17._0_8_ = dVar12;
        auVar17._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        auVar17 = blendpd(auVar25,auVar17,2);
        auVar27._0_8_ = auVar26._8_8_ * local_128.Rotation.XY.m128d_f64[0] - dVar24 * dVar10;
        auVar27._8_8_ = dVar12 * dVar24 - dVar8 * dVar11;
        auVar25 = blendpd((undefined1  [16])local_128.Rotation.XY.m128d_f64,
                          (undefined1  [16])local_128.Rotation.ZW.m128d_f64,2);
        auVar18._0_8_ = auVar17._0_8_ * dVar8 - auVar25._0_8_ * dVar12;
        auVar18._8_8_ = auVar17._8_8_ * dVar9 - auVar25._8_8_ * dVar13;
        auVar17 = blendpd(auVar27,auVar18,2);
        dVar13 = auVar27._8_8_ + auVar27._8_8_;
        dVar7 = auVar18._0_8_ + auVar18._0_8_;
        uVar23 = (undefined4)((ulonglong)dVar7 >> 0x20);
        auVar28._0_8_ = auVar17._0_8_ + auVar17._0_8_;
        auVar28._8_8_ = auVar17._8_8_ + auVar17._8_8_;
        auVar21._8_4_ = SUB84(dVar7,0);
        auVar21._0_8_ = dVar13;
        auVar21._12_4_ = uVar23;
        auVar19._8_4_ = SUB84(dVar7,0);
        auVar19._0_8_ = dVar13;
        auVar19._12_4_ = uVar23;
        auVar17 = blendpd(auVar19,auVar28,2);
        auVar22._0_8_ = auVar21._8_8_ * local_128.Rotation.XY.m128d_f64[0] - dVar13 * dVar24;
        auVar22._8_8_ = auVar28._0_8_ * dVar24 - dVar7 * dVar8;
        auVar20._0_8_ = auVar17._0_8_ * dVar8 - auVar28._0_8_ * auVar25._0_8_;
        auVar20._8_8_ = auVar17._8_8_ * dVar9 - auVar28._8_8_ * auVar25._8_8_;
        auVar17 = blendpd(auVar22,auVar20,2);
        dVar7 = dVar7 * dVar9 + dVar11 + auVar20._0_8_ + local_128.Translation.XY.m128d_f64[1];
        local_168 = auVar28._0_8_ * dVar9 + dVar12 + auVar17._0_8_ +
                    local_128.Translation.ZW.m128d_f64[0];
        local_178._8_4_ = SUB84(dVar7,0);
        local_178._0_8_ =
             dVar13 * dVar9 + dVar10 + auVar22._8_8_ + local_128.Translation.XY.m128d_f64[0];
        local_178._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        if (((local_188.Data <= (FScriptContainerElement *)local_178) &&
            ((FScriptContainerElement *)local_178 < local_188.Data + (longlong)iStack_17c * 0x18))
           && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar14)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_180 == iStack_17c) {
          local_180 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_188,&iStack_17c);
        }
        iVar15 = local_180 + 1;
        *(undefined8 *)(local_188.Data + (longlong)local_180 * 0x18) = local_178._0_8_;
        *(undefined8 *)(local_188.Data + (longlong)local_180 * 0x18 + 8) = local_178._8_8_;
        *(double *)(local_188.Data + (longlong)local_180 * 0x18 + 0x10) = local_168;
      }
      pFVar5 = *(FRigVMDrawInterface **)&param_1->field_0x58;
      fVar2 = param_8->Lifetime;
      bVar3 = (param_8->DepthPriority).Value;
      local_148.DataPtr = (TVector<double> *)local_188.Data;
      if ((iVar15 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_148.ArrayNum = iVar15;
      FRigVMDrawInterface::DrawLineStrip
                (pFVar5,param_6,&local_148,param_3,param_4,(uint)bVar3,fVar2);
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
    }
    else {
      local_138.DataPtr = param_2->DataPtr;
      pFVar5 = *(FRigVMDrawInterface **)&param_1->field_0x58;
      fVar2 = param_8->Lifetime;
      bVar3 = (param_8->DepthPriority).Value;
      local_138.ArrayNum = param_2->ArrayNum;
      if ((local_138.ArrayNum < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FRigVMDrawInterface::DrawLineStrip
                (pFVar5,param_6,&local_138,param_3,param_4,(uint)bVar3,fVar2);
    }
  }
  return;
}

