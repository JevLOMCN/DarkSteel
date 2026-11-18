// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 10

// StaticStruct @ 14a204a20

UScriptStruct * __cdecl FModularRigConnections::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FModularRigConnections.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FModularRigConnections.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FModularRigConnections,(UObject *)pUVar1,
                         L"ModularRigConnections");
  }
  return Z_Registration_Info_UScriptStruct_FModularRigConnections.OuterSingleton;
}

// operator= @ 14a229510

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FModularRigConnections * __thiscall
FModularRigConnections::operator=(FModularRigConnections *this,FModularRigConnections *param_1)

{
  int *piVar1;
  int iVar2;
  FModularRigSingleConnection *pFVar3;
  
  if (this != param_1) {
    DestructItems<FModularRigSingleConnection,int>
              ((FModularRigSingleConnection *)(this->ConnectionList).AllocatorInstance.Data,
               (this->ConnectionList).ArrayNum);
    iVar2 = (param_1->ConnectionList).ArrayNum;
    piVar1 = &(this->ConnectionList).ArrayMax;
    pFVar3 = (FModularRigSingleConnection *)(param_1->ConnectionList).AllocatorInstance.Data;
    (this->ConnectionList).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
      ConstructItems<FModularRigSingleConnection,FModularRigSingleConnection,int>
                ((this->ConnectionList).AllocatorInstance.Data,pFVar3,iVar2);
    }
  }
  if (&this->ReverseConnectionMap != &param_1->ReverseConnectionMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ReverseConnectionMap).field_0x38,
               (int *)&(this->ReverseConnectionMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->ReverseConnectionMap).field_0x38,
               *(int *)&(param_1->ReverseConnectionMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->ReverseConnectionMap,
                (TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->ReverseConnectionMap);
  }
  return this;
}

// AddConnection @ 14a23a3e0

