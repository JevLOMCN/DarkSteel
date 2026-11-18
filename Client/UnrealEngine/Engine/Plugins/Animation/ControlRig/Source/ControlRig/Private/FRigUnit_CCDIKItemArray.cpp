// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a49cc30

UScriptStruct * __cdecl FRigUnit_CCDIKItemArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray,(UObject *)pUVar1,
                         L"RigUnit_CCDIKItemArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_CCDIKItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKItemArray.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CCDIKItemArray.OuterSingleton;
}

// FRigUnit_CCDIKItemArray @ 14a50c6d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_CCDIKItemArray * __thiscall
FRigUnit_CCDIKItemArray::FRigUnit_CCDIKItemArray(FRigUnit_CCDIKItemArray *this)

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
  
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FRigUnit_CCDIKItemArray__6B_;
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

// ~FRigUnit_CCDIKItemArray @ 14a518170

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CCDIKItemArray::~FRigUnit_CCDIKItemArray(FRigUnit_CCDIKItemArray *this)

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
  pFVar1 = (this->Items).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  return;
}

// Execute @ 14a524b20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CCDIKItemArray::Execute(FRigUnit_CCDIKItemArray *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FRigUnit_CCDIK_RotationLimitPerItem_const_,int> local_28;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
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
  local_28.DataPtr =
       (FRigUnit_CCDIK_RotationLimitPerItem *)(this->RotationLimits).AllocatorInstance.Data;
  iVar2 = (this->RotationLimits).ArrayNum;
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
  StaticExecute(param_1,&local_18,&this->EffectorTransform,this->Precision,this->Weight,
                this->MaxIterations,this->bStartFromTail,this->BaseRotationLimit,&local_28,
                this->bPropagateToChildren,&this->WorkData);
  return;
}

// Execute @ 14a524c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CCDIKItemArray::Execute(FRigUnit_CCDIKItemArray *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackY_2e8 [32];
  TArrayView<FRigUnit_CCDIK_RotationLimitPerItem_const_,int> local_288;
  TArrayView<FRigElementKey_const_,int> local_278;
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
  local_278.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
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
  local_288.DataPtr =
       (FRigUnit_CCDIK_RotationLimitPerItem *)(this->RotationLimits).AllocatorInstance.Data;
  iVar2 = (this->RotationLimits).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->EffectorTransform,
                this->Precision,this->Weight,this->MaxIterations,this->bStartFromTail,
                this->BaseRotationLimit,&local_288,this->bPropagateToChildren,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530960

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_CCDIKItemArray::GetExecuteContextStruct(FRigUnit_CCDIKItemArray *this)

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

