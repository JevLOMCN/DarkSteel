// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4e0dd0

UScriptStruct * __cdecl FRigUnit_HierarchyGetSiblingsItemArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray,
                         (UObject *)pUVar1,L"RigUnit_HierarchyGetSiblingsItemArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray.OuterSingleton;
}

// FRigUnit_HierarchyGetSiblingsItemArray @ 14a5120a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_HierarchyGetSiblingsItemArray * __thiscall
FRigUnit_HierarchyGetSiblingsItemArray::FRigUnit_HierarchyGetSiblingsItemArray
          (FRigUnit_HierarchyGetSiblingsItemArray *this)

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
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyGetSiblingsItemArray__6B_;
  pFVar1 = &this->CachedSiblings;
  (this->Siblings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Siblings).ArrayNum = 0;
  (this->Siblings).ArrayMax = 0;
  (pFVar1->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSiblings).Keys.ArrayNum = 0;
  (this->CachedSiblings).Keys.ArrayMax = 0;
  (this->Item).Type = (char)uVar2;
  *(int3 *)&(this->Item).field_0x1 = (int3)(uVar2 >> 8);
  (this->Item).Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
  local_28 = local_28 & 0xffffff00;
  (this->Item).Name.Number = 0;
  uVar2 = (ulonglong)local_28;
  (this->CachedItem).Key.Type = (char)uVar2;
  *(int3 *)&(this->CachedItem).Key.field_0x1 = (int3)(uVar2 >> 8);
  (this->CachedItem).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
  *(ulonglong *)&(this->CachedItem).Key.Name.Number = CONCAT26(uStack_1a,0xffff00000000);
  *(ulonglong *)&(this->CachedItem).ContainerVersion = CONCAT44(uStack_14,0xffffffff);
  (this->CachedItem).Element = (FRigBaseElement *)0x0;
  if (pFVar1 != (FRigElementKeyCollection *)local_38) {
    (pFVar1->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedSiblings).Keys.ArrayNum = 0;
    (this->CachedSiblings).Keys.ArrayMax = 0;
  }
  this->bIncludeItem = false;
  this->bDefaultSiblings = true;
  return this;
}

// Execute @ 14a529ea0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetSiblingsItemArray::Execute
          (FRigUnit_HierarchyGetSiblingsItemArray *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Item,this->bIncludeItem,this->bDefaultSiblings,&this->Siblings,
                &this->CachedItem,&this->CachedSiblings);
  return;
}

// Execute @ 14a529ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetSiblingsItemArray::Execute(FRigUnit_HierarchyGetSiblingsItemArray *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Item,this->bIncludeItem,
                this->bDefaultSiblings,&this->Siblings,&this->CachedItem,&this->CachedSiblings);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530e60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_HierarchyGetSiblingsItemArray::GetExecuteContextStruct
          (FRigUnit_HierarchyGetSiblingsItemArray *this)

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

// RigVMExecute @ 14a548ae0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetSiblingsItemArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  FRigElementKey *pFVar5;
  uchar *puVar6;
  FRigVMMemoryHandle *pFVar7;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar8;
  FRigVMSlice *pFVar9;
  FCachedRigElement *pFVar10;
  FRigElementKeyCollection *pFVar11;
  FControlRigExecuteContext *pFVar12;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FRigElementKey *)pFVar7->Ptr;
  }
  else {
    pFVar5 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar7[1].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  bVar3 = (bool)*puVar6;
  if (iVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = param_2->DataPtr;
  if (pFVar7[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar7[2].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar7[2].PropertyPath,pFVar7[2].Ptr,pFVar7[2].Property);
  }
  bVar4 = (bool)*puVar6;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar8 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
           FRigVMMemoryHandle::GetData_Internal(pFVar7,false,-1);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar10 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar9->Offset + pFVar9->Index);
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar9 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FRigElementKeyCollection *)
            FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar9->Offset + pFVar9->Index);
  pFVar12 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar12,pFVar5,bVar3,bVar4,pTVar8,pFVar10,pFVar11);
  return;
}

