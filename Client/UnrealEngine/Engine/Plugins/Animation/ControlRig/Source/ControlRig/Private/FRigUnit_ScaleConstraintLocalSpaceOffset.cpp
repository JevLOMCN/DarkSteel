// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4c6b20

UScriptStruct * __cdecl FRigUnit_ScaleConstraintLocalSpaceOffset::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset,
                         (UObject *)pUVar1,L"RigUnit_ScaleConstraintLocalSpaceOffset");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ScaleConstraintLocalSpaceOffset.OuterSingleton;
}

// FRigUnit_ScaleConstraintLocalSpaceOffset @ 14a5155d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_ScaleConstraintLocalSpaceOffset * __thiscall
FRigUnit_ScaleConstraintLocalSpaceOffset::FRigUnit_ScaleConstraintLocalSpaceOffset
          (FRigUnit_ScaleConstraintLocalSpaceOffset *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRigUnit_ScaleConstraintLocalSpaceOffset *pFVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_ScaleConstraintLocalSpaceOffset__6B_;
  (this->Child).Name.ComparisonIndex = 0;
  (this->Child).Name.Number = 0;
  (this->Child).Type = Bone;
  this->bMaintainOffset = true;
  (this->Filter).bX = true;
  (this->Filter).bY = true;
  (this->Filter).bZ = true;
  (this->Parents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parents).ArrayNum = 0;
  (this->Parents).ArrayMax = 0;
  this->Weight = 1.0;
  (this->ChildCache).Key.Type = None;
  (this->ChildCache).Key.Name.ComparisonIndex = 0;
  (this->ChildCache).Key.Name.Number = 0;
  (this->ChildCache).Index = 0xffff;
  (this->ChildCache).ContainerVersion = -1;
  (this->ChildCache).Element = (FRigBaseElement *)0x0;
  (this->ParentCaches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentCaches).ArrayNum = 0;
  (this->ParentCaches).ArrayMax = 0;
  pFVar1 = (this->Parents).AllocatorInstance.Data;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0x3f800000;
  if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar1 + (longlong)(this->Parents).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRigUnit_ScaleConstraintLocalSpaceOffset *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->Parents).ArrayNum;
  if (iVar4 == (this->Parents).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->Parents).AllocatorInstance,&(this->Parents).ArrayMax);
  }
  (this->Parents).ArrayNum = iVar4 + 1;
  pFVar1 = (this->Parents).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_c,uStack_10);
  return this;
}

// operator() @ 14a51b660

