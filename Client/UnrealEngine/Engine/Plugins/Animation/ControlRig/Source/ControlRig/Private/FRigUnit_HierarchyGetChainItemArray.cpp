// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4e1cd0

UScriptStruct * __cdecl FRigUnit_HierarchyGetChainItemArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetChainItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetChainItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChainItemArray,
                         (UObject *)pUVar1,L"RigUnit_HierarchyGetChainItemArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChainItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetChainItemArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetChainItemArray.OuterSingleton;
}

// FRigUnit_HierarchyGetChainItemArray @ 14a511600

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_HierarchyGetChainItemArray * __thiscall
FRigUnit_HierarchyGetChainItemArray::FRigUnit_HierarchyGetChainItemArray
          (FRigUnit_HierarchyGetChainItemArray *this)

{
  FRigElementKeyCollection *pFVar1;
  ulonglong uVar2;
  uint local_48;
  undefined8 local_38 [2];
  uint local_28;
  undefined2 uStack_1a;
  undefined4 uStack_14;
  
  local_48 = CONCAT31(local_48._1_3_,1);
  uVar2 = (ulonglong)local_48;
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyGetChainItemArray__6B_;
  pFVar1 = &this->CachedChain;
  (this->Chain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chain).ArrayNum = 0;
  (this->Chain).ArrayMax = 0;
  (pFVar1->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedChain).Keys.ArrayNum = 0;
  (this->CachedChain).Keys.ArrayMax = 0;
  (this->End).Type = (char)uVar2;
  *(int3 *)&(this->End).field_0x1 = (int3)(uVar2 >> 8);
  (this->End).Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
  (this->Start).Type = (char)uVar2;
  *(int3 *)&(this->Start).field_0x1 = (int3)(uVar2 >> 8);
  (this->Start).Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
  local_28 = local_28 & 0xffffff00;
  (this->End).Name.Number = 0;
  (this->Start).Name.Number = 0;
  uVar2 = (ulonglong)local_28;
  (this->CachedEnd).Key.Type = (char)uVar2;
  *(int3 *)&(this->CachedEnd).Key.field_0x1 = (int3)(uVar2 >> 8);
  (this->CachedEnd).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
  *(ulonglong *)&(this->CachedEnd).Key.Name.Number = CONCAT26(uStack_1a,0xffff00000000);
  (this->CachedStart).Key.Type = (char)uVar2;
  *(int3 *)&(this->CachedStart).Key.field_0x1 = (int3)(uVar2 >> 8);
  (this->CachedStart).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
  *(ulonglong *)&(this->CachedStart).Key.Name.Number = CONCAT26(uStack_1a,0xffff00000000);
  *(ulonglong *)&(this->CachedEnd).ContainerVersion = CONCAT44(uStack_14,0xffffffff);
  (this->CachedEnd).Element = (FRigBaseElement *)0x0;
  *(ulonglong *)&(this->CachedStart).ContainerVersion = CONCAT44(uStack_14,0xffffffff);
  (this->CachedStart).Element = (FRigBaseElement *)0x0;
  if (pFVar1 != (FRigElementKeyCollection *)local_38) {
    (pFVar1->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedChain).Keys.ArrayNum = 0;
    (this->CachedChain).Keys.ArrayMax = 0;
  }
  this->bIncludeStart = true;
  this->bIncludeEnd = true;
  this->bReverse = false;
  return this;
}

// Execute @ 14a5296c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetChainItemArray::Execute
          (FRigUnit_HierarchyGetChainItemArray *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Start,&this->End,this->bIncludeStart,this->bIncludeEnd,this->bReverse
                ,&this->Chain,&this->CachedStart,&this->CachedEnd,&this->CachedChain);
  return;
}

// Execute @ 14a529720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetChainItemArray::Execute(FRigUnit_HierarchyGetChainItemArray *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Start,&this->End,this->bIncludeStart,
                this->bIncludeEnd,this->bReverse,&this->Chain,&this->CachedStart,&this->CachedEnd,
                &this->CachedChain);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530d60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_HierarchyGetChainItemArray::GetExecuteContextStruct
          (FRigUnit_HierarchyGetChainItemArray *this)

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

