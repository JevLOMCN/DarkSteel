// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4dd290

UScriptStruct * __cdecl FRigUnit_HierarchyGetParentsItemArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray,
                         (UObject *)pUVar1,L"RigUnit_HierarchyGetParentsItemArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray.OuterSingleton;
}

// FRigUnit_HierarchyGetParentsItemArray @ 14a511910

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_HierarchyGetParentsItemArray * __thiscall
FRigUnit_HierarchyGetParentsItemArray::FRigUnit_HierarchyGetParentsItemArray
          (FRigUnit_HierarchyGetParentsItemArray *this)

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
  this->_padding_ = (longlong)&___7FRigUnit_HierarchyGetParentsItemArray__6B_;
  pFVar1 = &this->CachedParents;
  (this->Parents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parents).ArrayNum = 0;
  (this->Parents).ArrayMax = 0;
  (pFVar1->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedParents).Keys.ArrayNum = 0;
  (this->CachedParents).Keys.ArrayMax = 0;
  (this->Child).Type = (char)uVar2;
  *(int3 *)&(this->Child).field_0x1 = (int3)(uVar2 >> 8);
  (this->Child).Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
  local_28 = local_28 & 0xffffff00;
  (this->Child).Name.Number = 0;
  uVar2 = (ulonglong)local_28;
  (this->CachedChild).Key.Type = (char)uVar2;
  *(int3 *)&(this->CachedChild).Key.field_0x1 = (int3)(uVar2 >> 8);
  (this->CachedChild).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
  *(ulonglong *)&(this->CachedChild).Key.Name.Number = CONCAT26(uStack_1a,0xffff00000000);
  *(ulonglong *)&(this->CachedChild).ContainerVersion = CONCAT44(uStack_14,0xffffffff);
  (this->CachedChild).Element = (FRigBaseElement *)0x0;
  if (pFVar1 != (FRigElementKeyCollection *)local_38) {
    (pFVar1->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->CachedParents).Keys.ArrayNum = 0;
    (this->CachedParents).Keys.ArrayMax = 0;
  }
  this->bIncludeChild = false;
  this->bReverse = false;
  this->bDefaultParent = true;
  return this;
}

// Execute @ 14a529a20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetParentsItemArray::Execute
          (FRigUnit_HierarchyGetParentsItemArray *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Child,this->bIncludeChild,this->bReverse,this->bDefaultParent,
                &this->Parents,&this->CachedChild,&this->CachedParents);
  return;
}

// Execute @ 14a529a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetParentsItemArray::Execute(FRigUnit_HierarchyGetParentsItemArray *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Child,this->bIncludeChild,
                this->bReverse,this->bDefaultParent,&this->Parents,&this->CachedChild,
                &this->CachedParents);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530de0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_HierarchyGetParentsItemArray::GetExecuteContextStruct
          (FRigUnit_HierarchyGetParentsItemArray *this)

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

// RigVMExecute @ 14a548250

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetParentsItemArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  uchar *puVar7;
  FRigVMMemoryHandle *pFVar8;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar9;
  FRigVMSlice *pFVar10;
  FCachedRigElement *pFVar11;
  FRigElementKeyCollection *pFVar12;
  FControlRigExecuteContext *pFVar13;
  
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar8->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar8[1].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
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
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar8[2].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  bVar5 = (bool)*puVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  puVar7 = FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  bVar1 = (bool)*puVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pTVar9 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
           FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar11 = (FCachedRigElement *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar10->Offset + pFVar10->Index);
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,6);
  pFVar10 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar12 = (FRigElementKeyCollection *)
            FRigVMMemoryHandle::GetData_Internal(pFVar8,false,pFVar10->Offset + pFVar10->Index);
  pFVar13 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar13,pFVar6,bVar4,bVar5,bVar1,pTVar9,pFVar11,pFVar12);
  return;
}

