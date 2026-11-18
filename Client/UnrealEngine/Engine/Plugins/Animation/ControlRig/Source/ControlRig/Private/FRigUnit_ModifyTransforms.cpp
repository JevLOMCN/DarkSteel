// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4dc000

UScriptStruct * __cdecl FRigUnit_ModifyTransforms::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ModifyTransforms.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ModifyTransforms.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms,(UObject *)pUVar1,
                         L"RigUnit_ModifyTransforms");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ModifyTransforms.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ModifyTransforms.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4dc090

UScriptStruct * __thiscall
FRigUnit_ModifyTransforms::GetExecuteContextStruct(FRigUnit_ModifyTransforms *this)

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

// Execute @ 14a4dc420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ModifyTransforms::Execute(FRigUnit_ModifyTransforms *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2b8 [32];
  TArrayView<FRigUnit_ModifyTransforms_PerItem_const_,int> local_278;
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
       (FRigUnit_ModifyTransforms_PerItem *)(this->ItemToModify).AllocatorInstance.Data;
  iVar1 = (this->ItemToModify).ArrayNum;
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

// FRigUnit_ModifyTransforms @ 14a512980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigUnit_ModifyTransforms * __thiscall
FRigUnit_ModifyTransforms::FRigUnit_ModifyTransforms(FRigUnit_ModifyTransforms *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  int iVar17;
  FRigUnit_ModifyTransforms *pFVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 local_fc;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_138;
  this->Weight = 1.0;
  this->WeightMinimum = 0.0;
  (this->ItemToModify).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ItemToModify).ArrayMax;
  (this->ItemToModify).ArrayNum = 0;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->WeightMaximum = 1.0;
  this->_padding_ = (longlong)&___7FRigUnit_ModifyTransforms__6B_;
  this->Mode = AdditiveLocal;
  (this->WorkData).CachedItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkData).CachedItems.ArrayNum = 0;
  (this->WorkData).CachedItems.ArrayMax = 0;
  *piVar1 = 0;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  uVar30 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar31 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_fc = 0;
  local_e8 = CONCAT31(local_e8._1_3_,1);
  uStack_e4 = 0;
  uStack_e0 = 0;
  uVar24 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar25 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar26 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar27 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  uVar28 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  uVar20 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar21 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  uVar22 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar23 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  iVar17 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x1070,&(this->ItemToModify).AllocatorInstance,piVar1);
  local_108 = CONCAT31(local_108._1_3_,1);
  uStack_104 = 0;
  uStack_100 = 0;
  (this->ItemToModify).ArrayNum = iVar17 + 1;
  pFVar2 = (this->ItemToModify).AllocatorInstance.Data;
  lVar19 = (longlong)iVar17 * 0x70;
  local_d8._8_4_ = uVar30;
  local_d8._0_8_ = (double)fVar4;
  local_d8._12_4_ = uVar31;
  local_c8._8_4_ = uVar24;
  local_c8._0_8_ = (double)fVar7;
  local_c8._12_4_ = uVar25;
  local_b8._8_4_ = uVar28;
  local_b8._0_8_ = (double)fVar5;
  local_b8._12_4_ = uVar29;
  local_a8._8_4_ = uVar22;
  local_a8._0_8_ = (double)fVar8;
  local_a8._12_4_ = uVar23;
  local_98._8_4_ = uVar26;
  local_98._0_8_ = (double)fVar6;
  local_98._12_4_ = uVar27;
  local_88._8_4_ = uVar20;
  local_88._0_8_ = (double)fVar9;
  local_88._12_4_ = uVar21;
  *(ulonglong *)(pFVar2 + lVar19) = CONCAT44(uStack_e4,local_e8);
  *(ulonglong *)(pFVar2 + lVar19 + 8) = CONCAT44(uStack_dc,uStack_e0);
  auVar15._8_4_ = uVar30;
  auVar15._0_8_ = (double)fVar4;
  auVar15._12_4_ = uVar31;
  *(undefined1 (*) [16])(pFVar2 + lVar19 + 0x10) = auVar15;
  auVar12._8_4_ = uVar24;
  auVar12._0_8_ = (double)fVar7;
  auVar12._12_4_ = uVar25;
  *(undefined1 (*) [16])(pFVar2 + lVar19 + 0x20) = auVar12;
  auVar14._8_4_ = uVar28;
  auVar14._0_8_ = (double)fVar5;
  auVar14._12_4_ = uVar29;
  *(undefined1 (*) [16])(pFVar2 + lVar19 + 0x30) = auVar14;
  auVar11._8_4_ = uVar22;
  auVar11._0_8_ = (double)fVar8;
  auVar11._12_4_ = uVar23;
  *(undefined1 (*) [16])(pFVar2 + lVar19 + 0x40) = auVar11;
  auVar13._8_4_ = uVar26;
  auVar13._0_8_ = (double)fVar6;
  auVar13._12_4_ = uVar27;
  *(undefined1 (*) [16])(pFVar2 + lVar19 + 0x50) = auVar13;
  auVar10._8_4_ = uVar20;
  auVar10._0_8_ = (double)fVar9;
  auVar10._12_4_ = uVar21;
  *(undefined1 (*) [16])(pFVar2 + lVar19 + 0x60) = auVar10;
  iVar17 = (this->ItemToModify).ArrayNum;
  local_110 = (longlong)iVar17;
  if (iVar17 < 1) {
    local_118 = 0;
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar3 = (code *)swi(3);
      pFVar18 = (FRigUnit_ModifyTransforms *)(*pcVar3)();
      return pFVar18;
    }
  }
  pFVar2 = (this->ItemToModify).AllocatorInstance.Data;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_104,local_108);
  *(undefined4 *)(pFVar2 + 8) = 0;
  return this;
}