// RigVMExecute @ 14a5476e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetChainItemArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  FRigElementKey *pFVar7;
  uchar *puVar8;
  FRigVMMemoryHandle *pFVar9;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar10;
  FRigVMSlice *pFVar11;
  FCachedRigElement *pFVar12;
  FCachedRigElement *pFVar13;
  FRigElementKeyCollection *pFVar14;
  FControlRigExecuteContext *pFVar15;
  
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
    pFVar6 = (FRigElementKey *)pFVar9->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
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
    pFVar7 = (FRigElementKey *)pFVar9[1].Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal
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
    puVar8 = pFVar9[2].Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar9[2].PropertyPath,pFVar9[2].Ptr,pFVar9[2].Property);
  }
  bVar5 = (bool)*puVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar1 = (bool)*puVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  puVar8 = FRigVMMemoryHandle::GetData_Internal(pFVar9,true,-1);
  bVar2 = (bool)*puVar8;
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pTVar10 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,-1);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar11->Offset + pFVar11->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,7);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar13 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar11->Offset + pFVar11->Index);
  pFVar9 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,8);
  pFVar11 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar14 = (FRigElementKeyCollection *)
            FRigVMMemoryHandle::GetData_Internal(pFVar9,false,pFVar11->Offset + pFVar11->Index);
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar15,pFVar6,pFVar7,bVar5,bVar1,bVar2,pTVar10,pFVar12,pFVar13,pFVar14);
  return;
}

// StaticExecute @ 14a5801a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetChainItemArray::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,FRigElementKey *param_3,
          bool param_4,bool param_5,bool param_6,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_7,FCachedRigElement *param_8,
          FCachedRigElement *param_9,FRigElementKeyCollection *param_10)

