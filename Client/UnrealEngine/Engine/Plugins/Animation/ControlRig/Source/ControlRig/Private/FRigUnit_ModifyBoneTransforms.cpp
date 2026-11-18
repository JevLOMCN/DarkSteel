// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4ec920

UScriptStruct * __cdecl FRigUnit_ModifyBoneTransforms::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ModifyBoneTransforms.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ModifyBoneTransforms.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms,(UObject *)pUVar1,
                         L"RigUnit_ModifyBoneTransforms");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ModifyBoneTransforms.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ModifyBoneTransforms.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4ec9b0

UScriptStruct * __thiscall
FRigUnit_ModifyBoneTransforms::GetExecuteContextStruct(FRigUnit_ModifyBoneTransforms *this)

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

// Execute @ 14a4ecc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ModifyBoneTransforms::Execute(FRigUnit_ModifyBoneTransforms *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2b8 [32];
  TArrayView<FRigUnit_ModifyBoneTransforms_PerBone_const_,int> local_278;
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
  local_278.DataPtr =
       (FRigUnit_ModifyBoneTransforms_PerBone *)(this->BoneToModify).AllocatorInstance.Data;
  iVar1 = (this->BoneToModify).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,this->Weight,this->WeightMinimum,
                this->WeightMaximum,this->Mode,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4f98d0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_ModifyBoneTransforms::GetUpgradeInfo
          (FRigUnit_ModifyBoneTransforms *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FRigUnit_ModifyBoneTransforms @ 14a512830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigUnit_ModifyBoneTransforms * __thiscall
FRigUnit_ModifyBoneTransforms::FRigUnit_ModifyBoneTransforms(FRigUnit_ModifyBoneTransforms *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar21;
  longlong lVar22;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_108;
  this->Weight = 1.0;
  this->WeightMinimum = 0.0;
  piVar1 = &(this->BoneToModify).ArrayMax;
  this->WeightMaximum = 1.0;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->Mode = AdditiveLocal;
  this->_padding_ = (longlong)&___7FRigUnit_ModifyBoneTransforms__6B_;
  (this->BoneToModify).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneToModify).ArrayNum = 0;
  *(undefined8 *)&this->WorkData = 0;
  *(undefined8 *)&(this->WorkData).field_0x8 = 0;
  *piVar1 = 0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar13 = GlobalVectorConstants::FloatZero.m128_f32[3];
  local_e8 = 0;
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float1110.m128_f32[3];
  iVar21 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x1070,&(this->BoneToModify).AllocatorInstance,piVar1);
  lVar22 = (longlong)iVar21 * 0x70;
  pFVar2 = (this->BoneToModify).AllocatorInstance.Data;
  (this->BoneToModify).ArrayNum = iVar21 + 1;
  *(undefined8 *)(pFVar2 + lVar22) = local_e8;
  *(undefined8 *)(pFVar2 + lVar22 + 8) = uStack_e0;
  auVar20._8_4_ = SUB84((double)fVar6,0);
  auVar20._0_8_ = (double)fVar3;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(pFVar2 + lVar22 + 0x10) = auVar20;
  auVar17._8_4_ = SUB84((double)fVar12,0);
  auVar17._0_8_ = (double)fVar9;
  auVar17._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  *(undefined1 (*) [16])(pFVar2 + lVar22 + 0x20) = auVar17;
  auVar19._8_4_ = SUB84((double)fVar7,0);
  auVar19._0_8_ = (double)fVar4;
  auVar19._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  *(undefined1 (*) [16])(pFVar2 + lVar22 + 0x30) = auVar19;
  auVar16._8_4_ = SUB84((double)fVar13,0);
  auVar16._0_8_ = (double)fVar10;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  *(undefined1 (*) [16])(pFVar2 + lVar22 + 0x40) = auVar16;
  auVar18._8_4_ = SUB84((double)fVar8,0);
  auVar18._0_8_ = (double)fVar5;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  *(undefined1 (*) [16])(pFVar2 + lVar22 + 0x50) = auVar18;
  auVar15._8_4_ = SUB84((double)fVar14,0);
  auVar15._0_8_ = (double)fVar11;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  *(undefined1 (*) [16])(pFVar2 + lVar22 + 0x60) = auVar15;
  return this;
}

// Execute @ 14a52abf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ModifyBoneTransforms::Execute
          (FRigUnit_ModifyBoneTransforms *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigUnit_ModifyBoneTransforms_PerBone_const_,int> local_18;
  
  local_18.DataPtr =
       (FRigUnit_ModifyBoneTransforms_PerBone *)(this->BoneToModify).AllocatorInstance.Data;
  iVar1 = (this->BoneToModify).ArrayNum;
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
  StaticExecute(param_1,&local_18,this->Weight,this->WeightMinimum,this->WeightMaximum,this->Mode,
                &this->WorkData);
  return;
}