// Execute @ 14a52ac90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ModifyTransforms::Execute
          (FRigUnit_ModifyTransforms *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigUnit_ModifyTransforms_PerItem_const_,int> local_18;
  
  local_18.DataPtr =
       (FRigUnit_ModifyTransforms_PerItem *)(this->ItemToModify).AllocatorInstance.Data;
  iVar1 = (this->ItemToModify).ArrayNum;
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

// RigVMExecute @ 14a54b2e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ModifyTransforms::RigVMExecute
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
  FRigUnit_ModifyTransforms_WorkData *pFVar13;
  FControlRigExecuteContext *pFVar14;
  TArrayView<FRigUnit_ModifyTransforms_PerItem_const_,int> local_48 [4];
  
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
  pFVar13 = (FRigUnit_ModifyTransforms_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar10,false,pFVar12->Offset + pFVar12->Index);
  local_48[0].DataPtr = *(FRigUnit_ModifyTransforms_PerItem **)puVar8;
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

// StaticExecute @ 14a583990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_ModifyTransforms::StaticExecute
          (FControlRigExecuteContext *param_1,
          TArrayView<FRigUnit_ModifyTransforms_PerItem_const_,int> *param_2,float param_3,
          float param_4,float param_5,EControlRigModifyBoneMode param_6,
          FRigUnit_ModifyTransforms_WorkData *param_7)

{
  __m128d *p_Var1;
  int iVar2;
  URigHierarchy *this;
  FRigTransformElement *this_00;
  bool bVar3;
  code *pcVar4;
  double *pdVar5;
  bool bVar6;
  uint uVar7;
  TTransform<double> *pTVar8;
  longlong lVar9;
  UScriptStruct *pUVar10;
  FRigCurrentAndInitialDirtyState *pFVar11;
  bool *pbVar12;
  FCachedRigElement *this_01;
  TTransform<double> *pTVar13;
  Type TVar14;
  FRigUnit_ModifyTransforms_PerItem *pFVar15;
  uint uVar16;
  FRigUnit_ModifyTransforms_PerItem *pFVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  undefined1 auStackY_618 [32];
  longlong local_5d0;
  TTransform<double> local_5b8;
  TTransform<double> local_558;
  TTransform<double> local_4f8;
  TTransform<double> local_498;
  TTransform<double> local_438;
  TTransform<double> local_3d8;
  TTransform<double> local_378;
  TTransform<double> local_318;
  TTransform<double> local_2b8;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_618;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    if ((param_7->CachedItems).ArrayNum == 0) {
      TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNum
                (&param_7->CachedItems,param_2->ArrayNum,Default);
    }
    fVar42 = param_4;
    if (param_5 <= param_4) {
      fVar42 = param_5;
    }
    if (param_4 <= param_5) {
      param_4 = param_5;
    }
    if (((fVar42 + __real_322bcc77 < param_3) &&
        (__real_322bcc77 <
         (float)((uint)(fVar42 - param_4) & __xmm_7fffffff7fffffff7fffffff7fffffff))) &&
       ((param_7->CachedItems).ArrayNum == param_2->ArrayNum)) {
      pFVar17 = param_2->DataPtr;
      fVar42 = (param_3 - fVar42) / (param_4 - fVar42);
      if (__real_3f800000 <= fVar42) {
        fVar42 = __real_3f800000;
      }
      if (fVar42 <= 0.0) {
        fVar42 = 0.0;
      }
      bVar3 = fVar42 < __real_3f800000;
      uVar16 = 0;
      pFVar15 = pFVar17 + param_2->ArrayNum;
      if (pFVar17 != pFVar15) {
        local_5d0 = 0;
        pTVar13 = &pFVar17->Transform;
        do {
          uVar7 = 0;
          if ((int)uVar16 < (param_7->CachedItems).ArrayNum) {
            uVar7 = ~uVar16 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_01 = (FCachedRigElement *)((param_7->CachedItems).AllocatorInstance.Data + local_5d0)
          ;
          bVar6 = FCachedRigElement::UpdateCache(this_01,&pFVar17->Item,this);
          if (bVar6) {
            uVar18 = *(undefined4 *)(pTVar13->Rotation).XY.m128d_f64;
            uVar19 = *(undefined4 *)((longlong)(pTVar13->Rotation).XY.m128d_f64 + 4);
            local_498.Rotation.XY.m128d_f64[0] = (pTVar13->Rotation).XY.m128d_f64[0];
            pdVar5 = (pTVar13->Rotation).XY.m128d_f64 + 1;
            uVar20 = *(undefined4 *)pdVar5;
            uVar21 = *(undefined4 *)((longlong)(pTVar13->Rotation).XY.m128d_f64 + 0xc);
            local_498.Rotation.XY.m128d_f64[1] = *pdVar5;
            p_Var1 = &(pTVar13->Rotation).ZW;
            uVar22 = *(undefined4 *)p_Var1->m128d_f64;
            uVar23 = *(undefined4 *)((longlong)(pTVar13->Rotation).ZW.m128d_f64 + 4);
            local_498.Rotation.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
            pdVar5 = (pTVar13->Rotation).ZW.m128d_f64 + 1;
            uVar24 = *(undefined4 *)pdVar5;
            uVar25 = *(undefined4 *)((longlong)(pTVar13->Rotation).ZW.m128d_f64 + 0xc);
            local_498.Rotation.ZW.m128d_f64[1] = *pdVar5;
            uVar26 = *(undefined4 *)(pTVar13->Translation).XY.m128d_f64;
            uVar27 = *(undefined4 *)((longlong)(pTVar13->Translation).XY.m128d_f64 + 4);
            local_498.Translation.XY.m128d_f64[0] = (pTVar13->Translation).XY.m128d_f64[0];
            pdVar5 = (pTVar13->Translation).XY.m128d_f64 + 1;
            uVar28 = *(undefined4 *)pdVar5;
            uVar29 = *(undefined4 *)((longlong)(pTVar13->Translation).XY.m128d_f64 + 0xc);
            local_498.Translation.XY.m128d_f64[1] = *pdVar5;
            p_Var1 = &(pTVar13->Translation).ZW;
            uVar30 = *(undefined4 *)p_Var1->m128d_f64;
            uVar31 = *(undefined4 *)((longlong)(pTVar13->Translation).ZW.m128d_f64 + 4);
            local_498.Translation.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
            pdVar5 = (pTVar13->Translation).ZW.m128d_f64 + 1;
            uVar32 = *(undefined4 *)pdVar5;
            uVar33 = *(undefined4 *)((longlong)(pTVar13->Translation).ZW.m128d_f64 + 0xc);
            local_498.Translation.ZW.m128d_f64[1] = *pdVar5;
            uVar34 = *(undefined4 *)(pTVar13->Scale3D).XY.m128d_f64;
            uVar35 = *(undefined4 *)((longlong)(pTVar13->Scale3D).XY.m128d_f64 + 4);
            local_498.Scale3D.XY.m128d_f64[0] = (pTVar13->Scale3D).XY.m128d_f64[0];
            pdVar5 = (pTVar13->Scale3D).XY.m128d_f64 + 1;
            uVar36 = *(undefined4 *)pdVar5;
            uVar37 = *(undefined4 *)((longlong)(pTVar13->Scale3D).XY.m128d_f64 + 0xc);
            local_498.Scale3D.XY.m128d_f64[1] = *pdVar5;
            p_Var1 = &(pTVar13->Scale3D).ZW;
            uVar38 = *(undefined4 *)p_Var1->m128d_f64;
            uVar39 = *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 4);
            local_498.Scale3D.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
            pdVar5 = (pTVar13->Scale3D).ZW.m128d_f64 + 1;
            uVar40 = *(undefined4 *)pdVar5;
            uVar41 = *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 0xc);
            local_498.Scale3D.ZW.m128d_f64[1] = *pdVar5;
            if (param_6 == OverrideLocal) {
              if (bVar3) {
                uVar7 = 0xffffffff;
                if (this_01->Index != 0xffff) {
                  uVar7 = (uint)this_01->Index;
                }
                URigHierarchy::GetLocalTransformByIndex(this,&local_2b8,uVar7,false);
                pTVar8 = FRigVMMathLibrary::LerpTransform(&local_d8,&local_2b8,&local_498,fVar42);
                uVar18 = *(undefined4 *)(pTVar8->Rotation).XY.m128d_f64;
                uVar19 = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 4);
                local_498.Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
                pdVar5 = (pTVar8->Rotation).XY.m128d_f64 + 1;
                uVar20 = *(undefined4 *)pdVar5;
                uVar21 = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 0xc);
                local_498.Rotation.XY.m128d_f64[1] = *pdVar5;
                p_Var1 = &(pTVar8->Rotation).ZW;
                uVar22 = *(undefined4 *)p_Var1->m128d_f64;
                uVar23 = *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 4);
                local_498.Rotation.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
                pdVar5 = (pTVar8->Rotation).ZW.m128d_f64 + 1;
                uVar24 = *(undefined4 *)pdVar5;
                uVar25 = *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 0xc);
                local_498.Rotation.ZW.m128d_f64[1] = *pdVar5;
                uVar26 = *(undefined4 *)(pTVar8->Translation).XY.m128d_f64;
                uVar27 = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 4);
                local_498.Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
                pdVar5 = (pTVar8->Translation).XY.m128d_f64 + 1;
                uVar28 = *(undefined4 *)pdVar5;
                uVar29 = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 0xc);
                local_498.Translation.XY.m128d_f64[1] = *pdVar5;
                p_Var1 = &(pTVar8->Translation).ZW;
                uVar30 = *(undefined4 *)p_Var1->m128d_f64;
                uVar31 = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 4);
                local_498.Translation.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
                pdVar5 = (pTVar8->Translation).ZW.m128d_f64 + 1;
                uVar32 = *(undefined4 *)pdVar5;
                uVar33 = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 0xc);
                local_498.Translation.ZW.m128d_f64[1] = *pdVar5;
                uVar34 = *(undefined4 *)(pTVar8->Scale3D).XY.m128d_f64;
                uVar35 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 4);
                local_498.Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
                pdVar5 = (pTVar8->Scale3D).XY.m128d_f64 + 1;
                uVar36 = *(undefined4 *)pdVar5;
                uVar37 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 0xc);
                local_498.Scale3D.XY.m128d_f64[1] = *pdVar5;
                p_Var1 = &(pTVar8->Scale3D).ZW;
                uVar38 = *(undefined4 *)p_Var1->m128d_f64;
                uVar39 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 4);
                local_498.Scale3D.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
                pdVar5 = (pTVar8->Scale3D).ZW.m128d_f64 + 1;
                uVar40 = *(undefined4 *)pdVar5;
                uVar41 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 0xc);
                local_498.Scale3D.ZW.m128d_f64[1] = *pdVar5;
              }
              uVar7 = 0xffffffff;
              if (this_01->Index != 0xffff) {
                uVar7 = (uint)this_01->Index;
              }
              local_4f8.Rotation.XY.m128d_f64[0]._0_4_ = uVar18;
              local_4f8.Rotation.XY.m128d_f64[0]._4_4_ = uVar19;
              local_4f8.Rotation.XY.m128d_f64[1]._0_4_ = uVar20;
              local_4f8.Rotation.XY.m128d_f64[1]._4_4_ = uVar21;
              local_4f8.Rotation.ZW.m128d_f64[0]._0_4_ = uVar22;
              local_4f8.Rotation.ZW.m128d_f64[0]._4_4_ = uVar23;
              local_4f8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar24;
              local_4f8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar25;
              local_4f8.Translation.XY.m128d_f64[0]._0_4_ = uVar26;
              local_4f8.Translation.XY.m128d_f64[0]._4_4_ = uVar27;
              local_4f8.Translation.XY.m128d_f64[1]._0_4_ = uVar28;
              local_4f8.Translation.XY.m128d_f64[1]._4_4_ = uVar29;
              local_4f8.Translation.ZW.m128d_f64[0]._0_4_ = uVar30;
              local_4f8.Translation.ZW.m128d_f64[0]._4_4_ = uVar31;
              local_4f8.Translation.ZW.m128d_f64[1]._0_4_ = uVar32;
              local_4f8.Translation.ZW.m128d_f64[1]._4_4_ = uVar33;
              local_4f8.Scale3D.XY.m128d_f64[0]._0_4_ = uVar34;
              local_4f8.Scale3D.XY.m128d_f64[0]._4_4_ = uVar35;
              local_4f8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar36;
              local_4f8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar37;
              local_4f8.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar38;
              local_4f8.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar39;
              local_4f8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar40;
              local_4f8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar41;
              URigHierarchy::SetLocalTransformByIndex(this,uVar7,&local_4f8,false,true,false,false);