{
  longlong *plVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  uint uVar3;
  bool bVar4;
  int iVar5;
  FRigTransformElement *pFVar6;
  FRigBaseElement *pFVar7;
  FRigTransformElement *pFVar8;
  longlong lVar9;
  UScriptStruct *pUVar10;
  FRigElementKeyCollection *pFVar11;
  ForAnyElementType local_58;
  undefined8 local_50;
  FRigElementKeyCollection local_48;
  FRigElementKeyCollection local_38;
  
  bVar4 = FCachedRigElement::IsIdentical(param_8,param_2,param_1->Hierarchy);
  if ((bVar4) && (bVar4 = FCachedRigElement::IsIdentical(param_9,param_3,param_1->Hierarchy), bVar4)
     ) goto LAB_14a58068f;
  (param_10->Keys).ArrayNum = 0;
  if ((param_10->Keys).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)param_10,0,&(param_10->Keys).ArrayMax);
  }
  bVar4 = FCachedRigElement::UpdateCache(param_8,param_2,param_1->Hierarchy);
  if ((!bVar4) ||
     (bVar4 = FCachedRigElement::UpdateCache(param_9,param_3,param_1->Hierarchy), !bVar4))
  goto LAB_14a58068f;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  pFVar6 = Cast<FRigTransformElement>(param_8->Element);
  if ((pFVar6 != (FRigTransformElement *)0x0) && ((char)pFVar6->_padding_ == -0x80)) {
    pFVar7 = URigHierarchy::GetFirstParent(param_1->Hierarchy,(FRigBaseElement *)pFVar6);
    pFVar6 = Cast<FRigTransformElement>(pFVar7);
  }
  pFVar8 = Cast<FRigTransformElement>(param_9->Element);
  if ((pFVar8 != (FRigTransformElement *)0x0) && ((char)pFVar8->_padding_ == -0x80)) {
    pFVar7 = URigHierarchy::GetFirstParent(param_1->Hierarchy,(FRigBaseElement *)pFVar8);
    pFVar8 = Cast<FRigTransformElement>(pFVar7);
  }
  if ((pFVar6 == (FRigTransformElement *)0x0) || (pFVar8 == (FRigTransformElement *)0x0)) {
    if (0x7fffffff < local_50._4_4_) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_58,0,(int *)((longlong)&local_50 + 4));
    }
  }
  else {
    if (param_5) {
      plVar1 = &pFVar8->_padding_;
      if (((local_58.Data <= plVar1) &&
          (plVar1 < local_58.Data + (longlong)(int)local_50._4_4_ * 0xc)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
      *(longlong *)(local_58.Data + (longlong)iVar5 * 0xc) = *plVar1;
      *(int *)(local_58.Data + (longlong)iVar5 * 0xc + 8) = (int)pFVar8->_padding_;
    }
    pFVar7 = URigHierarchy::GetFirstParent(param_1->Hierarchy,(FRigBaseElement *)pFVar8);
    pFVar8 = Cast<FRigTransformElement>(pFVar7);
    if (pFVar8 == (FRigTransformElement *)0x0) {
      if (pFVar6 != (FRigTransformElement *)0x0) goto LAB_14a5804c8;
LAB_14a580508:
      if (param_4) {
        plVar1 = &pFVar6->_padding_;
        if (((local_58.Data <= plVar1) &&
            (plVar1 < local_58.Data + (longlong)(int)local_50._4_4_ * 0xc)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = (int)local_50;
        if ((int)local_50 == local_50._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&local_58,(int *)((longlong)&local_50 + 4));
        }
        local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
        *(longlong *)(local_58.Data + (longlong)iVar5 * 0xc) = *plVar1;
        *(int *)(local_58.Data + (longlong)iVar5 * 0xc + 8) = (int)pFVar6->_padding_;
      }
LAB_14a5805b6:
      iVar5 = (int)local_50;
    }
    else {
      do {
        if (pFVar8 == pFVar6) goto LAB_14a580508;
        plVar1 = &pFVar8->_padding_;
        if (((local_58.Data <= plVar1) &&
            (plVar1 < local_58.Data + (longlong)(int)local_50._4_4_ * 0xc)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = (int)local_50;
        if ((int)local_50 == local_50._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&local_58,(int *)((longlong)&local_50 + 4));
        }
        local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
        *(longlong *)(local_58.Data + (longlong)iVar5 * 0xc) = *plVar1;
        *(int *)(local_58.Data + (longlong)iVar5 * 0xc + 8) = (int)pFVar8->_padding_;
        pFVar8 = (FRigTransformElement *)
                 URigHierarchy::GetFirstParent(param_1->Hierarchy,(FRigBaseElement *)pFVar8);
        if (pFVar8 == (FRigTransformElement *)0x0) break;
        lVar9 = (**(code **)(pFVar8->_padding_ + 0x10))(pFVar8);
        pUVar10 = FRigTransformElement::StaticStruct();
        if (pUVar10 == (UScriptStruct *)0x0) break;
        iVar5 = (int)pUVar10->_padding_;
        if ((*(int *)(lVar9 + 0x38) < iVar5) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar10->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      } while (bVar4);
LAB_14a5804c8:
      lVar9 = local_50;
      uVar3 = local_50._4_4_;
      local_50 = (ulonglong)local_50._4_4_ << 0x20;
      iVar5 = 0;
      if ((lVar9 < 0) && (iVar5 = 0, uVar3 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&local_58,0,(int *)((longlong)&local_50 + 4));
        goto LAB_14a5805b6;
      }
    }
    _Src.Data = local_58.Data;
    local_48.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Keys.ArrayNum = iVar5;
    if (iVar5 == 0) {
      local_48.Keys.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar5,0,(ForAnyElementType *)&local_48,iVar5,&local_48.Keys.ArrayMax);
      memcpy(local_48.Keys.AllocatorInstance.Data,_Src.Data,(longlong)iVar5 * 0xc);
    }
    FRigElementKeyCollection::operator=(param_10,&local_48);
    if (local_48.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Keys.AllocatorInstance.Data);
    }
    if (!param_6) {
      pFVar11 = FRigElementKeyCollection::MakeReversed(&local_38,param_10);
      FRigElementKeyCollection::operator=(param_10,pFVar11);
      if (local_38.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Keys.AllocatorInstance.Data);
      }
    }
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
LAB_14a58068f:
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=(param_7,&param_10->Keys);
  return;
}