// RigVMExecute @ 14a54b080

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ModifyBoneTransforms::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  EControlRigModifyBoneMode EVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uchar *puVar8;
  float *pfVar9;
  FRigVMMemoryHandle *pFVar10;
  EControlRigModifyBoneMode *pEVar11;
  FRigVMSlice *pFVar12;
  FRigUnit_ModifyBoneTransforms_WorkData *pFVar13;
  FControlRigExecuteContext *pFVar14;
  TArrayView<FRigUnit_ModifyBoneTransforms_PerBone_const_,int> local_48 [4];
  
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar10->Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar9 = (float *)pFVar10[1].Ptr;
  }
  else {
    pfVar9 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
  fVar1 = *pfVar9;
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar9 = (float *)pFVar10[2].Ptr;
  }
  else {
    pfVar9 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  fVar2 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar3 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pEVar11 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  EVar4 = *pEVar11;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FRigUnit_ModifyBoneTransforms_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar12->Offset + pFVar12->Index);
  local_48[0].DataPtr = *(FRigUnit_ModifyBoneTransforms_PerBone **)puVar8;
  local_48[0].ArrayNum = *(int *)(puVar8 + 8);
  if (local_48[0].ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar14 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar14,local_48,fVar1,fVar2,fVar3,EVar4,pFVar13);
  return;
}

// StaticExecute @ 14a583580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ModifyBoneTransforms::StaticExecute
          (FControlRigExecuteContext *param_1,
          TArrayView<FRigUnit_ModifyBoneTransforms_PerBone_const_,int> *param_2,float param_3,
          float param_4,float param_5,EControlRigModifyBoneMode param_6,
          FRigUnit_ModifyBoneTransforms_WorkData *param_7)

