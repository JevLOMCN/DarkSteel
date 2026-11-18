// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4c3770

UScriptStruct * __cdecl FRigUnit_RotationConstraintLocalSpaceOffset::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset,
                         (UObject *)pUVar1,L"RigUnit_RotationConstraintLocalSpaceOffset");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset_Statics::
         RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_RotationConstraintLocalSpaceOffset.
         OuterSingleton;
}

// FRigUnit_RotationConstraintLocalSpaceOffset @ 14a5153d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_RotationConstraintLocalSpaceOffset * __thiscall
FRigUnit_RotationConstraintLocalSpaceOffset::FRigUnit_RotationConstraintLocalSpaceOffset
          (FRigUnit_RotationConstraintLocalSpaceOffset *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRigUnit_RotationConstraintLocalSpaceOffset *pFVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_RotationConstraintLocalSpaceOffset__6B_;
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
  (this->AdvancedSettings).InterpolationType = Average;
  (this->AdvancedSettings).RotationOrderForFilter = XZY;
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
      pFVar5 = (FRigUnit_RotationConstraintLocalSpaceOffset *)(*pcVar2)();
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

// Execute @ 14a52c060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_RotationConstraintLocalSpaceOffset::Execute
          (FRigUnit_RotationConstraintLocalSpaceOffset *this,FControlRigExecuteContext *param_1)

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
  StaticExecute(param_1,&this->Child,this->bMaintainOffset,&this->Filter,&local_18,
                &this->AdvancedSettings,this->Weight,&this->ChildCache,&this->ParentCaches);
  return;
}

// Execute @ 14a52c110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_RotationConstraintLocalSpaceOffset::Execute
          (FRigUnit_RotationConstraintLocalSpaceOffset *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2c8 [32];
  TArrayView<FConstraintParent_const_,int> local_278;
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
                &this->Filter,&local_278,&this->AdvancedSettings,this->Weight,&this->ChildCache,
                &this->ParentCaches);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a5310a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_RotationConstraintLocalSpaceOffset::GetExecuteContextStruct
          (FRigUnit_RotationConstraintLocalSpaceOffset *this)

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

// RigVMExecute @ 14a54f5d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_RotationConstraintLocalSpaceOffset::RigVMExecute
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
  FRigUnit_RotationConstraint_AdvancedSettings *pFVar10;
  float *pfVar11;
  FRigVMSlice *pFVar12;
  FCachedRigElement *pFVar13;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar14;
  FControlRigExecuteContext *pFVar15;
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
  pFVar10 = (FRigUnit_RotationConstraint_AdvancedSettings *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar11 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar1 = *pfVar11;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar14 = (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
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
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pFVar6,bVar4,pFVar8,local_48,pFVar10,fVar1,pFVar13,pTVar14);
  return;
}

// StaticExecute @ 14a58cf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_RotationConstraintLocalSpaceOffset::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,
          FFilterOptionPerAxis *param_4,TArrayView<FConstraintParent_const_,int> *param_5,
          FRigUnit_RotationConstraint_AdvancedSettings *param_6,float param_7,
          FCachedRigElement *param_8,TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_9)

