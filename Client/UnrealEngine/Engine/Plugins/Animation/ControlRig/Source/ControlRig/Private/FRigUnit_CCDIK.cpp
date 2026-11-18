// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a47f5f0

UScriptStruct * __cdecl FRigUnit_CCDIK::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CCDIK.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CCDIK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIK,(UObject *)pUVar1,L"RigUnit_CCDIK"
                        );
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_CCDIK_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CCDIK.OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CCDIK.OuterSingleton;
}

// GetExecuteContextStruct @ 14a47f820

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigUnit_CCDIK::GetExecuteContextStruct(FRigUnit_CCDIK *this)

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

// Execute @ 14a47f8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CCDIK::Execute(FRigUnit_CCDIK *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2d8 [32];
  TArrayView<FRigUnit_CCDIK_RotationLimit_const_,int> local_278;
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
  local_278.DataPtr = (FRigUnit_CCDIK_RotationLimit *)(this->RotationLimits).AllocatorInstance.Data;
  iVar1 = (this->RotationLimits).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->StartBone,&this->EffectorBone,
                &this->EffectorTransform,this->Precision,this->Weight,this->MaxIterations,
                this->bStartFromTail,this->BaseRotationLimit,&local_278,this->bPropagateToChildren,
                &this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a48aec0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_CCDIK::GetUpgradeInfo(FRigUnit_CCDIK *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FRigUnit_CCDIK @ 14a50c560

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_CCDIK * __thiscall FRigUnit_CCDIK::FRigUnit_CCDIK(FRigUnit_CCDIK *this)

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
  uint local_28;
  undefined2 uStack_1a;
  undefined4 uStack_14;
  
  (this->StartBone).ComparisonIndex = 0;
  (this->StartBone).Number = 0;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  (this->EffectorBone).ComparisonIndex = 0;
  (this->EffectorBone).Number = 0;
  this->_padding_ = (longlong)&___7FRigUnit_CCDIK__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_28 = local_28 & 0xffffff00;
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->EffectorTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->EffectorTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->EffectorTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->EffectorTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->EffectorTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->EffectorTransform).Scale3D.ZW.m128d_f64 = auVar8;
  uVar9 = (ulonglong)local_28;
  (this->RotationLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RotationLimits).ArrayNum = 0;
  (this->RotationLimits).ArrayMax = 0;
  (this->WorkData).Chain.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Chain.ArrayNum = 0;
  (this->WorkData).Chain.ArrayMax = 0;
  (this->WorkData).CachedItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).CachedItems.ArrayNum = 0;
  (this->WorkData).CachedItems.ArrayMax = 0;
  (this->WorkData).RotationLimitIndex.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).RotationLimitIndex.ArrayNum = 0;
  (this->WorkData).RotationLimitIndex.ArrayMax = 0;
  (this->WorkData).RotationLimitsPerItem.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).RotationLimitsPerItem.ArrayNum = 0;
  (this->WorkData).RotationLimitsPerItem.ArrayMax = 0;
  (this->WorkData).CachedEffector.Key.Type = (char)uVar9;
  *(int3 *)&(this->WorkData).CachedEffector.Key.field_0x1 = (int3)(uVar9 >> 8);
  (this->WorkData).CachedEffector.Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar9 >> 0x20);
  *(ulonglong *)&(this->WorkData).CachedEffector.Key.Name.Number =
       CONCAT26(uStack_1a,0xffff00000000);
  *(ulonglong *)&(this->WorkData).CachedEffector.ContainerVersion = CONCAT44(uStack_14,0xffffffff);
  (this->WorkData).CachedEffector.Element = (FRigBaseElement *)0x0;
  *&(this->EffectorTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->EffectorTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->EffectorTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->EffectorTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->EffectorTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->EffectorTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->Precision = 1.0;
  this->Weight = 1.0;
  this->MaxIterations = 10;
  this->bStartFromTail = true;
  this->bPropagateToChildren = true;
  this->BaseRotationLimit = 30.0;
  return this;
}