// RigVMExecute @ 14a5362d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CCDIKItemArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uchar *puVar10;
  TTransform<double> *pTVar11;
  float *pfVar12;
  FRigVMMemoryHandle *pFVar13;
  int *piVar14;
  uchar *puVar15;
  uchar *puVar16;
  FRigVMSlice *pFVar17;
  FRigUnit_CCDIK_WorkData *pFVar18;
  FControlRigExecuteContext *pFVar19;
  TArrayView<FRigUnit_CCDIK_RotationLimitPerItem_const_,int> local_78;
  TArrayView<FRigElementKey_const_,int> local_68 [4];
  
  iVar5 = param_2->ArrayNum;
  if (iVar5 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar13 = param_2->DataPtr;
  if (pFVar13->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar10 = pFVar13->Ptr;
  }
  else {
    puVar10 = FRigVMPropertyPath::GetData_Internal
                        (pFVar13->PropertyPath,pFVar13->Ptr,pFVar13->Property);
  }
  if (iVar5 < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar13 = param_2->DataPtr;
  if (pFVar13[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar11 = (TTransform<double> *)pFVar13[1].Ptr;
  }
  else {
    pTVar11 = (TTransform<double> *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar13[1].PropertyPath,pFVar13[1].Ptr,pFVar13[1].Property);
  }
  if (iVar5 < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar13 = param_2->DataPtr;
  if (pFVar13[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar12 = (float *)pFVar13[2].Ptr;
  }
  else {
    pfVar12 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar13[2].PropertyPath,pFVar13[2].Ptr,pFVar13[2].Property);
  }
  fVar1 = *pfVar12;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  fVar2 = *pfVar12;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  piVar14 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  iVar5 = *piVar14;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  bVar8 = (bool)*puVar15;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pfVar12 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  fVar3 = *pfVar12;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  puVar15 = FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  puVar16 = FRigVMMemoryHandle::GetData_Internal(pFVar13,true,-1);
  bVar4 = (bool)*puVar16;
  pFVar13 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,9);
  pFVar17 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar18 = (FRigUnit_CCDIK_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar13,false,pFVar17->Offset + pFVar17->Index);
  local_78.DataPtr = *(FRigUnit_CCDIK_RotationLimitPerItem **)puVar15;
  local_78.ArrayNum = *(int *)(puVar15 + 8);
  if (local_78.ArrayNum < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_68[0].DataPtr = *(FRigElementKey **)puVar10;
  iVar6 = *(int *)(puVar10 + 8);
  if (iVar6 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_68[0].ArrayNum = iVar6;
  pFVar19 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar19,local_68,pTVar11,fVar1,fVar2,iVar5,bVar8,fVar3,&local_78,bVar4,pFVar18);
  return;
}

// StaticExecute @ 14a562910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_CCDIKItemArray::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          TTransform<double> *param_3,float param_4,float param_5,int param_6,bool param_7,
          float param_8,TArrayView<FRigUnit_CCDIK_RotationLimitPerItem_const_,int> *param_9,
          bool param_10,FRigUnit_CCDIK_WorkData *param_11)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  FCachedRigElement *pFVar4;
  FRigUnit_CCDIK_RotationLimitPerItem *pFVar5;
  FCCDIKChainLink *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FRigBaseElement *pFVar10;
  ulonglong uVar11;
  float fVar12;
  TArrayView<FRigUnit_CCDIK_RotationLimitPerItem_const_,int> *pTVar13;
  bool bVar14;
  ushort uVar15;
  int iVar16;
  FRigElementKey *pFVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  URigHierarchy *pUVar20;
  uint uVar21;
  FRigElementKey *pFVar22;
  ushort *puVar23;
  FRigUnit_CCDIK_RotationLimitPerItem *pFVar24;
  uint uVar25;
  uint uVar26;
  TTransform<double> *pTVar27;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar28;
  FRigUnit_CCDIK_WorkData *pFVar29;
  longlong lVar30;
  TTransform<double> *pTVar31;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar32;
  float fVar33;
  undefined1 auStackY_678 [32];
  undefined1 local_628 [4];
  undefined4 local_624;
  URigHierarchy *local_620;
  FRigUnit_CCDIK_WorkData *local_618;
  uint local_610;
  TArrayView<FRigUnit_CCDIK_RotationLimitPerItem_const_,int> *local_608;
  TTransform<double> *local_600;
  FCachedRigElement local_5f8;
  FCachedRigElement local_5d8;
  uint local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  FCachedRigElement local_5a8;
  FRigElementKey local_588;
  FRigElementKey local_578;
  TVector<double>_u_0 local_568;
  FRigElementKey local_550 [2];
  TTransform<double> local_538;
  TTransform<double> local_4d8;
  TTransform<double> local_478;
  TTransform<double> local_418;
  FCCDIKChainLink local_3b8;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_678;
  pUVar20 = param_1->Hierarchy;
  local_608 = param_9;
  local_618 = param_11;
  if (pUVar20 == (URigHierarchy *)0x0) {
    return;
  }
  iVar16 = (param_11->RotationLimitIndex).ArrayNum;
  pTVar28 = &param_11->RotationLimitIndex;
  pTVar32 = &param_11->CachedItems;
  local_610 = 0xffffffff;
  local_620 = pUVar20;
  local_600 = param_3;
  if ((param_9->ArrayNum != iVar16) && (0 < iVar16)) {
    (param_11->CachedItems).ArrayNum = 0;
    if ((param_11->CachedItems).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&pTVar32->AllocatorInstance,0,&(param_11->CachedItems).ArrayMax);
    }
    (param_11->RotationLimitIndex).ArrayNum = 0;
    if ((param_11->RotationLimitIndex).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar28->AllocatorInstance,0,&(param_11->RotationLimitIndex).ArrayMax);
    }
    (param_11->RotationLimitsPerItem).ArrayNum = 0;
    if ((param_11->RotationLimitsPerItem).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(param_11->RotationLimitsPerItem).AllocatorInstance,0,
                 &(param_11->RotationLimitsPerItem).ArrayMax);
    }
    local_5b8 = local_5b8 & 0xffffff00;
    uStack_5b4 = 0;
    uStack_5b0 = 0;
    uVar11 = (ulonglong)local_5b8;
    (param_11->CachedEffector).Key.Type = (char)uVar11;
    *(int3 *)&(param_11->CachedEffector).Key.field_0x1 = (int3)(uVar11 >> 8);
    (param_11->CachedEffector).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar11 >> 0x20);
    (param_11->CachedEffector).Key.Name.Number = 0;
    (param_11->CachedEffector).Index = 0xffff;
    (param_11->CachedEffector).ContainerVersion = -1;
    (param_11->CachedEffector).Element = (FRigBaseElement *)0x0;
  }
  pFVar29 = param_11;
  if (((param_11->CachedItems).ArrayNum == 0) && (0 < param_2->ArrayNum)) {
    pFVar17 = TArrayView<FRigElementKey_const_,int>::operator[](param_2,0);
    local_588.Type = pFVar17->Type;
    local_588._1_3_ = *(undefined3 *)&pFVar17->field_0x1;
    local_588.Name.ComparisonIndex.Value = (pFVar17->Name).ComparisonIndex.Value;
    local_588.Name.Number = (pFVar17->Name).Number;
    pFVar17 = URigHierarchy::GetFirstParent(pUVar20,local_550,&local_588);
    local_5f8.Key._0_4_ = local_5f8.Key._0_4_ & 0xffffff00;
    local_5f8.Key.Name.ComparisonIndex.Value = 0;
    local_5f8.Key.Name.Number = 0;
    local_5f8.Element = (FRigBaseElement *)0x0;
    local_5f8.Index = 0xffff;
    local_5f8.ContainerVersion = -1;
    FCachedRigElement::UpdateCache(&local_5f8,pFVar17,pUVar20);
    pFVar4 = (FCachedRigElement *)(pTVar32->AllocatorInstance).Data;
    if ((pFVar4 <= &local_5f8) &&
       ((&local_5f8 < pFVar4 + (param_11->CachedItems).ArrayMax &&
        (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar14)))) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar16 = (param_11->CachedItems).ArrayNum;
    if (iVar16 == (param_11->CachedItems).ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar32->AllocatorInstance,&(param_11->CachedItems).ArrayMax);
    }
    (param_11->CachedItems).ArrayNum = iVar16 + 1;
    pFVar18 = (pTVar32->AllocatorInstance).Data;
    pFVar2 = pFVar18 + (longlong)iVar16 * 0x20;
    *(ulonglong *)pFVar2 = CONCAT44(local_5f8.Key.Name.ComparisonIndex.Value,local_5f8.Key._0_4_);
    *(ulonglong *)(pFVar2 + 8) =
         CONCAT26(local_5f8._14_2_,CONCAT24(local_5f8.Index,local_5f8.Key.Name.Number));
    pFVar18 = pFVar18 + (longlong)iVar16 * 0x20 + 0x10;
    *(ulonglong *)pFVar18 = CONCAT44(local_5f8._20_4_,local_5f8.ContainerVersion);
    *(FRigBaseElement **)(pFVar18 + 8) = local_5f8.Element;
    pFVar22 = param_2->DataPtr;
    pFVar17 = pFVar22 + param_2->ArrayNum;
    if (pFVar22 != pFVar17) {
      do {
        local_578.Name.Number = (pFVar22->Name).Number;
        local_578.Type = pFVar22->Type;
        local_578._1_3_ = *(undefined3 *)&pFVar22->field_0x1;
        local_578.Name.ComparisonIndex.Value = (pFVar22->Name).ComparisonIndex.Value;
        local_5d8.Key.Name.ComparisonIndex.Value = 0;
        local_5d8.Key.Name.Number = 0;
        local_5d8.Element = (FRigBaseElement *)0x0;
        local_5d8.Key._0_4_ = local_5d8.Key._0_4_ & 0xffffff00;
        local_5d8.Index = 0xffff;
        local_5d8.ContainerVersion = -1;
        FCachedRigElement::UpdateCache(&local_5d8,&local_578,pUVar20);
        pFVar4 = (FCachedRigElement *)(pTVar32->AllocatorInstance).Data;
        if (((pFVar4 <= &local_5d8) && (&local_5d8 < pFVar4 + (param_11->CachedItems).ArrayMax)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar16 = (param_11->CachedItems).ArrayNum;
        if (iVar16 == (param_11->CachedItems).ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar32->AllocatorInstance,&(param_11->CachedItems).ArrayMax);
        }
        pFVar22 = pFVar22 + 1;
        (param_11->CachedItems).ArrayNum = iVar16 + 1;
        pFVar18 = (pTVar32->AllocatorInstance).Data;
        pFVar2 = pFVar18 + (longlong)iVar16 * 0x20;
        *(ulonglong *)pFVar2 =
             CONCAT44(local_5d8.Key.Name.ComparisonIndex.Value,local_5d8.Key._0_4_);
        *(ulonglong *)(pFVar2 + 8) =
             CONCAT26(local_5d8._14_2_,CONCAT24(local_5d8.Index,local_5d8.Key.Name.Number));
        pFVar18 = pFVar18 + (longlong)iVar16 * 0x20 + 0x10;
        *(ulonglong *)pFVar18 = CONCAT44(local_5d8._20_4_,local_5d8.ContainerVersion);
        *(FRigBaseElement **)(pFVar18 + 8) = local_5d8.Element;
      } while (pFVar22 != pFVar17);
      pTVar28 = &local_618->RotationLimitIndex;
      pFVar29 = local_618;
    }
    iVar16 = (param_11->CachedItems).ArrayNum;
    uVar21 = iVar16 - 1;
    uVar25 = 0;
    if ((int)uVar21 < iVar16) {
      uVar25 = ~uVar21 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar18 = (pTVar32->AllocatorInstance).Data;
    lVar19 = (longlong)(param_11->CachedItems).ArrayNum * 0x20;
    pFVar2 = pFVar18 + lVar19 + -0x20;
    uVar8 = *(undefined8 *)pFVar2;
    uVar9 = *(undefined8 *)(pFVar2 + 8);
    (pFVar29->CachedEffector).Key.Type = (char)uVar8;
    *(int3 *)&(pFVar29->CachedEffector).Key.field_0x1 = (int3)((ulonglong)uVar8 >> 8);
    (pFVar29->CachedEffector).Key.Name.ComparisonIndex =
         (FNameEntryId)(int)((ulonglong)uVar8 >> 0x20);
    *(undefined8 *)&(pFVar29->CachedEffector).Key.Name.Number = uVar9;
    pFVar18 = pFVar18 + lVar19 + -0x10;
    pFVar10 = *(FRigBaseElement **)(pFVar18 + 8);
    *(undefined8 *)&(pFVar29->CachedEffector).ContainerVersion = *(undefined8 *)pFVar18;
    (pFVar29->CachedEffector).Element = pFVar10;
    uVar25 = (param_11->CachedItems).ArrayNum;
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
    }
    if ((pFVar29->Chain).ArrayMax < (int)uVar25) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,0x10,uVar25,(ForAnyElementType *)pFVar29,(pFVar29->Chain).ArrayNum,
                 &(pFVar29->Chain).ArrayMax);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&pFVar29->RotationLimitsPerItem,(param_11->CachedItems).ArrayNum,Default);
    pFVar5 = local_608->DataPtr;
    pFVar24 = pFVar5 + local_608->ArrayNum;
    for (; pFVar5 != pFVar24; pFVar5 = pFVar5 + 1) {
      local_5a8.Key.Type = None;
      local_5a8.Key.Name.ComparisonIndex.Value = 0;
      local_5a8.Key.Name.Number = 0;
      local_5a8.Index = 0xffff;
      local_5a8.ContainerVersion = -1;
      local_5a8.Element = (FRigBaseElement *)0x0;
      FCachedRigElement::UpdateCache(&local_5a8,&pFVar5->Item,pUVar20);
      pFVar2 = (pTVar32->AllocatorInstance).Data;
      for (pFVar18 = pFVar2; pFVar18 != pFVar2 + (longlong)(param_11->CachedItems).ArrayNum * 0x20;
          pFVar18 = pFVar18 + 0x20) {
        if (((*(ushort *)(pFVar18 + 0xc) == local_5a8.Index) &&
            (*(FName *)(pFVar18 + 4) == local_5a8.Key.Name)) &&
           (*pFVar18 == (FScriptContainerElement)local_5a8.Key.Type)) {
          local_624 = (undefined4)((longlong)pFVar18 - (longlong)pFVar2 >> 5);
          goto LAB_14a562de1;
        }
      }
      local_624 = 0xffffffff;
LAB_14a562de1:
      pFVar2 = (pTVar28->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_624) &&
          ((FScriptContainerElement *)&local_624 < pFVar2 + (longlong)pTVar28->ArrayMax * 4)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar16 = pTVar28->ArrayNum;
      if (iVar16 == pTVar28->ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar28->AllocatorInstance,&pTVar28->ArrayMax);
      }
      pTVar28->ArrayNum = iVar16 + 1;
      *(undefined4 *)((pTVar28->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_624;
      pFVar29 = local_618;
    }
  }
  if ((param_11->CachedItems).ArrayNum < 2) {
    return;
  }
  piVar1 = &(pFVar29->Chain).ArrayMax;
  pFVar6 = (FCCDIKChainLink *)(pFVar29->Chain).AllocatorInstance.Data;
  iVar16 = (pFVar29->Chain).ArrayNum;
  if ((pFVar29->Chain).ArrayMax < 0) {
    DestructItems<FCCDIKChainLink,int>(pFVar6,iVar16);
    (pFVar29->Chain).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,0x10,0,(ForAnyElementType *)pFVar29,0,piVar1);
    }
  }
  else {
    DestructItems<FCCDIKChainLink,int>(pFVar6,iVar16);
    (pFVar29->Chain).ArrayNum = 0;
  }
  iVar16 = (param_11->CachedItems).ArrayNum;
  uVar25 = 0;
  if (0 < iVar16) {
    lVar19 = 0;
    do {
      uVar21 = 0;
      if ((int)uVar25 < iVar16) {
        uVar21 = ~uVar25 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar21 = 0xffffffff;
      uVar15 = *(ushort *)((pTVar32->AllocatorInstance).Data + lVar19 + 0xc);
      if (uVar15 != 0xffff) {
        uVar21 = (uint)uVar15;
      }
      URigHierarchy::GetGlobalTransformByIndex(local_620,&local_2d8,uVar21,false);
      uVar21 = 0;
      if ((int)uVar25 < (param_11->CachedItems).ArrayNum) {
        uVar21 = ~uVar25 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar21 = 0xffffffff;
      uVar15 = *(ushort *)((pTVar32->AllocatorInstance).Data + lVar19 + 0xc);
      if (uVar15 != 0xffff) {
        uVar21 = (uint)uVar15;
      }
      URigHierarchy::GetLocalTransformByIndex(local_620,&local_278,uVar21,false);
      pFVar6 = (FCCDIKChainLink *)(pFVar29->Chain).AllocatorInstance.Data;
      local_3b8.Transform.Rotation.XY.m128d_f64[0] = local_2d8.Rotation.XY.m128d_f64[0];
      local_3b8.Transform.Rotation.XY.m128d_f64[1] = local_2d8.Rotation.XY.m128d_f64[1];
      local_3b8.Transform.Rotation.ZW.m128d_f64[0] = local_2d8.Rotation.ZW.m128d_f64[0];
      local_3b8.Transform.Rotation.ZW.m128d_f64[1] = local_2d8.Rotation.ZW.m128d_f64[1];
      local_3b8.Transform.Translation.XY.m128d_f64[0] = local_2d8.Translation.XY.m128d_f64[0];
      local_3b8.Transform.Translation.XY.m128d_f64[1] = local_2d8.Translation.XY.m128d_f64[1];
      local_3b8.Transform.Translation.ZW.m128d_f64[0] = local_2d8.Translation.ZW.m128d_f64[0];
      local_3b8.Transform.Translation.ZW.m128d_f64[1] = local_2d8.Translation.ZW.m128d_f64[1];
      local_3b8.Transform.Scale3D.XY.m128d_f64[0] = local_2d8.Scale3D.XY.m128d_f64[0];
      local_3b8.Transform.Scale3D.XY.m128d_f64[1] = local_2d8.Scale3D.XY.m128d_f64[1];
      local_3b8.Transform.Scale3D.ZW.m128d_f64[0] = local_2d8.Scale3D.ZW.m128d_f64[0];
      local_3b8.Transform.Scale3D.ZW.m128d_f64[1] = local_2d8.Scale3D.ZW.m128d_f64[1];
      local_3b8.LocalTransform.Rotation.XY.m128d_f64[0] = local_278.Rotation.XY.m128d_f64[0];
      local_3b8.LocalTransform.Rotation.XY.m128d_f64[1] = local_278.Rotation.XY.m128d_f64[1];
      local_3b8.LocalTransform.Rotation.ZW.m128d_f64[0] = local_278.Rotation.ZW.m128d_f64[0];
      local_3b8.LocalTransform.Rotation.ZW.m128d_f64[1] = local_278.Rotation.ZW.m128d_f64[1];
      local_3b8.ChildZeroLengthTransformIndices.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_3b8.ChildZeroLengthTransformIndices.ArrayNum = 0;
      local_3b8.ChildZeroLengthTransformIndices.ArrayMax = 0;
      local_3b8.LocalTransform.Translation.XY.m128d_f64[0] = local_278.Translation.XY.m128d_f64[0];
      local_3b8.LocalTransform.Translation.XY.m128d_f64[1] = local_278.Translation.XY.m128d_f64[1];
      local_3b8.LocalTransform.Translation.ZW.m128d_f64[0] = local_278.Translation.ZW.m128d_f64[0];
      local_3b8.LocalTransform.Translation.ZW.m128d_f64[1] = local_278.Translation.ZW.m128d_f64[1];
      local_3b8.LocalTransform.Scale3D.XY.m128d_f64[0] = local_278.Scale3D.XY.m128d_f64[0];
      local_3b8.LocalTransform.Scale3D.XY.m128d_f64[1] = local_278.Scale3D.XY.m128d_f64[1];
      local_3b8.LocalTransform.Scale3D.ZW.m128d_f64[0] = local_278.Scale3D.ZW.m128d_f64[0];
      local_3b8.LocalTransform.Scale3D.ZW.m128d_f64[1] = local_278.Scale3D.ZW.m128d_f64[1];
      local_3b8.CurrentAngleDelta = 0.0;
      local_3b8.TransformIndex = uVar25;
      if (((pFVar6 <= &local_3b8) && (&local_3b8 < pFVar6 + *piVar1)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar16 = (pFVar29->Chain).ArrayNum;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10e0,(ForAnyElementType *)pFVar29,piVar1);
      }
      (pFVar29->Chain).ArrayNum = iVar16 + 1;
      FCCDIKChainLink::FCCDIKChainLink
                ((FCCDIKChainLink *)
                 ((pFVar29->Chain).AllocatorInstance.Data + (longlong)iVar16 * 0xe0),&local_3b8);
      if (local_3b8.ChildZeroLengthTransformIndices.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.ChildZeroLengthTransformIndices.AllocatorInstance.Data);
      }
      iVar16 = (param_11->CachedItems).ArrayNum;
      uVar25 = uVar25 + 1;
      lVar19 = lVar19 + 0x20;
    } while ((int)uVar25 < iVar16);
    pTVar28 = &pFVar29->RotationLimitIndex;
  }
  pFVar18 = (pFVar29->RotationLimitsPerItem).AllocatorInstance.Data;
  iVar16 = (pFVar29->RotationLimitsPerItem).ArrayNum;
  pFVar2 = pFVar18 + (longlong)iVar16 * 4;
  while( true ) {
    if ((pFVar29->RotationLimitsPerItem).ArrayNum != iVar16) {
      local_628[0] = 0;
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_628);
    }
    pTVar13 = local_608;
    if (pFVar18 == pFVar2) break;
    *(float *)pFVar18 = param_8;
    pFVar18 = pFVar18 + 4;
  }
  iVar16 = pTVar28->ArrayNum;
  uVar25 = 0;
  if (0 < iVar16) {
    lVar19 = 0;
    lVar30 = 0;
    do {
      uVar26 = ~uVar25 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar25 < iVar16) {
        uVar21 = uVar26;
      }
      if ((uVar21 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(int *)((pTVar28->AllocatorInstance).Data + lVar19) != -1) {
        uVar21 = 0;
        if ((int)uVar25 < pTVar13->ArrayNum) {
          uVar21 = uVar26;
        }
        if ((uVar21 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar3 = *(undefined4 *)((longlong)&pTVar13->DataPtr->Limit + lVar30);
        uVar21 = 0;
        if ((int)uVar25 < pTVar28->ArrayNum) {
          uVar21 = uVar26;
        }
        if ((uVar21 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar21 = *(uint *)((pTVar28->AllocatorInstance).Data + lVar19);
        uVar26 = 0;
        if ((int)uVar21 < (pFVar29->RotationLimitsPerItem).ArrayNum) {
          uVar26 = ~uVar21 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)
         ((pFVar29->RotationLimitsPerItem).AllocatorInstance.Data + (longlong)(int)uVar21 * 4) =
             uVar3;
      }
      iVar16 = pTVar28->ArrayNum;
      uVar25 = uVar25 + 1;
      lVar30 = lVar30 + 0x10;
      lVar19 = lVar19 + 4;
    } while ((int)uVar25 < iVar16);
    pTVar32 = &pFVar29->CachedItems;
  }
  pTVar31 = local_600;
  local_568._s_0.X = (local_600->Translation).XY.m128d_f64[0];
  local_568._s_0.Y = (local_600->Translation).XY.m128d_f64[1];
  local_568._s_0.Z = (local_600->Translation).ZW.m128d_f64[0];
  bVar14 = AnimationCore::SolveCCDIK
                     (&pFVar29->Chain,(TVector<double> *)&local_568._s_0,param_4,param_6,param_7,
                      0 < local_608->ArrayNum,&pFVar29->RotationLimitsPerItem);
  fVar12 = __real_3f800000;
  if (bVar14) {
    uVar25 = 0;
    if (__real_322bcc77 <
        (float)((uint)(param_5 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar33 = param_5;
      if (__real_3f800000 <= param_5) {
        fVar33 = __real_3f800000;
      }
      if (fVar33 <= 0.0) {
        fVar33 = 0.0;
      }
      if (pTVar32->ArrayNum < 1) goto LAB_14a563775;
      lVar19 = 0;
      lVar30 = 0;
      do {
        pFVar29 = local_618;
        uVar26 = ~uVar25 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar25 < (local_618->Chain).ArrayNum) {
          uVar21 = uVar26;
        }
        if ((uVar21 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar2 = (pFVar29->Chain).AllocatorInstance.Data;
        uVar21 = 0;
        if ((int)uVar25 < pTVar32->ArrayNum) {
          uVar21 = uVar26;
        }
        if ((uVar21 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar21 = 0xffffffff;
        uVar15 = *(ushort *)((pTVar32->AllocatorInstance).Data + lVar19 + 0xc);
        if (uVar15 != 0xffff) {
          uVar21 = (uint)uVar15;
        }
        URigHierarchy::GetGlobalTransformByIndex(local_620,&local_158,uVar21,false);
        FRigVMMathLibrary::LerpTransform
                  (&local_218,&local_158,(TTransform<double> *)(pFVar2 + lVar30),fVar33);
        uVar21 = 0;
        if ((int)uVar25 < pTVar32->ArrayNum) {
          uVar21 = uVar26;
        }
        if ((uVar21 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar21 = 0xffffffff;
        uVar15 = *(ushort *)((pTVar32->AllocatorInstance).Data + lVar19 + 0xc);
        if (uVar15 != 0xffff) {
          uVar21 = (uint)uVar15;
        }
        local_4d8.Rotation.XY.m128d_f64[0] = local_218.Rotation.XY.m128d_f64[0];
        local_4d8.Rotation.XY.m128d_f64[1] = local_218.Rotation.XY.m128d_f64[1];
        local_4d8.Rotation.ZW.m128d_f64[0] = local_218.Rotation.ZW.m128d_f64[0];
        local_4d8.Rotation.ZW.m128d_f64[1] = local_218.Rotation.ZW.m128d_f64[1];
        local_4d8.Translation.XY.m128d_f64[0] = local_218.Translation.XY.m128d_f64[0];
        local_4d8.Translation.XY.m128d_f64[1] = local_218.Translation.XY.m128d_f64[1];
        local_4d8.Translation.ZW.m128d_f64[0] = local_218.Translation.ZW.m128d_f64[0];
        local_4d8.Translation.ZW.m128d_f64[1] = local_218.Translation.ZW.m128d_f64[1];
        local_4d8.Scale3D.XY.m128d_f64[0] = local_218.Scale3D.XY.m128d_f64[0];
        local_4d8.Scale3D.XY.m128d_f64[1] = local_218.Scale3D.XY.m128d_f64[1];
        local_4d8.Scale3D.ZW.m128d_f64[0] = local_218.Scale3D.ZW.m128d_f64[0];
        local_4d8.Scale3D.ZW.m128d_f64[1] = local_218.Scale3D.ZW.m128d_f64[1];
        URigHierarchy::SetGlobalTransformByIndex
                  (local_620,uVar21,&local_4d8,false,param_10,false,false);
        uVar25 = uVar25 + 1;
        lVar30 = lVar30 + 0xe0;
        lVar19 = lVar19 + 0x20;
      } while ((int)uVar25 < pTVar32->ArrayNum);
      puVar23 = &(local_618->CachedEffector).Index;
      uVar15 = *puVar23;
      pTVar31 = local_600;
      goto LAB_14a56381c;
    }
    if (0 < pTVar32->ArrayNum) {
      lVar30 = 0;
      lVar19 = 0;
      do {
        pFVar29 = local_618;
        uVar21 = 0;
        if ((int)uVar25 < (local_618->Chain).ArrayNum) {
          uVar21 = ~uVar25 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar2 = (pFVar29->Chain).AllocatorInstance.Data;
        uVar21 = 0;
        if ((int)uVar25 < pTVar32->ArrayNum) {
          uVar21 = ~uVar25 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar21 = 0xffffffff;
        uVar15 = *(ushort *)((pTVar32->AllocatorInstance).Data + lVar30 + 0xc);
        if (uVar15 != 0xffff) {
          uVar21 = (uint)uVar15;
        }
        local_538.Rotation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar19);
        local_538.Rotation.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar19 + 8);
        local_538.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar19 + 0x10);
        local_538.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar19 + 0x10 + 8);
        local_538.Translation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar19 + 0x20);
        local_538.Translation.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar19 + 0x20 + 8);
        local_538.Translation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar19 + 0x30);
        local_538.Translation.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar19 + 0x30 + 8);
        local_538.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar19 + 0x40);
        local_538.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar19 + 0x40 + 8);
        local_538.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar19 + 0x50);
        local_538.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar19 + 0x50 + 8);
        URigHierarchy::SetGlobalTransformByIndex
                  (local_620,uVar21,&local_538,false,param_10,false,false);
        uVar25 = uVar25 + 1;
        lVar19 = lVar19 + 0xe0;
        lVar30 = lVar30 + 0x20;
        pFVar29 = local_618;
        pTVar31 = local_600;
      } while ((int)uVar25 < pTVar32->ArrayNum);
    }
    uVar15 = (pFVar29->CachedEffector).Index;
  }
  else {
LAB_14a563775:
    uVar15 = (pFVar29->CachedEffector).Index;
    puVar23 = &(pFVar29->CachedEffector).Index;
    if (__real_322bcc77 <
        (float)((uint)(param_5 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
LAB_14a56381c:
      pUVar20 = local_620;
      if (fVar12 <= param_5) {
        param_5 = fVar12;
      }
      uVar25 = 0xffffffff;
      uVar21 = 0xffffffff;
      if (param_5 <= 0.0) {
        param_5 = 0.0;
      }
      if (uVar15 != 0xffff) {
        uVar21 = (uint)uVar15;
      }
      URigHierarchy::GetGlobalTransformByIndex(local_620,&local_f8,uVar21,false);
      FRigVMMathLibrary::LerpTransform(&local_1b8,&local_f8,pTVar31,param_5);
      if (*puVar23 != 0xffff) {
        uVar25 = (uint)*puVar23;
      }
      pTVar27 = &local_418;
      local_418.Rotation.XY.m128d_f64[0] = local_1b8.Rotation.XY.m128d_f64[0];
      local_418.Rotation.XY.m128d_f64[1] = local_1b8.Rotation.XY.m128d_f64[1];
      local_418.Rotation.ZW.m128d_f64[0] = local_1b8.Rotation.ZW.m128d_f64[0];
      local_418.Rotation.ZW.m128d_f64[1] = local_1b8.Rotation.ZW.m128d_f64[1];
      local_418.Translation.XY.m128d_f64[0] = local_1b8.Translation.XY.m128d_f64[0];
      local_418.Translation.XY.m128d_f64[1] = local_1b8.Translation.XY.m128d_f64[1];
      local_418.Translation.ZW.m128d_f64[0] = local_1b8.Translation.ZW.m128d_f64[0];
      local_418.Translation.ZW.m128d_f64[1] = local_1b8.Translation.ZW.m128d_f64[1];
      local_418.Scale3D.XY.m128d_f64[0] = local_1b8.Scale3D.XY.m128d_f64[0];
      local_418.Scale3D.XY.m128d_f64[1] = local_1b8.Scale3D.XY.m128d_f64[1];
      local_418.Scale3D.ZW.m128d_f64[0] = local_1b8.Scale3D.ZW.m128d_f64[0];
      local_418.Scale3D.ZW.m128d_f64[1] = local_1b8.Scale3D.ZW.m128d_f64[1];
      goto LAB_14a5638e8;
    }
  }
  if (uVar15 != 0xffff) {
    local_610 = (uint)uVar15;
  }
  local_478.Rotation.XY.m128d_f64[0] = (pTVar31->Rotation).XY.m128d_f64[0];
  local_478.Rotation.XY.m128d_f64[1] = (pTVar31->Rotation).XY.m128d_f64[1];
  pTVar27 = &local_478;
  local_478.Rotation.ZW.m128d_f64[0] = (pTVar31->Rotation).ZW.m128d_f64[0];
  local_478.Rotation.ZW.m128d_f64[1] = (pTVar31->Rotation).ZW.m128d_f64[1];
  local_478.Translation.XY.m128d_f64[0] = (pTVar31->Translation).XY.m128d_f64[0];
  local_478.Translation.XY.m128d_f64[1] = (pTVar31->Translation).XY.m128d_f64[1];
  local_478.Translation.ZW.m128d_f64[0] = (pTVar31->Translation).ZW.m128d_f64[0];
  local_478.Translation.ZW.m128d_f64[1] = (pTVar31->Translation).ZW.m128d_f64[1];
  local_478.Scale3D.XY.m128d_f64[0] = (pTVar31->Scale3D).XY.m128d_f64[0];
  local_478.Scale3D.XY.m128d_f64[1] = (pTVar31->Scale3D).XY.m128d_f64[1];
  local_478.Scale3D.ZW.m128d_f64[0] = (pTVar31->Scale3D).ZW.m128d_f64[0];
  local_478.Scale3D.ZW.m128d_f64[1] = (pTVar31->Scale3D).ZW.m128d_f64[1];
  pUVar20 = local_620;
  uVar25 = local_610;
LAB_14a5638e8:
  URigHierarchy::SetGlobalTransformByIndex(pUVar20,uVar25,pTVar27,false,param_10,false,false);
  return;
}

