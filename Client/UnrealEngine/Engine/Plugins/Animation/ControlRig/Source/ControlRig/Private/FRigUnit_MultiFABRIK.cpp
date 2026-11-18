// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4a78a0

UScriptStruct * __cdecl FRigUnit_MultiFABRIK::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_MultiFABRIK.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_MultiFABRIK.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK,(UObject *)pUVar1,
                         L"RigUnit_MultiFABRIK");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_MultiFABRIK.OuterSingleton,&local_18)
    ;
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_MultiFABRIK.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4a7960

UScriptStruct * __thiscall FRigUnit_MultiFABRIK::GetExecuteContextStruct(FRigUnit_MultiFABRIK *this)

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

// Execute @ 14a4a7ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_MultiFABRIK::Execute(FRigUnit_MultiFABRIK *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2b8 [32];
  TArrayView<FRigUnit_MultiFABRIK_EndEffector_const_,int> local_278;
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
  local_278.DataPtr = (FRigUnit_MultiFABRIK_EndEffector *)(this->Effectors).AllocatorInstance.Data;
  iVar1 = (this->Effectors).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->RootBone,&local_278,this->Precision,
                this->bPropagateToChildren,this->MaxIterations,&this->WorkData,&this->bIsInitialized
               );
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Initialize @ 14a4a7e30

void __thiscall FRigUnit_MultiFABRIK::Initialize(FRigUnit_MultiFABRIK *this)

{
  this->bIsInitialized = false;
  return;
}

// operator= @ 14a51ab30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_MultiFABRIK * __thiscall
FRigUnit_MultiFABRIK::operator=(FRigUnit_MultiFABRIK *this,FRigUnit_MultiFABRIK *param_1)

{
  TArray<FRigUnit_MultiFABRIK_EndEffector,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRigUnit_MultiFABRIK_EndEffector,TSizedDefaultAllocator<32>_> *pTVar2;
  FRigUnit_MultiFABRIK_WorkData *pFVar3;
  FRigUnit_MultiFABRIK_WorkData *pFVar4;
  FRigUnit_MultiFABRIK_ChainGroup *pFVar5;
  FRigUnit_MultiFABRIK_ChainGroup *pFVar6;
  TArray<FRigUnit_MultiFABRIK_BoneWorkingData,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FRigUnit_MultiFABRIK_BoneWorkingData,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  TArray<FRigUnit_MultiFABRIK_ChainGroup,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FRigUnit_MultiFABRIK_ChainGroup,TSizedDefaultAllocator<32>_> *pTVar12;
  
  pTVar1 = &param_1->Effectors;
  pTVar2 = &this->Effectors;
  this->RootBone = param_1->RootBone;
  if (pTVar2 != pTVar1) {
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Effectors).ArrayNum = (param_1->Effectors).ArrayNum;
    (this->Effectors).ArrayMax = (param_1->Effectors).ArrayMax;
    (param_1->Effectors).ArrayNum = 0;
    (param_1->Effectors).ArrayMax = 0;
  }
  pFVar3 = &param_1->WorkData;
  this->Precision = param_1->Precision;
  pFVar4 = &this->WorkData;
  this->bPropagateToChildren = param_1->bPropagateToChildren;
  this->MaxIterations = param_1->MaxIterations;
  if (pFVar4 != pFVar3) {
    pFVar9 = (pFVar4->EffectorBoneIndices).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pFVar4->EffectorBoneIndices).AllocatorInstance.Data =
         (pFVar3->EffectorBoneIndices).AllocatorInstance.Data;
    (pFVar3->EffectorBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->WorkData).EffectorBoneIndices.ArrayNum = (param_1->WorkData).EffectorBoneIndices.ArrayNum
    ;
    (this->WorkData).EffectorBoneIndices.ArrayMax = (param_1->WorkData).EffectorBoneIndices.ArrayMax
    ;
    (param_1->WorkData).EffectorBoneIndices.ArrayNum = 0;
    (param_1->WorkData).EffectorBoneIndices.ArrayMax = 0;
  }
  pFVar5 = &(param_1->WorkData).ChainGroup;
  pFVar6 = &(this->WorkData).ChainGroup;
  if (pFVar6 != pFVar5) {
    DestructItems<FFABRIKChainLink,int>
              ((FFABRIKChainLink *)(pFVar6->Chain).Link.AllocatorInstance.Data,
               (this->WorkData).ChainGroup.Chain.Link.ArrayNum);
    pFVar9 = (pFVar6->Chain).Link.AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pFVar6->Chain).Link.AllocatorInstance.Data = (pFVar5->Chain).Link.AllocatorInstance.Data;
    (pFVar5->Chain).Link.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->WorkData).ChainGroup.Chain.Link.ArrayNum =
         (param_1->WorkData).ChainGroup.Chain.Link.ArrayNum;
    (this->WorkData).ChainGroup.Chain.Link.ArrayMax =
         (param_1->WorkData).ChainGroup.Chain.Link.ArrayMax;
    (param_1->WorkData).ChainGroup.Chain.Link.ArrayNum = 0;
    (param_1->WorkData).ChainGroup.Chain.Link.ArrayMax = 0;
  }
  dVar10 = (param_1->WorkData).ChainGroup.Chain.EffectorLocation.field0_0x0._s_0.Y;
  (this->WorkData).ChainGroup.Chain.EffectorLocation.field0_0x0._s_0.X =
       (param_1->WorkData).ChainGroup.Chain.EffectorLocation.field0_0x0._s_0.X;
  (this->WorkData).ChainGroup.Chain.EffectorLocation.field0_0x0._s_0.Y = dVar10;
  (this->WorkData).ChainGroup.Chain.EffectorLocation.field0_0x0._s_0.Z =
       (param_1->WorkData).ChainGroup.Chain.EffectorLocation.field0_0x0._s_0.Z;
  (this->WorkData).ChainGroup.Chain.EffectorArrayIndex =
       (param_1->WorkData).ChainGroup.Chain.EffectorArrayIndex;
  (this->WorkData).ChainGroup.Chain.MaxLength = (param_1->WorkData).ChainGroup.Chain.MaxLength;
  pTVar11 = &(param_1->WorkData).ChainGroup.Children;
  (this->WorkData).ChainGroup.RootBoneTreeIndex = (param_1->WorkData).ChainGroup.RootBoneTreeIndex;
  pTVar12 = &(this->WorkData).ChainGroup.Children;
  if (pTVar12 != pTVar11) {
    DestructItems<FRigUnit_MultiFABRIK_ChainGroup,int>
              ((FRigUnit_MultiFABRIK_ChainGroup *)(pTVar12->AllocatorInstance).Data,
               (this->WorkData).ChainGroup.Children.ArrayNum);
    pFVar9 = (pTVar12->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WorkData).ChainGroup.Children.ArrayNum = (param_1->WorkData).ChainGroup.Children.ArrayNum
    ;
    (this->WorkData).ChainGroup.Children.ArrayMax = (param_1->WorkData).ChainGroup.Children.ArrayMax
    ;
    (param_1->WorkData).ChainGroup.Children.ArrayNum = 0;
    (param_1->WorkData).ChainGroup.Children.ArrayMax = 0;
  }
  pTVar7 = &(param_1->WorkData).BoneTree;
  pTVar8 = &(this->WorkData).BoneTree;
  if (pTVar8 != pTVar7) {
    DestructItems<FRigUnit_MultiFABRIK_BoneWorkingData,int>
              ((FRigUnit_MultiFABRIK_BoneWorkingData *)(pTVar8->AllocatorInstance).Data,
               (this->WorkData).BoneTree.ArrayNum);
    pFVar9 = (pTVar8->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WorkData).BoneTree.ArrayNum = (param_1->WorkData).BoneTree.ArrayNum;
    (this->WorkData).BoneTree.ArrayMax = (param_1->WorkData).BoneTree.ArrayMax;
    (param_1->WorkData).BoneTree.ArrayNum = 0;
    (param_1->WorkData).BoneTree.ArrayMax = 0;
  }
  this->bIsInitialized = param_1->bIsInitialized;
  return this;
}

