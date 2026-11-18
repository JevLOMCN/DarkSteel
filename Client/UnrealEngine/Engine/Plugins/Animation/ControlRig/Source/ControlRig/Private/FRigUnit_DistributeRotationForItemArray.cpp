// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4e7360

UScriptStruct * __cdecl FRigUnit_DistributeRotationForItemArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray,
                         (UObject *)pUVar1,L"RigUnit_DistributeRotationForItemArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DistributeRotationForItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForItemArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DistributeRotationForItemArray.OuterSingleton;
}

// <lambda_1> @ 14a50a500

<lambda_1> * __thiscall
`FRigUnit_DistributeRotationForItemArray::StaticExecute'::__l19::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->RotationRatios).ArrayNum;
  _Src = (param_1->RotationRatios).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar1 << 2);
  return this;
}

// ~FRigUnit_DistributeRotationForItemArray @ 14a5185e0

void __thiscall
FRigUnit_DistributeRotationForItemArray::~FRigUnit_DistributeRotationForItemArray
          (FRigUnit_DistributeRotationForItemArray *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->WorkData).ItemLocalTransforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).ItemRotationT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).ItemRotationB.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).ItemRotationA.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkData).CachedItems.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Rotations).AllocatorInstance.Data;
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

// Execute @ 14a527070

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DistributeRotationForItemArray::Execute
          (FRigUnit_DistributeRotationForItemArray *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> local_28;
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
       (FRigUnit_DistributeRotation_Rotation *)(this->Rotations).AllocatorInstance.Data;
  iVar2 = (this->Rotations).ArrayNum;
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
  StaticExecute(param_1,&local_18,&local_28,this->RotationEaseType,this->Weight,&this->WorkData);
  return;
}

// Execute @ 14a527140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DistributeRotationForItemArray::Execute(FRigUnit_DistributeRotationForItemArray *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackY_2b8 [32];
  TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> local_288;
  TArrayView<FRigElementKey_const_,int> local_278;
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
       (FRigUnit_DistributeRotation_Rotation *)(this->Rotations).AllocatorInstance.Data;
  iVar2 = (this->Rotations).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&local_288,this->RotationEaseType,
                this->Weight,&this->WorkData);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530b60

UScriptStruct * __thiscall
FRigUnit_DistributeRotationForItemArray::GetExecuteContextStruct
          (FRigUnit_DistributeRotationForItemArray *this)

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

// RigVMExecute @ 14a53d580

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DistributeRotationForItemArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  ERigVMAnimEasingType EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  uchar *puVar7;
  ERigVMAnimEasingType *pEVar8;
  FRigVMMemoryHandle *pFVar9;
  float *pfVar10;
  FRigVMSlice *pFVar11;
  FRigUnit_DistributeRotation_WorkData *pFVar12;
  FControlRigExecuteContext *pFVar13;
  TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> local_48;
  TArrayView<FRigElementKey_const_,int> local_38 [2];
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
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
  if (iVar3 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
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
  if (iVar3 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar9[2].Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  EVar2 = *pEVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar10 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  fVar1 = *pfVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FRigUnit_DistributeRotation_WorkData *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar11->Offset + pFVar11->Index);
  local_48.DataPtr = *(FRigUnit_DistributeRotation_Rotation **)puVar7;
  local_48.ArrayNum = *(int *)(puVar7 + 8);
  if (local_48.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_38[0].DataPtr = *(FRigElementKey **)puVar6;
  iVar3 = *(int *)(puVar6 + 8);
  if (iVar3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_38[0].ArrayNum = iVar3;
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,local_38,&local_48,EVar2,fVar1,pFVar12);
  return;
}

// StaticExecute @ 14a56c9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_DistributeRotationForItemArray::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> *param_3,
          ERigVMAnimEasingType param_4,float param_5,FRigUnit_DistributeRotation_WorkData *param_6)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  ushort uVar4;
  FCachedRigElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  __m128d _Var18;
  __m128d _Var19;
  double dVar20;
  ForAnyElementType FVar21;
  ForAnyElementType FVar22;
  URigHierarchy *pUVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  <lambda_1> *p<Var28;
  TQuat<double> *pTVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  FRigUnit_DistributeRotation_Rotation *pFVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  FRigUnit_DistributeRotation_Rotation *pFVar37;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar38;
  uint uVar39;
  TArray<int,TSizedDefaultAllocator<32>_> *this;
  FRigUnit_DistributeRotation_WorkData *pFVar40;
  uint uVar41;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar59;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar60;
  double dVar70;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar61;
  double dVar71;
  undefined1 auVar68 [16];
  double dVar62;
  double dVar72;
  undefined1 auVar69 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  uint uVar84;
  undefined1 auVar82 [16];
  double adVar83 [2];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  __m128d _Var87;
  uint uVar88;
  uint uVar89;
  float fVar90;
  uint uVar91;
  float fVar92;
  uint uVar93;
  float fVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  __m128d _Var97;
  float fVar98;
  undefined1 auVar99 [16];
  double adVar100 [2];
  float fVar101;
  undefined1 auStackY_448 [32];
  longlong local_3f8;
  longlong local_3f0;
  longlong local_3e0;
  ForAnyElementType local_3d8;
  uint local_3d0;
  uint local_3cc;
  ForAnyElementType local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  FRigUnit_DistributeRotation_WorkData *local_3b0;
  TArrayView<FRigElementKey_const_,int> *local_3a8;
  uint local_3a0;
  float local_39c;
  TArray<int,TSizedDefaultAllocator<32>_> *local_398;
  TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> *local_390;
  FScriptContainerElement *local_388;
  double dStack_380;
  TArray<float,TSizedDefaultAllocator<32>_> *local_378;
  double dStack_370;
  URigHierarchy *local_368;
  FCachedRigElement local_360;
  double local_338 [2];
  double local_328 [2];
  <lambda_1> local_318;
  TArray<float,TSizedDefaultAllocator<32>_> local_308;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  TTransform<double> local_268;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  double local_1b8 [2];
  double local_1a8 [2];
  TQuat<double> local_198;
  TQuat<double> local_178;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_448;
  local_368 = param_1->Hierarchy;
  local_3b0 = param_6;
  if (local_368 == (URigHierarchy *)0x0) {
    return;
  }
  pTVar1 = &param_6->ItemRotationA;
  this = &param_6->ItemRotationB;
  this_00 = &param_6->ItemRotationT;
  local_3a8 = param_2;
  local_398 = this;
  local_390 = param_3;
  local_378 = this_00;
  if (((param_6->CachedItems).ArrayNum == param_2->ArrayNum) && (uVar30 = 0, 0 < param_2->ArrayNum))
  {
    local_3b8 = 0;
    local_3f8 = 0;
    do {
      uVar31 = 0;
      if ((int)uVar30 < (param_6->CachedItems).ArrayNum) {
        uVar31 = ~uVar30 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_388 = (param_6->CachedItems).AllocatorInstance.Data;
      uVar31 = 0;
      if ((int)uVar30 < local_3a8->ArrayNum) {
        uVar31 = ~uVar30 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      param_2 = local_3a8;
      if ((*(longlong *)(local_388 + local_3b8 + 4) !=
           *(longlong *)((longlong)&(local_3a8->DataPtr->Name).ComparisonIndex.Value + local_3f8))
         || (local_388[local_3b8] !=
             *(FScriptContainerElement *)(&local_3a8->DataPtr->Type + local_3f8))) {
        (param_6->CachedItems).ArrayNum = 0;
        if ((param_6->CachedItems).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)param_6,0,&(param_6->CachedItems).ArrayMax);
        }
        break;
      }
      local_3b8 = local_3b8 + 0x20;
      local_3f8 = local_3f8 + 0xc;
      uVar30 = uVar30 + 1;
    } while ((int)uVar30 < local_3a8->ArrayNum);
  }
  iVar25 = (param_6->CachedItems).ArrayNum;
  if ((0 < iVar25) && (iVar25 != param_2->ArrayNum)) {
    (param_6->CachedItems).ArrayNum = 0;
    if ((param_6->CachedItems).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)param_6,0,&(param_6->CachedItems).ArrayMax);
    }
    (param_6->ItemRotationA).ArrayNum = 0;
    if ((param_6->ItemRotationA).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar1->AllocatorInstance,0,&(param_6->ItemRotationA).ArrayMax);
    }
    (param_6->ItemRotationB).ArrayNum = 0;
    if ((param_6->ItemRotationB).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&this->AllocatorInstance,0,&(param_6->ItemRotationB).ArrayMax);
    }
    (param_6->ItemRotationT).ArrayNum = 0;
    if ((param_6->ItemRotationT).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&this_00->AllocatorInstance,0,&(param_6->ItemRotationT).ArrayMax);
    }
    (param_6->ItemLocalTransforms).ArrayNum = 0;
    if ((param_6->ItemLocalTransforms).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&(param_6->ItemLocalTransforms).AllocatorInstance,0,
                 &(param_6->ItemLocalTransforms).ArrayMax);
    }
  }
  pUVar23 = local_368;
  fVar101 = __real_3f800000;
  fVar98 = __real_322bcc77;
  uVar32 = 0;
  pFVar40 = param_6;
  if ((param_6->CachedItems).ArrayNum == 0) {
    iVar25 = param_2->ArrayNum;
    uVar44 = uVar32;
    if (iVar25 < 2) {
      return;
    }
    do {
      uVar31 = (uint)uVar32;
      uVar30 = 0;
      if ((int)uVar31 < iVar25) {
        uVar30 = ~uVar31 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_360.Key._0_4_ = local_360.Key._0_4_ & 0xffffff00;
      local_360.Key.Name.ComparisonIndex.Value = 0;
      local_360.Key.Name.Number = 0;
      local_360.Index = 0xffff;
      local_360.ContainerVersion = -1;
      local_360.Element = (FRigBaseElement *)0x0;
      FCachedRigElement::UpdateCache
                (&local_360,(FRigElementKey *)(&param_2->DataPtr->Type + uVar44),pUVar23);
      pFVar5 = (FCachedRigElement *)(param_6->CachedItems).AllocatorInstance.Data;
      if (((pFVar5 <= &local_360) && (&local_360 < pFVar5 + (param_6->CachedItems).ArrayMax)) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar25 = (param_6->CachedItems).ArrayNum;
      if (iVar25 == (param_6->CachedItems).ArrayMax) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,(ForAnyElementType *)param_6,&(param_6->CachedItems).ArrayMax);
      }
      uVar32 = (ulonglong)(uVar31 + 1);
      (param_6->CachedItems).ArrayNum = iVar25 + 1;
      pFVar6 = (param_6->CachedItems).AllocatorInstance.Data;
      pFVar2 = pFVar6 + (longlong)iVar25 * 0x20;
      *(ulonglong *)pFVar2 = CONCAT44(local_360.Key.Name.ComparisonIndex.Value,local_360.Key._0_4_);
      *(ulonglong *)(pFVar2 + 8) =
           CONCAT26(local_360._14_2_,CONCAT24(local_360.Index,local_360.Key.Name.Number));
      auVar78._4_4_ = local_360._20_4_;
      auVar78._0_4_ = local_360.ContainerVersion;
      auVar78._8_8_ = local_360.Element;
      *(undefined1 (*) [16])(pFVar6 + (longlong)iVar25 * 0x20 + 0x10) = auVar78;
      iVar25 = param_2->ArrayNum;
      uVar44 = uVar44 + 0xc;
    } while ((int)(uVar31 + 1) < iVar25);
    pTVar38 = &param_6->ItemRotationA;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (pTVar38,(param_6->CachedItems).ArrayNum,Default);
    this = &param_6->ItemRotationB;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (this,(param_6->CachedItems).ArrayNum,Default);
    this_00 = &param_6->ItemRotationT;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (this_00,(param_6->CachedItems).ArrayNum,Default);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&param_6->ItemLocalTransforms,(param_6->CachedItems).ArrayNum,Default);
    param_3 = local_390;
    if (local_390->ArrayNum < 2) {
      return;
    }
    pFVar33 = local_390->DataPtr;
    iVar25 = 0;
    pFVar37 = pFVar33 + local_390->ArrayNum;
    local_3c0 = 0;
    local_3d8.Data = (FScriptContainerElement *)0x0;
    local_3c8.Data = (FScriptContainerElement *)0x0;
    local_3d0 = 0;
    local_3cc = 0;
    for (; pFVar33 != pFVar37; pFVar33 = pFVar33 + 1) {
      local_3a0 = local_3d0;
      if (((local_3d8.Data <= (FScriptContainerElement *)&local_3a0) &&
          ((FScriptContainerElement *)&local_3a0 < local_3d8.Data + (longlong)(int)local_3cc * 4))
         && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_3d0 == local_3cc) {
        local_3d0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_3d8,(int *)&local_3cc);
      }
      uVar30 = local_3d0 + 1;
      *(uint *)(local_3d8.Data + (longlong)(int)local_3d0 * 4) = local_3a0;
      local_39c = pFVar33->Ratio;
      if (fVar101 <= pFVar33->Ratio) {
        local_39c = fVar101;
      }
      if (local_39c <= 0.0) {
        local_39c = 0.0;
      }
      local_3d0 = uVar30;
      if (((local_3c8.Data <= (FScriptContainerElement *)&local_39c) &&
          ((FScriptContainerElement *)&local_39c < local_3c8.Data + (longlong)local_3c0._4_4_ * 4))
         && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar26 = (int)local_3c0;
      if ((int)local_3c0 == local_3c0._4_4_) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_3c8,(int *)((longlong)&local_3c0 + 4));
      }
      iVar25 = iVar26 + 1;
      local_3c0 = CONCAT44(local_3c0._4_4_,iVar25);
      *(float *)(local_3c8.Data + (longlong)iVar26 * 4) = local_39c;
    }
    local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<float,TSizedDefaultAllocator<32>_>::CopyToEmpty<float,int>
              (&local_308,(float *)local_3c8.Data,iVar25,0);
    p<Var28 = `FRigUnit_DistributeRotationForItemArray::StaticExecute'::__l19::<lambda_1>::
              <lambda_1>(local_208,(<lambda_1> *)&local_308);
    local_318.RotationRatios.AllocatorInstance.Data =
         (p<Var28->RotationRatios).AllocatorInstance.Data;
    (p<Var28->RotationRatios).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_318.RotationRatios.ArrayNum = (p<Var28->RotationRatios).ArrayNum;
    local_318.RotationRatios.ArrayMax = (p<Var28->RotationRatios).ArrayMax;
    (p<Var28->RotationRatios).ArrayNum = 0;
    (p<Var28->RotationRatios).ArrayMax = 0;
    AlgoImpl::
    IntroSortInternal<int,int,_FRigUnit_DistributeRotationForItemArray::StaticExecute_::__l19::<lambda_1>,TLess<void>_>
              ((int *)local_3d8.Data,local_3d0,&local_318,(TLess<void>)param_4);
    pFVar2 = (p<Var28->RotationRatios).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    uVar30 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    iVar25 = (param_6->CachedItems).ArrayNum;
    uVar31 = 0;
    if (0 < iVar25) {
      local_3b8 = 0;
      local_3a8 = (TArrayView<FRigElementKey_const_,int> *)0x0;
      do {
        lVar34 = local_3b8;
        fVar81 = 0.0;
        if (1 < iVar25) {
          fVar81 = (float)(int)uVar31 / (float)(iVar25 + -1);
        }
        if (((int)local_3d0 < 1) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar36 = *(uint *)local_3d8.Data;
        uVar41 = 0;
        if ((int)uVar36 < (int)local_3c0) {
          uVar41 = ~uVar36 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(float *)(local_3c8.Data + (longlong)(int)uVar36 * 4) <= fVar81 &&
            fVar81 != *(float *)(local_3c8.Data + (longlong)(int)uVar36 * 4)) {
          uVar36 = 0;
          if ((int)(local_3d0 - 1) < (int)local_3d0) {
            uVar36 = ~(local_3d0 - 1) >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar36 = *(uint *)(local_3d8.Data + (longlong)(int)(local_3d0 - 1) * 4);
          uVar41 = 0;
          if ((int)uVar36 < (int)local_3c0) {
            uVar41 = ~uVar36 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(float *)(local_3c8.Data + (longlong)(int)uVar36 * 4) <= fVar81) {
            uVar36 = 0;
            if ((int)(local_3d0 - 1) < (int)local_3d0) {
              uVar36 = ~(local_3d0 - 1) >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar36 = *(uint *)(local_3d8.Data + (longlong)(int)(local_3d0 - 1) * 4);
            uVar27 = ~uVar31 >> 0x1f;
            uVar41 = 0;
            if ((int)uVar31 < this->ArrayNum) {
              uVar41 = uVar27;
            }
            if ((uVar41 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(uint *)((this->AllocatorInstance).Data + lVar34 * 4) = uVar36;
            uVar41 = 0;
            if ((int)uVar31 < pTVar38->ArrayNum) {
              uVar41 = uVar27;
            }
            if ((uVar41 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            goto LAB_14a56d480;
          }
          uVar36 = 1;
          if ((int)local_3d0 < 2) {
            local_3b8 = lVar34;
            pTVar38 = &pFVar40->ItemRotationA;
          }
          else {
            local_3f0 = 4;
            do {
              uVar41 = 0;
              if ((int)(uVar36 - 1) < (int)local_3d0) {
                uVar41 = -uVar36 >> 0x1f;
              }
              if ((uVar41 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar41 = *(uint *)(local_3d8.Data + local_3f0 + -4);
              lVar34 = (longlong)(int)uVar41;
              uVar27 = 0;
              if ((int)uVar36 < (int)local_3d0) {
                uVar27 = ~uVar36 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar39 = ~uVar41 >> 0x1f;
              uVar27 = *(uint *)(local_3d8.Data + local_3f0);
              lVar42 = (longlong)(int)uVar27;
              uVar84 = 0;
              if ((int)uVar41 < param_3->ArrayNum) {
                uVar84 = uVar39;
              }
              if ((uVar84 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar24)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              this = local_398;
              pTVar38 = pTVar1;
              if ((float)((uint)(param_3->DataPtr[lVar34].Ratio - fVar81) & uVar30) <= fVar98) {
                uVar27 = ~uVar31 >> 0x1f;
                uVar36 = 0;
                if ((int)uVar31 < local_398->ArrayNum) {
                  uVar36 = uVar27;
                }
                if ((uVar36 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                lVar34 = local_3b8;
                *(uint *)((this->AllocatorInstance).Data + local_3b8 * 4) = uVar41;
                uVar36 = 0;
                if ((int)uVar31 < (param_6->ItemRotationA).ArrayNum) {
                  uVar36 = uVar27;
                }
                if ((uVar36 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                *(uint *)((pTVar1->AllocatorInstance).Data + lVar34 * 4) = uVar41;
                uVar36 = 0;
                if ((int)uVar31 < local_378->ArrayNum) {
                  uVar36 = uVar27;
                }
LAB_14a56dc40:
                this_00 = local_378;
                if ((uVar36 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                *(undefined4 *)((this_00->AllocatorInstance).Data + lVar34 * 4) = 0;
                local_3b8 = lVar34;
                pFVar40 = local_3b0;
                break;
              }
              uVar35 = ~uVar27 >> 0x1f;
              uVar84 = 0;
              if ((int)uVar27 < param_3->ArrayNum) {
                uVar84 = uVar35;
              }
              if ((uVar84 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar24)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              this = local_398;
              if ((float)((uint)(param_3->DataPtr[lVar42].Ratio - fVar81) & uVar30) <= fVar98) {
                uVar41 = ~uVar31 >> 0x1f;
                uVar36 = 0;
                if ((int)uVar31 < local_398->ArrayNum) {
                  uVar36 = uVar41;
                }
                if ((uVar36 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                lVar34 = local_3b8;
                *(uint *)((this->AllocatorInstance).Data + local_3b8 * 4) = uVar27;
                uVar36 = 0;
                if ((int)uVar31 < (param_6->ItemRotationA).ArrayNum) {
                  uVar36 = uVar41;
                }
                if ((uVar36 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                *(uint *)((pTVar1->AllocatorInstance).Data + lVar34 * 4) = uVar27;
                uVar36 = 0;
                if ((int)uVar31 < local_378->ArrayNum) {
                  uVar36 = uVar41;
                }
                goto LAB_14a56dc40;
              }
              uVar84 = 0;
              if ((int)uVar27 < param_3->ArrayNum) {
                uVar84 = uVar35;
              }
              if ((uVar84 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar24)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (fVar81 < param_3->DataPtr[lVar42].Ratio) {
                uVar36 = 0;
                if ((int)uVar27 < (int)local_3c0) {
                  uVar36 = uVar35;
                }
                if (uVar36 == 0) {
                  bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar24) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                fVar90 = *(float *)(local_3c8.Data + lVar42 * 4);
                uVar36 = 0;
                if ((int)uVar41 < (int)local_3c0) {
                  uVar36 = uVar39;
                }
                if ((uVar36 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                this = local_398;
                uVar36 = ~uVar31 >> 0x1f;
                if (fVar98 < (float)((uint)(*(float *)(local_3c8.Data + lVar34 * 4) - fVar90) &
                                    uVar30)) {
                  uVar84 = 0;
                  if ((int)uVar31 < (param_6->ItemRotationA).ArrayNum) {
                    uVar84 = uVar36;
                  }
                  if ((uVar84 == 0) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  *(uint *)((pTVar1->AllocatorInstance).Data + local_3b8 * 4) = uVar41;
                  uVar84 = 0;
                  if ((int)uVar31 < local_398->ArrayNum) {
                    uVar84 = uVar36;
                  }
                  if ((uVar84 == 0) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  *(uint *)((local_398->AllocatorInstance).Data + local_3b8 * 4) = uVar27;
                  uVar84 = 0;
                  if ((int)uVar41 < (int)local_3c0) {
                    uVar84 = uVar39;
                  }
                  if (uVar84 == 0) {
                    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar24) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                  }
                  FVar21.Data = local_3c8.Data;
                  uVar84 = 0;
                  if ((int)uVar41 < (int)local_3c0) {
                    uVar84 = uVar39;
                  }
                  iVar25 = (int)local_3c0;
                  if (uVar84 == 0) {
                    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar24) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    iVar25 = (int)local_3c0;
                  }
                  FVar22.Data = local_3c8.Data;
                  uVar41 = 0;
                  if ((int)uVar27 < iVar25) {
                    uVar41 = uVar35;
                  }
                  if ((uVar41 == 0) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  this_00 = local_378;
                  fVar90 = *(float *)(FVar21.Data + lVar34 * 4);
                  fVar92 = *(float *)(local_3c8.Data + lVar42 * 4);
                  fVar94 = *(float *)(FVar22.Data + lVar34 * 4);
                  uVar41 = 0;
                  if ((int)uVar31 < local_378->ArrayNum) {
                    uVar41 = uVar36;
                  }
                  if ((uVar41 == 0) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar34 = local_3b8;
                  *(float *)((this_00->AllocatorInstance).Data + local_3b8 * 4) =
                       (fVar81 - fVar90) / (fVar92 - fVar94);
                  uVar41 = 0;
                  if ((int)uVar31 < this_00->ArrayNum) {
                    uVar41 = uVar36;
                  }
                  if ((uVar41 == 0) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  fVar81 = FRigVMMathLibrary::EaseFloat
                                     (*(float *)((this_00->AllocatorInstance).Data + lVar34 * 4),
                                      param_4);
                  uVar41 = 0;
                  if ((int)uVar31 < this_00->ArrayNum) {
                    uVar41 = uVar36;
                  }
                  if ((uVar41 == 0) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  *(float *)((this_00->AllocatorInstance).Data + lVar34 * 4) = fVar81;
                  local_3b8 = lVar34;
                  this = local_398;
                  pFVar40 = local_3b0;
                }
                else {
                  uVar27 = 0;
                  if ((int)uVar31 < local_398->ArrayNum) {
                    uVar27 = uVar36;
                  }
                  if ((uVar27 == 0) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar34 = local_3b8;
                  *(uint *)((this->AllocatorInstance).Data + local_3b8 * 4) = uVar41;
                  uVar27 = 0;
                  if ((int)uVar31 < (param_6->ItemRotationA).ArrayNum) {
                    uVar27 = uVar36;
                  }
                  if ((uVar27 == 0) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  this_00 = local_378;
                  *(uint *)((pTVar1->AllocatorInstance).Data + lVar34 * 4) = uVar41;
                  uVar41 = 0;
                  if ((int)uVar31 < local_378->ArrayNum) {
                    uVar41 = uVar36;
                  }
                  if ((uVar41 == 0) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  *(undefined4 *)((this_00->AllocatorInstance).Data + lVar34 * 4) = 0;
                  local_3b8 = lVar34;
                  pFVar40 = local_3b0;
                }
                break;
              }
              uVar36 = uVar36 + 1;
              local_3f0 = local_3f0 + 4;
              this = local_398;
              pFVar40 = local_3b0;
              this_00 = local_378;
            } while ((int)uVar36 < (int)local_3d0);
          }
        }
        else {
          if (((int)local_3d0 < 1) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar36 = *(uint *)local_3d8.Data;
          uVar27 = ~uVar31 >> 0x1f;
          uVar41 = 0;
          if ((int)uVar31 < this->ArrayNum) {
            uVar41 = uVar27;
          }
          if ((uVar41 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(uint *)((this->AllocatorInstance).Data + (longlong)&local_3a8->DataPtr) = uVar36;
          uVar41 = 0;
          if ((int)uVar31 < pTVar38->ArrayNum) {
            uVar41 = uVar27;
          }
          if ((uVar41 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
LAB_14a56d480:
          *(uint *)((pTVar38->AllocatorInstance).Data + lVar34 * 4) = uVar36;
          uVar36 = 0;
          if ((int)uVar31 < this_00->ArrayNum) {
            uVar36 = uVar27;
          }
          if ((uVar36 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined4 *)((this_00->AllocatorInstance).Data + lVar34 * 4) = 0;
          local_3b8 = lVar34;
        }
        local_3a8 = (TArrayView<FRigElementKey_const_,int> *)((longlong)&local_3a8->DataPtr + 4);
        local_3b8 = local_3b8 + 1;
        iVar25 = (pFVar40->CachedItems).ArrayNum;
        uVar31 = uVar31 + 1;
      } while ((int)uVar31 < iVar25);
    }
    if (local_308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.AllocatorInstance.Data);
    }
    if (local_3d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data);
    }
    if (local_3c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data);
    }
  }
  if (((((1 < (pFVar40->CachedItems).ArrayNum) && (param_3->ArrayNum != 0)) &&
       (pFVar2 = (pFVar40->CachedItems).AllocatorInstance.Data, *(short *)(pFVar2 + 0xc) != -1)) &&
      ((bVar24 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar2 + 4)), pUVar23 = local_368,
       bVar24 && (*(longlong *)(pFVar2 + 4) != 0)))) && (*pFVar2 != (FScriptContainerElement)0x0)) {
    iVar25 = (pFVar40->CachedItems).ArrayNum;
    uVar30 = 0;
    if (0 < iVar25) {
      lVar34 = 0;
      lVar42 = 0;
      local_3b0 = (FRigUnit_DistributeRotation_WorkData *)0x0;
      do {
        uVar36 = ~uVar30 >> 0x1f;
        uVar31 = 0;
        if ((int)uVar30 < iVar25) {
          uVar31 = uVar36;
        }
        if ((uVar31 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_388 = (pFVar40->CachedItems).AllocatorInstance.Data;
        if ((((*(short *)(local_388 + lVar42 + 0xc) == -1) ||
             (bVar24 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(local_388 + lVar42 + 4)),
             !bVar24)) || (*(longlong *)(local_388 + lVar42 + 4) == 0)) ||
           (local_388[lVar42] == (FScriptContainerElement)0x0)) {
          uVar31 = 0;
          if ((int)uVar30 < (pFVar40->ItemLocalTransforms).ArrayNum) {
            uVar31 = uVar36;
          }
          uVar10 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar11 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar12 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar13 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar14 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar15 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar16 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar17 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
          _Var87.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          _Var97.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          _Var18.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          _Var19.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        }
        else {
          uVar31 = 0;
          if ((int)uVar30 < (pFVar40->CachedItems).ArrayNum) {
            uVar31 = uVar36;
          }
          if ((uVar31 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar31 = 0xffffffff;
          uVar4 = *(ushort *)((pFVar40->CachedItems).AllocatorInstance.Data + lVar42 + 0xc);
          if (uVar4 != 0xffff) {
            uVar31 = (uint)uVar4;
          }
          URigHierarchy::GetLocalTransformByIndex(pUVar23,&local_158,uVar31,false);
          uVar10 = local_158.Translation.XY.m128d_f64[0]._0_4_;
          uVar11 = local_158.Translation.XY.m128d_f64[0]._4_4_;
          uVar12 = local_158.Translation.XY.m128d_f64[1]._0_4_;
          uVar13 = local_158.Translation.XY.m128d_f64[1]._4_4_;
          uVar14 = local_158.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar15 = local_158.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar16 = local_158.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar17 = local_158.Scale3D.ZW.m128d_f64[1]._4_4_;
          _Var87.m128d_f64 = local_158.Rotation.XY.m128d_f64;
          _Var97.m128d_f64 = local_158.Rotation.ZW.m128d_f64;
          _Var18.m128d_f64 = local_158.Translation.ZW.m128d_f64;
          _Var19.m128d_f64 = local_158.Scale3D.XY.m128d_f64;
          uVar31 = 0;
          if ((int)uVar30 < (pFVar40->ItemLocalTransforms).ArrayNum) {
            uVar31 = uVar36;
          }
        }
        if ((uVar31 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (pFVar40->ItemLocalTransforms).AllocatorInstance.Data;
        uVar30 = uVar30 + 1;
        local_3b0 = (FRigUnit_DistributeRotation_WorkData *)((longlong)local_3b0 + 1);
        lVar42 = lVar42 + 0x20;
        *(double (*) [2])(pFVar6 + lVar34) = _Var87.m128d_f64;
        *(double (*) [2])(pFVar6 + lVar34 + 0x10) = _Var97.m128d_f64;
        pFVar2 = pFVar6 + lVar34 + 0x20;
        *(undefined4 *)pFVar2 = uVar10;
        *(undefined4 *)(pFVar2 + 4) = uVar11;
        *(undefined4 *)(pFVar2 + 8) = uVar12;
        *(undefined4 *)(pFVar2 + 0xc) = uVar13;
        *(double (*) [2])(pFVar6 + lVar34 + 0x30) = _Var18.m128d_f64;
        *(double (*) [2])(pFVar6 + lVar34 + 0x40) = _Var19.m128d_f64;
        pFVar6 = pFVar6 + lVar34 + 0x50;
        *(undefined4 *)pFVar6 = uVar14;
        *(undefined4 *)(pFVar6 + 4) = uVar15;
        *(undefined4 *)(pFVar6 + 8) = uVar16;
        *(undefined4 *)(pFVar6 + 0xc) = uVar17;
        lVar34 = lVar34 + 0x60;
        iVar25 = (pFVar40->CachedItems).ArrayNum;
      } while ((int)uVar30 < iVar25);
      this_00 = &pFVar40->ItemRotationT;
      this = &pFVar40->ItemRotationB;
      param_3 = local_390;
      fVar101 = __real_3f800000;
      fVar98 = __real_322bcc77;
    }
    dVar20 = __real_3e45798ee0000000;
    uVar30 = 0;
    if (0 < iVar25) {
      fVar81 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar92 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar94 = GlobalVectorConstants::Float0001.m128_f32[3];
      lVar34 = 0;
      local_3e0 = 0;
      local_3a8 = (TArrayView<FRigElementKey_const_,int> *)0x0;
      local_3b0 = (FRigUnit_DistributeRotation_WorkData *)0x0;
      _Var87.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
      _Var97.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
      do {
        iVar25 = param_3->ArrayNum;
        uVar36 = ~uVar30 >> 0x1f;
        uVar31 = 0;
        if ((int)uVar30 < (pFVar40->ItemRotationA).ArrayNum) {
          uVar31 = uVar36;
        }
        if (uVar31 == 0) {
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar24) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar81 = GlobalVectorConstants::Float0001.m128_f32[0];
          fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
          fVar92 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar94 = GlobalVectorConstants::Float0001.m128_f32[3];
          _Var87 = GlobalVectorConstants::DoubleOne.XY;
          _Var97 = GlobalVectorConstants::DoubleOne.ZW;
        }
        if (*(int *)((pFVar40->ItemRotationA).AllocatorInstance.Data + (longlong)local_3b0) < iVar25
           ) {
          uVar31 = 0;
          if ((int)uVar30 < this->ArrayNum) {
            uVar31 = uVar36;
          }
          if (uVar31 == 0) {
            bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar24) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar81 = GlobalVectorConstants::Float0001.m128_f32[0];
            fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
            fVar92 = GlobalVectorConstants::Float0001.m128_f32[2];
            fVar94 = GlobalVectorConstants::Float0001.m128_f32[3];
            _Var87 = GlobalVectorConstants::DoubleOne.XY;
            _Var97 = GlobalVectorConstants::DoubleOne.ZW;
          }
          if (*(int *)((this->AllocatorInstance).Data + lVar34 * 4) < param_3->ArrayNum) {
            uVar31 = 0;
            if ((int)uVar30 < (pFVar40->ItemRotationA).ArrayNum) {
              uVar31 = uVar36;
            }
            if (uVar31 == 0) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar24) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar81 = GlobalVectorConstants::Float0001.m128_f32[0];
              fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
              fVar92 = GlobalVectorConstants::Float0001.m128_f32[2];
              fVar94 = GlobalVectorConstants::Float0001.m128_f32[3];
              _Var87 = GlobalVectorConstants::DoubleOne.XY;
              _Var97 = GlobalVectorConstants::DoubleOne.ZW;
            }
            uVar31 = *(uint *)((pFVar40->ItemRotationA).AllocatorInstance.Data + lVar34 * 4);
            uVar41 = 0;
            if ((int)uVar31 < param_3->ArrayNum) {
              uVar41 = ~uVar31 >> 0x1f;
            }
            if (uVar41 == 0) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar24) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar81 = GlobalVectorConstants::Float0001.m128_f32[0];
              fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
              fVar92 = GlobalVectorConstants::Float0001.m128_f32[2];
              fVar94 = GlobalVectorConstants::Float0001.m128_f32[3];
              _Var87 = GlobalVectorConstants::DoubleOne.XY;
              _Var97 = GlobalVectorConstants::DoubleOne.ZW;
            }
            local_2c0 = dVar20;
            pFVar33 = param_3->DataPtr + (int)uVar31;
            dVar45 = (pFVar33->Rotation).X;
            dVar59 = (pFVar33->Rotation).Y;
            pdVar3 = &param_3->DataPtr[(int)uVar31].Rotation.Z;
            dVar61 = *pdVar3;
            dVar71 = pdVar3[1];
            uVar31 = 0;
            if ((int)uVar30 < this->ArrayNum) {
              uVar31 = uVar36;
            }
            dVar60 = dVar61 * dVar61 + dVar45 * dVar45;
            dVar70 = dVar71 * dVar71 + dVar59 * dVar59;
            auVar79._8_4_ = SUB84(dVar70,0);
            auVar79._0_8_ = dVar60;
            auVar79._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
            auVar46._0_8_ = auVar79._8_8_ + dVar60;
            auVar46._8_8_ = dVar60 + dVar70;
            auVar78 = sqrtpd(in_XMM3,auVar46);
            uVar43 = -(ulonglong)(dVar20 <= auVar46._0_8_);
            uVar44 = -(ulonglong)(dVar20 <= auVar46._8_8_);
            uVar41 = (uint)(uVar43 >> 0x20);
            uVar27 = (uint)(uVar44 >> 0x20);
            auVar79 = divpd((undefined1  [16])_Var87.m128d_f64,auVar78);
            auVar63._0_4_ = ~(uint)uVar43 & SUB84((double)fVar81,0);
            auVar63._4_4_ = ~uVar41 & (uint)((ulonglong)(double)fVar81 >> 0x20);
            auVar63._8_4_ = ~(uint)uVar44 & SUB84((double)fVar90,0);
            auVar63._12_4_ = ~uVar27 & (uint)((ulonglong)(double)fVar90 >> 0x20);
            auVar80._0_8_ = uVar43 & (ulonglong)(auVar79._0_8_ * dVar45);
            uVar32 = uVar44 & (ulonglong)(auVar79._8_8_ * dVar59);
            auVar80._8_4_ = (undefined4)uVar32;
            auVar80._12_4_ = (undefined4)(uVar32 >> 0x20);
            local_338 = (double  [2])(auVar80 | auVar63);
            auVar78 = divpd((undefined1  [16])_Var97.m128d_f64,auVar78);
            auVar73._0_4_ = ~(uint)uVar43 & SUB84((double)fVar92,0);
            auVar73._4_4_ = ~uVar41 & (uint)((ulonglong)(double)fVar92 >> 0x20);
            auVar73._8_4_ = ~(uint)uVar44 & SUB84((double)fVar94,0);
            auVar73._12_4_ = ~uVar27 & (uint)((ulonglong)(double)fVar94 >> 0x20);
            auVar64._0_8_ = (ulonglong)(auVar78._0_8_ * dVar61) & uVar43;
            uVar44 = (ulonglong)(auVar78._8_8_ * dVar71) & uVar44;
            auVar64._8_4_ = (undefined4)uVar44;
            auVar64._12_4_ = (undefined4)(uVar44 >> 0x20);
            auVar73 = auVar73 | auVar64;
            local_328 = (double  [2])auVar73;
            if (uVar31 == 0) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar24) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar81 = GlobalVectorConstants::Float0001.m128_f32[0];
              fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
              fVar92 = GlobalVectorConstants::Float0001.m128_f32[2];
              fVar94 = GlobalVectorConstants::Float0001.m128_f32[3];
              _Var87 = GlobalVectorConstants::DoubleOne.XY;
              _Var97 = GlobalVectorConstants::DoubleOne.ZW;
            }
            uVar31 = *(uint *)((this->AllocatorInstance).Data + lVar34 * 4);
            uVar41 = 0;
            if ((int)uVar31 < param_3->ArrayNum) {
              uVar41 = ~uVar31 >> 0x1f;
            }
            if (uVar41 == 0) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar24) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar81 = GlobalVectorConstants::Float0001.m128_f32[0];
              fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
              fVar92 = GlobalVectorConstants::Float0001.m128_f32[2];
              fVar94 = GlobalVectorConstants::Float0001.m128_f32[3];
              _Var87 = GlobalVectorConstants::DoubleOne.XY;
              _Var97 = GlobalVectorConstants::DoubleOne.ZW;
            }
            local_2b8 = dVar20;
            pFVar33 = param_3->DataPtr + (int)uVar31;
            dVar45 = (pFVar33->Rotation).X;
            dVar59 = (pFVar33->Rotation).Y;
            pdVar3 = &param_3->DataPtr[(int)uVar31].Rotation.Z;
            dVar61 = *pdVar3;
            dVar71 = pdVar3[1];
            uVar31 = 0;
            if ((int)uVar30 < (pFVar40->ItemRotationA).ArrayNum) {
              uVar31 = uVar36;
            }
            dVar60 = dVar61 * dVar61 + dVar45 * dVar45;
            dVar70 = dVar71 * dVar71 + dVar59 * dVar59;
            auVar47._8_4_ = SUB84(dVar70,0);
            auVar47._0_8_ = dVar60;
            auVar47._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
            auVar48._0_8_ = auVar47._8_8_ + dVar60;
            auVar48._8_8_ = dVar60 + dVar70;
            auVar78 = sqrtpd(auVar73,auVar48);
            uVar44 = -(ulonglong)(dVar20 <= auVar48._0_8_);
            uVar43 = -(ulonglong)(dVar20 <= auVar48._8_8_);
            uVar41 = (uint)(uVar44 >> 0x20);
            uVar27 = (uint)(uVar43 >> 0x20);
            auVar79 = divpd((undefined1  [16])_Var87.m128d_f64,auVar78);
            auVar78 = divpd((undefined1  [16])_Var97.m128d_f64,auVar78);
            auVar65._0_4_ = ~(uint)uVar44 & SUB84((double)fVar81,0);
            auVar65._4_4_ = ~uVar41 & (uint)((ulonglong)(double)fVar81 >> 0x20);
            auVar65._8_4_ = ~(uint)uVar43 & SUB84((double)fVar90,0);
            auVar65._12_4_ = ~uVar27 & (uint)((ulonglong)(double)fVar90 >> 0x20);
            auVar85._0_8_ = uVar44 & (ulonglong)(auVar79._0_8_ * dVar45);
            uVar32 = uVar43 & (ulonglong)(auVar79._8_8_ * dVar59);
            auVar85._8_4_ = (undefined4)uVar32;
            auVar85._12_4_ = (undefined4)(uVar32 >> 0x20);
            local_2f8 = auVar85 | auVar65;
            auVar95._0_8_ = (ulonglong)(auVar78._0_8_ * dVar61) & uVar44;
            uVar32 = (ulonglong)(auVar78._8_8_ * dVar71) & uVar43;
            auVar95._8_4_ = (undefined4)uVar32;
            auVar95._12_4_ = (undefined4)(uVar32 >> 0x20);
            auVar66._0_4_ = ~(uint)uVar44 & SUB84((double)fVar92,0);
            auVar66._4_4_ = ~uVar41 & (uint)((ulonglong)(double)fVar92 >> 0x20);
            auVar66._8_4_ = ~(uint)uVar43 & SUB84((double)fVar94,0);
            auVar66._12_4_ = ~uVar27 & (uint)((ulonglong)(double)fVar94 >> 0x20);
            local_2e8 = auVar66 | auVar95;
            if ((uVar31 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_390 = (TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> *)
                        (pFVar40->ItemRotationA).AllocatorInstance.Data;
            uVar31 = 0;
            if ((int)uVar30 < this->ArrayNum) {
              uVar31 = uVar36;
            }
            if ((uVar31 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(int *)((longlong)local_390 + lVar34 * 4) !=
                *(int *)((this->AllocatorInstance).Data + lVar34 * 4)) {
              uVar31 = 0;
              if ((int)uVar30 < this_00->ArrayNum) {
                uVar31 = uVar36;
              }
              if ((uVar31 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (*(float *)((this_00->AllocatorInstance).Data + lVar34 * 4) <= fVar101) {
                uVar31 = 0;
                if ((int)uVar30 < this_00->ArrayNum) {
                  uVar31 = uVar36;
                }
                if ((uVar31 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                if (fVar98 < *(float *)((this_00->AllocatorInstance).Data + lVar34 * 4)) {
                  uVar31 = 0;
                  if ((int)uVar30 < this_00->ArrayNum) {
                    uVar31 = uVar36;
                  }
                  if ((uVar31 == 0) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pTVar29 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                      (&local_198,(TQuat<double> *)local_338,
                                       (TQuat<double> *)local_2f8,
                                       (double)*(float *)((this_00->AllocatorInstance).Data +
                                                         lVar34 * 4));
                  dVar45 = pTVar29->X;
                  dVar59 = pTVar29->Y;
                  dVar61 = pTVar29->Z;
                  dVar71 = pTVar29->W;
                  local_2d8 = dVar20;
                  local_2d0 = dVar20;
                  auVar67._0_8_ = dVar61 * dVar61 + dVar45 * dVar45;
                  auVar67._8_8_ = dVar71 * dVar71 + dVar59 * dVar59;
                  auVar49._8_4_ = SUB84(auVar67._8_8_,0);
                  auVar49._0_8_ = auVar67._0_8_;
                  auVar49._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
                  auVar50._0_8_ = auVar49._8_8_ + auVar67._0_8_;
                  auVar50._8_8_ = auVar67._0_8_ + auVar67._8_8_;
                  auVar78 = sqrtpd(auVar67,auVar50);
                  uVar44 = -(ulonglong)(dVar20 <= auVar50._0_8_);
                  uVar43 = -(ulonglong)(dVar20 <= auVar50._8_8_);
                  auVar79 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  auVar78);
                  auVar78 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  auVar78);
                  uVar88 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
                  uVar89 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
                  uVar91 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                  uVar93 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
                  uVar31 = (uint)(uVar44 >> 0x20);
                  uVar41 = (uint)(uVar43 >> 0x20);
                  local_1f8._0_8_ = uVar44 & (ulonglong)(auVar79._0_8_ * dVar45);
                  uVar32 = uVar43 & (ulonglong)(auVar79._8_8_ * dVar59);
                  local_1f8._8_4_ = (undefined4)uVar32;
                  local_1f8._12_4_ = (undefined4)(uVar32 >> 0x20);
                  uVar27 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
                  auVar51._0_4_ = ~(uint)uVar44 & uVar27;
                  uVar84 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
                  auVar51._4_4_ = ~uVar31 & uVar84;
                  uVar39 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                  auVar51._8_4_ = ~(uint)uVar43 & uVar39;
                  uVar35 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
                  auVar51._12_4_ = ~uVar41 & uVar35;
                  local_1f8 = local_1f8 | auVar51;
                  dVar45 = local_1f8._0_8_;
                  local_1e8._0_8_ = (ulonglong)(auVar78._0_8_ * dVar61) & uVar44;
                  uVar32 = (ulonglong)(auVar78._8_8_ * dVar71) & uVar43;
                  local_1e8._8_4_ = (undefined4)uVar32;
                  local_1e8._12_4_ = (undefined4)(uVar32 >> 0x20);
                  auVar74._0_4_ = ~(uint)uVar44 & uVar88;
                  auVar74._4_4_ = ~uVar31 & uVar89;
                  auVar74._8_4_ = ~(uint)uVar43 & uVar91;
                  auVar74._12_4_ = ~uVar41 & uVar93;
                  local_1e8 = local_1e8 | auVar74;
                  dVar59 = local_1f8._8_8_;
                  dVar61 = local_1e8._0_8_;
                  dVar71 = local_1e8._8_8_;
                  auVar68._0_8_ = dVar61 * dVar61 + dVar45 * dVar45;
                  auVar68._8_8_ = dVar71 * dVar71 + dVar59 * dVar59;
                  auVar52._8_4_ = SUB84(auVar68._8_8_,0);
                  auVar52._0_8_ = auVar68._0_8_;
                  auVar52._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
                  auVar53._0_8_ = auVar52._8_8_ + auVar68._0_8_;
                  auVar53._8_8_ = auVar68._0_8_ + auVar68._8_8_;
                  auVar78 = sqrtpd(auVar68,auVar53);
                  uVar44 = -(ulonglong)(dVar20 <= auVar53._0_8_);
                  uVar43 = -(ulonglong)(dVar20 <= auVar53._8_8_);
                  auVar79 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                  auVar78);
                  auVar78 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                  auVar78);
                  uVar31 = (uint)(uVar44 >> 0x20);
                  uVar41 = (uint)(uVar43 >> 0x20);
                  auVar96._0_8_ = uVar44 & (ulonglong)(auVar79._0_8_ * dVar45);
                  uVar32 = uVar43 & (ulonglong)(auVar79._8_8_ * dVar59);
                  auVar96._8_4_ = (undefined4)uVar32;
                  auVar96._12_4_ = (undefined4)(uVar32 >> 0x20);
                  auVar86._0_8_ = (ulonglong)(auVar78._0_8_ * dVar61) & uVar44;
                  uVar32 = (ulonglong)(auVar78._8_8_ * dVar71) & uVar43;
                  auVar86._8_4_ = (undefined4)uVar32;
                  auVar86._12_4_ = (undefined4)(uVar32 >> 0x20);
                  auVar54._0_4_ = ~(uint)uVar44 & uVar27;
                  auVar54._4_4_ = ~uVar31 & uVar84;
                  auVar54._8_4_ = ~(uint)uVar43 & uVar39;
                  auVar54._12_4_ = ~uVar41 & uVar35;
                  local_338 = (double  [2])(auVar96 | auVar54);
                  auVar75._0_4_ = ~(uint)uVar44 & uVar88;
                  auVar75._4_4_ = ~uVar31 & uVar89;
                  auVar75._8_4_ = ~(uint)uVar43 & uVar91;
                  auVar75._12_4_ = ~uVar41 & uVar93;
                  local_328 = (double  [2])(auVar86 | auVar75);
                  local_1d8 = (undefined1  [16])local_338;
                  local_1c8 = (undefined1  [16])local_328;
                }
              }
              else {
                local_338[0] = (double)local_2f8._0_8_;
                local_338[1] = (double)local_2f8._8_8_;
                local_328[0] = (double)local_2e8._0_8_;
                local_328[1] = (double)local_2e8._8_8_;
              }
            }
            uVar31 = 0;
            if ((int)uVar30 < (pFVar40->ItemLocalTransforms).ArrayNum) {
              uVar31 = uVar36;
            }
            if ((uVar31 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar101 = __real_3f800000;
            pFVar2 = (pFVar40->ItemLocalTransforms).AllocatorInstance.Data;
            local_278 = *(undefined1 (*) [16])(pFVar2 + (longlong)local_3a8 + 0x10);
            local_288 = *(undefined1 (*) [16])(pFVar2 + (longlong)local_3a8);
            local_388 = *(FScriptContainerElement **)(pFVar2 + (longlong)local_3a8 + 0x40);
            dStack_380 = *(double *)(pFVar2 + (longlong)local_3a8 + 0x40 + 8);
            dVar60 = *(double *)(pFVar2 + (longlong)local_3a8 + 0x20);
            dVar70 = *(double *)(pFVar2 + (longlong)local_3a8 + 0x20 + 8);
            dVar8 = *(double *)(pFVar2 + (longlong)local_3a8 + 0x30);
            dVar9 = *(double *)(pFVar2 + (longlong)local_3a8 + 0x30 + 8);
            local_378 = *(TArray<float,TSizedDefaultAllocator<32>_> **)
                         (pFVar2 + (longlong)local_3a8 + 0x50);
            dStack_370 = *(double *)(pFVar2 + (longlong)local_3a8 + 0x50 + 8);
            dVar61 = local_288._0_8_;
            auVar76._8_4_ = local_288._0_4_;
            auVar76._0_8_ = dVar61;
            auVar76._12_4_ = local_288._4_4_;
            dVar45 = local_278._0_8_;
            dVar59 = local_278._8_8_;
            dVar71 = local_288._8_8_;
            auVar55._8_4_ = local_278._0_4_;
            auVar55._0_8_ = dVar45;
            auVar55._12_4_ = local_278._4_4_;
            auVar77._0_8_ =
                 dVar61 * local_328[1] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 local_338[0] * dVar59 +
                 local_328[0] * dVar71 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar45 * local_338[1] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            auVar77._8_8_ =
                 auVar76._8_8_ * local_328[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 local_338[1] * dVar59 +
                 local_328[1] * dVar71 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar55._8_8_ * local_338[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            fVar98 = param_5;
            if (__real_3f800000 <= param_5) {
              fVar98 = __real_3f800000;
            }
            if (fVar98 <= __real_00000000) {
              fVar98 = __real_00000000;
            }
            local_298 = dVar61 * local_338[1] *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                        local_328[0] * dVar59 +
                        local_338[0] * dVar71 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                        dVar45 * local_328[1] *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dStack_290 = dVar61 * local_338[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                         local_328[1] * dVar59 +
                         local_338[1] * dVar71 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                         dVar45 * local_328[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            local_2a8 = auVar77;
            pTVar29 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                (&local_178,(TQuat<double> *)local_288,(TQuat<double> *)local_2a8,
                                 (double)fVar98);
            local_2c8 = dVar20;
            dVar45 = pTVar29->X;
            dVar59 = pTVar29->Y;
            dVar61 = pTVar29->Z;
            dVar71 = pTVar29->W;
            dVar62 = dVar61 * dVar61 + dVar45 * dVar45;
            dVar72 = dVar71 * dVar71 + dVar59 * dVar59;
            auVar56._8_4_ = SUB84(dVar72,0);
            auVar56._0_8_ = dVar62;
            auVar56._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
            auVar57._0_8_ = auVar56._8_8_ + dVar62;
            auVar57._8_8_ = dVar62 + dVar72;
            auVar78 = sqrtpd(auVar77,auVar57);
            uVar43 = -(ulonglong)(dVar20 <= auVar57._0_8_);
            uVar44 = -(ulonglong)(dVar20 <= auVar57._8_8_);
            in_XMM3._8_8_ = uVar44;
            in_XMM3._0_8_ = uVar43;
            auVar79 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar78)
            ;
            uVar41 = (uint)(uVar43 >> 0x20);
            auVar82._0_8_ = uVar43 & (ulonglong)(auVar79._0_8_ * dVar45);
            uVar32 = uVar44 & (ulonglong)(auVar79._8_8_ * dVar59);
            auVar82._8_4_ = (undefined4)uVar32;
            uVar27 = (uint)(uVar44 >> 0x20);
            auVar82._12_4_ = (undefined4)(uVar32 >> 0x20);
            fVar81 = GlobalVectorConstants::Float0001.m128_f32[0];
            fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
            fVar92 = GlobalVectorConstants::Float0001.m128_f32[2];
            fVar94 = GlobalVectorConstants::Float0001.m128_f32[3];
            uVar31 = 0;
            if ((int)uVar30 < (pFVar40->CachedItems).ArrayNum) {
              uVar31 = uVar36;
            }
            auVar69._0_4_ = ~(uint)uVar43 & SUB84((double)fVar81,0);
            auVar69._4_4_ = ~uVar41 & (uint)((ulonglong)(double)fVar81 >> 0x20);
            auVar69._8_4_ = ~(uint)uVar44 & SUB84((double)fVar90,0);
            auVar69._12_4_ = ~uVar27 & (uint)((ulonglong)(double)fVar90 >> 0x20);
            adVar83 = (double  [2])(auVar82 | auVar69);
            auVar99._0_4_ = ~(uint)uVar43 & SUB84((double)fVar92,0);
            auVar99._4_4_ = ~uVar41 & (uint)((ulonglong)(double)fVar92 >> 0x20);
            auVar99._8_4_ = ~(uint)uVar44 & SUB84((double)fVar94,0);
            auVar99._12_4_ = ~uVar27 & (uint)((ulonglong)(double)fVar94 >> 0x20);
            auVar78 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar78)
            ;
            auVar58._0_8_ = (ulonglong)(auVar78._0_8_ * dVar61) & uVar43;
            uVar44 = (ulonglong)(auVar78._8_8_ * dVar71) & uVar44;
            auVar58._8_4_ = (undefined4)uVar44;
            auVar58._12_4_ = (undefined4)(uVar44 >> 0x20);
            adVar100 = (double  [2])(auVar99 | auVar58);
            local_338 = adVar83;
            local_328 = adVar100;
            local_1b8 = adVar83;
            local_1a8 = adVar100;
            if (uVar31 == 0) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar24) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar81 = GlobalVectorConstants::Float0001.m128_f32[0];
              fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
              fVar92 = GlobalVectorConstants::Float0001.m128_f32[2];
              fVar94 = GlobalVectorConstants::Float0001.m128_f32[3];
            }
            local_390 = (TArrayView<FRigUnit_DistributeRotation_Rotation_const_,int> *)
                        (pFVar40->CachedItems).AllocatorInstance.Data;
            _Var87.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
            _Var97.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
            if (*(short *)(&local_390->field_0xc + local_3e0) != -1) {
              bVar24 = ::FName::IsWithinBounds
                                 ((FNameEntryId)
                                  *(uint *)((longlong)&local_390->DataPtr + local_3e0 + 4));
              if (((bVar24) && (*(longlong *)((longlong)&local_390->DataPtr + local_3e0 + 4) != 0))
                 && (*(char *)((longlong)&local_390->DataPtr + local_3e0) != '\0')) {
                uVar31 = 0;
                if ((int)uVar30 < (pFVar40->CachedItems).ArrayNum) {
                  uVar31 = uVar36;
                }
                if ((uVar31 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar4 = *(ushort *)((pFVar40->CachedItems).AllocatorInstance.Data + local_3e0 + 0xc)
                ;
                uVar31 = (uint)uVar4;
                if (uVar4 == 0xffff) {
                  uVar31 = 0xffffffff;
                }
                local_268.Scale3D.ZW.m128d_f64[1] = dStack_370;
                local_268.Scale3D.ZW.m128d_f64[0] = (double)local_378;
                local_268.Scale3D.XY.m128d_f64[0] = (double)local_388;
                local_268.Scale3D.XY.m128d_f64[1] = dStack_380;
                local_268.Rotation.XY.m128d_f64 = adVar83;
                local_268.Rotation.ZW.m128d_f64 = adVar100;
                local_268.Translation.XY.m128d_f64[0] = dVar60;
                local_268.Translation.XY.m128d_f64[1] = dVar70;
                local_268.Translation.ZW.m128d_f64[0] = dVar8;
                local_268.Translation.ZW.m128d_f64[1] = dVar9;
                URigHierarchy::SetLocalTransformByIndex
                          (local_368,uVar31,&local_268,false,true,false,false);
                fVar81 = GlobalVectorConstants::Float0001.m128_f32[0];
                fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
                fVar92 = GlobalVectorConstants::Float0001.m128_f32[2];
                fVar94 = GlobalVectorConstants::Float0001.m128_f32[3];
                _Var87 = GlobalVectorConstants::DoubleOne.XY;
                _Var97 = GlobalVectorConstants::DoubleOne.ZW;
              }
              else {
                fVar81 = GlobalVectorConstants::Float0001.m128_f32[0];
                fVar90 = GlobalVectorConstants::Float0001.m128_f32[1];
                fVar92 = GlobalVectorConstants::Float0001.m128_f32[2];
                fVar94 = GlobalVectorConstants::Float0001.m128_f32[3];
                _Var87 = GlobalVectorConstants::DoubleOne.XY;
                _Var97 = GlobalVectorConstants::DoubleOne.ZW;
              }
            }
          }
        }
        local_3a8 = (TArrayView<FRigElementKey_const_,int> *)((longlong)local_3a8 + 0x60);
        local_3e0 = local_3e0 + 0x20;
        local_3b0 = (FRigUnit_DistributeRotation_WorkData *)((longlong)local_3b0 + 4);
        uVar30 = uVar30 + 1;
        lVar34 = lVar34 + 1;
        fVar98 = __real_322bcc77;
      } while ((int)uVar30 < (pFVar40->CachedItems).ArrayNum);
    }
  }
  return;
}

