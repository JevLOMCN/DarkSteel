// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 99

// Empty @ 142c7dbc0

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::Empty
          (TTypedElementList<FScriptTypedElementHandle> *this,int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FScriptTypedElementInternalDataPtr local_res8;
  
  iVar4 = (this->ElementHandles).ArrayNum;
  if (iVar4 != 0) {
    NoteListMayChange(this);
  }
  iVar10 = 1;
  if (3 < (uint)param_1) {
    uVar3 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((param_1 < 1) || (iVar10 <= (this->ElementCombinedIds).HashSize)) &&
     ((this->ElementCombinedIds).HashSize <= iVar10)) {
    bVar7 = false;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
              (&this->ElementCombinedIds);
  }
  else {
    bVar7 = true;
  }
  if (-1 < param_1) {
    puVar1 = &(this->ElementCombinedIds).Elements.field_0xc;
    *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,(ForAnyElementType *)&this->ElementCombinedIds,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x34 = 0;
    iVar5 = *(int *)&(this->ElementCombinedIds).Elements.field_0x2c;
    uVar9 = param_1 + 0x1fU & 0xffffffe0;
    *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x28 = 0;
    if ((iVar5 < (int)uVar9) || (0x80 < iVar5)) {
      uVar8 = 0x80;
      if (0x80 < (int)uVar9) {
        uVar8 = uVar9;
      }
      *(uint *)&(this->ElementCombinedIds).Elements.field_0x2c = uVar8;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->ElementCombinedIds).Elements.field_0x10,0);
    }
    if (bVar7) {
      (this->ElementCombinedIds).HashSize = iVar10;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash
                (&this->ElementCombinedIds);
    }
    DestructItems<FScriptTypedElementHandle,int>
              ((FScriptTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data,
               (this->ElementHandles).ArrayNum);
    piVar2 = &(this->ElementHandles).ArrayMax;
    (this->ElementHandles).ArrayNum = 0;
    if (*piVar2 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&(this->ElementHandles).AllocatorInstance,0,piVar2);
    }
    FTypedElementCounter::ClearCounters(&this->ElementCounts);
    if (iVar4 != 0) {
      FTypedElementCounter::ClearCounters(&this->ElementCounts);
      local_res8.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
      NoteListChanged(this,Cleared,(FScriptTypedElementHandle *)&local_res8);
      if (local_res8.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
        (local_res8.ControlBlock)->WeakRefCount = (local_res8.ControlBlock)->WeakRefCount + -1;
        if ((local_res8.ControlBlock)->WeakRefCount == 0) {
          ::operator_delete(local_res8.ControlBlock,0x10);
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reserve @ 142c7e2d0

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::Reserve
          (TTypedElementList<FScriptTypedElementHandle> *this,int param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if ((uint)(*(int *)&(this->ElementCombinedIds).Elements.field_0x8 -
            *(int *)&(this->ElementCombinedIds).Elements.field_0x34) < (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->ElementCombinedIds,param_1);
    if ((uint)param_1 < 4) {
      iVar4 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar3 & 0x1f);
    }
    iVar2 = (this->ElementCombinedIds).HashSize;
    if ((iVar2 == 0) || (iVar2 < iVar4)) {
      (this->ElementCombinedIds).HashSize = iVar4;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash
                (&this->ElementCombinedIds);
      goto LAB_142c7e346;
    }
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
LAB_142c7e346:
  if ((this->ElementHandles).ArrayMax < param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->ElementHandles).AllocatorInstance,(this->ElementHandles).ArrayNum
               ,&(this->ElementHandles).ArrayMax);
  }
  return;
}

// Add<FTestTypedElementData> @ 142c894c0

bool __thiscall
TTypedElementList<FTypedElementHandle>::Add<FTestTypedElementData>
          (TTypedElementList<FTypedElementHandle> *this,
          TTypedElementOwner<FTestTypedElementData> *param_1)

{
  FScriptContainerElement *pFVar1;
  ICounterCategory *pIVar2;
  FTypedElementReferences *pFVar3;
  undefined1 *puVar4;
  TObjectPtr<UObject> this_00;
  FTypedElementInternalData *this_01;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  FTypedElementId *pFVar12;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar13;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar14;
  ICounterCategory *pIVar15;
  UClass *pUVar16;
  FRegisteredElementType *pFVar17;
  UClass *pUVar18;
  TObjectPtr<UObject>_u_0 *pTVar19;
  longlong *plVar20;
  int *piVar21;
  longlong lVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined4 uVar25;
  FTypedElementHandle *pFVar26;
  byte local_res18 [8];
  uint local_res20;
  TTypedElementInternalData<FTestTypedElementData> *local_98;
  int local_90;
  FTypedElementInternalData *local_88;
  int local_80;
  longlong *local_78;
  FTypedElementId_u_0 local_70 [2];
  UTypedElementRegistry *local_68;
  FName local_60;
  longlong local_58;
  uint local_50 [2];
  longlong local_48;
  
  local_98 = param_1->DataPtr;
  if ((local_98 == (TTypedElementInternalData<FTestTypedElementData> *)0x0) ||
     (local_90 = FTypedElementInternalData::AddRef((FTypedElementInternalData *)local_98,true),
     local_98 == (TTypedElementInternalData<FTestTypedElementData> *)0x0)) {
    return false;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  if (local_98 == (TTypedElementInternalData<FTestTypedElementData> *)0x0) {
    pFVar12 = &FTypedElementId::Unset;
  }
  else {
    pFVar12 = (FTypedElementId *)&local_98->_padding_;
  }
  local_70[0] = pFVar12->field0_0x0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
            (&this->ElementCombinedIds,local_50,(bool *)local_70);
  pFVar1 = (this->ElementHandles).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_98) &&
      ((FScriptContainerElement *)&local_98 <
       pFVar1 + (longlong)(this->ElementHandles).ArrayMax * 0x10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar10 = (this->ElementHandles).ArrayNum;
  piVar21 = &(this->ElementHandles).ArrayMax;
  if (iVar10 == *piVar21) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->ElementHandles).AllocatorInstance,piVar21);
  }
  uVar25 = 0xffffffff;
  (this->ElementHandles).ArrayNum = iVar10 + 1;
  pFVar26 = (FTypedElementHandle *)
            ((this->ElementHandles).AllocatorInstance.Data + (longlong)iVar10 * 0x10);
  pFVar26->DataPtr = (FTypedElementInternalData *)local_98;
  pFVar26->ReferenceId = local_90;
  local_98 = (TTypedElementInternalData<FTestTypedElementData> *)0x0;
  local_90 = -1;
  local_68 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ElementCounts);
  if ((local_68 == (UTypedElementRegistry *)0x0) ||
     (pFVar26->DataPtr == (FTypedElementInternalData *)0x0)) goto LAB_142c89b76;
  local_res18[0] = (pFVar26->DataPtr->Id).field0_0x0._s_0.TypeId;
  piVar21 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar21 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_ElementType,"ElementType");
    _Init_thread_footer(&::_TSS0);
  }
  local_60 = NAME_ElementType;
  pTVar13 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(&(this->ElementCounts).CounterCategories,NAME_ElementType);
  if (pTVar13 ==
      (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
       *)0x0) {
    pTVar14 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::AllocateMemoryForEmplace<FName_const_&>
                        (&(this->ElementCounts).CounterCategories,&local_60);
    pTVar13 = (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
               *)&pTVar14->field_0x8;
    *(uint *)&pTVar14->field_0x0 = local_60.ComparisonIndex.Value;
    *(uint *)&pTVar14->field_0x4 = local_60.Number;
    *pTVar13 = (ICounterCategory *)0x0;
LAB_142c896d8:
    pIVar15 = ::operator_new(0x60);
    if (pIVar15 == (ICounterCategory *)0x0) {
      pIVar15 = (ICounterCategory *)0x0;
    }
    else {
      *pIVar15 = (ICounterCategory)&___7__TCounterCategory_E_FTypedElementCounter__6B_;
      GetTypedElementCounterKeyName<unsigned_char>();
      pIVar15[2] = (ICounterCategory)0x0;
      pIVar15[3] = (ICounterCategory)0x0;
      pIVar15[6] = (ICounterCategory)0x0;
      *(undefined4 *)(pIVar15 + 7) = 0;
      *(undefined4 *)&pIVar15[7].field_0x4 = 0x80;
      *(undefined4 *)(pIVar15 + 8) = 0xffffffff;
      *(undefined4 *)&pIVar15[8].field_0x4 = 0;
      pIVar15[10] = (ICounterCategory)0x0;
      *(undefined4 *)(pIVar15 + 0xb) = 0;
    }
    pIVar2 = pTVar13->Ptr;
    pTVar13->Ptr = pIVar15;
    if (pIVar2 != (ICounterCategory *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
  }
  else if (pTVar13->Ptr == (ICounterCategory *)0x0) goto LAB_142c896d8;
  pIVar15 = pTVar13->Ptr;
  pcVar6 = *(code **)((longlong)*pIVar15 + 0x18);
  if ((*piVar21 <
       `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
                    KeyTypeName,L"uint8");
    _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::
                         __l3::_thread_safe_static_guard_0__);
  }
  (*pcVar6)(pIVar15,local_res18,
            `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
            KeyTypeName);
  local_88 = (FTypedElementInternalData *)0x0;
  local_80 = -1;
  pUVar16 = UTypedElementCounterInterface::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  iVar10 = local_80;
  if (local_88 != (FTypedElementInternalData *)0x0) {
    lVar22 = (longlong)local_80;
    LOCK();
    local_88->RefCount = local_88->RefCount + -1;
    UNLOCK();
    pFVar3 = (local_88->References).Ptr;
    if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_80 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
      local_58 = *(longlong *)&(pFVar3->References).field_0x0;
      bVar7 = (byte)iVar10 & 0x1f;
      local_res20 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      puVar23 = &(pFVar3->References).field_0x10;
      if (((iVar10 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar4 = *(undefined1 **)&(pFVar3->References).field_0x20;
      puVar24 = puVar23;
      if (puVar4 != (undefined1 *)0x0) {
        puVar24 = puVar4;
      }
      local_48 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (((*(uint *)(puVar24 + local_48) & local_res20) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(int *)&(pFVar3->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + local_58) = iVar10;
      }
      *(undefined4 *)(lVar22 * 0x108 + local_58) = 0xffffffff;
      if (*(int *)&(pFVar3->References).field_0x34 < 1) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
      }
      *(undefined4 *)(lVar22 * 0x108 + 4 + local_58) = uVar11;
      puVar4 = &(pFVar3->References).field_0x34;
      *(int *)puVar4 = *(int *)puVar4 + 1;
      *(int *)&(pFVar3->References).field_0x30 = iVar10;
      if (((iVar10 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar4 = *(undefined1 **)&(pFVar3->References).field_0x20;
      if (puVar4 != (undefined1 *)0x0) {
        puVar23 = puVar4;
      }
      *(uint *)(puVar23 + local_48) = *(uint *)(puVar23 + local_48) & ~local_res20;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
    }
  }
  local_78 = (longlong *)0x0;
  if (pFVar26->DataPtr != (FTypedElementInternalData *)0x0) {
    pFVar17 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                        (local_68,(pFVar26->DataPtr->Id).field0_0x0._s_0.TypeId);
    if ((pFVar17 == (FRegisteredElementType *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredElementType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    if ((pUVar16 == (UClass *)0x0) ||
       (pUVar18 = Z_Construct_UClass_UInterface_NoRegister(), pUVar18 == (UClass *)0x0)) {
LAB_142c8998a:
      pUVar16 = (UClass *)0x0;
    }
    else {
      iVar10 = (int)pUVar18->_padding_;
      if (((int)pUVar16->_padding_ < iVar10) ||
         ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar10 * 8) !=
          &pUVar18->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (!bVar8) goto LAB_142c8998a;
    }
    pTVar19 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                         (&pFVar17->Interfaces,(FName)pUVar16->_padding_)->field0_0x0;
    plVar20 = local_78;
    if ((pTVar19 != (TObjectPtr<UObject>_u_0 *)0x0) &&
       (this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar19->DebugPtr,
       this_00.field0_0x0 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
      }
      this_01 = pFVar26->DataPtr;
      pUVar16 = UTypedElementCounterInterface::StaticClass();
      plVar20 = UObjectBaseUtility::GetInterfaceAddress
                          ((UObjectBaseUtility *)this_00.field0_0x0,pUVar16);
      local_88 = this_01;
      if (this_01 != (FTypedElementInternalData *)0x0) {
        local_80 = FTypedElementInternalData::AddRef(this_01,true);
      }
    }
    local_78 = plVar20;
    if ((local_88 != (FTypedElementInternalData *)0x0) && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x10))(local_78,&local_88,&this->ElementCounts);
    }
  }
  iVar10 = local_80;
  if (local_88 != (FTypedElementInternalData *)0x0) {
    lVar22 = (longlong)local_80;
    LOCK();
    local_88->RefCount = local_88->RefCount + -1;
    UNLOCK();
    pFVar3 = (local_88->References).Ptr;
    if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_80 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
      lVar5 = *(longlong *)&pFVar3->References;
      puVar23 = &(pFVar3->References).field_0x10;
      bVar7 = (byte)iVar10 & 0x1f;
      local_res20 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if (((iVar10 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar4 = *(undefined1 **)&(pFVar3->References).field_0x20;
      puVar24 = puVar23;
      if (puVar4 != (undefined1 *)0x0) {
        puVar24 = puVar4;
      }
      local_68 = (UTypedElementRegistry *)
                 ((longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      if (((*(uint *)(puVar24 + (longlong)(local_68->RegisteredElementTypes + -6)) & local_res20) ==
           0) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("AllocationFlags[Index]",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                     ,0xc5,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(int *)&(pFVar3->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar5) = iVar10;
      }
      *(undefined4 *)(lVar22 * 0x108 + lVar5) = 0xffffffff;
      if (0 < *(int *)&(pFVar3->References).field_0x34) {
        uVar25 = *(undefined4 *)&(pFVar3->References).field_0x30;
      }
      *(undefined4 *)(lVar22 * 0x108 + 4 + lVar5) = uVar25;
      puVar4 = &(pFVar3->References).field_0x34;
      *(int *)puVar4 = *(int *)puVar4 + 1;
      *(int *)&(pFVar3->References).field_0x30 = iVar10;
      if (((iVar10 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar4 = *(undefined1 **)&(pFVar3->References).field_0x20;
      if (puVar4 != (undefined1 *)0x0) {
        puVar23 = puVar4;
      }
      *(uint *)(puVar23 + (longlong)(local_68->RegisteredElementTypes + -6)) =
           *(uint *)(puVar23 + (longlong)(local_68->RegisteredElementTypes + -6)) & ~local_res20;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
    }
  }
LAB_142c89b76:
  NoteListChanged(this,Added,pFVar26);
  if (local_98 != (TTypedElementInternalData<FTestTypedElementData> *)0x0) {
    FTypedElementInternalData::ReleaseRef((FTypedElementInternalData *)local_98,local_90);
  }
  return true;
}

// Add<void> @ 142c89c50

bool __thiscall
TTypedElementList<FTypedElementHandle>::Add<void>
          (TTypedElementList<FTypedElementHandle> *this,TTypedElementOwner<void> *param_1)

{
  FScriptContainerElement *pFVar1;
  ICounterCategory *pIVar2;
  FTypedElementReferences *pFVar3;
  undefined1 *puVar4;
  TObjectPtr<UObject> this_00;
  FTypedElementInternalData *this_01;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  FTypedElementId *pFVar12;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar13;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar14;
  ICounterCategory *pIVar15;
  UClass *pUVar16;
  FRegisteredElementType *pFVar17;
  UClass *pUVar18;
  TObjectPtr<UObject>_u_0 *pTVar19;
  longlong *plVar20;
  int *piVar21;
  longlong lVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined4 uVar25;
  FTypedElementHandle *pFVar26;
  byte local_res18 [8];
  uint local_res20;
  FTypedElementInternalData *local_98;
  int local_90;
  FTypedElementInternalData *local_88;
  int local_80;
  longlong *local_78;
  FTypedElementId_u_0 local_70 [2];
  UTypedElementRegistry *local_68;
  FName local_60;
  longlong local_58;
  uint local_50 [2];
  longlong local_48;
  
  local_98 = (FTypedElementInternalData *)param_1->DataPtr;
  if ((local_98 == (FTypedElementInternalData *)0x0) ||
     (local_90 = FTypedElementInternalData::AddRef(local_98,true),
     local_98 == (FTypedElementInternalData *)0x0)) {
    return false;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  if (local_98 == (FTypedElementInternalData *)0x0) {
    pFVar12 = &FTypedElementId::Unset;
  }
  else {
    pFVar12 = &local_98->Id;
  }
  local_70[0] = pFVar12->field0_0x0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
            (&this->ElementCombinedIds,local_50,(bool *)local_70);
  pFVar1 = (this->ElementHandles).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_98) &&
      ((FScriptContainerElement *)&local_98 <
       pFVar1 + (longlong)(this->ElementHandles).ArrayMax * 0x10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar10 = (this->ElementHandles).ArrayNum;
  piVar21 = &(this->ElementHandles).ArrayMax;
  if (iVar10 == *piVar21) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->ElementHandles).AllocatorInstance,piVar21);
  }
  uVar25 = 0xffffffff;
  (this->ElementHandles).ArrayNum = iVar10 + 1;
  pFVar26 = (FTypedElementHandle *)
            ((this->ElementHandles).AllocatorInstance.Data + (longlong)iVar10 * 0x10);
  pFVar26->DataPtr = local_98;
  pFVar26->ReferenceId = local_90;
  local_98 = (FTypedElementInternalData *)0x0;
  local_90 = -1;
  local_68 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ElementCounts);
  if ((local_68 == (UTypedElementRegistry *)0x0) ||
     (pFVar26->DataPtr == (FTypedElementInternalData *)0x0)) goto LAB_142c8a306;
  local_res18[0] = (pFVar26->DataPtr->Id).field0_0x0._s_0.TypeId;
  piVar21 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar21 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_ElementType,"ElementType");
    _Init_thread_footer(&::_TSS0);
  }
  local_60 = NAME_ElementType;
  pTVar13 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(&(this->ElementCounts).CounterCategories,NAME_ElementType);
  if (pTVar13 ==
      (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
       *)0x0) {
    pTVar14 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::AllocateMemoryForEmplace<FName_const_&>
                        (&(this->ElementCounts).CounterCategories,&local_60);
    pTVar13 = (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
               *)&pTVar14->field_0x8;
    *(uint *)&pTVar14->field_0x0 = local_60.ComparisonIndex.Value;
    *(uint *)&pTVar14->field_0x4 = local_60.Number;
    *pTVar13 = (ICounterCategory *)0x0;
LAB_142c89e68:
    pIVar15 = ::operator_new(0x60);
    if (pIVar15 == (ICounterCategory *)0x0) {
      pIVar15 = (ICounterCategory *)0x0;
    }
    else {
      *pIVar15 = (ICounterCategory)&___7__TCounterCategory_E_FTypedElementCounter__6B_;
      GetTypedElementCounterKeyName<unsigned_char>();
      pIVar15[2] = (ICounterCategory)0x0;
      pIVar15[3] = (ICounterCategory)0x0;
      pIVar15[6] = (ICounterCategory)0x0;
      *(undefined4 *)(pIVar15 + 7) = 0;
      *(undefined4 *)&pIVar15[7].field_0x4 = 0x80;
      *(undefined4 *)(pIVar15 + 8) = 0xffffffff;
      *(undefined4 *)&pIVar15[8].field_0x4 = 0;
      pIVar15[10] = (ICounterCategory)0x0;
      *(undefined4 *)(pIVar15 + 0xb) = 0;
    }
    pIVar2 = pTVar13->Ptr;
    pTVar13->Ptr = pIVar15;
    if (pIVar2 != (ICounterCategory *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
  }
  else if (pTVar13->Ptr == (ICounterCategory *)0x0) goto LAB_142c89e68;
  pIVar15 = pTVar13->Ptr;
  pcVar6 = *(code **)((longlong)*pIVar15 + 0x18);
  if ((*piVar21 <
       `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
                    KeyTypeName,L"uint8");
    _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::
                         __l3::_thread_safe_static_guard_0__);
  }
  (*pcVar6)(pIVar15,local_res18,
            `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
            KeyTypeName);
  local_88 = (FTypedElementInternalData *)0x0;
  local_80 = -1;
  pUVar16 = UTypedElementCounterInterface::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  iVar10 = local_80;
  if (local_88 != (FTypedElementInternalData *)0x0) {
    lVar22 = (longlong)local_80;
    LOCK();
    local_88->RefCount = local_88->RefCount + -1;
    UNLOCK();
    pFVar3 = (local_88->References).Ptr;
    if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_80 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
      local_58 = *(longlong *)&(pFVar3->References).field_0x0;
      bVar7 = (byte)iVar10 & 0x1f;
      local_res20 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      puVar23 = &(pFVar3->References).field_0x10;
      if (((iVar10 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar4 = *(undefined1 **)&(pFVar3->References).field_0x20;
      puVar24 = puVar23;
      if (puVar4 != (undefined1 *)0x0) {
        puVar24 = puVar4;
      }
      local_48 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (((*(uint *)(puVar24 + local_48) & local_res20) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(int *)&(pFVar3->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + local_58) = iVar10;
      }
      *(undefined4 *)(lVar22 * 0x108 + local_58) = 0xffffffff;
      if (*(int *)&(pFVar3->References).field_0x34 < 1) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
      }
      *(undefined4 *)(lVar22 * 0x108 + 4 + local_58) = uVar11;
      puVar4 = &(pFVar3->References).field_0x34;
      *(int *)puVar4 = *(int *)puVar4 + 1;
      *(int *)&(pFVar3->References).field_0x30 = iVar10;
      if (((iVar10 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar4 = *(undefined1 **)&(pFVar3->References).field_0x20;
      if (puVar4 != (undefined1 *)0x0) {
        puVar23 = puVar4;
      }
      *(uint *)(puVar23 + local_48) = *(uint *)(puVar23 + local_48) & ~local_res20;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
    }
  }
  local_78 = (longlong *)0x0;
  if (pFVar26->DataPtr != (FTypedElementInternalData *)0x0) {
    pFVar17 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                        (local_68,(pFVar26->DataPtr->Id).field0_0x0._s_0.TypeId);
    if ((pFVar17 == (FRegisteredElementType *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredElementType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    if ((pUVar16 == (UClass *)0x0) ||
       (pUVar18 = Z_Construct_UClass_UInterface_NoRegister(), pUVar18 == (UClass *)0x0)) {
LAB_142c8a11a:
      pUVar16 = (UClass *)0x0;
    }
    else {
      iVar10 = (int)pUVar18->_padding_;
      if (((int)pUVar16->_padding_ < iVar10) ||
         ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar10 * 8) !=
          &pUVar18->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (!bVar8) goto LAB_142c8a11a;
    }
    pTVar19 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                         (&pFVar17->Interfaces,(FName)pUVar16->_padding_)->field0_0x0;
    plVar20 = local_78;
    if ((pTVar19 != (TObjectPtr<UObject>_u_0 *)0x0) &&
       (this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar19->DebugPtr,
       this_00.field0_0x0 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
      }
      this_01 = pFVar26->DataPtr;
      pUVar16 = UTypedElementCounterInterface::StaticClass();
      plVar20 = UObjectBaseUtility::GetInterfaceAddress
                          ((UObjectBaseUtility *)this_00.field0_0x0,pUVar16);
      local_88 = this_01;
      if (this_01 != (FTypedElementInternalData *)0x0) {
        local_80 = FTypedElementInternalData::AddRef(this_01,true);
      }
    }
    local_78 = plVar20;
    if ((local_88 != (FTypedElementInternalData *)0x0) && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x10))(local_78,&local_88,&this->ElementCounts);
    }
  }
  iVar10 = local_80;
  if (local_88 != (FTypedElementInternalData *)0x0) {
    lVar22 = (longlong)local_80;
    LOCK();
    local_88->RefCount = local_88->RefCount + -1;
    UNLOCK();
    pFVar3 = (local_88->References).Ptr;
    if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_80 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
      lVar5 = *(longlong *)&pFVar3->References;
      puVar23 = &(pFVar3->References).field_0x10;
      bVar7 = (byte)iVar10 & 0x1f;
      local_res20 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if (((iVar10 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar4 = *(undefined1 **)&(pFVar3->References).field_0x20;
      puVar24 = puVar23;
      if (puVar4 != (undefined1 *)0x0) {
        puVar24 = puVar4;
      }
      local_68 = (UTypedElementRegistry *)
                 ((longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      if (((*(uint *)(puVar24 + (longlong)(local_68->RegisteredElementTypes + -6)) & local_res20) ==
           0) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("AllocationFlags[Index]",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                     ,0xc5,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(int *)&(pFVar3->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar5) = iVar10;
      }
      *(undefined4 *)(lVar22 * 0x108 + lVar5) = 0xffffffff;
      if (0 < *(int *)&(pFVar3->References).field_0x34) {
        uVar25 = *(undefined4 *)&(pFVar3->References).field_0x30;
      }
      *(undefined4 *)(lVar22 * 0x108 + 4 + lVar5) = uVar25;
      puVar4 = &(pFVar3->References).field_0x34;
      *(int *)puVar4 = *(int *)puVar4 + 1;
      *(int *)&(pFVar3->References).field_0x30 = iVar10;
      if (((iVar10 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar4 = *(undefined1 **)&(pFVar3->References).field_0x20;
      if (puVar4 != (undefined1 *)0x0) {
        puVar23 = puVar4;
      }
      *(uint *)(puVar23 + (longlong)(local_68->RegisteredElementTypes + -6)) =
           *(uint *)(puVar23 + (longlong)(local_68->RegisteredElementTypes + -6)) & ~local_res20;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
    }
  }
LAB_142c8a306:
  NoteListChanged(this,Added,pFVar26);
  if (local_98 != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef(local_98,local_90);
  }
  return true;
}

// Append<FTestTypedElementData> @ 142c8ada0

void __thiscall
TTypedElementList<FTypedElementHandle>::Append<FTestTypedElementData>
          (TTypedElementList<FTypedElementHandle> *this,
          TArrayView<TTypedElementOwner<FTestTypedElementData>_const_,int> *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FTypedElementReferences *pFVar3;
  longlong lVar4;
  undefined1 *puVar5;
  TObjectPtr<UObject> this_00;
  FTypedElementInternalData *this_01;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  FTypedElementId *pFVar12;
  UTypedElementRegistry *this_02;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar13;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar14;
  ICounterCategory *pIVar15;
  UClass *pUVar16;
  FRegisteredElementType *pFVar17;
  UClass *pUVar18;
  TObjectPtr<UObject>_u_0 *pTVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  uint uVar22;
  ICounterCategory *pIVar23;
  TTypedElementOwner<FTestTypedElementData> *pTVar24;
  int *piVar25;
  undefined1 *puVar26;
  longlong lVar27;
  TTypedElementOwner<FTestTypedElementData> *pTVar28;
  FTypedElementHandle *pFVar29;
  FTypedElementCounter *this_03;
  FLegacySync *this_04;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar30;
  byte local_res18 [8];
  uint local_res20;
  TTypedElementInternalData<FTestTypedElementData> *local_c8;
  int local_c0;
  FTypedElementInternalData *local_b8;
  int local_b0;
  longlong *local_a8;
  FTypedElementId_u_0 local_a0 [2];
  FName local_98;
  FTypedElementHandle *local_90;
  TTypedElementOwner<FTestTypedElementData> *local_88;
  uint local_80 [2];
  UTypedElementRegistry *local_78;
  FTypedElementCounter *local_70;
  TTypedElementOwner<FTestTypedElementData> *local_68;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *local_60;
  int *local_58;
  FLegacySync *local_50;
  
  this_04 = (this->LegacySync).Ptr;
  if (this_04 != (FLegacySync *)0x0) {
    this_04->NumOpenBatchOperations = this_04->NumOpenBatchOperations + 1;
  }
  iVar9 = param_1->ArrayNum;
  uVar22 = (this->ElementHandles).ArrayNum + iVar9;
  local_50 = this_04;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Reserve
            (&this->ElementCombinedIds,uVar22);
  pTVar30 = &this->ElementHandles;
  local_60 = pTVar30;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  piVar25 = &(this->ElementHandles).ArrayMax;
  local_58 = piVar25;
  if (*piVar25 < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar22,&pTVar30->AllocatorInstance,(this->ElementHandles).ArrayNum,piVar25);
  }
  pTVar24 = param_1->DataPtr;
  pTVar28 = pTVar24 + iVar9;
  local_88 = pTVar24;
  local_68 = pTVar28;
  if (pTVar24 != pTVar28) {
    do {
      local_c8 = pTVar24->DataPtr;
      local_c0 = 0xffffffff;
      if ((local_c8 != (TTypedElementInternalData<FTestTypedElementData> *)0x0) &&
         (local_88 = pTVar24,
         local_c0 = FTypedElementInternalData::AddRef((FTypedElementInternalData *)local_c8,true),
         local_c8 != (TTypedElementInternalData<FTestTypedElementData> *)0x0)) {
        TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                     *)&this->OnPreChangeDelegate,this);
        if (local_c8 == (TTypedElementInternalData<FTestTypedElementData> *)0x0) {
          pFVar12 = &FTypedElementId::Unset;
        }
        else {
          pFVar12 = (FTypedElementId *)&local_c8->_padding_;
        }
        local_a0[0] = pFVar12->field0_0x0;
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
        Emplace<unsigned_int>(&this->ElementCombinedIds,local_80,(bool *)local_a0);
        pFVar2 = (pTVar30->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 < pFVar2 + (longlong)*piVar25 * 0x10)) &&
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
        iVar9 = pTVar30->ArrayNum;
        if (iVar9 == *piVar25) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar30->AllocatorInstance,piVar25);
        }
        this_03 = &this->ElementCounts;
        pTVar30->ArrayNum = iVar9 + 1;
        pFVar29 = (FTypedElementHandle *)
                  ((pTVar30->AllocatorInstance).Data + (longlong)iVar9 * 0x10);
        pFVar29->DataPtr = (FTypedElementInternalData *)local_c8;
        pFVar29->ReferenceId = local_c0;
        local_c8 = (TTypedElementInternalData<FTestTypedElementData> *)0x0;
        local_c0 = -1;
        local_90 = pFVar29;
        local_70 = this_03;
        this_02 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_03);
        local_78 = this_02;
        if ((this_02 != (UTypedElementRegistry *)0x0) &&
           (pFVar29->DataPtr != (FTypedElementInternalData *)0x0)) {
          local_res18[0] = (pFVar29->DataPtr->Id).field0_0x0._s_0.TypeId;
          piVar25 = (int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c);
          if ((*piVar25 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::FName::FName(&NAME_ElementType,"ElementType");
            _Init_thread_footer(&::_TSS0);
          }
          local_98 = NAME_ElementType;
          pTVar13 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                    ::Find(&(this->ElementCounts).CounterCategories,NAME_ElementType);
          if (pTVar13 ==
              (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
               *)0x0) {
            pTVar14 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                      ::AllocateMemoryForEmplace<FName_const_&>
                                (&(this->ElementCounts).CounterCategories,&local_98);
            pTVar13 = (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
                       *)&pTVar14->field_0x8;
            *(uint *)&pTVar14->field_0x0 = local_98.ComparisonIndex.Value;
            *(uint *)&pTVar14->field_0x4 = local_98.Number;
            *pTVar13 = (ICounterCategory *)0x0;
LAB_142c8b028:
            pIVar23 = (ICounterCategory *)0x0;
            pIVar15 = ::operator_new(0x60);
            if (pIVar15 != (ICounterCategory *)0x0) {
              *pIVar15 = (ICounterCategory)&___7__TCounterCategory_E_FTypedElementCounter__6B_;
              GetTypedElementCounterKeyName<unsigned_char>();
              pIVar15[2] = (ICounterCategory)0x0;
              pIVar15[3] = (ICounterCategory)0x0;
              pIVar15[6] = (ICounterCategory)0x0;
              *(undefined4 *)(pIVar15 + 7) = 0;
              *(undefined4 *)&pIVar15[7].field_0x4 = 0x80;
              *(undefined4 *)(pIVar15 + 8) = 0xffffffff;
              *(undefined4 *)&pIVar15[8].field_0x4 = 0;
              pIVar15[10] = (ICounterCategory)0x0;
              *(undefined4 *)(pIVar15 + 0xb) = 0;
              pIVar23 = pIVar15;
            }
            pIVar15 = pTVar13->Ptr;
            pTVar13->Ptr = pIVar23;
            if (pIVar15 != (ICounterCategory *)0x0) {
              (**(code **)*pIVar15)(pIVar15,1);
            }
          }
          else if (pTVar13->Ptr == (ICounterCategory *)0x0) goto LAB_142c8b028;
          pIVar23 = pTVar13->Ptr;
          pcVar6 = *(code **)((longlong)*pIVar23 + 0x18);
          if ((*piVar25 <
               `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
               _thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                                   ::__l3::_thread_safe_static_guard_0__),
             `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
             _thread_safe_static_guard_0__ == -1)) {
            ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                            ::__l3::KeyTypeName,L"uint8");
            _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                                 ::__l3::_thread_safe_static_guard_0__);
          }
          (*pcVar6)(pIVar23,local_res18,
                    `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
                    KeyTypeName);
          local_b8 = (FTypedElementInternalData *)0x0;
          local_b0 = -1;
          local_a8 = (longlong *)0x0;
          pUVar16 = UTypedElementCounterInterface::StaticClass();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar16);
          }
          iVar9 = local_b0;
          if (local_b8 != (FTypedElementInternalData *)0x0) {
            lVar27 = (longlong)local_b0;
            LOCK();
            local_b8->RefCount = local_b8->RefCount + -1;
            UNLOCK();
            pFVar3 = (local_b8->References).Ptr;
            if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_b0 != -1)) {
              EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
              lVar4 = *(longlong *)&(pFVar3->References).field_0x0;
              puVar26 = &(pFVar3->References).field_0x10;
              bVar7 = (byte)iVar9 & 0x1f;
              local_res20 = 1 << bVar7 | 1U >> 0x20 - bVar7;
              if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
              puVar21 = puVar26;
              if (puVar5 != (undefined1 *)0x0) {
                puVar21 = puVar5;
              }
              iVar10 = iVar9;
              if (iVar9 < 0) {
                iVar10 = iVar9 + 0x1f;
              }
              lVar1 = (longlong)(iVar10 >> 5) * 4;
              if (((*(uint *)(puVar21 + lVar1) & local_res20) == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("AllocationFlags[Index]",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                     ,0xc5,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (*(int *)&(pFVar3->References).field_0x34 != 0) {
                *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar4) = iVar9
                ;
              }
              *(undefined4 *)(lVar27 * 0x108 + lVar4) = 0xffffffff;
              if (*(int *)&(pFVar3->References).field_0x34 < 1) {
                uVar11 = 0xffffffff;
              }
              else {
                uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
              }
              *(undefined4 *)(lVar27 * 0x108 + 4 + lVar4) = uVar11;
              puVar5 = &(pFVar3->References).field_0x34;
              *(int *)puVar5 = *(int *)puVar5 + 1;
              *(int *)&(pFVar3->References).field_0x30 = iVar9;
              if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
              if (puVar5 != (undefined1 *)0x0) {
                puVar26 = puVar5;
              }
              *(uint *)(puVar26 + lVar1) = *(uint *)(puVar26 + lVar1) & ~local_res20;
              LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
              pFVar29 = local_90;
              this_03 = local_70;
              this_02 = local_78;
            }
          }
          local_b8 = (FTypedElementInternalData *)0x0;
          local_b0 = -1;
          local_a8 = (longlong *)0x0;
          if (pFVar29->DataPtr == (FTypedElementInternalData *)0x0) {
LAB_142c8b389:
            iVar9 = local_b0;
            if (local_b8 != (FTypedElementInternalData *)0x0) {
              lVar27 = (longlong)local_b0;
              LOCK();
              local_b8->RefCount = local_b8->RefCount + -1;
              UNLOCK();
              pFVar3 = (local_b8->References).Ptr;
              if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_b0 != -1)) {
                EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
                lVar4 = *(longlong *)&pFVar3->References;
                puVar26 = &(pFVar3->References).field_0x10;
                bVar7 = (byte)iVar9 & 0x1f;
                uVar22 = 1 << bVar7 | 1U >> 0x20 - bVar7;
                if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
                puVar21 = puVar26;
                if (puVar5 != (undefined1 *)0x0) {
                  puVar21 = puVar5;
                }
                iVar10 = iVar9;
                if (iVar9 < 0) {
                  iVar10 = iVar9 + 0x1f;
                }
                lVar1 = (longlong)(iVar10 >> 5) * 4;
                if (((*(uint *)(puVar21 + lVar1) & uVar22) == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("AllocationFlags[Index]",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                       ,0xc5,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (*(int *)&(pFVar3->References).field_0x34 != 0) {
                  *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar4) =
                       iVar9;
                }
                *(undefined4 *)(lVar27 * 0x108 + lVar4) = 0xffffffff;
                if (*(int *)&(pFVar3->References).field_0x34 < 1) {
                  uVar11 = 0xffffffff;
                }
                else {
                  uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
                }
                *(undefined4 *)(lVar27 * 0x108 + 4 + lVar4) = uVar11;
                puVar5 = &(pFVar3->References).field_0x34;
                *(int *)puVar5 = *(int *)puVar5 + 1;
                *(int *)&(pFVar3->References).field_0x30 = iVar9;
                if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
                if (puVar5 != (undefined1 *)0x0) {
                  puVar26 = puVar5;
                }
                *(uint *)(puVar26 + lVar1) = *(uint *)(puVar26 + lVar1) & ~uVar22;
                LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
                pFVar29 = local_90;
              }
            }
          }
          else {
            pFVar17 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                                (this_02,(pFVar29->DataPtr->Id).field0_0x0._s_0.TypeId);
            if ((pFVar17 == (FRegisteredElementType *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RegisteredElementType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                                   ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar8
               )) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((pUVar16 == (UClass *)0x0) ||
               (pUVar18 = Z_Construct_UClass_UInterface_NoRegister(), pUVar18 == (UClass *)0x0)) {
LAB_142c8b2fa:
              pUVar16 = (UClass *)0x0;
            }
            else {
              iVar9 = (int)pUVar18->_padding_;
              if (((int)pUVar16->_padding_ < iVar9) ||
                 ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar9 * 8) !=
                  &pUVar18->_padding_)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (!bVar8) goto LAB_142c8b2fa;
            }
            pTVar19 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>
                       ::Find(&pFVar17->Interfaces,(FName)pUVar16->_padding_)->field0_0x0;
            plVar20 = local_a8;
            if ((pTVar19 != (TObjectPtr<UObject>_u_0 *)0x0) &&
               (this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar19->DebugPtr,
               this_00.field0_0x0 != (UObject *)0x0)) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
              }
              this_01 = pFVar29->DataPtr;
              pUVar16 = UTypedElementCounterInterface::StaticClass();
              plVar20 = UObjectBaseUtility::GetInterfaceAddress
                                  ((UObjectBaseUtility *)this_00.field0_0x0,pUVar16);
              local_b8 = this_01;
              if (this_01 != (FTypedElementInternalData *)0x0) {
                local_b0 = FTypedElementInternalData::AddRef(this_01,true);
              }
            }
            local_a8 = plVar20;
            if (local_b8 != (FTypedElementInternalData *)0x0) {
              if (local_a8 != (longlong *)0x0) {
                (**(code **)(*local_a8 + 0x10))(local_a8,&local_b8,this_03);
              }
              goto LAB_142c8b389;
            }
          }
          local_a8 = (longlong *)0x0;
          local_b8 = (FTypedElementInternalData *)0x0;
          local_b0 = 0xffffffff;
          pTVar24 = local_88;
          pTVar28 = local_68;
        }
        NoteListChanged(this,Added,pFVar29);
        piVar25 = local_58;
        pTVar30 = local_60;
        if (local_c8 != (TTypedElementInternalData<FTestTypedElementData> *)0x0) {
          FTypedElementInternalData::ReleaseRef((FTypedElementInternalData *)local_c8,local_c0);
        }
      }
      pTVar24 = pTVar24 + 1;
      local_c8 = (TTypedElementInternalData<FTestTypedElementData> *)0x0;
      local_c0 = 0xffffffff;
      this_04 = local_50;
      local_88 = pTVar24;
    } while (pTVar24 != pTVar28);
  }
  if (this_04 != (FLegacySync *)0x0) {
    FLegacySync::EndBatchOperation(this_04,true);
  }
  return;
}

// Append<void> @ 142c8b750

void __thiscall
TTypedElementList<FTypedElementHandle>::Append<void>
          (TTypedElementList<FTypedElementHandle> *this,
          TArrayView<TTypedElementOwner<void>_const_,int> *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FTypedElementReferences *pFVar3;
  longlong lVar4;
  undefined1 *puVar5;
  TObjectPtr<UObject> this_00;
  FTypedElementInternalData *this_01;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  FTypedElementId *pFVar12;
  UTypedElementRegistry *this_02;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar13;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar14;
  ICounterCategory *pIVar15;
  UClass *pUVar16;
  FRegisteredElementType *pFVar17;
  UClass *pUVar18;
  TObjectPtr<UObject>_u_0 *pTVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  uint uVar22;
  ICounterCategory *pIVar23;
  TTypedElementOwner<void> *pTVar24;
  int *piVar25;
  undefined1 *puVar26;
  longlong lVar27;
  TTypedElementOwner<void> *pTVar28;
  FTypedElementHandle *pFVar29;
  FTypedElementCounter *this_03;
  FLegacySync *this_04;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar30;
  byte local_res18 [8];
  uint local_res20;
  FTypedElementInternalData *local_c8;
  int local_c0;
  FTypedElementInternalData *local_b8;
  int local_b0;
  longlong *local_a8;
  FTypedElementId_u_0 local_a0 [2];
  FName local_98;
  FTypedElementHandle *local_90;
  TTypedElementOwner<void> *local_88;
  uint local_80 [2];
  UTypedElementRegistry *local_78;
  FTypedElementCounter *local_70;
  TTypedElementOwner<void> *local_68;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *local_60;
  int *local_58;
  FLegacySync *local_50;
  
  this_04 = (this->LegacySync).Ptr;
  if (this_04 != (FLegacySync *)0x0) {
    this_04->NumOpenBatchOperations = this_04->NumOpenBatchOperations + 1;
  }
  iVar9 = param_1->ArrayNum;
  uVar22 = (this->ElementHandles).ArrayNum + iVar9;
  local_50 = this_04;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Reserve
            (&this->ElementCombinedIds,uVar22);
  pTVar30 = &this->ElementHandles;
  local_60 = pTVar30;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  piVar25 = &(this->ElementHandles).ArrayMax;
  local_58 = piVar25;
  if (*piVar25 < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar22,&pTVar30->AllocatorInstance,(this->ElementHandles).ArrayNum,piVar25);
  }
  pTVar24 = param_1->DataPtr;
  pTVar28 = pTVar24 + iVar9;
  local_88 = pTVar24;
  local_68 = pTVar28;
  if (pTVar24 != pTVar28) {
    do {
      local_c8 = (FTypedElementInternalData *)pTVar24->DataPtr;
      local_c0 = 0xffffffff;
      if ((local_c8 != (FTypedElementInternalData *)0x0) &&
         (local_88 = pTVar24, local_c0 = FTypedElementInternalData::AddRef(local_c8,true),
         local_c8 != (FTypedElementInternalData *)0x0)) {
        TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                     *)&this->OnPreChangeDelegate,this);
        if (local_c8 == (FTypedElementInternalData *)0x0) {
          pFVar12 = &FTypedElementId::Unset;
        }
        else {
          pFVar12 = &local_c8->Id;
        }
        local_a0[0] = pFVar12->field0_0x0;
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
        Emplace<unsigned_int>(&this->ElementCombinedIds,local_80,(bool *)local_a0);
        pFVar2 = (pTVar30->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 < pFVar2 + (longlong)*piVar25 * 0x10)) &&
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
        iVar9 = pTVar30->ArrayNum;
        if (iVar9 == *piVar25) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar30->AllocatorInstance,piVar25);
        }
        this_03 = &this->ElementCounts;
        pTVar30->ArrayNum = iVar9 + 1;
        pFVar29 = (FTypedElementHandle *)
                  ((pTVar30->AllocatorInstance).Data + (longlong)iVar9 * 0x10);
        pFVar29->DataPtr = local_c8;
        pFVar29->ReferenceId = local_c0;
        local_c8 = (FTypedElementInternalData *)0x0;
        local_c0 = -1;
        local_90 = pFVar29;
        local_70 = this_03;
        this_02 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_03);
        local_78 = this_02;
        if ((this_02 != (UTypedElementRegistry *)0x0) &&
           (pFVar29->DataPtr != (FTypedElementInternalData *)0x0)) {
          local_res18[0] = (pFVar29->DataPtr->Id).field0_0x0._s_0.TypeId;
          piVar25 = (int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c);
          if ((*piVar25 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::FName::FName(&NAME_ElementType,"ElementType");
            _Init_thread_footer(&::_TSS0);
          }
          local_98 = NAME_ElementType;
          pTVar13 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                    ::Find(&(this->ElementCounts).CounterCategories,NAME_ElementType);
          if (pTVar13 ==
              (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
               *)0x0) {
            pTVar14 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                      ::AllocateMemoryForEmplace<FName_const_&>
                                (&(this->ElementCounts).CounterCategories,&local_98);
            pTVar13 = (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
                       *)&pTVar14->field_0x8;
            *(uint *)&pTVar14->field_0x0 = local_98.ComparisonIndex.Value;
            *(uint *)&pTVar14->field_0x4 = local_98.Number;
            *pTVar13 = (ICounterCategory *)0x0;
LAB_142c8b9d8:
            pIVar23 = (ICounterCategory *)0x0;
            pIVar15 = ::operator_new(0x60);
            if (pIVar15 != (ICounterCategory *)0x0) {
              *pIVar15 = (ICounterCategory)&___7__TCounterCategory_E_FTypedElementCounter__6B_;
              GetTypedElementCounterKeyName<unsigned_char>();
              pIVar15[2] = (ICounterCategory)0x0;
              pIVar15[3] = (ICounterCategory)0x0;
              pIVar15[6] = (ICounterCategory)0x0;
              *(undefined4 *)(pIVar15 + 7) = 0;
              *(undefined4 *)&pIVar15[7].field_0x4 = 0x80;
              *(undefined4 *)(pIVar15 + 8) = 0xffffffff;
              *(undefined4 *)&pIVar15[8].field_0x4 = 0;
              pIVar15[10] = (ICounterCategory)0x0;
              *(undefined4 *)(pIVar15 + 0xb) = 0;
              pIVar23 = pIVar15;
            }
            pIVar15 = pTVar13->Ptr;
            pTVar13->Ptr = pIVar23;
            if (pIVar15 != (ICounterCategory *)0x0) {
              (**(code **)*pIVar15)(pIVar15,1);
            }
          }
          else if (pTVar13->Ptr == (ICounterCategory *)0x0) goto LAB_142c8b9d8;
          pIVar23 = pTVar13->Ptr;
          pcVar6 = *(code **)((longlong)*pIVar23 + 0x18);
          if ((*piVar25 <
               `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
               _thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                                   ::__l3::_thread_safe_static_guard_0__),
             `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
             _thread_safe_static_guard_0__ == -1)) {
            ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                            ::__l3::KeyTypeName,L"uint8");
            _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                                 ::__l3::_thread_safe_static_guard_0__);
          }
          (*pcVar6)(pIVar23,local_res18,
                    `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
                    KeyTypeName);
          local_b8 = (FTypedElementInternalData *)0x0;
          local_b0 = -1;
          local_a8 = (longlong *)0x0;
          pUVar16 = UTypedElementCounterInterface::StaticClass();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar16);
          }
          iVar9 = local_b0;
          if (local_b8 != (FTypedElementInternalData *)0x0) {
            lVar27 = (longlong)local_b0;
            LOCK();
            local_b8->RefCount = local_b8->RefCount + -1;
            UNLOCK();
            pFVar3 = (local_b8->References).Ptr;
            if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_b0 != -1)) {
              EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
              lVar4 = *(longlong *)&(pFVar3->References).field_0x0;
              puVar26 = &(pFVar3->References).field_0x10;
              bVar7 = (byte)iVar9 & 0x1f;
              local_res20 = 1 << bVar7 | 1U >> 0x20 - bVar7;
              if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
              puVar21 = puVar26;
              if (puVar5 != (undefined1 *)0x0) {
                puVar21 = puVar5;
              }
              iVar10 = iVar9;
              if (iVar9 < 0) {
                iVar10 = iVar9 + 0x1f;
              }
              lVar1 = (longlong)(iVar10 >> 5) * 4;
              if (((*(uint *)(puVar21 + lVar1) & local_res20) == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("AllocationFlags[Index]",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                     ,0xc5,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (*(int *)&(pFVar3->References).field_0x34 != 0) {
                *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar4) = iVar9
                ;
              }
              *(undefined4 *)(lVar27 * 0x108 + lVar4) = 0xffffffff;
              if (*(int *)&(pFVar3->References).field_0x34 < 1) {
                uVar11 = 0xffffffff;
              }
              else {
                uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
              }
              *(undefined4 *)(lVar27 * 0x108 + 4 + lVar4) = uVar11;
              puVar5 = &(pFVar3->References).field_0x34;
              *(int *)puVar5 = *(int *)puVar5 + 1;
              *(int *)&(pFVar3->References).field_0x30 = iVar9;
              if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
              if (puVar5 != (undefined1 *)0x0) {
                puVar26 = puVar5;
              }
              *(uint *)(puVar26 + lVar1) = *(uint *)(puVar26 + lVar1) & ~local_res20;
              LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
              pFVar29 = local_90;
              this_03 = local_70;
              this_02 = local_78;
            }
          }
          local_b8 = (FTypedElementInternalData *)0x0;
          local_b0 = -1;
          local_a8 = (longlong *)0x0;
          if (pFVar29->DataPtr == (FTypedElementInternalData *)0x0) {
LAB_142c8bd39:
            iVar9 = local_b0;
            if (local_b8 != (FTypedElementInternalData *)0x0) {
              lVar27 = (longlong)local_b0;
              LOCK();
              local_b8->RefCount = local_b8->RefCount + -1;
              UNLOCK();
              pFVar3 = (local_b8->References).Ptr;
              if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_b0 != -1)) {
                EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
                lVar4 = *(longlong *)&pFVar3->References;
                puVar26 = &(pFVar3->References).field_0x10;
                bVar7 = (byte)iVar9 & 0x1f;
                uVar22 = 1 << bVar7 | 1U >> 0x20 - bVar7;
                if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
                puVar21 = puVar26;
                if (puVar5 != (undefined1 *)0x0) {
                  puVar21 = puVar5;
                }
                iVar10 = iVar9;
                if (iVar9 < 0) {
                  iVar10 = iVar9 + 0x1f;
                }
                lVar1 = (longlong)(iVar10 >> 5) * 4;
                if (((*(uint *)(puVar21 + lVar1) & uVar22) == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("AllocationFlags[Index]",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                       ,0xc5,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (*(int *)&(pFVar3->References).field_0x34 != 0) {
                  *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar4) =
                       iVar9;
                }
                *(undefined4 *)(lVar27 * 0x108 + lVar4) = 0xffffffff;
                if (*(int *)&(pFVar3->References).field_0x34 < 1) {
                  uVar11 = 0xffffffff;
                }
                else {
                  uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
                }
                *(undefined4 *)(lVar27 * 0x108 + 4 + lVar4) = uVar11;
                puVar5 = &(pFVar3->References).field_0x34;
                *(int *)puVar5 = *(int *)puVar5 + 1;
                *(int *)&(pFVar3->References).field_0x30 = iVar9;
                if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
                if (puVar5 != (undefined1 *)0x0) {
                  puVar26 = puVar5;
                }
                *(uint *)(puVar26 + lVar1) = *(uint *)(puVar26 + lVar1) & ~uVar22;
                LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
                pFVar29 = local_90;
              }
            }
          }
          else {
            pFVar17 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                                (this_02,(pFVar29->DataPtr->Id).field0_0x0._s_0.TypeId);
            if ((pFVar17 == (FRegisteredElementType *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RegisteredElementType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                                   ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar8
               )) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((pUVar16 == (UClass *)0x0) ||
               (pUVar18 = Z_Construct_UClass_UInterface_NoRegister(), pUVar18 == (UClass *)0x0)) {
LAB_142c8bcaa:
              pUVar16 = (UClass *)0x0;
            }
            else {
              iVar9 = (int)pUVar18->_padding_;
              if (((int)pUVar16->_padding_ < iVar9) ||
                 ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar9 * 8) !=
                  &pUVar18->_padding_)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (!bVar8) goto LAB_142c8bcaa;
            }
            pTVar19 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>
                       ::Find(&pFVar17->Interfaces,(FName)pUVar16->_padding_)->field0_0x0;
            plVar20 = local_a8;
            if ((pTVar19 != (TObjectPtr<UObject>_u_0 *)0x0) &&
               (this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar19->DebugPtr,
               this_00.field0_0x0 != (UObject *)0x0)) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
              }
              this_01 = pFVar29->DataPtr;
              pUVar16 = UTypedElementCounterInterface::StaticClass();
              plVar20 = UObjectBaseUtility::GetInterfaceAddress
                                  ((UObjectBaseUtility *)this_00.field0_0x0,pUVar16);
              local_b8 = this_01;
              if (this_01 != (FTypedElementInternalData *)0x0) {
                local_b0 = FTypedElementInternalData::AddRef(this_01,true);
              }
            }
            local_a8 = plVar20;
            if (local_b8 != (FTypedElementInternalData *)0x0) {
              if (local_a8 != (longlong *)0x0) {
                (**(code **)(*local_a8 + 0x10))(local_a8,&local_b8,this_03);
              }
              goto LAB_142c8bd39;
            }
          }
          local_a8 = (longlong *)0x0;
          local_b8 = (FTypedElementInternalData *)0x0;
          local_b0 = 0xffffffff;
          pTVar24 = local_88;
          pTVar28 = local_68;
        }
        NoteListChanged(this,Added,pFVar29);
        piVar25 = local_58;
        pTVar30 = local_60;
        if (local_c8 != (FTypedElementInternalData *)0x0) {
          FTypedElementInternalData::ReleaseRef(local_c8,local_c0);
        }
      }
      pTVar24 = pTVar24 + 1;
      local_c8 = (FTypedElementInternalData *)0x0;
      local_c0 = 0xffffffff;
      this_04 = local_50;
      local_88 = pTVar24;
    } while (pTVar24 != pTVar28);
  }
  if (this_04 != (FLegacySync *)0x0) {
    FLegacySync::EndBatchOperation(this_04,true);
  }
  return;
}

// ForEachElement<ITestTypedElementInterfaceA> @ 142c8dc30

void __thiscall
TTypedElementList<FTypedElementHandle>::ForEachElement<ITestTypedElementInterfaceA>
          (TTypedElementList<FTypedElementHandle> *this,
          TFunctionRef<bool___cdecl(TTypedElement<ITestTypedElementInterfaceA>_const_&)> *param_1)

{
  uint *puVar1;
  longlong lVar2;
  LPCRITICAL_SECTION p_Var3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  code *pcVar5;
  byte bVar6;
  FTypedElementHandle *pFVar7;
  undefined4 uVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  UTypedElementRegistry *this_00;
  HANDLE *ppvVar12;
  ulonglong uVar13;
  FTypedElementHandle *pFVar14;
  longlong lVar15;
  uint uVar16;
  LONG LVar17;
  undefined1 local_res18 [8];
  uint local_res20;
  TObjectPtr<UClass>_u_0 local_78;
  FTypedElementHandle *local_70;
  TTypedElement<void> local_68;
  
  local_68._0_8_ = 0;
  local_68._16_8_ = 0;
  local_res20 = (this->ElementHandles).ArrayNum;
  uVar13 = (ulonglong)(int)local_res20;
  pFVar14 = (FTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data;
  local_70 = pFVar14 + uVar13;
  local_68._8_4_ = -1;
  while( true ) {
    pFVar7 = local_70;
    LVar17 = -1;
    if ((this->ElementHandles).ArrayNum != (int)uVar13) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FTypedElementHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar14 == pFVar7) break;
    this_00 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
    local_78.DebugPtr = Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78.DebugPtr != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_78.DebugPtr);
    }
    uVar8 = local_68._8_4_;
    if (this_00 == (UTypedElementRegistry *)0x0) {
      if (local_68._0_8_ != 0) {
        lVar15 = (longlong)(int)local_68._8_4_;
        LOCK();
        *(int *)(local_68._0_8_ + 0xc) = *(int *)(local_68._0_8_ + 0xc) + -1;
        UNLOCK();
        p_Var3 = *(LPCRITICAL_SECTION *)(local_68._0_8_ + 0x10);
        if ((p_Var3 != (LPCRITICAL_SECTION)0x0) && (local_68._8_4_ != -1)) {
          EnterCriticalSection(p_Var3);
          p_Var4 = p_Var3[1].DebugInfo;
          bVar6 = (byte)uVar8 & 0x1f;
          uVar16 = 1 << bVar6 | 1U >> 0x20 - bVar6;
          if ((((int)uVar8 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          ppvVar12 = &p_Var3[1].OwningThread;
          if ((HANDLE *)p_Var3[1].SpinCount != (HANDLE *)0x0) {
            ppvVar12 = (HANDLE *)p_Var3[1].SpinCount;
          }
          iVar11 = uVar8;
          if ((int)uVar8 < 0) {
            iVar11 = uVar8 + 0x1f;
          }
          lVar2 = (longlong)(iVar11 >> 5) * 4;
          if (((*(uint *)(lVar2 + (longlong)ppvVar12) & uVar16) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AllocationFlags[Index]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                  ,0xc5,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (p_Var3[2].RecursionCount != 0) {
            *(undefined4 *)((longlong)p_Var3[2].LockCount * 0x108 + (longlong)p_Var4) = uVar8;
          }
          *(undefined4 *)(lVar15 * 0x108 + (longlong)p_Var4) = 0xffffffff;
          if (p_Var3[2].RecursionCount < 1) {
            LVar17 = -1;
          }
          else {
            LVar17 = p_Var3[2].LockCount;
          }
          *(LONG *)(lVar15 * 0x108 + 4 + (longlong)p_Var4) = LVar17;
          p_Var3[2].RecursionCount = p_Var3[2].RecursionCount + 1;
          p_Var3[2].LockCount = uVar8;
          if ((((int)uVar8 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          ppvVar12 = &p_Var3[1].OwningThread;
          if ((HANDLE *)p_Var3[1].SpinCount != (HANDLE *)0x0) {
            ppvVar12 = (HANDLE *)p_Var3[1].SpinCount;
          }
          puVar1 = (uint *)(lVar2 + (longlong)ppvVar12);
          *puVar1 = *puVar1 & ~uVar16;
          LeaveCriticalSection(p_Var3);
        }
      }
      local_68._8_4_ = -1;
      local_68._0_8_ = 0;
      local_68._16_8_ = 0;
    }
    else {
      UTypedElementRegistry::GetElementImpl<void>
                (this_00,pFVar14,(TSubclassOf<UInterface> *)&local_78.ObjectPtr,&local_68);
      if (((local_68._0_8_ != 0) && (local_68._16_8_ != 0)) &&
         (cVar9 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8), cVar9 == '\0')) break;
    }
    pFVar14 = pFVar14 + 1;
    uVar13 = (ulonglong)local_res20;
  }
  uVar8 = local_68._8_4_;
  if (local_68._0_8_ != 0) {
    lVar15 = (longlong)(int)local_68._8_4_;
    LOCK();
    *(int *)(local_68._0_8_ + 0xc) = *(int *)(local_68._0_8_ + 0xc) + -1;
    UNLOCK();
    p_Var3 = *(LPCRITICAL_SECTION *)(local_68._0_8_ + 0x10);
    if ((p_Var3 != (LPCRITICAL_SECTION)0x0) && (local_68._8_4_ != -1)) {
      EnterCriticalSection(p_Var3);
      p_Var4 = p_Var3[1].DebugInfo;
      bVar6 = (byte)uVar8 & 0x1f;
      uVar16 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((((int)uVar8 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar2 = (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4;
      ppvVar12 = (HANDLE *)p_Var3[1].SpinCount;
      if ((HANDLE *)p_Var3[1].SpinCount == (HANDLE *)0x0) {
        ppvVar12 = &p_Var3[1].OwningThread;
      }
      if (((*(uint *)((longlong)ppvVar12 + lVar2) & uVar16) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("AllocationFlags[Index]",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                              ,0xc5,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (p_Var3[2].RecursionCount != 0) {
        *(undefined4 *)((longlong)p_Var3[2].LockCount * 0x108 + (longlong)p_Var4) = uVar8;
      }
      *(undefined4 *)(lVar15 * 0x108 + (longlong)p_Var4) = 0xffffffff;
      if (0 < p_Var3[2].RecursionCount) {
        LVar17 = p_Var3[2].LockCount;
      }
      *(LONG *)(lVar15 * 0x108 + 4 + (longlong)p_Var4) = LVar17;
      p_Var3[2].RecursionCount = p_Var3[2].RecursionCount + 1;
      p_Var3[2].LockCount = uVar8;
      if ((((int)uVar8 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ppvVar12 = (HANDLE *)p_Var3[1].SpinCount;
      if ((HANDLE *)p_Var3[1].SpinCount == (HANDLE *)0x0) {
        ppvVar12 = &p_Var3[1].OwningThread;
      }
      puVar1 = (uint *)((longlong)ppvVar12 + lVar2);
      *puVar1 = *puVar1 & ~uVar16;
      LeaveCriticalSection(p_Var3);
    }
  }
  return;
}

// ForEachElement<ITestTypedElementInterfaceC> @ 142c8e020

void __thiscall
TTypedElementList<FTypedElementHandle>::ForEachElement<ITestTypedElementInterfaceC>
          (TTypedElementList<FTypedElementHandle> *this,
          TFunctionRef<bool___cdecl(TTypedElement<ITestTypedElementInterfaceC>_const_&)> *param_1)

{
  uint *puVar1;
  longlong lVar2;
  LPCRITICAL_SECTION p_Var3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  code *pcVar5;
  byte bVar6;
  FTypedElementHandle *pFVar7;
  undefined4 uVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  UTypedElementRegistry *this_00;
  HANDLE *ppvVar12;
  ulonglong uVar13;
  FTypedElementHandle *pFVar14;
  longlong lVar15;
  uint uVar16;
  LONG LVar17;
  undefined1 local_res18 [8];
  uint local_res20;
  TObjectPtr<UClass>_u_0 local_78;
  FTypedElementHandle *local_70;
  TTypedElement<void> local_68;
  
  local_68._0_8_ = 0;
  local_68._16_8_ = 0;
  local_res20 = (this->ElementHandles).ArrayNum;
  uVar13 = (ulonglong)(int)local_res20;
  pFVar14 = (FTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data;
  local_70 = pFVar14 + uVar13;
  local_68._8_4_ = -1;
  while( true ) {
    pFVar7 = local_70;
    LVar17 = -1;
    if ((this->ElementHandles).ArrayNum != (int)uVar13) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FTypedElementHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar14 == pFVar7) break;
    this_00 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
    local_78.DebugPtr = Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78.DebugPtr != (UClass *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_78.DebugPtr);
    }
    uVar8 = local_68._8_4_;
    if (this_00 == (UTypedElementRegistry *)0x0) {
      if (local_68._0_8_ != 0) {
        lVar15 = (longlong)(int)local_68._8_4_;
        LOCK();
        *(int *)(local_68._0_8_ + 0xc) = *(int *)(local_68._0_8_ + 0xc) + -1;
        UNLOCK();
        p_Var3 = *(LPCRITICAL_SECTION *)(local_68._0_8_ + 0x10);
        if ((p_Var3 != (LPCRITICAL_SECTION)0x0) && (local_68._8_4_ != -1)) {
          EnterCriticalSection(p_Var3);
          p_Var4 = p_Var3[1].DebugInfo;
          bVar6 = (byte)uVar8 & 0x1f;
          uVar16 = 1 << bVar6 | 1U >> 0x20 - bVar6;
          if ((((int)uVar8 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          ppvVar12 = &p_Var3[1].OwningThread;
          if ((HANDLE *)p_Var3[1].SpinCount != (HANDLE *)0x0) {
            ppvVar12 = (HANDLE *)p_Var3[1].SpinCount;
          }
          iVar11 = uVar8;
          if ((int)uVar8 < 0) {
            iVar11 = uVar8 + 0x1f;
          }
          lVar2 = (longlong)(iVar11 >> 5) * 4;
          if (((*(uint *)(lVar2 + (longlong)ppvVar12) & uVar16) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AllocationFlags[Index]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                  ,0xc5,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (p_Var3[2].RecursionCount != 0) {
            *(undefined4 *)((longlong)p_Var3[2].LockCount * 0x108 + (longlong)p_Var4) = uVar8;
          }
          *(undefined4 *)(lVar15 * 0x108 + (longlong)p_Var4) = 0xffffffff;
          if (p_Var3[2].RecursionCount < 1) {
            LVar17 = -1;
          }
          else {
            LVar17 = p_Var3[2].LockCount;
          }
          *(LONG *)(lVar15 * 0x108 + 4 + (longlong)p_Var4) = LVar17;
          p_Var3[2].RecursionCount = p_Var3[2].RecursionCount + 1;
          p_Var3[2].LockCount = uVar8;
          if ((((int)uVar8 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          ppvVar12 = &p_Var3[1].OwningThread;
          if ((HANDLE *)p_Var3[1].SpinCount != (HANDLE *)0x0) {
            ppvVar12 = (HANDLE *)p_Var3[1].SpinCount;
          }
          puVar1 = (uint *)(lVar2 + (longlong)ppvVar12);
          *puVar1 = *puVar1 & ~uVar16;
          LeaveCriticalSection(p_Var3);
        }
      }
      local_68._8_4_ = -1;
      local_68._0_8_ = 0;
      local_68._16_8_ = 0;
    }
    else {
      UTypedElementRegistry::GetElementImpl<void>
                (this_00,pFVar14,(TSubclassOf<UInterface> *)&local_78.ObjectPtr,&local_68);
      if (((local_68._0_8_ != 0) && (local_68._16_8_ != 0)) &&
         (cVar9 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8), cVar9 == '\0')) break;
    }
    pFVar14 = pFVar14 + 1;
    uVar13 = (ulonglong)local_res20;
  }
  uVar8 = local_68._8_4_;
  if (local_68._0_8_ != 0) {
    lVar15 = (longlong)(int)local_68._8_4_;
    LOCK();
    *(int *)(local_68._0_8_ + 0xc) = *(int *)(local_68._0_8_ + 0xc) + -1;
    UNLOCK();
    p_Var3 = *(LPCRITICAL_SECTION *)(local_68._0_8_ + 0x10);
    if ((p_Var3 != (LPCRITICAL_SECTION)0x0) && (local_68._8_4_ != -1)) {
      EnterCriticalSection(p_Var3);
      p_Var4 = p_Var3[1].DebugInfo;
      bVar6 = (byte)uVar8 & 0x1f;
      uVar16 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((((int)uVar8 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar2 = (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4;
      ppvVar12 = (HANDLE *)p_Var3[1].SpinCount;
      if ((HANDLE *)p_Var3[1].SpinCount == (HANDLE *)0x0) {
        ppvVar12 = &p_Var3[1].OwningThread;
      }
      if (((*(uint *)((longlong)ppvVar12 + lVar2) & uVar16) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("AllocationFlags[Index]",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                              ,0xc5,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (p_Var3[2].RecursionCount != 0) {
        *(undefined4 *)((longlong)p_Var3[2].LockCount * 0x108 + (longlong)p_Var4) = uVar8;
      }
      *(undefined4 *)(lVar15 * 0x108 + (longlong)p_Var4) = 0xffffffff;
      if (0 < p_Var3[2].RecursionCount) {
        LVar17 = p_Var3[2].LockCount;
      }
      *(LONG *)(lVar15 * 0x108 + 4 + (longlong)p_Var4) = LVar17;
      p_Var3[2].RecursionCount = p_Var3[2].RecursionCount + 1;
      p_Var3[2].LockCount = uVar8;
      if ((((int)uVar8 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ppvVar12 = (HANDLE *)p_Var3[1].SpinCount;
      if ((HANDLE *)p_Var3[1].SpinCount == (HANDLE *)0x0) {
        ppvVar12 = &p_Var3[1].OwningThread;
      }
      puVar1 = (uint *)((longlong)ppvVar12 + lVar2);
      *puVar1 = *puVar1 & ~uVar16;
      LeaveCriticalSection(p_Var3);
    }
  }
  return;
}

// TTypedElementList<FScriptTypedElementHandle> @ 142c95590

TTypedElementList<FScriptTypedElementHandle> * __thiscall
TTypedElementList<FScriptTypedElementHandle>::TTypedElementList<FScriptTypedElementHandle>
          (TTypedElementList<FScriptTypedElementHandle> *this,UTypedElementRegistry *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTypedElementList<FScriptTypedElementHandle> *pTVar3;
  UObject *pUVar4;
  TTypedElementList<FScriptTypedElementHandle> *local_res8;
  UTypedElementRegistry *local_res10;
  UTypedElementRegistry *local_res18;
  TTypedElementList<FScriptTypedElementHandle> *local_res20;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UTypedElementRegistry *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Registry).WeakPtr = (FWeakObjectPtr)0x0;
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UTypedElementRegistry *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Registry).WeakPtr,(FObjectPtr)&local_res18);
  *(undefined8 *)&(this->ElementCombinedIds).Elements = 0;
  *(undefined8 *)&(this->ElementCombinedIds).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ElementCombinedIds).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x34 = 0;
  (this->ElementCombinedIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ElementCombinedIds).HashSize = 0;
  (this->ElementHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementHandles).ArrayNum = 0;
  (this->ElementHandles).ArrayMax = 0;
  (this->ElementCounts).Registry.WeakPtr = (FWeakObjectPtr)0x0;
  (this->ElementCounts).CounterCategories.Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ElementCounts).CounterCategories.Pairs.ArrayNum = 0;
  (this->ElementCounts).CounterCategories.Pairs.ArrayMax = 0;
  *(undefined8 *)&this->OnPreChangeDelegate = 0;
  *(undefined8 *)&(this->OnPreChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnPreChangeDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnChangedDelegate = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x18 = 2;
  this->bHasPendingNotify = false;
  (this->LegacySync).Ptr = (FLegacySync *)0x0;
  if (param_1 == (UTypedElementRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementList.cpp"
                       ,0x94,L"Registry is null!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TTypedElementList<FScriptTypedElementHandle> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ElementCounts);
  if (pUVar4 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Registry.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementCounter.cpp"
                       ,0xf,L"Initialize has already been called!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TTypedElementList<FScriptTypedElementHandle> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (param_1 == (UTypedElementRegistry *)0x0)) {
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->ElementCounts,(FObjectPtr)&local_res10);
    if (param_1 == (UTypedElementRegistry *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementCounter.cpp"
                         ,0x11,L"Registry is null!");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TTypedElementList<FScriptTypedElementHandle> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->ElementCounts,(FObjectPtr)&local_res10);
  }
  local_res20 = this;
  TSet<TTypedElementList<FScriptTypedElementHandle>_*,DefaultKeyFuncs<TTypedElementList<FScriptTypedElementHandle>_*,0>,FDefaultSetAllocator>
  ::Emplace<TTypedElementList<FScriptTypedElementHandle>_*_const_&>
            (&param_1->ActiveScriptElementLists,&local_res8,(bool *)&local_res20);
  return this;
}

// TTypedElementList<FTypedElementHandle> @ 142c95770

TTypedElementList<FTypedElementHandle> * __thiscall
TTypedElementList<FTypedElementHandle>::TTypedElementList<FTypedElementHandle>
          (TTypedElementList<FTypedElementHandle> *this,UTypedElementRegistry *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TTypedElementList<FTypedElementHandle> *pTVar3;
  UObject *pUVar4;
  TTypedElementList<FTypedElementHandle> *local_res8;
  UTypedElementRegistry *local_res10;
  TTypedElementList<FTypedElementHandle> *local_res18;
  UTypedElementRegistry *local_res20;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UTypedElementRegistry *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Registry).WeakPtr = (FWeakObjectPtr)0x0;
  local_res20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UTypedElementRegistry *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Registry).WeakPtr,(FObjectPtr)&local_res20);
  *(undefined8 *)&(this->ElementCombinedIds).Elements = 0;
  *(undefined8 *)&(this->ElementCombinedIds).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ElementCombinedIds).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x34 = 0;
  (this->ElementCombinedIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ElementCombinedIds).HashSize = 0;
  (this->ElementHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementHandles).ArrayNum = 0;
  (this->ElementHandles).ArrayMax = 0;
  (this->ElementCounts).Registry.WeakPtr = (FWeakObjectPtr)0x0;
  (this->ElementCounts).CounterCategories.Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ElementCounts).CounterCategories.Pairs.ArrayNum = 0;
  (this->ElementCounts).CounterCategories.Pairs.ArrayMax = 0;
  *(undefined8 *)&this->OnPreChangeDelegate = 0;
  *(undefined8 *)&(this->OnPreChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnPreChangeDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnChangedDelegate = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedDelegate).field_0x18 = 2;
  this->bHasPendingNotify = false;
  (this->LegacySync).Ptr = (FLegacySync *)0x0;
  if (param_1 == (UTypedElementRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementList.cpp"
                       ,0x94,L"Registry is null!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TTypedElementList<FTypedElementHandle> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ElementCounts);
  if (pUVar4 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Registry.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementCounter.cpp"
                       ,0xf,L"Initialize has already been called!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TTypedElementList<FTypedElementHandle> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (param_1 == (UTypedElementRegistry *)0x0)) {
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->ElementCounts,(FObjectPtr)&local_res10);
    if (param_1 == (UTypedElementRegistry *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementCounter.cpp"
                         ,0x11,L"Registry is null!");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TTypedElementList<FTypedElementHandle> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->ElementCounts,(FObjectPtr)&local_res10);
  }
  lpCriticalSection = &param_1->ActiveElementListsCS;
  local_res18 = this;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<TTypedElementList<FTypedElementHandle>_*,DefaultKeyFuncs<TTypedElementList<FTypedElementHandle>_*,0>,FDefaultSetAllocator>
    ::Emplace<TTypedElementList<FTypedElementHandle>_*_const_&>
              (&param_1->ActiveElementLists,&local_res8,(bool *)&local_res18);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ~TTypedElementList<FScriptTypedElementHandle> @ 142c99a10

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::~TTypedElementList<FScriptTypedElementHandle>
          (TTypedElementList<FScriptTypedElementHandle> *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FLegacySync *pFVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<FSetElementId> FVar8;
  longlong *plVar9;
  bool bVar10;
  UObject *pUVar11;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  iVar3 = (this->ElementHandles).ArrayNum;
  if (iVar3 != 0) {
    TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                 *)&this->OnPreChangeDelegate,this);
  }
  bVar10 = 1 < (this->ElementCombinedIds).HashSize;
  if (!bVar10) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements
              (&this->ElementCombinedIds);
  }
  puVar1 = &(this->ElementCombinedIds).Elements.field_0xc;
  *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->ElementCombinedIds,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x30 = 0xffffffff;
  iVar4 = *(int *)&(this->ElementCombinedIds).Elements.field_0x2c;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ElementCombinedIds).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ElementCombinedIds).Elements.field_0x10,0);
  }
  if (bVar10) {
    (this->ElementCombinedIds).HashSize = 1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash
              (&this->ElementCombinedIds);
  }
  DestructItems<FScriptTypedElementHandle,int>
            ((FScriptTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data,
             (this->ElementHandles).ArrayNum);
  piVar2 = &(this->ElementHandles).ArrayMax;
  (this->ElementHandles).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ElementHandles).AllocatorInstance,0,piVar2);
  }
  FTypedElementCounter::ClearCounters(&this->ElementCounts);
  if (iVar3 != 0) {
    FTypedElementCounter::ClearCounters(&this->ElementCounts);
    pFVar5 = (this->LegacySync).Ptr;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    this->bHasPendingNotify = true;
    if (pFVar5 != (FLegacySync *)0x0) {
      FLegacySync::Private_EmitSyncEvent(pFVar5,Cleared,(FScriptTypedElementHandle *)&local_res8);
    }
    if ((local_res8 != (FWeakObjectPtr)0x0) &&
       (*(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1,
       *(int *)((longlong)local_res8 + 8) == 0)) {
      ::operator_delete((void *)local_res8,0x10);
    }
  }
  pFVar5 = (this->LegacySync).Ptr;
  if (pFVar5 != (FLegacySync *)0x0) {
    (this->LegacySync).Ptr = (FLegacySync *)0x0;
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(pFVar5->OnSyncEventDelegate).field_0x8,
               *(int *)&(pFVar5->OnSyncEventDelegate).field_0x10);
    pvVar6 = *(void **)&(pFVar5->OnSyncEventDelegate).field_0x8;
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pFVar5->OnSyncEventDelegate);
    ::operator_delete(pFVar5,0x30);
  }
  pUVar11 = FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
  if (pUVar11 != (UObject *)0x0) {
    TSet<TTypedElementList<FScriptTypedElementHandle>_*,DefaultKeyFuncs<TTypedElementList<FScriptTypedElementHandle>_*,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTypedElementList<FScriptTypedElementHandle>_*,DefaultKeyFuncs<TTypedElementList<FScriptTypedElementHandle>_*,0>,FDefaultSetAllocator>
              *)&pUVar11[0x37].field_0x10,this);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (this->Registry).WeakPtr = local_res8;
  }
  pFVar5 = (this->LegacySync).Ptr;
  if (pFVar5 != (FLegacySync *)0x0) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(pFVar5->OnSyncEventDelegate).field_0x8,
               *(int *)&(pFVar5->OnSyncEventDelegate).field_0x10);
    pvVar6 = *(void **)&(pFVar5->OnSyncEventDelegate).field_0x8;
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pFVar5->OnSyncEventDelegate);
    ::operator_delete(pFVar5,0x30);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedDelegate).field_0x8,*(int *)&(this->OnChangedDelegate).field_0x10);
  pvVar6 = *(void **)&(this->OnChangedDelegate).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPreChangeDelegate).field_0x8,*(int *)&(this->OnPreChangeDelegate).field_0x10
            );
  pvVar6 = *(void **)&(this->OnPreChangeDelegate).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreChangeDelegate);
  DestructItems<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,int>
            ((TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
              *)(this->ElementCounts).CounterCategories.Pairs.AllocatorInstance.Data,
             (this->ElementCounts).CounterCategories.Pairs.ArrayNum);
  pFVar7 = (this->ElementCounts).CounterCategories.Pairs.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  DestructItems<FScriptTypedElementHandle,int>
            ((FScriptTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data,
             (this->ElementHandles).ArrayNum);
  pFVar7 = (this->ElementHandles).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  (this->ElementCombinedIds).HashSize = 0;
  FVar8 = (this->ElementCombinedIds).Hash.SecondaryData;
  if (FVar8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ElementCombinedIds).Elements);
  plVar9 = (longlong *)this->_padding_;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  return;
}

// ~TTypedElementList<FTypedElementHandle> @ 142c99d20

void __thiscall
TTypedElementList<FTypedElementHandle>::~TTypedElementList<FTypedElementHandle>
          (TTypedElementList<FTypedElementHandle> *this)

{
  int *piVar1;
  undefined1 *lpCriticalSection;
  int iVar2;
  FLegacySync *pFVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<FSetElementId> FVar6;
  longlong *plVar7;
  UObject *pUVar8;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  Empty(this,0);
  pFVar3 = (this->LegacySync).Ptr;
  if (pFVar3 != (FLegacySync *)0x0) {
    (this->LegacySync).Ptr = (FLegacySync *)0x0;
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(pFVar3->OnSyncEventDelegate).field_0x8,
               *(int *)&(pFVar3->OnSyncEventDelegate).field_0x10);
    pvVar4 = *(void **)&(pFVar3->OnSyncEventDelegate).field_0x8;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pFVar3->OnSyncEventDelegate);
    ::operator_delete(pFVar3,0x30);
  }
  pUVar8 = FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
  if (pUVar8 != (UObject *)0x0) {
    lpCriticalSection = &pUVar8[0x34].field_0x10;
    if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<TTypedElementList<FTypedElementHandle>_*,DefaultKeyFuncs<TTypedElementList<FTypedElementHandle>_*,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTypedElementList<FTypedElementHandle>_*,DefaultKeyFuncs<TTypedElementList<FTypedElementHandle>_*,0>,FDefaultSetAllocator>
              *)&pUVar8[0x35].field_0x10,this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (this->Registry).WeakPtr = local_res8;
  }
  pFVar3 = (this->LegacySync).Ptr;
  if (pFVar3 != (FLegacySync *)0x0) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(pFVar3->OnSyncEventDelegate).field_0x8,
               *(int *)&(pFVar3->OnSyncEventDelegate).field_0x10);
    pvVar4 = *(void **)&(pFVar3->OnSyncEventDelegate).field_0x8;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pFVar3->OnSyncEventDelegate);
    ::operator_delete(pFVar3,0x30);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedDelegate).field_0x8,*(int *)&(this->OnChangedDelegate).field_0x10);
  pvVar4 = *(void **)&(this->OnChangedDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPreChangeDelegate).field_0x8,*(int *)&(this->OnPreChangeDelegate).field_0x10
            );
  pvVar4 = *(void **)&(this->OnPreChangeDelegate).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreChangeDelegate);
  DestructItems<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,int>
            ((TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
              *)(this->ElementCounts).CounterCategories.Pairs.AllocatorInstance.Data,
             (this->ElementCounts).CounterCategories.Pairs.ArrayNum);
  pFVar5 = (this->ElementCounts).CounterCategories.Pairs.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FTypedElementHandle,int>
            ((FTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data,
             (this->ElementHandles).ArrayNum);
  pFVar5 = (this->ElementHandles).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  (this->ElementCombinedIds).HashSize = 0;
  FVar6 = (this->ElementCombinedIds).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ElementCombinedIds).Elements);
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// operator[] @ 142c9c5d0

FScriptTypedElementHandle __thiscall
TTypedElementList<FScriptTypedElementHandle>::operator[]
          (TTypedElementList<FScriptTypedElementHandle> *this,int param_1)

{
  FTypedElementInternalData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptTypedElementHandle FVar5;
  undefined4 in_register_00000014;
  FScriptTypedElementInternalDataPtr FVar6;
  uint in_R8D;
  
  FVar6.ControlBlock._4_4_ = in_register_00000014;
  FVar6.ControlBlock._0_4_ = param_1;
  uVar4 = 0;
  if ((int)in_R8D < (this->ElementHandles).ArrayNum) {
    uVar4 = ~in_R8D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar2)();
      return (FScriptTypedElementHandle)FVar5.InternalData.ControlBlock;
    }
  }
  pFVar1 = *(FTypedElementInternalData **)
            ((this->ElementHandles).AllocatorInstance.Data + (longlong)(int)in_R8D * 8);
  (FVar6.ControlBlock)->Data = pFVar1;
  if (pFVar1 != (FTypedElementInternalData *)0x0) {
    (pFVar1->Id).field0_0x0.CombinedId = (pFVar1->Id).field0_0x0.CombinedId + 1;
  }
  return (FScriptTypedElementHandle)(FScriptTypedElementInternalDataPtr)FVar6.ControlBlock;
}

// operator[] @ 142c9c660

FTypedElementHandle * __thiscall
TTypedElementList<FTypedElementHandle>::operator[]
          (TTypedElementList<FTypedElementHandle> *this,FTypedElementHandle *__return_storage_ptr__,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  FTypedElementInternalData *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FTypedElementHandle *pFVar6;
  
  uVar4 = 0;
  if (param_1 < (this->ElementHandles).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTypedElementHandle *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar1 = (this->ElementHandles).AllocatorInstance.Data;
  __return_storage_ptr__->DataPtr = (FTypedElementInternalData *)0x0;
  __return_storage_ptr__->ReferenceId = -1;
  this_00 = *(FTypedElementInternalData **)(pFVar1 + (longlong)param_1 * 0x10);
  if (this_00 != (FTypedElementInternalData *)0x0) {
    __return_storage_ptr__->DataPtr = this_00;
    iVar5 = FTypedElementInternalData::AddRef(this_00,true);
    __return_storage_ptr__->ReferenceId = iVar5;
  }
  return __return_storage_ptr__;
}

// operator() @ 142c9df60

bool __thiscall
`TTypedElementList<FScriptTypedElementHandle>::GetElementHandles'::__l2::<lambda_1>::operator()
          (void *this,FScriptTypedElementHandle *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  
  pFVar2 = *(ForAnyElementType **)this;
  if ((pFVar2->Data <= param_1) &&
     (param_1 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  pFVar3 = (param_1->InternalData).ControlBlock;
  *(FScriptTypedElementInternalDataControlBlock **)(pFVar2->Data + (longlong)iVar7 * 8) = pFVar3;
  if (pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) {
    pFVar3->WeakRefCount = pFVar3->WeakRefCount + 1;
  }
  return true;
}

// operator() @ 142c9e020

bool __thiscall
`TTypedElementList<FTypedElementHandle>::GetElementHandles'::__l2::<lambda_1>::operator()
          (void *this,FTypedElementHandle *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FTypedElementInternalData *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((FTypedElementHandle *)pFVar2->Data <= param_1) &&
     (param_1 < (FTypedElementHandle *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar7 = pFVar2->Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(undefined4 *)(pFVar7 + 8) = 0xffffffff;
  this_00 = param_1->DataPtr;
  if (this_00 != (FTypedElementInternalData *)0x0) {
    *(FTypedElementInternalData **)pFVar7 = this_00;
    iVar6 = FTypedElementInternalData::AddRef(this_00,true);
    *(int *)(pFVar7 + 8) = iVar6;
  }
  return true;
}

// operator() @ 142c9e250

bool __thiscall
`TTypedElementList<FTypedElementHandle>::Append'::__l5::<lambda_1>::operator()
          (void *this,FTypedElementHandle *param_1)

{
  TTypedElementList<FTypedElementHandle> *this_00;
  FTypedElementInternalData *pFVar1;
  FScriptContainerElement *pFVar2;
  ICounterCategory *pIVar3;
  FTypedElementReferences *pFVar4;
  undefined1 *puVar5;
  TObjectPtr<UObject> this_01;
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 uVar12;
  FTypedElementId *pFVar13;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar14;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar15;
  ICounterCategory *pIVar16;
  UClass *pUVar17;
  FRegisteredElementType *pFVar18;
  UClass *pUVar19;
  TObjectPtr<UObject>_u_0 *pTVar20;
  longlong *plVar21;
  int *piVar22;
  longlong lVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  FTypedElementHandle *pFVar26;
  undefined4 uVar27;
  byte local_res10 [8];
  uint local_res18;
  FTypedElementId_u_0 local_res20 [2];
  uint local_98 [2];
  FName local_90;
  longlong local_88;
  longlong local_80;
  UTypedElementRegistry *local_78;
  FTypedElementInternalData *local_70;
  int local_68;
  FTypedElementInternalData *local_60;
  int local_58;
  longlong *local_50;
  
  this_00 = *(TTypedElementList<FTypedElementHandle> **)this;
  pFVar1 = param_1->DataPtr;
  uVar27 = 0xffffffff;
  local_70 = (FTypedElementInternalData *)0x0;
  local_68 = -1;
  if (pFVar1 != (FTypedElementInternalData *)0x0) {
    local_70 = pFVar1;
    local_68 = FTypedElementInternalData::AddRef(pFVar1,true);
  }
  if (local_70 == (FTypedElementInternalData *)0x0) {
    return true;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this_00->OnPreChangeDelegate,this_00);
  if (local_70 == (FTypedElementInternalData *)0x0) {
    pFVar13 = &FTypedElementId::Unset;
  }
  else {
    pFVar13 = &local_70->Id;
  }
  local_res20[0] = pFVar13->field0_0x0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
            (&this_00->ElementCombinedIds,local_98,(bool *)local_res20);
  pFVar2 = (this_00->ElementHandles).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_70) &&
      ((FScriptContainerElement *)&local_70 <
       pFVar2 + (longlong)(this_00->ElementHandles).ArrayMax * 0x10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  iVar11 = (this_00->ElementHandles).ArrayNum;
  piVar22 = &(this_00->ElementHandles).ArrayMax;
  if (iVar11 == *piVar22) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this_00->ElementHandles).AllocatorInstance,piVar22);
  }
  (this_00->ElementHandles).ArrayNum = iVar11 + 1;
  pFVar26 = (FTypedElementHandle *)
            ((this_00->ElementHandles).AllocatorInstance.Data + (longlong)iVar11 * 0x10);
  pFVar26->DataPtr = local_70;
  pFVar26->ReferenceId = local_68;
  local_70 = (FTypedElementInternalData *)0x0;
  local_68 = -1;
  local_78 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->ElementCounts)
  ;
  if ((local_78 == (UTypedElementRegistry *)0x0) ||
     (pFVar26->DataPtr == (FTypedElementInternalData *)0x0)) goto LAB_142c9e909;
  local_res10[0] = (pFVar26->DataPtr->Id).field0_0x0._s_0.TypeId;
  piVar22 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar22 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_ElementType,"ElementType");
    _Init_thread_footer(&::_TSS0);
  }
  local_90 = NAME_ElementType;
  pTVar14 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(&(this_00->ElementCounts).CounterCategories,NAME_ElementType);
  if (pTVar14 ==
      (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
       *)0x0) {
    pTVar15 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::AllocateMemoryForEmplace<FName_const_&>
                        (&(this_00->ElementCounts).CounterCategories,&local_90);
    pTVar14 = (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
               *)&pTVar15->field_0x8;
    *(uint *)&pTVar15->field_0x0 = local_90.ComparisonIndex.Value;
    *(uint *)&pTVar15->field_0x4 = local_90.Number;
    *pTVar14 = (ICounterCategory *)0x0;
LAB_142c9e46b:
    pIVar16 = ::operator_new(0x60);
    if (pIVar16 == (ICounterCategory *)0x0) {
      pIVar16 = (ICounterCategory *)0x0;
    }
    else {
      *pIVar16 = (ICounterCategory)&___7__TCounterCategory_E_FTypedElementCounter__6B_;
      GetTypedElementCounterKeyName<unsigned_char>();
      pIVar16[2] = (ICounterCategory)0x0;
      pIVar16[3] = (ICounterCategory)0x0;
      pIVar16[6] = (ICounterCategory)0x0;
      *(undefined4 *)(pIVar16 + 7) = 0;
      *(undefined4 *)&pIVar16[7].field_0x4 = 0x80;
      *(undefined4 *)(pIVar16 + 8) = 0xffffffff;
      *(undefined4 *)&pIVar16[8].field_0x4 = 0;
      pIVar16[10] = (ICounterCategory)0x0;
      *(undefined4 *)(pIVar16 + 0xb) = 0;
    }
    pIVar3 = pTVar14->Ptr;
    pTVar14->Ptr = pIVar16;
    if (pIVar3 != (ICounterCategory *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
  }
  else if (pTVar14->Ptr == (ICounterCategory *)0x0) goto LAB_142c9e46b;
  pIVar16 = pTVar14->Ptr;
  pcVar7 = *(code **)((longlong)*pIVar16 + 0x18);
  if ((*piVar22 <
       `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
                    KeyTypeName,L"uint8");
    _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::
                         __l3::_thread_safe_static_guard_0__);
  }
  (*pcVar7)(pIVar16,local_res10,
            `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
            KeyTypeName);
  local_60 = (FTypedElementInternalData *)0x0;
  local_58 = -1;
  pUVar17 = UTypedElementCounterInterface::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  iVar11 = local_58;
  if (local_60 != (FTypedElementInternalData *)0x0) {
    lVar23 = (longlong)local_58;
    LOCK();
    local_60->RefCount = local_60->RefCount + -1;
    UNLOCK();
    pFVar4 = (local_60->References).Ptr;
    if ((pFVar4 != (FTypedElementReferences *)0x0) && (local_58 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
      local_88 = *(longlong *)&(pFVar4->References).field_0x0;
      bVar8 = (byte)iVar11 & 0x1f;
      local_res18 = 1 << bVar8 | 1U >> 0x20 - bVar8;
      puVar24 = &(pFVar4->References).field_0x10;
      if (((iVar11 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar11)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      puVar5 = *(undefined1 **)&(pFVar4->References).field_0x20;
      puVar25 = puVar24;
      if (puVar5 != (undefined1 *)0x0) {
        puVar25 = puVar5;
      }
      local_80 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (((*(uint *)(puVar25 + local_80) & local_res18) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if (*(int *)&(pFVar4->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar4->References).field_0x30 * 0x108 + local_88) = iVar11;
      }
      *(undefined4 *)(lVar23 * 0x108 + local_88) = 0xffffffff;
      if (*(int *)&(pFVar4->References).field_0x34 < 1) {
        uVar12 = 0xffffffff;
      }
      else {
        uVar12 = *(undefined4 *)&(pFVar4->References).field_0x30;
      }
      *(undefined4 *)(lVar23 * 0x108 + 4 + local_88) = uVar12;
      puVar5 = &(pFVar4->References).field_0x34;
      *(int *)puVar5 = *(int *)puVar5 + 1;
      *(int *)&(pFVar4->References).field_0x30 = iVar11;
      if (((iVar11 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar11)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      puVar5 = *(undefined1 **)&(pFVar4->References).field_0x20;
      if (puVar5 != (undefined1 *)0x0) {
        puVar24 = puVar5;
      }
      *(uint *)(puVar24 + local_80) = *(uint *)(puVar24 + local_80) & ~local_res18;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
    }
  }
  local_50 = (longlong *)0x0;
  if (pFVar26->DataPtr != (FTypedElementInternalData *)0x0) {
    pFVar18 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                        (local_78,(pFVar26->DataPtr->Id).field0_0x0._s_0.TypeId);
    if ((pFVar18 == (FRegisteredElementType *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredElementType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    if ((pUVar17 == (UClass *)0x0) ||
       (pUVar19 = Z_Construct_UClass_UInterface_NoRegister(), pUVar19 == (UClass *)0x0)) {
LAB_142c9e71d:
      pUVar17 = (UClass *)0x0;
    }
    else {
      iVar11 = (int)pUVar19->_padding_;
      if (((int)pUVar17->_padding_ < iVar11) ||
         ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar11 * 8) !=
          &pUVar19->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (!bVar9) goto LAB_142c9e71d;
    }
    pTVar20 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                         (&pFVar18->Interfaces,(FName)pUVar17->_padding_)->field0_0x0;
    plVar21 = local_50;
    if ((pTVar20 != (TObjectPtr<UObject>_u_0 *)0x0) &&
       (this_01.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar20->DebugPtr,
       this_01.field0_0x0 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01.field0_0x0);
      }
      pFVar1 = pFVar26->DataPtr;
      pUVar17 = UTypedElementCounterInterface::StaticClass();
      plVar21 = UObjectBaseUtility::GetInterfaceAddress
                          ((UObjectBaseUtility *)this_01.field0_0x0,pUVar17);
      local_60 = pFVar1;
      if (pFVar1 != (FTypedElementInternalData *)0x0) {
        local_58 = FTypedElementInternalData::AddRef(pFVar1,true);
      }
    }
    local_50 = plVar21;
    if ((local_60 != (FTypedElementInternalData *)0x0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x10))(local_50,&local_60,&this_00->ElementCounts);
    }
  }
  iVar11 = local_58;
  if (local_60 != (FTypedElementInternalData *)0x0) {
    lVar23 = (longlong)local_58;
    LOCK();
    local_60->RefCount = local_60->RefCount + -1;
    UNLOCK();
    pFVar4 = (local_60->References).Ptr;
    if ((pFVar4 != (FTypedElementReferences *)0x0) && (local_58 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
      lVar6 = *(longlong *)&pFVar4->References;
      puVar24 = &(pFVar4->References).field_0x10;
      bVar8 = (byte)iVar11 & 0x1f;
      local_res18 = 1 << bVar8 | 1U >> 0x20 - bVar8;
      if (((iVar11 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar11)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      puVar5 = *(undefined1 **)&(pFVar4->References).field_0x20;
      puVar25 = puVar24;
      if (puVar5 != (undefined1 *)0x0) {
        puVar25 = puVar5;
      }
      local_78 = (UTypedElementRegistry *)
                 ((longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      if (((*(uint *)(puVar25 + (longlong)(local_78->RegisteredElementTypes + -6)) & local_res18) ==
           0) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("AllocationFlags[Index]",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                     ,0xc5,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if (*(int *)&(pFVar4->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar4->References).field_0x30 * 0x108 + lVar6) = iVar11;
      }
      *(undefined4 *)(lVar23 * 0x108 + lVar6) = 0xffffffff;
      if (0 < *(int *)&(pFVar4->References).field_0x34) {
        uVar27 = *(undefined4 *)&(pFVar4->References).field_0x30;
      }
      *(undefined4 *)(lVar23 * 0x108 + 4 + lVar6) = uVar27;
      puVar5 = &(pFVar4->References).field_0x34;
      *(int *)puVar5 = *(int *)puVar5 + 1;
      *(int *)&(pFVar4->References).field_0x30 = iVar11;
      if (((iVar11 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar11)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      puVar5 = *(undefined1 **)&(pFVar4->References).field_0x20;
      if (puVar5 != (undefined1 *)0x0) {
        puVar24 = puVar5;
      }
      *(uint *)(puVar24 + (longlong)(local_78->RegisteredElementTypes + -6)) =
           *(uint *)(puVar24 + (longlong)(local_78->RegisteredElementTypes + -6)) & ~local_res18;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
    }
  }
LAB_142c9e909:
  TTypedElementList<FTypedElementHandle>::NoteListChanged(this_00,Added,pFVar26);
  if (local_70 != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef(local_70,local_68);
  }
  return true;
}

// operator() @ 142c9e9d0

bool __thiscall
`TTypedElementList<FScriptTypedElementHandle>::RemoveAllElementsImpl'::__l5::<lambda_1>::operator()
          (void *this,FScriptTypedElementHandle *param_1)

{
  longlong lVar1;
  int iVar2;
  FTypedElementInternalData *this_00;
  ICounterCategory *pIVar3;
  code *pcVar4;
  FTypedElementReferences *pFVar5;
  undefined1 *puVar6;
  TObjectPtr<UObject> this_01;
  longlong lVar7;
  FLegacySync *this_02;
  byte bVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar15;
  UClass *pUVar16;
  FRegisteredElementType *pFVar17;
  UClass *pUVar18;
  TObjectPtr<UObject>_u_0 *pTVar19;
  longlong *plVar20;
  FTypedElementId *pFVar21;
  longlong lVar22;
  undefined1 *puVar23;
  int *piVar24;
  undefined1 *puVar25;
  FWeakObjectPtr *this_03;
  undefined4 uVar26;
  byte local_res8 [8];
  FTypedElementId_u_0 local_res20 [2];
  FScriptTypedElementInternalDataPtr local_70;
  longlong local_68;
  longlong local_60;
  UTypedElementRegistry *local_58;
  FTypedElementInternalData *local_50;
  int local_48;
  longlong *local_40;
  
  cVar9 = (**(code **)((longlong)this + 8))(*(undefined8 *)((longlong)this + 0x10));
  if (cVar9 == '\0') {
    return false;
  }
  local_70.ControlBlock = (param_1->InternalData).ControlBlock;
  (param_1->InternalData).ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
  lVar22 = *(longlong *)this;
  if ((local_70.ControlBlock == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
     ((local_70.ControlBlock)->Data == (FTypedElementInternalData *)0x0)) {
    pFVar21 = &FTypedElementId::Unset;
  }
  else {
    pFVar21 = &(local_70.ControlBlock)->Data->Id;
  }
  local_res20[0] = (FTypedElementId_u_0)pFVar21->field0_0x0;
  if (*(int *)(lVar22 + 0x20) != *(int *)(lVar22 + 0x4c)) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    RemoveImpl<unsigned_int>
              ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
               (lVar22 + 0x18),(uint)local_res20[0],&local_res20[0].CombinedId);
  }
  lVar22 = *(longlong *)this;
  this_03 = (FWeakObjectPtr *)(lVar22 + 0x78);
  if ((local_70.ControlBlock == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
     (this_00 = (local_70.ControlBlock)->Data, this_00 == (FTypedElementInternalData *)0x0)) {
    FWeakObjectPtr::Get(this_03);
    goto LAB_142c9ef53;
  }
  iVar12 = FTypedElementInternalData::AddRef(this_00,true);
  local_58 = (UTypedElementRegistry *)FWeakObjectPtr::Get(this_03);
  if (local_58 != (UTypedElementRegistry *)0x0) {
    local_res8[0] = (this_00->Id).field0_0x0._s_0.TypeId;
    piVar24 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar24 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&NAME_ElementType,"ElementType");
      _Init_thread_footer(&::_TSS0);
    }
    pTVar15 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find((TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                      *)(lVar22 + 0x80),NAME_ElementType);
    if (pTVar15 !=
        (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
         *)0x0) {
      pIVar3 = pTVar15->Ptr;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0x20);
      if ((*piVar24 <
           `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                               ::__l3::_thread_safe_static_guard_0__),
         `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
         _thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::
                        __l3::KeyTypeName,L"uint8");
        _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                             ::__l3::_thread_safe_static_guard_0__);
      }
      (*pcVar4)(pIVar3,local_res8,
                `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
                KeyTypeName);
    }
    uVar26 = 0xffffffff;
    local_50 = (FTypedElementInternalData *)0x0;
    local_48 = -1;
    pUVar16 = UTypedElementCounterInterface::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar16);
    }
    iVar2 = local_48;
    if (local_50 != (FTypedElementInternalData *)0x0) {
      lVar22 = (longlong)local_48;
      LOCK();
      local_50->RefCount = local_50->RefCount + -1;
      UNLOCK();
      pFVar5 = (local_50->References).Ptr;
      if ((pFVar5 != (FTypedElementReferences *)0x0) && (local_48 != -1)) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar5);
        local_68 = *(longlong *)&pFVar5->References;
        puVar23 = &(pFVar5->References).field_0x10;
        bVar8 = (byte)iVar2 & 0x1f;
        uVar13 = 1 << bVar8 | 1U >> 0x20 - bVar8;
        if (((iVar2 < 0) || (*(int *)&(pFVar5->References).field_0x28 <= iVar2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        puVar6 = *(undefined1 **)&(pFVar5->References).field_0x20;
        puVar25 = puVar23;
        if (puVar6 != (undefined1 *)0x0) {
          puVar25 = puVar6;
        }
        local_60 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
        if (((*(uint *)(puVar25 + local_60) & uVar13) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("AllocationFlags[Index]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                ,0xc5,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        if (*(int *)&(pFVar5->References).field_0x34 != 0) {
          *(int *)((longlong)*(int *)&(pFVar5->References).field_0x30 * 0x108 + local_68) = iVar2;
        }
        *(undefined4 *)(lVar22 * 0x108 + local_68) = 0xffffffff;
        if (*(int *)&(pFVar5->References).field_0x34 < 1) {
          uVar14 = 0xffffffff;
        }
        else {
          uVar14 = *(undefined4 *)&(pFVar5->References).field_0x30;
        }
        *(undefined4 *)(lVar22 * 0x108 + 4 + local_68) = uVar14;
        puVar6 = &(pFVar5->References).field_0x34;
        *(int *)puVar6 = *(int *)puVar6 + 1;
        *(int *)&(pFVar5->References).field_0x30 = iVar2;
        if (((iVar2 < 0) || (*(int *)&(pFVar5->References).field_0x28 <= iVar2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        puVar6 = *(undefined1 **)&(pFVar5->References).field_0x20;
        if (puVar6 != (undefined1 *)0x0) {
          puVar23 = puVar6;
        }
        *(uint *)(puVar23 + local_60) = *(uint *)(puVar23 + local_60) & ~uVar13;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar5);
      }
    }
    local_40 = (longlong *)0x0;
    pFVar17 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                        (local_58,(this_00->Id).field0_0x0._s_0.TypeId);
    if ((pFVar17 == (FRegisteredElementType *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("RegisteredElementType",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                            ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
    if ((pUVar16 == (UClass *)0x0) ||
       (pUVar18 = Z_Construct_UClass_UInterface_NoRegister(), pUVar18 == (UClass *)0x0)) {
LAB_142c9ed50:
      pUVar16 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar18->_padding_;
      if (((int)pUVar16->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar18->_padding_)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (!bVar10) goto LAB_142c9ed50;
    }
    pTVar19 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                         (&pFVar17->Interfaces,(FName)pUVar16->_padding_)->field0_0x0;
    if ((pTVar19 != (TObjectPtr<UObject>_u_0 *)0x0) &&
       (this_01.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar19->DebugPtr,
       this_01.field0_0x0 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01.field0_0x0);
      }
      pUVar16 = UTypedElementCounterInterface::StaticClass();
      plVar20 = UObjectBaseUtility::GetInterfaceAddress
                          ((UObjectBaseUtility *)this_01.field0_0x0,pUVar16);
      local_50 = this_00;
      local_48 = FTypedElementInternalData::AddRef(this_00,true);
      local_40 = plVar20;
    }
    if (local_50 != (FTypedElementInternalData *)0x0) {
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 0x18))(local_40,&local_50,this_03);
      }
      iVar2 = local_48;
      if (local_50 != (FTypedElementInternalData *)0x0) {
        lVar22 = (longlong)local_48;
        LOCK();
        local_50->RefCount = local_50->RefCount + -1;
        UNLOCK();
        pFVar5 = (local_50->References).Ptr;
        if ((pFVar5 != (FTypedElementReferences *)0x0) && (local_48 != -1)) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar5);
          lVar7 = *(longlong *)&pFVar5->References;
          bVar8 = (byte)iVar2 & 0x1f;
          uVar13 = 1 << bVar8 | 1U >> 0x20 - bVar8;
          puVar23 = &(pFVar5->References).field_0x10;
          if (((iVar2 < 0) || (*(int *)&(pFVar5->References).field_0x28 <= iVar2)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
          puVar6 = *(undefined1 **)&(pFVar5->References).field_0x20;
          puVar25 = puVar23;
          if (puVar6 != (undefined1 *)0x0) {
            puVar25 = puVar6;
          }
          lVar1 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (((*(uint *)(puVar25 + lVar1) & uVar13) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AllocationFlags[Index]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                  ,0xc5,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
          if (*(int *)&(pFVar5->References).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(pFVar5->References).field_0x30 * 0x108 + lVar7) = iVar2;
          }
          *(undefined4 *)(lVar22 * 0x108 + lVar7) = 0xffffffff;
          if (0 < *(int *)&(pFVar5->References).field_0x34) {
            uVar26 = *(undefined4 *)&(pFVar5->References).field_0x30;
          }
          *(undefined4 *)(lVar22 * 0x108 + 4 + lVar7) = uVar26;
          puVar6 = &(pFVar5->References).field_0x34;
          *(int *)puVar6 = *(int *)puVar6 + 1;
          *(int *)&(pFVar5->References).field_0x30 = iVar2;
          if (((iVar2 < 0) || (*(int *)&(pFVar5->References).field_0x28 <= iVar2)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
          puVar6 = *(undefined1 **)&(pFVar5->References).field_0x20;
          if (puVar6 != (undefined1 *)0x0) {
            puVar23 = puVar6;
          }
          *(uint *)(puVar23 + lVar1) = *(uint *)(puVar23 + lVar1) & ~uVar13;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar5);
        }
      }
    }
  }
  FTypedElementInternalData::ReleaseRef(this_00,iVar12);
LAB_142c9ef53:
  this_02 = *(FLegacySync **)(*(longlong *)this + 0xd8);
  *(undefined1 *)(*(longlong *)this + 0xd0) = 1;
  if (this_02 != (FLegacySync *)0x0) {
    TTypedElementList<FScriptTypedElementHandle>::FLegacySync::Private_EmitSyncEvent
              (this_02,Removed,(FScriptTypedElementHandle *)&local_70);
  }
  if ((local_70.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     ((local_70.ControlBlock)->WeakRefCount = (local_70.ControlBlock)->WeakRefCount + -1,
     (local_70.ControlBlock)->WeakRefCount == 0)) {
    ::operator_delete(local_70.ControlBlock,0x10);
  }
  return true;
}

// operator() @ 142c9f050

bool __thiscall
`TTypedElementList<FTypedElementHandle>::RemoveAllElementsImpl'::__l5::<lambda_1>::operator()
          (void *this,FTypedElementHandle *param_1)

{
  longlong lVar1;
  FLegacySync *this_00;
  char cVar2;
  FTypedElementId *pFVar3;
  FTypedElementId_u_0 local_res8 [2];
  FTypedElementHandle local_18;
  
  cVar2 = (**(code **)((longlong)this + 8))(*(undefined8 *)((longlong)this + 0x10));
  if (cVar2 != '\0') {
    local_18.DataPtr = param_1->DataPtr;
    local_18.ReferenceId = param_1->ReferenceId;
    param_1->DataPtr = (FTypedElementInternalData *)0x0;
    param_1->ReferenceId = -1;
    lVar1 = *(longlong *)this;
    pFVar3 = &(local_18.DataPtr)->Id;
    if (local_18.DataPtr == (FTypedElementInternalData *)0x0) {
      pFVar3 = &FTypedElementId::Unset;
    }
    local_res8[0] = (FTypedElementId_u_0)pFVar3->field0_0x0;
    if (*(int *)(lVar1 + 0x20) != *(int *)(lVar1 + 0x4c)) {
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      RemoveImpl<unsigned_int>
                ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                 (lVar1 + 0x18),(uint)local_res8[0],&local_res8[0].CombinedId);
    }
    FTypedElementCounter::RemoveElement
              ((FTypedElementCounter *)(*(longlong *)this + 0x78),&local_18);
    this_00 = *(FLegacySync **)(*(longlong *)this + 0xd8);
    *(undefined1 *)(*(longlong *)this + 0xd0) = 1;
    if (this_00 != (FLegacySync *)0x0) {
      TTypedElementList<FTypedElementHandle>::FLegacySync::Private_EmitSyncEvent
                (this_00,Removed,&local_18);
    }
    if (local_18.DataPtr != (FTypedElementInternalData *)0x0) {
      FTypedElementInternalData::ReleaseRef(local_18.DataPtr,local_18.ReferenceId);
    }
    return true;
  }
  return false;
}

// Add @ 142ca2010

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::Add
          (TTypedElementList<FScriptTypedElementHandle> *this,FScriptTypedElementHandle *param_1)

{
  int iVar1;
  FScriptTypedElementInternalDataControlBlock *pFVar2;
  FTypedElementInternalData *pFVar3;
  FScriptContainerElement *pFVar4;
  ICounterCategory *pIVar5;
  FTypedElementReferences *pFVar6;
  undefined1 *puVar7;
  TObjectPtr<UObject> this_00;
  longlong lVar8;
  code *pcVar9;
  byte bVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  undefined4 uVar14;
  FTypedElementId *pFVar15;
  UTypedElementRegistry *this_01;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar16;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar17;
  ICounterCategory *pIVar18;
  UClass *pUVar19;
  FRegisteredElementType *pFVar20;
  UClass *pUVar21;
  TObjectPtr<UObject>_u_0 *pTVar22;
  longlong *plVar23;
  int *piVar24;
  longlong lVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  byte abStackX_18 [8];
  uint uStackX_20;
  FTypedElementInternalData *pFStack_78;
  int iStack_70;
  longlong *plStack_68;
  FTypedElementId_u_0 aFStack_60 [2];
  longlong lStack_58;
  FName FStack_50;
  longlong lStack_48;
  uint auStack_40 [2];
  
  pFVar2 = (param_1->InternalData).ControlBlock;
  if ((pFVar2 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
     (pFVar2->Data == (FTypedElementInternalData *)0x0)) {
    return false;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  pFVar2 = (param_1->InternalData).ControlBlock;
  if ((pFVar2 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
     (pFVar3 = pFVar2->Data, pFVar3 == (FTypedElementInternalData *)0x0)) {
    pFVar15 = &FTypedElementId::Unset;
  }
  else {
    pFVar15 = &pFVar3->Id;
  }
  aFStack_60[0] = pFVar15->field0_0x0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
            (&this->ElementCombinedIds,auStack_40,(bool *)aFStack_60);
  pFVar4 = (this->ElementHandles).AllocatorInstance.Data;
  if (((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)(this->ElementHandles).ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  iVar13 = (this->ElementHandles).ArrayNum;
  piVar24 = &(this->ElementHandles).ArrayMax;
  if (iVar13 == *piVar24) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->ElementHandles).AllocatorInstance,piVar24);
  }
  (this->ElementHandles).ArrayNum = iVar13 + 1;
  pFVar4 = (this->ElementHandles).AllocatorInstance.Data + (longlong)iVar13 * 8;
  ((FScriptTypedElementInternalDataPtr *)&pFVar4->field_0x0)->ControlBlock =
       (param_1->InternalData).ControlBlock;
  (param_1->InternalData).ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
  pFVar2 = ((FScriptTypedElementInternalDataPtr *)&pFVar4->field_0x0)->ControlBlock;
  if ((pFVar2 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
     (pFVar3 = pFVar2->Data, pFVar3 == (FTypedElementInternalData *)0x0)) {
    FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ElementCounts);
    goto LAB_142ca3a74;
  }
  iVar13 = FTypedElementInternalData::AddRef(pFVar3,true);
  this_01 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ElementCounts);
  if (this_01 != (UTypedElementRegistry *)0x0) {
    abStackX_18[0] = (pFVar3->Id).field0_0x0._s_0.TypeId;
    piVar24 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar24 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&NAME_ElementType,"ElementType");
      _Init_thread_footer(&::_TSS0);
    }
    FStack_50 = NAME_ElementType;
    pTVar16 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(&(this->ElementCounts).CounterCategories,NAME_ElementType);
    if (pTVar16 ==
        (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
         *)0x0) {
      pTVar17 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                ::AllocateMemoryForEmplace<FName_const_&>
                          (&(this->ElementCounts).CounterCategories,&FStack_50);
      pTVar16 = (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
                 *)&pTVar17->field_0x8;
      *(uint *)&pTVar17->field_0x0 = FStack_50.ComparisonIndex.Value;
      *(uint *)&pTVar17->field_0x4 = FStack_50.Number;
      *pTVar16 = (ICounterCategory *)0x0;
LAB_142ca35fc:
      pIVar18 = ::operator_new(0x60);
      if (pIVar18 == (ICounterCategory *)0x0) {
        pIVar18 = (ICounterCategory *)0x0;
      }
      else {
        *pIVar18 = (ICounterCategory)&___7__TCounterCategory_E_FTypedElementCounter__6B_;
        GetTypedElementCounterKeyName<unsigned_char>();
        pIVar18[2] = (ICounterCategory)0x0;
        pIVar18[3] = (ICounterCategory)0x0;
        pIVar18[6] = (ICounterCategory)0x0;
        *(undefined4 *)(pIVar18 + 7) = 0;
        *(undefined4 *)&pIVar18[7].field_0x4 = 0x80;
        *(undefined4 *)(pIVar18 + 8) = 0xffffffff;
        *(undefined4 *)&pIVar18[8].field_0x4 = 0;
        pIVar18[10] = (ICounterCategory)0x0;
        *(undefined4 *)(pIVar18 + 0xb) = 0;
      }
      pIVar5 = pTVar16->Ptr;
      pTVar16->Ptr = pIVar18;
      if (pIVar5 != (ICounterCategory *)0x0) {
        (**(code **)*pIVar5)(pIVar5,1);
      }
    }
    else if (pTVar16->Ptr == (ICounterCategory *)0x0) goto LAB_142ca35fc;
    pIVar18 = pTVar16->Ptr;
    pcVar9 = *(code **)((longlong)*pIVar18 + 0x18);
    if ((*piVar24 <
         `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                             ::__l3::_thread_safe_static_guard_0__),
       `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
       _thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3
                      ::KeyTypeName,L"uint8");
      _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
    }
    (*pcVar9)(pIVar18,abStackX_18,
              `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
              KeyTypeName);
    pFStack_78 = (FTypedElementInternalData *)0x0;
    iStack_70 = -1;
    pUVar19 = UTypedElementCounterInterface::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
    }
    iVar1 = iStack_70;
    if (pFStack_78 != (FTypedElementInternalData *)0x0) {
      lVar25 = (longlong)iStack_70;
      LOCK();
      pFStack_78->RefCount = pFStack_78->RefCount + -1;
      UNLOCK();
      pFVar6 = (pFStack_78->References).Ptr;
      if ((pFVar6 != (FTypedElementReferences *)0x0) && (iStack_70 != -1)) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar6);
        lStack_48 = *(longlong *)&pFVar6->References;
        puVar26 = &(pFVar6->References).field_0x10;
        bVar10 = (byte)iVar1 & 0x1f;
        uStackX_20 = 1 << bVar10 | 1U >> 0x20 - bVar10;
        if (((iVar1 < 0) || (*(int *)&(pFVar6->References).field_0x28 <= iVar1)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        puVar7 = *(undefined1 **)&(pFVar6->References).field_0x20;
        puVar27 = puVar26;
        if (puVar7 != (undefined1 *)0x0) {
          puVar27 = puVar7;
        }
        lStack_58 = (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4;
        if (((*(uint *)(puVar27 + lStack_58) & uStackX_20) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("AllocationFlags[Index]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                ,0xc5,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if (*(int *)&(pFVar6->References).field_0x34 != 0) {
          *(int *)((longlong)*(int *)&(pFVar6->References).field_0x30 * 0x108 + lStack_48) = iVar1;
        }
        uVar14 = 0xffffffff;
        *(undefined4 *)(lVar25 * 0x108 + lStack_48) = 0xffffffff;
        if (0 < *(int *)&(pFVar6->References).field_0x34) {
          uVar14 = *(undefined4 *)&(pFVar6->References).field_0x30;
        }
        *(undefined4 *)(lVar25 * 0x108 + 4 + lStack_48) = uVar14;
        puVar7 = &(pFVar6->References).field_0x34;
        *(int *)puVar7 = *(int *)puVar7 + 1;
        *(int *)&(pFVar6->References).field_0x30 = iVar1;
        if (((iVar1 < 0) || (*(int *)&(pFVar6->References).field_0x28 <= iVar1)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        puVar7 = *(undefined1 **)&(pFVar6->References).field_0x20;
        if (puVar7 != (undefined1 *)0x0) {
          puVar26 = puVar7;
        }
        *(uint *)(puVar26 + lStack_58) = *(uint *)(puVar26 + lStack_58) & ~uStackX_20;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar6);
      }
    }
    uVar14 = 0xffffffff;
    plStack_68 = (longlong *)0x0;
    pFVar20 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                        (this_01,(pFVar3->Id).field0_0x0._s_0.TypeId);
    if ((pFVar20 == (FRegisteredElementType *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("RegisteredElementType",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                            ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar11)) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
    if ((pUVar19 == (UClass *)0x0) ||
       (pUVar21 = Z_Construct_UClass_UInterface_NoRegister(), pUVar21 == (UClass *)0x0)) {
LAB_142ca3895:
      pUVar19 = (UClass *)0x0;
    }
    else {
      iVar1 = (int)pUVar21->_padding_;
      if (((int)pUVar19->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar21->_padding_)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (!bVar11) goto LAB_142ca3895;
    }
    pTVar22 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                         (&pFVar20->Interfaces,(FName)pUVar19->_padding_)->field0_0x0;
    if ((pTVar22 != (TObjectPtr<UObject>_u_0 *)0x0) &&
       (this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar22->DebugPtr,
       this_00.field0_0x0 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
      }
      pUVar19 = UTypedElementCounterInterface::StaticClass();
      plVar23 = UObjectBaseUtility::GetInterfaceAddress
                          ((UObjectBaseUtility *)this_00.field0_0x0,pUVar19);
      pFStack_78 = pFVar3;
      iStack_70 = FTypedElementInternalData::AddRef(pFVar3,true);
      plStack_68 = plVar23;
    }
    if (pFStack_78 != (FTypedElementInternalData *)0x0) {
      if (plStack_68 != (longlong *)0x0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68,&pFStack_78,&this->ElementCounts);
      }
      iVar1 = iStack_70;
      if (pFStack_78 != (FTypedElementInternalData *)0x0) {
        lVar25 = (longlong)iStack_70;
        LOCK();
        pFStack_78->RefCount = pFStack_78->RefCount + -1;
        UNLOCK();
        pFVar6 = (pFStack_78->References).Ptr;
        if ((pFVar6 != (FTypedElementReferences *)0x0) && (iStack_70 != -1)) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar6);
          lVar8 = *(longlong *)&pFVar6->References;
          puVar26 = &(pFVar6->References).field_0x10;
          bVar10 = (byte)iVar1 & 0x1f;
          uStackX_20 = 1 << bVar10 | 1U >> 0x20 - bVar10;
          if (((iVar1 < 0) || (*(int *)&(pFVar6->References).field_0x28 <= iVar1)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          puVar7 = *(undefined1 **)&(pFVar6->References).field_0x20;
          puVar27 = puVar26;
          if (puVar7 != (undefined1 *)0x0) {
            puVar27 = puVar7;
          }
          lStack_58 = (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (((*(uint *)(puVar27 + lStack_58) & uStackX_20) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AllocationFlags[Index]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                  ,0xc5,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          if (*(int *)&(pFVar6->References).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(pFVar6->References).field_0x30 * 0x108 + lVar8) = iVar1;
          }
          *(undefined4 *)(lVar25 * 0x108 + lVar8) = 0xffffffff;
          if (0 < *(int *)&(pFVar6->References).field_0x34) {
            uVar14 = *(undefined4 *)&(pFVar6->References).field_0x30;
          }
          *(undefined4 *)(lVar25 * 0x108 + 4 + lVar8) = uVar14;
          puVar7 = &(pFVar6->References).field_0x34;
          *(int *)puVar7 = *(int *)puVar7 + 1;
          *(int *)&(pFVar6->References).field_0x30 = iVar1;
          if (((iVar1 < 0) || (*(int *)&(pFVar6->References).field_0x28 <= iVar1)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          puVar7 = *(undefined1 **)&(pFVar6->References).field_0x20;
          if (puVar7 != (undefined1 *)0x0) {
            puVar26 = puVar7;
          }
          *(uint *)(puVar26 + lStack_58) = *(uint *)(puVar26 + lStack_58) & ~uStackX_20;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar6);
        }
      }
    }
  }
  FTypedElementInternalData::ReleaseRef(pFVar3,iVar13);
LAB_142ca3a74:
  NoteListChanged(this,Added,(FScriptTypedElementHandle *)pFVar4);
  return true;
}

// Add @ 142ca2020

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::Add
          (TTypedElementList<FScriptTypedElementHandle> *this,FScriptTypedElementHandle *param_1)

{
  bool bVar1;
  FScriptTypedElementInternalDataPtr local_res10 [3];
  
  local_res10[0].ControlBlock = (param_1->InternalData).ControlBlock;
  if (local_res10[0].ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
    (local_res10[0].ControlBlock)->WeakRefCount = (local_res10[0].ControlBlock)->WeakRefCount + 1;
  }
  bVar1 = AddElementImpl(this,(FScriptTypedElementHandle *)local_res10);
  if (local_res10[0].ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
    (local_res10[0].ControlBlock)->WeakRefCount = (local_res10[0].ControlBlock)->WeakRefCount + -1;
    if ((local_res10[0].ControlBlock)->WeakRefCount == 0) {
      ::operator_delete(local_res10[0].ControlBlock,0x10);
    }
  }
  return bVar1;
}

// Add @ 142ca2080

bool __thiscall
TTypedElementList<FTypedElementHandle>::Add
          (TTypedElementList<FTypedElementHandle> *this,FTypedElementHandle *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FLegacySync *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FTypedElementId *pFVar7;
  FTypedElementHandle *pFVar8;
  FTypedElementId_u_0 aFStackX_18 [2];
  uint auStackX_20 [2];
  
  if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
    return false;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
    pFVar7 = &FTypedElementId::Unset;
  }
  else {
    pFVar7 = &param_1->DataPtr->Id;
  }
  aFStackX_18[0] = pFVar7->field0_0x0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
            (&this->ElementCombinedIds,auStackX_20,(bool *)aFStackX_18);
  pFVar8 = (FTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data;
  if (((pFVar8 <= param_1) && (param_1 < pFVar8 + (this->ElementHandles).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = (this->ElementHandles).ArrayNum;
  piVar1 = &(this->ElementHandles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ElementHandles).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->ElementHandles).AllocatorInstance.Data;
  (this->ElementHandles).ArrayNum = iVar6 + 1;
  pFVar8 = (FTypedElementHandle *)(pFVar2 + (longlong)iVar6 * 0x10);
  pFVar8->DataPtr = param_1->DataPtr;
  pFVar8->ReferenceId = param_1->ReferenceId;
  param_1->DataPtr = (FTypedElementInternalData *)0x0;
  param_1->ReferenceId = -1;
  FTypedElementCounter::AddElement(&this->ElementCounts,pFVar8);
  this_00 = (this->LegacySync).Ptr;
  this->bHasPendingNotify = true;
  if (this_00 != (FLegacySync *)0x0) {
    FLegacySync::Private_EmitSyncEvent(this_00,Added,pFVar8);
  }
  return true;
}

// Add @ 142ca2090

bool __thiscall
TTypedElementList<FTypedElementHandle>::Add
          (TTypedElementList<FTypedElementHandle> *this,FTypedElementHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  ICounterCategory *pIVar2;
  FTypedElementReferences *pFVar3;
  undefined1 *puVar4;
  TObjectPtr<UObject> this_00;
  FTypedElementInternalData *this_01;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  FTypedElementId *pFVar12;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar13;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar14;
  ICounterCategory *pIVar15;
  UClass *pUVar16;
  FRegisteredElementType *pFVar17;
  UClass *pUVar18;
  TObjectPtr<UObject>_u_0 *pTVar19;
  longlong *plVar20;
  int *piVar21;
  longlong lVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined4 uVar25;
  FTypedElementHandle *pFVar26;
  byte local_res18 [8];
  uint local_res20;
  FTypedElementInternalData *local_98;
  int local_90;
  FTypedElementInternalData *local_88;
  int local_80;
  longlong *local_78;
  FTypedElementId_u_0 local_70 [2];
  UTypedElementRegistry *local_68;
  FName local_60;
  longlong local_58;
  uint local_50 [2];
  longlong local_48;
  
  local_98 = param_1->DataPtr;
  if ((local_98 == (FTypedElementInternalData *)0x0) ||
     (local_90 = FTypedElementInternalData::AddRef(local_98,true),
     local_98 == (FTypedElementInternalData *)0x0)) {
    return false;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  if (local_98 == (FTypedElementInternalData *)0x0) {
    pFVar12 = &FTypedElementId::Unset;
  }
  else {
    pFVar12 = &local_98->Id;
  }
  local_70[0] = pFVar12->field0_0x0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
            (&this->ElementCombinedIds,local_50,(bool *)local_70);
  pFVar1 = (this->ElementHandles).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_98) &&
      ((FScriptContainerElement *)&local_98 <
       pFVar1 + (longlong)(this->ElementHandles).ArrayMax * 0x10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar10 = (this->ElementHandles).ArrayNum;
  piVar21 = &(this->ElementHandles).ArrayMax;
  if (iVar10 == *piVar21) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->ElementHandles).AllocatorInstance,piVar21);
  }
  uVar25 = 0xffffffff;
  (this->ElementHandles).ArrayNum = iVar10 + 1;
  pFVar26 = (FTypedElementHandle *)
            ((this->ElementHandles).AllocatorInstance.Data + (longlong)iVar10 * 0x10);
  pFVar26->DataPtr = local_98;
  pFVar26->ReferenceId = local_90;
  local_98 = (FTypedElementInternalData *)0x0;
  local_90 = -1;
  local_68 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ElementCounts);
  if ((local_68 == (UTypedElementRegistry *)0x0) ||
     (pFVar26->DataPtr == (FTypedElementInternalData *)0x0)) goto LAB_142ca2746;
  local_res18[0] = (pFVar26->DataPtr->Id).field0_0x0._s_0.TypeId;
  piVar21 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar21 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_ElementType,"ElementType");
    _Init_thread_footer(&::_TSS0);
  }
  local_60 = NAME_ElementType;
  pTVar13 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
            ::Find(&(this->ElementCounts).CounterCategories,NAME_ElementType);
  if (pTVar13 ==
      (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
       *)0x0) {
    pTVar14 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::AllocateMemoryForEmplace<FName_const_&>
                        (&(this->ElementCounts).CounterCategories,&local_60);
    pTVar13 = (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
               *)&pTVar14->field_0x8;
    *(uint *)&pTVar14->field_0x0 = local_60.ComparisonIndex.Value;
    *(uint *)&pTVar14->field_0x4 = local_60.Number;
    *pTVar13 = (ICounterCategory *)0x0;
LAB_142ca22a8:
    pIVar15 = ::operator_new(0x60);
    if (pIVar15 == (ICounterCategory *)0x0) {
      pIVar15 = (ICounterCategory *)0x0;
    }
    else {
      *pIVar15 = (ICounterCategory)&___7__TCounterCategory_E_FTypedElementCounter__6B_;
      GetTypedElementCounterKeyName<unsigned_char>();
      pIVar15[2] = (ICounterCategory)0x0;
      pIVar15[3] = (ICounterCategory)0x0;
      pIVar15[6] = (ICounterCategory)0x0;
      *(undefined4 *)(pIVar15 + 7) = 0;
      *(undefined4 *)&pIVar15[7].field_0x4 = 0x80;
      *(undefined4 *)(pIVar15 + 8) = 0xffffffff;
      *(undefined4 *)&pIVar15[8].field_0x4 = 0;
      pIVar15[10] = (ICounterCategory)0x0;
      *(undefined4 *)(pIVar15 + 0xb) = 0;
    }
    pIVar2 = pTVar13->Ptr;
    pTVar13->Ptr = pIVar15;
    if (pIVar2 != (ICounterCategory *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
  }
  else if (pTVar13->Ptr == (ICounterCategory *)0x0) goto LAB_142ca22a8;
  pIVar15 = pTVar13->Ptr;
  pcVar6 = *(code **)((longlong)*pIVar15 + 0x18);
  if ((*piVar21 <
       `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                           ::__l3::_thread_safe_static_guard_0__),
     `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
                    KeyTypeName,L"uint8");
    _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::
                         __l3::_thread_safe_static_guard_0__);
  }
  (*pcVar6)(pIVar15,local_res18,
            `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
            KeyTypeName);
  local_88 = (FTypedElementInternalData *)0x0;
  local_80 = -1;
  pUVar16 = UTypedElementCounterInterface::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  iVar10 = local_80;
  if (local_88 != (FTypedElementInternalData *)0x0) {
    lVar22 = (longlong)local_80;
    LOCK();
    local_88->RefCount = local_88->RefCount + -1;
    UNLOCK();
    pFVar3 = (local_88->References).Ptr;
    if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_80 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
      local_58 = *(longlong *)&(pFVar3->References).field_0x0;
      bVar7 = (byte)iVar10 & 0x1f;
      local_res20 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      puVar23 = &(pFVar3->References).field_0x10;
      if (((iVar10 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar4 = *(undefined1 **)&(pFVar3->References).field_0x20;
      puVar24 = puVar23;
      if (puVar4 != (undefined1 *)0x0) {
        puVar24 = puVar4;
      }
      local_48 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (((*(uint *)(puVar24 + local_48) & local_res20) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(int *)&(pFVar3->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + local_58) = iVar10;
      }
      *(undefined4 *)(lVar22 * 0x108 + local_58) = 0xffffffff;
      if (*(int *)&(pFVar3->References).field_0x34 < 1) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
      }
      *(undefined4 *)(lVar22 * 0x108 + 4 + local_58) = uVar11;
      puVar4 = &(pFVar3->References).field_0x34;
      *(int *)puVar4 = *(int *)puVar4 + 1;
      *(int *)&(pFVar3->References).field_0x30 = iVar10;
      if (((iVar10 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar4 = *(undefined1 **)&(pFVar3->References).field_0x20;
      if (puVar4 != (undefined1 *)0x0) {
        puVar23 = puVar4;
      }
      *(uint *)(puVar23 + local_48) = *(uint *)(puVar23 + local_48) & ~local_res20;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
    }
  }
  local_78 = (longlong *)0x0;
  if (pFVar26->DataPtr != (FTypedElementInternalData *)0x0) {
    pFVar17 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                        (local_68,(pFVar26->DataPtr->Id).field0_0x0._s_0.TypeId);
    if ((pFVar17 == (FRegisteredElementType *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredElementType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    if ((pUVar16 == (UClass *)0x0) ||
       (pUVar18 = Z_Construct_UClass_UInterface_NoRegister(), pUVar18 == (UClass *)0x0)) {
LAB_142ca255a:
      pUVar16 = (UClass *)0x0;
    }
    else {
      iVar10 = (int)pUVar18->_padding_;
      if (((int)pUVar16->_padding_ < iVar10) ||
         ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar10 * 8) !=
          &pUVar18->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (!bVar8) goto LAB_142ca255a;
    }
    pTVar19 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                         (&pFVar17->Interfaces,(FName)pUVar16->_padding_)->field0_0x0;
    plVar20 = local_78;
    if ((pTVar19 != (TObjectPtr<UObject>_u_0 *)0x0) &&
       (this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar19->DebugPtr,
       this_00.field0_0x0 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
      }
      this_01 = pFVar26->DataPtr;
      pUVar16 = UTypedElementCounterInterface::StaticClass();
      plVar20 = UObjectBaseUtility::GetInterfaceAddress
                          ((UObjectBaseUtility *)this_00.field0_0x0,pUVar16);
      local_88 = this_01;
      if (this_01 != (FTypedElementInternalData *)0x0) {
        local_80 = FTypedElementInternalData::AddRef(this_01,true);
      }
    }
    local_78 = plVar20;
    if ((local_88 != (FTypedElementInternalData *)0x0) && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x10))(local_78,&local_88,&this->ElementCounts);
    }
  }
  iVar10 = local_80;
  if (local_88 != (FTypedElementInternalData *)0x0) {
    lVar22 = (longlong)local_80;
    LOCK();
    local_88->RefCount = local_88->RefCount + -1;
    UNLOCK();
    pFVar3 = (local_88->References).Ptr;
    if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_80 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
      lVar5 = *(longlong *)&pFVar3->References;
      puVar23 = &(pFVar3->References).field_0x10;
      bVar7 = (byte)iVar10 & 0x1f;
      local_res20 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if (((iVar10 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar4 = *(undefined1 **)&(pFVar3->References).field_0x20;
      puVar24 = puVar23;
      if (puVar4 != (undefined1 *)0x0) {
        puVar24 = puVar4;
      }
      local_68 = (UTypedElementRegistry *)
                 ((longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      if (((*(uint *)(puVar24 + (longlong)(local_68->RegisteredElementTypes + -6)) & local_res20) ==
           0) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("AllocationFlags[Index]",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                     ,0xc5,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(int *)&(pFVar3->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar5) = iVar10;
      }
      *(undefined4 *)(lVar22 * 0x108 + lVar5) = 0xffffffff;
      if (0 < *(int *)&(pFVar3->References).field_0x34) {
        uVar25 = *(undefined4 *)&(pFVar3->References).field_0x30;
      }
      *(undefined4 *)(lVar22 * 0x108 + 4 + lVar5) = uVar25;
      puVar4 = &(pFVar3->References).field_0x34;
      *(int *)puVar4 = *(int *)puVar4 + 1;
      *(int *)&(pFVar3->References).field_0x30 = iVar10;
      if (((iVar10 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      puVar4 = *(undefined1 **)&(pFVar3->References).field_0x20;
      if (puVar4 != (undefined1 *)0x0) {
        puVar23 = puVar4;
      }
      *(uint *)(puVar23 + (longlong)(local_68->RegisteredElementTypes + -6)) =
           *(uint *)(puVar23 + (longlong)(local_68->RegisteredElementTypes + -6)) & ~local_res20;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
    }
  }
LAB_142ca2746:
  NoteListChanged(this,Added,pFVar26);
  if (local_98 != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef(local_98,local_90);
  }
  return true;
}

// AddElementImpl @ 142ca33f0

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::AddElementImpl
          (TTypedElementList<FScriptTypedElementHandle> *this,FScriptTypedElementHandle *param_1)

{
  int iVar1;
  FScriptTypedElementInternalDataControlBlock *pFVar2;
  FTypedElementInternalData *pFVar3;
  FScriptContainerElement *pFVar4;
  ICounterCategory *pIVar5;
  FTypedElementReferences *pFVar6;
  undefined1 *puVar7;
  TObjectPtr<UObject> this_00;
  longlong lVar8;
  code *pcVar9;
  byte bVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  undefined4 uVar14;
  FTypedElementId *pFVar15;
  UTypedElementRegistry *this_01;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar16;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar17;
  ICounterCategory *pIVar18;
  UClass *pUVar19;
  FRegisteredElementType *pFVar20;
  UClass *pUVar21;
  TObjectPtr<UObject>_u_0 *pTVar22;
  longlong *plVar23;
  int *piVar24;
  longlong lVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  byte local_res18 [8];
  uint local_res20;
  FTypedElementInternalData *local_78;
  int local_70;
  longlong *local_68;
  FTypedElementId_u_0 local_60 [2];
  longlong local_58;
  FName local_50;
  longlong local_48;
  uint local_40 [2];
  
  pFVar2 = (param_1->InternalData).ControlBlock;
  if ((pFVar2 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
     (pFVar2->Data == (FTypedElementInternalData *)0x0)) {
    return false;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  pFVar2 = (param_1->InternalData).ControlBlock;
  if ((pFVar2 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
     (pFVar3 = pFVar2->Data, pFVar3 == (FTypedElementInternalData *)0x0)) {
    pFVar15 = &FTypedElementId::Unset;
  }
  else {
    pFVar15 = &pFVar3->Id;
  }
  local_60[0] = pFVar15->field0_0x0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
            (&this->ElementCombinedIds,local_40,(bool *)local_60);
  pFVar4 = (this->ElementHandles).AllocatorInstance.Data;
  if (((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)(this->ElementHandles).ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  iVar13 = (this->ElementHandles).ArrayNum;
  piVar24 = &(this->ElementHandles).ArrayMax;
  if (iVar13 == *piVar24) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->ElementHandles).AllocatorInstance,piVar24);
  }
  (this->ElementHandles).ArrayNum = iVar13 + 1;
  pFVar4 = (this->ElementHandles).AllocatorInstance.Data + (longlong)iVar13 * 8;
  ((FScriptTypedElementInternalDataPtr *)&pFVar4->field_0x0)->ControlBlock =
       (param_1->InternalData).ControlBlock;
  (param_1->InternalData).ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
  pFVar2 = ((FScriptTypedElementInternalDataPtr *)&pFVar4->field_0x0)->ControlBlock;
  if ((pFVar2 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
     (pFVar3 = pFVar2->Data, pFVar3 == (FTypedElementInternalData *)0x0)) {
    FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ElementCounts);
    goto LAB_142ca3a74;
  }
  iVar13 = FTypedElementInternalData::AddRef(pFVar3,true);
  this_01 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->ElementCounts);
  if (this_01 != (UTypedElementRegistry *)0x0) {
    local_res18[0] = (pFVar3->Id).field0_0x0._s_0.TypeId;
    piVar24 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar24 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&NAME_ElementType,"ElementType");
      _Init_thread_footer(&::_TSS0);
    }
    local_50 = NAME_ElementType;
    pTVar16 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(&(this->ElementCounts).CounterCategories,NAME_ElementType);
    if (pTVar16 ==
        (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
         *)0x0) {
      pTVar17 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                ::AllocateMemoryForEmplace<FName_const_&>
                          (&(this->ElementCounts).CounterCategories,&local_50);
      pTVar16 = (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
                 *)&pTVar17->field_0x8;
      *(uint *)&pTVar17->field_0x0 = local_50.ComparisonIndex.Value;
      *(uint *)&pTVar17->field_0x4 = local_50.Number;
      *pTVar16 = (ICounterCategory *)0x0;
LAB_142ca35fc:
      pIVar18 = ::operator_new(0x60);
      if (pIVar18 == (ICounterCategory *)0x0) {
        pIVar18 = (ICounterCategory *)0x0;
      }
      else {
        *pIVar18 = (ICounterCategory)&___7__TCounterCategory_E_FTypedElementCounter__6B_;
        GetTypedElementCounterKeyName<unsigned_char>();
        pIVar18[2] = (ICounterCategory)0x0;
        pIVar18[3] = (ICounterCategory)0x0;
        pIVar18[6] = (ICounterCategory)0x0;
        *(undefined4 *)(pIVar18 + 7) = 0;
        *(undefined4 *)&pIVar18[7].field_0x4 = 0x80;
        *(undefined4 *)(pIVar18 + 8) = 0xffffffff;
        *(undefined4 *)&pIVar18[8].field_0x4 = 0;
        pIVar18[10] = (ICounterCategory)0x0;
        *(undefined4 *)(pIVar18 + 0xb) = 0;
      }
      pIVar5 = pTVar16->Ptr;
      pTVar16->Ptr = pIVar18;
      if (pIVar5 != (ICounterCategory *)0x0) {
        (**(code **)*pIVar5)(pIVar5,1);
      }
    }
    else if (pTVar16->Ptr == (ICounterCategory *)0x0) goto LAB_142ca35fc;
    pIVar18 = pTVar16->Ptr;
    pcVar9 = *(code **)((longlong)*pIVar18 + 0x18);
    if ((*piVar24 <
         `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                             ::__l3::_thread_safe_static_guard_0__),
       `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
       _thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3
                      ::KeyTypeName,L"uint8");
      _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
    }
    (*pcVar9)(pIVar18,local_res18,
              `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
              KeyTypeName);
    local_78 = (FTypedElementInternalData *)0x0;
    local_70 = -1;
    pUVar19 = UTypedElementCounterInterface::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
    }
    iVar1 = local_70;
    if (local_78 != (FTypedElementInternalData *)0x0) {
      lVar25 = (longlong)local_70;
      LOCK();
      local_78->RefCount = local_78->RefCount + -1;
      UNLOCK();
      pFVar6 = (local_78->References).Ptr;
      if ((pFVar6 != (FTypedElementReferences *)0x0) && (local_70 != -1)) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar6);
        local_48 = *(longlong *)&pFVar6->References;
        puVar26 = &(pFVar6->References).field_0x10;
        bVar10 = (byte)iVar1 & 0x1f;
        local_res20 = 1 << bVar10 | 1U >> 0x20 - bVar10;
        if (((iVar1 < 0) || (*(int *)&(pFVar6->References).field_0x28 <= iVar1)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        puVar7 = *(undefined1 **)&(pFVar6->References).field_0x20;
        puVar27 = puVar26;
        if (puVar7 != (undefined1 *)0x0) {
          puVar27 = puVar7;
        }
        local_58 = (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4;
        if (((*(uint *)(puVar27 + local_58) & local_res20) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("AllocationFlags[Index]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                ,0xc5,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if (*(int *)&(pFVar6->References).field_0x34 != 0) {
          *(int *)((longlong)*(int *)&(pFVar6->References).field_0x30 * 0x108 + local_48) = iVar1;
        }
        uVar14 = 0xffffffff;
        *(undefined4 *)(lVar25 * 0x108 + local_48) = 0xffffffff;
        if (0 < *(int *)&(pFVar6->References).field_0x34) {
          uVar14 = *(undefined4 *)&(pFVar6->References).field_0x30;
        }
        *(undefined4 *)(lVar25 * 0x108 + 4 + local_48) = uVar14;
        puVar7 = &(pFVar6->References).field_0x34;
        *(int *)puVar7 = *(int *)puVar7 + 1;
        *(int *)&(pFVar6->References).field_0x30 = iVar1;
        if (((iVar1 < 0) || (*(int *)&(pFVar6->References).field_0x28 <= iVar1)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        puVar7 = *(undefined1 **)&(pFVar6->References).field_0x20;
        if (puVar7 != (undefined1 *)0x0) {
          puVar26 = puVar7;
        }
        *(uint *)(puVar26 + local_58) = *(uint *)(puVar26 + local_58) & ~local_res20;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar6);
      }
    }
    uVar14 = 0xffffffff;
    local_68 = (longlong *)0x0;
    pFVar20 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                        (this_01,(pFVar3->Id).field0_0x0._s_0.TypeId);
    if ((pFVar20 == (FRegisteredElementType *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("RegisteredElementType",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                            ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar11)) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
    if ((pUVar19 == (UClass *)0x0) ||
       (pUVar21 = Z_Construct_UClass_UInterface_NoRegister(), pUVar21 == (UClass *)0x0)) {
LAB_142ca3895:
      pUVar19 = (UClass *)0x0;
    }
    else {
      iVar1 = (int)pUVar21->_padding_;
      if (((int)pUVar19->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar21->_padding_)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (!bVar11) goto LAB_142ca3895;
    }
    pTVar22 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                         (&pFVar20->Interfaces,(FName)pUVar19->_padding_)->field0_0x0;
    if ((pTVar22 != (TObjectPtr<UObject>_u_0 *)0x0) &&
       (this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar22->DebugPtr,
       this_00.field0_0x0 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
      }
      pUVar19 = UTypedElementCounterInterface::StaticClass();
      plVar23 = UObjectBaseUtility::GetInterfaceAddress
                          ((UObjectBaseUtility *)this_00.field0_0x0,pUVar19);
      local_78 = pFVar3;
      local_70 = FTypedElementInternalData::AddRef(pFVar3,true);
      local_68 = plVar23;
    }
    if (local_78 != (FTypedElementInternalData *)0x0) {
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))(local_68,&local_78,&this->ElementCounts);
      }
      iVar1 = local_70;
      if (local_78 != (FTypedElementInternalData *)0x0) {
        lVar25 = (longlong)local_70;
        LOCK();
        local_78->RefCount = local_78->RefCount + -1;
        UNLOCK();
        pFVar6 = (local_78->References).Ptr;
        if ((pFVar6 != (FTypedElementReferences *)0x0) && (local_70 != -1)) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar6);
          lVar8 = *(longlong *)&pFVar6->References;
          puVar26 = &(pFVar6->References).field_0x10;
          bVar10 = (byte)iVar1 & 0x1f;
          local_res20 = 1 << bVar10 | 1U >> 0x20 - bVar10;
          if (((iVar1 < 0) || (*(int *)&(pFVar6->References).field_0x28 <= iVar1)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          puVar7 = *(undefined1 **)&(pFVar6->References).field_0x20;
          puVar27 = puVar26;
          if (puVar7 != (undefined1 *)0x0) {
            puVar27 = puVar7;
          }
          local_58 = (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (((*(uint *)(puVar27 + local_58) & local_res20) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AllocationFlags[Index]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                  ,0xc5,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          if (*(int *)&(pFVar6->References).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(pFVar6->References).field_0x30 * 0x108 + lVar8) = iVar1;
          }
          *(undefined4 *)(lVar25 * 0x108 + lVar8) = 0xffffffff;
          if (0 < *(int *)&(pFVar6->References).field_0x34) {
            uVar14 = *(undefined4 *)&(pFVar6->References).field_0x30;
          }
          *(undefined4 *)(lVar25 * 0x108 + 4 + lVar8) = uVar14;
          puVar7 = &(pFVar6->References).field_0x34;
          *(int *)puVar7 = *(int *)puVar7 + 1;
          *(int *)&(pFVar6->References).field_0x30 = iVar1;
          if (((iVar1 < 0) || (*(int *)&(pFVar6->References).field_0x28 <= iVar1)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          puVar7 = *(undefined1 **)&(pFVar6->References).field_0x20;
          if (puVar7 != (undefined1 *)0x0) {
            puVar26 = puVar7;
          }
          *(uint *)(puVar26 + local_58) = *(uint *)(puVar26 + local_58) & ~local_res20;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar6);
        }
      }
    }
  }
  FTypedElementInternalData::ReleaseRef(pFVar3,iVar13);
LAB_142ca3a74:
  NoteListChanged(this,Added,(FScriptTypedElementHandle *)pFVar4);
  return true;
}

// AddElementImpl @ 142ca3b50

bool __thiscall
TTypedElementList<FTypedElementHandle>::AddElementImpl
          (TTypedElementList<FTypedElementHandle> *this,FTypedElementHandle *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FLegacySync *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FTypedElementId *pFVar7;
  FTypedElementHandle *pFVar8;
  FTypedElementId_u_0 local_res18 [2];
  uint local_res20 [2];
  
  if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
    return false;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
    pFVar7 = &FTypedElementId::Unset;
  }
  else {
    pFVar7 = &param_1->DataPtr->Id;
  }
  local_res18[0] = pFVar7->field0_0x0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int>
            (&this->ElementCombinedIds,local_res20,(bool *)local_res18);
  pFVar8 = (FTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data;
  if (((pFVar8 <= param_1) && (param_1 < pFVar8 + (this->ElementHandles).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = (this->ElementHandles).ArrayNum;
  piVar1 = &(this->ElementHandles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->ElementHandles).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->ElementHandles).AllocatorInstance.Data;
  (this->ElementHandles).ArrayNum = iVar6 + 1;
  pFVar8 = (FTypedElementHandle *)(pFVar2 + (longlong)iVar6 * 0x10);
  pFVar8->DataPtr = param_1->DataPtr;
  pFVar8->ReferenceId = param_1->ReferenceId;
  param_1->DataPtr = (FTypedElementInternalData *)0x0;
  param_1->ReferenceId = -1;
  FTypedElementCounter::AddElement(&this->ElementCounts,pFVar8);
  this_00 = (this->LegacySync).Ptr;
  this->bHasPendingNotify = true;
  if (this_00 != (FLegacySync *)0x0) {
    FLegacySync::Private_EmitSyncEvent(this_00,Added,pFVar8);
  }
  return true;
}

// Append @ 142ca4f80

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::Append
          (TTypedElementList<FScriptTypedElementHandle> *this,
          TSharedRef<TTypedElementList<FScriptTypedElementHandle>_const_,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TTypedElementList<FScriptTypedElementHandle> *pTVar4;
  FScriptTypedElementInternalDataPtr FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptTypedElementHandle local_res8 [2];
  FLegacySyncScopedBatch local_28;
  
  if (this != param_1->Object) {
    local_28.ElementListLegacySync = (this->LegacySync).Ptr;
    local_28.bNotify = true;
    if (local_28.ElementListLegacySync != (FLegacySync *)0x0) {
      (local_28.ElementListLegacySync)->NumOpenBatchOperations =
           (local_28.ElementListLegacySync)->NumOpenBatchOperations + 1;
    }
    uVar6 = (param_1->Object->ElementHandles).ArrayNum + (this->ElementHandles).ArrayNum;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Reserve
              (&this->ElementCombinedIds,uVar6);
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    piVar1 = &(this->ElementHandles).ArrayMax;
    if (*piVar1 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar6,&(this->ElementHandles).AllocatorInstance,(this->ElementHandles).ArrayNum
                 ,piVar1);
    }
    pTVar4 = param_1->Object;
    pFVar7 = (pTVar4->ElementHandles).AllocatorInstance.Data;
    iVar3 = (pTVar4->ElementHandles).ArrayNum;
    pFVar2 = pFVar7 + (longlong)iVar3 * 8;
    while( true ) {
      if ((pTVar4->ElementHandles).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FScriptTypedElementHandle_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar2) break;
      FVar5.ControlBlock = *(FScriptTypedElementInternalDataControlBlock **)pFVar7;
      if ((FVar5.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
         ((FVar5.ControlBlock)->Data != (FTypedElementInternalData *)0x0)) {
        (FVar5.ControlBlock)->WeakRefCount = (FVar5.ControlBlock)->WeakRefCount + 1;
        local_res8[0].InternalData.ControlBlock =
             (FScriptTypedElementInternalDataPtr)
             (FScriptTypedElementInternalDataPtr)FVar5.ControlBlock;
        AddElementImpl(this,local_res8);
        if (local_res8[0].InternalData.ControlBlock !=
            (FScriptTypedElementInternalDataControlBlock *)0x0) {
          *(int *)((longlong)local_res8[0].InternalData.ControlBlock + 8) =
               *(int *)((longlong)local_res8[0].InternalData.ControlBlock + 8) + -1;
          if (*(int *)((longlong)local_res8[0].InternalData.ControlBlock + 8) == 0) {
            ::operator_delete((void *)local_res8[0].InternalData.ControlBlock,0x10);
          }
        }
      }
      pFVar7 = pFVar7 + 8;
    }
    FLegacySyncScopedBatch::~FLegacySyncScopedBatch(&local_28);
  }
  return;
}

// Append @ 142ca50a0

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::Append
          (TTypedElementList<FScriptTypedElementHandle> *this,
          TArrayView<FScriptTypedElementHandle_const_,int> *param_1)

{
  FScriptTypedElementHandle *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptTypedElementHandle *pFVar4;
  FScriptTypedElementInternalDataPtr local_res8;
  FLegacySyncScopedBatch local_18;
  
  local_18.ElementListLegacySync = (this->LegacySync).Ptr;
  local_18.bNotify = true;
  if (local_18.ElementListLegacySync != (FLegacySync *)0x0) {
    (local_18.ElementListLegacySync)->NumOpenBatchOperations =
         (local_18.ElementListLegacySync)->NumOpenBatchOperations + 1;
  }
  iVar2 = param_1->ArrayNum;
  uVar3 = (this->ElementHandles).ArrayNum + iVar2;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Reserve
            (&this->ElementCombinedIds,uVar3);
  if (-1 < (int)uVar3) {
    if ((this->ElementHandles).ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,&(this->ElementHandles).AllocatorInstance,(this->ElementHandles).ArrayNum
                 ,&(this->ElementHandles).ArrayMax);
    }
    pFVar4 = param_1->DataPtr;
    pFVar1 = pFVar4 + iVar2;
    for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 1) {
      local_res8.ControlBlock = (pFVar4->InternalData).ControlBlock;
      if (local_res8.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) {
        (local_res8.ControlBlock)->WeakRefCount = (local_res8.ControlBlock)->WeakRefCount + 1;
      }
      AddElementImpl(this,(FScriptTypedElementHandle *)&local_res8);
      if ((local_res8.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
         ((local_res8.ControlBlock)->WeakRefCount = (local_res8.ControlBlock)->WeakRefCount + -1,
         (local_res8.ControlBlock)->WeakRefCount == 0)) {
        ::operator_delete(local_res8.ControlBlock,0x10);
      }
    }
    FLegacySyncScopedBatch::~FLegacySyncScopedBatch(&local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// Append @ 142ca51b0

void __thiscall
TTypedElementList<FTypedElementHandle>::Append
          (TTypedElementList<FTypedElementHandle> *this,
          TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *param_1)

{
  int *piVar1;
  int iVar2;
  FLegacySync *this_00;
  TTypedElementList<FTypedElementHandle> *pTVar3;
  bool bVar4;
  FTypedElementHandle *pFVar5;
  uint uVar6;
  FTypedElementHandle *pFVar7;
  undefined1 local_res8 [8];
  TTypedElementList<FTypedElementHandle> *local_res10;
  
  if (this != param_1->Object) {
    this_00 = (this->LegacySync).Ptr;
    if (this_00 != (FLegacySync *)0x0) {
      this_00->NumOpenBatchOperations = this_00->NumOpenBatchOperations + 1;
    }
    uVar6 = (param_1->Object->ElementHandles).ArrayNum + (this->ElementHandles).ArrayNum;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Reserve
              (&this->ElementCombinedIds,uVar6);
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    piVar1 = &(this->ElementHandles).ArrayMax;
    if (*piVar1 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar6,&(this->ElementHandles).AllocatorInstance,
                 (this->ElementHandles).ArrayNum,piVar1);
    }
    pTVar3 = param_1->Object;
    iVar2 = (pTVar3->ElementHandles).ArrayNum;
    pFVar5 = (FTypedElementHandle *)(pTVar3->ElementHandles).AllocatorInstance.Data;
    pFVar7 = pFVar5 + iVar2;
    local_res10 = this;
    while( true ) {
      if ((pTVar3->ElementHandles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FTypedElementHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((pFVar5 == pFVar7) ||
         ((pFVar5->DataPtr != (FTypedElementInternalData *)0x0 &&
          (bVar4 = `TTypedElementList<FTypedElementHandle>::Append'::__l5::<lambda_1>::operator()
                             (&local_res10,pFVar5), !bVar4)))) break;
      pFVar5 = pFVar5 + 1;
    }
    if (this_00 != (FLegacySync *)0x0) {
      FLegacySync::EndBatchOperation(this_00,true);
    }
  }
  return;
}

// Append @ 142ca52b0

void __thiscall
TTypedElementList<FTypedElementHandle>::Append
          (TTypedElementList<FTypedElementHandle> *this,
          TArrayView<FTypedElementHandle_const_,int> *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FTypedElementReferences *pFVar3;
  longlong lVar4;
  undefined1 *puVar5;
  TObjectPtr<UObject> this_00;
  FTypedElementInternalData *this_01;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  FTypedElementId *pFVar12;
  UTypedElementRegistry *this_02;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar13;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar14;
  ICounterCategory *pIVar15;
  UClass *pUVar16;
  FRegisteredElementType *pFVar17;
  UClass *pUVar18;
  TObjectPtr<UObject>_u_0 *pTVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  uint uVar22;
  ICounterCategory *pIVar23;
  FTypedElementHandle *pFVar24;
  int *piVar25;
  undefined1 *puVar26;
  longlong lVar27;
  FTypedElementHandle *pFVar28;
  FTypedElementHandle *pFVar29;
  FTypedElementCounter *this_03;
  FLegacySync *this_04;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar30;
  byte local_res18 [8];
  uint local_res20;
  FTypedElementInternalData *local_c8;
  int local_c0;
  FTypedElementInternalData *local_b8;
  int local_b0;
  longlong *local_a8;
  FTypedElementId_u_0 local_a0 [2];
  FName local_98;
  FTypedElementHandle *local_90;
  FTypedElementHandle *local_88;
  uint local_80 [2];
  UTypedElementRegistry *local_78;
  FTypedElementCounter *local_70;
  FTypedElementHandle *local_68;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *local_60;
  int *local_58;
  FLegacySync *local_50;
  
  this_04 = (this->LegacySync).Ptr;
  if (this_04 != (FLegacySync *)0x0) {
    this_04->NumOpenBatchOperations = this_04->NumOpenBatchOperations + 1;
  }
  iVar9 = param_1->ArrayNum;
  uVar22 = (this->ElementHandles).ArrayNum + iVar9;
  local_50 = this_04;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Reserve
            (&this->ElementCombinedIds,uVar22);
  pTVar30 = &this->ElementHandles;
  local_60 = pTVar30;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  piVar25 = &(this->ElementHandles).ArrayMax;
  local_58 = piVar25;
  if (*piVar25 < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar22,&pTVar30->AllocatorInstance,(this->ElementHandles).ArrayNum,piVar25);
  }
  pFVar24 = param_1->DataPtr;
  pFVar28 = pFVar24 + iVar9;
  local_88 = pFVar24;
  local_68 = pFVar28;
  if (pFVar24 != pFVar28) {
    do {
      local_c8 = pFVar24->DataPtr;
      local_c0 = 0xffffffff;
      if ((local_c8 != (FTypedElementInternalData *)0x0) &&
         (local_88 = pFVar24, local_c0 = FTypedElementInternalData::AddRef(local_c8,true),
         local_c8 != (FTypedElementInternalData *)0x0)) {
        TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                     *)&this->OnPreChangeDelegate,this);
        if (local_c8 == (FTypedElementInternalData *)0x0) {
          pFVar12 = &FTypedElementId::Unset;
        }
        else {
          pFVar12 = &local_c8->Id;
        }
        local_a0[0] = pFVar12->field0_0x0;
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
        Emplace<unsigned_int>(&this->ElementCombinedIds,local_80,(bool *)local_a0);
        pFVar2 = (pTVar30->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 < pFVar2 + (longlong)*piVar25 * 0x10)) &&
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
        iVar9 = pTVar30->ArrayNum;
        if (iVar9 == *piVar25) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar30->AllocatorInstance,piVar25);
        }
        this_03 = &this->ElementCounts;
        pTVar30->ArrayNum = iVar9 + 1;
        pFVar29 = (FTypedElementHandle *)
                  ((pTVar30->AllocatorInstance).Data + (longlong)iVar9 * 0x10);
        pFVar29->DataPtr = local_c8;
        pFVar29->ReferenceId = local_c0;
        local_c8 = (FTypedElementInternalData *)0x0;
        local_c0 = -1;
        local_90 = pFVar29;
        local_70 = this_03;
        this_02 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_03);
        local_78 = this_02;
        if ((this_02 != (UTypedElementRegistry *)0x0) &&
           (pFVar29->DataPtr != (FTypedElementInternalData *)0x0)) {
          local_res18[0] = (pFVar29->DataPtr->Id).field0_0x0._s_0.TypeId;
          piVar25 = (int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c);
          if ((*piVar25 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::FName::FName(&NAME_ElementType,"ElementType");
            _Init_thread_footer(&::_TSS0);
          }
          local_98 = NAME_ElementType;
          pTVar13 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                    ::Find(&(this->ElementCounts).CounterCategories,NAME_ElementType);
          if (pTVar13 ==
              (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
               *)0x0) {
            pTVar14 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                      ::AllocateMemoryForEmplace<FName_const_&>
                                (&(this->ElementCounts).CounterCategories,&local_98);
            pTVar13 = (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
                       *)&pTVar14->field_0x8;
            *(uint *)&pTVar14->field_0x0 = local_98.ComparisonIndex.Value;
            *(uint *)&pTVar14->field_0x4 = local_98.Number;
            *pTVar13 = (ICounterCategory *)0x0;
LAB_142ca5538:
            pIVar23 = (ICounterCategory *)0x0;
            pIVar15 = ::operator_new(0x60);
            if (pIVar15 != (ICounterCategory *)0x0) {
              *pIVar15 = (ICounterCategory)&___7__TCounterCategory_E_FTypedElementCounter__6B_;
              GetTypedElementCounterKeyName<unsigned_char>();
              pIVar15[2] = (ICounterCategory)0x0;
              pIVar15[3] = (ICounterCategory)0x0;
              pIVar15[6] = (ICounterCategory)0x0;
              *(undefined4 *)(pIVar15 + 7) = 0;
              *(undefined4 *)&pIVar15[7].field_0x4 = 0x80;
              *(undefined4 *)(pIVar15 + 8) = 0xffffffff;
              *(undefined4 *)&pIVar15[8].field_0x4 = 0;
              pIVar15[10] = (ICounterCategory)0x0;
              *(undefined4 *)(pIVar15 + 0xb) = 0;
              pIVar23 = pIVar15;
            }
            pIVar15 = pTVar13->Ptr;
            pTVar13->Ptr = pIVar23;
            if (pIVar15 != (ICounterCategory *)0x0) {
              (**(code **)*pIVar15)(pIVar15,1);
            }
          }
          else if (pTVar13->Ptr == (ICounterCategory *)0x0) goto LAB_142ca5538;
          pIVar23 = pTVar13->Ptr;
          pcVar6 = *(code **)((longlong)*pIVar23 + 0x18);
          if ((*piVar25 <
               `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
               _thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                                   ::__l3::_thread_safe_static_guard_0__),
             `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
             _thread_safe_static_guard_0__ == -1)) {
            ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                            ::__l3::KeyTypeName,L"uint8");
            _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                                 ::__l3::_thread_safe_static_guard_0__);
          }
          (*pcVar6)(pIVar23,local_res18,
                    `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
                    KeyTypeName);
          local_b8 = (FTypedElementInternalData *)0x0;
          local_b0 = -1;
          local_a8 = (longlong *)0x0;
          pUVar16 = UTypedElementCounterInterface::StaticClass();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar16);
          }
          iVar9 = local_b0;
          if (local_b8 != (FTypedElementInternalData *)0x0) {
            lVar27 = (longlong)local_b0;
            LOCK();
            local_b8->RefCount = local_b8->RefCount + -1;
            UNLOCK();
            pFVar3 = (local_b8->References).Ptr;
            if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_b0 != -1)) {
              EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
              lVar4 = *(longlong *)&(pFVar3->References).field_0x0;
              puVar26 = &(pFVar3->References).field_0x10;
              bVar7 = (byte)iVar9 & 0x1f;
              local_res20 = 1 << bVar7 | 1U >> 0x20 - bVar7;
              if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
              puVar21 = puVar26;
              if (puVar5 != (undefined1 *)0x0) {
                puVar21 = puVar5;
              }
              iVar10 = iVar9;
              if (iVar9 < 0) {
                iVar10 = iVar9 + 0x1f;
              }
              lVar1 = (longlong)(iVar10 >> 5) * 4;
              if (((*(uint *)(puVar21 + lVar1) & local_res20) == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("AllocationFlags[Index]",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                     ,0xc5,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (*(int *)&(pFVar3->References).field_0x34 != 0) {
                *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar4) = iVar9
                ;
              }
              *(undefined4 *)(lVar27 * 0x108 + lVar4) = 0xffffffff;
              if (*(int *)&(pFVar3->References).field_0x34 < 1) {
                uVar11 = 0xffffffff;
              }
              else {
                uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
              }
              *(undefined4 *)(lVar27 * 0x108 + 4 + lVar4) = uVar11;
              puVar5 = &(pFVar3->References).field_0x34;
              *(int *)puVar5 = *(int *)puVar5 + 1;
              *(int *)&(pFVar3->References).field_0x30 = iVar9;
              if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
              if (puVar5 != (undefined1 *)0x0) {
                puVar26 = puVar5;
              }
              *(uint *)(puVar26 + lVar1) = *(uint *)(puVar26 + lVar1) & ~local_res20;
              LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
              pFVar29 = local_90;
              this_03 = local_70;
              this_02 = local_78;
            }
          }
          local_b8 = (FTypedElementInternalData *)0x0;
          local_b0 = -1;
          local_a8 = (longlong *)0x0;
          if (pFVar29->DataPtr == (FTypedElementInternalData *)0x0) {
LAB_142ca5899:
            iVar9 = local_b0;
            if (local_b8 != (FTypedElementInternalData *)0x0) {
              lVar27 = (longlong)local_b0;
              LOCK();
              local_b8->RefCount = local_b8->RefCount + -1;
              UNLOCK();
              pFVar3 = (local_b8->References).Ptr;
              if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_b0 != -1)) {
                EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
                lVar4 = *(longlong *)&pFVar3->References;
                puVar26 = &(pFVar3->References).field_0x10;
                bVar7 = (byte)iVar9 & 0x1f;
                uVar22 = 1 << bVar7 | 1U >> 0x20 - bVar7;
                if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
                puVar21 = puVar26;
                if (puVar5 != (undefined1 *)0x0) {
                  puVar21 = puVar5;
                }
                iVar10 = iVar9;
                if (iVar9 < 0) {
                  iVar10 = iVar9 + 0x1f;
                }
                lVar1 = (longlong)(iVar10 >> 5) * 4;
                if (((*(uint *)(puVar21 + lVar1) & uVar22) == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("AllocationFlags[Index]",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                       ,0xc5,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (*(int *)&(pFVar3->References).field_0x34 != 0) {
                  *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar4) =
                       iVar9;
                }
                *(undefined4 *)(lVar27 * 0x108 + lVar4) = 0xffffffff;
                if (*(int *)&(pFVar3->References).field_0x34 < 1) {
                  uVar11 = 0xffffffff;
                }
                else {
                  uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
                }
                *(undefined4 *)(lVar27 * 0x108 + 4 + lVar4) = uVar11;
                puVar5 = &(pFVar3->References).field_0x34;
                *(int *)puVar5 = *(int *)puVar5 + 1;
                *(int *)&(pFVar3->References).field_0x30 = iVar9;
                if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
                if (puVar5 != (undefined1 *)0x0) {
                  puVar26 = puVar5;
                }
                *(uint *)(puVar26 + lVar1) = *(uint *)(puVar26 + lVar1) & ~uVar22;
                LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
                pFVar29 = local_90;
              }
            }
          }
          else {
            pFVar17 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                                (this_02,(pFVar29->DataPtr->Id).field0_0x0._s_0.TypeId);
            if ((pFVar17 == (FRegisteredElementType *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RegisteredElementType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                                   ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar8
               )) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((pUVar16 == (UClass *)0x0) ||
               (pUVar18 = Z_Construct_UClass_UInterface_NoRegister(), pUVar18 == (UClass *)0x0)) {
LAB_142ca580a:
              pUVar16 = (UClass *)0x0;
            }
            else {
              iVar9 = (int)pUVar18->_padding_;
              if (((int)pUVar16->_padding_ < iVar9) ||
                 ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar9 * 8) !=
                  &pUVar18->_padding_)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (!bVar8) goto LAB_142ca580a;
            }
            pTVar19 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>
                       ::Find(&pFVar17->Interfaces,(FName)pUVar16->_padding_)->field0_0x0;
            plVar20 = local_a8;
            if ((pTVar19 != (TObjectPtr<UObject>_u_0 *)0x0) &&
               (this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar19->DebugPtr,
               this_00.field0_0x0 != (UObject *)0x0)) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
              }
              this_01 = pFVar29->DataPtr;
              pUVar16 = UTypedElementCounterInterface::StaticClass();
              plVar20 = UObjectBaseUtility::GetInterfaceAddress
                                  ((UObjectBaseUtility *)this_00.field0_0x0,pUVar16);
              local_b8 = this_01;
              if (this_01 != (FTypedElementInternalData *)0x0) {
                local_b0 = FTypedElementInternalData::AddRef(this_01,true);
              }
            }
            local_a8 = plVar20;
            if (local_b8 != (FTypedElementInternalData *)0x0) {
              if (local_a8 != (longlong *)0x0) {
                (**(code **)(*local_a8 + 0x10))(local_a8,&local_b8,this_03);
              }
              goto LAB_142ca5899;
            }
          }
          local_a8 = (longlong *)0x0;
          local_b8 = (FTypedElementInternalData *)0x0;
          local_b0 = 0xffffffff;
          pFVar24 = local_88;
          pFVar28 = local_68;
        }
        NoteListChanged(this,Added,pFVar29);
        piVar25 = local_58;
        pTVar30 = local_60;
        if (local_c8 != (FTypedElementInternalData *)0x0) {
          FTypedElementInternalData::ReleaseRef(local_c8,local_c0);
        }
      }
      pFVar24 = pFVar24 + 1;
      local_c8 = (FTypedElementInternalData *)0x0;
      local_c0 = 0xffffffff;
      this_04 = local_50;
      local_88 = pFVar24;
    } while (pFVar24 != pFVar28);
  }
  if (this_04 != (FLegacySync *)0x0) {
    FLegacySync::EndBatchOperation(this_04,true);
  }
  return;
}

// Clone @ 142ca79e0

TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1> * __thiscall
TTypedElementList<FScriptTypedElementHandle>::Clone
          (TTypedElementList<FScriptTypedElementHandle> *this,
          TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TTypedElementList<FScriptTypedElementHandle> *this_00;
  UTypedElementRegistry *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptTypedElementHandle local_res8;
  
  pUVar3 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
  Private_CreateElementList(__return_storage_ptr__,pUVar3);
  pFVar4 = (this->ElementHandles).AllocatorInstance.Data;
  iVar2 = (this->ElementHandles).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ElementHandles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FScriptTypedElementHandle_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    local_res8.InternalData.ControlBlock = *(FScriptTypedElementInternalDataPtr *)pFVar4;
    this_00 = __return_storage_ptr__->Object;
    if (local_res8.InternalData.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0)
    {
      ((FScriptTypedElementInternalDataControlBlock *)local_res8.InternalData.ControlBlock)->
      WeakRefCount = ((FScriptTypedElementInternalDataControlBlock *)
                     local_res8.InternalData.ControlBlock)->WeakRefCount + 1;
    }
    AddElementImpl(this_00,&local_res8);
    if (local_res8.InternalData.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0)
    {
      *(int *)((longlong)local_res8.InternalData.ControlBlock + 8) =
           *(int *)((longlong)local_res8.InternalData.ControlBlock + 8) + -1;
      if (*(int *)((longlong)local_res8.InternalData.ControlBlock + 8) == 0) {
        ::operator_delete((void *)local_res8.InternalData.ControlBlock,0x10);
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  return __return_storage_ptr__;
}

// Clone @ 142ca7a90

TSharedRef<TTypedElementList<FTypedElementHandle>,1> * __thiscall
TTypedElementList<FTypedElementHandle>::Clone
          (TTypedElementList<FTypedElementHandle> *this,
          TSharedRef<TTypedElementList<FTypedElementHandle>,1> *__return_storage_ptr__)

{
  int iVar1;
  UTypedElementRegistry *pUVar2;
  FTypedElementHandle *pFVar3;
  FTypedElementHandle *pFVar4;
  undefined1 local_res8 [8];
  
  pUVar2 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
  Private_CreateElementList(__return_storage_ptr__,pUVar2);
  iVar1 = (this->ElementHandles).ArrayNum;
  pFVar3 = (FTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data;
  pFVar4 = pFVar3 + iVar1;
  while( true ) {
    if ((this->ElementHandles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTypedElementHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    Add(__return_storage_ptr__->Object,pFVar3);
    pFVar3 = pFVar3 + 1;
  }
  return __return_storage_ptr__;
}

// Contains @ 142ca8400

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::Contains
          (TTypedElementList<FScriptTypedElementHandle> *this,FScriptTypedElementHandle *param_1)

{
  FScriptTypedElementInternalDataControlBlock *pFVar1;
  FTypedElementInternalData *pFVar2;
  longlong lVar3;
  int iVar4;
  FTypedElementId *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  pFVar1 = (param_1->InternalData).ControlBlock;
  if ((pFVar1 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
     (pFVar2 = pFVar1->Data, pFVar2 == (FTypedElementInternalData *)0x0)) {
    pFVar5 = &FTypedElementId::Unset;
  }
  else {
    pFVar5 = &pFVar2->Id;
  }
  if ((((FTypedElementId_u_0_s_0 *)pFVar5)->TypeId != 0) &&
     (*(int *)&(this->ElementCombinedIds).Elements.field_0x8 !=
      *(int *)&(this->ElementCombinedIds).Elements.field_0x34)) {
    FVar6 = (this->ElementCombinedIds).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->ElementCombinedIds).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->ElementCombinedIds).HashSize - 1U & pFVar5->field0_0x0) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)&(this->ElementCombinedIds).Elements;
      do {
        if (((FTypedElementId_u_0 *)(lVar3 + (longlong)iVar4 * 0xc))->CombinedId ==
            pFVar5->field0_0x0) {
          return true;
        }
        iVar4 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0xc);
      } while (iVar4 != -1);
    }
  }
  return false;
}

// Contains @ 142ca8480

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::Contains
          (TTypedElementList<FScriptTypedElementHandle> *this,FTypedElementId *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (((param_1->field0_0x0)._s_0.TypeId != 0) &&
     (*(int *)&(this->ElementCombinedIds).Elements.field_0x8 !=
      *(int *)&(this->ElementCombinedIds).Elements.field_0x34)) {
    FVar3 = (this->ElementCombinedIds).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->ElementCombinedIds).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)
                    ((this->ElementCombinedIds).HashSize - 1U & (param_1->field0_0x0).CombinedId) *
                    4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->ElementCombinedIds).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == (param_1->field0_0x0).CombinedId) {
          return true;
        }
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// Contains @ 142ca84f0

bool __thiscall
TTypedElementList<FTypedElementHandle>::Contains
          (TTypedElementList<FTypedElementHandle> *this,FTypedElementHandle *param_1)

{
  longlong lVar1;
  int iVar2;
  FTypedElementId *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
    pFVar3 = &FTypedElementId::Unset;
  }
  else {
    pFVar3 = &param_1->DataPtr->Id;
  }
  if ((((FTypedElementId_u_0_s_0 *)pFVar3)->TypeId != 0) &&
     (*(int *)&(this->ElementCombinedIds).Elements.field_0x8 !=
      *(int *)&(this->ElementCombinedIds).Elements.field_0x34)) {
    FVar4 = (this->ElementCombinedIds).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->ElementCombinedIds).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->ElementCombinedIds).HashSize - 1U & pFVar3->field0_0x0) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->ElementCombinedIds).Elements;
      do {
        if (((FTypedElementId_u_0 *)(lVar1 + (longlong)iVar2 * 0xc))->CombinedId ==
            pFVar3->field0_0x0) {
          return true;
        }
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// Contains @ 142ca8570

bool __thiscall
TTypedElementList<FTypedElementHandle>::Contains
          (TTypedElementList<FTypedElementHandle> *this,FTypedElementId *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (((param_1->field0_0x0)._s_0.TypeId != 0) &&
     (*(int *)&(this->ElementCombinedIds).Elements.field_0x8 !=
      *(int *)&(this->ElementCombinedIds).Elements.field_0x34)) {
    FVar3 = (this->ElementCombinedIds).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->ElementCombinedIds).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)
                    ((this->ElementCombinedIds).HashSize - 1U & (param_1->field0_0x0).CombinedId) *
                    4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->ElementCombinedIds).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == (param_1->field0_0x0).CombinedId) {
          return true;
        }
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// ContainsElementImpl @ 142ca8810

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::ContainsElementImpl
          (TTypedElementList<FScriptTypedElementHandle> *this,FTypedElementId *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (((param_1->field0_0x0)._s_0.TypeId != 0) &&
     (*(int *)&(this->ElementCombinedIds).Elements.field_0x8 !=
      *(int *)&(this->ElementCombinedIds).Elements.field_0x34)) {
    FVar3 = (this->ElementCombinedIds).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->ElementCombinedIds).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)
                    ((this->ElementCombinedIds).HashSize - 1U & (param_1->field0_0x0).CombinedId) *
                    4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->ElementCombinedIds).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == (param_1->field0_0x0).CombinedId) {
          return true;
        }
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// ContainsElementImpl @ 142ca8880

bool __thiscall
TTypedElementList<FTypedElementHandle>::ContainsElementImpl
          (TTypedElementList<FTypedElementHandle> *this,FTypedElementId *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (((param_1->field0_0x0)._s_0.TypeId != 0) &&
     (*(int *)&(this->ElementCombinedIds).Elements.field_0x8 !=
      *(int *)&(this->ElementCombinedIds).Elements.field_0x34)) {
    FVar3 = (this->ElementCombinedIds).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->ElementCombinedIds).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)
                    ((this->ElementCombinedIds).HashSize - 1U & (param_1->field0_0x0).CombinedId) *
                    4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->ElementCombinedIds).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == (param_1->field0_0x0).CombinedId) {
          return true;
        }
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// CountElements @ 142ca9590

int __thiscall
TTypedElementList<FScriptTypedElementHandle>::CountElements
          (TTypedElementList<FScriptTypedElementHandle> *this,TSubclassOf<UInterface> *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  int local_res10 [2];
  int *local_res18;
  code *local_18;
  int **local_10;
  
  pUVar2 = (param_1->Class).field0_0x0.DebugPtr;
  local_res10[0] = 0;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UInterface_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && ((param_1->Class).field0_0x0.DebugPtr != (UClass *)0x0)) {
        local_res18 = local_res10;
        local_10 = &local_res18;
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TTypedElementList<FScriptTypedElementHandle>::CountElements'::__l5::<lambda_1>,bool,FScriptTypedElementHandle_const_&>
                   ::Call;
        ForEachElementHandle
                  (this,(TFunctionRef<bool___cdecl(FScriptTypedElementHandle_const_&)> *)&local_18,
                   param_1);
        return local_res10[0];
      }
    }
  }
  return (this->ElementHandles).ArrayNum;
}

// CountElements @ 142ca9650

int __thiscall
TTypedElementList<FTypedElementHandle>::CountElements
          (TTypedElementList<FTypedElementHandle> *this,TSubclassOf<UInterface> *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  int local_res10 [2];
  int *local_res18;
  code *local_18;
  int **local_10;
  
  pUVar2 = (param_1->Class).field0_0x0.DebugPtr;
  local_res10[0] = 0;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UInterface_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && ((param_1->Class).field0_0x0.DebugPtr != (UClass *)0x0)) {
        local_res18 = local_res10;
        local_10 = &local_res18;
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TTypedElementList<FTypedElementHandle>::CountElements'::__l5::<lambda_1>,bool,FTypedElementHandle_const_&>
                   ::Call;
        ForEachElementHandle
                  (this,(TFunctionRef<bool___cdecl(FTypedElementHandle_const_&)> *)&local_18,param_1
                  );
        return local_res10[0];
      }
    }
  }
  return (this->ElementHandles).ArrayNum;
}

// CountElementsOfType @ 142ca9710

int __thiscall
TTypedElementList<FScriptTypedElementHandle>::CountElementsOfType
          (TTypedElementList<FScriptTypedElementHandle> *this,uchar param_1)

{
  int iVar1;
  uchar local_res10 [24];
  
  local_res10[0] = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NAME_ElementType,"ElementType");
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar1 = FTypedElementCounter::GetCounterValue<unsigned_char>
                    (&this->ElementCounts,NAME_ElementType,local_res10);
  return iVar1;
}

// CountElementsOfType @ 142ca97a0

int __thiscall
TTypedElementList<FScriptTypedElementHandle>::CountElementsOfType
          (TTypedElementList<FScriptTypedElementHandle> *this,FName param_1)

{
  int iVar1;
  UTypedElementRegistry *this_00;
  FRegisteredElementType *pFVar2;
  FName local_res8;
  
  this_00 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
  if (this_00 != (UTypedElementRegistry *)0x0) {
    local_res8 = param_1;
    pFVar2 = UTypedElementRegistry::GetRegisteredElementTypeFromName(this_00,&local_res8);
    if ((pFVar2 != (FRegisteredElementType *)0x0) && (pFVar2->TypeId != '\0')) {
      iVar1 = CountElementsOfType(this,pFVar2->TypeId);
      return iVar1;
    }
  }
  return 0;
}

// CountElementsOfType @ 142ca9810

int __thiscall
TTypedElementList<FTypedElementHandle>::CountElementsOfType
          (TTypedElementList<FTypedElementHandle> *this,uchar param_1)

{
  int iVar1;
  uchar local_res10 [24];
  
  local_res10[0] = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NAME_ElementType,"ElementType");
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar1 = FTypedElementCounter::GetCounterValue<unsigned_char>
                    (&this->ElementCounts,NAME_ElementType,local_res10);
  return iVar1;
}

// CountElementsOfType @ 142ca98a0

int __thiscall
TTypedElementList<FTypedElementHandle>::CountElementsOfType
          (TTypedElementList<FTypedElementHandle> *this,FName param_1)

{
  int iVar1;
  UTypedElementRegistry *this_00;
  FRegisteredElementType *pFVar2;
  FName local_res8;
  
  this_00 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
  if (this_00 != (UTypedElementRegistry *)0x0) {
    local_res8 = param_1;
    pFVar2 = UTypedElementRegistry::GetRegisteredElementTypeFromName(this_00,&local_res8);
    if ((pFVar2 != (FRegisteredElementType *)0x0) && (pFVar2->TypeId != '\0')) {
      iVar1 = CountElementsOfType(this,pFVar2->TypeId);
      return iVar1;
    }
  }
  return 0;
}

// Empty @ 142cab110

void __thiscall
TTypedElementList<FTypedElementHandle>::Empty
          (TTypedElementList<FTypedElementHandle> *this,int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  FLegacySync *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint uVar12;
  FTypedElementHandle local_38;
  
  iVar4 = (this->ElementHandles).ArrayNum;
  if (iVar4 != 0) {
    TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                 *)&this->OnPreChangeDelegate,this);
  }
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Empty
            (&this->ElementCombinedIds,param_1);
  if (-1 < param_1) {
    DestructItems<FTypedElementHandle,int>
              ((FTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data,
               (this->ElementHandles).ArrayNum);
    piVar1 = &(this->ElementHandles).ArrayMax;
    (this->ElementHandles).ArrayNum = 0;
    if (*piVar1 != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&(this->ElementHandles).AllocatorInstance,0,piVar1);
    }
    FTypedElementCounter::ClearCounters(&this->ElementCounts);
    if (iVar4 != 0) {
      FTypedElementCounter::ClearCounters(&this->ElementCounts);
      this_00 = (this->LegacySync).Ptr;
      uVar10 = 0xffffffff;
      local_38._12_4_ = 0;
      local_38.DataPtr = (FTypedElementInternalData *)0x0;
      local_38.ReferenceId = -1;
      this->bHasPendingNotify = true;
      if (this_00 != (FLegacySync *)0x0) {
        FLegacySync::Private_EmitSyncEvent(this_00,Cleared,&local_38);
        iVar4 = local_38.ReferenceId;
        if (local_38.DataPtr != (FTypedElementInternalData *)0x0) {
          lVar11 = (longlong)local_38.ReferenceId;
          LOCK();
          (local_38.DataPtr)->RefCount = (local_38.DataPtr)->RefCount + -1;
          UNLOCK();
          lpCriticalSection = ((local_38.DataPtr)->References).Ptr;
          if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_38.ReferenceId != -1))
          {
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            lVar5 = *(longlong *)&(lpCriticalSection->References).field_0x0;
            puVar2 = &(lpCriticalSection->References).field_0x10;
            bVar7 = (byte)iVar4 & 0x1f;
            uVar12 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if ((iVar4 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar4)) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L"");
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = puVar2;
            }
            if ((*(uint *)(puVar9 + lVar3) & uVar12) == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L"");
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar5
                      ) = iVar4;
            }
            *(undefined4 *)(lVar11 * 0x108 + lVar5) = 0xffffffff;
            if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
              uVar10 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
            }
            *(undefined4 *)(lVar11 * 0x108 + 4 + lVar5) = uVar10;
            puVar9 = &(lpCriticalSection->References).field_0x34;
            *(int *)puVar9 = *(int *)puVar9 + 1;
            *(int *)&(lpCriticalSection->References).field_0x30 = iVar4;
            if ((iVar4 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar4)) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L"");
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = puVar2;
            }
            *(uint *)(puVar9 + lVar3) = *(uint *)(puVar9 + lVar3) & ~uVar12;
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          }
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// ForEachElementHandle @ 142cac730

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::ForEachElementHandle
          (TTypedElementList<FScriptTypedElementHandle> *this,
          TFunctionRef<bool___cdecl(FScriptTypedElementHandle_const_&)> *param_1,
          TSubclassOf<UInterface> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UClass *pUVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  UTypedElementRegistry *this_00;
  FTypedElementId *pFVar10;
  FScriptContainerElement *pFVar11;
  TObjectPtr<UClass>_u_0 local_res8;
  
  pFVar11 = (this->ElementHandles).AllocatorInstance.Data;
  iVar2 = (this->ElementHandles).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  do {
    if ((this->ElementHandles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FScriptTypedElementHandle_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar11 == pFVar1) {
      return;
    }
    if ((*(longlong **)pFVar11 == (longlong *)0x0) || (**(longlong **)pFVar11 == 0))
    goto LAB_142cac84d;
    pUVar4 = (param_2->Class).field0_0x0.DebugPtr;
    if ((pUVar4 == (UClass *)0x0) ||
       (pUVar8 = Z_Construct_UClass_UInterface_NoRegister(), pUVar8 == (UClass *)0x0)) {
LAB_142cac83d:
      cVar7 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar11);
      if (cVar7 == '\0') {
        return;
      }
    }
    else {
      iVar3 = (int)pUVar8->_padding_;
      if (((int)pUVar4->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar8->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((!bVar6) || ((param_2->Class).field0_0x0.DebugPtr == (UClass *)0x0)) goto LAB_142cac83d;
      pUVar9 = FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
      if (pUVar9 != (UObject *)0x0) {
        this_00 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
        local_res8.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->Class).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res8.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
        }
        if ((*(longlong **)pFVar11 == (longlong *)0x0) ||
           (lVar5 = **(longlong **)pFVar11, pFVar10 = (FTypedElementId *)(lVar5 + 8), lVar5 == 0)) {
          pFVar10 = &FTypedElementId::Unset;
        }
        pUVar9 = UTypedElementRegistry::GetElementInterfaceImpl
                           (this_00,(pFVar10->field0_0x0)._s_0.TypeId,
                            (TSubclassOf<UInterface> *)&local_res8.ObjectPtr);
        if (pUVar9 != (UObject *)0x0) goto LAB_142cac83d;
      }
    }
LAB_142cac84d:
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// ForEachElementHandle @ 142cac880

void __thiscall
TTypedElementList<FTypedElementHandle>::ForEachElementHandle
          (TTypedElementList<FTypedElementHandle> *this,
          TFunctionRef<bool___cdecl(FTypedElementHandle_const_&)> *param_1,
          TSubclassOf<UInterface> *param_2)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UTypedElementRegistry *this_00;
  FTypedElementId *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  TObjectPtr<UClass>_u_0 local_res8;
  
  iVar1 = (this->ElementHandles).ArrayNum;
  pFVar9 = (this->ElementHandles).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  do {
    if ((this->ElementHandles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTypedElementHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar9 == pFVar10) {
      return;
    }
    if (*(longlong *)pFVar9 == 0) goto LAB_142cac991;
    pUVar3 = (param_2->Class).field0_0x0.DebugPtr;
    if ((pUVar3 == (UClass *)0x0) ||
       (pUVar6 = Z_Construct_UClass_UInterface_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_142cac981:
      cVar5 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar9);
      if (cVar5 == '\0') {
        return;
      }
    }
    else {
      iVar2 = (int)pUVar6->_padding_;
      if (((int)pUVar3->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((!bVar4) || ((param_2->Class).field0_0x0.DebugPtr == (UClass *)0x0)) goto LAB_142cac981;
      pUVar7 = FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
      if (pUVar7 != (UObject *)0x0) {
        this_00 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
        local_res8.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->Class).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res8.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
        }
        pFVar8 = (FTypedElementId *)(*(longlong *)pFVar9 + 8);
        if (*(longlong *)pFVar9 == 0) {
          pFVar8 = &FTypedElementId::Unset;
        }
        pUVar7 = UTypedElementRegistry::GetElementInterfaceImpl
                           (this_00,(pFVar8->field0_0x0)._s_0.TypeId,
                            (TSubclassOf<UInterface> *)&local_res8.ObjectPtr);
        if (pUVar7 != (UObject *)0x0) goto LAB_142cac981;
      }
    }
LAB_142cac991:
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// GetCounter @ 142cace90

FTypedElementCounter * __thiscall
TTypedElementList<FScriptTypedElementHandle>::GetCounter
          (TTypedElementList<FScriptTypedElementHandle> *this)

{
  return &this->ElementCounts;
}

// GetCounter @ 142cacea0

FTypedElementCounter * __thiscall
TTypedElementList<FTypedElementHandle>::GetCounter(TTypedElementList<FTypedElementHandle> *this)

{
  return &this->ElementCounts;
}

// GetElementHandleAt @ 142cad560

FScriptTypedElementHandle __thiscall
TTypedElementList<FScriptTypedElementHandle>::GetElementHandleAt
          (TTypedElementList<FScriptTypedElementHandle> *this,int param_1)

{
  FTypedElementInternalData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptTypedElementHandle FVar5;
  undefined4 in_register_00000014;
  FScriptTypedElementInternalDataPtr FVar6;
  uint in_R8D;
  
  FVar6.ControlBlock._4_4_ = in_register_00000014;
  FVar6.ControlBlock._0_4_ = param_1;
  uVar4 = 0;
  if ((int)in_R8D < (this->ElementHandles).ArrayNum) {
    uVar4 = ~in_R8D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar2)();
      return (FScriptTypedElementHandle)FVar5.InternalData.ControlBlock;
    }
  }
  pFVar1 = *(FTypedElementInternalData **)
            ((this->ElementHandles).AllocatorInstance.Data + (longlong)(int)in_R8D * 8);
  (FVar6.ControlBlock)->Data = pFVar1;
  if (pFVar1 != (FTypedElementInternalData *)0x0) {
    (pFVar1->Id).field0_0x0.CombinedId = (pFVar1->Id).field0_0x0.CombinedId + 1;
  }
  return (FScriptTypedElementHandle)(FScriptTypedElementInternalDataPtr)FVar6.ControlBlock;
}

// GetElementHandleAt @ 142cad5f0

FTypedElementHandle * __thiscall
TTypedElementList<FTypedElementHandle>::GetElementHandleAt
          (TTypedElementList<FTypedElementHandle> *this,FTypedElementHandle *__return_storage_ptr__,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  FTypedElementInternalData *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FTypedElementHandle *pFVar6;
  
  uVar4 = 0;
  if (param_1 < (this->ElementHandles).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTypedElementHandle *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar1 = (this->ElementHandles).AllocatorInstance.Data;
  __return_storage_ptr__->DataPtr = (FTypedElementInternalData *)0x0;
  __return_storage_ptr__->ReferenceId = -1;
  this_00 = *(FTypedElementInternalData **)(pFVar1 + (longlong)param_1 * 0x10);
  if (this_00 != (FTypedElementInternalData *)0x0) {
    __return_storage_ptr__->DataPtr = this_00;
    iVar5 = FTypedElementInternalData::AddRef(this_00,true);
    __return_storage_ptr__->ReferenceId = iVar5;
  }
  return __return_storage_ptr__;
}

// GetElementHandles @ 142cad6a0

TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
TTypedElementList<FScriptTypedElementHandle>::GetElementHandles
          (TTypedElementList<FScriptTypedElementHandle> *this,
          TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSubclassOf<UInterface> *param_1)

{
  uint uVar1;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *local_res8;
  code *local_18;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar1 = (this->ElementHandles).ArrayNum;
  if (-1 < (int)uVar1) {
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,&__return_storage_ptr__->AllocatorInstance,0,
                 &__return_storage_ptr__->ArrayMax);
    }
    local_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TTypedElementList<FScriptTypedElementHandle>::GetElementHandles'::__l2::<lambda_1>,bool,FScriptTypedElementHandle_const_&>
               ::Call;
    local_res8 = __return_storage_ptr__;
    ForEachElementHandle
              (this,(TFunctionRef<bool___cdecl(FScriptTypedElementHandle_const_&)> *)&local_18,
               param_1);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// GetElementHandles @ 142cad740

TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
TTypedElementList<FTypedElementHandle>::GetElementHandles
          (TTypedElementList<FTypedElementHandle> *this,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSubclassOf<UInterface> *param_1)

{
  uint uVar1;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *local_res8;
  code *local_18;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar1 = (this->ElementHandles).ArrayNum;
  if (-1 < (int)uVar1) {
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar1,&__return_storage_ptr__->AllocatorInstance,0,
                 &__return_storage_ptr__->ArrayMax);
    }
    local_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TTypedElementList<FTypedElementHandle>::GetElementHandles'::__l2::<lambda_1>,bool,FTypedElementHandle_const_&>
               ::Call;
    local_res8 = __return_storage_ptr__;
    ForEachElementHandle
              (this,(TFunctionRef<bool___cdecl(FTypedElementHandle_const_&)> *)&local_18,param_1);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// GetElementInterface @ 142cadc80

UObject * __thiscall
TTypedElementList<FScriptTypedElementHandle>::GetElementInterface
          (TTypedElementList<FScriptTypedElementHandle> *this,FScriptTypedElementHandle *param_1,
          TSubclassOf<UInterface> *param_2)

{
  FScriptTypedElementInternalDataControlBlock *pFVar1;
  FTypedElementInternalData *pFVar2;
  UObject *pUVar3;
  UTypedElementRegistry *this_00;
  FTypedElementId *pFVar4;
  TObjectPtr<UClass>_u_0 local_res8;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    this_00 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
    local_res8.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->Class).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    pFVar1 = (param_1->InternalData).ControlBlock;
    if ((pFVar1 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
       (pFVar2 = pFVar1->Data, pFVar4 = &pFVar2->Id, pFVar2 == (FTypedElementInternalData *)0x0)) {
      pFVar4 = &FTypedElementId::Unset;
    }
    pUVar3 = UTypedElementRegistry::GetElementInterfaceImpl
                       (this_00,(pFVar4->field0_0x0)._s_0.TypeId,
                        (TSubclassOf<UInterface> *)&local_res8.ObjectPtr);
    return pUVar3;
  }
  return (UObject *)0x0;
}

// GetElementInterface @ 142cadd20

UObject * __thiscall
TTypedElementList<FTypedElementHandle>::GetElementInterface
          (TTypedElementList<FTypedElementHandle> *this,FTypedElementHandle *param_1,
          TSubclassOf<UInterface> *param_2)

{
  UObject *pUVar1;
  UTypedElementRegistry *this_00;
  FTypedElementId *pFVar2;
  TObjectPtr<UClass>_u_0 local_res8;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    this_00 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
    local_res8.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->Class).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    pFVar2 = &param_1->DataPtr->Id;
    if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
      pFVar2 = &FTypedElementId::Unset;
    }
    pUVar1 = UTypedElementRegistry::GetElementInterfaceImpl
                       (this_00,(pFVar2->field0_0x0)._s_0.TypeId,
                        (TSubclassOf<UInterface> *)&local_res8.ObjectPtr);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// GetRegistry @ 142caec30

UTypedElementRegistry * __thiscall
TTypedElementList<FScriptTypedElementHandle>::GetRegistry
          (TTypedElementList<FScriptTypedElementHandle> *this)

{
  UTypedElementRegistry *pUVar1;
  
  pUVar1 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
  return pUVar1;
}

// GetRegistry @ 142caec40

UTypedElementRegistry * __thiscall
TTypedElementList<FTypedElementHandle>::GetRegistry(TTypedElementList<FTypedElementHandle> *this)

{
  UTypedElementRegistry *pUVar1;
  
  pUVar1 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
  return pUVar1;
}

// GetScopedClearNewPendingChange @ 142caece0

FScopedClearNewPendingChange __thiscall
TTypedElementList<FScriptTypedElementHandle>::GetScopedClearNewPendingChange
          (TTypedElementList<FScriptTypedElementHandle> *this)

{
  FLegacySync *pFVar1;
  TTypedElementList<FScriptTypedElementHandle> *in_RDX;
  bool bVar2;
  
  bVar2 = this->bHasPendingNotify == false;
  pFVar1 = (this->LegacySync).Ptr;
  in_RDX->_padding_ = 0;
  if (pFVar1 != (FLegacySync *)0x0) {
    bVar2 = bVar2 && pFVar1->NumOpenBatchOperations < 1;
  }
  if (bVar2) {
    in_RDX->_padding_ = (longlong)this;
  }
  return (FScopedClearNewPendingChange)in_RDX;
}

// GetScopedClearNewPendingChange @ 142caed20

FScopedClearNewPendingChange __thiscall
TTypedElementList<FTypedElementHandle>::GetScopedClearNewPendingChange
          (TTypedElementList<FTypedElementHandle> *this)

{
  FLegacySync *pFVar1;
  TTypedElementList<FTypedElementHandle> *in_RDX;
  bool bVar2;
  
  bVar2 = this->bHasPendingNotify == false;
  pFVar1 = (this->LegacySync).Ptr;
  in_RDX->_padding_ = 0;
  if (pFVar1 != (FLegacySync *)0x0) {
    bVar2 = bVar2 && pFVar1->NumOpenBatchOperations < 1;
  }
  if (bVar2) {
    in_RDX->_padding_ = (longlong)this;
  }
  return (FScopedClearNewPendingChange)in_RDX;
}

// HasElements @ 142caef20

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::HasElements
          (TTypedElementList<FScriptTypedElementHandle> *this,TSubclassOf<UInterface> *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  code *local_18;
  undefined1 **local_10;
  
  pUVar2 = (param_1->Class).field0_0x0.DebugPtr;
  local_res10[0] = 0;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UInterface_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && ((param_1->Class).field0_0x0.DebugPtr != (UClass *)0x0)) {
        local_res18 = local_res10;
        local_10 = &local_res18;
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TTypedElementList<FScriptTypedElementHandle>::HasElements'::__l5::<lambda_1>,bool,FScriptTypedElementHandle_const_&>
                   ::Call;
        ForEachElementHandle
                  (this,(TFunctionRef<bool___cdecl(FScriptTypedElementHandle_const_&)> *)&local_18,
                   param_1);
        return (bool)local_res10[0];
      }
    }
  }
  return 0 < (this->ElementHandles).ArrayNum;
}

// HasElements @ 142caefe0

bool __thiscall
TTypedElementList<FTypedElementHandle>::HasElements
          (TTypedElementList<FTypedElementHandle> *this,TSubclassOf<UInterface> *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  code *local_18;
  undefined1 **local_10;
  
  pUVar2 = (param_1->Class).field0_0x0.DebugPtr;
  local_res10[0] = 0;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UInterface_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && ((param_1->Class).field0_0x0.DebugPtr != (UClass *)0x0)) {
        local_res18 = local_res10;
        local_10 = &local_res18;
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TTypedElementList<FTypedElementHandle>::HasElements'::__l5::<lambda_1>,bool,FTypedElementHandle_const_&>
                   ::Call;
        ForEachElementHandle
                  (this,(TFunctionRef<bool___cdecl(FTypedElementHandle_const_&)> *)&local_18,param_1
                  );
        return (bool)local_res10[0];
      }
    }
  }
  return 0 < (this->ElementHandles).ArrayNum;
}

// HasElementsOfType @ 142caf0a0

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::HasElementsOfType
          (TTypedElementList<FScriptTypedElementHandle> *this,uchar param_1)

{
  int iVar1;
  
  iVar1 = CountElementsOfType(this,param_1);
  return 0 < iVar1;
}

// HasElementsOfType @ 142caf0c0

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::HasElementsOfType
          (TTypedElementList<FScriptTypedElementHandle> *this,FName param_1)

{
  int iVar1;
  UTypedElementRegistry *this_00;
  FRegisteredElementType *pFVar2;
  FName local_res8;
  
  this_00 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
  if (this_00 != (UTypedElementRegistry *)0x0) {
    local_res8 = param_1;
    pFVar2 = UTypedElementRegistry::GetRegisteredElementTypeFromName(this_00,&local_res8);
    if ((pFVar2 != (FRegisteredElementType *)0x0) && (pFVar2->TypeId != '\0')) {
      iVar1 = CountElementsOfType(this,pFVar2->TypeId);
      return 0 < iVar1;
    }
  }
  return false;
}

// HasElementsOfType @ 142caf130

bool __thiscall
TTypedElementList<FTypedElementHandle>::HasElementsOfType
          (TTypedElementList<FTypedElementHandle> *this,uchar param_1)

{
  int iVar1;
  
  iVar1 = CountElementsOfType(this,param_1);
  return 0 < iVar1;
}

// HasElementsOfType @ 142caf150

bool __thiscall
TTypedElementList<FTypedElementHandle>::HasElementsOfType
          (TTypedElementList<FTypedElementHandle> *this,FName param_1)

{
  int iVar1;
  UTypedElementRegistry *this_00;
  FRegisteredElementType *pFVar2;
  FName local_res8;
  
  this_00 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
  if (this_00 != (UTypedElementRegistry *)0x0) {
    local_res8 = param_1;
    pFVar2 = UTypedElementRegistry::GetRegisteredElementTypeFromName(this_00,&local_res8);
    if ((pFVar2 != (FRegisteredElementType *)0x0) && (pFVar2->TypeId != '\0')) {
      iVar1 = CountElementsOfType(this,pFVar2->TypeId);
      return 0 < iVar1;
    }
  }
  return false;
}

// IsValidIndex @ 142cafe20

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::IsValidIndex
          (TTypedElementList<FScriptTypedElementHandle> *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->ElementHandles).ArrayNum)) {
    return true;
  }
  return false;
}

// IsValidIndex @ 142cafe40

bool __thiscall
TTypedElementList<FTypedElementHandle>::IsValidIndex
          (TTypedElementList<FTypedElementHandle> *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->ElementHandles).ArrayNum)) {
    return true;
  }
  return false;
}

// Legacy_GetSync @ 142cafeb0

FLegacySync * __thiscall
TTypedElementList<FScriptTypedElementHandle>::Legacy_GetSync
          (TTypedElementList<FScriptTypedElementHandle> *this)

{
  TUniquePtr<TTypedElementList<FScriptTypedElementHandle>::FLegacySync,TDefaultDelete<TTypedElementList<FScriptTypedElementHandle>::FLegacySync>_>
  *pTVar1;
  FLegacySync *pFVar2;
  void *pvVar3;
  FLegacySync *pFVar4;
  longlong local_18 [2];
  
  pTVar1 = &this->LegacySync;
  if (pTVar1->Ptr != (FLegacySync *)0x0) {
    return pTVar1->Ptr;
  }
  pFVar4 = ::operator_new(0x30);
  if (pFVar4 != (FLegacySync *)0x0) {
    pFVar4->ElementList = this;
    *(undefined8 *)&pFVar4->OnSyncEventDelegate = 0;
    *(undefined8 *)&(pFVar4->OnSyncEventDelegate).field_0x8 = 0;
    *(undefined8 *)&(pFVar4->OnSyncEventDelegate).field_0x10 = 0;
    pFVar4->NumOpenBatchOperations = 0;
    pFVar4->bBatchOperationIsDirty = false;
    *(undefined8 *)&(pFVar4->OnSyncEventDelegate).field_0x18 = 2;
  }
  if (pTVar1 == (TUniquePtr<TTypedElementList<FScriptTypedElementHandle>::FLegacySync,TDefaultDelete<TTypedElementList<FScriptTypedElementHandle>::FLegacySync>_>
                 *)local_18) {
    if (pFVar4 == (FLegacySync *)0x0) goto LAB_142caff4e;
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(pFVar4->OnSyncEventDelegate).field_0x8,
               *(int *)&(pFVar4->OnSyncEventDelegate).field_0x10);
    pvVar3 = *(void **)&(pFVar4->OnSyncEventDelegate).field_0x8;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pFVar4->OnSyncEventDelegate);
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar4;
    if (pFVar2 == (FLegacySync *)0x0) {
      return pFVar4;
    }
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(pFVar2->OnSyncEventDelegate).field_0x8,
               *(int *)&(pFVar2->OnSyncEventDelegate).field_0x10);
    pvVar3 = *(void **)&(pFVar2->OnSyncEventDelegate).field_0x8;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pFVar2->OnSyncEventDelegate);
    pFVar4 = pFVar2;
  }
  ::operator_delete(pFVar4,0x30);
LAB_142caff4e:
  return pTVar1->Ptr;
}

// Legacy_GetSync @ 142caffc0

FLegacySync * __thiscall
TTypedElementList<FTypedElementHandle>::Legacy_GetSync(TTypedElementList<FTypedElementHandle> *this)

{
  TUniquePtr<TTypedElementList<FTypedElementHandle>::FLegacySync,TDefaultDelete<TTypedElementList<FTypedElementHandle>::FLegacySync>_>
  *pTVar1;
  FLegacySync *pFVar2;
  void *pvVar3;
  FLegacySync *pFVar4;
  longlong local_18 [2];
  
  pTVar1 = &this->LegacySync;
  if (pTVar1->Ptr != (FLegacySync *)0x0) {
    return pTVar1->Ptr;
  }
  pFVar4 = ::operator_new(0x30);
  if (pFVar4 != (FLegacySync *)0x0) {
    pFVar4->ElementList = this;
    *(undefined8 *)&pFVar4->OnSyncEventDelegate = 0;
    *(undefined8 *)&(pFVar4->OnSyncEventDelegate).field_0x8 = 0;
    *(undefined8 *)&(pFVar4->OnSyncEventDelegate).field_0x10 = 0;
    pFVar4->NumOpenBatchOperations = 0;
    pFVar4->bBatchOperationIsDirty = false;
    *(undefined8 *)&(pFVar4->OnSyncEventDelegate).field_0x18 = 2;
  }
  if (pTVar1 == (TUniquePtr<TTypedElementList<FTypedElementHandle>::FLegacySync,TDefaultDelete<TTypedElementList<FTypedElementHandle>::FLegacySync>_>
                 *)local_18) {
    if (pFVar4 == (FLegacySync *)0x0) goto LAB_142cb005e;
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(pFVar4->OnSyncEventDelegate).field_0x8,
               *(int *)&(pFVar4->OnSyncEventDelegate).field_0x10);
    pvVar3 = *(void **)&(pFVar4->OnSyncEventDelegate).field_0x8;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pFVar4->OnSyncEventDelegate);
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar4;
    if (pFVar2 == (FLegacySync *)0x0) {
      return pFVar4;
    }
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(pFVar2->OnSyncEventDelegate).field_0x8,
               *(int *)&(pFVar2->OnSyncEventDelegate).field_0x10);
    pvVar3 = *(void **)&(pFVar2->OnSyncEventDelegate).field_0x8;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&pFVar2->OnSyncEventDelegate);
    pFVar4 = pFVar2;
  }
  ::operator_delete(pFVar4,0x30);
LAB_142cb005e:
  return pTVar1->Ptr;
}

// Legacy_GetSyncPtr @ 142cb00d0

FLegacySync * __thiscall
TTypedElementList<FScriptTypedElementHandle>::Legacy_GetSyncPtr
          (TTypedElementList<FScriptTypedElementHandle> *this)

{
  return (this->LegacySync).Ptr;
}

// Legacy_GetSyncPtr @ 142cb00e0

FLegacySync * __thiscall
TTypedElementList<FTypedElementHandle>::Legacy_GetSyncPtr
          (TTypedElementList<FTypedElementHandle> *this)

{
  return (this->LegacySync).Ptr;
}

// NoteListChanged @ 142cb1ba0

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::NoteListChanged
          (TTypedElementList<FScriptTypedElementHandle> *this,EChangeType param_1,
          FScriptTypedElementHandle *param_2)

{
  FLegacySync *this_00;
  ESyncType EVar1;
  
  this_00 = (this->LegacySync).Ptr;
  this->bHasPendingNotify = true;
  if (this_00 == (FLegacySync *)0x0) {
    return;
  }
  EVar1 = Modified;
  if (param_1 == Added) {
    EVar1 = Added;
  }
  else {
    if (param_1 == Removed) {
      FLegacySync::Private_EmitSyncEvent(this_00,Removed,param_2);
      return;
    }
    if (param_1 == Cleared) {
      FLegacySync::Private_EmitSyncEvent(this_00,Cleared,param_2);
      return;
    }
  }
  FLegacySync::Private_EmitSyncEvent(this_00,EVar1,param_2);
  return;
}

// NoteListChanged @ 142cb1bf0

void __thiscall
TTypedElementList<FTypedElementHandle>::NoteListChanged
          (TTypedElementList<FTypedElementHandle> *this,EChangeType param_1,
          FTypedElementHandle *param_2)

{
  FLegacySync *this_00;
  ESyncType EVar1;
  
  this_00 = (this->LegacySync).Ptr;
  this->bHasPendingNotify = true;
  if (this_00 == (FLegacySync *)0x0) {
    return;
  }
  EVar1 = Modified;
  if (param_1 == Added) {
    EVar1 = Added;
  }
  else {
    if (param_1 == Removed) {
      FLegacySync::Private_EmitSyncEvent(this_00,Removed,param_2);
      return;
    }
    if (param_1 == Cleared) {
      FLegacySync::Private_EmitSyncEvent(this_00,Cleared,param_2);
      return;
    }
  }
  FLegacySync::Private_EmitSyncEvent(this_00,EVar1,param_2);
  return;
}

// NoteListMayChange @ 142cb1c40

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::NoteListMayChange
          (TTypedElementList<FScriptTypedElementHandle> *this)

{
  TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  return;
}

// NoteListMayChange @ 142cb1c60

void __thiscall
TTypedElementList<FTypedElementHandle>::NoteListMayChange
          (TTypedElementList<FTypedElementHandle> *this)

{
  TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  return;
}

// NotifyPendingChanges @ 142cb1f80

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::NotifyPendingChanges
          (TTypedElementList<FScriptTypedElementHandle> *this)

{
  if (this->bHasPendingNotify != false) {
    this->bHasPendingNotify = false;
    TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                 *)&this->OnChangedDelegate,this);
    return true;
  }
  return false;
}

// NotifyPendingChanges @ 142cb1fc0

bool __thiscall
TTypedElementList<FTypedElementHandle>::NotifyPendingChanges
          (TTypedElementList<FTypedElementHandle> *this)

{
  if (this->bHasPendingNotify != false) {
    this->bHasPendingNotify = false;
    TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                 *)&this->OnChangedDelegate,this);
    return true;
  }
  return false;
}

// Num @ 142cb2000

int __thiscall
TTypedElementList<FScriptTypedElementHandle>::Num
          (TTypedElementList<FScriptTypedElementHandle> *this)

{
  return (this->ElementHandles).ArrayNum;
}

// Num @ 142cb2010

int __thiscall
TTypedElementList<FTypedElementHandle>::Num(TTypedElementList<FTypedElementHandle> *this)

{
  return (this->ElementHandles).ArrayNum;
}

// OnChanged @ 142cb20c0

FOnChanged * __thiscall
TTypedElementList<FScriptTypedElementHandle>::OnChanged
          (TTypedElementList<FScriptTypedElementHandle> *this)

{
  return &this->OnChangedDelegate;
}

// OnChanged @ 142cb20d0

FOnChanged * __thiscall
TTypedElementList<FTypedElementHandle>::OnChanged(TTypedElementList<FTypedElementHandle> *this)

{
  return &this->OnChangedDelegate;
}

// OnPreChange @ 142cb21f0

FOnPreChange * __thiscall
TTypedElementList<FScriptTypedElementHandle>::OnPreChange
          (TTypedElementList<FScriptTypedElementHandle> *this)

{
  return &this->OnPreChangeDelegate;
}

// OnPreChange @ 142cb2200

FOnPreChange * __thiscall
TTypedElementList<FTypedElementHandle>::OnPreChange(TTypedElementList<FTypedElementHandle> *this)

{
  return &this->OnPreChangeDelegate;
}

// Private_CreateElementList @ 142cb2230

TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1> * __cdecl
TTypedElementList<FScriptTypedElementHandle>::Private_CreateElementList
          (TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1> *__return_storage_ptr__,
          UTypedElementRegistry *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTypedElementList<FScriptTypedElementHandle> *this;
  TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1> *pTVar3;
  TRawPtrProxy<TTypedElementList<FScriptTypedElementHandle>_> local_res8;
  
  this = ::operator_new(0xe0);
  if (this == (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    local_res8.Object = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  }
  else {
    local_res8.Object = TTypedElementList<FScriptTypedElementHandle>(this,param_1);
    if ((((local_res8.Object != (TTypedElementList<FScriptTypedElementHandle> *)0x0) &&
         ((local_res8.Object)->_padding_ != 0)) && ((local_res8.Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1>::
  TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1><TTypedElementList<FScriptTypedElementHandle>_>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// Private_CreateElementList @ 142cb22d0

TSharedRef<TTypedElementList<FTypedElementHandle>,1> * __cdecl
TTypedElementList<FTypedElementHandle>::Private_CreateElementList
          (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *__return_storage_ptr__,
          UTypedElementRegistry *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTypedElementList<FTypedElementHandle> *this;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> *pTVar3;
  TRawPtrProxy<TTypedElementList<FTypedElementHandle>_> local_res8;
  
  this = ::operator_new(0xe0);
  if (this == (TTypedElementList<FTypedElementHandle> *)0x0) {
    local_res8.Object = (TTypedElementList<FTypedElementHandle> *)0x0;
  }
  else {
    local_res8.Object = TTypedElementList<FTypedElementHandle>(this,param_1);
    if ((((local_res8.Object != (TTypedElementList<FTypedElementHandle> *)0x0) &&
         ((local_res8.Object)->_padding_ != 0)) && ((local_res8.Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<TTypedElementList<FTypedElementHandle>,1>::
  TSharedRef<TTypedElementList<FTypedElementHandle>,1><TTypedElementList<FTypedElementHandle>_>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// Remove @ 142cb6690

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::Remove
          (TTypedElementList<FScriptTypedElementHandle> *this,FScriptTypedElementHandle *param_1)

{
  FScriptTypedElementInternalDataControlBlock *pFVar1;
  FTypedElementInternalData *pFVar2;
  bool bVar3;
  FTypedElementId *pFVar4;
  
  pFVar1 = (param_1->InternalData).ControlBlock;
  if ((pFVar1 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
     (pFVar2 = pFVar1->Data, pFVar4 = &pFVar2->Id, pFVar2 == (FTypedElementInternalData *)0x0)) {
    pFVar4 = &FTypedElementId::Unset;
  }
  bVar3 = RemoveElementImpl(this,pFVar4);
  return bVar3;
}

// Remove @ 142cb66c0

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::Remove
          (TTypedElementList<FScriptTypedElementHandle> *this,FTypedElementId *param_1)

{
  FTypedElementCounter *this_00;
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FTypedElementInternalData *this_01;
  ICounterCategory *pIVar4;
  FTypedElementReferences *pFVar5;
  undefined1 *puVar6;
  TObjectPtr<UObject> this_02;
  longlong lVar7;
  FLegacySync *this_03;
  code *pcVar8;
  byte bVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  FTypedElementId *pFVar15;
  UTypedElementRegistry *this_04;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar16;
  UClass *pUVar17;
  FRegisteredElementType *pFVar18;
  UClass *pUVar19;
  TObjectPtr<UObject>_u_0 *pTVar20;
  longlong *plVar21;
  int iVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint uVar28;
  longlong lVar29;
  int *piVar30;
  byte abStackX_18 [8];
  uint uStackX_20;
  FTypedElementId_u_0 aFStack_70 [2];
  FScriptTypedElementInternalDataPtr FStack_68;
  longlong lStack_60;
  longlong lStack_58;
  FTypedElementInternalData *pFStack_50;
  int iStack_48;
  longlong *plStack_40;
  
  if ((param_1->field0_0x0)._s_0.TypeId == 0) {
    return false;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  aFStack_70[0]._s_0 = (FTypedElementId_u_0_s_0)(param_1->field0_0x0).CombinedId;
  if (*(int *)&(this->ElementCombinedIds).Elements.field_0x8 ==
      *(int *)&(this->ElementCombinedIds).Elements.field_0x34) {
    return false;
  }
  iVar12 = TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
           RemoveImpl<unsigned_int>
                     (&this->ElementCombinedIds,aFStack_70[0].CombinedId,&aFStack_70[0].CombinedId);
  if (iVar12 < 1) {
    return 0 < iVar12;
  }
  pFVar3 = (this->ElementHandles).AllocatorInstance.Data;
  iVar22 = (this->ElementHandles).ArrayNum;
  if (pFVar3 != pFVar3 + (longlong)iVar22 * 8) {
    pFVar24 = pFVar3;
    do {
      if ((*(longlong **)pFVar24 == (longlong *)0x0) ||
         (lVar29 = **(longlong **)pFVar24, lVar29 == 0)) {
        pFVar15 = &FTypedElementId::Unset;
      }
      else {
        pFVar15 = (FTypedElementId *)(lVar29 + 8);
      }
      if (pFVar15->field0_0x0 == (param_1->field0_0x0).CombinedId) {
        uVar23 = (uint)((longlong)pFVar24 - (longlong)pFVar3 >> 3);
        uVar25 = ~uVar23;
        uVar28 = uVar25 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar23 < iVar22) {
          uVar13 = uVar28;
        }
        if (uVar13 != 0) goto LAB_142cb82c9;
        goto LAB_142cb8296;
      }
      pFVar24 = pFVar24 + 8;
    } while (pFVar24 != pFVar3 + (longlong)iVar22 * 8);
  }
  uVar28 = 0;
  uVar25 = 0;
  uVar23 = 0xffffffff;
LAB_142cb8296:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("(Index >= 0) & (Index < ArrayNum)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                      ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar10) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
LAB_142cb82c9:
  pFVar3 = (this->ElementHandles).AllocatorInstance.Data;
  lVar29 = (longlong)(int)uVar23;
  FStack_68.ControlBlock = *(FScriptTypedElementInternalDataControlBlock **)(pFVar3 + lVar29 * 8);
  *(undefined8 *)(pFVar3 + lVar29 * 8) = 0;
  uVar13 = 0;
  if ((int)uVar23 < (this->ElementHandles).ArrayNum) {
    uVar13 = uVar28;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  pFVar24 = (this->ElementHandles).AllocatorInstance.Data;
  pFVar3 = pFVar24 + lVar29 * 8;
  lVar29 = *(longlong *)(pFVar24 + lVar29 * 8);
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 8);
    *piVar30 = *piVar30 + -1;
    if (*(int *)((longlong)*(void **)pFVar3 + 8) == 0) {
      ::operator_delete(*(void **)pFVar3,0x10);
      *(undefined8 *)pFVar3 = 0;
    }
  }
  iVar22 = (this->ElementHandles).ArrayNum + uVar25;
  if (iVar22 != 0) {
    memmove(pFVar3,pFVar3 + 8,(longlong)iVar22 << 3);
  }
  piVar30 = &(this->ElementHandles).ArrayNum;
  *piVar30 = *piVar30 + -1;
  this_00 = &this->ElementCounts;
  if (FStack_68.ControlBlock == (FScriptTypedElementInternalDataControlBlock *)0x0) {
    FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    goto LAB_142cb8885;
  }
  this_01 = (FStack_68.ControlBlock)->Data;
  if (this_01 == (FTypedElementInternalData *)0x0) {
    FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    goto LAB_142cb8885;
  }
  iVar22 = FTypedElementInternalData::AddRef(this_01,true);
  this_04 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  if (this_04 != (UTypedElementRegistry *)0x0) {
    abStackX_18[0] = (this_01->Id).field0_0x0._s_0.TypeId;
    piVar30 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar30 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&NAME_ElementType,"ElementType");
      _Init_thread_footer(&::_TSS0);
    }
    pTVar16 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(&(this->ElementCounts).CounterCategories,NAME_ElementType);
    if (pTVar16 !=
        (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
         *)0x0) {
      pIVar4 = pTVar16->Ptr;
      pcVar8 = *(code **)((longlong)*pIVar4 + 0x20);
      if ((*piVar30 <
           `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                               ::__l3::_thread_safe_static_guard_0__),
         `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
         _thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::
                        __l3::KeyTypeName,L"uint8");
        _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                             ::__l3::_thread_safe_static_guard_0__);
      }
      (*pcVar8)(pIVar4,abStackX_18,
                `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
                KeyTypeName);
    }
    pFStack_50 = (FTypedElementInternalData *)0x0;
    iStack_48 = -1;
    pUVar17 = UTypedElementCounterInterface::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
    iVar2 = iStack_48;
    if (pFStack_50 != (FTypedElementInternalData *)0x0) {
      lVar29 = (longlong)iStack_48;
      LOCK();
      pFStack_50->RefCount = pFStack_50->RefCount + -1;
      UNLOCK();
      pFVar5 = (pFStack_50->References).Ptr;
      if ((pFVar5 != (FTypedElementReferences *)0x0) && (iStack_48 != -1)) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar5);
        lStack_60 = *(longlong *)&pFVar5->References;
        puVar26 = &(pFVar5->References).field_0x10;
        bVar9 = (byte)iVar2 & 0x1f;
        uStackX_20 = 1 << bVar9 | 1U >> 0x20 - bVar9;
        if (((iVar2 < 0) || (*(int *)&(pFVar5->References).field_0x28 <= iVar2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        puVar6 = *(undefined1 **)&(pFVar5->References).field_0x20;
        puVar27 = puVar26;
        if (puVar6 != (undefined1 *)0x0) {
          puVar27 = puVar6;
        }
        lStack_58 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
        if (((*(uint *)(puVar27 + lStack_58) & uStackX_20) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("AllocationFlags[Index]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                ,0xc5,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        if (*(int *)&(pFVar5->References).field_0x34 != 0) {
          *(int *)((longlong)*(int *)&(pFVar5->References).field_0x30 * 0x108 + lStack_60) = iVar2;
        }
        uVar14 = 0xffffffff;
        *(undefined4 *)(lVar29 * 0x108 + lStack_60) = 0xffffffff;
        if (0 < *(int *)&(pFVar5->References).field_0x34) {
          uVar14 = *(undefined4 *)&(pFVar5->References).field_0x30;
        }
        *(undefined4 *)(lVar29 * 0x108 + 4 + lStack_60) = uVar14;
        puVar6 = &(pFVar5->References).field_0x34;
        *(int *)puVar6 = *(int *)puVar6 + 1;
        *(int *)&(pFVar5->References).field_0x30 = iVar2;
        if (((iVar2 < 0) || (*(int *)&(pFVar5->References).field_0x28 <= iVar2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        puVar6 = *(undefined1 **)&(pFVar5->References).field_0x20;
        if (puVar6 != (undefined1 *)0x0) {
          puVar26 = puVar6;
        }
        *(uint *)(puVar26 + lStack_58) = *(uint *)(puVar26 + lStack_58) & ~uStackX_20;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar5);
      }
    }
    plStack_40 = (longlong *)0x0;
    pFVar18 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                        (this_04,(this_01->Id).field0_0x0._s_0.TypeId);
    if ((pFVar18 == (FRegisteredElementType *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("RegisteredElementType",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                            ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    if ((pUVar17 == (UClass *)0x0) ||
       (pUVar19 = Z_Construct_UClass_UInterface_NoRegister(), pUVar19 == (UClass *)0x0)) {
LAB_142cb8695:
      pUVar17 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar19->_padding_;
      if (((int)pUVar17->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar19->_padding_)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (!bVar10) goto LAB_142cb8695;
    }
    pTVar20 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                         (&pFVar18->Interfaces,(FName)pUVar17->_padding_)->field0_0x0;
    if ((pTVar20 != (TObjectPtr<UObject>_u_0 *)0x0) &&
       (this_02.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar20->DebugPtr,
       this_02.field0_0x0 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_02.field0_0x0);
      }
      pUVar17 = UTypedElementCounterInterface::StaticClass();
      plVar21 = UObjectBaseUtility::GetInterfaceAddress
                          ((UObjectBaseUtility *)this_02.field0_0x0,pUVar17);
      pFStack_50 = this_01;
      iStack_48 = FTypedElementInternalData::AddRef(this_01,true);
      plStack_40 = plVar21;
    }
    if (pFStack_50 != (FTypedElementInternalData *)0x0) {
      if (plStack_40 != (longlong *)0x0) {
        (**(code **)(*plStack_40 + 0x18))(plStack_40,&pFStack_50,&this->ElementCounts);
      }
      iVar2 = iStack_48;
      if (pFStack_50 != (FTypedElementInternalData *)0x0) {
        lVar29 = (longlong)iStack_48;
        LOCK();
        pFStack_50->RefCount = pFStack_50->RefCount + -1;
        UNLOCK();
        pFVar5 = (pFStack_50->References).Ptr;
        if ((pFVar5 != (FTypedElementReferences *)0x0) && (iStack_48 != -1)) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar5);
          lVar7 = *(longlong *)&pFVar5->References;
          puVar26 = &(pFVar5->References).field_0x10;
          bVar9 = (byte)iVar2 & 0x1f;
          uStackX_20 = 1 << bVar9 | 1U >> 0x20 - bVar9;
          if (((iVar2 < 0) || (*(int *)&(pFVar5->References).field_0x28 <= iVar2)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          puVar6 = *(undefined1 **)&(pFVar5->References).field_0x20;
          puVar27 = puVar26;
          if (puVar6 != (undefined1 *)0x0) {
            puVar27 = puVar6;
          }
          lVar1 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (((*(uint *)(puVar27 + lVar1) & uStackX_20) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AllocationFlags[Index]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                  ,0xc5,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          if (*(int *)&(pFVar5->References).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(pFVar5->References).field_0x30 * 0x108 + lVar7) = iVar2;
          }
          uVar14 = 0xffffffff;
          *(undefined4 *)(lVar29 * 0x108 + lVar7) = 0xffffffff;
          if (0 < *(int *)&(pFVar5->References).field_0x34) {
            uVar14 = *(undefined4 *)&(pFVar5->References).field_0x30;
          }
          *(undefined4 *)(lVar29 * 0x108 + 4 + lVar7) = uVar14;
          puVar6 = &(pFVar5->References).field_0x34;
          *(int *)puVar6 = *(int *)puVar6 + 1;
          *(int *)&(pFVar5->References).field_0x30 = iVar2;
          if (((iVar2 < 0) || (*(int *)&(pFVar5->References).field_0x28 <= iVar2)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          puVar6 = *(undefined1 **)&(pFVar5->References).field_0x20;
          if (puVar6 != (undefined1 *)0x0) {
            puVar26 = puVar6;
          }
          *(uint *)(puVar26 + lVar1) = *(uint *)(puVar26 + lVar1) & ~uStackX_20;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar5);
        }
      }
    }
  }
  FTypedElementInternalData::ReleaseRef(this_01,iVar22);
LAB_142cb8885:
  this_03 = (this->LegacySync).Ptr;
  this->bHasPendingNotify = true;
  if (this_03 != (FLegacySync *)0x0) {
    FLegacySync::Private_EmitSyncEvent(this_03,Removed,(FScriptTypedElementHandle *)&FStack_68);
  }
  if ((FStack_68.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     ((FStack_68.ControlBlock)->WeakRefCount = (FStack_68.ControlBlock)->WeakRefCount + -1,
     (FStack_68.ControlBlock)->WeakRefCount == 0)) {
    ::operator_delete(FStack_68.ControlBlock,0x10);
  }
  return 0 < iVar12;
}

// Remove @ 142cb66d0

bool __thiscall
TTypedElementList<FTypedElementHandle>::Remove
          (TTypedElementList<FTypedElementHandle> *this,FTypedElementHandle *param_1)

{
  bool bVar1;
  
  if (param_1->DataPtr != (FTypedElementInternalData *)0x0) {
    bVar1 = RemoveElementImpl(this,&param_1->DataPtr->Id);
    return bVar1;
  }
  bVar1 = RemoveElementImpl(this,&FTypedElementId::Unset);
  return bVar1;
}

// Remove @ 142cb6700

bool __thiscall
TTypedElementList<FTypedElementHandle>::Remove
          (TTypedElementList<FTypedElementHandle> *this,FTypedElementId *param_1)

{
  int *piVar1;
  FLegacySync *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  FTypedElementId *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  FTypedElementId_u_0 aFStackX_18 [4];
  FTypedElementHandle FStack_38;
  
  if ((param_1->field0_0x0)._s_0.TypeId == 0) {
    return false;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  aFStackX_18[0]._s_0 = (FTypedElementId_u_0_s_0)(param_1->field0_0x0).CombinedId;
  if (*(int *)&(this->ElementCombinedIds).Elements.field_0x8 ==
      *(int *)&(this->ElementCombinedIds).Elements.field_0x34) {
    bVar12 = false;
  }
  else {
    iVar5 = TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
            RemoveImpl<unsigned_int>
                      (&this->ElementCombinedIds,aFStackX_18[0].CombinedId,
                       &aFStackX_18[0].CombinedId);
    bVar12 = 0 < iVar5;
    if (0 < iVar5) {
      pFVar8 = (this->ElementHandles).AllocatorInstance.Data;
      iVar5 = (this->ElementHandles).ArrayNum;
      if (pFVar8 != pFVar8 + (longlong)iVar5 * 0x10) {
        pFVar10 = pFVar8;
        do {
          if (*(longlong *)pFVar10 == 0) {
            pFVar7 = &FTypedElementId::Unset;
          }
          else {
            pFVar7 = (FTypedElementId *)(*(longlong *)pFVar10 + 8);
          }
          if (pFVar7->field0_0x0 == (param_1->field0_0x0).CombinedId) {
            uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar8 >> 4);
            uVar11 = ~uVar9;
            uVar13 = uVar11 >> 0x1f;
            uVar6 = 0;
            if ((int)uVar9 < iVar5) {
              uVar6 = uVar13;
            }
            if (uVar6 == 0) goto LAB_142cb8a6c;
            goto LAB_142cb8a9f;
          }
          pFVar10 = pFVar10 + 0x10;
        } while (pFVar10 != pFVar8 + (longlong)iVar5 * 0x10);
      }
      uVar11 = 0;
      uVar9 = 0xffffffff;
      uVar13 = 0;
LAB_142cb8a6c:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
LAB_142cb8a9f:
      pFVar8 = (this->ElementHandles).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
      FStack_38.DataPtr = *(FTypedElementInternalData **)pFVar8;
      FStack_38.ReferenceId = *(int *)(pFVar8 + 8);
      *(undefined8 *)pFVar8 = 0;
      *(undefined4 *)(pFVar8 + 8) = 0xffffffff;
      uVar6 = 0;
      if ((int)uVar9 < (this->ElementHandles).ArrayNum) {
        uVar6 = uVar13;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar8 = (this->ElementHandles).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
      if (*(FTypedElementInternalData **)pFVar8 != (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef
                  (*(FTypedElementInternalData **)pFVar8,*(int *)(pFVar8 + 8));
      }
      *(undefined8 *)pFVar8 = 0;
      *(undefined4 *)(pFVar8 + 8) = 0xffffffff;
      iVar5 = (this->ElementHandles).ArrayNum + uVar11;
      if (iVar5 != 0) {
        memmove(pFVar8,pFVar8 + 0x10,(longlong)iVar5 << 4);
      }
      piVar1 = &(this->ElementHandles).ArrayNum;
      *piVar1 = *piVar1 + -1;
      FTypedElementCounter::RemoveElement(&this->ElementCounts,&FStack_38);
      this_00 = (this->LegacySync).Ptr;
      this->bHasPendingNotify = true;
      if (this_00 != (FLegacySync *)0x0) {
        FLegacySync::Private_EmitSyncEvent(this_00,Removed,&FStack_38);
      }
      if (FStack_38.DataPtr != (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef(FStack_38.DataPtr,FStack_38.ReferenceId);
        return bVar12;
      }
    }
  }
  return bVar12;
}

// RemoveAll @ 142cb6bf0

int __thiscall
TTypedElementList<FScriptTypedElementHandle>::RemoveAll
          (TTypedElementList<FScriptTypedElementHandle> *this,
          TFunctionRef<bool___cdecl(FScriptTypedElementHandle_const_&)> *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FLegacySyncScopedBatch local_58;
  TTypedElementList<FScriptTypedElementHandle> *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  if ((this->ElementHandles).ArrayNum < 1) {
    return 0;
  }
  local_58.ElementListLegacySync = (this->LegacySync).Ptr;
  local_58.bNotify = true;
  if (local_58.ElementListLegacySync != (FLegacySync *)0x0) {
    (local_58.ElementListLegacySync)->NumOpenBatchOperations =
         (local_58.ElementListLegacySync)->NumOpenBatchOperations + 1;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  iVar8 = 0;
  iVar1 = (this->ElementHandles).ArrayNum;
  local_48 = this;
  local_40 = uVar2;
  local_38 = uVar3;
  if (iVar1 != 0) {
    iVar10 = 0;
    pFVar4 = (this->ElementHandles).AllocatorInstance.Data;
    bVar6 = `TTypedElementList<FScriptTypedElementHandle>::RemoveAllElementsImpl'::__l5::<lambda_1>
            ::operator()(&local_48,(FScriptTypedElementHandle *)pFVar4);
    bVar6 = !bVar6;
    do {
      iVar5 = iVar8;
      do {
        iVar5 = iVar5 + 1;
        if (iVar1 <= iVar5) break;
        bVar7 = `TTypedElementList<FScriptTypedElementHandle>::RemoveAllElementsImpl'::__l5::
                <lambda_1>::operator()
                          (&local_48,(FScriptTypedElementHandle *)(pFVar4 + (longlong)iVar5 * 8));
      } while (bVar6 == !bVar7);
      iVar9 = iVar5 - iVar8;
      if (bVar6 == false) {
        DestructItems<FScriptTypedElementHandle,int>
                  ((FScriptTypedElementHandle *)(pFVar4 + (longlong)iVar8 * 8),iVar9);
      }
      else {
        if (iVar10 != iVar8) {
          memmove(pFVar4 + (longlong)iVar10 * 8,pFVar4 + (longlong)iVar8 * 8,(longlong)iVar9 << 3);
        }
        iVar10 = iVar10 + iVar9;
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar8 = iVar5;
    } while (iVar5 < iVar1);
    iVar8 = iVar1 - iVar10;
    (this->ElementHandles).ArrayNum = iVar10;
  }
  FLegacySyncScopedBatch::~FLegacySyncScopedBatch(&local_58);
  return iVar8;
}

// RemoveAll @ 142cb6d50

int __thiscall
TTypedElementList<FTypedElementHandle>::RemoveAll
          (TTypedElementList<FTypedElementHandle> *this,
          TFunctionRef<bool___cdecl(FTypedElementHandle_const_&)> *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FLegacySync *this_00;
  FTypedElementHandle *pFVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TTypedElementList<FTypedElementHandle> *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  if ((this->ElementHandles).ArrayNum < 1) {
    return 0;
  }
  this_00 = (this->LegacySync).Ptr;
  if (this_00 != (FLegacySync *)0x0) {
    this_00->NumOpenBatchOperations = this_00->NumOpenBatchOperations + 1;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  iVar8 = 0;
  iVar1 = (this->ElementHandles).ArrayNum;
  local_48 = this;
  local_40 = uVar2;
  local_38 = uVar3;
  if (iVar1 != 0) {
    iVar10 = 0;
    pFVar4 = (FTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data;
    bVar6 = `TTypedElementList<FTypedElementHandle>::RemoveAllElementsImpl'::__l5::<lambda_1>::
            operator()(&local_48,pFVar4);
    bVar6 = !bVar6;
    do {
      iVar5 = iVar8;
      do {
        iVar5 = iVar5 + 1;
        if (iVar1 <= iVar5) break;
        bVar7 = `TTypedElementList<FTypedElementHandle>::RemoveAllElementsImpl'::__l5::<lambda_1>::
                operator()(&local_48,pFVar4 + iVar5);
      } while (bVar6 == !bVar7);
      iVar9 = iVar5 - iVar8;
      if (bVar6 == false) {
        DestructItems<FTypedElementHandle,int>(pFVar4 + iVar8,iVar9);
      }
      else {
        if (iVar10 != iVar8) {
          memmove(pFVar4 + iVar10,pFVar4 + iVar8,(longlong)iVar9 << 4);
        }
        iVar10 = iVar10 + iVar9;
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar8 = iVar5;
    } while (iVar5 < iVar1);
    iVar8 = iVar1 - iVar10;
    (this->ElementHandles).ArrayNum = iVar10;
  }
  if (this_00 != (FLegacySync *)0x0) {
    FLegacySync::EndBatchOperation(this_00,true);
  }
  return iVar8;
}

// RemoveAllElementsImpl @ 142cb6ec0

int __thiscall
TTypedElementList<FScriptTypedElementHandle>::RemoveAllElementsImpl
          (TTypedElementList<FScriptTypedElementHandle> *this,
          TFunctionRef<bool___cdecl(FScriptTypedElementHandle_const_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FLegacySyncScopedBatch local_58;
  TTypedElementList<FScriptTypedElementHandle> *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((this->ElementHandles).ArrayNum < 1) {
    return 0;
  }
  local_58.ElementListLegacySync = (this->LegacySync).Ptr;
  local_58.bNotify = true;
  if (local_58.ElementListLegacySync != (FLegacySync *)0x0) {
    (local_58.ElementListLegacySync)->NumOpenBatchOperations =
         (local_58.ElementListLegacySync)->NumOpenBatchOperations + 1;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  local_40 = *(undefined8 *)param_1;
  iVar1 = (this->ElementHandles).ArrayNum;
  local_38 = *(undefined8 *)&param_1->field_0x8;
  iVar6 = 0;
  local_48 = this;
  if (iVar1 != 0) {
    iVar8 = 0;
    pFVar2 = (this->ElementHandles).AllocatorInstance.Data;
    bVar4 = `TTypedElementList<FScriptTypedElementHandle>::RemoveAllElementsImpl'::__l5::<lambda_1>
            ::operator()(&local_48,(FScriptTypedElementHandle *)pFVar2);
    bVar4 = !bVar4;
    do {
      iVar3 = iVar6;
      do {
        iVar3 = iVar3 + 1;
        if (iVar1 <= iVar3) break;
        bVar5 = `TTypedElementList<FScriptTypedElementHandle>::RemoveAllElementsImpl'::__l5::
                <lambda_1>::operator()
                          (&local_48,(FScriptTypedElementHandle *)(pFVar2 + (longlong)iVar3 * 8));
      } while (bVar4 == !bVar5);
      iVar7 = iVar3 - iVar6;
      if (bVar4 == false) {
        DestructItems<FScriptTypedElementHandle,int>
                  ((FScriptTypedElementHandle *)(pFVar2 + (longlong)iVar6 * 8),iVar7);
      }
      else {
        if (iVar8 != iVar6) {
          memmove(pFVar2 + (longlong)iVar8 * 8,pFVar2 + (longlong)iVar6 * 8,(longlong)iVar7 << 3);
        }
        iVar8 = iVar8 + iVar7;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar6 = iVar3;
    } while (iVar3 < iVar1);
    iVar6 = iVar1 - iVar8;
    (this->ElementHandles).ArrayNum = iVar8;
  }
  FLegacySyncScopedBatch::~FLegacySyncScopedBatch(&local_58);
  return iVar6;
}

// RemoveAllElementsImpl @ 142cb7020

int __thiscall
TTypedElementList<FTypedElementHandle>::RemoveAllElementsImpl
          (TTypedElementList<FTypedElementHandle> *this,
          TFunctionRef<bool___cdecl(FTypedElementHandle_const_&)> *param_1)

{
  int iVar1;
  FLegacySync *this_00;
  FTypedElementHandle *pFVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  TTypedElementList<FTypedElementHandle> *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((this->ElementHandles).ArrayNum < 1) {
    return 0;
  }
  this_00 = (this->LegacySync).Ptr;
  if (this_00 != (FLegacySync *)0x0) {
    this_00->NumOpenBatchOperations = this_00->NumOpenBatchOperations + 1;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  local_40 = *(undefined8 *)param_1;
  iVar1 = (this->ElementHandles).ArrayNum;
  local_38 = *(undefined8 *)&param_1->field_0x8;
  iVar6 = 0;
  local_48 = this;
  if (iVar1 != 0) {
    iVar8 = 0;
    pFVar2 = (FTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data;
    bVar4 = `TTypedElementList<FTypedElementHandle>::RemoveAllElementsImpl'::__l5::<lambda_1>::
            operator()(&local_48,pFVar2);
    bVar4 = !bVar4;
    do {
      iVar3 = iVar6;
      do {
        iVar3 = iVar3 + 1;
        if (iVar1 <= iVar3) break;
        bVar5 = `TTypedElementList<FTypedElementHandle>::RemoveAllElementsImpl'::__l5::<lambda_1>::
                operator()(&local_48,pFVar2 + iVar3);
      } while (bVar4 == !bVar5);
      iVar7 = iVar3 - iVar6;
      if (bVar4 == false) {
        DestructItems<FTypedElementHandle,int>(pFVar2 + iVar6,iVar7);
      }
      else {
        if (iVar8 != iVar6) {
          memmove(pFVar2 + iVar8,pFVar2 + iVar6,(longlong)iVar7 << 4);
        }
        iVar8 = iVar8 + iVar7;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar6 = iVar3;
    } while (iVar3 < iVar1);
    iVar6 = iVar1 - iVar8;
    (this->ElementHandles).ArrayNum = iVar8;
  }
  if (this_00 != (FLegacySync *)0x0) {
    FLegacySync::EndBatchOperation(this_00,true);
  }
  return iVar6;
}

// RemoveElementImpl @ 142cb81b0

bool __thiscall
TTypedElementList<FScriptTypedElementHandle>::RemoveElementImpl
          (TTypedElementList<FScriptTypedElementHandle> *this,FTypedElementId *param_1)

{
  FTypedElementCounter *this_00;
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FTypedElementInternalData *this_01;
  ICounterCategory *pIVar4;
  FTypedElementReferences *pFVar5;
  undefined1 *puVar6;
  TObjectPtr<UObject> this_02;
  longlong lVar7;
  FLegacySync *this_03;
  code *pcVar8;
  byte bVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  FTypedElementId *pFVar15;
  UTypedElementRegistry *this_04;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar16;
  UClass *pUVar17;
  FRegisteredElementType *pFVar18;
  UClass *pUVar19;
  TObjectPtr<UObject>_u_0 *pTVar20;
  longlong *plVar21;
  int iVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint uVar28;
  longlong lVar29;
  int *piVar30;
  byte local_res18 [8];
  uint local_res20;
  FTypedElementId_u_0 local_70 [2];
  FScriptTypedElementInternalDataPtr local_68;
  longlong local_60;
  longlong local_58;
  FTypedElementInternalData *local_50;
  int local_48;
  longlong *local_40;
  
  if ((param_1->field0_0x0)._s_0.TypeId == 0) {
    return false;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  local_70[0]._s_0 = (FTypedElementId_u_0_s_0)(param_1->field0_0x0).CombinedId;
  if (*(int *)&(this->ElementCombinedIds).Elements.field_0x8 ==
      *(int *)&(this->ElementCombinedIds).Elements.field_0x34) {
    return false;
  }
  iVar12 = TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
           RemoveImpl<unsigned_int>
                     (&this->ElementCombinedIds,local_70[0].CombinedId,&local_70[0].CombinedId);
  if (iVar12 < 1) {
    return 0 < iVar12;
  }
  pFVar3 = (this->ElementHandles).AllocatorInstance.Data;
  iVar22 = (this->ElementHandles).ArrayNum;
  if (pFVar3 != pFVar3 + (longlong)iVar22 * 8) {
    pFVar24 = pFVar3;
    do {
      if ((*(longlong **)pFVar24 == (longlong *)0x0) ||
         (lVar29 = **(longlong **)pFVar24, lVar29 == 0)) {
        pFVar15 = &FTypedElementId::Unset;
      }
      else {
        pFVar15 = (FTypedElementId *)(lVar29 + 8);
      }
      if (pFVar15->field0_0x0 == (param_1->field0_0x0).CombinedId) {
        uVar23 = (uint)((longlong)pFVar24 - (longlong)pFVar3 >> 3);
        uVar25 = ~uVar23;
        uVar28 = uVar25 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar23 < iVar22) {
          uVar13 = uVar28;
        }
        if (uVar13 != 0) goto LAB_142cb82c9;
        goto LAB_142cb8296;
      }
      pFVar24 = pFVar24 + 8;
    } while (pFVar24 != pFVar3 + (longlong)iVar22 * 8);
  }
  uVar28 = 0;
  uVar25 = 0;
  uVar23 = 0xffffffff;
LAB_142cb8296:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("(Index >= 0) & (Index < ArrayNum)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                      ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar10) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
LAB_142cb82c9:
  pFVar3 = (this->ElementHandles).AllocatorInstance.Data;
  lVar29 = (longlong)(int)uVar23;
  local_68.ControlBlock = *(FScriptTypedElementInternalDataControlBlock **)(pFVar3 + lVar29 * 8);
  *(undefined8 *)(pFVar3 + lVar29 * 8) = 0;
  uVar13 = 0;
  if ((int)uVar23 < (this->ElementHandles).ArrayNum) {
    uVar13 = uVar28;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  pFVar24 = (this->ElementHandles).AllocatorInstance.Data;
  pFVar3 = pFVar24 + lVar29 * 8;
  lVar29 = *(longlong *)(pFVar24 + lVar29 * 8);
  if (lVar29 != 0) {
    piVar30 = (int *)(lVar29 + 8);
    *piVar30 = *piVar30 + -1;
    if (*(int *)((longlong)*(void **)pFVar3 + 8) == 0) {
      ::operator_delete(*(void **)pFVar3,0x10);
      *(undefined8 *)pFVar3 = 0;
    }
  }
  iVar22 = (this->ElementHandles).ArrayNum + uVar25;
  if (iVar22 != 0) {
    memmove(pFVar3,pFVar3 + 8,(longlong)iVar22 << 3);
  }
  piVar30 = &(this->ElementHandles).ArrayNum;
  *piVar30 = *piVar30 + -1;
  this_00 = &this->ElementCounts;
  if (local_68.ControlBlock == (FScriptTypedElementInternalDataControlBlock *)0x0) {
    FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    goto LAB_142cb8885;
  }
  this_01 = (local_68.ControlBlock)->Data;
  if (this_01 == (FTypedElementInternalData *)0x0) {
    FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    goto LAB_142cb8885;
  }
  iVar22 = FTypedElementInternalData::AddRef(this_01,true);
  this_04 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  if (this_04 != (UTypedElementRegistry *)0x0) {
    local_res18[0] = (this_01->Id).field0_0x0._s_0.TypeId;
    piVar30 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar30 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&NAME_ElementType,"ElementType");
      _Init_thread_footer(&::_TSS0);
    }
    pTVar16 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(&(this->ElementCounts).CounterCategories,NAME_ElementType);
    if (pTVar16 !=
        (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
         *)0x0) {
      pIVar4 = pTVar16->Ptr;
      pcVar8 = *(code **)((longlong)*pIVar4 + 0x20);
      if ((*piVar30 <
           `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                               ::__l3::_thread_safe_static_guard_0__),
         `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
         _thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::
                        __l3::KeyTypeName,L"uint8");
        _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                             ::__l3::_thread_safe_static_guard_0__);
      }
      (*pcVar8)(pIVar4,local_res18,
                `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
                KeyTypeName);
    }
    local_50 = (FTypedElementInternalData *)0x0;
    local_48 = -1;
    pUVar17 = UTypedElementCounterInterface::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
    iVar2 = local_48;
    if (local_50 != (FTypedElementInternalData *)0x0) {
      lVar29 = (longlong)local_48;
      LOCK();
      local_50->RefCount = local_50->RefCount + -1;
      UNLOCK();
      pFVar5 = (local_50->References).Ptr;
      if ((pFVar5 != (FTypedElementReferences *)0x0) && (local_48 != -1)) {
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar5);
        local_60 = *(longlong *)&pFVar5->References;
        puVar26 = &(pFVar5->References).field_0x10;
        bVar9 = (byte)iVar2 & 0x1f;
        local_res20 = 1 << bVar9 | 1U >> 0x20 - bVar9;
        if (((iVar2 < 0) || (*(int *)&(pFVar5->References).field_0x28 <= iVar2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        puVar6 = *(undefined1 **)&(pFVar5->References).field_0x20;
        puVar27 = puVar26;
        if (puVar6 != (undefined1 *)0x0) {
          puVar27 = puVar6;
        }
        local_58 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
        if (((*(uint *)(puVar27 + local_58) & local_res20) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("AllocationFlags[Index]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                ,0xc5,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        if (*(int *)&(pFVar5->References).field_0x34 != 0) {
          *(int *)((longlong)*(int *)&(pFVar5->References).field_0x30 * 0x108 + local_60) = iVar2;
        }
        uVar14 = 0xffffffff;
        *(undefined4 *)(lVar29 * 0x108 + local_60) = 0xffffffff;
        if (0 < *(int *)&(pFVar5->References).field_0x34) {
          uVar14 = *(undefined4 *)&(pFVar5->References).field_0x30;
        }
        *(undefined4 *)(lVar29 * 0x108 + 4 + local_60) = uVar14;
        puVar6 = &(pFVar5->References).field_0x34;
        *(int *)puVar6 = *(int *)puVar6 + 1;
        *(int *)&(pFVar5->References).field_0x30 = iVar2;
        if (((iVar2 < 0) || (*(int *)&(pFVar5->References).field_0x28 <= iVar2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        puVar6 = *(undefined1 **)&(pFVar5->References).field_0x20;
        if (puVar6 != (undefined1 *)0x0) {
          puVar26 = puVar6;
        }
        *(uint *)(puVar26 + local_58) = *(uint *)(puVar26 + local_58) & ~local_res20;
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar5);
      }
    }
    local_40 = (longlong *)0x0;
    pFVar18 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                        (this_04,(this_01->Id).field0_0x0._s_0.TypeId);
    if ((pFVar18 == (FRegisteredElementType *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("RegisteredElementType",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                            ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    if ((pUVar17 == (UClass *)0x0) ||
       (pUVar19 = Z_Construct_UClass_UInterface_NoRegister(), pUVar19 == (UClass *)0x0)) {
LAB_142cb8695:
      pUVar17 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar19->_padding_;
      if (((int)pUVar17->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar19->_padding_)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (!bVar10) goto LAB_142cb8695;
    }
    pTVar20 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                         (&pFVar18->Interfaces,(FName)pUVar17->_padding_)->field0_0x0;
    if ((pTVar20 != (TObjectPtr<UObject>_u_0 *)0x0) &&
       (this_02.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar20->DebugPtr,
       this_02.field0_0x0 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_02.field0_0x0);
      }
      pUVar17 = UTypedElementCounterInterface::StaticClass();
      plVar21 = UObjectBaseUtility::GetInterfaceAddress
                          ((UObjectBaseUtility *)this_02.field0_0x0,pUVar17);
      local_50 = this_01;
      local_48 = FTypedElementInternalData::AddRef(this_01,true);
      local_40 = plVar21;
    }
    if (local_50 != (FTypedElementInternalData *)0x0) {
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 0x18))(local_40,&local_50,&this->ElementCounts);
      }
      iVar2 = local_48;
      if (local_50 != (FTypedElementInternalData *)0x0) {
        lVar29 = (longlong)local_48;
        LOCK();
        local_50->RefCount = local_50->RefCount + -1;
        UNLOCK();
        pFVar5 = (local_50->References).Ptr;
        if ((pFVar5 != (FTypedElementReferences *)0x0) && (local_48 != -1)) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar5);
          lVar7 = *(longlong *)&pFVar5->References;
          puVar26 = &(pFVar5->References).field_0x10;
          bVar9 = (byte)iVar2 & 0x1f;
          local_res20 = 1 << bVar9 | 1U >> 0x20 - bVar9;
          if (((iVar2 < 0) || (*(int *)&(pFVar5->References).field_0x28 <= iVar2)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          puVar6 = *(undefined1 **)&(pFVar5->References).field_0x20;
          puVar27 = puVar26;
          if (puVar6 != (undefined1 *)0x0) {
            puVar27 = puVar6;
          }
          lVar1 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (((*(uint *)(puVar27 + lVar1) & local_res20) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AllocationFlags[Index]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                  ,0xc5,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          if (*(int *)&(pFVar5->References).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(pFVar5->References).field_0x30 * 0x108 + lVar7) = iVar2;
          }
          uVar14 = 0xffffffff;
          *(undefined4 *)(lVar29 * 0x108 + lVar7) = 0xffffffff;
          if (0 < *(int *)&(pFVar5->References).field_0x34) {
            uVar14 = *(undefined4 *)&(pFVar5->References).field_0x30;
          }
          *(undefined4 *)(lVar29 * 0x108 + 4 + lVar7) = uVar14;
          puVar6 = &(pFVar5->References).field_0x34;
          *(int *)puVar6 = *(int *)puVar6 + 1;
          *(int *)&(pFVar5->References).field_0x30 = iVar2;
          if (((iVar2 < 0) || (*(int *)&(pFVar5->References).field_0x28 <= iVar2)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          puVar6 = *(undefined1 **)&(pFVar5->References).field_0x20;
          if (puVar6 != (undefined1 *)0x0) {
            puVar26 = puVar6;
          }
          *(uint *)(puVar26 + lVar1) = *(uint *)(puVar26 + lVar1) & ~local_res20;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar5);
        }
      }
    }
  }
  FTypedElementInternalData::ReleaseRef(this_01,iVar22);
LAB_142cb8885:
  this_03 = (this->LegacySync).Ptr;
  this->bHasPendingNotify = true;
  if (this_03 != (FLegacySync *)0x0) {
    FLegacySync::Private_EmitSyncEvent(this_03,Removed,(FScriptTypedElementHandle *)&local_68);
  }
  if ((local_68.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     ((local_68.ControlBlock)->WeakRefCount = (local_68.ControlBlock)->WeakRefCount + -1,
     (local_68.ControlBlock)->WeakRefCount == 0)) {
    ::operator_delete(local_68.ControlBlock,0x10);
  }
  return 0 < iVar12;
}

// RemoveElementImpl @ 142cb89a0

bool __thiscall
TTypedElementList<FTypedElementHandle>::RemoveElementImpl
          (TTypedElementList<FTypedElementHandle> *this,FTypedElementId *param_1)

{
  int *piVar1;
  FLegacySync *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  FTypedElementId *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  FTypedElementId_u_0 local_res18 [4];
  FTypedElementHandle local_38;
  
  if ((param_1->field0_0x0)._s_0.TypeId == 0) {
    return false;
  }
  TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
               *)&this->OnPreChangeDelegate,this);
  local_res18[0]._s_0 = (FTypedElementId_u_0_s_0)(param_1->field0_0x0).CombinedId;
  if (*(int *)&(this->ElementCombinedIds).Elements.field_0x8 ==
      *(int *)&(this->ElementCombinedIds).Elements.field_0x34) {
    bVar12 = false;
  }
  else {
    iVar5 = TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
            RemoveImpl<unsigned_int>
                      (&this->ElementCombinedIds,local_res18[0].CombinedId,
                       &local_res18[0].CombinedId);
    bVar12 = 0 < iVar5;
    if (0 < iVar5) {
      pFVar8 = (this->ElementHandles).AllocatorInstance.Data;
      iVar5 = (this->ElementHandles).ArrayNum;
      if (pFVar8 != pFVar8 + (longlong)iVar5 * 0x10) {
        pFVar10 = pFVar8;
        do {
          if (*(longlong *)pFVar10 == 0) {
            pFVar7 = &FTypedElementId::Unset;
          }
          else {
            pFVar7 = (FTypedElementId *)(*(longlong *)pFVar10 + 8);
          }
          if (pFVar7->field0_0x0 == (param_1->field0_0x0).CombinedId) {
            uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar8 >> 4);
            uVar11 = ~uVar9;
            uVar13 = uVar11 >> 0x1f;
            uVar6 = 0;
            if ((int)uVar9 < iVar5) {
              uVar6 = uVar13;
            }
            if (uVar6 == 0) goto LAB_142cb8a6c;
            goto LAB_142cb8a9f;
          }
          pFVar10 = pFVar10 + 0x10;
        } while (pFVar10 != pFVar8 + (longlong)iVar5 * 0x10);
      }
      uVar11 = 0;
      uVar9 = 0xffffffff;
      uVar13 = 0;
LAB_142cb8a6c:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
LAB_142cb8a9f:
      pFVar8 = (this->ElementHandles).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
      local_38.DataPtr = *(FTypedElementInternalData **)pFVar8;
      local_38.ReferenceId = *(int *)(pFVar8 + 8);
      *(undefined8 *)pFVar8 = 0;
      *(undefined4 *)(pFVar8 + 8) = 0xffffffff;
      uVar6 = 0;
      if ((int)uVar9 < (this->ElementHandles).ArrayNum) {
        uVar6 = uVar13;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar8 = (this->ElementHandles).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
      if (*(FTypedElementInternalData **)pFVar8 != (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef
                  (*(FTypedElementInternalData **)pFVar8,*(int *)(pFVar8 + 8));
      }
      *(undefined8 *)pFVar8 = 0;
      *(undefined4 *)(pFVar8 + 8) = 0xffffffff;
      iVar5 = (this->ElementHandles).ArrayNum + uVar11;
      if (iVar5 != 0) {
        memmove(pFVar8,pFVar8 + 0x10,(longlong)iVar5 << 4);
      }
      piVar1 = &(this->ElementHandles).ArrayNum;
      *piVar1 = *piVar1 + -1;
      FTypedElementCounter::RemoveElement(&this->ElementCounts,&local_38);
      this_00 = (this->LegacySync).Ptr;
      this->bHasPendingNotify = true;
      if (this_00 != (FLegacySync *)0x0) {
        FLegacySync::Private_EmitSyncEvent(this_00,Removed,&local_38);
      }
      if (local_38.DataPtr != (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef(local_38.DataPtr,local_38.ReferenceId);
        return bVar12;
      }
    }
  }
  return bVar12;
}

// Reserve @ 142cb8f20

void __thiscall
TTypedElementList<FTypedElementHandle>::Reserve
          (TTypedElementList<FTypedElementHandle> *this,int param_1)

{
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Reserve
            (&this->ElementCombinedIds,param_1);
  if (-1 < param_1) {
    if ((this->ElementHandles).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&(this->ElementHandles).AllocatorInstance,
                 (this->ElementHandles).ArrayNum,&(this->ElementHandles).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 142cb9190

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::Reset
          (TTypedElementList<FScriptTypedElementHandle> *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FLegacySync *this_00;
  FScriptTypedElementInternalDataPtr local_res8;
  
  if ((this->ElementHandles).ArrayNum != 0) {
    TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                 *)&this->OnPreChangeDelegate,this);
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Reset
              (&this->ElementCombinedIds);
    piVar1 = &(this->ElementHandles).ArrayMax;
    pFVar3 = (this->ElementHandles).AllocatorInstance.Data;
    iVar2 = (this->ElementHandles).ArrayNum;
    if ((this->ElementHandles).ArrayMax < 0) {
      DestructItems<FScriptTypedElementHandle,int>((FScriptTypedElementHandle *)pFVar3,iVar2);
      (this->ElementHandles).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->ElementHandles).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FScriptTypedElementHandle,int>((FScriptTypedElementHandle *)pFVar3,iVar2);
      (this->ElementHandles).ArrayNum = 0;
    }
    FTypedElementCounter::ClearCounters(&this->ElementCounts);
    this_00 = (this->LegacySync).Ptr;
    local_res8.ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
    this->bHasPendingNotify = true;
    if (this_00 != (FLegacySync *)0x0) {
      FLegacySync::Private_EmitSyncEvent(this_00,Cleared,(FScriptTypedElementHandle *)&local_res8);
    }
    if ((local_res8.ControlBlock != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
       ((local_res8.ControlBlock)->WeakRefCount = (local_res8.ControlBlock)->WeakRefCount + -1,
       (local_res8.ControlBlock)->WeakRefCount == 0)) {
      ::operator_delete(local_res8.ControlBlock,0x10);
    }
  }
  return;
}

// Reset @ 142cb9280

void __thiscall
TTypedElementList<FTypedElementHandle>::Reset(TTypedElementList<FTypedElementHandle> *this)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  FTypedElementHandle *pFVar5;
  FLegacySync *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  FTypedElementHandle local_38;
  
  if ((this->ElementHandles).ArrayNum != 0) {
    TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                 *)&this->OnPreChangeDelegate,this);
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Reset
              (&this->ElementCombinedIds);
    piVar1 = &(this->ElementHandles).ArrayMax;
    pFVar5 = (FTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data;
    iVar4 = (this->ElementHandles).ArrayNum;
    if ((this->ElementHandles).ArrayMax < 0) {
      DestructItems<FTypedElementHandle,int>(pFVar5,iVar4);
      (this->ElementHandles).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->ElementHandles).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FTypedElementHandle,int>(pFVar5,iVar4);
      (this->ElementHandles).ArrayNum = 0;
    }
    FTypedElementCounter::ClearCounters(&this->ElementCounts);
    this_00 = (this->LegacySync).Ptr;
    uVar11 = 0xffffffff;
    local_38._12_4_ = 0;
    local_38.DataPtr = (FTypedElementInternalData *)0x0;
    local_38.ReferenceId = -1;
    this->bHasPendingNotify = true;
    if ((this_00 != (FLegacySync *)0x0) &&
       (FLegacySync::Private_EmitSyncEvent(this_00,Cleared,&local_38), iVar4 = local_38.ReferenceId,
       local_38.DataPtr != (FTypedElementInternalData *)0x0)) {
      lVar12 = (longlong)local_38.ReferenceId;
      LOCK();
      (local_38.DataPtr)->RefCount = (local_38.DataPtr)->RefCount + -1;
      UNLOCK();
      lpCriticalSection = ((local_38.DataPtr)->References).Ptr;
      if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_38.ReferenceId != -1)) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        lVar6 = *(longlong *)&(lpCriticalSection->References).field_0x0;
        puVar2 = &(lpCriticalSection->References).field_0x10;
        bVar8 = (byte)iVar4 & 0x1f;
        uVar13 = 1 << bVar8 | 1U >> 0x20 - bVar8;
        if (((iVar4 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
        lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = puVar2;
        }
        if (((*(uint *)(puVar10 + lVar3) & uVar13) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
          *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar6) =
               iVar4;
        }
        *(undefined4 *)(lVar12 * 0x108 + lVar6) = 0xffffffff;
        if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
          uVar11 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
        }
        *(undefined4 *)(lVar12 * 0x108 + 4 + lVar6) = uVar11;
        puVar10 = &(lpCriticalSection->References).field_0x34;
        *(int *)puVar10 = *(int *)puVar10 + 1;
        *(int *)&(lpCriticalSection->References).field_0x30 = iVar4;
        if (((iVar4 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = puVar2;
        }
        *(uint *)(puVar10 + lVar3) = *(uint *)(puVar10 + lVar3) & ~uVar13;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
  }
  return;
}

// Shrink @ 142cbb410

void __thiscall
TTypedElementList<FScriptTypedElementHandle>::Shrink
          (TTypedElementList<FScriptTypedElementHandle> *this)

{
  int iVar1;
  
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Shrink
            (&this->ElementCombinedIds);
  iVar1 = (this->ElementHandles).ArrayNum;
  if ((this->ElementHandles).ArrayMax != iVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,&(this->ElementHandles).AllocatorInstance,iVar1,
               &(this->ElementHandles).ArrayMax);
  }
  return;
}

// Shrink @ 142cbb460

void __thiscall
TTypedElementList<FTypedElementHandle>::Shrink(TTypedElementList<FTypedElementHandle> *this)

{
  int iVar1;
  
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Shrink
            (&this->ElementCombinedIds);
  iVar1 = (this->ElementHandles).ArrayNum;
  if ((this->ElementHandles).ArrayMax != iVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,&(this->ElementHandles).AllocatorInstance,iVar1,
               &(this->ElementHandles).ArrayMax);
  }
  return;
}