// Execute @ 14a52ad30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_MultiFABRIK::Execute(FRigUnit_MultiFABRIK *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigUnit_MultiFABRIK_EndEffector_const_,int> local_18;
  
  local_18.DataPtr = (FRigUnit_MultiFABRIK_EndEffector *)(this->Effectors).AllocatorInstance.Data;
  iVar1 = (this->Effectors).ArrayNum;
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
  StaticExecute(param_1,&this->RootBone,&local_18,this->Precision,this->bPropagateToChildren,
                this->MaxIterations,&this->WorkData,&this->bIsInitialized);
  return;
}

// RigVMExecute @ 14a54b540

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_MultiFABRIK::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  uchar *puVar7;
  float *pfVar8;
  FRigVMMemoryHandle *pFVar9;
  uchar *puVar10;
  int *piVar11;
  FRigVMSlice *pFVar12;
  FRigUnit_MultiFABRIK_WorkData *pFVar13;
  bool *pbVar14;
  FControlRigExecuteContext *pFVar15;
  TArrayView<FRigUnit_MultiFABRIK_EndEffector_const_,int> local_48 [2];
  
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
    pFVar6 = (FName *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property);
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
  puVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar4 = (bool)*puVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  piVar11 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  iVar2 = *piVar11;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FRigUnit_MultiFABRIK_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar12->Offset + pFVar12->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar12 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pbVar14 = (bool *)FRigVMMemoryHandle::GetData_Internal
                              (pFVar9,false,pFVar12->Offset + pFVar12->Index);
  local_48[0].DataPtr = *(FRigUnit_MultiFABRIK_EndEffector **)puVar7;
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
  StaticExecute(pFVar15,pFVar6,local_48,fVar1,bVar4,iVar2,pFVar13,pbVar14);
  return;
}

