// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4864c0

UScriptStruct * __cdecl FRigUnit_FABRIKItemArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray,(UObject *)pUVar1,
                         L"RigUnit_FABRIKItemArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKItemArray.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FABRIKItemArray.OuterSingleton;
}

// FRigUnit_FABRIKItemArray @ 14a50f200

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_FABRIKItemArray * __thiscall
FRigUnit_FABRIKItemArray::FRigUnit_FABRIKItemArray(FRigUnit_FABRIKItemArray *this)

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
  *(undefined ***)&this->field_0x8 = &___7FRigVMExecutePin__6B_;
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  *(undefined ***)this = &___7FRigUnit_FABRIKItemArray__6B_;
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
  this->bPropagateToChildren = true;
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
  this->bSetEffectorTransform = true;
  return this;
}

// Execute @ 14a5274e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FABRIKItemArray::Execute(FRigUnit_FABRIKItemArray *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
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
  StaticExecute(param_1,&local_18,&this->EffectorTransform,this->Precision,this->Weight,
                this->bPropagateToChildren,this->MaxIterations,&this->WorkData,
                this->bSetEffectorTransform);
  return;
}

// Execute @ 14a5275a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_FABRIKItemArray::Execute(FRigUnit_FABRIKItemArray *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2c8 [32];
  TArrayView<FRigElementKey_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->EffectorTransform,
                this->Precision,this->Weight,this->bPropagateToChildren,this->MaxIterations,
                &this->WorkData,this->bSetEffectorTransform);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530ba0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_FABRIKItemArray::GetExecuteContextStruct(FRigUnit_FABRIKItemArray *this)

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

// RigVMExecute @ 14a53e510

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FABRIKItemArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uchar *puVar8;
  TTransform<double> *pTVar9;
  float *pfVar10;
  FRigVMMemoryHandle *pFVar11;
  uchar *puVar12;
  int *piVar13;
  FRigVMSlice *pFVar14;
  FRigUnit_FABRIK_WorkData *pFVar15;
  FControlRigExecuteContext *pFVar16;
  TArrayView<FRigElementKey_const_,int> local_58 [3];
  
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
    pTVar9 = (TTransform<double> *)pFVar11[1].Ptr;
  }
  else {
    pTVar9 = (TTransform<double> *)
             FRigVMPropertyPath::GetData_Internal
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
    pfVar10 = (float *)pFVar11[2].Ptr;
  }
  else {
    pfVar10 = (float *)FRigVMPropertyPath::GetData_Internal
                                 (pFVar11[2].PropertyPath,pFVar11[2].Ptr,pFVar11[2].Property);
  }
  fVar1 = *pfVar10;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  fVar2 = *pfVar10;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  bVar6 = (bool)*puVar12;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  piVar13 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  iVar4 = *piVar13;
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar14 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar15 = (FRigUnit_FABRIK_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar11,false,pFVar14->Offset + pFVar14->Index);
  pFVar11 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  puVar12 = FRigVMMemoryHandle::GetData_Internal(pFVar11,true,-1);
  local_58[0].DataPtr = *(FRigElementKey **)puVar8;
  local_58[0].ArrayNum = *(int *)(puVar8 + 8);
  bVar3 = (bool)*puVar12;
  if (local_58[0].ArrayNum < 0) {
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
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar16,local_58,pTVar9,fVar1,fVar2,bVar6,iVar4,pFVar15,bVar3);
  return;
}