/* WARNING: Removing unreachable block (ram,0x00014a23a56f) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FModularRigConnections::AddConnection
          (FModularRigConnections *this,FRigElementKey *param_1,
          TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  ForElementType<FRigElementKey> FVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this_00;
  ForElementType<FRigElementKey> _Src;
  undefined1 local_res8 [8];
  FRigElementKey *local_res10;
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  local_res10 = param_1;
  RemoveConnection(this,param_1);
  local_60 = (param_1->Name).Number;
  piVar1 = &param_2->ArrayNum;
  local_68._0_1_ = param_1->Type;
  local_68._1_3_ = *(undefined3 *)&param_1->field_0x1;
  local_68._4_4_ = (param_1->Name).ComparisonIndex;
  iVar8 = *piVar1;
  FVar3 = (param_2->AllocatorInstance).SecondaryData;
  local_5c = local_5c & 0xffffff00;
  _Src = (ForElementType<FRigElementKey>)param_2;
  if (FVar3 != (ForElementType<FRigElementKey>)0x0) {
    _Src = FVar3;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = CONCAT44(local_48._4_4_,iVar8);
  if (iVar8 == 0) {
    local_48 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar8,0,&local_50,iVar8,(int *)((longlong)&local_48 + 4));
    memcpy(local_50.Data,(void *)_Src,(longlong)iVar8 * 0xc);
  }
  pFVar4 = (this->ConnectionList).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar4 + (longlong)(this->ConnectionList).ArrayMax * 0x28)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (this->ConnectionList).ArrayNum;
  piVar2 = &(this->ConnectionList).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)this,piVar2);
  }
  (this->ConnectionList).ArrayNum = iVar8 + 1;
  lVar11 = (longlong)iVar8;
  pFVar4 = (this->ConnectionList).AllocatorInstance.Data;
  *(undefined8 *)(pFVar4 + lVar11 * 0x28) = local_68;
  *(uint *)(pFVar4 + lVar11 * 0x28 + 8) = local_60;
  *(ulonglong *)(pFVar4 + lVar11 * 0x28 + 0xc) = CONCAT44(uStack_58,local_5c);
  *(undefined4 *)(pFVar4 + lVar11 * 0x28 + 0x14) = uStack_54;
  *(undefined8 *)(pFVar4 + lVar11 * 0x28 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar4 + lVar11 * 0x28 + 0x18) = local_50.Data;
  *(undefined4 *)(pFVar4 + lVar11 * 0x28 + 0x20) = (undefined4)local_48;
  *(undefined4 *)(pFVar4 + lVar11 * 0x28 + 0x24) = local_48._4_4_;
  local_48 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  FVar3 = (param_2->AllocatorInstance).SecondaryData;
  iVar8 = *piVar1;
  if (FVar3 != (ForElementType<FRigElementKey>)0x0) {
    param_2 = (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              FVar3;
  }
  FVar3 = (ForElementType<FRigElementKey>)((longlong)param_2 + (longlong)iVar8 * 0xc);
  while( true ) {
    if (*piVar1 != iVar8) {
      `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<FRigElementKey>)param_2 == FVar3) break;
    FVar5 = *(FName *)((longlong)param_2 + 4);
    uVar9 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    uVar9 = (uint)*(byte *)param_2 + (uVar9 + FVar5.Number) * 10;
    iVar10 = TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FRigElementKey>
                       ((TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)&this->ReverseConnectionMap,uVar9,(FRigElementKey *)param_2);
    if ((iVar10 == -1) ||
       (lVar11 = *(longlong *)&this->ReverseConnectionMap + (longlong)iVar10 * 0x28, lVar11 == 0)) {
      this_00 = TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                ::EmplaceByHash<FRigElementKey_const_&>
                          ((TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                            *)&this->ReverseConnectionMap,uVar9,(FRigElementKey *)param_2);
    }
    else {
      this_00 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(lVar11 + 0x10);
    }
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
              (this_00,local_res10);
    param_2 = (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
              ((longlong)param_2 + 0xc);
  }
  return;
}

// FindConnectionIndex @ 14a25ab00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FModularRigConnections::FindConnectionIndex(FModularRigConnections *this,FRigElementKey *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement local_18;
  undefined4 uStack_14;
  
  pFVar3 = (this->ConnectionList).AllocatorInstance.Data;
  uVar1 = param_1->Type;
  uVar2 = (param_1->Name).ComparisonIndex;
  if (pFVar3 != pFVar3 + (longlong)(this->ConnectionList).ArrayNum * 0x28) {
    pFVar4 = pFVar3;
    do {
      if ((CONCAT44((param_1->Name).Number,uVar2) == *(longlong *)(pFVar4 + 4)) &&
         ((FScriptContainerElement)uVar1 == *pFVar4)) {
        return (int)(((longlong)pFVar4 - (longlong)pFVar3) / 0x28);
      }
      pFVar4 = pFVar4 + 0x28;
    } while (pFVar4 != pFVar3 + (longlong)(this->ConnectionList).ArrayNum * 0x28);
  }
  return -1;
}

// FindTargetFromConnector @ 14a25c660

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall
FModularRigConnections::FindTargetFromConnector
          (FModularRigConnections *this,FRigElementKey *__return_storage_ptr__,
          FRigElementKey *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FRigElementKey *pFVar8;
  undefined8 uVar9;
  
  uVar6 = FindConnectionIndex(this,param_1);
  if (((int)uVar6 < 0) || ((this->ConnectionList).ArrayNum <= (int)uVar6)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_struct_FRigElementKey___cdecl_FModularRigConnections::FindTargetFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_struct_FRigElementKey___cdecl_FModularRigConnections::FindTargetFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_struct_FRigElementKey___cdecl_FModularRigConnections::FindTargetFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        `public:_struct_FRigElementKey___cdecl_FModularRigConnections::FindTargetFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
        ::__l2::EmptyKey._0_4_ =
             `public:_struct_FRigElementKey___cdecl_FModularRigConnections::FindTargetFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
             ::__l2::EmptyKey._0_4_ & 0xffffff00;
        `public:_struct_FRigElementKey___cdecl_FModularRigConnections::FindTargetFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
        ::__l2::EmptyKey.Name.ComparisonIndex.Value = 0;
        `public:_struct_FRigElementKey___cdecl_FModularRigConnections::FindTargetFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
        ::__l2::EmptyKey.Name.Number = 0;
        _Init_thread_footer(&`public:_struct_FRigElementKey___cdecl_FModularRigConnections::FindTargetFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    uVar9 = CONCAT44(`public:_struct_FRigElementKey___cdecl_FModularRigConnections::FindTargetFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
                     ::__l2::EmptyKey.Name.ComparisonIndex.Value,
                     `public:_struct_FRigElementKey___cdecl_FModularRigConnections::FindTargetFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
                     ::__l2::EmptyKey._0_4_);
    uVar6 = `public:_struct_FRigElementKey___cdecl_FModularRigConnections::FindTargetFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
            ::__l2::EmptyKey.Name.Number;
  }
  else {
    if ((int)uVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FRigElementKey *)(*pcVar4)();
        return pFVar8;
      }
    }
    lVar1 = (longlong)(int)uVar6 * 0x28;
    if (*(int *)((this->ConnectionList).AllocatorInstance.Data + lVar1 + 0x20) < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConnectionList[Index].Targets.Num() >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\ModularRigModel.h"
                         ,0x119,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FRigElementKey *)(*pcVar4)();
        return pFVar8;
      }
    }
    uVar7 = 0;
    if ((int)uVar6 < (this->ConnectionList).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FRigElementKey *)(*pcVar4)();
        return pFVar8;
      }
    }
    pFVar2 = (this->ConnectionList).AllocatorInstance.Data;
    if (*(int *)(pFVar2 + lVar1 + 0x20) < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FRigElementKey *)(*pcVar4)();
        return pFVar8;
      }
    }
    puVar3 = *(undefined8 **)(pFVar2 + lVar1 + 0x18);
    uVar9 = *puVar3;
    uVar6 = *(uint *)(puVar3 + 1);
  }
  __return_storage_ptr__->Type = (char)uVar9;
  *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)((ulonglong)uVar9 >> 8);
  (__return_storage_ptr__->Name).ComparisonIndex = (FNameEntryId)(int)((ulonglong)uVar9 >> 0x20);
  (__return_storage_ptr__->Name).Number = uVar6;
  return __return_storage_ptr__;
}

// FindTargetsFromConnector @ 14a25c840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FRigElementKey,TSizedDefaultAllocator<32>_> * __thiscall
FModularRigConnections::FindTargetsFromConnector
          (FModularRigConnections *this,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRigElementKey *param_1)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar8;
  void *_Src;
  
  uVar6 = FindConnectionIndex(this,param_1);
  if (((int)uVar6 < 0) || ((this->ConnectionList).ArrayNum <= (int)uVar6)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_class_TArray<FRigElementKey,TSizedDefaultAllocator<32>_>___cdecl_FModularRigConnections::FindTargetsFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_class_TArray<FRigElementKey,TSizedDefaultAllocator<32>_>___cdecl_FModularRigConnections::FindTargetsFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_class_TArray<FRigElementKey,TSizedDefaultAllocator<32>_>___cdecl_FModularRigConnections::FindTargetsFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        atexit(`FModularRigConnections::FindTargetsFromConnector'::__l2::
               _dynamic_atexit_destructor_for__EmptyKeys__);
        _Init_thread_footer(&`public:_class_TArray<FRigElementKey,TSizedDefaultAllocator<32>_>___cdecl_FModularRigConnections::FindTargetsFromConnector(FRigElementKey_const&___ptr64)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar2 = DAT_1552ace00;
    _Src = _EmptyKeys;
    __return_storage_ptr__->ArrayNum = DAT_1552ace00;
    if (iVar2 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  else {
    if ((int)uVar6 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    lVar1 = (longlong)(int)uVar6 * 0x28;
    if (*(int *)((this->ConnectionList).AllocatorInstance.Data + lVar1 + 0x20) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ConnectionList[Index].Targets.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\ModularRigModel.h"
                         ,0x125,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    uVar7 = 0;
    if ((int)uVar6 < (this->ConnectionList).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    pFVar3 = (this->ConnectionList).AllocatorInstance.Data;
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar2 = *(int *)(pFVar3 + lVar1 + 0x20);
    _Src = *(void **)(pFVar3 + lVar1 + 0x18);
    __return_storage_ptr__->ArrayNum = iVar2;
    if (iVar2 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0xc);
  return __return_storage_ptr__;
}

// GetModuleConnectionMap @ 14a265770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
* __thiscall
FModularRigConnections::GetModuleConnectionMap
          (FModularRigConnections *this,
          TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
          *__return_storage_ptr__,FName *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FString *pFVar10;
  TStringView<wchar_t> *pTVar11;
  TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar12;
  FName *pFVar13;
  ForElementType<FRigElementKey> FVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  FScriptContainerElement *local_100;
  FRigHierarchyModulePath local_f8;
  FString local_b8;
  FRigElementKey local_a8;
  FString local_98;
  FString local_88;
  TStringView<wchar_t> local_78;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar5 = false;
  bVar4 = false;
  local_100 = (FScriptContainerElement *)((ulonglong)local_100 & 0xffffffff00000000);
  ::FName::ToString(param_1,&local_98);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar1 = (this->ConnectionList).ArrayNum;
  pFVar15 = (this->ConnectionList).AllocatorInstance.Data;
  local_100 = pFVar15 + (longlong)iVar1 * 0x28;
  while( true ) {
    pFVar6 = local_100;
    if ((this->ConnectionList).ArrayNum != iVar1) {
      local_108[0] = 0;
      `TCheckedPointerIterator<FModularRigSingleConnection_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_108);
    }
    if (pFVar15 == pFVar6) break;
    if (*(longlong *)(pFVar15 + 4) == 0) {
      bVar5 = true;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      pFVar10 = &local_b8;
    }
    else {
      bVar4 = true;
      pFVar10 = ::FName::ToString((FName *)(pFVar15 + 4),&local_88);
    }
    local_f8.ModulePath.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ModulePath.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_f8.ModulePath.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
    if ((bVar4) &&
       (bVar4 = false, local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if ((bVar5) &&
       (bVar5 = false, local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
    local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
    local_f8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_f8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
    local_f8._44_8_ = 0xffffffffffffffff;
    local_f8.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
    local_f8.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
         (FNameEntryId)0xffffffff;
    local_f8.CachedElementFName.field0_0x0.TypedValue.Number = 0;
    pTVar11 = FRigHierarchyModulePath::GetModuleName(&local_f8,&local_78);
    iVar2 = pTVar11->Size;
    iVar9 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    if ((iVar2 == iVar9) &&
       ((((iVar2 == 0 || (iVar9 == 0)) ||
         (iVar8 = FGenericPlatformStricmp::Strnicmp
                            (pTVar11->DataPtr,(wchar_t *)local_98.Data.AllocatorInstance.Data,
                             (longlong)iVar9), iVar8 == 0)) && (iVar2 == iVar9)))) {
      local_68.AllocatorInstance.SecondaryData = (ForElementType<FRigElementKey>)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 1;
      if ((&local_68 ==
           (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
           (pFVar15 + 0x18)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                   *)(*pcVar3)();
        return pTVar12;
      }
      iVar2 = *(int *)(pFVar15 + 0x20);
      if (iVar2 != 0) {
        iVar9 = UE::Core::Private::
                ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementKey>_>
                          (0xc,4,iVar2,&local_68.AllocatorInstance,&local_68.ArrayNum,
                           &local_68.ArrayMax);
        FVar14 = (ForElementType<FRigElementKey>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
          FVar14 = local_68.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)((longlong)FVar14 + (longlong)iVar9 * 0xc),
               *(void **)(((TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                            *)(pFVar15 + 0x18))->AllocatorInstance).InlineData,(longlong)iVar2 * 0xc
              );
      }
      pFVar13 = FRigHierarchyModulePath::GetElementFName(&local_f8);
      local_a8.Type = Connector;
      local_a8.Name = *pFVar13;
      TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
      ::
      Emplace<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
                ((TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                  *)__return_storage_ptr__,&local_a8,&local_68);
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
        FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
      }
    }
    if ((local_f8.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_f8.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_f8.CachedElementNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    if ((local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_f8.CachedModuleNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    if (local_f8.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.ModulePath.Data.AllocatorInstance.Data);
    }
    pFVar15 = pFVar15 + 0x28;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PatchOnLoad @ 14a27a9e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FModularRigConnections::PatchOnLoad
          (FModularRigConnections *this,
          TMap<FRigHierarchyModulePath,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigHierarchyModulePath,FName,0>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  ForAnyElementType *pFVar3;
  FRigElementKey *pFVar4;
  FRigElementKey *pFVar5;
  char *pcVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  ulonglong uVar11;
  FRigElementKey *this_00;
  uint *puVar12;
  FRigElementKey *this_01;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  
  this_01 = (FRigElementKey *)(this->ConnectionList).AllocatorInstance.Data;
  local_res20 = (this->ConnectionList).ArrayNum;
  uVar11 = (ulonglong)(int)local_res20;
  puVar12 = &this_01[2].Name.Number;
  pFVar4 = (FRigElementKey *)((longlong)this_01 + uVar11 * 0x28);
  do {
    if ((this->ConnectionList).ArrayNum != (int)uVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FModularRigSingleConnection,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_01 == pFVar4) {
      return;
    }
    if (*puVar12 == 0) {
LAB_14a27aa9f:
      bVar9 = ::FName::IsWithinBounds((FNameEntryId)puVar12[-4]);
      if (((bVar9) && (*(longlong *)(puVar12 + -4) != 0)) &&
         (pFVar1 = (FScriptContainerElement *)(puVar12 + -5), (char)puVar12[-5] != '\0')) {
        puVar2 = puVar12 + 1;
        *puVar12 = 0;
        pFVar3 = (ForAnyElementType *)(puVar12 + -2);
        if ((int)puVar12[1] < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,pFVar3,0,(int *)puVar2);
        }
        if (((pFVar3->Data <= pFVar1) && (pFVar1 < pFVar3->Data + (longlong)(int)*puVar2 * 0xc)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar10 = *puVar12;
        if (uVar10 == *puVar2) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,pFVar3,(int *)puVar2);
        }
        *puVar12 = uVar10 + 1;
        pFVar7 = pFVar3->Data;
        *(undefined8 *)(pFVar7 + (longlong)(int)uVar10 * 0xc) = *(undefined8 *)pFVar1;
        *(uint *)(pFVar7 + (longlong)(int)uVar10 * 0xc + 8) = puVar12[-3];
        (puVar12 + -4)[0] = 0;
        (puVar12 + -4)[1] = 0;
        *pFVar1 = (FScriptContainerElement)0x8;
      }
    }
    else {
      if (((int)*puVar12 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar6 = *(char **)(puVar12 + -2);
      bVar9 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pcVar6 + 4));
      if (((!bVar9) || (*(longlong *)(pcVar6 + 4) == 0)) || (*pcVar6 == '\0')) goto LAB_14a27aa9f;
    }
    FRigElementKey::ConvertToModuleNameFormatInline(this_01,param_1);
    uVar10 = *puVar12;
    this_00 = *(FRigElementKey **)(puVar12 + -2);
    pFVar5 = this_00 + (int)uVar10;
    while( true ) {
      if (*puVar12 != uVar10) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FRigElementKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (this_00 == pFVar5) break;
      FRigElementKey::ConvertToModuleNameFormatInline(this_00,param_1);
      this_00 = this_00 + 1;
    }
    uVar11 = (ulonglong)local_res20;
    this_01 = (FRigElementKey *)&this_01[3].Name;
    puVar12 = puVar12 + 10;
  } while( true );
}

// RemoveConnection @ 14a284900

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FModularRigConnections::RemoveConnection(FModularRigConnections *this,FRigElementKey *param_1)

{
  FRigElementKey *pFVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  void *pvVar6;
  code *pcVar7;
  FRigElementKey *pFVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  FRigElementKey *pFVar23;
  undefined1 local_res8 [8];
  FRigElementKey *local_res10;
  uint local_res18;
  uint local_res20;
  FScriptContainerElement local_68;
  undefined4 uStack_64;
  ForAnyElementType local_58;
  undefined8 local_50;
  
  local_res10 = param_1;
  local_res20 = FindConnectionIndex(this,param_1);
  lVar22 = (longlong)(int)local_res20;
  if ((-1 < (int)local_res20) && ((int)local_res20 < (this->ConnectionList).ArrayNum)) {
    if (((int)local_res20 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar8 = local_res10;
    pFVar4 = (this->ConnectionList).AllocatorInstance.Data;
    lVar22 = lVar22 * 5 + 3;
    local_res18 = *(uint *)(pFVar4 + lVar22 * 8 + 8);
    uVar18 = (ulonglong)(int)local_res18;
    pFVar4 = pFVar4 + lVar22 * 8;
    pFVar23 = *(FRigElementKey **)pFVar4;
    pFVar21 = (FScriptContainerElement *)0x0;
    pFVar1 = pFVar23 + uVar18;
    while( true ) {
      if (*(int *)(pFVar4 + 8) != (int)uVar18) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      uVar11 = local_res20;
      if (pFVar23 == pFVar1) break;
      FVar5 = pFVar23->Name;
      uVar11 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
      iVar12 = TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FRigElementKey>
                         ((TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                           *)&this->ReverseConnectionMap,
                          (uint)pFVar23->Type + (uVar11 + FVar5.Number) * 10,pFVar23);
      if (iVar12 != -1) {
        lVar22 = *(longlong *)&this->ReverseConnectionMap + (longlong)iVar12 * 0x28;
        pFVar16 = (FScriptContainerElement *)(lVar22 + 0x10);
        if (lVar22 == 0) {
          pFVar16 = pFVar21;
        }
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          uVar11 = (pFVar8->Name).Number;
                    /* WARNING: Load size is inaccurate */
          FVar15.Data = *pFVar16;
          uVar2 = pFVar8->Type;
          uVar3 = (pFVar8->Name).ComparisonIndex;
          local_58.Data = (FScriptContainerElement *)0x0;
          local_50 = 0;
          pFVar14 = FVar15.Data + (longlong)*(int *)(pFVar16 + 8) * 0xc;
          FVar13.Data = pFVar21;
          pFVar19 = pFVar21;
          uVar17 = 0;
          FVar9.Data = local_58.Data;
          for (; local_58.Data = FVar13.Data, FVar15.Data != pFVar14;
              FVar15.Data = FVar15.Data + 0xc) {
            if ((*(longlong *)(FVar15.Data + 4) != CONCAT44(uVar11,uVar3)) ||
               (FVar13.Data = local_58.Data, *FVar15.Data != (FScriptContainerElement)uVar2)) {
              FVar13.Data = local_58.Data;
              iVar12 = (int)pFVar19;
              if ((local_58.Data <= FVar15.Data) &&
                 (local_50._4_4_ = (int)((ulonglong)local_50 >> 0x20),
                 lVar22 = (longlong)local_50._4_4_, FVar15.Data < local_58.Data + lVar22 * 0xc)) {
                local_58.Data = FVar9.Data;
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar10) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FVar13.Data = local_58.Data;
                iVar12 = (int)local_50;
                FVar9.Data = local_58.Data;
              }
              local_58.Data = FVar9.Data;
              if (iVar12 == local_50._4_4_) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,&local_58,(int *)((longlong)&local_50 + 4));
                FVar13.Data = local_58.Data;
              }
              local_50 = CONCAT44(local_50._4_4_,iVar12 + 1U);
              *(undefined8 *)(FVar13.Data + (longlong)iVar12 * 0xc) = *(undefined8 *)FVar15.Data;
              *(undefined4 *)(FVar13.Data + (longlong)iVar12 * 0xc + 8) =
                   *(undefined4 *)(FVar15.Data + 8);
              pFVar19 = (FScriptContainerElement *)(ulonglong)(iVar12 + 1U);
              FVar13.Data = local_58.Data;
              FVar9.Data = local_58.Data;
            }
            local_58.Data = FVar9.Data;
            uVar17 = SUB84(pFVar19,0);
            FVar9.Data = local_58.Data;
          }
          pFVar14 = local_58.Data;
          if (pFVar16 != (FScriptContainerElement *)&local_58) {
            if (*(void **)pFVar16 != (void *)0x0) {
              local_58.Data = FVar9.Data;
              FMemory::Free(*(void **)pFVar16);
              uVar17 = (int)local_50;
            }
            *(FScriptContainerElement **)pFVar16 = local_58.Data;
            local_58.Data = (FScriptContainerElement *)0x0;
            *(undefined4 *)(pFVar16 + 8) = uVar17;
            *(int *)(pFVar16 + 0xc) = local_50._4_4_;
            local_50 = 0;
            pFVar14 = pFVar21;
            FVar9.Data = local_58.Data;
          }
          local_58.Data = FVar9.Data;
          if (pFVar14 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar14);
          }
          if ((*(int *)(pFVar16 + 8) == 0) &&
             (*(int *)&(this->ReverseConnectionMap).field_0x8 !=
              *(int *)&(this->ReverseConnectionMap).field_0x34)) {
            FVar5 = pFVar23->Name;
            uVar11 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
            TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FRigElementKey>
                      ((TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->ReverseConnectionMap,
                       (uint)pFVar23->Type + (uVar11 + FVar5.Number) * 10,pFVar23);
          }
        }
      }
      pFVar23 = pFVar23 + 1;
      uVar18 = (ulonglong)local_res18;
    }
    lVar22 = (longlong)(int)local_res20;
    uVar20 = 0;
    if ((int)local_res20 < (this->ConnectionList).ArrayNum) {
      uVar20 = ~local_res20 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar21 = (this->ConnectionList).AllocatorInstance.Data;
    pFVar4 = pFVar21 + lVar22 * 0x28;
    pvVar6 = *(void **)(pFVar21 + lVar22 * 0x28 + 0x18);
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    iVar12 = (this->ConnectionList).ArrayNum + ~uVar11;
    if (iVar12 != 0) {
      memmove(pFVar4,pFVar4 + 0x28,(longlong)iVar12 * 0x28);
    }
    iVar12 = (this->ConnectionList).ArrayNum + -1;
    (this->ConnectionList).ArrayNum = iVar12;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(ForAnyElementType *)this,iVar12,&(this->ConnectionList).ArrayMax);
  }
  return;
}