// StaticExecute @ 14a5841d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_MultiFABRIK::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,
          TArrayView<FRigUnit_MultiFABRIK_EndEffector_const_,int> *param_3,float param_4,
          bool param_5,int param_6,FRigUnit_MultiFABRIK_WorkData *param_7,bool *param_8)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  ushort uVar4;
  FRigUnit_MultiFABRIK_BoneWorkingData *pFVar5;
  FFABRIKChainLink *pFVar6;
  FRigUnit_MultiFABRIK_ChainGroup *pFVar7;
  FCachedRigElement *pFVar8;
  FName FVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  FName FVar17;
  FName FVar18;
  FName FVar19;
  FName FVar20;
  FName FVar21;
  FName FVar22;
  FName FVar23;
  double dVar24;
  TArrayView<FRigUnit_MultiFABRIK_EndEffector_const_,int> *this;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  bool bVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  FRigUnit_MultiFABRIK_EndEffector *pFVar38;
  FRigBaseElement *pFVar39;
  FRigElementKey *pFVar40;
  TTuple<FName,int> *pTVar41;
  longlong lVar42;
  int iVar43;
  uint *puVar44;
  FScriptContainerElement *pFVar45;
  ulonglong uVar46;
  URigHierarchy *pUVar47;
  FScriptContainerElement *pFVar48;
  uint uVar49;
  ForAnyElementType FVar50;
  FScriptContainerElement *pFVar51;
  FScriptContainerElement *pFVar52;
  longlong lVar53;
  FName *pFVar54;
  TArray<FRigUnit_MultiFABRIK_BoneWorkingData,TSizedDefaultAllocator<32>_> *pTVar55;
  longlong lVar56;
  ulonglong uVar57;
  longlong lVar58;
  float fVar59;
  double dVar60;
  undefined1 auStackY_5e8 [32];
  undefined1 local_598;
  undefined1 local_597 [7];
  ForAnyElementType local_590;
  int local_588 [3];
  uint local_57c;
  ForAnyElementType local_578;
  undefined8 local_570;
  ForAnyElementType local_568;
  int local_560 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_558;
  ulonglong local_548;
  URigHierarchy *local_540;
  FName *local_538;
  longlong local_530;
  ulonglong local_528;
  TArrayView<FRigUnit_MultiFABRIK_EndEffector_const_,int> *local_520;
  FName local_518;
  FNameEntryId FStack_510;
  FNameEntryId FStack_50c;
  FNameEntryId FStack_508;
  uint uStack_504;
  ulonglong local_500;
  uint local_4f8;
  FNameEntryId FStack_4f4;
  uint local_4f0;
  FLocalBoneData local_4ec;
  FCachedRigElement local_4d0;
  FNameEntryId local_4b0;
  FNameEntryId FStack_4ac;
  uint uStack_4a8;
  ushort uStack_4a4;
  undefined2 uStack_4a2;
  FNameEntryId local_4a0;
  uint uStack_49c;
  FName FStack_498;
  FNameEntryId local_490;
  FNameEntryId FStack_48c;
  uint uStack_488;
  ushort uStack_484;
  undefined2 uStack_482;
  FNameEntryId local_480;
  uint uStack_47c;
  FName FStack_478;
  FRigElementKey local_470;
  FRigElementKey local_464;
  FRigElementKey local_458;
  FRigElementKey local_448;
  FRigElementKey local_438;
  TArrayView<FRigUnit_MultiFABRIK_EndEffector_const_,int> local_428;
  TVector<double>_u_0 local_418;
  TVector<double>_u_0 local_400;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double local_390;
  double dStack_388;
  double local_380;
  double local_368;
  FRigElementKey local_360 [2];
  TTransform<double> local_348;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> local_2e8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  local_540 = param_1->Hierarchy;
  if (local_540 != (URigHierarchy *)0x0) {
    pTVar55 = &param_7->BoneTree;
    local_520 = param_3;
    if (*param_8 == false) {
      (param_7->EffectorBoneIndices).ArrayNum = 0;
      if ((param_7->EffectorBoneIndices).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)param_7,0,&(param_7->EffectorBoneIndices).ArrayMax)
        ;
      }
      piVar1 = &(param_7->BoneTree).ArrayMax;
      pFVar5 = (FRigUnit_MultiFABRIK_BoneWorkingData *)(pTVar55->AllocatorInstance).Data;
      piVar2 = &(param_7->BoneTree).ArrayNum;
      if (*piVar1 < 0) {
        DestructItems<FRigUnit_MultiFABRIK_BoneWorkingData,int>(pFVar5,*piVar2);
        *piVar2 = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,8,0,&pTVar55->AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FRigUnit_MultiFABRIK_BoneWorkingData,int>(pFVar5,*piVar2);
        *piVar2 = 0;
      }
      piVar1 = &(param_7->ChainGroup).Chain.Link.ArrayMax;
      pFVar6 = (FFABRIKChainLink *)(param_7->ChainGroup).Chain.Link.AllocatorInstance.Data;
      iVar43 = (param_7->ChainGroup).Chain.Link.ArrayNum;
      if (*piVar1 < 0) {
        DestructItems<FFABRIKChainLink,int>(pFVar6,iVar43);
        (param_7->ChainGroup).Chain.Link.ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,0,(ForAnyElementType *)&param_7->ChainGroup,0,piVar1);
        }
      }
      else {
        DestructItems<FFABRIKChainLink,int>(pFVar6,iVar43);
        (param_7->ChainGroup).Chain.Link.ArrayNum = 0;
      }
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      piVar1 = &(param_7->ChainGroup).Children.ArrayMax;
      (param_7->ChainGroup).Chain.EffectorLocation.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (param_7->ChainGroup).Chain.EffectorLocation.field0_0x0._s_0.Y = (double)uVar3;
      (param_7->ChainGroup).Chain.EffectorLocation.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      (param_7->ChainGroup).Chain.EffectorArrayIndex = -1;
      (param_7->ChainGroup).Chain.MaxLength = 0.0;
      pFVar7 = (FRigUnit_MultiFABRIK_ChainGroup *)
               (param_7->ChainGroup).Children.AllocatorInstance.Data;
      iVar43 = (param_7->ChainGroup).Children.ArrayNum;
      if (*piVar1 < 0) {
        DestructItems<FRigUnit_MultiFABRIK_ChainGroup,int>(pFVar7,iVar43);
        (param_7->ChainGroup).Children.ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,0,&(param_7->ChainGroup).Children.AllocatorInstance,0,piVar1);
        }
        *param_8 = true;
      }
      else {
        DestructItems<FRigUnit_MultiFABRIK_ChainGroup,int>(pFVar7,iVar43);
        (param_7->ChainGroup).Children.ArrayNum = 0;
        *param_8 = true;
      }
    }
    pUVar47 = local_540;
    local_500 = 1;
    if ((param_7->BoneTree).ArrayNum == 0) {
      local_458.Name = *param_2;
      local_458.Type = Bone;
      uVar33 = URigHierarchy::GetIndex(local_540,&local_458,true);
      this = local_520;
      local_530 = CONCAT44(local_530._4_4_,uVar33);
      if (uVar33 != 0xffffffff) {
        iVar43 = 0;
        if (0 < local_520->ArrayNum) {
          do {
            pFVar38 = TArrayView<FRigUnit_MultiFABRIK_EndEffector_const_,int>::operator[]
                                (this,iVar43);
            local_448.Type = Bone;
            local_4d0.Key._0_4_ = local_4d0.Key._0_4_ & 0xffffff00;
            local_4d0.Key.Name.ComparisonIndex.Value = 0;
            local_4d0.Key.Name.Number = 0;
            local_448.Name = pFVar38->Bone;
            local_4d0.Index = 0xffff;
            local_4d0.ContainerVersion = -1;
            local_4d0.Element = (FRigBaseElement *)0x0;
            FCachedRigElement::UpdateCache(&local_4d0,&local_448,pUVar47);
            pFVar8 = (FCachedRigElement *)(param_7->EffectorBoneIndices).AllocatorInstance.Data;
            if (((pFVar8 <= &local_4d0) &&
                (&local_4d0 < pFVar8 + (param_7->EffectorBoneIndices).ArrayMax)) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar32)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar34 = (param_7->EffectorBoneIndices).ArrayNum;
            if (iVar34 == (param_7->EffectorBoneIndices).ArrayMax) {
              iVar34 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,(ForAnyElementType *)param_7,
                                  &(param_7->EffectorBoneIndices).ArrayMax);
            }
            iVar43 = iVar43 + 1;
            (param_7->EffectorBoneIndices).ArrayNum = iVar34 + 1;
            pFVar52 = (param_7->EffectorBoneIndices).AllocatorInstance.Data;
            pFVar45 = pFVar52 + (longlong)iVar34 * 0x20;
            *(ulonglong *)pFVar45 =
                 CONCAT44(local_4d0.Key.Name.ComparisonIndex.Value,local_4d0.Key._0_4_);
            *(ulonglong *)(pFVar45 + 8) =
                 CONCAT26(local_4d0._14_2_,CONCAT24(local_4d0.Index,local_4d0.Key.Name.Number));
            pFVar52 = pFVar52 + (longlong)iVar34 * 0x20 + 0x10;
            *(ulonglong *)pFVar52 = CONCAT44(local_4d0._20_4_,local_4d0.ContainerVersion);
            *(FRigBaseElement **)(pFVar52 + 8) = local_4d0.Element;
          } while (iVar43 < this->ArrayNum);
          uVar33 = (uint)local_530;
        }
        uVar49 = 0;
        iVar43 = (param_7->EffectorBoneIndices).ArrayNum;
        local_2e8.Elements._0_8_ = 0;
        local_2e8.Elements._8_8_ = 0;
        local_2e8.Elements._32_8_ = 0;
        local_2e8.Elements._40_4_ = 0;
        local_2e8.Elements._44_4_ = 0x80;
        local_2e8.Elements._48_4_ = 0xffffffff;
        local_2e8.Elements._52_4_ = 0;
        local_2e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_2e8.HashSize = 0;
        local_548 = local_548 & 0xffffffff00000000;
        if (0 < iVar43) {
          local_528 = 0;
          do {
            uVar46 = local_528;
            uVar35 = 0;
            if ((int)uVar49 < iVar43) {
              uVar35 = ~uVar49 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar4 = *(ushort *)
                     ((param_7->EffectorBoneIndices).AllocatorInstance.Data + uVar46 + 0xc);
            if (uVar4 != 0xffff) {
              local_578.Data = (FScriptContainerElement *)0x0;
              uVar35 = (uint)uVar4;
              local_570 = 0;
LAB_14a5845e0:
              local_518.ComparisonIndex.Value = 0;
              local_518.Number = 0;
              FStack_50c.Value = 0;
              FStack_508.Value = 0;
              uStack_504 = 0xffffffff;
              FStack_510.Value = uVar35;
              pFVar39 = URigHierarchy::Get(pUVar47,uVar35);
              local_518 = (pFVar39->Key).Name;
              FStack_510.Value = pFVar39->Index;
              pFVar39 = URigHierarchy::GetFirstParent(pUVar47,pFVar39);
              if (pFVar39 != (FRigBaseElement *)0x0) {
                FVar9 = (pFVar39->Key).Name;
                FStack_50c = FVar9.ComparisonIndex.Value;
                FStack_508.Value = FVar9.Number;
                uStack_504 = pFVar39->Index;
              }
              if (((local_578.Data <= &local_518) &&
                  (&local_518 < (FName *)(local_578.Data + (longlong)local_570._4_4_ * 0x18))) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar32)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar43 = (int)local_570;
              if ((int)local_570 == local_570._4_4_) {
                iVar43 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x418,&local_578,(int *)((longlong)&local_570 + 4));
              }
              local_570 = CONCAT44(local_570._4_4_,iVar43 + 1);
              memmove((FName *)(local_578.Data + 0x18),local_578.Data,(longlong)iVar43 * 0x18);
              FVar9.Number = FStack_50c.Value;
              FVar9.ComparisonIndex.Value = FStack_510.Value;
              *(FName *)local_578.Data = local_518;
              *(FName *)(local_578.Data + 8) = FVar9;
              FVar17.Number = uStack_504;
              FVar17.ComparisonIndex.Value = FStack_508.Value;
              *(FName *)(local_578.Data + 0x10) = FVar17;
              if (((int)uVar35 < 0) || ((pUVar47->Elements).ArrayNum <= (int)uVar35)) {
                local_4f8 = local_4f8 & 0xffffff00;
                FStack_4f4.Value = 0;
                local_4f0 = 0;
              }
              else {
                if (((int)uVar35 < 0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar42 = *(longlong *)
                          ((pUVar47->Elements).AllocatorInstance.Data + (longlong)(int)uVar35 * 8);
                uVar3 = *(undefined8 *)(lVar42 + 0x10);
                local_4f8 = (uint)uVar3;
                FStack_4f4.Value = (uint)((ulonglong)uVar3 >> 0x20);
                local_4f0 = *(uint *)(lVar42 + 0x18);
              }
              local_438.Name.ComparisonIndex.Value = FStack_4f4.Value;
              local_438._0_4_ = local_4f8;
              local_438.Name.Number = local_4f0;
              pFVar40 = URigHierarchy::GetFirstParent(pUVar47,local_360,&local_438);
              uVar35 = URigHierarchy::GetIndex(pUVar47,pFVar40,true);
              if (uVar35 != uVar33) goto code_r0x00014a5847ad;
              local_4ec.BoneName.ComparisonIndex.Value = 0;
              local_4ec.BoneName.Number = 0;
              local_4ec.ParentBoneName.ComparisonIndex.Value = 0;
              local_4ec.ParentBoneName.Number = 0;
              local_4ec.ParentIndex = -1;
              local_4ec.BoneIndex = uVar33;
              pFVar39 = URigHierarchy::Get(pUVar47,uVar33);
              local_4ec.BoneName = (pFVar39->Key).Name;
              local_4ec.BoneIndex = pFVar39->Index;
              pFVar39 = URigHierarchy::GetFirstParent(pUVar47,pFVar39);
              if (pFVar39 != (FRigBaseElement *)0x0) {
                local_4ec.ParentBoneName = (pFVar39->Key).Name;
                local_4ec.ParentIndex = pFVar39->Index;
              }
              TArray<`FRigUnit_MultiFABRIK::StaticExecute'::__l14::FLocalBoneData,TSizedDefaultAllocator<32>_>
              ::Insert(&local_578,&local_4ec,0);
              iVar43 = (int)local_570;
              uVar46 = (ulonglong)(int)local_570;
              local_538 = (FName *)(local_578.Data + uVar46 * 0x18);
              FVar50.Data = local_578.Data;
              while( true ) {
                pFVar54 = local_538;
                if ((int)uVar46 != iVar43) {
                  local_598 = 0;
                  `TCheckedPointerIterator<`FRigUnit_MultiFABRIK::StaticExecute'::__l14::FLocalBoneData,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_598);
                }
                if ((FName *)FVar50.Data == pFVar54) break;
                pTVar41 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                          ::Find(&local_2e8,*(FName *)FVar50.Data);
                local_588[2] = 0xffffffff;
                puVar44 = (uint *)&pTVar41->field_0x8;
                if (pTVar41 == (TTuple<FName,int> *)0x0) {
                  puVar44 = (uint *)0x0;
                }
                if (puVar44 == (uint *)0x0) {
                  uVar33 = (param_7->BoneTree).ArrayNum;
                  piVar1 = &(param_7->BoneTree).ArrayMax;
                  if (uVar33 == *piVar1) {
                    uVar33 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x880,&pTVar55->AllocatorInstance,piVar1);
                  }
                  (param_7->BoneTree).ArrayNum = uVar33 + 1;
                  DefaultConstructItems<FRigUnit_MultiFABRIK_BoneWorkingData,int>
                            ((pTVar55->AllocatorInstance).Data + (longlong)(int)uVar33 * 0x80,1);
                  uVar49 = 0;
                  if ((int)uVar33 < (param_7->BoneTree).ArrayNum) {
                    uVar49 = ~uVar33 >> 0x1f;
                  }
                  local_588[2] = uVar33;
                  if ((uVar49 == 0) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar32)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pUVar47 = local_540;
                  pFVar54 = (FName *)((pTVar55->AllocatorInstance).Data +
                                     (longlong)(int)uVar33 * 0x80);
                  local_464.Type = Bone;
                  local_4b0.Value = local_4b0.Value & 0xffffff00;
                  FStack_4ac.Value = 0;
                  uStack_4a8 = 0;
                  *pFVar54 = *(FName *)FVar50.Data;
                  local_464.Name = *(FName *)FVar50.Data;
                  uStack_4a4 = 0xffff;
                  local_4a0.Value = 0xffffffff;
                  FStack_498.ComparisonIndex.Value = 0;
                  FStack_498.Number = 0;
                  FCachedRigElement::UpdateCache
                            ((FCachedRigElement *)&local_4b0,&local_464,local_540);
                  FVar18.Number = FStack_4ac.Value;
                  FVar18.ComparisonIndex.Value = local_4b0.Value;
                  FVar19.Number._0_2_ = uStack_4a4;
                  FVar19.ComparisonIndex.Value = uStack_4a8;
                  FVar19.Number._2_2_ = uStack_4a2;
                  FVar20.Number = uStack_49c;
                  FVar20.ComparisonIndex.Value = local_4a0.Value;
                  local_470.Type = Bone;
                  pFVar54[1] = FVar18;
                  pFVar54[2] = FVar19;
                  local_490.Value = local_490.Value & 0xffffff00;
                  pFVar54[3] = FVar20;
                  pFVar54[4] = FStack_498;
                  local_470.Name = *(FName *)&((FName *)((longlong)FVar50.Data + 8))->Number;
                  uStack_484 = 0xffff;
                  FStack_48c.Value = 0;
                  uStack_488 = 0;
                  local_480.Value = 0xffffffff;
                  FStack_478.ComparisonIndex.Value = 0;
                  FStack_478.Number = 0;
                  FCachedRigElement::UpdateCache((FCachedRigElement *)&local_490,&local_470,pUVar47)
                  ;
                  FVar21.Number = FStack_48c.Value;
                  FVar21.ComparisonIndex.Value = local_490.Value;
                  FVar22.Number._0_2_ = uStack_484;
                  FVar22.ComparisonIndex.Value = uStack_488;
                  FVar22.Number._2_2_ = uStack_482;
                  FVar23.Number = uStack_47c;
                  FVar23.ComparisonIndex.Value = local_480.Value;
                  pFVar54[5] = FVar21;
                  pFVar54[6] = FVar22;
                  pFVar54[7] = FVar23;
                  pFVar54[8] = FStack_478;
                  if (((((short)pFVar54[6].Number == -1) ||
                       (bVar32 = ::FName::IsWithinBounds((FNameEntryId)pFVar54[5].Number), !bVar32))
                      || (*(longlong *)&pFVar54[5].Number == 0)) ||
                     ((char)pFVar54[5].ComparisonIndex.Value == '\0')) {
                    fVar59 = 0.0;
                  }
                  else {
                    uVar4 = (ushort)pFVar54[2].Number;
                    uVar33 = 0xffffffff;
                    if (uVar4 != 0xffff) {
                      uVar33 = (uint)uVar4;
                    }
                    URigHierarchy::GetLocalTransformByIndex(pUVar47,&local_1d8,uVar33,false);
                    local_3d8 = local_1d8.Translation.XY.m128d_f64[0];
                    dStack_3d0 = local_1d8.Translation.XY.m128d_f64[1];
                    local_3c8 = local_1d8.Translation.ZW.m128d_f64[0];
                    fVar59 = (float)SQRT(local_1d8.Translation.XY.m128d_f64[1] *
                                         local_1d8.Translation.XY.m128d_f64[1] +
                                         local_1d8.Translation.XY.m128d_f64[0] *
                                         local_1d8.Translation.XY.m128d_f64[0] +
                                         local_1d8.Translation.ZW.m128d_f64[0] *
                                         local_1d8.Translation.ZW.m128d_f64[0]);
                  }
                  pFVar54[0xc].ComparisonIndex.Value = (uint)fVar59;
                  pTVar41 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                            ::Find(&local_2e8,
                                   *(FName *)&((FName *)((longlong)FVar50.Data + 8))->Number);
                  puVar44 = (uint *)&pTVar41->field_0x8;
                  if (pTVar41 == (TTuple<FName,int> *)0x0) {
                    puVar44 = (uint *)0x0;
                  }
                  if (puVar44 != (uint *)0x0) {
                    pFVar54[9].ComparisonIndex.Value = *puVar44;
                  }
                  TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Emplace<FName_const_&,int_const_&>
                            ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                              *)&local_2e8,pFVar54,local_588 + 2);
                }
                else {
                  local_588[2] = *puVar44;
                  lVar42 = (longlong)local_588[2];
                  uVar33 = 0;
                  if (local_588[2] < (param_7->BoneTree).ArrayNum) {
                    uVar33 = (uint)~local_588[2] >> 0x1f;
                  }
                  if ((uVar33 == 0) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar32)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pFVar54 = (FName *)((pTVar55->AllocatorInstance).Data + lVar42 * 0x80);
                }
                uVar33 = pFVar54[9].ComparisonIndex.Value;
                if (uVar33 != 0xffffffff) {
                  uVar49 = 0;
                  if ((int)uVar33 < (param_7->BoneTree).ArrayNum) {
                    uVar49 = ~uVar33 >> 0x1f;
                  }
                  if ((uVar49 == 0) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar32)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                            ((TArray<int,TSizedDefaultAllocator<32>_> *)
                             ((pTVar55->AllocatorInstance).Data +
                             (longlong)(int)uVar33 * 0x80 + 0x50),local_588 + 2);
                }
                uVar46 = local_570 & 0xffffffff;
                FVar50.Data = FVar50.Data + 0x18;
              }
              uVar46 = local_528;
              uVar33 = (uint)local_530;
              uVar49 = (uint)local_548;
LAB_14a584b70:
              if ((FName *)local_578.Data != (FName *)0x0) {
                FMemory::Free(local_578.Data);
              }
            }
            iVar43 = (param_7->EffectorBoneIndices).ArrayNum;
            uVar49 = uVar49 + 1;
            local_528 = uVar46 + 0x20;
            local_548 = CONCAT44(local_548._4_4_,uVar49);
          } while ((int)uVar49 < iVar43);
        }
        iVar43 = (param_7->BoneTree).ArrayNum;
        local_590.Data = (FScriptContainerElement *)0x0;
        local_588[0] = 0;
        local_588[1] = 0;
        iVar34 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x20,8,iVar43,&local_590,local_588,local_588 + 1);
        memset(local_590.Data + (longlong)iVar34 * 0x20,0,(longlong)iVar43 << 5);
        iVar43 = (param_7->BoneTree).ArrayNum;
        pFVar48 = (FScriptContainerElement *)0x0;
        pFVar45 = pFVar48;
        pFVar52 = pFVar48;
        pFVar51 = pFVar48;
        if (0 < iVar43) {
          do {
            uVar49 = (uint)pFVar45;
            uVar33 = 0;
            if ((int)uVar49 < iVar43) {
              uVar33 = ~uVar49 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar33 = *(uint *)((pTVar55->AllocatorInstance).Data + 0x48 + (longlong)pFVar51);
            pFVar45 = pFVar48;
            iVar43 = local_588[0];
            if (uVar33 != 0xffffffff) {
              uVar35 = 0;
              if ((int)uVar33 < local_588[0]) {
                uVar35 = ~uVar33 >> 0x1f;
              }
              if (uVar35 == 0) {
                bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar32) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
              pFVar45 = local_590.Data + (longlong)(int)uVar33 * 0x20;
              iVar43 = local_588[0];
            }
            uVar33 = 0;
            if ((int)uVar49 < iVar43) {
              uVar33 = ~uVar49 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            *(FScriptContainerElement **)(local_590.Data + (longlong)pFVar52) = pFVar45;
            uVar33 = 0;
            if ((int)uVar49 < local_588[0]) {
              uVar33 = ~uVar49 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            *(uint *)(local_590.Data + 8 + (longlong)pFVar52) = uVar49;
            iVar43 = (param_7->BoneTree).ArrayNum;
            pFVar45 = (FScriptContainerElement *)(ulonglong)(uVar49 + 1);
            pFVar52 = pFVar52 + 0x20;
            pFVar51 = pFVar51 + 0x80;
          } while ((int)(uVar49 + 1) < iVar43);
        }
        if (0 < iVar43) {
          local_538 = (FName *)0x0;
          local_548 = 0;
          pFVar45 = pFVar48;
          do {
            pFVar54 = local_538;
            uVar46 = local_548;
            uVar35 = (uint)pFVar48;
            uVar49 = ~uVar35 >> 0x1f;
            uVar33 = 0;
            if ((int)uVar35 < iVar43) {
              uVar33 = uVar49;
            }
            if ((uVar33 == 0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (0 < *(int *)((param_7->BoneTree).AllocatorInstance.Data + (longlong)(pFVar45 + 0x58)
                            )) {
              uVar33 = 0;
              if ((int)uVar35 < local_588[0]) {
                uVar33 = uVar49;
              }
              if ((uVar33 == 0) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar32)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              FVar50.Data = local_590.Data;
              uVar33 = 0;
              if ((int)uVar35 < (param_7->BoneTree).ArrayNum) {
                uVar33 = uVar49;
              }
              if ((uVar33 == 0) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar32)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar43 = *(int *)((param_7->BoneTree).AllocatorInstance.Data +
                               (longlong)(pFVar45 + 0x58));
              iVar34 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (8,8,iVar43,(ForAnyElementType *)(FVar50.Data + uVar46 + 0x10),
                                  (int *)(FVar50.Data + uVar46 + 0x18),
                                  (int *)(FVar50.Data + uVar46 + 0x1c));
              memset((void *)(*(longlong *)(FVar50.Data + uVar46 + 0x10) + (longlong)iVar34 * 8),0,
                     (longlong)iVar43 << 3);
              uVar46 = 0;
              local_530 = 0;
              uVar33 = ~uVar35 >> 0x1f;
              uVar57 = uVar46;
              while( true ) {
                uVar49 = 0;
                if ((int)uVar35 < (param_7->BoneTree).ArrayNum) {
                  uVar49 = uVar33;
                }
                local_528 = uVar57;
                if ((uVar49 == 0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                uVar49 = (uint)uVar46;
                uVar46 = local_548;
                pFVar54 = local_538;
                if (*(int *)((param_7->BoneTree).AllocatorInstance.Data + (longlong)(pFVar45 + 0x58)
                            ) <= (int)uVar49) break;
                uVar36 = 0;
                if ((int)uVar35 < (param_7->BoneTree).ArrayNum) {
                  uVar36 = uVar33;
                }
                if ((uVar36 == 0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pFVar52 = (param_7->BoneTree).AllocatorInstance.Data;
                uVar36 = 0;
                if ((int)uVar49 < *(int *)(pFVar52 + (longlong)(pFVar45 + 0x58))) {
                  uVar36 = ~uVar49 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pFVar51 = (FScriptContainerElement *)0x0;
                uVar36 = *(uint *)(uVar57 + *(longlong *)(pFVar52 + (longlong)(pFVar45 + 0x50)));
                iVar43 = local_588[0];
                if (uVar36 != 0xffffffff) {
                  uVar37 = 0;
                  if ((int)uVar36 < local_588[0]) {
                    uVar37 = ~uVar36 >> 0x1f;
                  }
                  if (uVar37 == 0) {
                    bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar32) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                  }
                  pFVar51 = local_590.Data + (longlong)(int)uVar36 * 0x20;
                  iVar43 = local_588[0];
                }
                uVar36 = 0;
                if ((int)uVar35 < iVar43) {
                  uVar36 = uVar33;
                }
                if ((uVar36 == 0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                FVar50.Data = local_590.Data;
                uVar36 = 0;
                if ((int)uVar49 < *(int *)(local_590.Data + local_548 + 0x18)) {
                  uVar36 = ~uVar49 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                uVar46 = (ulonglong)(uVar49 + 1);
                uVar57 = local_528 + 4;
                *(FScriptContainerElement **)
                 (local_530 + *(longlong *)(FVar50.Data + local_548 + 0x10)) = pFVar51;
                local_530 = local_530 + 8;
              }
            }
            iVar43 = (param_7->BoneTree).ArrayNum;
            local_538 = (FName *)((longlong)&(pFVar54->ComparisonIndex).Value + 1);
            local_548 = uVar46 + 0x20;
            pFVar48 = (FScriptContainerElement *)(ulonglong)(uVar35 + 1);
            pFVar45 = pFVar45 + 0x80;
          } while ((int)(uVar35 + 1) < iVar43);
        }
        if (0 < local_588[0]) {
          (param_7->ChainGroup).RootBoneTreeIndex = 0;
          uVar33 = (param_7->EffectorBoneIndices).ArrayNum;
          local_558.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_558.ArrayNum = 0;
          local_558.ArrayMax = 0;
          if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
          }
          if (0 < (int)uVar33) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar33,&local_558.AllocatorInstance,0,&local_558.ArrayMax);
          }
          iVar43 = (param_7->EffectorBoneIndices).ArrayNum;
          pFVar45 = (param_7->EffectorBoneIndices).AllocatorInstance.Data;
          pFVar52 = pFVar45 + (longlong)iVar43 * 0x20;
          while( true ) {
            if ((param_7->EffectorBoneIndices).ArrayNum != iVar43) {
              local_597[0] = 0;
              `TCheckedPointerIterator<FCachedRigElement,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_597);
            }
            if (pFVar45 == pFVar52) break;
            local_57c = (uint)*(ushort *)(pFVar45 + 0xc);
            if (*(ushort *)(pFVar45 + 0xc) == 0xffff) {
              local_57c = 0xffffffff;
            }
            if (((local_558.AllocatorInstance.Data <= (FScriptContainerElement *)&local_57c) &&
                ((FScriptContainerElement *)&local_57c <
                 local_558.AllocatorInstance.Data + (longlong)local_558.ArrayMax * 4)) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar32)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (local_558.ArrayNum == local_558.ArrayMax) {
              iVar34 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_558.AllocatorInstance,&local_558.ArrayMax);
              local_558.ArrayNum = iVar34;
            }
            lVar42 = (longlong)local_558.ArrayNum;
            pFVar45 = pFVar45 + 0x20;
            local_558.ArrayNum = local_558.ArrayNum + 1;
            *(uint *)(local_558.AllocatorInstance.Data + lVar42 * 4) = local_57c;
          }
          if ((local_588[0] < 1) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          MultiFABRIK::AddNewLinkRecursive
                    ((FChainNode *)local_590.Data,&param_7->ChainGroup,&param_7->BoneTree,&local_558
                    );
          if (local_558.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_558.AllocatorInstance.Data);
          }
        }
        DestructItems<MultiFABRIK::FChainNode,int>((FChainNode *)local_590.Data,local_588[0]);
        if ((FChainNode *)local_590.Data != (FChainNode *)0x0) {
          FMemory::Free(local_590.Data);
        }
        local_2e8.HashSize = 0;
        if (local_2e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_2e8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_2e8.Elements);
      }
    }
    pUVar47 = local_540;
    pTVar55 = &param_7->BoneTree;
    lVar42 = 0;
    iVar43 = (param_7->BoneTree).ArrayNum;
    if (0 < iVar43) {
      uVar33 = 0;
      do {
        uVar49 = 0;
        if ((int)uVar33 < iVar43) {
          uVar49 = ~uVar33 >> 0x1f;
        }
        if ((uVar49 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar49 = 0xffffffff;
        uVar4 = *(ushort *)((pTVar55->AllocatorInstance).Data + lVar42 + 0x14);
        if (uVar4 != 0xffff) {
          uVar49 = (uint)uVar4;
        }
        URigHierarchy::GetGlobalTransformByIndex(pUVar47,&local_178,uVar49,false);
        dVar14 = local_178.Translation.ZW.m128d_f64[0];
        dVar12 = local_178.Translation.XY.m128d_f64[1];
        dVar24 = local_178.Translation.XY.m128d_f64[0];
        local_3c0 = local_178.Translation.XY.m128d_f64[0];
        dStack_3b8 = local_178.Translation.XY.m128d_f64[1];
        uVar49 = 0;
        if ((int)uVar33 < (param_7->BoneTree).ArrayNum) {
          uVar49 = ~uVar33 >> 0x1f;
        }
        local_3b0 = local_178.Translation.ZW.m128d_f64[0];
        if ((uVar49 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar52 = (pTVar55->AllocatorInstance).Data;
        uVar33 = uVar33 + 1;
        pFVar45 = pFVar52 + lVar42 + 0x68;
        *(double *)pFVar45 = dVar24;
        *(double *)(pFVar45 + 8) = dVar12;
        *(double *)(pFVar52 + lVar42 + 0x78) = dVar14;
        lVar42 = lVar42 + 0x80;
        iVar43 = (param_7->BoneTree).ArrayNum;
      } while ((int)uVar33 < iVar43);
      if ((iVar43 < 1) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar45 = (pTVar55->AllocatorInstance).Data;
      uVar15 = *(undefined8 *)(pFVar45 + 0x68);
      uVar16 = *(undefined8 *)(pFVar45 + 0x70);
      uVar3 = *(undefined8 *)(pFVar45 + 0x78);
      local_428.DataPtr = local_520->DataPtr;
      local_428.ArrayNum = local_520->ArrayNum;
      if ((local_428.ArrayNum < 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar32)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (0 < param_6) {
        uVar46 = (ulonglong)(uint)param_6;
        do {
          MultiFABRIK::UpdateTransfomRecusively(&param_7->ChainGroup,pTVar55);
          MultiFABRIK::SolveForwardRecursively(&param_7->ChainGroup,pTVar55,&local_428,param_4);
          if (((param_7->BoneTree).ArrayNum < 1) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar45 = (pTVar55->AllocatorInstance).Data;
          *(undefined8 *)(pFVar45 + 0x68) = uVar15;
          *(undefined8 *)(pFVar45 + 0x70) = uVar16;
          *(undefined8 *)(pFVar45 + 0x78) = uVar3;
          MultiFABRIK::SolveBackwardRecursively(&param_7->ChainGroup,pTVar55,param_4);
          uVar46 = uVar46 - 1;
        } while (uVar46 != 0);
      }
      iVar43 = (param_7->BoneTree).ArrayNum;
      lVar42 = (longlong)iVar43;
      local_568.Data = (FScriptContainerElement *)0x0;
      local_560[0] = 0;
      local_560[1] = 0;
      local_538 = (FName *)0x60;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar43,&local_568,local_560,local_560 + 1);
      if (((param_7->BoneTree).ArrayNum < 1) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar33 = 0xffffffff;
      uVar4 = *(ushort *)((pTVar55->AllocatorInstance).Data + 0x14);
      if (uVar4 != 0xffff) {
        uVar33 = (uint)uVar4;
      }
      URigHierarchy::GetGlobalTransformByIndex(local_540,&local_298,uVar33,false);
      if ((local_560[0] < 1) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar33 = 1;
      *(double *)local_568.Data = local_298.Rotation.XY.m128d_f64[0];
      *(double *)(local_568.Data + 8) = local_298.Rotation.XY.m128d_f64[1];
      *(double *)(local_568.Data + 0x10) = local_298.Rotation.ZW.m128d_f64[0];
      *(double *)(local_568.Data + 0x18) = local_298.Rotation.ZW.m128d_f64[1];
      *(double *)(local_568.Data + 0x20) = local_298.Translation.XY.m128d_f64[0];
      *(double *)(local_568.Data + 0x28) = local_298.Translation.XY.m128d_f64[1];
      *(double *)(local_568.Data + 0x30) = local_298.Translation.ZW.m128d_f64[0];
      *(double *)(local_568.Data + 0x38) = local_298.Translation.ZW.m128d_f64[1];
      *(double *)(local_568.Data + 0x40) = local_298.Scale3D.XY.m128d_f64[0];
      *(double *)(local_568.Data + 0x48) = local_298.Scale3D.XY.m128d_f64[1];
      *(double *)(local_568.Data + 0x50) = local_298.Scale3D.ZW.m128d_f64[0];
      *(double *)(local_568.Data + 0x58) = local_298.Scale3D.ZW.m128d_f64[1];
      dVar24 = __real_3ff0000000000000;
      local_520 = (TArrayView<FRigUnit_MultiFABRIK_EndEffector_const_,int> *)lVar42;
      if (1 < lVar42) {
        lVar58 = 0x60;
        lVar56 = 1;
        lVar53 = 0x80;
        do {
          uVar49 = 0;
          if ((int)uVar33 < (param_7->BoneTree).ArrayNum) {
            uVar49 = ~uVar33 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar49 = 0xffffffff;
          uVar4 = *(ushort *)((param_7->BoneTree).AllocatorInstance.Data + lVar53 + 0x14);
          if (uVar4 != 0xffff) {
            uVar49 = (uint)uVar4;
          }
          URigHierarchy::GetGlobalTransformByIndex(local_540,&local_238,uVar49,false);
          dVar31 = local_238.Scale3D.ZW.m128d_f64[1];
          dVar30 = local_238.Scale3D.ZW.m128d_f64[0];
          dVar29 = local_238.Scale3D.XY.m128d_f64[1];
          dVar28 = local_238.Scale3D.XY.m128d_f64[0];
          dVar27 = local_238.Translation.ZW.m128d_f64[1];
          dVar26 = local_238.Translation.ZW.m128d_f64[0];
          dVar25 = local_238.Translation.XY.m128d_f64[1];
          dVar13 = local_238.Translation.XY.m128d_f64[0];
          dVar11 = local_238.Rotation.ZW.m128d_f64[1];
          dVar60 = local_238.Rotation.ZW.m128d_f64[0];
          dVar14 = local_238.Rotation.XY.m128d_f64[1];
          dVar12 = local_238.Rotation.XY.m128d_f64[0];
          uVar49 = 0;
          if ((int)uVar33 < local_560[0]) {
            uVar49 = ~uVar33 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          *(double *)(local_568.Data + lVar58) = dVar12;
          *(double *)(local_568.Data + lVar58 + 8) = dVar14;
          *(double *)(local_568.Data + lVar58 + 0x10) = dVar60;
          *(double *)(local_568.Data + lVar58 + 0x10 + 8) = dVar11;
          *(double *)(local_568.Data + lVar58 + 0x20) = dVar13;
          *(double *)(local_568.Data + lVar58 + 0x20 + 8) = dVar25;
          *(double *)(local_568.Data + lVar58 + 0x30) = dVar26;
          *(double *)(local_568.Data + lVar58 + 0x30 + 8) = dVar27;
          *(double *)(local_568.Data + lVar58 + 0x40) = dVar28;
          *(double *)(local_568.Data + lVar58 + 0x40 + 8) = dVar29;
          *(double *)(local_568.Data + lVar58 + 0x50) = dVar30;
          *(double *)(local_568.Data + lVar58 + 0x50 + 8) = dVar31;
          uVar49 = 0;
          if ((int)uVar33 < (param_7->BoneTree).ArrayNum) {
            uVar49 = ~uVar33 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar49 = 0xffffffff;
          uVar4 = *(ushort *)((param_7->BoneTree).AllocatorInstance.Data + lVar53 + 0x34);
          if (uVar4 != 0xffff) {
            uVar49 = (uint)uVar4;
          }
          URigHierarchy::GetGlobalTransformByIndex(local_540,&local_118,uVar49,false);
          uVar49 = 0;
          if ((int)uVar33 < (param_7->BoneTree).ArrayNum) {
            uVar49 = ~uVar33 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar49 = *(uint *)((param_7->BoneTree).AllocatorInstance.Data + lVar53 + 0x48);
          uVar35 = 0;
          if ((int)uVar49 < (param_7->BoneTree).ArrayNum) {
            uVar35 = ~uVar49 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar45 = (param_7->BoneTree).AllocatorInstance.Data;
          local_368 = *(double *)(pFVar45 + (longlong)(int)uVar49 * 0x80 + 0x78);
          pFVar45 = pFVar45 + (longlong)(int)uVar49 * 0x80 + 0x68;
          dVar14 = *(double *)pFVar45;
          dVar12 = *(double *)(pFVar45 + 8);
          uVar49 = 0;
          if ((int)uVar33 < local_560[0]) {
            uVar49 = ~uVar33 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_3a8 = *(double *)(local_568.Data + lVar58 + 0x20);
          dStack_3a0 = *(double *)(local_568.Data + lVar58 + 0x20 + 8);
          local_398 = *(double *)(local_568.Data + lVar58 + 0x30);
          dVar60 = local_3a8 - local_118.Translation.XY.m128d_f64[0];
          local_380 = local_118.Translation.ZW.m128d_f64[0];
          local_390 = local_118.Translation.XY.m128d_f64[0];
          dStack_388 = local_118.Translation.XY.m128d_f64[1];
          uVar49 = 0;
          if ((int)uVar33 < (param_7->BoneTree).ArrayNum) {
            uVar49 = ~uVar33 >> 0x1f;
          }
          dVar11 = dStack_3a0 - local_118.Translation.XY.m128d_f64[1];
          dVar13 = local_398 - local_118.Translation.ZW.m128d_f64[0];
          local_3e8 = dVar24 / SQRT(dVar11 * dVar11 + dVar60 * dVar60 + dVar13 * dVar13);
          local_400._s_0.X = local_3e8 * dVar60;
          local_400._s_0.Y = local_3e8 * dVar11;
          local_400._s_0.Z = local_3e8 * dVar13;
          if ((uVar49 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar45 = (param_7->BoneTree).AllocatorInstance.Data;
          dVar14 = *(double *)(pFVar45 + lVar53 + 0x68) - dVar14;
          dVar60 = *(double *)(pFVar45 + lVar53 + 0x78) - local_368;
          uVar49 = 0;
          if ((int)uVar33 < local_560[0]) {
            uVar49 = ~uVar33 >> 0x1f;
          }
          dVar12 = *(double *)(pFVar45 + lVar53 + 0x70) - dVar12;
          local_3e0 = dVar24 / SQRT(dVar12 * dVar12 + dVar14 * dVar14 + dVar60 * dVar60);
          local_418._s_0.X = dVar14 * local_3e0;
          local_418._s_0.Y = dVar12 * local_3e0;
          local_418._s_0.Z = dVar60 * local_3e0;
          if ((uVar49 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FVar50.Data = local_568.Data;
          uVar49 = 0;
          if ((int)uVar33 < (param_7->BoneTree).ArrayNum) {
            uVar49 = ~uVar33 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar52 = (param_7->BoneTree).AllocatorInstance.Data;
          pFVar45 = pFVar52 + lVar53 + 0x68;
          uVar15 = *(undefined8 *)(pFVar45 + 8);
          uVar3 = *(undefined8 *)(pFVar52 + lVar53 + 0x78);
          pFVar52 = FVar50.Data + lVar58 + 0x20;
          *(undefined8 *)pFVar52 = *(undefined8 *)pFVar45;
          *(undefined8 *)(pFVar52 + 8) = uVar15;
          pFVar45 = FVar50.Data + lVar58 + 0x30;
          *(undefined8 *)pFVar45 = uVar3;
          *(undefined8 *)(pFVar45 + 8) = 0;
          uVar49 = 0;
          if ((int)uVar33 < (param_7->BoneTree).ArrayNum) {
            uVar49 = ~uVar33 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar49 = *(uint *)((param_7->BoneTree).AllocatorInstance.Data + lVar53 + 0x48);
          uVar35 = 0;
          if ((int)uVar49 < local_560[0]) {
            uVar35 = ~uVar49 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          MultiFABRIK::RecalculateRotationBasedOnDirection
                    ((TVector<double> *)&local_400._s_0,(TVector<double> *)&local_418._s_0,
                     (TTransform<double> *)(local_568.Data + (longlong)(int)uVar49 * 0x60));
          uVar33 = uVar33 + 1;
          lVar56 = lVar56 + 1;
          lVar58 = lVar58 + 0x60;
          lVar53 = lVar53 + 0x80;
        } while (lVar56 < lVar42);
        uVar46 = 1;
        lVar42 = 1;
        lVar53 = 0x80;
        pFVar54 = local_538;
        do {
          uVar49 = ~(uint)uVar46 >> 0x1f;
          uVar33 = 0;
          if ((int)(uint)uVar46 < local_560[0]) {
            uVar33 = uVar49;
          }
          if ((uVar33 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FVar50.Data = local_568.Data;
          uVar33 = 0;
          if ((int)local_500 < (param_7->BoneTree).ArrayNum) {
            uVar33 = uVar49;
          }
          if ((uVar33 == 0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar32)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar33 = 0xffffffff;
          uVar4 = *(ushort *)((param_7->BoneTree).AllocatorInstance.Data + lVar53 + 0x14);
          if (uVar4 != 0xffff) {
            uVar33 = (uint)uVar4;
          }
          local_348.Rotation.XY.m128d_f64[0] = *(double *)(FVar50.Data + (longlong)pFVar54);
          local_348.Rotation.XY.m128d_f64[1] = *(double *)(FVar50.Data + (longlong)pFVar54 + 8);
          local_348.Rotation.ZW.m128d_f64[0] = *(double *)(FVar50.Data + (longlong)pFVar54 + 0x10);
          local_348.Rotation.ZW.m128d_f64[1] =
               *(double *)(FVar50.Data + (longlong)pFVar54 + 0x10 + 8);
          local_348.Translation.XY.m128d_f64[0] =
               *(double *)(FVar50.Data + (longlong)pFVar54 + 0x20);
          local_348.Translation.XY.m128d_f64[1] =
               *(double *)(FVar50.Data + (longlong)pFVar54 + 0x20 + 8);
          local_348.Translation.ZW.m128d_f64[0] =
               *(double *)(FVar50.Data + (longlong)pFVar54 + 0x30);
          local_348.Translation.ZW.m128d_f64[1] =
               *(double *)(FVar50.Data + (longlong)pFVar54 + 0x30 + 8);
          local_348.Scale3D.XY.m128d_f64[0] = *(double *)(FVar50.Data + (longlong)pFVar54 + 0x40);
          local_348.Scale3D.XY.m128d_f64[1] =
               *(double *)(FVar50.Data + (longlong)pFVar54 + 0x40 + 8);
          local_348.Scale3D.ZW.m128d_f64[0] = *(double *)(FVar50.Data + (longlong)pFVar54 + 0x50);
          local_348.Scale3D.ZW.m128d_f64[1] =
               *(double *)(FVar50.Data + (longlong)pFVar54 + 0x50 + 8);
          URigHierarchy::SetGlobalTransformByIndex
                    (local_540,uVar33,&local_348,false,param_5,false,false);
          lVar42 = lVar42 + 1;
          uVar46 = (ulonglong)((int)local_500 + 1);
          pFVar54 = (FName *)((longlong)pFVar54 + 0x60);
          lVar53 = lVar53 + 0x80;
          local_500 = uVar46;
        } while (lVar42 < (longlong)local_520);
      }
      if (local_568.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.Data);
      }
    }
  }
  return;
code_r0x00014a5847ad:
  if (uVar35 == 0xffffffff) goto LAB_14a584b70;
  goto LAB_14a5845e0;
}