TVector<double> * __thiscall
`FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  undefined4 uVar11;
  
  uVar5 = __real_bf1a36e2e0000000;
  dVar10 = __real_3f1a36e2e0000000;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.X;
  uVar7 = SUB84(dVar10,0);
  uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
  uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar4,SUB84(dVar1,0) & uVar3) < dVar10) {
    uVar6 = uVar7;
    uVar8 = uVar9;
    if ((dVar1 <= 0.0) && (uVar6 = (int)uVar5, uVar8 = uVar11, 0.0 <= dVar1)) {
      uVar6 = 0;
      uVar8 = 0;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(uVar8,uVar6);
  }
  dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar4,SUB84(dVar1,0) & uVar3) < dVar10) {
    if ((dVar1 <= 0.0) && (uVar7 = (int)uVar5, uVar9 = uVar11, 0.0 <= dVar1)) {
      uVar7 = 0;
      uVar9 = 0;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar9,uVar7);
  }
  dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar4,SUB84(dVar1,0) & uVar3) < dVar10) {
    if (dVar1 <= 0.0) {
      if (dVar1 < 0.0) {
        *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = uVar5;
        return __return_storage_ptr__;
      }
      dVar10 = 0.0;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10;
  }
  return __return_storage_ptr__;
}

// Execute @ 14a52c300

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ScaleConstraintLocalSpaceOffset::Execute
          (FRigUnit_ScaleConstraintLocalSpaceOffset *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FConstraintParent_const_,int> local_18;
  
  local_18.DataPtr = (FConstraintParent *)(this->Parents).AllocatorInstance.Data;
  iVar1 = (this->Parents).ArrayNum;
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
  StaticExecute(param_1,&this->Child,this->bMaintainOffset,&this->Filter,&local_18,this->Weight,
                &this->ChildCache,&this->ParentCaches);
  return;
}

// Execute @ 14a52c3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ScaleConstraintLocalSpaceOffset::Execute(FRigUnit_ScaleConstraintLocalSpaceOffset *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2b8 [32];
  TArrayView<FConstraintParent_const_,int> local_278;
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
  local_278.DataPtr = (FConstraintParent *)(this->Parents).AllocatorInstance.Data;
  iVar1 = (this->Parents).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Child,this->bMaintainOffset,
                &this->Filter,&local_278,this->Weight,&this->ChildCache,&this->ParentCaches);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a5310e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_ScaleConstraintLocalSpaceOffset::GetExecuteContextStruct
          (FRigUnit_ScaleConstraintLocalSpaceOffset *this)

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

// RigVMExecute @ 14a54faa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ScaleConstraintLocalSpaceOffset::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  uchar *puVar7;
  FFilterOptionPerAxis *pFVar8;
  FRigVMMemoryHandle *pFVar9;
  float *pfVar10;
  FRigVMSlice *pFVar11;
  FCachedRigElement *pFVar12;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar13;
  FControlRigExecuteContext *pFVar14;
  TArrayView<FConstraintParent_const_,int> local_48 [2];
  
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
    pFVar6 = (FRigElementKey *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
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
    puVar7 = pFVar9[1].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  bVar4 = (bool)*puVar7;
  if (iVar2 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar8 = (FFilterOptionPerAxis *)pFVar9[2].Ptr;
  }
  else {
    pFVar8 = (FFilterOptionPerAxis *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar1 = *pfVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar11->Offset + pFVar11->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar13 = (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar11->Offset + pFVar11->Index);
  local_48[0].DataPtr = *(FConstraintParent **)puVar7;
  local_48[0].ArrayNum = *(int *)(puVar7 + 8);
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
  StaticExecute(pFVar14,pFVar6,bVar4,pFVar8,local_48,fVar1,pFVar12,pTVar13);
  return;
}

// StaticExecute @ 14a58ef00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,
          FFilterOptionPerAxis *param_4,TArrayView<FConstraintParent_const_,int> *param_5,
          float param_6,FCachedRigElement *param_7,
          TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_8)

{
  FControlRigExecuteContext *this;
  __m128d *p_Var1;
  ERigElementType EVar2;
  ushort uVar3;
  URigHierarchy *this_00;
  FScriptContainerElement *pFVar4;
  FRigTransformElement *pFVar5;
  code *pcVar6;
  double adVar7 [2];
  double adVar8 [2];
  double adVar9 [2];
  double adVar10 [2];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  double *pdVar21;
  double dVar22;
  double dVar23;
  __m128d _Var24;
  __m128d _Var25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  bool bVar34;
  int iVar35;
  FRigControlElement *pFVar36;
  TTransform<double> *pTVar37;
  FConstraintParent *pFVar38;
  void *pvVar39;
  longlong lVar40;
  UScriptStruct *pUVar41;
  undefined8 uVar42;
  uint uVar43;
  longlong *plVar44;
  uint uVar45;
  uint uVar46;
  longlong lVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar62;
  undefined1 auVar63 [16];
  undefined1 auStackY_9b8 [32];
  longlong local_960;
  FRigElementKey local_938;
  FRigElementKey local_928;
  FRigElementKey local_918;
  TVector<double>_u_0 local_908;
  TVector<double>_u_0 local_8f0;
  TVector<double>_u_0 local_8d8;
  undefined1 local_8b8 [16];
  TVector<double>_u_0 local_8a8;
  double local_890;
  double local_888;
  double local_880;
  double local_868;
  double local_860 [2];
  double local_850;
  double local_848;
  double dStack_840;
  double local_838;
  double local_820;
  TTransform<double> local_818;
  double local_7a8;
  double local_790;
  code *local_788;
  longlong local_778 [3];
  longlong *local_760;
  TTransform<double> local_758;
  TTransform<double> local_6f8;
  TTransform<double> local_698;
  TTransform<double> local_638;
  TTransform<double> local_5d8;
  TTransform<double> local_578;
  TTransform<double> local_518;
  TTransform<double> local_4b8;
  TTransform<double> local_458;
  TTransform<double> local_3f8;
  TTransform<double> local_398;
  FControlRigExecuteContext local_338;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_9b8;
  FControlRigExecuteContext::FControlRigExecuteContext(&local_338,param_1);
  local_788 = (code *)0x0;
  local_760 = FMemory::Malloc(0x260,0x10);
  this = (FControlRigExecuteContext *)(local_760 + 2);
  *local_760 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute'::`2'::<lambda_1>,0,1>
                ::_vftable_;
  FControlRigExecuteContext::FControlRigExecuteContext(this,&local_338);
  if (this != (FControlRigExecuteContext *)0x0) {
    local_788 = UE::Core::Private::Function::
                TFunctionRefCaller<`FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                ::Call;
  }
  FControlRigExecuteContext::~FControlRigExecuteContext(&local_338);
  if (((__real_38d1b717 <= param_6) &&
      (this_00 = param_1->Hierarchy, this_00 != (URigHierarchy *)0x0)) &&
     (bVar34 = FCachedRigElement::UpdateCache(param_7,param_2,this_00), bVar34)) {
    if (param_8->ArrayNum != param_5->ArrayNum) {
      TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNumZeroed
                (param_8,param_5->ArrayNum,Default);
    }
    uVar45 = 0xffffffff;
    if (param_7->Index != 0xffff) {
      uVar45 = (uint)param_7->Index;
    }
    URigHierarchy::GetLocalTransformByIndex(this_00,&local_5d8,uVar45,true);
    EVar2 = param_2->Type;
    adVar7[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    adVar7[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    adVar7[1]._4_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
    ;
    local_6f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_6f8.Rotation.XY.m128d_f64[1] = adVar7[1];
    adVar8[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    adVar8[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    adVar8[1]._4_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
    ;
    local_6f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_6f8.Rotation.ZW.m128d_f64[1] = adVar8[1];
    local_6f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_6f8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    adVar9[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    adVar9[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    adVar9[1]._4_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20)
    ;
    local_6f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_6f8.Translation.ZW.m128d_f64[1] = adVar9[1];
    local_6f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_6f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    adVar10[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    adVar10[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    adVar10[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_6f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_6f8.Scale3D.ZW.m128d_f64[1] = adVar10[1];
    if (EVar2 == Control) {
      uVar45 = 0xffffffff;
      if (param_7->Index != 0xffff) {
        uVar45 = (uint)param_7->Index;
      }
      pFVar36 = URigHierarchy::Get<FRigControlElement>(this_00,uVar45);
      if (pFVar36 != (FRigControlElement *)0x0) {
        pTVar37 = URigHierarchy::GetControlOffsetTransform(this_00,&local_458,pFVar36,CurrentLocal);
        local_6f8.Rotation.XY.m128d_f64 = *&(pTVar37->Rotation).XY.m128d_f64;
        local_6f8.Rotation.ZW.m128d_f64 = *&(pTVar37->Rotation).ZW.m128d_f64;
        local_6f8.Translation.XY.m128d_f64[0] = (pTVar37->Translation).XY.m128d_f64[0];
        local_6f8.Translation.XY.m128d_f64[1] = (pTVar37->Translation).XY.m128d_f64[1];
        local_6f8.Translation.ZW.m128d_f64 = *&(pTVar37->Translation).ZW.m128d_f64;
        local_6f8.Scale3D.XY.m128d_f64[0] = (pTVar37->Scale3D).XY.m128d_f64[0];
        local_6f8.Scale3D.XY.m128d_f64[1] = (pTVar37->Scale3D).XY.m128d_f64[1];
        local_6f8.Scale3D.ZW.m128d_f64 = *&(pTVar37->Scale3D).ZW.m128d_f64;
        UE::Math::TTransform<double>::Multiply(&local_5d8,&local_5d8,&local_6f8);
      }
    }
    dVar18 = __real_3f1a36e2e0000000;
    iVar35 = param_5->ArrayNum;
    uVar45 = 0;
    dVar58 = 0.0;
    dVar11 = 0.0;
    if (0 < iVar35) {
      do {
        dVar58 = dVar11;
        pFVar38 = TArrayView<FConstraintParent_const_,int>::operator[](param_5,uVar45);
        uVar43 = 0;
        if ((int)uVar45 < param_8->ArrayNum) {
          uVar43 = ~uVar45 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar34)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar34 = FCachedRigElement::UpdateCache
                           ((FCachedRigElement *)
                            ((param_8->AllocatorInstance).Data + (longlong)(int)uVar45 * 0x20),
                            &pFVar38->Item,this_00);
        if (bVar34) {
          dVar11 = (double)pFVar38->Weight;
          if (dVar11 <= 0.0) {
            dVar11 = 0.0;
          }
          if (dVar18 <= dVar11) {
            dVar58 = dVar58 + dVar11;
          }
        }
        iVar35 = param_5->ArrayNum;
        uVar45 = uVar45 + 1;
        dVar11 = dVar58;
      } while ((int)uVar45 < iVar35);
    }
    dVar11 = __real_3ff0000000000000 / dVar58;
    if (dVar18 < dVar58) {
      uVar52 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
      uVar53 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
      local_8b8._8_8_ = 0;
      local_8b8._0_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      uVar19 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      uVar16 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar62 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      if (param_3) {
        uVar45 = 0;
        if (0 < iVar35) {
          lVar47 = 0;
          do {
            uVar43 = 0;
            if ((int)uVar45 < param_8->ArrayNum) {
              uVar43 = ~uVar45 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar4 = (param_8->AllocatorInstance).Data;
            if ((((*(short *)(pFVar4 + lVar47 + 0xc) != -1) &&
                 (bVar34 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar4 + lVar47 + 4)),
                 bVar34)) && (*(longlong *)(pFVar4 + lVar47 + 4) != 0)) &&
               (pFVar4[lVar47] != (FScriptContainerElement)0x0)) {
              pFVar38 = TArrayView<FConstraintParent_const_,int>::operator[](param_5,uVar45);
              dVar58 = (double)pFVar38->Weight;
              if (dVar58 <= 0.0) {
                dVar58 = 0.0;
              }
              if (((dVar18 <= dVar58) &&
                  (bVar34 = ::FName::IsWithinBounds
                                      ((FNameEntryId)(pFVar38->Item).Name.ComparisonIndex.Value),
                  bVar34)) &&
                 (((pFVar38->Item).Name != (FName)0x0 && ((pFVar38->Item).Type != None)))) {
                dVar58 = dVar58 * dVar11;
                uVar43 = 0;
                if ((int)uVar45 < param_8->ArrayNum) {
                  uVar43 = ~uVar45 >> 0x1f;
                }
                if ((uVar43 == 0) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar34)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar43 = 0xffffffff;
                uVar3 = *(ushort *)((param_8->AllocatorInstance).Data + lVar47 + 0xc);
                if (uVar3 != 0xffff) {
                  uVar43 = (uint)uVar3;
                }
                URigHierarchy::GetGlobalTransformByIndex(this_00,&local_578,uVar43,true);
                dVar13 = local_578.Scale3D.ZW.m128d_f64[0];
                dVar59 = local_578.Scale3D.XY.m128d_f64[1];
                dVar12 = pow(local_578.Scale3D.XY.m128d_f64[0],dVar58);
                uVar19 = (double)uVar19 * dVar12;
                dVar12 = pow(dVar59,dVar58);
                uVar62 = (double)uVar62 * dVar12;
                local_7a8 = dVar13;
                dVar58 = pow(dVar13,dVar58);
                uVar16 = (double)uVar16 * dVar58;
              }
            }
            uVar45 = uVar45 + 1;
            lVar47 = lVar47 + 0x20;
          } while ((int)uVar45 < param_5->ArrayNum);
        }
        uVar45 = 0xffffffff;
        if (param_7->Index != 0xffff) {
          uVar45 = (uint)param_7->Index;
        }
        URigHierarchy::GetParentTransformByIndex(this_00,&local_518,uVar45,true);
        local_8a8._s_0.X = local_518.Scale3D.XY.m128d_f64[0];
        local_8a8._s_0.Y = local_518.Scale3D.XY.m128d_f64[1];
        local_8a8._s_0.Z = local_518.Scale3D.ZW.m128d_f64[0];
        UE::Core::Private::Function::CheckCallable(local_788);
        pcVar6 = local_788;
        plVar44 = local_778;
        if (local_760 != (longlong *)0x0) {
          plVar44 = local_760;
        }
        pvVar39 = (void *)(**(code **)(*plVar44 + 8))();
        if (pcVar6 == UE::Core::Private::Function::
                      TFunctionRefCaller<`FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                      ::Call) {
          `FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute'::__l2::<lambda_1>::operator()
                    (pvVar39,(TVector<double> *)&local_908._s_0,(TVector<double> *)&local_8a8._s_0);
        }
        else {
          (*pcVar6)(&local_908,pvVar39);
        }
        local_8f0._s_0.Y = (double)uVar62 / local_908._s_0.Y;
        local_8f0._s_0.X = (double)uVar19 / local_908._s_0.X;
        local_8f0._s_0.Z = (double)uVar16 / local_908._s_0.Z;
        local_860[0] = local_5d8.Scale3D.XY.m128d_f64[0];
        local_860[1] = local_5d8.Scale3D.XY.m128d_f64[1];
        local_850 = local_5d8.Scale3D.ZW.m128d_f64[0];
        UE::Core::Private::Function::CheckCallable(local_788);
        pcVar6 = local_788;
        plVar44 = local_778;
        if (local_760 != (longlong *)0x0) {
          plVar44 = local_760;
        }
        pvVar39 = (void *)(**(code **)(*plVar44 + 8))();
        if (pcVar6 == UE::Core::Private::Function::
                      TFunctionRefCaller<`FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                      ::Call) {
          `FRigUnit_ScaleConstraintLocalSpaceOffset::StaticExecute'::__l2::<lambda_1>::operator()
                    (pvVar39,(TVector<double> *)&local_8d8._s_0,(TVector<double> *)&local_8f0._s_0);
        }
        else {
          (*pcVar6)(&local_8d8);
        }
        uVar19 = local_5d8.Scale3D.XY.m128d_f64[0] / local_8d8._s_0.X;
        uVar16 = local_850 / local_8d8._s_0.Z;
        uVar52 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
        uVar53 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
        uVar62 = local_5d8.Scale3D.XY.m128d_f64[1] / local_8d8._s_0.Y;
        local_8b8._8_4_ = local_5d8.Scale3D.XY.m128d_f64[1]._0_4_;
        local_8b8._0_8_ = uVar19;
        local_8b8._12_4_ = local_5d8.Scale3D.XY.m128d_f64[1]._4_4_;
      }
      dVar58 = (double)CONCAT44(uVar53,uVar52);
      uVar45 = 0;
      uVar15 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar17 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      if (0 < param_5->ArrayNum) {
        lVar47 = 0;
        local_960 = 0;
        do {
          uVar46 = ~uVar45 >> 0x1f;
          uVar43 = 0;
          if ((int)uVar45 < param_8->ArrayNum) {
            uVar43 = uVar46;
          }
          if ((uVar43 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (param_8->AllocatorInstance).Data;
          if ((((*(short *)(pFVar4 + lVar47 + 0xc) != -1) &&
               (bVar34 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar4 + lVar47 + 4)),
               bVar34)) && (*(longlong *)(pFVar4 + lVar47 + 4) != 0)) &&
             (pFVar4[lVar47] != (FScriptContainerElement)0x0)) {
            uVar43 = 0;
            if ((int)uVar45 < param_5->ArrayNum) {
              uVar43 = uVar46;
            }
            if ((uVar43 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar34)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            dVar12 = (double)*(float *)((longlong)&param_5->DataPtr->Weight + local_960);
            if (dVar12 <= 0.0) {
              dVar12 = 0.0;
            }
            if (dVar18 <= dVar12) {
              dVar12 = dVar12 * dVar11;
              uVar43 = 0;
              if ((int)uVar45 < param_8->ArrayNum) {
                uVar43 = uVar46;
              }
              if ((uVar43 == 0) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar34)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar3 = *(ushort *)((param_8->AllocatorInstance).Data + lVar47 + 0xc);
              if (uVar3 == 0xffff) {
LAB_14a58f841:
                uVar52 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar53 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar54 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar55 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
                dVar59 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
                local_638.Rotation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                local_638.Rotation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                local_638.Translation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
                local_638.Translation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              }
              else {
                uVar43 = (uint)uVar3;
                if ((this_00->Elements).ArrayNum <= (int)uVar43) goto LAB_14a58f841;
                uVar46 = 0;
                if ((int)uVar43 < (this_00->Elements).ArrayNum) {
                  uVar46 = ~uVar43 >> 0x1f;
                }
                if ((uVar46 == 0) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar34)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar5 = *(FRigTransformElement **)
                          ((this_00->Elements).AllocatorInstance.Data + (ulonglong)uVar43 * 8);
                if (pFVar5 == (FRigTransformElement *)0x0) goto LAB_14a58f841;
                lVar40 = (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5);
                pUVar41 = FRigTransformElement::StaticStruct();
                if (pUVar41 == (UScriptStruct *)0x0) goto LAB_14a58f841;
                iVar35 = (int)pUVar41->_padding_;
                if ((*(int *)(lVar40 + 0x38) < iVar35) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(lVar40 + 0x30) + (longlong)iVar35 * 8) !=
                    &pUVar41->_padding_)) {
                  bVar34 = false;
                }
                else {
                  bVar34 = true;
                }
                if (!bVar34) goto LAB_14a58f841;
                URigHierarchy::GetTransform(this_00,&local_638,pFVar5,CurrentGlobal);
                uVar52 = local_638.Scale3D.XY.m128d_f64[0]._0_4_;
                uVar53 = local_638.Scale3D.XY.m128d_f64[0]._4_4_;
                uVar54 = local_638.Scale3D.XY.m128d_f64[1]._0_4_;
                uVar55 = local_638.Scale3D.XY.m128d_f64[1]._4_4_;
                dVar59 = local_638.Scale3D.ZW.m128d_f64[0];
              }
              dVar13 = pow((double)CONCAT44(uVar53,uVar52),dVar12);
              uVar17 = (double)uVar17 * dVar13;
              dVar13 = pow((double)CONCAT44(uVar55,uVar54),dVar12);
              dVar58 = dVar58 * dVar13;
              local_790 = dVar59;
              dVar12 = pow(dVar59,dVar12);
              uVar15 = (double)uVar15 * dVar12;
            }
          }
          local_960 = local_960 + 0x10;
          uVar45 = uVar45 + 1;
          lVar47 = lVar47 + 0x20;
        } while ((int)uVar45 < param_5->ArrayNum);
        uVar19 = local_8b8._0_8_;
      }
      local_938.Type = param_2->Type;
      local_938._1_3_ = *(undefined3 *)&param_2->field_0x1;
      local_938.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
      local_938.Name.Number = (param_2->Name).Number;
      iVar35 = URigHierarchy::GetIndex(this_00,&local_938,true);
      URigHierarchy::GetParentTransformByIndex(this_00,&local_4b8,iVar35,false);
      local_848 = local_4b8.Scale3D.XY.m128d_f64[0];
      dStack_840 = local_4b8.Scale3D.XY.m128d_f64[1];
      local_838 = local_4b8.Scale3D.ZW.m128d_f64[0];
      UE::Core::Private::Function::CheckCallable(local_788);
      pcVar6 = local_788;
      plVar44 = local_778;
      if (local_760 != (longlong *)0x0) {
        plVar44 = local_760;
      }
      uVar42 = (**(code **)(*plVar44 + 8))();
      (*pcVar6)(&local_890,uVar42,&local_848);
      local_868 = (double)uVar15 / local_880;
      dVar18 = (double)uVar17 / local_890;
      dVar58 = dVar58 / local_888;
      if (param_3) {
        local_868 = (double)uVar16 * local_868;
        dVar18 = dVar18 * (double)uVar19;
        dVar58 = dVar58 * (double)uVar62;
      }
      local_928.Type = param_2->Type;
      local_928._1_3_ = *(undefined3 *)&param_2->field_0x1;
      local_928.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
      local_928.Name.Number = (param_2->Name).Number;
      iVar35 = URigHierarchy::GetIndex(this_00,&local_928,true);
      URigHierarchy::GetLocalTransformByIndex(this_00,&local_698,iVar35,false);
      if (EVar2 == Control) {
        UE::Math::TTransform<double>::Multiply(&local_698,&local_698,&local_6f8);
      }
      local_758.Rotation.XY.m128d_f64[0] = local_698.Rotation.XY.m128d_f64[0];
      local_758.Rotation.XY.m128d_f64[1] = local_698.Rotation.XY.m128d_f64[1];
      local_758.Rotation.ZW.m128d_f64[0] = local_698.Rotation.ZW.m128d_f64[0];
      local_758.Rotation.ZW.m128d_f64[1] = local_698.Rotation.ZW.m128d_f64[1];
      local_758.Translation.XY.m128d_f64[0]._0_4_ = local_698.Translation.XY.m128d_f64[0]._0_4_;
      local_758.Translation.XY.m128d_f64[0]._4_4_ = local_698.Translation.XY.m128d_f64[0]._4_4_;
      local_758.Translation.XY.m128d_f64[1]._0_4_ = local_698.Translation.XY.m128d_f64[1]._0_4_;
      local_758.Translation.XY.m128d_f64[1]._4_4_ = local_698.Translation.XY.m128d_f64[1]._4_4_;
      local_758.Translation.ZW.m128d_f64[0]._0_4_ = local_698.Translation.ZW.m128d_f64[0]._0_4_;
      local_758.Translation.ZW.m128d_f64[0]._4_4_ = local_698.Translation.ZW.m128d_f64[0]._4_4_;
      local_758.Translation.ZW.m128d_f64[1]._0_4_ = local_698.Translation.ZW.m128d_f64[1]._0_4_;
      local_758.Translation.ZW.m128d_f64[1]._4_4_ = local_698.Translation.ZW.m128d_f64[1]._4_4_;
      if (((param_4->bX == false) || (param_4->bY == false)) || (param_4->bZ == false)) {
        local_820 = local_698.Scale3D.ZW.m128d_f64[0];
        if (param_4->bX == false) {
          dVar18 = local_698.Scale3D.XY.m128d_f64[0];
        }
        if (param_4->bY == false) {
          dVar58 = local_698.Scale3D.XY.m128d_f64[1];
        }
        if (param_4->bZ == false) {
          local_868 = local_698.Scale3D.ZW.m128d_f64[0];
        }
      }
      uVar52 = SUB84(local_868,0);
      uVar53 = (undefined4)((ulonglong)local_868 >> 0x20);
      uVar54 = 0;
      uVar55 = 0;
      local_758.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar58,0);
      local_758.Scale3D.XY.m128d_f64[0] = dVar18;
      local_758.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar58 >> 0x20);
      local_758.Scale3D.ZW.m128d_f64[0] = local_868;
      local_758.Scale3D.ZW.m128d_f64[1] = 0.0;
      if (param_6 < __real_3f7ff972) {
        pTVar37 = FRigVMMathLibrary::LerpTransform(&local_3f8,&local_698,&local_758,param_6);
        local_698.Rotation.XY.m128d_f64 = *&(pTVar37->Rotation).XY.m128d_f64;
        local_698.Rotation.ZW.m128d_f64 = *&(pTVar37->Rotation).ZW.m128d_f64;
        local_698.Translation.XY.m128d_f64[0]._0_4_ =
             *(undefined4 *)(pTVar37->Translation).XY.m128d_f64;
        local_698.Translation.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pTVar37->Translation).XY.m128d_f64 + 4);
        local_698.Translation.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((pTVar37->Translation).XY.m128d_f64 + 1);
        local_698.Translation.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pTVar37->Translation).XY.m128d_f64 + 0xc);
        local_698.Translation.ZW.m128d_f64[0]._0_4_ =
             *(undefined4 *)(pTVar37->Translation).ZW.m128d_f64;
        local_698.Translation.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pTVar37->Translation).ZW.m128d_f64 + 4);
        local_698.Translation.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((pTVar37->Translation).ZW.m128d_f64 + 1);
        local_698.Translation.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pTVar37->Translation).ZW.m128d_f64 + 0xc);
        dVar18 = (pTVar37->Scale3D).XY.m128d_f64[0];
        dVar58 = (pTVar37->Scale3D).XY.m128d_f64[1];
        local_758.Scale3D.XY.m128d_f64 = *&(pTVar37->Scale3D).XY.m128d_f64;
        p_Var1 = &(pTVar37->Scale3D).ZW;
        uVar52 = *(undefined4 *)p_Var1->m128d_f64;
        uVar53 = *(undefined4 *)((longlong)(pTVar37->Scale3D).ZW.m128d_f64 + 4);
        local_758.Scale3D.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
        pdVar21 = (pTVar37->Scale3D).ZW.m128d_f64 + 1;
        uVar54 = *(undefined4 *)pdVar21;
        uVar55 = *(undefined4 *)((longlong)(pTVar37->Scale3D).ZW.m128d_f64 + 0xc);
        local_758.Scale3D.ZW.m128d_f64[1] = *pdVar21;
      }
      local_758.Rotation.XY.m128d_f64 = local_698.Rotation.XY.m128d_f64;
      local_758.Rotation.ZW.m128d_f64 = local_698.Rotation.ZW.m128d_f64;
      local_758.Translation.XY.m128d_f64[0]._0_4_ = local_698.Translation.XY.m128d_f64[0]._0_4_;
      local_758.Translation.XY.m128d_f64[0]._4_4_ = local_698.Translation.XY.m128d_f64[0]._4_4_;
      local_758.Translation.XY.m128d_f64[1]._0_4_ = local_698.Translation.XY.m128d_f64[1]._0_4_;
      local_758.Translation.XY.m128d_f64[1]._4_4_ = local_698.Translation.XY.m128d_f64[1]._4_4_;
      local_758.Translation.ZW.m128d_f64[0]._0_4_ = local_698.Translation.ZW.m128d_f64[0]._0_4_;
      local_758.Translation.ZW.m128d_f64[0]._4_4_ = local_698.Translation.ZW.m128d_f64[0]._4_4_;
      local_758.Translation.ZW.m128d_f64[1]._0_4_ = local_698.Translation.ZW.m128d_f64[1]._0_4_;
      local_758.Translation.ZW.m128d_f64[1]._4_4_ = local_698.Translation.ZW.m128d_f64[1]._4_4_;
      if (EVar2 == Control) {
        pTVar37 = UE::Math::TTransform<double>::GetRelativeTransform
                            (&local_758,&local_398,&local_6f8);
        dVar59 = (pTVar37->Rotation).XY.m128d_f64[0];
        dVar13 = (pTVar37->Rotation).XY.m128d_f64[1];
        dVar22 = (pTVar37->Rotation).ZW.m128d_f64[0];
        dVar23 = (pTVar37->Rotation).ZW.m128d_f64[1];
        local_758.Translation.XY.m128d_f64[0]._0_4_ =
             *(undefined4 *)(pTVar37->Translation).XY.m128d_f64;
        local_758.Translation.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pTVar37->Translation).XY.m128d_f64 + 4);
        local_758.Translation.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((pTVar37->Translation).XY.m128d_f64 + 1);
        local_758.Translation.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pTVar37->Translation).XY.m128d_f64 + 0xc);
        local_758.Translation.ZW.m128d_f64[0]._0_4_ =
             *(undefined4 *)(pTVar37->Translation).ZW.m128d_f64;
        local_758.Translation.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pTVar37->Translation).ZW.m128d_f64 + 4);
        local_758.Translation.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((pTVar37->Translation).ZW.m128d_f64 + 1);
        local_758.Translation.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pTVar37->Translation).ZW.m128d_f64 + 0xc);
        auVar56._0_8_ = dVar59 * dVar59 + dVar22 * dVar22;
        auVar56._8_8_ = dVar13 * dVar13 + dVar23 * dVar23;
        dVar18 = (pTVar37->Scale3D).XY.m128d_f64[0];
        dVar58 = (pTVar37->Scale3D).XY.m128d_f64[1];
        local_758.Scale3D.XY.m128d_f64 = *&(pTVar37->Scale3D).XY.m128d_f64;
        dVar11 = auVar56._8_8_ + auVar56._0_8_;
        dVar12 = auVar56._0_8_ + auVar56._8_8_;
        p_Var1 = &(pTVar37->Scale3D).ZW;
        uVar52 = *(undefined4 *)p_Var1->m128d_f64;
        uVar53 = *(undefined4 *)((longlong)(pTVar37->Scale3D).ZW.m128d_f64 + 4);
        local_758.Scale3D.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
        pdVar21 = (pTVar37->Scale3D).ZW.m128d_f64 + 1;
        uVar54 = *(undefined4 *)pdVar21;
        uVar55 = *(undefined4 *)((longlong)(pTVar37->Scale3D).ZW.m128d_f64 + 0xc);
        local_758.Scale3D.ZW.m128d_f64[1] = *pdVar21;
        auVar57._8_4_ = SUB84(dVar12,0);
        auVar57._0_8_ = dVar11;
        auVar57._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        auVar57 = sqrtpd(auVar56,auVar57);
        uVar48 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar11);
        uVar50 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar12);
        auVar60 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar57);
        auVar57 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar57);
        uVar49 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar11);
        uVar51 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= dVar12);
        auVar61._0_8_ = uVar48 & (ulonglong)(auVar60._0_8_ * dVar59);
        uVar20 = uVar50 & (ulonglong)(auVar60._8_8_ * dVar13);
        auVar61._8_4_ = (undefined4)uVar20;
        auVar61._12_4_ = (undefined4)(uVar20 >> 0x20);
        auVar63._0_8_ = uVar49 & (ulonglong)(auVar57._0_8_ * dVar22);
        uVar20 = uVar51 & (ulonglong)(auVar57._8_8_ * dVar23);
        auVar63._8_4_ = (undefined4)uVar20;
        auVar63._12_4_ = (undefined4)(uVar20 >> 0x20);
        auVar60._4_4_ =
             ~(uint)(uVar48 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar60._0_4_ = ~(uint)uVar48 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar60._8_4_ = ~(uint)uVar50 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar60._12_4_ =
             ~(uint)(uVar50 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        local_758.Rotation.XY.m128d_f64 = (double  [2])(auVar61 | auVar60);
        auVar14._4_4_ =
             ~(uint)(uVar49 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar14._0_4_ = ~(uint)uVar49 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar14._8_4_ = ~(uint)uVar51 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar14._12_4_ =
             ~(uint)(uVar51 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        local_758.Rotation.ZW.m128d_f64 = (double  [2])(auVar63 | auVar14);
      }
      uVar33 = local_758.Translation.ZW.m128d_f64[1]._4_4_;
      uVar32 = local_758.Translation.ZW.m128d_f64[1]._0_4_;
      uVar31 = local_758.Translation.ZW.m128d_f64[0]._4_4_;
      uVar30 = local_758.Translation.ZW.m128d_f64[0]._0_4_;
      uVar29 = local_758.Translation.XY.m128d_f64[1]._4_4_;
      uVar28 = local_758.Translation.XY.m128d_f64[1]._0_4_;
      uVar27 = local_758.Translation.XY.m128d_f64[0]._4_4_;
      uVar26 = local_758.Translation.XY.m128d_f64[0]._0_4_;
      _Var25.m128d_f64 = local_758.Rotation.ZW.m128d_f64;
      _Var24.m128d_f64 = local_758.Rotation.XY.m128d_f64;
      local_918.Type = param_2->Type;
      local_918._1_3_ = *(undefined3 *)&param_2->field_0x1;
      local_918.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
      local_918.Name.Number = (param_2->Name).Number;
      iVar35 = URigHierarchy::GetIndex(this_00,&local_918,true);
      local_818.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar58,0);
      local_818.Scale3D.XY.m128d_f64[0] = dVar18;
      local_818.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar58 >> 0x20);
      local_818.Rotation.XY.m128d_f64 = _Var24.m128d_f64;
      local_818.Rotation.ZW.m128d_f64 = _Var25.m128d_f64;
      local_818.Translation.XY.m128d_f64[0]._0_4_ = uVar26;
      local_818.Translation.XY.m128d_f64[0]._4_4_ = uVar27;
      local_818.Translation.XY.m128d_f64[1]._0_4_ = uVar28;
      local_818.Translation.XY.m128d_f64[1]._4_4_ = uVar29;
      local_818.Translation.ZW.m128d_f64[0]._0_4_ = uVar30;
      local_818.Translation.ZW.m128d_f64[0]._4_4_ = uVar31;
      local_818.Translation.ZW.m128d_f64[1]._0_4_ = uVar32;
      local_818.Translation.ZW.m128d_f64[1]._4_4_ = uVar33;
      local_818.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar52;
      local_818.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar53;
      local_818.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar54;
      local_818.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar55;
      URigHierarchy::SetLocalTransformByIndex(this_00,iVar35,&local_818,false,true,false,false);
    }
  }
  if (local_788 != (code *)0x0) {
    plVar44 = local_778;
    if (local_760 != (longlong *)0x0) {
      plVar44 = local_760;
    }
    (**(code **)(*plVar44 + 0x10))();
  }
  return;
}

