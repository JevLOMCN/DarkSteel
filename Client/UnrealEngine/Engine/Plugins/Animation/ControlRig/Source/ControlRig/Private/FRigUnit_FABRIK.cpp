// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a482410

UScriptStruct * __cdecl FRigUnit_FABRIK::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FABRIK.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_FABRIK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FABRIK,(UObject *)pUVar1,
                         L"RigUnit_FABRIK");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_FABRIK.OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FABRIK.OuterSingleton;
}

// GetExecuteContextStruct @ 14a482490

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigUnit_FABRIK::GetExecuteContextStruct(FRigUnit_FABRIK *this)

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

// Execute @ 14a482850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_FABRIK::Execute(FRigUnit_FABRIK *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->StartBone,&this->EffectorBone,
                &this->EffectorTransform,this->Precision,this->Weight,this->bPropagateToChildren,
                this->MaxIterations,&this->WorkData,this->bSetEffectorTransform);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a482aa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_FABRIK::GetUpgradeInfo
          (FRigUnit_FABRIK *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FRigUnit_FABRIK @ 14a50f0c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_FABRIK * __thiscall FRigUnit_FABRIK::FRigUnit_FABRIK(FRigUnit_FABRIK *this)

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
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  (this->EffectorBone).ComparisonIndex = 0;
  (this->EffectorBone).Number = 0;
  *(undefined ***)this = &___7FRigUnit_FABRIK__6B_;
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
  (this->WorkData).Chain.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).Chain.ArrayNum = 0;
  (this->WorkData).Chain.ArrayMax = 0;
  (this->WorkData).CachedItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).CachedItems.ArrayNum = 0;
  (this->WorkData).CachedItems.ArrayMax = 0;
  (this->WorkData).CachedEffector.Key.Type = (char)uVar9;
  *(int3 *)&(this->WorkData).CachedEffector.Key.field_0x1 = (int3)(uVar9 >> 8);
  (this->WorkData).CachedEffector.Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar9 >> 0x20);
  *(ulonglong *)&(this->WorkData).CachedEffector.Key.Name.Number =
       CONCAT26(uStack_1a,0xffff00000000);
  *(ulonglong *)&(this->WorkData).CachedEffector.ContainerVersion = CONCAT44(uStack_14,0xffffffff);
  (this->WorkData).CachedEffector.Element = (FRigBaseElement *)0x0;
  this->Precision = 1.0;
  this->Weight = 1.0;
  this->MaxIterations = 10;
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
  this->bPropagateToChildren = true;
  this->bSetEffectorTransform = true;
  return this;
}

// Execute @ 14a527470

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_FABRIK::Execute(FRigUnit_FABRIK *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->StartBone,&this->EffectorBone,&this->EffectorTransform,
                this->Precision,this->Weight,this->bPropagateToChildren,this->MaxIterations,
                &this->WorkData,this->bSetEffectorTransform);
  return;
}

// RigVMExecute @ 14a53e280

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FABRIK::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  FName *pFVar8;
  TTransform<double> *pTVar9;
  FRigVMMemoryHandle *pFVar10;
  float *pfVar11;
  uchar *puVar12;
  int *piVar13;
  FRigVMSlice *pFVar14;
  FRigUnit_FABRIK_WorkData *pFVar15;
  FControlRigExecuteContext *pFVar16;
  
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar10->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FName *)pFVar10[1].Ptr;
  }
  else {
    pFVar8 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
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
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar9 = (TTransform<double> *)pFVar10[2].Ptr;
  }
  else {
    pTVar9 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar1 = *pfVar11;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar2 = *pfVar11;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar6 = (bool)*puVar12;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  piVar13 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  iVar4 = *piVar13;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar14 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar15 = (FRigUnit_FABRIK_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar14->Offset + pFVar14->Index);
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  bVar3 = (bool)*puVar12;
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar16,pFVar7,pFVar8,pTVar9,fVar1,fVar2,bVar6,iVar4,pFVar15,bVar3);
  return;
}

// StaticExecute @ 14a56ef20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FABRIK::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,FName *param_3,
          TTransform<double> *param_4,float param_5,float param_6,bool param_7,int param_8,
          FRigUnit_FABRIK_WorkData *param_9,bool param_10)

{
  code *pcVar1;
  bool bVar2;
  FRigElementKeyCollection *pFVar3;
  int iVar4;
  FRigElementKey *pFVar5;
  FRigElementKey local_68;
  FRigElementKey local_5c;
  TArrayView<FRigElementKey_const_,int> local_50;
  FRigElementKeyCollection local_40;
  FRigElementKeyCollection local_30;
  
  pFVar5 = (FRigElementKey *)0x0;
  iVar4 = 0;
  if ((param_9->CachedItems).ArrayNum == 0) {
    local_68.Name = *param_3;
    local_68.Type = Bone;
    local_5c.Name = *param_2;
    local_5c.Type = Bone;
    pFVar3 = FRigElementKeyCollection::MakeFromChain
                       (&local_40,param_1->Hierarchy,&local_5c,&local_68,false);
    iVar4 = 0;
    if (&local_30 != pFVar3) {
      pFVar5 = (FRigElementKey *)(pFVar3->Keys).AllocatorInstance.Data;
      (pFVar3->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar4 = (pFVar3->Keys).ArrayNum;
      (pFVar3->Keys).ArrayNum = 0;
      (pFVar3->Keys).ArrayMax = 0;
    }
    if (local_40.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Keys.AllocatorInstance.Data);
    }
  }
  local_50.DataPtr = pFVar5;
  if ((iVar4 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_50.ArrayNum = iVar4;
  FRigUnit_FABRIKItemArray::StaticExecute
            (param_1,&local_50,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  if (pFVar5 != (FRigElementKey *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