// ~FRigUnit_CCDIK @ 14a5180e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CCDIK::~FRigUnit_CCDIK(FRigUnit_CCDIK *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->WorkData).RotationLimitsPerItem.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).RotationLimitIndex.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).CachedItems.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FCCDIKChainLink,int>
            ((FCCDIKChainLink *)(this->WorkData).Chain.AllocatorInstance.Data,
             (this->WorkData).Chain.ArrayNum);
  pFVar1 = (this->WorkData).Chain.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RotationLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14a524a30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CCDIK::Execute(FRigUnit_CCDIK *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigUnit_CCDIK_RotationLimit_const_,int> local_18;
  
  local_18.DataPtr = (FRigUnit_CCDIK_RotationLimit *)(this->RotationLimits).AllocatorInstance.Data;
  iVar1 = (this->RotationLimits).ArrayNum;
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
  StaticExecute(param_1,&this->StartBone,&this->EffectorBone,&this->EffectorTransform,
                this->Precision,this->Weight,this->MaxIterations,this->bStartFromTail,
                this->BaseRotationLimit,&local_18,this->bPropagateToChildren,&this->WorkData);
  return;
}

// RigVMExecute @ 14a535fa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CCDIK::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FName *pFVar10;
  TTransform<double> *pTVar11;
  FRigVMMemoryHandle *pFVar12;
  float *pfVar13;
  int *piVar14;
  uchar *puVar15;
  uchar *puVar16;
  FRigVMSlice *pFVar17;
  FRigUnit_CCDIK_WorkData *pFVar18;
  FControlRigExecuteContext *pFVar19;
  TArrayView<FRigUnit_CCDIK_RotationLimit_const_,int> local_78 [4];
  
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
    pFVar9 = (FName *)pFVar12->Ptr;
  }
  else {
    pFVar9 = (FName *)FRigVMPropertyPath::GetData_Internal
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
    pFVar10 = (FName *)pFVar12[1].Ptr;
  }
  else {
    pFVar10 = (FName *)FRigVMPropertyPath::GetData_Internal
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
    pTVar11 = (TTransform<double> *)pFVar12[2].Ptr;
  }
  else {
    pTVar11 = (TTransform<double> *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar12[2].PropertyPath,pFVar12[2].Ptr,pFVar12[2].Property);
  }
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar1 = *pfVar13;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar2 = *pfVar13;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  piVar14 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  iVar5 = *piVar14;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  bVar7 = (bool)*puVar15;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pfVar13 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  fVar3 = *pfVar13;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  puVar16 = FRigVMMemoryHandle::GetData_Internal(pFVar12,true,-1);
  bVar4 = (bool)*puVar16;
  pFVar12 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,10);
  pFVar17 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar18 = (FRigUnit_CCDIK_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar12,false,pFVar17->Offset + pFVar17->Index);
  local_78[0].DataPtr = *(FRigUnit_CCDIK_RotationLimit **)puVar15;
  local_78[0].ArrayNum = *(int *)(puVar15 + 8);
  if (local_78[0].ArrayNum < 0) {
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
  pFVar19 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar19,pFVar9,pFVar10,pTVar11,fVar1,fVar2,iVar5,bVar7,fVar3,local_78,bVar4,pFVar18)
  ;
  return;
}

