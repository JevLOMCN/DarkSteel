// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4c04e0

UScriptStruct * __cdecl FRigUnit_CollectionChildrenArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionChildrenArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionChildrenArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray,
                         (UObject *)pUVar1,L"RigUnit_CollectionChildrenArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionChildrenArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CollectionChildrenArray.OuterSingleton;
}

// Execute @ 14a525340

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionChildrenArray::Execute
          (FRigUnit_CollectionChildrenArray *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Parent,this->bIncludeParent,this->bRecursive,this->bDefaultChildren,
                this->TypeToSearch,&this->Items);
  return;
}

// Execute @ 14a525390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CollectionChildrenArray::Execute(FRigUnit_CollectionChildrenArray *this)

{
  undefined1 auStackY_2a8 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Parent,this->bIncludeParent,
                this->bRecursive,this->bDefaultChildren,this->TypeToSearch,&this->Items);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a5309e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_CollectionChildrenArray::GetExecuteContextStruct(FRigUnit_CollectionChildrenArray *this)

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

// RigVMExecute @ 14a5379d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionChildrenArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  bool bVar1;
  ERigElementType EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FRigElementKey *pFVar7;
  uchar *puVar8;
  FRigVMMemoryHandle *pFVar9;
  ERigElementType *pEVar10;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar11;
  FControlRigExecuteContext *pFVar12;
  
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
    pFVar7 = (FRigElementKey *)pFVar9->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar9->PropertyPath,pFVar9->Ptr,pFVar9->Property)
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
    puVar8 = pFVar9[1].Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[1].PropertyPath,pFVar9[1].Ptr,pFVar9[1].Property);
  }
  bVar5 = (bool)*puVar8;
  if (iVar3 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = param_2->DataPtr;
  if (pFVar9[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar9[2].Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  bVar6 = (bool)*puVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar1 = (bool)*puVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pEVar10 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  EVar2 = *pEVar10;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar11 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,pFVar7,bVar5,bVar6,bVar1,EVar2,pTVar11);
  return;
}

// StaticExecute @ 14a567c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionChildrenArray::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,bool param_4,
          bool param_5,ERigElementType param_6,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  ForElementType<FRigBaseElement_*> FVar2;
  URigHierarchy *this;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  UScriptStruct *pUVar11;
  FRigElementKey *pFVar12;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar13;
  FRigBaseElement *pFVar14;
  ForAnyElementType FVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  ForElementType<FRigBaseElement_*> FVar18;
  longlong lVar19;
  ForElementType<FRigBaseElement_*> FVar20;
  int iVar21;
  uint uVar22;
  undefined1 auStackY_108 [32];
  bool local_b7 [7];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_a0;
  uint local_90 [2];
  FRigElementKeyCollection local_88;
  TArray<FRigBaseElement_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_108;
  this = param_1->Hierarchy;
  local_b7[0] = param_3;
  if (this == (URigHierarchy *)0x0) {
    param_7->ArrayNum = 0;
    if (param_7->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
    }
  }
  else {
    if (param_5) {
      pUVar11 = StaticStruct();
      uVar7 = ((uint)((ulonglong)pUVar11 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar11 >> 4)) *
              -0x7a143595;
      uVar8 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar7 = param_1->Hierarchy->TopologyVersion;
      pFVar12 = URigHierarchy::GetResolvedTarget(param_1->Hierarchy,param_2);
      FVar3 = pFVar12->Name;
      uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      bVar6 = local_b7[0];
      uVar22 = (uint)param_4;
      uVar9 = (uint)pFVar12->Type + (uVar9 + FVar3.Number) * 10;
      uVar8 = ((uVar8 >> 0x10 ^ uVar8) + uVar7 * 0x11) - uVar9 ^ uVar9 >> 0xd;
      uVar7 = (-0x61c88647 - uVar9) - uVar8 ^ uVar8 << 8;
      uVar9 = (uVar9 - uVar7) - uVar8 ^ uVar7 >> 0xd;
      uVar8 = (uVar8 - uVar9) - uVar7 ^ uVar9 >> 0xc;
      uVar7 = (uVar7 - uVar8) - uVar9 ^ uVar8 << 0x10;
      uVar9 = (uVar9 - uVar7) - uVar8 ^ uVar7 >> 5;
      uVar8 = (uVar8 - uVar9) - uVar7 ^ uVar9 >> 3;
      uVar7 = (uVar7 - uVar8) - uVar9 ^ uVar8 << 10;
      iVar21 = ((uVar9 - uVar7) - uVar8 ^ uVar7 >> 0xf) + uVar22 * -2;
      uVar7 = (-0x61c88647 - iVar21) + uVar22 * -2 ^ iVar21 * 0x100;
      uVar9 = (uVar22 * 2 - uVar7) - iVar21 ^ uVar7 >> 0xd;
      uVar8 = (iVar21 - uVar9) - uVar7 ^ uVar9 >> 0xc;
      uVar7 = (uVar7 - uVar8) - uVar9 ^ uVar8 << 0x10;
      uVar9 = (uVar9 - uVar8) - uVar7 ^ uVar7 >> 5;
      uVar8 = (uVar8 - uVar9) - uVar7 ^ uVar9 >> 3;
      uVar7 = (uVar7 - uVar8) - uVar9 ^ uVar8 << 10;
      iVar21 = ((uVar9 - uVar7) - uVar8 ^ uVar7 >> 0xf) - (uint)local_b7[0];
      uVar7 = (-0x61c88647 - iVar21) - (uint)local_b7[0] ^ iVar21 * 0x100;
      uVar8 = (local_b7[0] - uVar7) - iVar21 ^ uVar7 >> 0xd;
      uVar9 = (iVar21 - uVar8) - uVar7 ^ uVar8 >> 0xc;
      uVar7 = (uVar7 - uVar9) - uVar8 ^ uVar9 << 0x10;
      uVar8 = (uVar8 - uVar9) - uVar7 ^ uVar7 >> 5;
      uVar9 = (uVar9 - uVar8) - uVar7 ^ uVar8 >> 3;
      uVar7 = (uVar7 - uVar9) - uVar8 ^ uVar9 << 10;
      uVar7 = (uVar8 - uVar7) - uVar9 ^ uVar7 >> 0xf;
      iVar21 = uVar7 + (uint)param_6 * -8;
      uVar9 = 0x9e3779b9 - uVar7 ^ iVar21 * 0x100;
      local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.ArrayNum = 0;
      local_a0.ArrayMax = 0;
      uVar8 = ((uint)param_6 * 8 - uVar9) - iVar21 ^ uVar9 >> 0xd;
      uVar7 = (iVar21 - uVar8) - uVar9 ^ uVar8 >> 0xc;
      uVar9 = (uVar9 - uVar7) - uVar8 ^ uVar7 << 0x10;
      uVar8 = (uVar8 - uVar7) - uVar9 ^ uVar9 >> 5;
      uVar7 = (uVar7 - uVar8) - uVar9 ^ uVar8 >> 3;
      uVar9 = (uVar9 - uVar7) - uVar8 ^ uVar7 << 10;
      uVar7 = (uVar8 - uVar9) - uVar7 ^ uVar9 >> 0xf;
      pTVar13 = &URigHierarchy::FindCachedCollection(param_1->Hierarchy,uVar7)->Keys;
      if (pTVar13 == (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar13 = &FRigElementKeyCollection::MakeFromChildren
                             (&local_88,param_1->Hierarchy,param_2,param_4,bVar6,param_6)->Keys;
        if (&local_a0 != pTVar13) {
          if ((TArray<FRigBaseElement_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *)
              local_a0.AllocatorInstance.Data !=
              (TArray<FRigBaseElement_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_> *)
              0x0) {
            FMemory::Free(local_a0.AllocatorInstance.Data);
          }
          local_a0.AllocatorInstance.Data =
               (((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)&pTVar13->AllocatorInstance)
               ->AllocatorInstance).Data;
          (((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)&pTVar13->AllocatorInstance)->
          AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_a0.ArrayNum = pTVar13->ArrayNum;
          local_a0.ArrayMax = pTVar13->ArrayMax;
          pTVar13->ArrayNum = 0;
          pTVar13->ArrayMax = 0;
        }
        if (local_88.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Keys.AllocatorInstance.Data);
        }
        if (local_a0.ArrayNum == 0) {
          URigHierarchy::GetIndex(param_1->Hierarchy,param_2,true);
        }
        local_90[0] = uVar7;
        TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
        ::Emplace<unsigned_int_const_&,FRigElementKeyCollection_const_&>
                  ((TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
                    *)&param_1->Hierarchy->KeyCollectionCache,local_90,
                   (FRigElementKeyCollection *)&local_a0);
      }
      else {
        TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=(&local_a0,pTVar13);
      }
      FVar15.Data = local_a0.AllocatorInstance.Data;
      local_78.AllocatorInstance.SecondaryData =
           (ForElementType<FRigBaseElement_*>)local_a0.AllocatorInstance.Data;
      if (param_7 != &local_a0) {
        iVar21 = local_a0.ArrayNum;
        lVar19 = (longlong)local_a0.ArrayNum;
        piVar1 = &param_7->ArrayMax;
        param_7->ArrayNum = local_a0.ArrayNum;
        if ((local_a0.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,local_a0.ArrayNum,*piVar1,&param_7->AllocatorInstance,local_a0.ArrayNum,
                     piVar1);
          local_78.AllocatorInstance.SecondaryData =
               (ForElementType<FRigBaseElement_*>)local_a0.AllocatorInstance.Data;
          if (iVar21 != 0) {
            memcpy((param_7->AllocatorInstance).Data,FVar15.Data,lVar19 * 0xc);
            local_78.AllocatorInstance.SecondaryData =
                 (ForElementType<FRigBaseElement_*>)local_a0.AllocatorInstance.Data;
          }
        }
      }
    }
    else {
      piVar1 = &param_7->ArrayMax;
      FVar15.Data = (FScriptContainerElement *)0x0;
      iVar21 = 0;
      param_7->ArrayNum = 0;
      if (param_7->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&param_7->AllocatorInstance,0,piVar1);
      }
      if (param_3) {
        pFVar12 = (FRigElementKey *)(param_7->AllocatorInstance).Data;
        if (((pFVar12 <= param_2) && (param_2 < pFVar12 + *piVar1)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = param_7->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&param_7->AllocatorInstance,piVar1);
        }
        param_7->ArrayNum = iVar10 + 1;
        pFVar4 = (param_7->AllocatorInstance).Data;
        *(undefined8 *)(pFVar4 + (longlong)iVar10 * 0xc) = *(undefined8 *)param_2;
        *(uint *)(pFVar4 + (longlong)iVar10 * 0xc + 8) = (param_2->Name).Number;
      }
      iVar10 = URigHierarchy::GetIndex(this,param_2,true);
      pFVar14 = URigHierarchy::Get(this,iVar10);
      URigHierarchy::GetActiveChildren(this,&local_78,pFVar14,param_4);
      local_b0.Data = (FScriptContainerElement *)0x0;
      FVar18 = (ForElementType<FRigBaseElement_*>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
        FVar18 = local_78.AllocatorInstance.SecondaryData;
      }
      local_a8 = 0;
      FVar2 = (ForElementType<FRigBaseElement_*>)
              ((longlong)FVar18 + (longlong)local_78.ArrayNum * 8);
      FVar20 = (ForElementType<FRigBaseElement_*>)FVar15.Data;
      for (; FVar18 != FVar2; FVar18 = (ForElementType<FRigBaseElement_*>)((longlong)FVar18 + 8)) {
        if ((*(ERigElementType *)(*(longlong *)FVar18 + 0x10) & param_6) != None) {
          iVar21 = FVar20._0_4_;
          if ((FVar15.Data <= (ulonglong)FVar18) &&
             (local_a8._4_4_ = (int)((ulonglong)local_a8 >> 0x20), lVar19 = (longlong)local_a8._4_4_
             , (ulonglong)FVar18 < (ulonglong)((longlong)FVar15.Data + lVar19 * 8))) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar15.Data = local_b0.Data;
            iVar21 = (int)local_a8;
          }
          if (iVar21 == local_a8._4_4_) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_b0,(int *)((longlong)&local_a8 + 4));
            FVar15.Data = local_b0.Data;
          }
          local_a8 = CONCAT44(local_a8._4_4_,iVar21 + 1U);
          *(longlong *)(FVar15.Data + (longlong)iVar21 * 8) = *(longlong *)FVar18;
          FVar20._4_4_ = 0;
          FVar20._0_4_ = iVar21 + 1U;
          FVar15.Data = local_b0.Data;
        }
        iVar21 = FVar20._0_4_;
      }
      local_78.ArrayNum = iVar21;
      if ((iVar21 == 0) && (local_78.ArrayMax == 0)) {
        local_78.ArrayMax = 3;
        FVar16.Data = FVar15.Data;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigBaseElement_*>_>
                  (8,8,iVar21,local_78.ArrayMax,&local_78.AllocatorInstance,iVar21,
                   &local_78.ArrayMax);
        FVar18 = (ForElementType<FRigBaseElement_*>)&local_78;
        if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
          FVar18 = local_78.AllocatorInstance.SecondaryData;
        }
        FVar16.Data = local_b0.Data;
        if (iVar21 != 0) {
          memcpy((void *)FVar18,FVar15.Data,(longlong)iVar21 << 3);
          FVar16.Data = local_b0.Data;
        }
      }
      if ((ForElementType<FRigBaseElement_*>)FVar16.Data != (ForElementType<FRigBaseElement_*>)0x0)
      {
        FMemory::Free(FVar16.Data);
      }
      uVar7 = local_78.ArrayNum + param_7->ArrayNum;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (*piVar1 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar7,&param_7->AllocatorInstance,param_7->ArrayNum,piVar1);
      }
      iVar21 = local_78.ArrayNum;
      FVar18 = (ForElementType<FRigBaseElement_*>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
        FVar18 = local_78.AllocatorInstance.SecondaryData;
      }
      FVar2 = (ForElementType<FRigBaseElement_*>)
              ((longlong)FVar18 + (longlong)local_78.ArrayNum * 8);
      while( true ) {
        if (local_78.ArrayNum != iVar21) {
          local_b7[0] = false;
          `TCheckedPointerIterator<FRigBaseElement_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_b7);
        }
        if (FVar18 == FVar2) break;
        lVar19 = *(longlong *)FVar18;
        pFVar4 = (param_7->AllocatorInstance).Data;
        pFVar17 = (FScriptContainerElement *)(lVar19 + 0x10);
        if (((pFVar4 <= pFVar17) && (pFVar17 < pFVar4 + (longlong)*piVar1 * 0xc)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = param_7->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&param_7->AllocatorInstance,piVar1);
        }
        FVar18 = (ForElementType<FRigBaseElement_*>)((longlong)FVar18 + 8);
        param_7->ArrayNum = iVar10 + 1;
        pFVar4 = (param_7->AllocatorInstance).Data;
        *(undefined8 *)(pFVar4 + (longlong)iVar10 * 0xc) = *(undefined8 *)pFVar17;
        *(undefined4 *)(pFVar4 + (longlong)iVar10 * 0xc + 8) = *(undefined4 *)(lVar19 + 0x18);
      }
    }
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<FRigBaseElement_*>)0x0) {
      FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