// StaticExecute @ 14a580c40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetParentsItemArray::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,bool param_4,
          bool param_5,TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_6,
          FCachedRigElement *param_7,FRigElementKeyCollection *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  FRigElementKey *pFVar10;
  FName FVar11;
  FRigElementKeyCollection *pFVar12;
  FName FVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_b8;
  undefined4 local_a8;
  FNameEntryId FStack_a4;
  uint local_a0;
  FRigElementKey local_98;
  ForAnyElementType local_88;
  undefined8 local_80;
  FRigElementKeyCollection local_78;
  FRigElementKey local_68;
  FRigElementKeyCollection local_58;
  FRigElementKey local_48;
  FRigElementKey local_3c;
  
  if (param_5) {
    bVar8 = FCachedRigElement::IsIdentical(param_7,param_2,param_1->Hierarchy);
    if (!bVar8) {
      (param_8->Keys).ArrayNum = 0;
      if ((param_8->Keys).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)param_8,0,&(param_8->Keys).ArrayMax);
      }
      bVar8 = FCachedRigElement::UpdateCache(param_7,param_2,param_1->Hierarchy);
      if (bVar8) {
        local_88.Data = (FScriptContainerElement *)0x0;
        local_80 = 0;
        pFVar10 = FCachedRigElement::GetResolvedKey(param_7);
        uVar3._0_1_ = pFVar10->Type;
        uVar3._1_3_ = *(undefined3 *)&pFVar10->field_0x1;
        uVar3._4_4_ = (pFVar10->Name).ComparisonIndex;
        local_a8 = (undefined4)uVar3;
        local_a0 = (pFVar10->Name).Number;
        FVar11.Number = local_a0;
        FVar11.ComparisonIndex.Value = uVar3._4_4_;
        FStack_a4.Value = uVar3._4_4_;
        do {
          if (((param_3) || (FVar11 != param_2->Name)) || ((ERigElementType)uVar3 != param_2->Type))
          {
            if (((local_88.Data <= (FScriptContainerElement *)&local_a8) &&
                ((FScriptContainerElement *)&local_a8 <
                 local_88.Data + (longlong)local_80._4_4_ * 0xc)) &&
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
            iVar9 = (int)local_80;
            if ((int)local_80 == local_80._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x40c,&local_88,(int *)((longlong)&local_80 + 4));
            }
            local_80 = CONCAT44(local_80._4_4_,iVar9 + 1);
            *(ulonglong *)(local_88.Data + (longlong)iVar9 * 0xc) =
                 CONCAT44(FStack_a4.Value,local_a8);
            *(uint *)(local_88.Data + (longlong)iVar9 * 0xc + 8) = local_a0;
          }
          local_68.Name.ComparisonIndex.Value = FStack_a4.Value;
          local_68._0_4_ = local_a8;
          local_68.Name.Number = local_a0;
          pFVar10 = URigHierarchy::GetFirstParent(param_1->Hierarchy,&local_48,&local_68);
          uVar4._0_1_ = pFVar10->Type;
          uVar4._1_3_ = *(undefined3 *)&pFVar10->field_0x1;
          uVar4._4_4_ = (pFVar10->Name).ComparisonIndex;
          local_a8 = (undefined4)uVar4;
          local_a0 = (pFVar10->Name).Number;
          FStack_a4.Value = uVar4._4_4_;
          bVar8 = ::FName::IsWithinBounds((FNameEntryId)uVar4._4_4_);
          FVar7.Data = local_88.Data;
        } while (((bVar8) &&
                 (FVar11.Number = local_a0, FVar11.ComparisonIndex.Value = FStack_a4.Value,
                 FVar11 != (FName)0x0)) &&
                (uVar3._0_1_ = (ERigElementType)local_a8, (ERigElementType)local_a8 != None));
        lVar15 = (longlong)(int)local_80;
        local_78.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Keys.ArrayNum = (int)local_80;
        if ((int)local_80 == 0) {
          local_78.Keys.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,(int)local_80,0,(ForAnyElementType *)&local_78,(int)local_80,
                     &local_78.Keys.ArrayMax);
          memcpy(local_78.Keys.AllocatorInstance.Data,FVar7.Data,lVar15 * 0xc);
        }
        FRigElementKeyCollection::operator=(param_8,&local_78);
        if (local_78.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Keys.AllocatorInstance.Data);
        }
        if (param_4) {
          pFVar12 = FRigElementKeyCollection::MakeReversed(&local_58,param_8);
          FRigElementKeyCollection::operator=(param_8,pFVar12);
          if (local_58.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Keys.AllocatorInstance.Data);
          }
        }
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data);
        }
      }
    }
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=(param_6,&param_8->Keys);
  }
  else {
    FCachedRigElement::UpdateCache(param_7,param_2,param_1->Hierarchy);
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    pFVar10 = FCachedRigElement::GetResolvedKey(param_7);
    uVar1._0_1_ = pFVar10->Type;
    uVar1._1_3_ = *(undefined3 *)&pFVar10->field_0x1;
    uVar1._4_4_ = (pFVar10->Name).ComparisonIndex;
    local_98._0_4_ = SUB84(uVar1,0);
    local_98.Name.Number = (pFVar10->Name).Number;
    FVar13.Number = local_98.Name.Number;
    FVar13.ComparisonIndex.Value = uVar1._4_4_;
    local_98.Name.ComparisonIndex.Value = uVar1._4_4_;
    do {
      if (((param_3) || (FVar13 != param_2->Name)) || ((ERigElementType)uVar1 != param_2->Type)) {
        if (((local_b8.AllocatorInstance.Data <= &local_98) &&
            (&local_98 <
             (FRigElementKey *)(local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayMax * 0xc)
            )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = local_b8.ArrayNum;
        if (local_b8.ArrayNum == local_b8.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
        }
        local_b8.ArrayNum = iVar9 + 1;
        *(ulonglong *)(local_b8.AllocatorInstance.Data + (longlong)iVar9 * 0xc) =
             CONCAT44(local_98.Name.ComparisonIndex.Value,local_98._0_4_);
        *(uint *)(local_b8.AllocatorInstance.Data + (longlong)iVar9 * 0xc + 8) =
             local_98.Name.Number;
      }
      pFVar10 = URigHierarchy::GetActiveParent(param_1->Hierarchy,&local_3c,&local_98,false);
      uVar2._0_1_ = pFVar10->Type;
      uVar2._1_3_ = *(undefined3 *)&pFVar10->field_0x1;
      uVar2._4_4_ = (pFVar10->Name).ComparisonIndex;
      local_98._0_4_ = SUB84(uVar2,0);
      local_98.Name.Number = (pFVar10->Name).Number;
      local_98.Name.ComparisonIndex.Value = uVar2._4_4_;
      bVar8 = ::FName::IsWithinBounds((FNameEntryId)uVar2._4_4_);
      FVar7.Data = local_b8.AllocatorInstance.Data;
    } while (((bVar8) &&
             (FVar13.Number = local_98.Name.Number,
             FVar13.ComparisonIndex.Value = local_98.Name.ComparisonIndex.Value,
             FVar13 != (FName)0x0)) && (uVar1._0_1_ = local_98.Type, local_98.Type != None));
    iVar9 = local_b8.ArrayNum;
    if ((param_4) && (lVar15 = (longlong)(local_b8.ArrayNum / 2), 0 < local_b8.ArrayNum / 2)) {
      FVar14.Data = local_b8.AllocatorInstance.Data;
      pFVar16 = local_b8.AllocatorInstance.Data + (longlong)(local_b8.ArrayNum + -1) * 0xc;
      do {
        uVar3 = *(undefined8 *)pFVar16;
        uVar4 = *(undefined8 *)FVar14.Data;
        uVar5 = (((FRigElementKey *)FVar14.Data)->Name).Number;
        ((FRigElementKey *)FVar14.Data)->Type = (char)uVar3;
        *(int3 *)&((FRigElementKey *)FVar14.Data)->field_0x1 = (int3)((ulonglong)uVar3 >> 8);
        (((FRigElementKey *)FVar14.Data)->Name).ComparisonIndex =
             (FNameEntryId)(int)((ulonglong)uVar3 >> 0x20);
        (((FRigElementKey *)FVar14.Data)->Name).Number = *(uint *)(pFVar16 + 8);
        *(undefined8 *)pFVar16 = uVar4;
        *(uint *)(pFVar16 + 8) = uVar5;
        lVar15 = lVar15 + -1;
        FVar14.Data = (FScriptContainerElement *)((longlong)FVar14.Data + 0xc);
        pFVar16 = pFVar16 + -0xc;
      } while (lVar15 != 0);
    }
    if (param_6 != &local_b8) {
      param_6->ArrayNum = local_b8.ArrayNum;
      if ((local_b8.ArrayNum == 0) && (param_6->ArrayMax == 0)) {
        param_6->ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,local_b8.ArrayNum,param_6->ArrayMax,&param_6->AllocatorInstance,
                   local_b8.ArrayNum,&param_6->ArrayMax);
        if (iVar9 != 0) {
          memcpy((param_6->AllocatorInstance).Data,FVar7.Data,(longlong)iVar9 * 0xc);
        }
      }
    }
    if ((FRigElementKey *)local_b8.AllocatorInstance.Data != (FRigElementKey *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  return;
}