{
  ERigElementType EVar1;
  ushort uVar2;
  int iVar3;
  URigHierarchy *this;
  FScriptContainerElement *pFVar4;
  FRigTransformElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  ulonglong uVar22;
  FFilterOptionPerAxis *pFVar23;
  bool bVar24;
  uint uVar25;
  FRigControlElement *pFVar26;
  TTransform<double> *pTVar27;
  FConstraintParent *pFVar28;
  longlong lVar29;
  UScriptStruct *pUVar30;
  TQuat<double> *pTVar31;
  int iVar32;
  URigHierarchy *pUVar33;
  FRigTransformElement *pFVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar82;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar83;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  __m128d _Var72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  __m128d _Var86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined4 uVar94;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  double dVar95;
  double dVar96;
  undefined1 auVar98 [16];
  double dVar97;
  undefined1 auVar99 [16];
  __m128d _Var100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  double dVar103;
  double dVar108;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined4 uVar109;
  undefined4 uVar110;
  undefined4 uVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  __m128d _Var120;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  __m128d _Var123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  uint uVar131;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar132;
  float fVar133;
  undefined1 auStackY_8b8 [32];
  double local_868 [2];
  undefined1 local_858 [8];
  double dStack_850;
  double local_848;
  double dStack_840;
  FRigUnit_RotationConstraint_AdvancedSettings *local_838;
  undefined1 local_828 [16];
  undefined1 local_818 [8];
  undefined8 uStack_810;
  FCachedRigElement *local_808;
  float local_800;
  FFilterOptionPerAxis *local_7f8;
  undefined1 local_7e8 [16];
  undefined1 local_7d8 [16];
  TVector<double>_u_0 local_7c8;
  TVector<double>_u_0 local_7b0;
  TQuat<double> local_798;
  double local_778 [2];
  double local_768 [2];
  double local_758;
  double local_750;
  double local_748;
  double local_738;
  undefined8 uStack_730;
  double local_728 [2];
  double local_718 [2];
  TQuat<double> local_708;
  TTransform<double> local_6e8;
  undefined1 local_688 [16];
  double local_678 [2];
  undefined1 local_668 [16];
  undefined1 local_658 [16];
  undefined1 local_648 [16];
  double local_638 [2];
  TQuat<double> local_628;
  TQuat<double> local_608;
  TQuat<double> local_5e8;
  TTransform<double> local_5c8;
  TTransform<double> local_568;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  fVar132 = __real_38d1b717;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  local_838 = param_6;
  local_800 = param_7;
  local_808 = param_8;
  if (param_7 < __real_38d1b717) {
    return;
  }
  this = param_1->Hierarchy;
  if (this == (URigHierarchy *)0x0) {
    return;
  }
  local_7f8 = param_4;
  bVar24 = FCachedRigElement::UpdateCache(param_8,param_2,this);
  if (!bVar24) {
    return;
  }
  if (param_9->ArrayNum != param_5->ArrayNum) {
    TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_9,param_5->ArrayNum,Default);
  }
  uVar35 = 0xffffffff;
  if (param_8->Index != 0xffff) {
    uVar35 = (uint)param_8->Index;
  }
  URigHierarchy::GetLocalTransformByIndex(this,&local_448,uVar35,true);
  fVar113 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar114 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar115 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar116 = GlobalVectorConstants::Float0001.m128_f32[3];
  EVar1 = param_2->Type;
  local_568.Rotation.XY.m128d_f64[0] = (double)fVar113;
  local_568.Rotation.XY.m128d_f64[1] = (double)fVar114;
  local_568.Rotation.ZW.m128d_f64[0] = (double)fVar115;
  local_568.Rotation.ZW.m128d_f64[1] = (double)fVar116;
  local_568.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_568.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  _Var86.m128d_f64[1] = GlobalVectorConstants::FloatZero.m128_u64[1];
  _Var86.m128d_f64[0] = _Var86.m128d_f64[1];
  local_568.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_568.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_568.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dVar82 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  _Var100.m128d_f64[1] = GlobalVectorConstants::Float1110.m128_u64[1];
  _Var100.m128d_f64[0] = _Var100.m128d_f64[1];
  local_568.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_568.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_568.Scale3D.XY.m128d_f64[1] = dVar82;
  if (EVar1 == Control) {
    uVar35 = 0xffffffff;
    if (param_8->Index != 0xffff) {
      uVar35 = (uint)param_8->Index;
    }
    pFVar26 = URigHierarchy::Get<FRigControlElement>(this,uVar35);
    if (pFVar26 != (FRigControlElement *)0x0) {
      pTVar27 = URigHierarchy::GetControlOffsetTransform(this,&local_208,pFVar26,CurrentLocal);
      local_568.Rotation.XY.m128d_f64[0] = (pTVar27->Rotation).XY.m128d_f64[0];
      local_568.Rotation.XY.m128d_f64[1] = (pTVar27->Rotation).XY.m128d_f64[1];
      local_568.Rotation.ZW.m128d_f64[0] = (pTVar27->Rotation).ZW.m128d_f64[0];
      local_568.Rotation.ZW.m128d_f64[1] = (pTVar27->Rotation).ZW.m128d_f64[1];
      local_568.Translation.XY.m128d_f64[0] = (pTVar27->Translation).XY.m128d_f64[0];
      local_568.Translation.XY.m128d_f64[1] = (pTVar27->Translation).XY.m128d_f64[1];
      local_568.Translation.ZW.m128d_f64[0] = (pTVar27->Translation).ZW.m128d_f64[0];
      local_568.Translation.ZW.m128d_f64[1] = (pTVar27->Translation).ZW.m128d_f64[1];
      local_568.Scale3D.XY.m128d_f64[0] = (pTVar27->Scale3D).XY.m128d_f64[0];
      local_568.Scale3D.XY.m128d_f64[1] = (pTVar27->Scale3D).XY.m128d_f64[1];
      local_568.Scale3D.ZW.m128d_f64[0] = (pTVar27->Scale3D).ZW.m128d_f64[0];
      dVar82 = (pTVar27->Scale3D).ZW.m128d_f64[1];
      local_568.Scale3D.ZW.m128d_f64[1] = dVar82;
      UE::Math::TTransform<double>::Multiply(&local_448,&local_448,&local_568);
    }
    fVar113 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar114 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar115 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar116 = GlobalVectorConstants::Float0001.m128_f32[3];
  }
  iVar32 = param_5->ArrayNum;
  uVar35 = 0;
  fVar112 = 0.0;
  if (0 < iVar32) {
    do {
      pFVar28 = TArrayView<FConstraintParent_const_,int>::operator[](param_5,uVar35);
      uVar25 = 0;
      if ((int)uVar35 < param_9->ArrayNum) {
        uVar25 = ~uVar35 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar24 = FCachedRigElement::UpdateCache
                         ((FCachedRigElement *)
                          ((param_9->AllocatorInstance).Data + (longlong)(int)uVar35 * 0x20),
                          &pFVar28->Item,this);
      if (bVar24) {
        fVar113 = pFVar28->Weight;
        if (fVar113 <= 0.0) {
          fVar113 = 0.0;
        }
        if (fVar132 <= fVar113) {
          fVar112 = fVar112 + fVar113;
        }
      }
      iVar32 = param_5->ArrayNum;
      uVar35 = uVar35 + 1;
    } while ((int)uVar35 < iVar32);
    fVar113 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar114 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar115 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar116 = GlobalVectorConstants::Float0001.m128_f32[3];
    param_8 = local_808;
  }
  dVar97 = __real_3e45798ee0000000;
  fVar133 = __real_3f800000 / fVar112;
  if (fVar112 <= fVar132) {
    return;
  }
  local_7d8._8_8_ = UE::Math::TQuat<double>::Identity.W;
  local_7d8._0_8_ = UE::Math::TQuat<double>::Identity.Z;
  local_7e8._8_8_ = UE::Math::TQuat<double>::Identity.Y;
  local_7e8._0_8_ = UE::Math::TQuat<double>::Identity.X;
  local_738 = __real_3e45798ee0000000;
  uStack_730 = 0;
  dVar103 = UE::Math::TQuat<double>::Identity.X;
  dVar96 = UE::Math::TQuat<double>::Identity.Y;
  dVar108 = UE::Math::TQuat<double>::Identity.Z;
  dVar95 = UE::Math::TQuat<double>::Identity.W;
  if (param_3) {
    uVar35 = 0;
    dVar103 = 0.0;
    dVar108 = 0.0;
    local_828 = ZEXT816(0);
    dVar96 = 0.0;
    dVar95 = 0.0;
    _local_818 = (double  [2])ZEXT816(0);
    if (0 < iVar32) {
      lVar37 = 0;
      do {
        uVar25 = 0;
        if ((int)uVar35 < param_9->ArrayNum) {
          uVar25 = ~uVar35 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar24 = FCachedRigElement::IsValid
                           ((FCachedRigElement *)((param_9->AllocatorInstance).Data + lVar37));
        if (bVar24) {
          pFVar28 = TArrayView<FConstraintParent_const_,int>::operator[](param_5,uVar35);
          fVar112 = pFVar28->Weight;
          if (fVar112 <= 0.0) {
            fVar112 = 0.0;
          }
          if (fVar112 < fVar132) goto LAB_14a58d5c8;
          fVar112 = fVar112 * fVar133;
          uVar25 = 0;
          if ((int)uVar35 < param_9->ArrayNum) {
            uVar25 = ~uVar35 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar25 = 0xffffffff;
          uVar2 = *(ushort *)((param_9->AllocatorInstance).Data + lVar37 + 0xc);
          if (uVar2 != 0xffff) {
            uVar25 = (uint)uVar2;
          }
          pUVar33 = this;
          URigHierarchy::GetGlobalTransformByIndex(this,&local_3e8,uVar25,true);
          dVar103 = local_3e8.Rotation.XY.m128d_f64[0];
          local_728[0] = local_3e8.Rotation.XY.m128d_f64[0];
          local_728[1] = local_3e8.Rotation.XY.m128d_f64[1];
          local_718[0] = local_3e8.Rotation.ZW.m128d_f64[0];
          local_718[1] = local_3e8.Rotation.ZW.m128d_f64[1];
          dVar83 = local_3e8.Rotation.XY.m128d_f64[1];
          if (local_838->InterpolationType != Average) {
            if (local_838->InterpolationType == Shortest) {
              auVar88._8_8_ = -(ulonglong)(uStack_810 == 0.0);
              auVar88._0_8_ = -(ulonglong)((double)local_818 == 0.0);
              auVar117._8_8_ = -(ulonglong)((double)local_828._8_8_ == 0.0);
              auVar117._0_8_ = -(ulonglong)((double)local_828._0_8_ == 0.0);
              iVar32 = movmskpd((int)pUVar33,auVar88);
              uVar25 = movmskpd(1,auVar117);
              if ((iVar32 << 2 | uVar25) != 0xf) {
                auVar98._0_8_ = (double)fVar112;
                auVar98._8_8_ = 0;
                pTVar31 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                    (&local_628,(TQuat<double> *)local_828,
                                     (TQuat<double> *)local_728,auVar98._0_8_);
                fVar113 = GlobalVectorConstants::Float0001.m128_f32[0];
                fVar114 = GlobalVectorConstants::Float0001.m128_f32[1];
                fVar115 = GlobalVectorConstants::Float0001.m128_f32[2];
                fVar116 = GlobalVectorConstants::Float0001.m128_f32[3];
                dVar82 = pTVar31->X;
                dVar103 = pTVar31->Y;
                dVar96 = pTVar31->Z;
                dVar95 = pTVar31->W;
                local_758 = dVar97;
                dVar108 = dVar96 * dVar96 + dVar82 * dVar82;
                dVar83 = dVar95 * dVar95 + dVar103 * dVar103;
                auVar42._8_4_ = SUB84(dVar83,0);
                auVar42._0_8_ = dVar108;
                auVar42._12_4_ = (int)((ulonglong)dVar83 >> 0x20);
                auVar43._0_8_ = auVar42._8_8_ + dVar108;
                auVar43._8_8_ = dVar108 + dVar83;
                auVar88 = sqrtpd(auVar98,auVar43);
                uVar39 = -(ulonglong)(dVar97 <= auVar43._0_8_);
                uVar38 = -(ulonglong)(dVar97 <= auVar43._8_8_);
                uVar25 = (uint)(uVar39 >> 0x20);
                uVar36 = (uint)(uVar38 >> 0x20);
                auVar117 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                 auVar88);
                local_688._0_8_ = uVar39 & (ulonglong)(auVar117._0_8_ * dVar82);
                uVar22 = uVar38 & (ulonglong)(auVar117._8_8_ * dVar103);
                local_688._8_4_ = (undefined4)uVar22;
                local_688._12_4_ = (undefined4)(uVar22 >> 0x20);
                auVar65._0_4_ = ~(uint)uVar39 & SUB84((double)fVar113,0);
                auVar65._4_4_ = ~uVar25 & (uint)((ulonglong)(double)fVar113 >> 0x20);
                auVar65._8_4_ = ~(uint)uVar38 & SUB84((double)fVar114,0);
                auVar65._12_4_ = ~uVar36 & (uint)((ulonglong)(double)fVar114 >> 0x20);
                local_688 = local_688 | auVar65;
                auVar10._4_8_ = auVar65._8_8_;
                auVar10._0_4_ = local_688._4_4_;
                auVar66._0_8_ = auVar10._0_8_ << 0x20;
                auVar66._8_4_ = local_688._8_4_;
                auVar66._12_4_ = local_688._12_4_;
                auVar85._0_4_ = ~(uint)uVar39 & SUB84((double)fVar115,0);
                auVar85._4_4_ = ~uVar25 & (uint)((ulonglong)(double)fVar115 >> 0x20);
                auVar85._8_4_ = ~(uint)uVar38 & SUB84((double)fVar116,0);
                auVar85._12_4_ = ~uVar36 & (uint)((ulonglong)(double)fVar116 >> 0x20);
                dVar108 = auVar66._8_8_;
                dVar82 = local_688._8_8_;
                dVar103 = local_688._0_8_;
                auVar88 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                auVar88);
                local_828._8_8_ = dVar108;
                local_828._0_8_ = dVar103;
                auVar44._0_8_ = (ulonglong)(auVar88._0_8_ * dVar96) & uVar39;
                uVar38 = (ulonglong)(auVar88._8_8_ * dVar95) & uVar38;
                auVar44._8_4_ = (undefined4)uVar38;
                auVar44._12_4_ = (undefined4)(uVar38 >> 0x20);
                _Var86.m128d_f64 = (double  [2])(auVar85 | auVar44);
                auVar11._4_8_ = auVar44._8_8_;
                auVar11._0_4_ = _Var86.m128d_f64[0]._4_4_;
                auVar45._0_8_ = auVar11._0_8_ << 0x20;
                auVar45._8_4_ = _Var86.m128d_f64[1]._0_4_;
                auVar45._12_4_ = _Var86.m128d_f64[1]._4_4_;
                dVar95 = auVar45._8_8_;
                dVar96 = _Var86.m128d_f64[0];
                _local_818 = _Var86.m128d_f64;
                local_678 = _Var86.m128d_f64;
                goto LAB_14a58d5e7;
              }
              auVar9._4_8_ = -(ulonglong)((double)local_828._8_8_ == 0.0);
              auVar9._0_4_ = local_3e8.Rotation.XY.m128d_f64[0]._4_4_;
              auVar64._0_8_ = auVar9._0_8_ << 0x20;
              auVar64._8_4_ = local_3e8.Rotation.XY.m128d_f64[1]._0_4_;
              auVar64._12_4_ = local_3e8.Rotation.XY.m128d_f64[1]._4_4_;
              local_828._8_8_ = auVar64._8_8_;
              local_828._0_8_ = dVar103;
              local_818 = (undefined1  [8])local_3e8.Rotation.ZW.m128d_f64[0];
              uStack_810 = local_3e8.Rotation.ZW.m128d_f64[1];
              _Var86.m128d_f64 = local_3e8.Rotation.XY.m128d_f64;
              uVar94 = local_3e8.Rotation.ZW.m128d_f64[0]._0_4_;
              uVar109 = local_3e8.Rotation.ZW.m128d_f64[0]._4_4_;
              uVar110 = local_3e8.Rotation.ZW.m128d_f64[1]._0_4_;
              uVar111 = local_3e8.Rotation.ZW.m128d_f64[1]._4_4_;
              dVar82 = dVar83;
              dVar108 = auVar64._8_8_;
              goto LAB_14a58d5d0;
            }
            bVar24 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5743640656631298733>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_TransformConstraint.cpp"
                                ,0x553,"false");
            param_8 = local_808;
            if (bVar24) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar35 = 0xffffffff;
            if (local_808->Index != 0xffff) {
              uVar35 = (uint)local_808->Index;
            }
            URigHierarchy::GetGlobalTransformByIndex(this,&local_388,uVar35,true);
            dVar103 = local_388.Rotation.XY.m128d_f64[0];
            auVar12._4_8_ = local_3e8.Rotation.XY.m128d_f64[1];
            auVar12._0_4_ = local_388.Rotation.XY.m128d_f64[0]._4_4_;
            auVar87._0_8_ = auVar12._0_8_ << 0x20;
            auVar87._8_4_ = local_388.Rotation.XY.m128d_f64[1]._0_4_;
            auVar87._12_4_ = local_388.Rotation.XY.m128d_f64[1]._4_4_;
            fVar113 = GlobalVectorConstants::Float0001.m128_f32[0];
            fVar114 = GlobalVectorConstants::Float0001.m128_f32[1];
            fVar115 = GlobalVectorConstants::Float0001.m128_f32[2];
            fVar116 = GlobalVectorConstants::Float0001.m128_f32[3];
            auVar13._4_8_ = extraout_XMM0_Qb;
            auVar13._0_4_ = local_388.Rotation.ZW.m128d_f64[0]._4_4_;
            auVar46._0_8_ = auVar13._0_8_ << 0x20;
            auVar46._8_4_ = local_388.Rotation.ZW.m128d_f64[1]._0_4_;
            auVar46._12_4_ = local_388.Rotation.ZW.m128d_f64[1]._4_4_;
            dVar96 = local_388.Rotation.ZW.m128d_f64[0];
            dVar108 = auVar87._8_8_;
            _Var86.m128d_f64[1] = local_388.Rotation.XY.m128d_f64[1];
            _Var86.m128d_f64[0] = dVar108;
            dVar95 = auVar46._8_8_;
            param_6 = local_838;
            break;
          }
          fVar113 = GlobalVectorConstants::Float0001.m128_f32[0];
          fVar114 = GlobalVectorConstants::Float0001.m128_f32[1];
          fVar115 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar116 = GlobalVectorConstants::Float0001.m128_f32[3];
          dVar95 = (double)fVar112;
          dVar103 = dVar95 * dVar103;
          dVar108 = dVar95 * dVar83;
          uVar94 = (undefined4)((ulonglong)dVar108 >> 0x20);
          dVar96 = dVar95 * local_3e8.Rotation.ZW.m128d_f64[0];
          dVar95 = dVar95 * local_3e8.Rotation.ZW.m128d_f64[1];
          auVar7._4_8_ = dVar82;
          auVar7._0_4_ = (int)((ulonglong)dVar103 >> 0x20);
          auVar63._0_8_ = auVar7._0_8_ << 0x20;
          auVar63._8_4_ = SUB84(dVar108,0);
          auVar63._12_4_ = uVar94;
          auVar8._4_8_ = dVar83;
          auVar8._0_4_ = (int)((ulonglong)dVar96 >> 0x20);
          auVar84._0_8_ = auVar8._0_8_ << 0x20;
          auVar84._8_4_ = SUB84(dVar95,0);
          auVar84._12_4_ = (int)((ulonglong)dVar95 >> 0x20);
          _Var86.m128d_f64[0] =
               auVar84._8_8_ * uStack_810 + dVar96 * (double)local_818 +
               auVar63._8_8_ * (double)local_828._8_8_ + dVar103 * (double)local_828._0_8_;
          _Var86.m128d_f64[1] = dVar95;
          dVar82 = dVar108;
          if (0.0 <= _Var86.m128d_f64[0]) {
            auVar104._8_4_ = SUB84(dVar108,0);
            auVar104._0_8_ = dVar103;
            auVar104._12_4_ = uVar94;
            dVar103 = dVar103 + (double)local_828._0_8_;
            dVar108 = auVar104._8_8_ + (double)local_828._8_8_;
            dVar96 = (double)local_818 + dVar96;
            dVar95 = uStack_810 + dVar95;
            local_828._8_8_ = dVar108;
            local_828._0_8_ = dVar103;
            uStack_810._0_4_ = SUB84(dVar95,0);
            local_818 = (undefined1  [8])dVar96;
            uStack_810._4_4_ = (int)((ulonglong)dVar95 >> 0x20);
          }
          else {
            dVar103 = (double)local_828._0_8_ - dVar103;
            dVar108 = (double)local_828._8_8_ - dVar108;
            dVar96 = (double)local_818 - dVar96;
            dVar95 = uStack_810 - dVar95;
            local_828._8_8_ = dVar108;
            local_828._0_8_ = dVar103;
            uStack_810._0_4_ = SUB84(dVar95,0);
            local_818 = (undefined1  [8])dVar96;
            uStack_810._4_4_ = (int)((ulonglong)dVar95 >> 0x20);
          }
        }
        else {
LAB_14a58d5c8:
          uVar94 = local_818._0_4_;
          uVar109 = local_818._4_4_;
          uVar110 = (undefined4)uStack_810;
          uVar111 = uStack_810._4_4_;
          dVar103 = (double)local_828._0_8_;
          dVar108 = (double)local_828._8_8_;
LAB_14a58d5d0:
          dVar95 = (double)CONCAT44(uVar111,uVar110);
          dVar96 = (double)CONCAT44(uVar109,uVar94);
          fVar113 = GlobalVectorConstants::Float0001.m128_f32[0];
          fVar114 = GlobalVectorConstants::Float0001.m128_f32[1];
          fVar115 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar116 = GlobalVectorConstants::Float0001.m128_f32[3];
        }
LAB_14a58d5e7:
        uVar35 = uVar35 + 1;
        lVar37 = lVar37 + 0x20;
        param_8 = local_808;
        param_6 = local_838;
      } while ((int)uVar35 < param_5->ArrayNum);
    }
    uVar35 = 0xffffffff;
    auVar67._8_4_ = SUB84(dVar95,0);
    auVar67._0_8_ = dVar96;
    auVar67._12_4_ = (int)((ulonglong)dVar95 >> 0x20);
    local_750 = dVar97;
    dVar82 = dVar96 * dVar96 + dVar103 * dVar103;
    dVar83 = auVar67._8_8_ * dVar95 + dVar108 * dVar108;
    auVar47._8_4_ = SUB84(dVar83,0);
    auVar47._0_8_ = dVar82;
    auVar47._12_4_ = (int)((ulonglong)dVar83 >> 0x20);
    auVar48._0_8_ = auVar47._8_8_ + dVar82;
    auVar48._8_8_ = dVar82 + dVar83;
    auVar88 = sqrtpd((undefined1  [16])_Var86.m128d_f64,auVar48);
    uVar38 = -(ulonglong)(dVar97 <= auVar48._0_8_);
    uVar39 = -(ulonglong)(dVar97 <= auVar48._8_8_);
    uVar25 = (uint)(uVar38 >> 0x20);
    uVar36 = (uint)(uVar39 >> 0x20);
    auVar117 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar88);
    auVar88 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar88);
    auVar68._0_4_ = ~(uint)uVar38 & SUB84((double)fVar113,0);
    auVar68._4_4_ = ~uVar25 & (uint)((ulonglong)(double)fVar113 >> 0x20);
    auVar68._8_4_ = ~(uint)uVar39 & SUB84((double)fVar114,0);
    auVar68._12_4_ = ~uVar36 & (uint)((ulonglong)(double)fVar114 >> 0x20);
    auVar118._0_8_ = uVar38 & (ulonglong)(auVar117._0_8_ * dVar103);
    uVar22 = uVar39 & (ulonglong)(auVar117._8_8_ * dVar108);
    auVar118._8_4_ = (undefined4)uVar22;
    auVar118._12_4_ = (undefined4)(uVar22 >> 0x20);
    local_828 = auVar118 | auVar68;
    auVar122._0_8_ = (ulonglong)(auVar88._0_8_ * dVar96) & uVar38;
    uVar22 = (ulonglong)(auVar88._8_8_ * dVar95) & uVar39;
    auVar122._8_4_ = (undefined4)uVar22;
    auVar122._12_4_ = (undefined4)(uVar22 >> 0x20);
    auVar69._0_4_ = ~(uint)uVar38 & SUB84((double)fVar115,0);
    auVar69._4_4_ = ~uVar25 & (uint)((ulonglong)(double)fVar115 >> 0x20);
    auVar69._8_4_ = ~(uint)uVar39 & SUB84((double)fVar116,0);
    auVar69._12_4_ = ~uVar36 & (uint)((ulonglong)(double)fVar116 >> 0x20);
    _local_818 = (double  [2])(auVar69 | auVar122);
    if (param_8->Index != 0xffff) {
      uVar35 = (uint)param_8->Index;
    }
    URigHierarchy::GetParentTransformByIndex(this,&local_328,uVar35,true);
    local_328.Rotation.XY.m128d_f64[0] =
         local_328.Rotation.XY.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_328.Rotation.XY.m128d_f64[1] =
         local_328.Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    local_328.Rotation.ZW.m128d_f64[0] =
         local_328.Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_328.Rotation.ZW.m128d_f64[1] =
         local_328.Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar119._8_4_ = SUB84(local_328.Rotation.XY.m128d_f64[0],0);
    auVar119._0_8_ = local_328.Rotation.XY.m128d_f64[0];
    auVar119._12_4_ = (int)((ulonglong)local_328.Rotation.XY.m128d_f64[0] >> 0x20);
    auVar49._8_4_ = SUB84(local_328.Rotation.ZW.m128d_f64[1],0);
    auVar49._0_8_ = local_328.Rotation.ZW.m128d_f64[1];
    auVar49._12_4_ = (int)((ulonglong)local_328.Rotation.ZW.m128d_f64[1] >> 0x20);
    auVar50._8_4_ = SUB84(local_328.Rotation.ZW.m128d_f64[0],0);
    auVar50._0_8_ = local_328.Rotation.ZW.m128d_f64[0];
    auVar50._12_4_ = (int)((ulonglong)local_328.Rotation.ZW.m128d_f64[0] >> 0x20);
    local_798.X = (local_328.Rotation.XY.m128d_f64[0] * uStack_810 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                   local_328.Rotation.ZW.m128d_f64[1] * (double)local_828._0_8_ +
                   (double)local_818 * local_328.Rotation.XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                  local_328.Rotation.ZW.m128d_f64[0] * (double)local_828._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]) *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_798.Y = (auVar119._8_8_ * (double)local_818 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   auVar49._8_8_ * (double)local_828._8_8_ +
                   uStack_810 * local_328.Rotation.XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  auVar50._8_8_ * (double)local_828._0_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]) *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar97 = local_448.Rotation.ZW.m128d_f64[0];
    uVar94 = (undefined4)((ulonglong)local_798.Y >> 0x20);
    dVar95 = local_448.Rotation.ZW.m128d_f64[1];
    auVar127._8_4_ = SUB84(local_798.Y,0);
    auVar127._0_8_ = local_798.X;
    auVar127._12_4_ = uVar94;
    dVar83 = auVar127._8_8_;
    local_848 = (local_328.Rotation.XY.m128d_f64[0] * (double)local_828._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 (double)local_818 * local_328.Rotation.ZW.m128d_f64[1] +
                 local_328.Rotation.XY.m128d_f64[1] * (double)local_828._0_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                local_328.Rotation.ZW.m128d_f64[0] * uStack_810 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]) *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar82 = (local_328.Rotation.XY.m128d_f64[0] * (double)local_828._0_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              uStack_810 * local_328.Rotation.ZW.m128d_f64[1] +
              local_328.Rotation.XY.m128d_f64[1] * (double)local_828._8_8_ *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             local_328.Rotation.ZW.m128d_f64[0] * (double)local_818 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar70._8_4_ = SUB84(local_798.Y,0);
    auVar70._0_8_ = dVar83;
    auVar70._12_4_ = uVar94;
    auVar51._8_4_ = SUB84(dVar82,0);
    auVar51._0_8_ = dVar82;
    auVar51._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
    _Var100.m128d_f64[1] = local_448.Rotation.XY.m128d_f64[0];
    _Var100.m128d_f64[0] = local_448.Rotation.XY.m128d_f64[1];
    dVar103 = dVar95 * local_798.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
              + dVar82 * local_448.Rotation.XY.m128d_f64[0] +
              dVar83 * dVar97 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              local_848 * local_448.Rotation.XY.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar96 = dVar97 * local_798.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
             + auVar51._8_8_ * local_448.Rotation.XY.m128d_f64[1] +
             auVar70._8_8_ * dVar95 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             local_848 * local_448.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    uVar94 = (undefined4)((ulonglong)dVar96 >> 0x20);
    fVar113 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar114 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar115 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar116 = GlobalVectorConstants::Float0001.m128_f32[3];
    dVar108 = local_798.X * local_448.Rotation.XY.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar82 * dVar97 +
              dVar83 * local_448.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              local_848 * dVar95 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar95 = local_798.X * local_448.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar82 * dVar95 +
             dVar83 * local_448.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             local_848 * dVar97 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar109 = (undefined4)((ulonglong)dVar95 >> 0x20);
    local_668._8_4_ = SUB84(dVar96,0);
    local_668._0_8_ = dVar103;
    local_668._12_4_ = uVar94;
    local_658._8_4_ = SUB84(dVar95,0);
    local_658._0_8_ = dVar108;
    local_658._12_4_ = uVar109;
    local_7d8._8_4_ = SUB84(dVar95,0);
    local_7d8._0_8_ = dVar108;
    local_7d8._12_4_ = uVar109;
    local_7e8._8_4_ = SUB84(dVar96,0);
    local_7e8._0_8_ = dVar103;
    local_7e8._12_4_ = uVar94;
    _Var86.m128d_f64 = local_448.Rotation.ZW.m128d_f64;
    fVar132 = __real_38d1b717;
    dStack_840 = local_848;
  }
  dVar82 = local_738;
  uVar35 = 0;
  _Var72.m128d_f64 = (double  [2])ZEXT816(0);
  local_868 = (double  [2])ZEXT816(0);
  _Var120.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
  _Var123.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
  _local_858 = _Var72.m128d_f64;
  if (0 < param_5->ArrayNum) {
    lVar37 = 0;
    local_848 = 0.0;
LAB_14a58d9b0:
    uVar36 = ~uVar35 >> 0x1f;
    uVar25 = 0;
    if ((int)uVar35 < param_9->ArrayNum) {
      uVar25 = uVar36;
    }
    if (uVar25 == 0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar24) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar113 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar114 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar115 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar116 = GlobalVectorConstants::Float0001.m128_f32[3];
      _Var120 = GlobalVectorConstants::DoubleOne.XY;
      _Var123 = GlobalVectorConstants::DoubleOne.ZW;
    }
    pFVar4 = (param_9->AllocatorInstance).Data;
    param_6 = local_838;
    if (*(short *)(pFVar4 + lVar37 + 0xc) != -1) {
      bVar24 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar4 + lVar37 + 4));
      if (((bVar24) && (*(longlong *)(pFVar4 + lVar37 + 4) != 0)) &&
         (pFVar4[lVar37] != (FScriptContainerElement)0x0)) {
        uVar25 = 0;
        if ((int)uVar35 < param_5->ArrayNum) {
          uVar25 = uVar36;
        }
        if ((uVar25 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar24)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar112 = *(float *)((longlong)&param_5->DataPtr->Weight + (longlong)local_848);
        if (fVar112 <= 0.0) {
          fVar112 = 0.0;
        }
        if (fVar132 <= fVar112) {
          iVar32 = param_9->ArrayNum;
          fVar112 = fVar112 * fVar133;
          uVar25 = 0;
          if ((int)uVar35 < iVar32) {
            uVar25 = uVar36;
          }
          if (uVar25 == 0) {
            iVar32 = 0x506106c8;
            bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar24) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          uVar2 = *(ushort *)((param_9->AllocatorInstance).Data + lVar37 + 0xc);
          if ((uVar2 == 0xffff) || ((this->Elements).ArrayNum <= (int)(uint)uVar2)) {
LAB_14a58dbea:
            uVar94 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
            uVar109 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
            uVar110 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
            uVar111 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
            local_798.Z._0_4_ =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
            local_798.Z._4_4_ =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
            local_798.W._0_4_ =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
            local_798.W._4_4_ =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
            local_4a8.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_4a8.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_4a8.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_4a8.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            local_4a8.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_4a8.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            _Var72.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            iVar32 = 1;
            if ((this->Elements).ArrayNum <= (int)(uint)uVar2) {
              iVar32 = 0x506106c8;
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar24) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            pFVar5 = *(FRigTransformElement **)
                      ((this->Elements).AllocatorInstance.Data + (ulonglong)uVar2 * 8);
            if (pFVar5 == (FRigTransformElement *)0x0) goto LAB_14a58dbea;
            pFVar34 = pFVar5;
            lVar29 = (**(code **)(pFVar5->_padding_ + 0x10))();
            iVar32 = (int)pFVar34;
            pUVar30 = FRigTransformElement::StaticStruct();
            if (pUVar30 == (UScriptStruct *)0x0) goto LAB_14a58dbea;
            iVar3 = (int)pUVar30->_padding_;
            if ((*(int *)(lVar29 + 0x38) < iVar3) ||
               (iVar32 = iVar3,
               (longlong *)*(undefined1 **)(*(longlong *)(lVar29 + 0x30) + (longlong)iVar3 * 8) !=
               &pUVar30->_padding_)) {
              bVar24 = false;
            }
            else {
              bVar24 = true;
            }
            if (!bVar24) goto LAB_14a58dbea;
            pUVar33 = this;
            URigHierarchy::GetTransform(this,&local_4a8,pFVar5,CurrentGlobal);
            iVar32 = (int)pUVar33;
            uVar94 = local_4a8.Rotation.XY.m128d_f64[0]._0_4_;
            uVar109 = local_4a8.Rotation.XY.m128d_f64[0]._4_4_;
            uVar110 = local_4a8.Rotation.XY.m128d_f64[1]._0_4_;
            uVar111 = local_4a8.Rotation.XY.m128d_f64[1]._4_4_;
            local_798.Z._0_4_ = local_4a8.Rotation.ZW.m128d_f64[0]._0_4_;
            local_798.Z._4_4_ = local_4a8.Rotation.ZW.m128d_f64[0]._4_4_;
            local_798.W._0_4_ = local_4a8.Rotation.ZW.m128d_f64[1]._0_4_;
            local_798.W._4_4_ = local_4a8.Rotation.ZW.m128d_f64[1]._4_4_;
          }
          param_6 = local_838;
          local_798.X = (double)CONCAT44(uVar109,uVar94);
          local_798.Y = (double)CONCAT44(uVar111,uVar110);
          fVar113 = GlobalVectorConstants::Float0001.m128_f32[0];
          fVar114 = GlobalVectorConstants::Float0001.m128_f32[1];
          fVar115 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar116 = GlobalVectorConstants::Float0001.m128_f32[3];
          if (local_838->InterpolationType != Average) {
            if (local_838->InterpolationType == Shortest) {
              auVar52._8_8_ = -(ulonglong)(dStack_850 == 0.0);
              auVar52._0_8_ = -(ulonglong)((double)local_858 == 0.0);
              auVar73._8_8_ = -(ulonglong)(local_868[1] == 0.0);
              auVar73._0_8_ = -(ulonglong)(local_868[0] == 0.0);
              iVar32 = movmskpd(iVar32,auVar52);
              uVar25 = movmskpd(1,auVar73);
              if ((iVar32 << 2 | uVar25) == 0xf) {
                auVar16._4_8_ = -(ulonglong)(local_868[1] == 0.0);
                auVar16._0_4_ = local_798.Z._4_4_;
                auVar74._0_8_ = auVar16._0_8_ << 0x20;
                auVar74._8_4_ = local_798.W._0_4_;
                auVar74._12_4_ = local_798.W._4_4_;
                local_858 = (undefined1  [8])CONCAT44(local_798.Z._4_4_,local_798.Z._0_4_);
                auVar17._4_8_ = _Var86.m128d_f64[1];
                auVar17._0_4_ = uVar109;
                auVar90._0_8_ = auVar17._0_8_ << 0x20;
                auVar90._8_4_ = uVar110;
                auVar90._12_4_ = uVar111;
                dStack_850 = auVar74._8_8_;
                dVar97 = (double)CONCAT44(uVar109,uVar94);
                _Var86.m128d_f64[1]._4_4_ = uVar111;
                _Var86.m128d_f64[1]._0_4_ = uVar110;
                _Var86.m128d_f64[0] = auVar90._8_8_;
              }
              else {
                pTVar31 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                    (&local_608,(TQuat<double> *)local_868,&local_798,
                                     (double)fVar112);
                fVar113 = GlobalVectorConstants::Float0001.m128_f32[0];
                fVar114 = GlobalVectorConstants::Float0001.m128_f32[1];
                fVar115 = GlobalVectorConstants::Float0001.m128_f32[2];
                fVar116 = GlobalVectorConstants::Float0001.m128_f32[3];
                dVar97 = pTVar31->X;
                dVar103 = pTVar31->Y;
                dVar96 = pTVar31->Z;
                dVar108 = pTVar31->W;
                dVar95 = dVar96 * dVar96 + dVar97 * dVar97;
                dVar83 = dVar108 * dVar108 + dVar103 * dVar103;
                auVar53._8_4_ = SUB84(dVar83,0);
                auVar53._0_8_ = dVar95;
                auVar53._12_4_ = (int)((ulonglong)dVar83 >> 0x20);
                auVar54._0_8_ = auVar53._8_8_ + dVar95;
                auVar54._8_8_ = dVar95 + dVar83;
                auVar117 = sqrtpd((undefined1  [16])_Var86.m128d_f64,auVar54);
                uVar39 = -(ulonglong)(dVar82 <= auVar54._0_8_);
                uVar38 = -(ulonglong)(dVar82 <= auVar54._8_8_);
                uVar25 = (uint)(uVar39 >> 0x20);
                uVar36 = (uint)(uVar38 >> 0x20);
                auVar88 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                auVar117);
                auVar75._0_4_ = ~(uint)uVar39 & SUB84((double)fVar113,0);
                auVar75._4_4_ = ~uVar25 & (uint)((ulonglong)(double)fVar113 >> 0x20);
                auVar75._8_4_ = ~(uint)uVar38 & SUB84((double)fVar114,0);
                auVar75._12_4_ = ~uVar36 & (uint)((ulonglong)(double)fVar114 >> 0x20);
                local_648._0_8_ = uVar39 & (ulonglong)(auVar88._0_8_ * dVar97);
                uVar22 = uVar38 & (ulonglong)(auVar88._8_8_ * dVar103);
                local_648._8_4_ = (undefined4)uVar22;
                local_648._12_4_ = (undefined4)(uVar22 >> 0x20);
                local_648 = local_648 | auVar75;
                auVar99._0_4_ = ~(uint)uVar39 & SUB84((double)fVar115,0);
                auVar99._4_4_ = ~uVar25 & (uint)((ulonglong)(double)fVar115 >> 0x20);
                auVar99._8_4_ = ~(uint)uVar38 & SUB84((double)fVar116,0);
                auVar99._12_4_ = ~uVar36 & (uint)((ulonglong)(double)fVar116 >> 0x20);
                auVar88 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                auVar117);
                auVar18._4_8_ = auVar117._8_8_;
                auVar18._0_4_ = local_648._4_4_;
                auVar91._0_8_ = auVar18._0_8_ << 0x20;
                auVar91._8_4_ = local_648._8_4_;
                auVar91._12_4_ = local_648._12_4_;
                _Var86.m128d_f64[1] = local_648._8_8_;
                _Var86.m128d_f64[0] = auVar91._8_8_;
                auVar55._0_8_ = (ulonglong)(auVar88._0_8_ * dVar96) & uVar39;
                uVar38 = (ulonglong)(auVar88._8_8_ * dVar108) & uVar38;
                auVar55._8_4_ = (undefined4)uVar38;
                auVar55._12_4_ = (undefined4)(uVar38 >> 0x20);
                _Var100.m128d_f64 = (double  [2])(auVar99 | auVar55);
                auVar19._4_8_ = auVar75._8_8_;
                auVar19._0_4_ = _Var100.m128d_f64[0]._4_4_;
                auVar76._0_8_ = auVar19._0_8_ << 0x20;
                auVar76._8_4_ = _Var100.m128d_f64[1]._0_4_;
                auVar76._12_4_ = _Var100.m128d_f64[1]._4_4_;
                dStack_850 = auVar76._8_8_;
                local_858 = _Var100.m128d_f64[0];
                dVar97 = local_648._0_8_;
                local_748 = dVar82;
                local_638 = _Var100.m128d_f64;
              }
              _Var72.m128d_f64[1] = _Var86.m128d_f64[0];
              _Var72.m128d_f64[0] = dVar97;
              _Var120.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
              _Var123.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
              local_868 = _Var72.m128d_f64;
              goto LAB_14a58de75;
            }
            bVar24 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5743640656631298663>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Units\\Highlevel\\Hierarchy\\RigUnit_TransformConstraint.cpp"
                                ,0x599,"false");
            param_8 = local_808;
            if (bVar24) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar35 = 0xffffffff;
            if (local_808->Index != 0xffff) {
              uVar35 = (uint)local_808->Index;
            }
            URigHierarchy::GetGlobalTransformByIndex(this,&local_2c8,uVar35,false);
            auVar20._4_8_ = _Var72.m128d_f64[1];
            auVar20._0_4_ = local_2c8.Rotation.ZW.m128d_f64[0]._4_4_;
            auVar81._0_8_ = auVar20._0_8_ << 0x20;
            auVar81._8_4_ = local_2c8.Rotation.ZW.m128d_f64[1]._0_4_;
            auVar81._12_4_ = local_2c8.Rotation.ZW.m128d_f64[1]._4_4_;
            auVar21._4_8_ = _Var86.m128d_f64[1];
            auVar21._0_4_ = local_2c8.Rotation.XY.m128d_f64[0]._4_4_;
            auVar93._0_8_ = auVar21._0_8_ << 0x20;
            auVar93._8_4_ = local_2c8.Rotation.XY.m128d_f64[1]._0_4_;
            auVar93._12_4_ = local_2c8.Rotation.XY.m128d_f64[1]._4_4_;
            fVar113 = GlobalVectorConstants::Float0001.m128_f32[0];
            fVar114 = GlobalVectorConstants::Float0001.m128_f32[1];
            fVar115 = GlobalVectorConstants::Float0001.m128_f32[2];
            fVar116 = GlobalVectorConstants::Float0001.m128_f32[3];
            local_868[1] = auVar93._8_8_;
            local_868[0] = local_2c8.Rotation.XY.m128d_f64[0];
            local_858._4_4_ = local_2c8.Rotation.ZW.m128d_f64[0]._4_4_;
            local_858._0_4_ = local_2c8.Rotation.ZW.m128d_f64[0]._0_4_;
            dStack_850 = auVar81._8_8_;
            _Var100.m128d_f64 = local_2c8.Rotation.XY.m128d_f64;
            _Var120 = GlobalVectorConstants::DoubleOne.XY;
            _Var123 = GlobalVectorConstants::DoubleOne.ZW;
            dVar103 = (double)local_7e8._0_8_;
            dVar96 = (double)local_7e8._8_8_;
            dVar108 = (double)local_7d8._0_8_;
            dVar95 = (double)local_7d8._8_8_;
            goto LAB_14a58deab;
          }
          dVar97 = (double)fVar112;
          auVar105._8_4_ = SUB84(dVar97,0);
          auVar105._0_8_ = dVar97;
          auVar105._12_4_ = (int)((ulonglong)dVar97 >> 0x20);
          _Var100.m128d_f64[0] = dVar97 * (double)CONCAT44(local_798.Z._4_4_,local_798.Z._0_4_);
          _Var100.m128d_f64[1] = dVar97 * (double)CONCAT44(local_798.W._4_4_,local_798.W._0_4_);
          dVar97 = dVar97 * (double)CONCAT44(uVar109,uVar94);
          dVar103 = auVar105._8_8_ * (double)CONCAT44(uVar111,uVar110);
          auVar14._4_8_ = _Var86.m128d_f64[1];
          auVar14._0_4_ = (int)((ulonglong)_Var100.m128d_f64[0] >> 0x20);
          auVar89._0_8_ = auVar14._0_8_ << 0x20;
          auVar89._8_4_ = SUB84(_Var100.m128d_f64[1],0);
          auVar89._12_4_ = (int)((ulonglong)_Var100.m128d_f64[1] >> 0x20);
          auVar15._4_8_ = _Var72.m128d_f64[1];
          auVar15._0_4_ = (int)((ulonglong)dVar97 >> 0x20);
          auVar71._0_8_ = auVar15._0_8_ << 0x20;
          auVar71._8_4_ = SUB84(dVar103,0);
          auVar71._12_4_ = (int)((ulonglong)dVar103 >> 0x20);
          _Var72.m128d_f64[0] = auVar71._8_8_ * local_868[1] + dVar97 * local_868[0];
          _Var72.m128d_f64[1] = dVar103;
          _Var86.m128d_f64[0] =
               auVar89._8_8_ * dStack_850 + _Var100.m128d_f64[0] * (double)local_858 +
               _Var72.m128d_f64[0];
          _Var86.m128d_f64[1] = _Var100.m128d_f64[1];
          _Var120.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
          _Var123.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
          if (0.0 <= _Var86.m128d_f64[0]) {
            local_868[0] = dVar97 + local_868[0];
            local_868[1] = dVar103 + local_868[1];
            dStack_850 = dStack_850 + _Var100.m128d_f64[1];
            local_858 = (undefined1  [8])((double)local_858 + _Var100.m128d_f64[0]);
          }
          else {
            _Var72.m128d_f64[0] = local_868[0] - dVar97;
            _Var72.m128d_f64[1] = local_868[1] - dVar103;
            dStack_850 = dStack_850 - _Var100.m128d_f64[1];
            local_858 = (undefined1  [8])((double)local_858 - _Var100.m128d_f64[0]);
            local_868 = _Var72.m128d_f64;
          }
          goto LAB_14a58de75;
        }
      }
      fVar113 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar114 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar115 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar116 = GlobalVectorConstants::Float0001.m128_f32[3];
      param_6 = local_838;
      _Var120.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
      _Var123.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
    }