// StaticExecute @ 14a5625a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CCDIK::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FName *param_3,
          TTransform<double> *param_4,float param_5,float param_6,int param_7,bool param_8,
          float param_9,TArrayView<FRigUnit_CCDIK_RotationLimit_const_,int> *param_10,bool param_11,
          FRigUnit_CCDIK_WorkData *param_12)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigElementKeyCollection *pFVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  FRigElementKey *pFVar8;
  uint uVar9;
  FRigElementKey *pFVar10;
  FRigElementKey *pFVar11;
  ForAnyElementType local_c8;
  int local_c0;
  int iStack_bc;
  FRigUnit_CCDIK_RotationLimitPerItem local_b8;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  FNameEntryId FStack_98;
  uint uStack_94;
  FRigElementKey local_90;
  FRigElementKey local_84;
  TArrayView<FRigUnit_CCDIK_RotationLimitPerItem_const_,int> local_78;
  TArrayView<FRigElementKey_const_,int> local_68;
  FRigElementKeyCollection local_58;
  FRigElementKeyCollection local_48;
  
  pFVar8 = (FRigElementKey *)0x0;
  iVar7 = 0;
  pFVar11 = pFVar8;
  if ((param_12->CachedItems).ArrayNum == 0) {
    local_90.Name = *param_3;
    local_84.Name = *param_2;
    local_90.Type = Bone;
    local_84.Type = Bone;
    pFVar4 = FRigElementKeyCollection::MakeFromChain
                       (&local_58,param_1->Hierarchy,&local_84,&local_90,false);
    iVar7 = 0;
    if (&local_48 != pFVar4) {
      pFVar11 = (FRigElementKey *)(pFVar4->Keys).AllocatorInstance.Data;
      (pFVar4->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = (pFVar4->Keys).ArrayNum;
      (pFVar4->Keys).ArrayNum = 0;
      (pFVar4->Keys).ArrayMax = 0;
    }
    if (local_58.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Keys.AllocatorInstance.Data);
    }
  }
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  iStack_bc = 0;
  iVar5 = param_10->ArrayNum;
  pFVar10 = pFVar8;
  if (0 < iVar5) {
    do {
      local_b8.Item.Name.Number = 0;
      uVar9 = (uint)pFVar8;
      local_a8 = CONCAT31(local_a8._1_3_,1);
      uStack_a4 = 0;
      uStack_a0 = 0;
      local_b8.Item._0_8_ = ZEXT48(local_a8);
      local_b8.Limit = 30.0;
      uVar3 = 0;
      if ((int)uVar9 < iVar5) {
        uVar3 = ~uVar9 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_9c = CONCAT31(local_9c._1_3_,1);
      FStack_98.Value = (uint)*(undefined8 *)(&pFVar10->Type + (longlong)param_10->DataPtr);
      uStack_94 = (uint)((ulonglong)*(undefined8 *)(&pFVar10->Type + (longlong)param_10->DataPtr) >>
                        0x20);
      local_b8.Item.Name.ComparisonIndex.Value = FStack_98.Value;
      local_b8.Item._0_4_ = local_9c;
      local_b8.Item.Name.Number = uStack_94;
      uVar3 = 0;
      if ((int)uVar9 < param_10->ArrayNum) {
        uVar3 = ~uVar9 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_b8.Limit =
           *(float *)((longlong)&(param_10->DataPtr->Bone).ComparisonIndex.Value +
                     (longlong)&(pFVar10->Name).Number);
      if (((local_c8.Data <= &local_b8) &&
          (&local_b8 <
           (FRigUnit_CCDIK_RotationLimitPerItem *)(local_c8.Data + (longlong)iStack_bc * 0x10))) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_c0 == iStack_bc) {
        local_c0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&local_c8,&iStack_bc);
      }
      lVar6 = (longlong)local_c0;
      pFVar8 = (FRigElementKey *)(ulonglong)(uVar9 + 1);
      local_c0 = local_c0 + 1;
      *(undefined8 *)&local_c8.Data[lVar6 * 0x10].field_0x0 = local_b8.Item._0_8_;
      *(ulonglong *)(local_c8.Data + lVar6 * 0x10 + 8) =
           CONCAT44(local_b8.Limit,local_b8.Item.Name.Number);
      iVar5 = param_10->ArrayNum;
      pFVar10 = pFVar10 + 1;
    } while ((int)(uVar9 + 1) < iVar5);
  }
  iVar5 = local_c0;
  local_78.DataPtr = (FRigUnit_CCDIK_RotationLimitPerItem *)local_c8.Data;
  if ((local_c0 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_78.ArrayNum = iVar5;
  local_68.DataPtr = pFVar11;
  if ((iVar7 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_68.ArrayNum = iVar7;
  FRigUnit_CCDIKItemArray::StaticExecute
            (param_1,&local_68,param_4,param_5,param_6,param_7,param_8,param_9,&local_78,param_11,
             param_12);
  if ((FRigUnit_CCDIK_RotationLimitPerItem *)local_c8.Data !=
      (FRigUnit_CCDIK_RotationLimitPerItem *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  if (pFVar11 != (FRigElementKey *)0x0) {
    FMemory::Free(pFVar11);
  }
  return;
}

