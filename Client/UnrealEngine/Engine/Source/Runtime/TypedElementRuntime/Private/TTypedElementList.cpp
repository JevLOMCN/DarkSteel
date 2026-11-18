// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 4

// ForEachElement<ITypedElementObjectInterface> @ 14453dc00

void __thiscall
TTypedElementList<FTypedElementHandle>::ForEachElement<ITypedElementObjectInterface>
          (TTypedElementList<FTypedElementHandle> *this,
          TFunctionRef<bool___cdecl(TTypedElement<ITypedElementObjectInterface>_const_&)> *param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  code *pcVar5;
  byte bVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  UTypedElementRegistry *pUVar10;
  HANDLE *ppvVar11;
  FTypedElementHandle *pFVar12;
  uint uVar13;
  FTypedElementHandle *pFVar14;
  longlong lVar15;
  LONG LVar16;
  undefined1 local_res8 [8];
  TObjectPtr<UClass>_u_0 local_res18 [2];
  TTypedElement<void> local_58;
  
  iVar3 = (this->ElementHandles).ArrayNum;
  pFVar12 = (FTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data;
  LVar16 = -1;
  pFVar14 = pFVar12 + iVar3;
  local_58._0_8_ = 0;
  local_58._8_4_ = -1;
  local_58._16_8_ = 0;
  while( true ) {
    if ((this->ElementHandles).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTypedElementHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar14) break;
    pUVar10 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
    local_res18[0].DebugPtr = UTypedElementObjectInterface::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18[0].DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
    }
    TypedElementList_Private::GetElementImpl
              (pUVar10,pFVar12,(TSubclassOf<UInterface> *)&local_res18[0].ObjectPtr,&local_58);
    if ((local_58._0_8_ != 0) && (local_58._16_8_ != 0)) {
      cVar8 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_58);
      if (cVar8 == '\0') break;
    }
    pFVar12 = pFVar12 + 1;
  }
  uVar7 = local_58._8_4_;
  if (local_58._0_8_ != 0) {
    lVar15 = (longlong)(int)local_58._8_4_;
    LOCK();
    *(int *)(local_58._0_8_ + 0xc) = *(int *)(local_58._0_8_ + 0xc) + -1;
    UNLOCK();
    lpCriticalSection = *(LPCRITICAL_SECTION *)(local_58._0_8_ + 0x10);
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (local_58._8_4_ != -1)) {
      EnterCriticalSection(lpCriticalSection);
      p_Var4 = lpCriticalSection[1].DebugInfo;
      bVar6 = (byte)uVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if (((int)uVar7 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= (int)uVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar2 = (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      ppvVar11 = (HANDLE *)lpCriticalSection[1].SpinCount;
      if ((HANDLE *)lpCriticalSection[1].SpinCount == (HANDLE *)0x0) {
        ppvVar11 = &lpCriticalSection[1].OwningThread;
      }
      if ((*(uint *)((longlong)ppvVar11 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (lpCriticalSection[2].RecursionCount != 0) {
        *(undefined4 *)((longlong)lpCriticalSection[2].LockCount * 0x108 + (longlong)p_Var4) = uVar7
        ;
      }
      *(undefined4 *)(lVar15 * 0x108 + (longlong)p_Var4) = 0xffffffff;
      if (0 < lpCriticalSection[2].RecursionCount) {
        LVar16 = lpCriticalSection[2].LockCount;
      }
      *(LONG *)(lVar15 * 0x108 + 4 + (longlong)p_Var4) = LVar16;
      lpCriticalSection[2].RecursionCount = lpCriticalSection[2].RecursionCount + 1;
      lpCriticalSection[2].LockCount = uVar7;
      if (((int)uVar7 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= (int)uVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      ppvVar11 = (HANDLE *)lpCriticalSection[1].SpinCount;
      if ((HANDLE *)lpCriticalSection[1].SpinCount == (HANDLE *)0x0) {
        ppvVar11 = &lpCriticalSection[1].OwningThread;
      }
      puVar1 = (uint *)((longlong)ppvVar11 + lVar2);
      *puVar1 = *puVar1 & ~uVar13;
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return;
}

// ForEachElement<ITypedElementSelectionInterface> @ 14453de40

void __thiscall
TTypedElementList<FTypedElementHandle>::ForEachElement<ITypedElementSelectionInterface>
          (TTypedElementList<FTypedElementHandle> *this,
          TFunctionRef<bool___cdecl(TTypedElement<ITypedElementSelectionInterface>_const_&)>
          *param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  code *pcVar5;
  byte bVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  UTypedElementRegistry *pUVar10;
  HANDLE *ppvVar11;
  FTypedElementHandle *pFVar12;
  uint uVar13;
  FTypedElementHandle *pFVar14;
  longlong lVar15;
  LONG LVar16;
  undefined1 local_res8 [8];
  TObjectPtr<UClass>_u_0 local_res18 [2];
  TTypedElement<void> local_58;
  
  iVar3 = (this->ElementHandles).ArrayNum;
  pFVar12 = (FTypedElementHandle *)(this->ElementHandles).AllocatorInstance.Data;
  LVar16 = -1;
  pFVar14 = pFVar12 + iVar3;
  local_58._0_8_ = 0;
  local_58._8_4_ = -1;
  local_58._16_8_ = 0;
  while( true ) {
    if ((this->ElementHandles).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTypedElementHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar14) break;
    pUVar10 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
    local_res18[0].DebugPtr = UTypedElementSelectionInterface::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18[0].DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
    }
    TypedElementList_Private::GetElementImpl
              (pUVar10,pFVar12,(TSubclassOf<UInterface> *)&local_res18[0].ObjectPtr,&local_58);
    if ((local_58._0_8_ != 0) && (local_58._16_8_ != 0)) {
      cVar8 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_58);
      if (cVar8 == '\0') break;
    }
    pFVar12 = pFVar12 + 1;
  }
  uVar7 = local_58._8_4_;
  if (local_58._0_8_ != 0) {
    lVar15 = (longlong)(int)local_58._8_4_;
    LOCK();
    *(int *)(local_58._0_8_ + 0xc) = *(int *)(local_58._0_8_ + 0xc) + -1;
    UNLOCK();
    lpCriticalSection = *(LPCRITICAL_SECTION *)(local_58._0_8_ + 0x10);
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (local_58._8_4_ != -1)) {
      EnterCriticalSection(lpCriticalSection);
      p_Var4 = lpCriticalSection[1].DebugInfo;
      bVar6 = (byte)uVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if (((int)uVar7 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= (int)uVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar2 = (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      ppvVar11 = (HANDLE *)lpCriticalSection[1].SpinCount;
      if ((HANDLE *)lpCriticalSection[1].SpinCount == (HANDLE *)0x0) {
        ppvVar11 = &lpCriticalSection[1].OwningThread;
      }
      if ((*(uint *)((longlong)ppvVar11 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (lpCriticalSection[2].RecursionCount != 0) {
        *(undefined4 *)((longlong)lpCriticalSection[2].LockCount * 0x108 + (longlong)p_Var4) = uVar7
        ;
      }
      *(undefined4 *)(lVar15 * 0x108 + (longlong)p_Var4) = 0xffffffff;
      if (0 < lpCriticalSection[2].RecursionCount) {
        LVar16 = lpCriticalSection[2].LockCount;
      }
      *(LONG *)(lVar15 * 0x108 + 4 + (longlong)p_Var4) = LVar16;
      lpCriticalSection[2].RecursionCount = lpCriticalSection[2].RecursionCount + 1;
      lpCriticalSection[2].LockCount = uVar7;
      if (((int)uVar7 < 0) || (*(int *)&lpCriticalSection[2].DebugInfo <= (int)uVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      ppvVar11 = (HANDLE *)lpCriticalSection[1].SpinCount;
      if ((HANDLE *)lpCriticalSection[1].SpinCount == (HANDLE *)0x0) {
        ppvVar11 = &lpCriticalSection[1].OwningThread;
      }
      puVar1 = (uint *)((longlong)ppvVar11 + lVar2);
      *puVar1 = *puVar1 & ~uVar13;
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return;
}

// GetElementAt<ITypedElementObjectInterface> @ 14453e080

void __thiscall
TTypedElementList<FTypedElementHandle>::GetElementAt<ITypedElementObjectInterface>
          (TTypedElementList<FTypedElementHandle> *this,int param_1,
          TTypedElement<ITypedElementObjectInterface> *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  bool bVar7;
  UTypedElementRegistry *pUVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint uVar12;
  TObjectPtr<UClass>_u_0 local_res8;
  FTypedElementHandle local_38;
  
  uVar12 = 0;
  if (param_1 < (this->ElementHandles).ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_38.DataPtr = (FTypedElementInternalData *)0x0;
  uVar10 = 0xffffffff;
  local_38.ReferenceId = -1;
  this_00 = *(FTypedElementInternalData **)
             ((this->ElementHandles).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  if (this_00 != (FTypedElementInternalData *)0x0) {
    local_38.DataPtr = this_00;
    local_38.ReferenceId = FTypedElementInternalData::AddRef(this_00,true);
  }
  pUVar8 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(this->Registry).WeakPtr);
  local_res8.DebugPtr = UTypedElementObjectInterface::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.DebugPtr != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  TypedElementList_Private::GetElementImpl
            (pUVar8,&local_38,(TSubclassOf<UInterface> *)&local_res8.ObjectPtr,
             (TTypedElement<void> *)param_2);
  iVar6 = local_38.ReferenceId;
  if (local_38.DataPtr != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_38.ReferenceId;
    LOCK();
    (local_38.DataPtr)->RefCount = (local_38.DataPtr)->RefCount + -1;
    UNLOCK();
    lpCriticalSection = ((local_38.DataPtr)->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_38.ReferenceId != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar3 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar5 = (byte)iVar6 & 0x1f;
      uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
      if ((iVar6 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar6)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      if ((*(uint *)(puVar9 + lVar2) & uVar12) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar3) =
             iVar6;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar3) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar10 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar3) = uVar10;
      puVar9 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar9 = *(int *)puVar9 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar6;
      if ((iVar6 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar6)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      *(uint *)(puVar9 + lVar2) = *(uint *)(puVar9 + lVar2) & ~uVar12;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// operator() @ 14453f5e0

bool __thiscall
`TTypedElementList<FTypedElementHandle>::
GetElementHandles<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>::
operator()(void *this,FTypedElementHandle *param_1)

{
  ForElementType<FTypedElementHandle> FVar1;
  FTypedElementInternalData *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForElementType<FTypedElementHandle> FVar6;
  undefined8 *puVar7;
  
  FVar1 = *(ForElementType<FTypedElementHandle> *)this;
  FVar6 = *(ForElementType<FTypedElementHandle> *)((longlong)FVar1 + 0x80);
  if (*(ForElementType<FTypedElementHandle> *)((longlong)FVar1 + 0x80) ==
      (ForElementType<FTypedElementHandle>)0x0) {
    FVar6 = FVar1;
  }
  if (((ulonglong)FVar6 <= param_1) &&
     (param_1 < (FTypedElementHandle *)
                ((longlong)*(int *)((longlong)FVar1 + 0x8c) * 0x10 + (longlong)FVar6))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = *(int *)((longlong)FVar1 + 0x88);
  if (iVar5 == *(int *)((longlong)FVar1 + 0x8c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FTypedElementHandle>_>
                      (0x810,(ForElementType<FTypedElementHandle> *)FVar1,
                       (int *)((longlong)FVar1 + 0x8c));
  }
  *(int *)((longlong)FVar1 + 0x88) = iVar5 + 1;
  FVar6 = *(ForElementType<FTypedElementHandle> *)((longlong)FVar1 + 0x80);
  if (*(ForElementType<FTypedElementHandle> *)((longlong)FVar1 + 0x80) ==
      (ForElementType<FTypedElementHandle>)0x0) {
    FVar6 = FVar1;
  }
  puVar7 = (undefined8 *)((longlong)iVar5 * 0x10 + (longlong)FVar6);
  *puVar7 = 0;
  *(undefined4 *)(puVar7 + 1) = 0xffffffff;
  this_00 = param_1->DataPtr;
  if (this_00 != (FTypedElementInternalData *)0x0) {
    *puVar7 = this_00;
    iVar5 = FTypedElementInternalData::AddRef(this_00,true);
    *(int *)(puVar7 + 1) = iVar5;
  }
  return true;
}