LAB_14a58de75:
    local_848 = (double)((longlong)local_848 + 0x10);
    uVar35 = uVar35 + 1;
    lVar37 = lVar37 + 0x20;
    if (param_5->ArrayNum <= (int)uVar35) goto code_r0x00014a58de97;
    goto LAB_14a58d9b0;
  }
LAB_14a58deab:
  uVar36 = 0xffffffff;
  uVar25 = 0xffffffff;
  dVar97 = (double)local_858 * (double)local_858 + local_868[0] * local_868[0];
  dVar83 = dStack_850 * dStack_850 + local_868[1] * local_868[1];
  auVar56._8_4_ = SUB84(dVar83,0);
  auVar56._0_8_ = dVar97;
  auVar56._12_4_ = (int)((ulonglong)dVar83 >> 0x20);
  auVar57._0_8_ = auVar56._8_8_ + dVar97;
  auVar57._8_8_ = dVar97 + dVar83;
  auVar88 = sqrtpd((undefined1  [16])_Var100.m128d_f64,auVar57);
  uVar38 = -(ulonglong)(dVar82 <= auVar57._0_8_);
  uVar39 = -(ulonglong)(dVar82 <= auVar57._8_8_);
  uVar35 = (uint)(uVar38 >> 0x20);
  uVar131 = (uint)(uVar39 >> 0x20);
  auVar117 = divpd((undefined1  [16])_Var120.m128d_f64,auVar88);
  auVar88 = divpd((undefined1  [16])_Var123.m128d_f64,auVar88);
  auVar77._0_4_ = ~(uint)uVar38 & SUB84((double)fVar113,0);
  auVar77._4_4_ = ~uVar35 & (uint)((ulonglong)(double)fVar113 >> 0x20);
  auVar77._8_4_ = ~(uint)uVar39 & SUB84((double)fVar114,0);
  auVar77._12_4_ = ~uVar131 & (uint)((ulonglong)(double)fVar114 >> 0x20);
  auVar121._0_8_ = uVar38 & (ulonglong)(auVar117._0_8_ * local_868[0]);
  uVar22 = uVar39 & (ulonglong)(auVar117._8_8_ * local_868[1]);
  auVar121._8_4_ = (undefined4)uVar22;
  auVar121._12_4_ = (undefined4)(uVar22 >> 0x20);
  local_868 = (double  [2])(auVar121 | auVar77);
  auVar124._0_8_ = (ulonglong)(auVar88._0_8_ * (double)local_858) & uVar38;
  uVar22 = (ulonglong)(auVar88._8_8_ * dStack_850) & uVar39;
  auVar124._8_4_ = (undefined4)uVar22;
  auVar124._12_4_ = (undefined4)(uVar22 >> 0x20);
  auVar78._0_4_ = ~(uint)uVar38 & SUB84((double)fVar115,0);
  auVar78._4_4_ = ~uVar35 & (uint)((ulonglong)(double)fVar115 >> 0x20);
  auVar78._8_4_ = ~(uint)uVar39 & SUB84((double)fVar116,0);
  auVar78._12_4_ = ~uVar131 & (uint)((ulonglong)(double)fVar116 >> 0x20);
  _local_858 = (double  [2])(auVar78 | auVar124);
  uVar35 = uVar25;
  if (param_8->Index != 0xffff) {
    uVar35 = (uint)param_8->Index;
  }
  URigHierarchy::GetLocalTransformByIndex(this,&local_508,uVar35,false);
  if (EVar1 == Control) {
    UE::Math::TTransform<double>::Multiply(&local_508,&local_508,&local_568);
  }
  if (param_8->Index != 0xffff) {
    uVar25 = (uint)param_8->Index;
  }
  URigHierarchy::GetParentTransformByIndex(this,&local_268,uVar25,false);
  pFVar23 = local_7f8;
  local_268.Rotation.XY.m128d_f64[0] =
       local_268.Rotation.XY.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_268.Rotation.XY.m128d_f64[1] =
       local_268.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_268.Rotation.ZW.m128d_f64[0] =
       local_268.Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_268.Rotation.ZW.m128d_f64[1] =
       local_268.Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar106._8_4_ = SUB84(local_268.Rotation.ZW.m128d_f64[1],0);
  auVar106._0_8_ = local_268.Rotation.ZW.m128d_f64[0];
  auVar106._12_4_ = (int)((ulonglong)local_268.Rotation.ZW.m128d_f64[1] >> 0x20);
  auVar128._8_4_ = SUB84(local_268.Rotation.XY.m128d_f64[0],0);
  auVar128._0_8_ = local_268.Rotation.XY.m128d_f64[0];
  auVar128._12_4_ = (int)((ulonglong)local_268.Rotation.XY.m128d_f64[0] >> 0x20);
  auVar58._8_4_ = SUB84(local_268.Rotation.ZW.m128d_f64[0],0);
  auVar58._0_8_ = local_268.Rotation.ZW.m128d_f64[0];
  auVar58._12_4_ = (int)((ulonglong)local_268.Rotation.ZW.m128d_f64[0] >> 0x20);
  local_5c8.Translation.ZW.m128d_f64[0]._0_4_ = local_508.Translation.ZW.m128d_f64[0]._0_4_;
  local_5c8.Translation.ZW.m128d_f64[0]._4_4_ = local_508.Translation.ZW.m128d_f64[0]._4_4_;
  local_5c8.Translation.ZW.m128d_f64[1]._0_4_ = local_508.Translation.ZW.m128d_f64[1]._0_4_;
  local_5c8.Translation.ZW.m128d_f64[1]._4_4_ = local_508.Translation.ZW.m128d_f64[1]._4_4_;
  local_5c8.Rotation.XY.m128d_f64[0] =
       local_268.Rotation.XY.m128d_f64[0] * dStack_850 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       local_868[0] * auVar106._8_8_ +
       (double)local_858 * local_268.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       local_268.Rotation.ZW.m128d_f64[0] * local_868[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_5c8.Rotation.XY.m128d_f64[1] =
       auVar128._8_8_ * (double)local_858 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
       local_868[1] * local_268.Rotation.ZW.m128d_f64[1] +
       dStack_850 * local_268.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
       auVar58._8_8_ * local_868[0] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_5c8.Rotation.ZW.m128d_f64[0] =
       local_268.Rotation.XY.m128d_f64[0] * local_868[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       (double)local_858 * auVar106._8_8_ +
       local_868[0] * local_268.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       local_268.Rotation.ZW.m128d_f64[0] * dStack_850 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_5c8.Rotation.ZW.m128d_f64[1] =
       local_268.Rotation.XY.m128d_f64[0] * local_868[0] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
       dStack_850 * local_268.Rotation.ZW.m128d_f64[1] +
       local_868[1] * local_268.Rotation.XY.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
       local_268.Rotation.ZW.m128d_f64[0] * (double)local_858 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_5c8.Translation.XY.m128d_f64[0] = local_508.Translation.XY.m128d_f64[0];
  local_5c8.Translation.XY.m128d_f64[1] = local_508.Translation.XY.m128d_f64[1];
  local_5c8.Scale3D.XY.m128d_f64[0]._0_4_ = local_508.Scale3D.XY.m128d_f64[0]._0_4_;
  local_5c8.Scale3D.XY.m128d_f64[0]._4_4_ = local_508.Scale3D.XY.m128d_f64[0]._4_4_;
  local_5c8.Scale3D.XY.m128d_f64[1]._0_4_ = local_508.Scale3D.XY.m128d_f64[1]._0_4_;
  local_5c8.Scale3D.XY.m128d_f64[1]._4_4_ = local_508.Scale3D.XY.m128d_f64[1]._4_4_;
  local_5c8.Scale3D.ZW.m128d_f64[0]._0_4_ = local_508.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_5c8.Scale3D.ZW.m128d_f64[0]._4_4_ = local_508.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_5c8.Scale3D.ZW.m128d_f64[1]._0_4_ = local_508.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_5c8.Scale3D.ZW.m128d_f64[1]._4_4_ = local_508.Scale3D.ZW.m128d_f64[1]._4_4_;
  if (param_3) {
    auVar101._8_4_ = SUB84(dVar96,0);
    auVar101._0_8_ = dVar103;
    auVar101._12_4_ = (int)((ulonglong)dVar96 >> 0x20);
    auVar79._8_4_ = SUB84(dVar95,0);
    auVar79._0_8_ = dVar108;
    auVar79._12_4_ = (int)((ulonglong)dVar95 >> 0x20);
    auVar107._8_4_ = SUB84(local_5c8.Rotation.XY.m128d_f64[1],0);
    auVar107._0_8_ = local_5c8.Rotation.XY.m128d_f64[1];
    auVar107._12_4_ = (int)((ulonglong)local_5c8.Rotation.XY.m128d_f64[1] >> 0x20);
    auVar129._8_4_ = SUB84(local_5c8.Rotation.XY.m128d_f64[0],0);
    auVar129._0_8_ = local_5c8.Rotation.XY.m128d_f64[0];
    uVar94 = (undefined4)((ulonglong)local_5c8.Rotation.XY.m128d_f64[0] >> 0x20);
    auVar129._12_4_ = uVar94;
    auVar125._8_4_ = SUB84(local_5c8.Rotation.XY.m128d_f64[0],0);
    auVar125._0_8_ = local_5c8.Rotation.XY.m128d_f64[0];
    auVar125._12_4_ = uVar94;
    auVar59._8_4_ = SUB84(local_5c8.Rotation.ZW.m128d_f64[1],0);
    auVar59._0_8_ = local_5c8.Rotation.ZW.m128d_f64[1];
    auVar59._12_4_ = (int)((ulonglong)local_5c8.Rotation.ZW.m128d_f64[1] >> 0x20);
    dVar83 = local_5c8.Rotation.XY.m128d_f64[0] * auVar101._8_8_;
    auVar60._8_4_ = SUB84(local_5c8.Rotation.ZW.m128d_f64[0],0);
    auVar60._0_8_ = local_5c8.Rotation.ZW.m128d_f64[0];
    auVar60._12_4_ = (int)((ulonglong)local_5c8.Rotation.ZW.m128d_f64[0] >> 0x20);
    dVar97 = dVar103 * local_5c8.Rotation.XY.m128d_f64[1];
    dVar82 = local_5c8.Rotation.ZW.m128d_f64[0] * dVar108;
    local_5c8.Rotation.XY.m128d_f64[0] =
         local_5c8.Rotation.XY.m128d_f64[0] * dVar95 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         local_5c8.Rotation.ZW.m128d_f64[1] * dVar103 +
         dVar108 * local_5c8.Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         local_5c8.Rotation.ZW.m128d_f64[0] * auVar101._8_8_ *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_5c8.Rotation.XY.m128d_f64[1] =
         auVar129._8_8_ * dVar108 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
         + auVar59._8_8_ * dVar96 +
         auVar79._8_8_ * auVar107._8_8_ *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
         auVar60._8_8_ * dVar103 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_5c8.Rotation.ZW.m128d_f64[0] =
         dVar83 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar108 * local_5c8.Rotation.ZW.m128d_f64[1] +
         dVar97 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         local_5c8.Rotation.ZW.m128d_f64[0] * dVar95 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_5c8.Rotation.ZW.m128d_f64[1] =
         auVar125._8_8_ * dVar103 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
         + dVar95 * local_5c8.Rotation.ZW.m128d_f64[1] +
         dVar96 * auVar107._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
         dVar82 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  }
  local_778 = local_5c8.Rotation.XY.m128d_f64;
  local_768 = local_5c8.Rotation.ZW.m128d_f64;
  if (((local_7f8->bX == false) || (local_7f8->bY == false)) || (local_7f8->bZ == false)) {
    AnimationCore::EulerFromQuat
              ((TVector<double> *)&local_7c8._s_0,(TQuat<double> *)local_778,
               param_6->RotationOrderForFilter,false);
    local_708.X = local_508.Rotation.XY.m128d_f64[0];
    local_708.Y = local_508.Rotation.XY.m128d_f64[1];
    local_708.Z = local_508.Rotation.ZW.m128d_f64[0];
    local_708.W = local_508.Rotation.ZW.m128d_f64[1];
    AnimationCore::EulerFromQuat
              ((TVector<double> *)&local_7b0._s_0,&local_708,param_6->RotationOrderForFilter,false);
    if (pFVar23->bX == false) {
      local_7c8._s_0.X = local_7b0._s_0.X;
    }
    if (pFVar23->bY == false) {
      local_7c8._s_0.Y = local_7b0._s_0.Y;
    }
    if (pFVar23->bZ == false) {
      local_7c8._s_0.Z = local_7b0._s_0.Z;
    }
    pTVar31 = AnimationCore::QuatFromEuler
                        (&local_5e8,(TVector<double> *)&local_7c8._s_0,
                         param_6->RotationOrderForFilter,false);
    local_5c8.Rotation.ZW.m128d_f64[0] = pTVar31->Z;
    local_5c8.Rotation.ZW.m128d_f64[1] = pTVar31->W;
    local_5c8.Rotation.XY.m128d_f64[0] = pTVar31->X;
    local_5c8.Rotation.XY.m128d_f64[1] = pTVar31->Y;
  }
  if (local_800 < __real_3f7ff972) {
    pTVar27 = FRigVMMathLibrary::LerpTransform(&local_1a8,&local_508,&local_5c8,local_800);
    local_5c8.Rotation.XY.m128d_f64 = *&(pTVar27->Rotation).XY.m128d_f64;
    local_5c8.Rotation.ZW.m128d_f64 = *&(pTVar27->Rotation).ZW.m128d_f64;
    local_5c8.Translation.XY.m128d_f64[0] = (pTVar27->Translation).XY.m128d_f64[0];
    local_5c8.Translation.XY.m128d_f64[1] = (pTVar27->Translation).XY.m128d_f64[1];
    local_5c8.Translation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar27->Translation).ZW.m128d_f64
    ;
    local_5c8.Translation.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar27->Translation).ZW.m128d_f64 + 4);
    local_5c8.Translation.ZW.m128d_f64[1]._0_4_ =
         *(undefined4 *)((pTVar27->Translation).ZW.m128d_f64 + 1);
    local_5c8.Translation.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar27->Translation).ZW.m128d_f64 + 0xc);
    local_5c8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar27->Scale3D).XY.m128d_f64;
    local_5c8.Scale3D.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar27->Scale3D).XY.m128d_f64 + 4);
    local_5c8.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar27->Scale3D).XY.m128d_f64 + 1);
    local_5c8.Scale3D.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar27->Scale3D).XY.m128d_f64 + 0xc);
    local_5c8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar27->Scale3D).ZW.m128d_f64;
    local_5c8.Scale3D.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar27->Scale3D).ZW.m128d_f64 + 4);
    local_5c8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar27->Scale3D).ZW.m128d_f64 + 1);
    local_5c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar27->Scale3D).ZW.m128d_f64 + 0xc);
  }
  if (EVar1 == Control) {
    pTVar27 = UE::Math::TTransform<double>::GetRelativeTransform(&local_5c8,&local_148,&local_568);
    dVar82 = (pTVar27->Rotation).XY.m128d_f64[0];
    dVar97 = (pTVar27->Rotation).XY.m128d_f64[1];
    dVar103 = (pTVar27->Rotation).ZW.m128d_f64[0];
    dVar96 = (pTVar27->Rotation).ZW.m128d_f64[1];
    local_5c8.Translation.XY.m128d_f64[0] = (pTVar27->Translation).XY.m128d_f64[0];
    local_5c8.Translation.XY.m128d_f64[1] = (pTVar27->Translation).XY.m128d_f64[1];
    local_5c8.Translation.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar27->Translation).ZW.m128d_f64
    ;
    local_5c8.Translation.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar27->Translation).ZW.m128d_f64 + 4);
    local_5c8.Translation.ZW.m128d_f64[1]._0_4_ =
         *(undefined4 *)((pTVar27->Translation).ZW.m128d_f64 + 1);
    local_5c8.Translation.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar27->Translation).ZW.m128d_f64 + 0xc);
    auVar80._0_8_ = dVar82 * dVar82 + dVar103 * dVar103;
    auVar80._8_8_ = dVar97 * dVar97 + dVar96 * dVar96;
    local_5c8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar27->Scale3D).XY.m128d_f64;
    local_5c8.Scale3D.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar27->Scale3D).XY.m128d_f64 + 4);
    local_5c8.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar27->Scale3D).XY.m128d_f64 + 1);
    local_5c8.Scale3D.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar27->Scale3D).XY.m128d_f64 + 0xc);
    auVar61._8_4_ = SUB84(auVar80._8_8_,0);
    auVar61._0_8_ = auVar80._0_8_;
    auVar61._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
    auVar62._0_8_ = auVar61._8_8_ + auVar80._0_8_;
    auVar62._8_8_ = auVar80._0_8_ + auVar80._8_8_;
    local_5c8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar27->Scale3D).ZW.m128d_f64;
    local_5c8.Scale3D.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar27->Scale3D).ZW.m128d_f64 + 4);
    local_5c8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar27->Scale3D).ZW.m128d_f64 + 1);
    local_5c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar27->Scale3D).ZW.m128d_f64 + 0xc);
    auVar88 = sqrtpd(auVar80,auVar62);
    uVar38 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar62._0_8_);
    uVar40 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar62._8_8_);
    auVar117 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar88);
    auVar88 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar88);
    uVar39 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar62._0_8_);
    uVar41 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar62._8_8_);
    auVar130._0_8_ = uVar38 & (ulonglong)(auVar117._0_8_ * dVar82);
    uVar22 = uVar40 & (ulonglong)(auVar117._8_8_ * dVar97);
    auVar130._8_4_ = (undefined4)uVar22;
    auVar130._12_4_ = (undefined4)(uVar22 >> 0x20);
    auVar92._0_4_ = ~(uint)uVar38 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar92._4_4_ =
         ~(uint)(uVar38 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    auVar92._8_4_ = ~(uint)uVar40 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar92._12_4_ =
         ~(uint)(uVar40 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    auVar126._0_8_ = uVar39 & (ulonglong)(auVar88._0_8_ * dVar103);
    uVar22 = uVar41 & (ulonglong)(auVar88._8_8_ * dVar96);
    auVar126._8_4_ = (undefined4)uVar22;
    auVar126._12_4_ = (undefined4)(uVar22 >> 0x20);
    auVar102._0_4_ = ~(uint)uVar39 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar102._4_4_ =
         ~(uint)(uVar39 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar102._8_4_ = ~(uint)uVar41 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar102._12_4_ =
         ~(uint)(uVar41 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    local_5c8.Rotation.XY.m128d_f64 = (double  [2])(auVar130 | auVar92);
    local_5c8.Rotation.ZW.m128d_f64 = (double  [2])(auVar126 | auVar102);
  }
  if (param_8->Index != 0xffff) {
    uVar36 = (uint)param_8->Index;
  }
  local_6e8.Rotation.XY.m128d_f64 = local_5c8.Rotation.XY.m128d_f64;
  local_6e8.Rotation.ZW.m128d_f64 = local_5c8.Rotation.ZW.m128d_f64;
  local_6e8.Translation.XY.m128d_f64[0] = local_5c8.Translation.XY.m128d_f64[0];
  local_6e8.Translation.XY.m128d_f64[1] = local_5c8.Translation.XY.m128d_f64[1];
  local_6e8.Translation.ZW.m128d_f64[0]._0_4_ = local_5c8.Translation.ZW.m128d_f64[0]._0_4_;
  local_6e8.Translation.ZW.m128d_f64[0]._4_4_ = local_5c8.Translation.ZW.m128d_f64[0]._4_4_;
  local_6e8.Translation.ZW.m128d_f64[1]._0_4_ = local_5c8.Translation.ZW.m128d_f64[1]._0_4_;
  local_6e8.Translation.ZW.m128d_f64[1]._4_4_ = local_5c8.Translation.ZW.m128d_f64[1]._4_4_;
  local_6e8.Scale3D.XY.m128d_f64[0]._0_4_ = local_5c8.Scale3D.XY.m128d_f64[0]._0_4_;
  local_6e8.Scale3D.XY.m128d_f64[0]._4_4_ = local_5c8.Scale3D.XY.m128d_f64[0]._4_4_;
  local_6e8.Scale3D.XY.m128d_f64[1]._0_4_ = local_5c8.Scale3D.XY.m128d_f64[1]._0_4_;
  local_6e8.Scale3D.XY.m128d_f64[1]._4_4_ = local_5c8.Scale3D.XY.m128d_f64[1]._4_4_;
  local_6e8.Scale3D.ZW.m128d_f64[0]._0_4_ = local_5c8.Scale3D.ZW.m128d_f64[0]._0_4_;
  local_6e8.Scale3D.ZW.m128d_f64[0]._4_4_ = local_5c8.Scale3D.ZW.m128d_f64[0]._4_4_;
  local_6e8.Scale3D.ZW.m128d_f64[1]._0_4_ = local_5c8.Scale3D.ZW.m128d_f64[1]._0_4_;
  local_6e8.Scale3D.ZW.m128d_f64[1]._4_4_ = local_5c8.Scale3D.ZW.m128d_f64[1]._4_4_;
  URigHierarchy::SetLocalTransformByIndex(this,uVar36,&local_6e8,false,true,false,false);
  return;
code_r0x00014a58de97:
  param_8 = local_808;
  dVar103 = (double)local_7e8._0_8_;
  dVar96 = (double)local_7e8._8_8_;
  dVar108 = (double)local_7d8._0_8_;
  dVar95 = (double)local_7d8._8_8_;
  goto LAB_14a58deab;
}