// StaticExecute @ 14a56f0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a56f578) */
/* WARNING: Removing unreachable block (ram,0x00014a56f8eb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FABRIKItemArray::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          TTransform<double> *param_3,float param_4,float param_5,bool param_6,int param_7,
          FRigUnit_FABRIK_WorkData *param_8,bool param_9)

{
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FRigElementKey *pFVar3;
  undefined8 uVar4;
  ushort uVar5;
  URigHierarchy *this;
  FCachedRigElement *pFVar6;
  FFABRIKChainLink *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [12];
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  FRigBaseElement *pFVar20;
  double dVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  FRigElementKey *pFVar33;
  FScriptContainerElement *pFVar34;
  TTransform<double> *pTVar35;
  TTransform<double> *pTVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  double extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auVar54 [16];
  double dVar53;
  double dVar56;
  undefined1 auVar55 [16];
  double dVar57;
  double dVar58;
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  double dVar63;
  undefined1 auStackY_8f8 [32];
  longlong local_8a8;
  longlong local_8a0;
  ForAnyElementType local_898;
  int local_890 [2];
  FScriptContainerElement *local_888;
  TTransform<double> *local_880;
  FScriptContainerElement *local_878;
  FCachedRigElement local_870;
  double local_850;
  double dStack_848;
  double local_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 local_810;
  undefined8 local_808;
  undefined1 local_800 [16];
  double local_7f0;
  double local_7e8;
  uint local_7e0;
  uint local_7dc;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  FScriptContainerElement *local_7b0;
  FRigElementKey local_7a8;
  double local_798;
  double dStack_790;
  double local_788;
  double dStack_780;
  double local_778;
  double local_770;
  double local_768;
  TVector<double>_u_0 local_760;
  double local_748;
  double dStack_740;
  double local_738;
  double local_730;
  double dStack_728;
  double local_720;
  double local_718;
  double dStack_710;
  double local_708;
  double local_6f0;
  double local_6e8;
  double dStack_6e0;
  double local_6d8;
  double local_6c0;
  TTransform<double> local_6b8;
  TTransform<double> local_658;
  TTransform<double> local_5f8;
  TTransform<double> local_598;
  double local_538;
  double dStack_530;
  TTransform<double> local_518;
  TTransform<double> local_4b8;
  TTransform<double> local_458;
  TTransform<double> local_3f8;
  TTransform<double> local_398;
  TTransform<double> local_338;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_8f8;
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    pTVar1 = &param_8->CachedItems;
    uVar27 = 0xffffffff;
    lVar37 = 0x20;
    local_880 = param_3;
    if (((param_8->CachedItems).ArrayNum == 0) && (0 < param_2->ArrayNum)) {
      pFVar33 = param_2->DataPtr;
      pFVar3 = pFVar33 + param_2->ArrayNum;
      for (; pFVar33 != pFVar3; pFVar33 = pFVar33 + 1) {
        local_7a8.Type = pFVar33->Type;
        local_7a8._1_3_ = *(undefined3 *)&pFVar33->field_0x1;
        local_7a8.Name.ComparisonIndex.Value = (pFVar33->Name).ComparisonIndex.Value;
        local_7a8.Name.Number = (pFVar33->Name).Number;
        local_870.Element = (FRigBaseElement *)0x0;
        local_870.Key._0_4_ = local_870.Key._0_4_ & 0xffffff00;
        local_870.Key.Name.ComparisonIndex.Value = 0;
        local_870.Key.Name.Number = 0;
        local_870.Index = 0xffff;
        local_870.ContainerVersion = -1;
        FCachedRigElement::UpdateCache(&local_870,&local_7a8,this);
        pFVar6 = (FCachedRigElement *)(pTVar1->AllocatorInstance).Data;
        if (((pFVar6 <= &local_870) && (&local_870 < pFVar6 + (param_8->CachedItems).ArrayMax)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar23 = (param_8->CachedItems).ArrayNum;
        if (iVar23 == (param_8->CachedItems).ArrayMax) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar1->AllocatorInstance,&(param_8->CachedItems).ArrayMax);
        }
        (param_8->CachedItems).ArrayNum = iVar23 + 1;
        pFVar34 = (pTVar1->AllocatorInstance).Data;
        pFVar29 = pFVar34 + (longlong)iVar23 * 0x20;
        *(ulonglong *)pFVar29 =
             CONCAT44(local_870.Key.Name.ComparisonIndex.Value,local_870.Key._0_4_);
        *(ulonglong *)(pFVar29 + 8) =
             CONCAT26(local_870._14_2_,CONCAT24(local_870.Index,local_870.Key.Name.Number));
        pFVar34 = pFVar34 + (longlong)iVar23 * 0x20 + 0x10;
        *(ulonglong *)pFVar34 = CONCAT44(local_870._20_4_,local_870.ContainerVersion);
        *(FRigBaseElement **)(pFVar34 + 8) = local_870.Element;
      }
      iVar23 = (param_8->CachedItems).ArrayNum;
      uVar30 = iVar23 - 1;
      uVar32 = 0;
      if ((int)uVar30 < iVar23) {
        uVar32 = ~uVar30 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar34 = (pTVar1->AllocatorInstance).Data;
      lVar28 = (longlong)(param_8->CachedItems).ArrayNum * 0x20;
      pFVar29 = pFVar34 + lVar28 + -0x20;
      uVar4 = *(undefined8 *)pFVar29;
      uVar17 = *(undefined8 *)(pFVar29 + 8);
      (param_8->CachedEffector).Key.Type = (char)uVar4;
      *(int3 *)&(param_8->CachedEffector).Key.field_0x1 = (int3)((ulonglong)uVar4 >> 8);
      (param_8->CachedEffector).Key.Name.ComparisonIndex =
           (FNameEntryId)(int)((ulonglong)uVar4 >> 0x20);
      *(undefined8 *)&(param_8->CachedEffector).Key.Name.Number = uVar17;
      pFVar34 = pFVar34 + lVar28 + -0x10;
      pFVar20 = *(FRigBaseElement **)(pFVar34 + 8);
      *(undefined8 *)&(param_8->CachedEffector).ContainerVersion = *(undefined8 *)pFVar34;
      (param_8->CachedEffector).Element = pFVar20;
    }
    if (0 < (param_8->CachedItems).ArrayNum) {
      piVar2 = &(param_8->Chain).ArrayMax;
      pFVar7 = (FFABRIKChainLink *)(param_8->Chain).AllocatorInstance.Data;
      iVar23 = (param_8->Chain).ArrayNum;
      if ((param_8->Chain).ArrayMax < 0) {
        DestructItems<FFABRIKChainLink,int>(pFVar7,iVar23);
        (param_8->Chain).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,0,(ForAnyElementType *)param_8,0,piVar2);
        }
      }
      else {
        DestructItems<FFABRIKChainLink,int>(pFVar7,iVar23);
        (param_8->Chain).ArrayNum = 0;
      }
      local_898.Data = (FScriptContainerElement *)0x0;
      iVar23 = (param_8->CachedItems).ArrayNum;
      local_890[0] = 0;
      local_890[1] = 0;
      iVar24 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x60,0x10,iVar23,&local_898,local_890,local_890 + 1);
      DefaultConstructItems<UE::Math::TTransform<double>,int>
                (local_898.Data + (longlong)iVar24 * 0x60,iVar23);
      iVar23 = (param_8->CachedItems).ArrayNum;
      fVar62 = 0.0;
      if ((iVar23 < 1) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar29 = (pTVar1->AllocatorInstance).Data;
      uVar32 = 0xffffffff;
      uVar5 = *(ushort *)(pFVar29 + 0xc);
      if (uVar5 != 0xffff) {
        uVar32 = (uint)uVar5;
      }
      URigHierarchy::GetGlobalTransformByIndex(this,&local_398,uVar32,false);
      uVar17 = _UNK_15076ad98;
      uVar4 = ___xmm_0000000000000000bff0000000000000;
      pFVar34 = (param_8->Chain).AllocatorInstance.Data;
      local_830 = 0;
      local_810 = 0;
      local_808 = 0;
      local_838 = 0;
      local_818 = 0;
      local_720 = local_398.Translation.ZW.m128d_f64[0];
      local_840 = local_398.Translation.ZW.m128d_f64[0];
      local_730 = local_398.Translation.XY.m128d_f64[0];
      dStack_728 = local_398.Translation.XY.m128d_f64[1];
      local_850 = local_398.Translation.XY.m128d_f64[0];
      dStack_848 = local_398.Translation.XY.m128d_f64[1];
      local_828 = ___xmm_0000000000000000bff0000000000000;
      uStack_820 = _UNK_15076ad98;
      if (((pFVar34 <= (FScriptContainerElement *)&local_850) &&
          ((FScriptContainerElement *)&local_850 < pFVar34 + (longlong)*piVar2 * 0x50)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar24 = (param_8->Chain).ArrayNum;
      if (iVar24 == *piVar2) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,(ForAnyElementType *)param_8,piVar2);
      }
      (param_8->Chain).ArrayNum = iVar24 + 1;
      pFVar34 = (param_8->Chain).AllocatorInstance.Data;
      lVar28 = (longlong)iVar24;
      *(double *)(pFVar34 + lVar28 * 0x50) = local_850;
      *(double *)(pFVar34 + lVar28 * 0x50 + 8) = dStack_848;
      *(double *)(pFVar34 + lVar28 * 0x50 + 0x10) = local_840;
      *(undefined8 *)(pFVar34 + lVar28 * 0x50 + 0x18) = local_838;
      *(undefined4 *)(pFVar34 + lVar28 * 0x50 + 0x20) = (undefined4)local_830;
      *(undefined4 *)(pFVar34 + lVar28 * 0x50 + 0x24) = local_830._4_4_;
      *(undefined8 *)(pFVar34 + lVar28 * 0x50 + 0x28) = local_828;
      *(undefined8 *)(pFVar34 + lVar28 * 0x50 + 0x28 + 8) = uStack_820;
      *(undefined8 *)(pFVar34 + lVar28 * 0x50 + 0x38) = local_818;
      *(undefined8 *)(pFVar34 + lVar28 * 0x50 + 0x40) = 0;
      *(undefined8 *)(pFVar34 + lVar28 * 0x50 + 0x40) = local_810;
      *(undefined4 *)(pFVar34 + lVar28 * 0x50 + 0x48) = (undefined4)local_808;
      *(undefined4 *)(pFVar34 + lVar28 * 0x50 + 0x4c) = local_808._4_4_;
      local_808 = 0;
      local_810 = 0;
      uVar5 = *(ushort *)(pFVar29 + 0xc);
      uVar30 = 0xffffffff;
      uVar32 = 0xffffffff;
      if (uVar5 != 0xffff) {
        uVar32 = (uint)uVar5;
      }
      URigHierarchy::GetGlobalTransformByIndex(this,&local_4b8,uVar32,false);
      if ((local_890[0] < 1) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar32 = 1;
      *(double *)local_898.Data = local_4b8.Rotation.XY.m128d_f64[0];
      *(double *)(local_898.Data + 8) = local_4b8.Rotation.XY.m128d_f64[1];
      *(double *)(local_898.Data + 0x10) = local_4b8.Rotation.ZW.m128d_f64[0];
      *(double *)(local_898.Data + 0x18) = local_4b8.Rotation.ZW.m128d_f64[1];
      *(double *)(local_898.Data + 0x20) = local_4b8.Translation.XY.m128d_f64[0];
      *(double *)(local_898.Data + 0x28) = local_4b8.Translation.XY.m128d_f64[1];
      *(double *)(local_898.Data + 0x30) = local_4b8.Translation.ZW.m128d_f64[0];
      *(double *)(local_898.Data + 0x38) = local_4b8.Translation.ZW.m128d_f64[1];
      *(double *)(local_898.Data + 0x40) = local_4b8.Scale3D.XY.m128d_f64[0];
      *(double *)(local_898.Data + 0x48) = local_4b8.Scale3D.XY.m128d_f64[1];
      *(double *)(local_898.Data + 0x50) = local_4b8.Scale3D.ZW.m128d_f64[0];
      *(double *)(local_898.Data + 0x58) = local_4b8.Scale3D.ZW.m128d_f64[1];
      iVar24 = (param_8->CachedItems).ArrayNum;
      if (1 < iVar24) {
        do {
          uVar25 = 0;
          if ((int)uVar32 < iVar24) {
            uVar25 = ~uVar32 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar5 = *(ushort *)((pTVar1->AllocatorInstance).Data + lVar37 + 0xc);
          uVar25 = uVar30;
          if (uVar5 != 0xffff) {
            uVar25 = (uint)uVar5;
          }
          URigHierarchy::GetGlobalTransformByIndex(this,&local_518,uVar25,false);
          uVar25 = 0;
          if ((int)(uVar32 - 1) < (param_8->CachedItems).ArrayNum) {
            uVar25 = -uVar32 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar25 = 0xffffffff;
          uVar5 = *(ushort *)((pTVar1->AllocatorInstance).Data + lVar37 + -0x14);
          if (uVar5 != 0xffff) {
            uVar25 = (uint)uVar5;
          }
          URigHierarchy::GetGlobalTransformByIndex(this,&local_338,uVar25,false);
          local_800._8_8_ = local_518.Translation.XY.m128d_f64[1];
          local_800._0_8_ = local_518.Translation.XY.m128d_f64[0];
          auVar16._4_8_ = extraout_XMM0_Qb;
          auVar16._0_4_ = (int)((ulonglong)local_518.Translation.XY.m128d_f64[0] >> 0x20);
          auVar46._0_8_ = auVar16._0_8_ << 0x20;
          auVar46._8_4_ = SUB84(local_518.Translation.XY.m128d_f64[1],0);
          auVar46._12_4_ = (int)((ulonglong)local_518.Translation.XY.m128d_f64[1] >> 0x20);
          pFVar29 = (param_8->Chain).AllocatorInstance.Data;
          uVar25 = (param_8->Chain).ArrayNum;
          local_718 = local_338.Translation.XY.m128d_f64[0];
          dStack_710 = local_338.Translation.XY.m128d_f64[1];
          local_7c0 = 0;
          dVar57 = local_338.Translation.XY.m128d_f64[1] - auVar46._8_8_;
          local_708 = local_338.Translation.ZW.m128d_f64[0];
          local_7b8 = 0;
          local_7c8 = 0;
          local_6f0 = local_518.Translation.ZW.m128d_f64[0];
          local_6c0 = local_518.Translation.ZW.m128d_f64[0];
          local_7f0 = local_518.Translation.ZW.m128d_f64[0];
          local_7d8 = uVar4;
          uStack_7d0 = uVar17;
          fVar60 = (float)SQRT(dVar57 * dVar57 +
                               (local_338.Translation.XY.m128d_f64[0] -
                               local_518.Translation.XY.m128d_f64[0]) *
                               (local_338.Translation.XY.m128d_f64[0] -
                               local_518.Translation.XY.m128d_f64[0]) +
                               (local_338.Translation.ZW.m128d_f64[0] -
                               local_518.Translation.ZW.m128d_f64[0]) *
                               (local_338.Translation.ZW.m128d_f64[0] -
                               local_518.Translation.ZW.m128d_f64[0]));
          local_7e8 = (double)fVar60;
          local_7e0 = uVar32;
          local_7dc = uVar25;
          if (((pFVar29 <= (FScriptContainerElement *)local_800) &&
              ((FScriptContainerElement *)local_800 <
               pFVar29 + (longlong)(param_8->Chain).ArrayMax * 0x50)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar24 = (param_8->Chain).ArrayNum;
          if (iVar24 == (param_8->Chain).ArrayMax) {
            iVar24 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,(ForAnyElementType *)param_8,&(param_8->Chain).ArrayMax);
          }
          dVar52 = local_518.Scale3D.ZW.m128d_f64[1];
          dVar15 = local_518.Scale3D.ZW.m128d_f64[0];
          dVar14 = local_518.Scale3D.XY.m128d_f64[1];
          dVar56 = local_518.Scale3D.XY.m128d_f64[0];
          dVar53 = local_518.Translation.ZW.m128d_f64[1];
          dVar13 = local_518.Translation.ZW.m128d_f64[0];
          dVar12 = local_518.Translation.XY.m128d_f64[1];
          dVar58 = local_518.Translation.XY.m128d_f64[0];
          dVar63 = local_518.Rotation.ZW.m128d_f64[1];
          dVar10 = local_518.Rotation.ZW.m128d_f64[0];
          dVar21 = local_518.Rotation.XY.m128d_f64[1];
          dVar57 = local_518.Rotation.XY.m128d_f64[0];
          lVar28 = (longlong)iVar24;
          (param_8->Chain).ArrayNum = iVar24 + 1;
          pFVar29 = (param_8->Chain).AllocatorInstance.Data;
          *(undefined8 *)(pFVar29 + lVar28 * 0x50) = local_800._0_8_;
          *(undefined8 *)(pFVar29 + lVar28 * 0x50 + 8) = local_800._8_8_;
          *(double *)(pFVar29 + lVar28 * 0x50 + 0x10) = local_7f0;
          *(double *)(pFVar29 + lVar28 * 0x50 + 0x18) = local_7e8;
          *(uint *)(pFVar29 + lVar28 * 0x50 + 0x20) = local_7e0;
          *(uint *)(pFVar29 + lVar28 * 0x50 + 0x24) = local_7dc;
          *(undefined8 *)(pFVar29 + lVar28 * 0x50 + 0x28) = local_7d8;
          *(undefined8 *)(pFVar29 + lVar28 * 0x50 + 0x28 + 8) = uStack_7d0;
          *(undefined8 *)(pFVar29 + lVar28 * 0x50 + 0x38) = local_7c8;
          *(undefined8 *)(pFVar29 + lVar28 * 0x50 + 0x40) = 0;
          *(undefined8 *)(pFVar29 + lVar28 * 0x50 + 0x40) = local_7c0;
          *(undefined4 *)(pFVar29 + lVar28 * 0x50 + 0x48) = (undefined4)local_7b8;
          *(undefined4 *)(pFVar29 + lVar28 * 0x50 + 0x4c) = local_7b8._4_4_;
          local_7b8 = 0;
          local_7c0 = 0;
          fVar62 = fVar62 + fVar60;
          uVar26 = 0;
          if ((int)uVar25 < local_890[0]) {
            uVar26 = ~uVar25 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar28 = (longlong)(int)uVar25 * 0x60;
          uVar32 = uVar32 + 1;
          lVar37 = lVar37 + 0x20;
          *(double *)(local_898.Data + lVar28) = dVar57;
          *(double *)(local_898.Data + lVar28 + 8) = dVar21;
          *(double *)(local_898.Data + lVar28 + 0x10) = dVar10;
          *(double *)(local_898.Data + lVar28 + 0x10 + 8) = dVar63;
          *(double *)(local_898.Data + lVar28 + 0x20) = dVar58;
          *(double *)(local_898.Data + lVar28 + 0x20 + 8) = dVar12;
          *(double *)(local_898.Data + lVar28 + 0x30) = dVar13;
          *(double *)(local_898.Data + lVar28 + 0x30 + 8) = dVar53;
          *(double *)(local_898.Data + lVar28 + 0x40) = dVar56;
          *(double *)(local_898.Data + lVar28 + 0x40 + 8) = dVar14;
          *(double *)(local_898.Data + lVar28 + 0x50) = dVar15;
          *(double *)(local_898.Data + lVar28 + 0x50 + 8) = dVar52;
          iVar24 = (param_8->CachedItems).ArrayNum;
        } while ((int)uVar32 < iVar24);
      }
      pTVar36 = local_880;
      local_760._s_0.X = (local_880->Translation).XY.m128d_f64[0];
      local_760._s_0.Y = (local_880->Translation).XY.m128d_f64[1];
      local_760._s_0.Z = (local_880->Translation).ZW.m128d_f64[0];
      bVar22 = AnimationCore::SolveFabrik
                         (&param_8->Chain,(TVector<double> *)&local_760._s_0,(double)fVar62,
                          (double)param_4,param_7);
      dVar21 = __real_bff0000000000000;
      dVar57 = __real_3ff0000000000000;
      fVar60 = __real_3f800000;
      fVar62 = __real_322bcc77;
      if (bVar22) {
        uVar32 = 0;
        if (0 < iVar23 + -1) {
          pFVar29 = (FScriptContainerElement *)0x0;
          do {
            uVar25 = 0;
            if ((int)uVar32 < (param_8->Chain).ArrayNum) {
              uVar25 = ~uVar32 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar32 = uVar32 + 1;
            pFVar34 = pFVar29 + (longlong)(param_8->Chain).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar32 < (param_8->Chain).ArrayNum) {
              uVar25 = ~uVar32 >> 0x1f;
            }
            local_878 = pFVar34;
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar25 = *(uint *)(pFVar34 + 0x20);
            local_888 = pFVar29 + 0x50;
            pFVar34 = (param_8->Chain).AllocatorInstance.Data;
            uVar26 = 0;
            if ((int)uVar25 < (param_8->CachedItems).ArrayNum) {
              uVar26 = ~uVar25 >> 0x1f;
            }
            local_7b0 = local_888;
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar8 = (pTVar1->AllocatorInstance).Data;
            uVar26 = *(uint *)(pFVar29 + (longlong)(pFVar34 + 0x70));
            uVar31 = 0;
            if ((int)uVar26 < (param_8->CachedItems).ArrayNum) {
              uVar31 = ~uVar26 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar31 = 0xffffffff;
            uVar5 = *(ushort *)
                     ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar26 * 0x20 + 0xc);
            if (uVar5 != 0xffff) {
              uVar31 = (uint)uVar5;
            }
            URigHierarchy::GetGlobalTransformByIndex(this,&local_2d8,uVar31,false);
            dVar63 = local_2d8.Translation.XY.m128d_f64[1];
            dVar10 = local_2d8.Translation.XY.m128d_f64[0];
            uVar5 = *(ushort *)(pFVar8 + (longlong)(int)uVar25 * 0x20 + 0xc);
            uVar25 = 0xffffffff;
            local_738 = local_2d8.Translation.ZW.m128d_f64[0];
            local_748 = local_2d8.Translation.XY.m128d_f64[0];
            dStack_740 = local_2d8.Translation.XY.m128d_f64[1];
            if (uVar5 != 0xffff) {
              uVar25 = (uint)uVar5;
            }
            URigHierarchy::GetGlobalTransformByIndex(this,&local_278,uVar25,false);
            pFVar29 = local_878;
            dVar10 = dVar10 - local_278.Translation.XY.m128d_f64[0];
            dVar58 = local_738 - local_278.Translation.ZW.m128d_f64[0];
            local_6e8 = local_278.Translation.XY.m128d_f64[0];
            dStack_6e0 = local_278.Translation.XY.m128d_f64[1];
            dVar15 = *(double *)(local_7b0 + (longlong)pFVar34) - *(double *)local_878;
            dVar12 = *(double *)(local_7b0 + (longlong)(pFVar34 + 8)) - *(double *)(local_878 + 8);
            dVar14 = *(double *)(local_7b0 + (longlong)(pFVar34 + 0x10)) -
                     *(double *)(local_878 + 0x10);
            local_6d8 = local_278.Translation.ZW.m128d_f64[0];
            dVar63 = dVar63 - local_278.Translation.XY.m128d_f64[1];
            local_778 = dVar57 / SQRT(dVar63 * dVar63 + dVar10 * dVar10 + dVar58 * dVar58);
            dVar63 = local_778 * dVar63;
            dVar58 = local_778 * dVar58;
            local_770 = dVar57 / SQRT(dVar12 * dVar12 + dVar15 * dVar15 + dVar14 * dVar14);
            dVar10 = local_778 * dVar10;
            dVar14 = dVar14 * local_770;
            dVar12 = dVar12 * local_770;
            dVar15 = dVar15 * local_770;
            dVar13 = dVar14 * dVar63 - dVar12 * dVar58;
            dVar53 = dVar15 * dVar58 - dVar10 * dVar14;
            dVar56 = dVar10 * dVar12 - dVar15 * dVar63;
            dVar52 = dVar53 * dVar53 + dVar13 * dVar13 + dVar56 * dVar56;
            uVar4 = dVar13;
            uVar17 = dVar53;
            uVar18 = dVar56;
            if ((dVar52 != __real_3ff0000000000000) &&
               (uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
               uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
               uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
               __real_3e45798ee0000000 <= dVar52)) {
              local_768 = dVar57 / SQRT(dVar52);
              uVar4 = dVar13 * local_768;
              uVar17 = dVar53 * local_768;
              uVar18 = dVar56 * local_768;
            }
            dVar10 = dVar12 * dVar63 + dVar10 * dVar15 + dVar58 * dVar14;
            dVar63 = dVar21;
            if ((dVar21 <= dVar10) && (dVar63 = dVar10, __real_3ff0000000000000 <= dVar10)) {
              dVar63 = __real_3ff0000000000000;
            }
            acos(dVar63);
            __libm_sse2_sincos_();
            uVar25 = *(uint *)(pFVar29 + 0x24);
            local_798 = extraout_XMM0_Qa * (double)uVar4;
            dStack_790 = extraout_XMM0_Qa * (double)uVar17;
            local_788 = extraout_XMM0_Qa * (double)uVar18;
            uVar26 = 0;
            if ((int)uVar25 < local_890[0]) {
              uVar26 = ~uVar25 >> 0x1f;
            }
            dStack_780 = extraout_XMM0_Qb_00;
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar37 = (longlong)(int)uVar25 * 0x60;
            auVar54._8_4_ = SUB84(local_798,0);
            auVar54._0_8_ = local_798;
            auVar54._12_4_ = (int)((ulonglong)local_798 >> 0x20);
            auVar48._8_4_ = SUB84(dStack_790,0);
            auVar48._0_8_ = dStack_790;
            auVar48._12_4_ = (int)((ulonglong)dStack_790 >> 0x20);
            auVar42._8_4_ = SUB84(dStack_780,0);
            auVar42._0_8_ = dStack_780;
            auVar42._12_4_ = (int)((ulonglong)dStack_780 >> 0x20);
            dVar63 = *(double *)(local_898.Data + lVar37);
            dVar58 = *(double *)(local_898.Data + lVar37 + 8);
            dVar12 = *(double *)(local_898.Data + lVar37 + 0x10);
            dVar13 = *(double *)(local_898.Data + lVar37 + 0x10 + 8);
            auVar43._8_4_ = SUB84(local_788,0);
            auVar43._0_8_ = local_788;
            auVar43._12_4_ = (int)((ulonglong)local_788 >> 0x20);
            dVar53 = local_798 * dVar58 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     dStack_780 * dVar12 +
                     dStack_790 * dVar63 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     local_788 * dVar13 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar56 = auVar54._8_8_ * dVar63 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     auVar42._8_8_ * dVar13 +
                     auVar48._8_8_ * dVar58 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     auVar43._8_8_ * dVar12 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            auVar49._8_4_ = SUB84(dVar56,0);
            auVar49._0_8_ = dVar53;
            auVar49._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
            dVar10 = local_798 * dVar12 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     dStack_780 * dVar58 +
                     dStack_790 * dVar13 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     local_788 * dVar63 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            auVar11._8_4_ = SUB84(dVar10,0);
            auVar11._0_8_ =
                 local_798 * dVar13 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dStack_780 * dVar63 +
                 dStack_790 * dVar12 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 local_788 * dVar58 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            auVar11._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            *(undefined1 (*) [16])(local_898.Data + lVar37) = auVar11;
            *(double *)(local_898.Data + lVar37 + 0x10) = dVar53;
            *(double *)(local_898.Data + lVar37 + 0x10 + 8) = dVar56;
            dVar10 = *(double *)(local_898.Data + lVar37);
            dVar63 = *(double *)(local_898.Data + lVar37 + 8);
            auVar50._0_8_ = dVar53 * dVar53 + dVar10 * dVar10;
            auVar50._8_8_ = auVar49._8_8_ * dVar56 + dVar63 * dVar63;
            auVar44._8_4_ = SUB84(auVar50._8_8_,0);
            auVar44._0_8_ = auVar50._0_8_;
            auVar44._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
            auVar45._0_8_ = auVar44._8_8_ + auVar50._0_8_;
            auVar45._8_8_ = auVar50._0_8_ + auVar50._8_8_;
            auVar51 = sqrtpd(auVar50,auVar45);
            uVar38 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                      auVar45._0_8_);
            uVar40 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                      auVar45._8_8_);
            uVar39 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                      auVar45._0_8_);
            uVar41 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                      auVar45._8_8_);
            auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar51)
            ;
            auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar51)
            ;
            auVar47._0_8_ = uVar39 & (ulonglong)(auVar46._0_8_ * dVar10);
            uVar19 = uVar41 & (ulonglong)(auVar46._8_8_ * dVar63);
            auVar47._8_4_ = (undefined4)uVar19;
            auVar47._12_4_ = (undefined4)(uVar19 >> 0x20);
            auVar59._0_8_ = uVar38 & (ulonglong)(auVar51._0_8_ * dVar53);
            uVar19 = uVar40 & (ulonglong)(auVar51._8_8_ * dVar56);
            auVar59._8_4_ = (undefined4)uVar19;
            auVar59._12_4_ = (undefined4)(uVar19 >> 0x20);
            auVar55._0_4_ = ~(uint)uVar38 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
            auVar55._4_4_ =
                 ~(uint)(uVar38 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
            auVar55._8_4_ = ~(uint)uVar40 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
            auVar55._12_4_ =
                 ~(uint)(uVar40 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
            auVar51._4_4_ =
                 ~(uint)(uVar39 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
            auVar51._0_4_ = ~(uint)uVar39 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
            auVar51._8_4_ = ~(uint)uVar41 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
            auVar51._12_4_ =
                 ~(uint)(uVar41 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
            *(undefined1 (*) [16])(local_898.Data + lVar37) = auVar47 | auVar51;
            *(undefined1 (*) [16])(local_898.Data + lVar37 + 0x10) = auVar59 | auVar55;
            dVar10 = *(double *)(pFVar29 + 0x10);
            dVar63 = *(double *)(pFVar29 + 8);
            *(double *)(local_898.Data + lVar37 + 0x20) = *(double *)pFVar29;
            *(double *)(local_898.Data + lVar37 + 0x20 + 8) = dVar63;
            *(double *)(local_898.Data + lVar37 + 0x30) = dVar10;
            *(double *)(local_898.Data + lVar37 + 0x30 + 8) = 0.0;
            pFVar29 = local_888;
          } while ((int)uVar32 < iVar23 + -1);
        }
        fVar60 = __real_3f800000;
        fVar62 = __real_322bcc77;
        uVar25 = iVar23 - 1;
        uVar32 = 0;
        if ((int)uVar25 < (param_8->Chain).ArrayNum) {
          uVar32 = ~uVar25 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar37 = (longlong)(int)uVar25;
        pFVar29 = (param_8->Chain).AllocatorInstance.Data;
        uVar32 = *(uint *)(pFVar29 + lVar37 * 0x50 + 0x20);
        uVar25 = 0;
        if ((int)uVar32 < (param_8->CachedItems).ArrayNum) {
          uVar25 = ~uVar32 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar34 = (pTVar1->AllocatorInstance).Data;
        uVar25 = *(uint *)(pFVar29 + lVar37 * 0x50 + 0x24);
        uVar26 = 0;
        if ((int)uVar25 < local_890[0]) {
          uVar26 = ~uVar25 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar26 = 0xffffffff;
        lVar28 = (longlong)(int)uVar25 * 0x60;
        local_888 = local_898.Data;
        uVar17 = *(undefined8 *)(pFVar29 + lVar37 * 0x50 + 8);
        uVar4 = *(undefined8 *)(pFVar29 + lVar37 * 0x50 + 0x10);
        *(undefined8 *)(local_898.Data + lVar28 + 0x20) = *(undefined8 *)(pFVar29 + lVar37 * 0x50);
        *(undefined8 *)(local_898.Data + lVar28 + 0x20 + 8) = uVar17;
        *(undefined8 *)(local_898.Data + lVar28 + 0x30) = uVar4;
        *(undefined8 *)(local_898.Data + lVar28 + 0x30 + 8) = 0;
        uVar5 = *(ushort *)(pFVar34 + (longlong)(int)uVar32 * 0x20 + 0xc);
        if (uVar5 != 0xffff) {
          uVar26 = (uint)uVar5;
        }
        URigHierarchy::GetGlobalTransformByIndex(this,&local_218,uVar26,false);
        local_8a0 = (longlong)iVar23;
        local_538 = local_218.Rotation.XY.m128d_f64[0];
        dStack_530 = local_218.Rotation.XY.m128d_f64[1];
        *(double *)(local_888 + lVar28) = local_218.Rotation.XY.m128d_f64[0];
        *(double *)(local_888 + lVar28 + 8) = local_218.Rotation.XY.m128d_f64[1];
        *(double *)(local_888 + lVar28 + 0x10) = local_218.Rotation.ZW.m128d_f64[0];
        *(double *)(local_888 + lVar28 + 0x10 + 8) = local_218.Rotation.ZW.m128d_f64[1];
        pTVar36 = local_880;
        if (fVar62 < (float)((uint)(param_5 - fVar60) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          fVar61 = param_5;
          if (fVar60 <= param_5) {
            fVar61 = fVar60;
          }
          uVar32 = 0;
          if (fVar61 <= 0.0) {
            fVar61 = 0.0;
          }
          if (0 < local_8a0) {
            local_8a8 = 0;
            do {
              uVar25 = 0;
              if ((int)uVar32 < (param_8->Chain).ArrayNum) {
                uVar25 = ~uVar32 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_888 = (param_8->Chain).AllocatorInstance.Data;
              uVar25 = *(uint *)(local_888 + local_8a8 + 0x20);
              uVar26 = 0;
              if ((int)uVar25 < (param_8->CachedItems).ArrayNum) {
                uVar26 = ~uVar25 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_878 = (pTVar1->AllocatorInstance).Data;
              uVar26 = uVar30;
              if (*(ushort *)(local_878 + (longlong)(int)uVar25 * 0x20 + 0xc) != 0xffff) {
                uVar26 = (uint)*(ushort *)(local_878 + (longlong)(int)uVar25 * 0x20 + 0xc);
              }
              URigHierarchy::GetGlobalTransformByIndex(this,&local_1b8,uVar26,false);
              uVar26 = *(uint *)(local_888 + local_8a8 + 0x24);
              uVar31 = 0;
              if ((int)uVar26 < local_890[0]) {
                uVar31 = ~uVar26 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FRigVMMathLibrary::LerpTransform
                        (&local_458,&local_1b8,
                         (TTransform<double> *)(local_898.Data + (longlong)(int)uVar26 * 0x60),
                         fVar61);
              uVar26 = uVar30;
              if (*(ushort *)(local_878 + (longlong)(int)uVar25 * 0x20 + 0xc) != 0xffff) {
                uVar26 = (uint)*(ushort *)(local_878 + (longlong)(int)uVar25 * 0x20 + 0xc);
              }
              local_658.Rotation.XY.m128d_f64[0] = local_458.Rotation.XY.m128d_f64[0];
              local_658.Rotation.XY.m128d_f64[1] = local_458.Rotation.XY.m128d_f64[1];
              local_658.Rotation.ZW.m128d_f64[0] = local_458.Rotation.ZW.m128d_f64[0];
              local_658.Rotation.ZW.m128d_f64[1] = local_458.Rotation.ZW.m128d_f64[1];
              local_658.Translation.XY.m128d_f64[0] = local_458.Translation.XY.m128d_f64[0];
              local_658.Translation.XY.m128d_f64[1] = local_458.Translation.XY.m128d_f64[1];
              local_658.Translation.ZW.m128d_f64[0] = local_458.Translation.ZW.m128d_f64[0];
              local_658.Translation.ZW.m128d_f64[1] = local_458.Translation.ZW.m128d_f64[1];
              local_658.Scale3D.XY.m128d_f64[0] = local_458.Scale3D.XY.m128d_f64[0];
              local_658.Scale3D.XY.m128d_f64[1] = local_458.Scale3D.XY.m128d_f64[1];
              local_658.Scale3D.ZW.m128d_f64[0] = local_458.Scale3D.ZW.m128d_f64[0];
              local_658.Scale3D.ZW.m128d_f64[1] = local_458.Scale3D.ZW.m128d_f64[1];
              URigHierarchy::SetGlobalTransformByIndex
                        (this,uVar26,&local_658,false,param_6,false,false);
              uVar32 = uVar32 + 1;
              local_8a8 = local_8a8 + 0x50;
              local_8a0 = local_8a0 + -1;
              pTVar36 = local_880;
            } while (local_8a0 != 0);
          }
        }
        else {
          uVar32 = 0;
          if (0 < local_8a0) {
            local_8a8 = 0;
            do {
              uVar30 = 0;
              if ((int)uVar32 < (param_8->Chain).ArrayNum) {
                uVar30 = ~uVar32 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_888 = (param_8->Chain).AllocatorInstance.Data;
              uVar30 = *(uint *)(local_888 + local_8a8 + 0x20);
              uVar25 = 0;
              if ((int)uVar30 < (param_8->CachedItems).ArrayNum) {
                uVar25 = ~uVar30 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar29 = (pTVar1->AllocatorInstance).Data;
              uVar25 = *(uint *)(local_888 + local_8a8 + 0x24);
              uVar26 = 0;
              if ((int)uVar25 < local_890[0]) {
                uVar26 = ~uVar25 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar5 = *(ushort *)(pFVar29 + (longlong)(int)uVar30 * 0x20 + 0xc);
              pFVar29 = local_898.Data + (longlong)(int)uVar25 * 0x60;
              uVar30 = 0xffffffff;
              if (uVar5 != 0xffff) {
                uVar30 = (uint)uVar5;
              }
              local_6b8.Rotation.XY.m128d_f64[0] = *(double *)pFVar29;
              local_6b8.Rotation.XY.m128d_f64[1] = *(double *)(pFVar29 + 8);
              local_6b8.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar29 + 0x10);
              local_6b8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar29 + 0x18);
              local_6b8.Translation.XY.m128d_f64[0] = *(double *)(pFVar29 + 0x20);
              local_6b8.Translation.XY.m128d_f64[1] = *(double *)(pFVar29 + 0x28);
              local_6b8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar29 + 0x30);
              local_6b8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar29 + 0x38);
              local_6b8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar29 + 0x40);
              local_6b8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar29 + 0x48);
              local_6b8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar29 + 0x50);
              local_6b8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar29 + 0x58);
              URigHierarchy::SetGlobalTransformByIndex
                        (this,uVar30,&local_6b8,false,param_6,false,false);
              uVar32 = uVar32 + 1;
              local_8a8 = local_8a8 + 0x50;
              local_8a0 = local_8a0 + -1;
              pTVar36 = local_880;
            } while (local_8a0 != 0);
          }
        }
      }
      if (param_9) {
        uVar5 = (param_8->CachedEffector).Index;
        if (fVar62 < (float)((uint)(param_5 - fVar60) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          if (fVar60 <= param_5) {
            param_5 = fVar60;
          }
          if (param_5 <= 0.0) {
            param_5 = 0.0;
          }
          uVar32 = 0xffffffff;
          if (uVar5 != 0xffff) {
            uVar32 = (uint)uVar5;
          }
          URigHierarchy::GetGlobalTransformByIndex(this,&local_158,uVar32,false);
          FRigVMMathLibrary::LerpTransform(&local_3f8,&local_158,pTVar36,param_5);
          uVar5 = (param_8->CachedEffector).Index;
          if (uVar5 != 0xffff) {
            uVar27 = (uint)uVar5;
          }
          pTVar35 = &local_598;
          local_598.Rotation.XY.m128d_f64[0] = local_3f8.Rotation.XY.m128d_f64[0];
          local_598.Rotation.XY.m128d_f64[1] = local_3f8.Rotation.XY.m128d_f64[1];
          local_598.Rotation.ZW.m128d_f64[0] = local_3f8.Rotation.ZW.m128d_f64[0];
          local_598.Rotation.ZW.m128d_f64[1] = local_3f8.Rotation.ZW.m128d_f64[1];
          local_598.Translation.XY.m128d_f64[0] = local_3f8.Translation.XY.m128d_f64[0];
          local_598.Translation.XY.m128d_f64[1] = local_3f8.Translation.XY.m128d_f64[1];
          local_598.Translation.ZW.m128d_f64[0] = local_3f8.Translation.ZW.m128d_f64[0];
          local_598.Translation.ZW.m128d_f64[1] = local_3f8.Translation.ZW.m128d_f64[1];
          local_598.Scale3D.XY.m128d_f64[0] = local_3f8.Scale3D.XY.m128d_f64[0];
          local_598.Scale3D.XY.m128d_f64[1] = local_3f8.Scale3D.XY.m128d_f64[1];
          local_598.Scale3D.ZW.m128d_f64[0] = local_3f8.Scale3D.ZW.m128d_f64[0];
          local_598.Scale3D.ZW.m128d_f64[1] = local_3f8.Scale3D.ZW.m128d_f64[1];
        }
        else {
          if (uVar5 != 0xffff) {
            uVar27 = (uint)uVar5;
          }
          local_5f8.Rotation.XY.m128d_f64[0] = (pTVar36->Rotation).XY.m128d_f64[0];
          local_5f8.Rotation.XY.m128d_f64[1] = (pTVar36->Rotation).XY.m128d_f64[1];
          pTVar35 = &local_5f8;
          local_5f8.Rotation.ZW.m128d_f64[0] = (pTVar36->Rotation).ZW.m128d_f64[0];
          local_5f8.Rotation.ZW.m128d_f64[1] = (pTVar36->Rotation).ZW.m128d_f64[1];
          local_5f8.Translation.XY.m128d_f64[0] = (pTVar36->Translation).XY.m128d_f64[0];
          local_5f8.Translation.XY.m128d_f64[1] = (pTVar36->Translation).XY.m128d_f64[1];
          local_5f8.Translation.ZW.m128d_f64[0] = (pTVar36->Translation).ZW.m128d_f64[0];
          local_5f8.Translation.ZW.m128d_f64[1] = (pTVar36->Translation).ZW.m128d_f64[1];
          local_5f8.Scale3D.XY.m128d_f64[0] = (pTVar36->Scale3D).XY.m128d_f64[0];
          local_5f8.Scale3D.XY.m128d_f64[1] = (pTVar36->Scale3D).XY.m128d_f64[1];
          local_5f8.Scale3D.ZW.m128d_f64[0] = (pTVar36->Scale3D).ZW.m128d_f64[0];
          local_5f8.Scale3D.ZW.m128d_f64[1] = (pTVar36->Scale3D).ZW.m128d_f64[1];
        }
        URigHierarchy::SetGlobalTransformByIndex(this,uVar27,pTVar35,false,param_6,false,false);
      }
      if (local_898.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_898.Data);
      }
    }
  }
  return;
}