{
  uchar *puVar1;
  undefined8 uVar2;
  FRigUnit_ModifyBoneTransforms_PerBone *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<FRigUnit_ModifyTransforms_PerItem> FVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_348 [32];
  uchar local_2ef [2];
  uchar local_2ed;
  TArrayView<FRigUnit_ModifyTransforms_PerItem_const_,int> local_2e0;
  uchar local_2c8;
  uchar auStack_2c7 [2];
  uchar uStack_2c5;
  uchar auStack_2c4 [12];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  ForElementType<FRigUnit_ModifyTransforms_PerItem> local_258;
  int local_88;
  int local_84 [3];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_348;
  uVar10 = 0;
  iVar8 = param_2->ArrayNum;
  local_258.SecondaryData = (ForElementType<FRigUnit_ModifyTransforms_PerItem>)0x0;
  local_88 = 0;
  local_84[0] = 4;
  if (0 < iVar8) {
    lVar11 = 0;
    do {
      local_2c8 = '\x01';
      auStack_2c4[0] = '\0';
      auStack_2c4[1] = '\0';
      auStack_2c4[2] = '\0';
      auStack_2c4[3] = '\0';
      auStack_2c4[4] = '\0';
      auStack_2c4[5] = '\0';
      auStack_2c4[6] = '\0';
      auStack_2c4[7] = '\0';
      uVar6 = 0;
      if ((int)uVar10 < iVar8) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      local_2b8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_2b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2b8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_2a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_2a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2a8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_298._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_298._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_298._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_288._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_288._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_288._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_278._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_278._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_278._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_268._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_268._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_268._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = *(undefined8 *)((longlong)(&(param_2->DataPtr->Transform).Rotation.XY + -1) + lVar11);
      auStack_2c7 = local_2ef;
      auStack_2c4._0_4_ = (undefined4)uVar2;
      auStack_2c4._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_2c5 = local_2ed;
      local_2c8 = '\x01';
      uVar6 = 0;
      if ((int)uVar10 < param_2->ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = param_2->DataPtr;
      local_2b8 = *(undefined1 (*) [16])
                   ((longlong)(pFVar3->Transform).Rotation.XY.m128d_f64 + lVar11);
      local_2a8 = *(undefined1 (*) [16])
                   ((longlong)(pFVar3->Transform).Rotation.ZW.m128d_f64 + lVar11);
      local_298 = *(undefined1 (*) [16])
                   ((longlong)(pFVar3->Transform).Translation.XY.m128d_f64 + lVar11);
      local_288 = *(undefined1 (*) [16])
                   ((longlong)(pFVar3->Transform).Translation.ZW.m128d_f64 + lVar11);
      local_278 = *(undefined1 (*) [16])
                   ((longlong)(pFVar3->Transform).Scale3D.XY.m128d_f64 + lVar11);
      local_268 = *(undefined1 (*) [16])
                   ((longlong)(pFVar3->Transform).Scale3D.ZW.m128d_f64 + lVar11);
      FVar7 = (ForElementType<FRigUnit_ModifyTransforms_PerItem>)&local_258;
      if (local_258.SecondaryData != (ForElementType<FRigUnit_ModifyTransforms_PerItem>)0x0) {
        FVar7 = local_258.SecondaryData;
      }
      if ((ulonglong)FVar7 <= &local_2c8) {
        FVar7 = (ForElementType<FRigUnit_ModifyTransforms_PerItem>)&local_258;
        if (local_258.SecondaryData != (ForElementType<FRigUnit_ModifyTransforms_PerItem>)0x0) {
          FVar7 = local_258.SecondaryData;
        }
        if ((&local_2c8 < (uchar *)((longlong)local_84[0] * 0x70 + (longlong)FVar7)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_88 == local_84[0]) {
        local_88 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigUnit_ModifyTransforms_PerItem>_>
                             (0x1070,&local_258,local_84);
      }
      lVar9 = (longlong)local_88;
      FVar7 = (ForElementType<FRigUnit_ModifyTransforms_PerItem>)&local_258;
      if (local_258.SecondaryData != (ForElementType<FRigUnit_ModifyTransforms_PerItem>)0x0) {
        FVar7 = local_258.SecondaryData;
      }
      uVar10 = uVar10 + 1;
      local_88 = local_88 + 1;
      lVar11 = lVar11 + 0x70;
      lVar9 = lVar9 * 0x70;
      *(ulonglong *)(lVar9 + (longlong)FVar7) =
           CONCAT44(auStack_2c4._0_4_,CONCAT13(uStack_2c5,CONCAT21(auStack_2c7,local_2c8)));
      *(ulonglong *)((uchar *)(lVar9 + (longlong)FVar7) + 8) =
           CONCAT44(auStack_2c4._8_4_,auStack_2c4._4_4_);
      puVar1 = (uchar *)(lVar9 + 0x10 + (longlong)FVar7);
      *(undefined8 *)puVar1 = local_2b8._0_8_;
      *(undefined8 *)(puVar1 + 8) = local_2b8._8_8_;
      puVar1 = (uchar *)(lVar9 + 0x20 + (longlong)FVar7);
      *(undefined8 *)puVar1 = local_2a8._0_8_;
      *(undefined8 *)(puVar1 + 8) = local_2a8._8_8_;
      puVar1 = (uchar *)(lVar9 + 0x30 + (longlong)FVar7);
      *(undefined8 *)puVar1 = local_298._0_8_;
      *(undefined8 *)(puVar1 + 8) = local_298._8_8_;
      puVar1 = (uchar *)(lVar9 + 0x40 + (longlong)FVar7);
      *(undefined8 *)puVar1 = local_288._0_8_;
      *(undefined8 *)(puVar1 + 8) = local_288._8_8_;
      puVar1 = (uchar *)(lVar9 + 0x50 + (longlong)FVar7);
      *(undefined8 *)puVar1 = local_278._0_8_;
      *(undefined8 *)(puVar1 + 8) = local_278._8_8_;
      puVar1 = (uchar *)(lVar9 + 0x60 + (longlong)FVar7);
      *(undefined8 *)puVar1 = local_268._0_8_;
      *(undefined8 *)(puVar1 + 8) = local_268._8_8_;
      iVar8 = param_2->ArrayNum;
    } while ((int)uVar10 < iVar8);
  }
  iVar8 = local_88;
  local_2e0.DataPtr = (FRigUnit_ModifyTransforms_PerItem *)&local_258;
  if (local_258.SecondaryData != (ForElementType<FRigUnit_ModifyTransforms_PerItem>)0x0) {
    local_2e0.DataPtr = (FRigUnit_ModifyTransforms_PerItem *)local_258.SecondaryData;
  }
  if ((local_88 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_2e0.ArrayNum = iVar8;
  FRigUnit_ModifyTransforms::StaticExecute
            (param_1,&local_2e0,param_3,param_4,param_5,param_6,
             (FRigUnit_ModifyTransforms_WorkData *)param_7);
  if (local_258.SecondaryData != (ForElementType<FRigUnit_ModifyTransforms_PerItem>)0x0) {
    FMemory::Free((void *)local_258.SecondaryData);
  }
  return;
}