LAB_14a58413c:
              uVar16 = uVar16 + 1;
              local_5d0 = local_5d0 + 0x20;
            }
            else if (param_6 == OverrideGlobal) {
              if (bVar3) {
                uVar7 = 0xffffffff;
                if (this_01->Index != 0xffff) {
                  uVar7 = (uint)this_01->Index;
                }
                URigHierarchy::GetGlobalTransformByIndex(this,&local_318,uVar7,false);
                pTVar8 = FRigVMMathLibrary::LerpTransform(&local_138,&local_318,&local_498,fVar42);
                uVar18 = *(undefined4 *)(pTVar8->Rotation).XY.m128d_f64;
                uVar19 = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 4);
                local_498.Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
                pdVar5 = (pTVar8->Rotation).XY.m128d_f64 + 1;
                uVar20 = *(undefined4 *)pdVar5;
                uVar21 = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 0xc);
                local_498.Rotation.XY.m128d_f64[1] = *pdVar5;
                p_Var1 = &(pTVar8->Rotation).ZW;
                uVar22 = *(undefined4 *)p_Var1->m128d_f64;
                uVar23 = *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 4);
                local_498.Rotation.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
                pdVar5 = (pTVar8->Rotation).ZW.m128d_f64 + 1;
                uVar24 = *(undefined4 *)pdVar5;
                uVar25 = *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 0xc);
                local_498.Rotation.ZW.m128d_f64[1] = *pdVar5;
                uVar26 = *(undefined4 *)(pTVar8->Translation).XY.m128d_f64;
                uVar27 = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 4);
                local_498.Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
                pdVar5 = (pTVar8->Translation).XY.m128d_f64 + 1;
                uVar28 = *(undefined4 *)pdVar5;
                uVar29 = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 0xc);
                local_498.Translation.XY.m128d_f64[1] = *pdVar5;
                p_Var1 = &(pTVar8->Translation).ZW;
                uVar30 = *(undefined4 *)p_Var1->m128d_f64;
                uVar31 = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 4);
                local_498.Translation.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
                pdVar5 = (pTVar8->Translation).ZW.m128d_f64 + 1;
                uVar32 = *(undefined4 *)pdVar5;
                uVar33 = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 0xc);
                local_498.Translation.ZW.m128d_f64[1] = *pdVar5;
                uVar34 = *(undefined4 *)(pTVar8->Scale3D).XY.m128d_f64;
                uVar35 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 4);
                local_498.Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
                pdVar5 = (pTVar8->Scale3D).XY.m128d_f64 + 1;
                uVar36 = *(undefined4 *)pdVar5;
                uVar37 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 0xc);
                local_498.Scale3D.XY.m128d_f64[1] = *pdVar5;
                p_Var1 = &(pTVar8->Scale3D).ZW;
                uVar38 = *(undefined4 *)p_Var1->m128d_f64;
                uVar39 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 4);
                local_498.Scale3D.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
                pdVar5 = (pTVar8->Scale3D).ZW.m128d_f64 + 1;
                uVar40 = *(undefined4 *)pdVar5;
                uVar41 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 0xc);
                local_498.Scale3D.ZW.m128d_f64[1] = *pdVar5;
              }
              uVar7 = 0xffffffff;
              if (this_01->Index != 0xffff) {
                uVar7 = (uint)this_01->Index;
              }
              local_558.Rotation.XY.m128d_f64[0]._0_4_ = uVar18;
              local_558.Rotation.XY.m128d_f64[0]._4_4_ = uVar19;
              local_558.Rotation.XY.m128d_f64[1]._0_4_ = uVar20;
              local_558.Rotation.XY.m128d_f64[1]._4_4_ = uVar21;
              local_558.Rotation.ZW.m128d_f64[0]._0_4_ = uVar22;
              local_558.Rotation.ZW.m128d_f64[0]._4_4_ = uVar23;
              local_558.Rotation.ZW.m128d_f64[1]._0_4_ = uVar24;
              local_558.Rotation.ZW.m128d_f64[1]._4_4_ = uVar25;
              local_558.Translation.XY.m128d_f64[0]._0_4_ = uVar26;
              local_558.Translation.XY.m128d_f64[0]._4_4_ = uVar27;
              local_558.Translation.XY.m128d_f64[1]._0_4_ = uVar28;
              local_558.Translation.XY.m128d_f64[1]._4_4_ = uVar29;
              local_558.Translation.ZW.m128d_f64[0]._0_4_ = uVar30;
              local_558.Translation.ZW.m128d_f64[0]._4_4_ = uVar31;
              local_558.Translation.ZW.m128d_f64[1]._0_4_ = uVar32;
              local_558.Translation.ZW.m128d_f64[1]._4_4_ = uVar33;
              local_558.Scale3D.XY.m128d_f64[0]._0_4_ = uVar34;
              local_558.Scale3D.XY.m128d_f64[0]._4_4_ = uVar35;
              local_558.Scale3D.XY.m128d_f64[1]._0_4_ = uVar36;
              local_558.Scale3D.XY.m128d_f64[1]._4_4_ = uVar37;
              local_558.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar38;
              local_558.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar39;
              local_558.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar40;
              local_558.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar41;
              URigHierarchy::SetGlobalTransformByIndex(this,uVar7,&local_558,false,true,false,false)
              ;
              uVar16 = uVar16 + 1;
              local_5d0 = local_5d0 + 0x20;
            }
            else if (param_6 == AdditiveLocal) {
              if (bVar3) {
                pTVar8 = FRigVMMathLibrary::LerpTransform
                                   (&local_1f8,&UE::Math::TTransform<double>::Identity,&local_498,
                                    fVar42);
                local_498.Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
                local_498.Rotation.XY.m128d_f64[1] = (pTVar8->Rotation).XY.m128d_f64[1];
                local_498.Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
                local_498.Rotation.ZW.m128d_f64[1] = (pTVar8->Rotation).ZW.m128d_f64[1];
                local_498.Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
                local_498.Translation.XY.m128d_f64[1] = (pTVar8->Translation).XY.m128d_f64[1];
                local_498.Translation.ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
                local_498.Translation.ZW.m128d_f64[1] = (pTVar8->Translation).ZW.m128d_f64[1];
                local_498.Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
                local_498.Scale3D.XY.m128d_f64[1] = (pTVar8->Scale3D).XY.m128d_f64[1];
                local_498.Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
                local_498.Scale3D.ZW.m128d_f64[1] = (pTVar8->Scale3D).ZW.m128d_f64[1];
              }
              this_00 = (FRigTransformElement *)this_01->Element;
              if (this_00 == (FRigTransformElement *)0x0) {
                return;
              }
              lVar9 = (**(code **)(this_00->_padding_ + 0x10))(this_00);
              pUVar10 = FRigTransformElement::StaticStruct();
              if (pUVar10 == (UScriptStruct *)0x0) {
                return;
              }
              iVar2 = (int)pUVar10->_padding_;
              if (*(int *)(lVar9 + 0x38) < iVar2) {
                return;
              }
              if ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar2 * 8) !=
                  &pUVar10->_padding_) {
                return;
              }
              TVar14 = CurrentLocal;
              pFVar11 = FRigTransformElement::GetDirtyState(this_00);
              pbVar12 = FRigTransformDirtyState::Get(&(pFVar11->Current).Local);
              if (*pbVar12 != false) {
                pFVar11 = FRigTransformElement::GetDirtyState(this_00);
                pbVar12 = FRigTransformDirtyState::Get((FRigTransformDirtyState *)pFVar11);
                if ((*pbVar12 != false) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("!TransformElement->GetDirtyState().IsDirty(ERigTransformType::CurrentGlobal)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_ModifyTransforms.cpp"
                                       ,0x54,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                TVar14 = CurrentGlobal;
              }
              pTVar8 = URigHierarchy::GetTransform(this,&local_198,this_00,TVar14);
              local_3d8.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_3d8.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_3d8.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_3d8.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_3d8.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_3d8.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_3d8.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_3d8.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_3d8.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_3d8.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_3d8.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_3d8.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_3d8.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_3d8.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_3d8.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              local_3d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_3d8.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_3d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              UE::Math::TTransform<double>::Multiply(&local_3d8,&local_498,pTVar8);
              local_498.Rotation.XY.m128d_f64[0] = local_3d8.Rotation.XY.m128d_f64[0];
              local_498.Rotation.XY.m128d_f64[1] = local_3d8.Rotation.XY.m128d_f64[1];
              local_498.Rotation.ZW.m128d_f64[0] = local_3d8.Rotation.ZW.m128d_f64[0];
              local_498.Rotation.ZW.m128d_f64[1] = local_3d8.Rotation.ZW.m128d_f64[1];
              local_498.Translation.XY.m128d_f64[0] = local_3d8.Translation.XY.m128d_f64[0];
              local_498.Translation.XY.m128d_f64[1] = local_3d8.Translation.XY.m128d_f64[1];
              local_498.Translation.ZW.m128d_f64[0] = local_3d8.Translation.ZW.m128d_f64[0];
              local_498.Translation.ZW.m128d_f64[1] = local_3d8.Translation.ZW.m128d_f64[1];
              local_498.Scale3D.XY.m128d_f64[0] = local_3d8.Scale3D.XY.m128d_f64[0];
              local_498.Scale3D.XY.m128d_f64[1] = local_3d8.Scale3D.XY.m128d_f64[1];
              local_498.Scale3D.ZW.m128d_f64[0] = local_3d8.Scale3D.ZW.m128d_f64[0];
              local_498.Scale3D.ZW.m128d_f64[1] = local_3d8.Scale3D.ZW.m128d_f64[1];
              URigHierarchy::SetTransform(this,this_00,&local_498,TVar14,true,false,false,false);
              uVar16 = uVar16 + 1;
              local_5d0 = local_5d0 + 0x20;
            }
            else {
              if (param_6 != AdditiveGlobal) goto LAB_14a58413c;
              if (bVar3) {
                pTVar8 = FRigVMMathLibrary::LerpTransform
                                   (&local_258,&UE::Math::TTransform<double>::Identity,&local_498,
                                    fVar42);
                local_498.Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
                local_498.Rotation.XY.m128d_f64[1] = (pTVar8->Rotation).XY.m128d_f64[1];
                local_498.Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
                local_498.Rotation.ZW.m128d_f64[1] = (pTVar8->Rotation).ZW.m128d_f64[1];
                local_498.Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
                local_498.Translation.XY.m128d_f64[1] = (pTVar8->Translation).XY.m128d_f64[1];
                local_498.Translation.ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
                local_498.Translation.ZW.m128d_f64[1] = (pTVar8->Translation).ZW.m128d_f64[1];
                local_498.Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
                local_498.Scale3D.XY.m128d_f64[1] = (pTVar8->Scale3D).XY.m128d_f64[1];
                local_498.Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
                local_498.Scale3D.ZW.m128d_f64[1] = (pTVar8->Scale3D).ZW.m128d_f64[1];
              }
              uVar7 = 0xffffffff;
              if (this_01->Index != 0xffff) {
                uVar7 = (uint)this_01->Index;
              }
              URigHierarchy::GetGlobalTransformByIndex(this,&local_378,uVar7,false);
              local_438.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_438.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_438.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_438.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_438.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_438.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_438.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_438.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_438.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_438.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_438.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_438.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_438.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_438.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_438.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              local_438.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_438.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_438.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              UE::Math::TTransform<double>::Multiply(&local_438,&local_378,&local_498);
              uVar7 = 0xffffffff;
              local_498.Rotation.XY.m128d_f64[0] = local_438.Rotation.XY.m128d_f64[0];
              local_498.Rotation.XY.m128d_f64[1] = local_438.Rotation.XY.m128d_f64[1];
              local_498.Rotation.ZW.m128d_f64[0] = local_438.Rotation.ZW.m128d_f64[0];
              local_498.Rotation.ZW.m128d_f64[1] = local_438.Rotation.ZW.m128d_f64[1];
              local_498.Translation.XY.m128d_f64[0] = local_438.Translation.XY.m128d_f64[0];
              local_498.Translation.XY.m128d_f64[1] = local_438.Translation.XY.m128d_f64[1];
              local_498.Translation.ZW.m128d_f64[0] = local_438.Translation.ZW.m128d_f64[0];
              local_498.Translation.ZW.m128d_f64[1] = local_438.Translation.ZW.m128d_f64[1];
              local_498.Scale3D.XY.m128d_f64[0] = local_438.Scale3D.XY.m128d_f64[0];
              local_498.Scale3D.XY.m128d_f64[1] = local_438.Scale3D.XY.m128d_f64[1];
              local_498.Scale3D.ZW.m128d_f64[0] = local_438.Scale3D.ZW.m128d_f64[0];
              local_498.Scale3D.ZW.m128d_f64[1] = local_438.Scale3D.ZW.m128d_f64[1];
              if (this_01->Index != 0xffff) {
                uVar7 = (uint)this_01->Index;
              }
              local_5b8.Rotation.XY.m128d_f64[0] = local_438.Rotation.XY.m128d_f64[0];
              local_5b8.Rotation.XY.m128d_f64[1] = local_438.Rotation.XY.m128d_f64[1];
              local_5b8.Rotation.ZW.m128d_f64[0] = local_438.Rotation.ZW.m128d_f64[0];
              local_5b8.Rotation.ZW.m128d_f64[1] = local_438.Rotation.ZW.m128d_f64[1];
              local_5b8.Translation.XY.m128d_f64[0] = local_438.Translation.XY.m128d_f64[0];
              local_5b8.Translation.XY.m128d_f64[1] = local_438.Translation.XY.m128d_f64[1];
              local_5b8.Translation.ZW.m128d_f64[0] = local_438.Translation.ZW.m128d_f64[0];
              local_5b8.Translation.ZW.m128d_f64[1] = local_438.Translation.ZW.m128d_f64[1];
              local_5b8.Scale3D.XY.m128d_f64[0] = local_438.Scale3D.XY.m128d_f64[0];
              local_5b8.Scale3D.XY.m128d_f64[1] = local_438.Scale3D.XY.m128d_f64[1];
              local_5b8.Scale3D.ZW.m128d_f64[0] = local_438.Scale3D.ZW.m128d_f64[0];
              local_5b8.Scale3D.ZW.m128d_f64[1] = local_438.Scale3D.ZW.m128d_f64[1];
              URigHierarchy::SetGlobalTransformByIndex(this,uVar7,&local_5b8,false,true,false,false)
              ;
              uVar16 = uVar16 + 1;
              local_5d0 = local_5d0 + 0x20;
            }
          }
          pFVar17 = pFVar17 + 1;
          pTVar13 = (TTransform<double> *)((longlong)(pTVar13 + 1) + 0x10);
        } while (pFVar17 != pFVar15);
      }
    }
  }
  return;
}