// UpdateFromConnectionList @ 14a2a48b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FModularRigConnections::UpdateFromConnectionList(FModularRigConnections *this)

{
  FRigElementKey *pFVar1;
  longlong lVar2;
  uint uVar3;
  FName FVar4;
  uint uVar5;
  int iVar6;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this_00;
  ulonglong uVar7;
  FRigElementKey *pFVar8;
  uint *puVar9;
  FRigElementKey *pFVar10;
  undefined1 local_res8 [8];
  uint local_res10;
  FRigElementKey *local_res18;
  
  TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->ReverseConnectionMap);
  local_res10 = (this->ConnectionList).ArrayNum;
  uVar7 = (ulonglong)(int)local_res10;
  pFVar10 = (FRigElementKey *)(this->ConnectionList).AllocatorInstance.Data;
  local_res18 = (FRigElementKey *)((longlong)pFVar10 + uVar7 * 0x28);
  puVar9 = &pFVar10[2].Name.Number;
  while( true ) {
    pFVar1 = local_res18;
    if ((this->ConnectionList).ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<FModularRigSingleConnection,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    uVar3 = *puVar9;
    pFVar8 = *(FRigElementKey **)(puVar9 + -2);
    pFVar1 = pFVar8 + (int)uVar3;
    while( true ) {
      if (*puVar9 != uVar3) {
        `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      FVar4 = pFVar8->Name;
      uVar5 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      uVar5 = (uint)pFVar8->Type + (uVar5 + FVar4.Number) * 10;
      iVar6 = TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FRigElementKey>
                        ((TSet<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)&this->ReverseConnectionMap,uVar5,pFVar8);
      if ((iVar6 == -1) ||
         (lVar2 = *(longlong *)&this->ReverseConnectionMap + (longlong)iVar6 * 0x28, lVar2 == 0)) {
        this_00 = TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                  ::EmplaceByHash<FRigElementKey_const_&>
                            ((TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->ReverseConnectionMap,uVar5,pFVar8);
        TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
                  (this_00,pFVar10);
        pFVar8 = pFVar8 + 1;
      }
      else {
        TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
                  ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10),pFVar10);
        pFVar8 = pFVar8 + 1;
      }
    }
    uVar7 = (ulonglong)local_res10;
    pFVar10 = (FRigElementKey *)&pFVar10[3].Name;
    puVar9 = puVar9 + 10;
  }
  return;
}

