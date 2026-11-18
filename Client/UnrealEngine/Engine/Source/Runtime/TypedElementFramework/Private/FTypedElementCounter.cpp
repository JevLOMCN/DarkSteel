// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 8

// GetCounterValue<unsigned_char> @ 142c8e5e0

int __thiscall
FTypedElementCounter::GetCounterValue<unsigned_char>
          (FTypedElementCounter *this,FName param_1,uchar *param_2)

{
  ICounterCategory *pIVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar3;
  
  pTVar3 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(&this->CounterCategories,param_1);
  if (pTVar3 != (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
                 *)0x0) {
    pIVar1 = pTVar3->Ptr;
    UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      if (`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
          _thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::
                        __l3::KeyTypeName,L"uint8");
        _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                             ::__l3::_thread_safe_static_guard_0__);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000142c8e64d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*UNRECOVERED_JUMPTABLE)
                      (pIVar1,param_2,
                       `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::
                       __l3::KeyTypeName);
    return iVar2;
  }
  return 0;
}

// FTypedElementCounter @ 142c98930

FTypedElementCounter * __thiscall
FTypedElementCounter::FTypedElementCounter
          (FTypedElementCounter *this,UTypedElementRegistry *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FTypedElementCounter *pFVar4;
  UTypedElementRegistry *local_res8;
  
  (this->Registry).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CounterCategories).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CounterCategories).Pairs.ArrayNum = 0;
  (this->CounterCategories).Pairs.ArrayMax = 0;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Registry.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementCounter.cpp"
                       ,0xf,L"Initialize has already been called!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTypedElementCounter *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UTypedElementRegistry *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    return this;
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  if (param_1 == (UTypedElementRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementCounter.cpp"
                       ,0x11,L"Registry is null!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTypedElementCounter *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// AddElement @ 142ca3020

void __thiscall
FTypedElementCounter::AddElement(FTypedElementCounter *this,FTypedElementHandle *param_1)

{
  uint *puVar1;
  longlong lVar2;
  ICounterCategory *pIVar3;
  code *pcVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  byte bVar6;
  undefined4 uVar7;
  bool bVar8;
  UTypedElementRegistry *this_00;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar9;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar10;
  ICounterCategory *pIVar11;
  uint uVar12;
  HANDLE *ppvVar13;
  longlong lVar14;
  int *piVar15;
  LONG LVar16;
  byte local_res8 [8];
  FName local_res18;
  TObjectPtr<UClass>_u_0 local_res20;
  undefined1 local_58 [16];
  longlong *local_48;
  
  this_00 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 == (UTypedElementRegistry *)0x0) {
    return;
  }
  if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
    return;
  }
  local_res8[0] = (param_1->DataPtr->Id).field0_0x0._s_0.TypeId;
  piVar15 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar15 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_ElementType,"ElementType");
    _Init_thread_footer(&::_TSS0);
  }
  local_res18 = NAME_ElementType;
  pTVar9 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(&this->CounterCategories,NAME_ElementType);
  LVar16 = -1;
  if (pTVar9 == (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
                 *)0x0) {
    pTVar10 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
              ::AllocateMemoryForEmplace<FName_const_&>(&this->CounterCategories,&local_res18);
    pTVar9 = (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
              *)&pTVar10->field_0x8;
    *(uint *)&pTVar10->field_0x0 = local_res18.ComparisonIndex.Value;
    *(uint *)&pTVar10->field_0x4 = local_res18.Number;
    *pTVar9 = (ICounterCategory *)0x0;
  }
  else if (pTVar9->Ptr != (ICounterCategory *)0x0) goto LAB_142ca3160;
  pIVar11 = ::operator_new(0x60);
  if (pIVar11 == (ICounterCategory *)0x0) {
    pIVar11 = (ICounterCategory *)0x0;
  }
  else {
    *pIVar11 = (ICounterCategory)&___7__TCounterCategory_E_FTypedElementCounter__6B_;
    GetTypedElementCounterKeyName<unsigned_char>();
    pIVar11[2] = (ICounterCategory)0x0;
    pIVar11[3] = (ICounterCategory)0x0;
    pIVar11[6] = (ICounterCategory)0x0;
    *(undefined4 *)(pIVar11 + 7) = 0;
    *(undefined4 *)&pIVar11[7].field_0x4 = 0x80;
    *(undefined4 *)(pIVar11 + 8) = 0xffffffff;
    *(undefined4 *)&pIVar11[8].field_0x4 = 0;
    pIVar11[10] = (ICounterCategory)0x0;
    *(undefined4 *)(pIVar11 + 0xb) = 0;
  }
  pIVar3 = pTVar9->Ptr;
  pTVar9->Ptr = pIVar11;
  if (pIVar3 != (ICounterCategory *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
LAB_142ca3160:
  pIVar11 = pTVar9->Ptr;
  pcVar4 = *(code **)((longlong)*pIVar11 + 0x18);
  if ((*piVar15 <
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
  (*pcVar4)(pIVar11,local_res8,
            `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
            KeyTypeName);
  local_58._8_4_ = -1;
  local_58._0_8_ = 0;
  local_48 = (longlong *)0x0;
  local_res20.DebugPtr = UTypedElementCounterInterface::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res20.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
  }
  UTypedElementRegistry::GetElementImpl<ITypedElementCounterInterface>
            (this_00,param_1,(TSubclassOf<UInterface> *)&local_res20.ObjectPtr,
             (TTypedElement<ITypedElementCounterInterface> *)local_58);
  if (local_58._0_8_ != 0) {
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))(local_48,local_58,this);
    }
    uVar7 = local_58._8_4_;
    if (local_58._0_8_ != 0) {
      lVar14 = (longlong)(int)local_58._8_4_;
      LOCK();
      *(int *)(local_58._0_8_ + 0xc) = *(int *)(local_58._0_8_ + 0xc) + -1;
      UNLOCK();
      lpCriticalSection = *(LPCRITICAL_SECTION *)(local_58._0_8_ + 0x10);
      if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (local_58._8_4_ != -1)) {
        EnterCriticalSection(lpCriticalSection);
        p_Var5 = lpCriticalSection[1].DebugInfo;
        bVar6 = (byte)uVar7 & 0x1f;
        uVar12 = 1 << bVar6 | 1U >> 0x20 - bVar6;
        if ((((int)uVar7 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= (int)uVar7)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ppvVar13 = &lpCriticalSection[1].OwningThread;
        if ((HANDLE *)lpCriticalSection[1].SpinCount != (HANDLE *)0x0) {
          ppvVar13 = (HANDLE *)lpCriticalSection[1].SpinCount;
        }
        lVar2 = (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
        if (((*(uint *)(lVar2 + (longlong)ppvVar13) & uVar12) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (lpCriticalSection[2].RecursionCount != 0) {
          *(undefined4 *)((longlong)lpCriticalSection[2].LockCount * 0x108 + (longlong)p_Var5) =
               uVar7;
        }
        *(undefined4 *)(lVar14 * 0x108 + (longlong)p_Var5) = 0xffffffff;
        if (0 < lpCriticalSection[2].RecursionCount) {
          LVar16 = lpCriticalSection[2].LockCount;
        }
        *(LONG *)(lVar14 * 0x108 + 4 + (longlong)p_Var5) = LVar16;
        lpCriticalSection[2].RecursionCount = lpCriticalSection[2].RecursionCount + 1;
        lpCriticalSection[2].LockCount = uVar7;
        if ((((int)uVar7 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= (int)uVar7)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ppvVar13 = &lpCriticalSection[1].OwningThread;
        if ((HANDLE *)lpCriticalSection[1].SpinCount != (HANDLE *)0x0) {
          ppvVar13 = (HANDLE *)lpCriticalSection[1].SpinCount;
        }
        puVar1 = (uint *)((longlong)ppvVar13 + lVar2);
        *puVar1 = *puVar1 & ~uVar12;
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  return;
}

// ClearCounters @ 142ca77c0

void __thiscall FTypedElementCounter::ClearCounters(FTypedElementCounter *this,FName param_1)

{
  TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
  *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  code *pcVar4;
  FKeyForward FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *_Dst;
  FName local_res8;
  
  pTVar1 = &this->CounterCategories;
  local_res8.ComparisonIndex.Value._0_1_ = param_1.ComparisonIndex.Value._0_1_;
  FVar5 = local_res8.ComparisonIndex.Value._0_1_;
  local_res8 = param_1;
  uVar7 = Algo::
          BinarySearchBy<TArray<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (&pTVar1->Pairs,&local_res8,FVar5,(FNameFastLess)FVar5);
  if (uVar7 != 0xffffffff) {
    uVar8 = 0;
    if ((int)uVar7 < (this->CounterCategories).Pairs.ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    _Dst = (pTVar1->Pairs).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
    puVar3 = *(undefined8 **)(_Dst + 8);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    iVar9 = (this->CounterCategories).Pairs.ArrayNum + ~uVar7;
    if (iVar9 != 0) {
      memmove(_Dst,_Dst + 0x10,(longlong)iVar9 << 4);
    }
    piVar2 = &(this->CounterCategories).Pairs.ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(ForAnyElementType *)pTVar1,(this->CounterCategories).Pairs.ArrayNum,
               &(this->CounterCategories).Pairs.ArrayMax);
  }
  return;
}

// ClearCounters @ 142ca78c0

void __thiscall FTypedElementCounter::ClearCounters(FTypedElementCounter *this)

{
  int *piVar1;
  int iVar2;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar3;
  
  iVar2 = (this->CounterCategories).Pairs.ArrayNum;
  piVar1 = &(this->CounterCategories).Pairs.ArrayMax;
  pTVar3 = (TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
            *)(this->CounterCategories).Pairs.AllocatorInstance.Data;
  if (-1 < (this->CounterCategories).Pairs.ArrayMax) {
    DestructItems<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,int>
              (pTVar3,iVar2);
    (this->CounterCategories).Pairs.ArrayNum = 0;
    return;
  }
  DestructItems<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,int>
            (pTVar3,iVar2);
  (this->CounterCategories).Pairs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&this->CounterCategories,0,piVar1);
  }
  return;
}

// GetElementTypeCategoryName @ 142cadeb0

FName __cdecl FTypedElementCounter::GetElementTypeCategoryName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NAME_ElementType,"ElementType");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = NAME_ElementType;
  return in_RCX;
}

// Initialize @ 142caf2e0

void __thiscall
FTypedElementCounter::Initialize(FTypedElementCounter *this,UTypedElementRegistry *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UTypedElementRegistry *local_res8;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar3 != (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Registry.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementCounter.cpp"
                       ,0xf,L"Initialize has already been called!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UTypedElementRegistry *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    return;
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  if (param_1 == (UTypedElementRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementCounter.cpp"
                       ,0x11,L"Registry is null!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RemoveElement @ 142cb7e80

void __thiscall
FTypedElementCounter::RemoveElement(FTypedElementCounter *this,FTypedElementHandle *param_1)

{
  uint *puVar1;
  longlong lVar2;
  ICounterCategory *pIVar3;
  code *pcVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  byte bVar6;
  undefined4 uVar7;
  bool bVar8;
  UTypedElementRegistry *this_00;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar9;
  HANDLE *ppvVar10;
  LONG LVar11;
  longlong lVar12;
  uint uVar13;
  int *piVar14;
  byte local_res8 [8];
  TObjectPtr<UClass>_u_0 local_res18 [2];
  undefined1 local_58 [16];
  longlong *local_48;
  
  this_00 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if ((this_00 != (UTypedElementRegistry *)0x0) &&
     (param_1->DataPtr != (FTypedElementInternalData *)0x0)) {
    local_res8[0] = (param_1->DataPtr->Id).field0_0x0._s_0.TypeId;
    piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&NAME_ElementType,"ElementType");
      _Init_thread_footer(&::_TSS0);
    }
    pTVar9 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
             ::Find(&this->CounterCategories,NAME_ElementType);
    if (pTVar9 != (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
                   *)0x0) {
      pIVar3 = pTVar9->Ptr;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0x20);
      if ((*piVar14 <
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
    LVar11 = -1;
    local_58._0_8_ = 0;
    local_58._8_4_ = -1;
    local_48 = (longlong *)0x0;
    local_res18[0].DebugPtr = UTypedElementCounterInterface::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18[0].DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
    }
    UTypedElementRegistry::GetElementImpl<ITypedElementCounterInterface>
              (this_00,param_1,(TSubclassOf<UInterface> *)&local_res18[0].ObjectPtr,
               (TTypedElement<ITypedElementCounterInterface> *)local_58);
    if (local_58._0_8_ != 0) {
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x18))(local_48,local_58,this);
      }
      uVar7 = local_58._8_4_;
      if (local_58._0_8_ != 0) {
        lVar12 = (longlong)(int)local_58._8_4_;
        LOCK();
        *(int *)(local_58._0_8_ + 0xc) = *(int *)(local_58._0_8_ + 0xc) + -1;
        UNLOCK();
        lpCriticalSection = *(LPCRITICAL_SECTION *)(local_58._0_8_ + 0x10);
        if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (local_58._8_4_ != -1)) {
          EnterCriticalSection(lpCriticalSection);
          p_Var5 = lpCriticalSection[1].DebugInfo;
          bVar6 = (byte)uVar7 & 0x1f;
          uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
          if ((((int)uVar7 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= (int)uVar7)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
          ppvVar10 = (HANDLE *)lpCriticalSection[1].SpinCount;
          if ((HANDLE *)lpCriticalSection[1].SpinCount == (HANDLE *)0x0) {
            ppvVar10 = &lpCriticalSection[1].OwningThread;
          }
          if (((*(uint *)((longlong)ppvVar10 + lVar2) & uVar13) == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (lpCriticalSection[2].RecursionCount != 0) {
            *(undefined4 *)((longlong)lpCriticalSection[2].LockCount * 0x108 + (longlong)p_Var5) =
                 uVar7;
          }
          *(undefined4 *)(lVar12 * 0x108 + (longlong)p_Var5) = 0xffffffff;
          if (0 < lpCriticalSection[2].RecursionCount) {
            LVar11 = lpCriticalSection[2].LockCount;
          }
          *(LONG *)(lVar12 * 0x108 + 4 + (longlong)p_Var5) = LVar11;
          lpCriticalSection[2].RecursionCount = lpCriticalSection[2].RecursionCount + 1;
          lpCriticalSection[2].LockCount = uVar7;
          if ((((int)uVar7 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= (int)uVar7)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          ppvVar10 = (HANDLE *)lpCriticalSection[1].SpinCount;
          if ((HANDLE *)lpCriticalSection[1].SpinCount == (HANDLE *)0x0) {
            ppvVar10 = &lpCriticalSection[1].OwningThread;
          }
          puVar1 = (uint *)((longlong)ppvVar10 + lVar2);
          *puVar1 = *puVar1 & ~uVar13;
          LeaveCriticalSection(lpCriticalSection);
        }
      }
    }
  }
  return;
}