// StaticExecute @ 14a581460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetSiblingsItemArray::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,bool param_4,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_5,FCachedRigElement *param_6,
          FRigElementKeyCollection *param_7)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FRigBaseElement_*> FVar3;
  undefined8 uVar4;
  URigHierarchy *pUVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FRigElementKey *pFVar11;
  FRigBaseElement *pFVar12;
  ForAnyElementType FVar13;
  ForElementType<FRigBaseElement_*> FVar14;
  undefined1 auStackY_168 [32];
  undefined1 local_117;
  undefined1 local_116 [6];
  ForAnyElementType local_110;
  undefined8 local_108;
  FRigElementKeyCollection local_100;
  FRigElementKey local_f0;
  FRigElementKey local_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  FRigElementKey local_c0;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_b0;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *local_a0;
  FRigElementKey local_98;
  FRigElementKey local_88;
  FRigElementKey local_78;
  undefined1 local_68 [24];
  ForElementType<FRigBaseElement_*> local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_a0 = param_5;
  if (param_4) {
    bVar8 = FCachedRigElement::IsIdentical(param_6,param_2,param_1->Hierarchy);
    if (!bVar8) {
      (param_7->Keys).ArrayNum = 0;
      if ((param_7->Keys).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)param_7,0,&(param_7->Keys).ArrayMax);
      }
      bVar8 = FCachedRigElement::UpdateCache(param_6,param_2,param_1->Hierarchy);
      if (bVar8) {
        pUVar5 = param_1->Hierarchy;
        local_110.Data = (FScriptContainerElement *)0x0;
        local_108 = 0;
        pFVar11 = FCachedRigElement::GetResolvedKey(param_6);
        local_98.Type = pFVar11->Type;
        local_98._1_3_ = *(undefined3 *)&pFVar11->field_0x1;
        local_98.Name.ComparisonIndex.Value = (pFVar11->Name).ComparisonIndex.Value;
        local_98.Name.Number = (pFVar11->Name).Number;
        URigHierarchy::GetFirstParent(pUVar5,&local_c0,&local_98);
        bVar8 = ::FName::IsWithinBounds(local_c0.Name.ComparisonIndex);
        if (((bVar8) && (CONCAT44(local_c0.Name.Number,local_c0.Name.ComparisonIndex.Value) != 0))
           && (local_c0.Type != None)) {
          local_88.Name.Number = local_c0.Name.Number;
          URigHierarchy::GetChildren(param_1->Hierarchy,&local_b0,&local_88,false);
          iVar10 = local_b0.ArrayNum;
          pFVar2 = local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayNum * 0xc;
          FVar13.Data = local_b0.AllocatorInstance.Data;
          while( true ) {
            if (local_b0.ArrayNum != iVar10) {
              local_117 = 0;
              `TCheckedPointerIterator<FRigElementKey,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_117);
            }
            param_5 = local_a0;
            if (FVar13.Data == pFVar2) break;
            uVar4 = *(undefined8 *)FVar13.Data;
            local_f0.Name.Number = *(uint *)(FVar13.Data + 8);
            local_f0._0_4_ = SUB84(uVar4,0);
            local_f0.Name.ComparisonIndex.Value = (uint)((ulonglong)uVar4 >> 0x20);
            if (((param_3) ||
                (FVar7.Number = local_f0.Name.Number,
                FVar7.ComparisonIndex.Value = local_f0.Name.ComparisonIndex.Value,
                FVar7 != param_2->Name)) ||
               (local_f0.Type = (ERigElementType)uVar4, bVar8 = local_f0.Type != param_2->Type,
               bVar8)) {
              if (((local_110.Data <= &local_f0) &&
                  (&local_f0 < (FRigElementKey *)(local_110.Data + (longlong)local_108._4_4_ * 0xc))
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar9 = (int)local_108;
              if ((int)local_108 == local_108._4_4_) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&local_110,(int *)((longlong)&local_108 + 4));
              }
              local_108 = CONCAT44(local_108._4_4_,iVar9 + 1);
              *(ulonglong *)(local_110.Data + (longlong)iVar9 * 0xc) =
                   CONCAT44(local_f0.Name.ComparisonIndex.Value,local_f0._0_4_);
              *(uint *)(local_110.Data + (longlong)iVar9 * 0xc + 8) = local_f0.Name.Number;
            }
            FVar13.Data = FVar13.Data + 0xc;
          }
          if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.AllocatorInstance.Data);
          }
        }
        iVar10 = (int)local_108;
        if (((int)local_108 == 0) && (param_3)) {
          iVar9 = 0;
          if ((local_110.Data <= param_2) &&
             (param_2 < (FRigElementKey *)(local_110.Data + (longlong)local_108._4_4_ * 0xc))) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = (int)local_108;
          }
          if (iVar9 == local_108._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&local_110,(int *)((longlong)&local_108 + 4));
          }
          iVar10 = iVar9 + 1;
          local_108 = CONCAT44(local_108._4_4_,iVar10);
          *(undefined8 *)(local_110.Data + (longlong)iVar9 * 0xc) = *(undefined8 *)param_2;
          *(uint *)(local_110.Data + (longlong)iVar9 * 0xc + 8) = (param_2->Name).Number;
        }
        FVar13.Data = local_110.Data;
        local_100.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_100.Keys.ArrayNum = iVar10;
        if (iVar10 == 0) {
          local_100.Keys.ArrayNum = 0;
          local_100.Keys.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar10,0,(ForAnyElementType *)&local_100,iVar10,&local_100.Keys.ArrayMax)
          ;
          memcpy(local_100.Keys.AllocatorInstance.Data,FVar13.Data,(longlong)iVar10 * 0xc);
        }
        if (param_7 != &local_100) {
          pFVar2 = (param_7->Keys).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (param_7->Keys).AllocatorInstance.Data = local_100.Keys.AllocatorInstance.Data;
          (param_7->Keys).ArrayNum = local_100.Keys.ArrayNum;
          local_100.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (param_7->Keys).ArrayMax = local_100.Keys.ArrayMax;
          local_100.Keys.ArrayNum = 0;
          local_100.Keys.ArrayMax = 0;
        }
        if (local_100.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Keys.AllocatorInstance.Data);
        }
        if ((FRigElementKey *)local_110.Data != (FRigElementKey *)0x0) {
          FMemory::Free(local_110.Data);
        }
      }
    }
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=(param_5,&param_7->Keys);
  }
  else {
    piVar1 = &param_5->ArrayMax;
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_5->AllocatorInstance,0,piVar1);
    }
    pUVar5 = param_1->Hierarchy;
    URigHierarchy::GetActiveParent(pUVar5,&local_e0,param_2,false);
    bVar8 = ::FName::IsWithinBounds(local_e0.Name.ComparisonIndex);
    if (((!bVar8) || (CONCAT44(local_e0.Name.Number,local_e0.Name.ComparisonIndex.Value) == 0)) ||
       (local_e0.Type == None)) {
      pFVar11 = URigHierarchy::GetWorldSpaceReferenceKey(&local_78);
      uVar4._0_1_ = pFVar11->Type;
      uVar4._1_3_ = *(undefined3 *)&pFVar11->field_0x1;
      uVar4._4_4_ = (pFVar11->Name).ComparisonIndex;
      local_e0._0_4_ = SUB84(uVar4,0);
      local_e0.Name.Number = (pFVar11->Name).Number;
      local_e0.Name.ComparisonIndex.Value = uVar4._4_4_;
    }
    iVar10 = URigHierarchy::GetIndex(pUVar5,&local_e0,true);
    pFVar12 = URigHierarchy::Get(pUVar5,iVar10);
    URigHierarchy::GetActiveChildren
              (pUVar5,(TArray<FRigBaseElement_*,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
                       *)local_68,pFVar12,false);
    iVar10 = (int)local_48;
    FVar14 = (ForElementType<FRigBaseElement_*>)local_68;
    if (local_50 != (ForElementType<FRigBaseElement_*>)0x0) {
      FVar14 = local_50;
    }
    FVar3 = (ForElementType<FRigBaseElement_*>)((longlong)FVar14 + (longlong)iVar10 * 8);
    while( true ) {
      if ((int)local_48 != iVar10) {
        local_116[0] = 0;
        `TCheckedPointerIterator<FRigBaseElement_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_116);
      }
      if (FVar14 == FVar3) break;
      pFVar2 = (param_5->AllocatorInstance).Data;
      local_d0 = *(undefined8 *)(*(longlong *)FVar14 + 0x10);
      local_c8 = *(undefined4 *)(*(longlong *)FVar14 + 0x18);
      if (((pFVar2 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 < pFVar2 + (longlong)*piVar1 * 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_5->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&param_5->AllocatorInstance,piVar1);
      }
      FVar14 = (ForElementType<FRigBaseElement_*>)((longlong)FVar14 + 8);
      param_5->ArrayNum = iVar9 + 1;
      pFVar2 = (param_5->AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + (longlong)iVar9 * 0xc) = local_d0;
      *(undefined4 *)(pFVar2 + (longlong)iVar9 * 0xc + 8) = local_c8;
    }
    if (!param_3) {
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::Remove(param_5,param_2);
    }
    if (local_50 != (ForElementType<FRigBaseElement_*>)0x0) {
      FMemory::Free((void *)local_50);
    }
  }
  return;
}

