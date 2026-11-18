// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 85

// ~ITypedElementWorldInterface @ 147b3d400

void __thiscall
ITypedElementWorldInterface::~ITypedElementWorldInterface(ITypedElementWorldInterface *this)

{
  *this = (ITypedElementWorldInterface)&___7ITypedElementWorldInterface__6B_;
  return;
}

// operator() @ 147b3e7b0

bool __thiscall
`ITypedElementWorldInterface::GetSelectionElementsInBox'::__l2::<lambda_1>::operator()
          (void *this,FTypedElementHandle *param_1,FWorldSelectionElementArgs *param_2)

{
  uint *puVar1;
  longlong lVar2;
  UTypedElementRegistry *this_00;
  LPCRITICAL_SECTION p_Var3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  code *pcVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  bool bVar9;
  HANDLE *ppvVar10;
  LONG LVar11;
  uint uVar12;
  longlong lVar13;
  TObjectPtr<UClass>_u_0 local_res8;
  undefined1 local_48 [16];
  longlong *local_38;
  
  this_00 = *(UTypedElementRegistry **)((longlong)this + 8);
  LVar11 = -1;
  local_48._0_8_ = 0;
  local_48._8_4_ = -1;
  local_38 = (longlong *)0x0;
  local_res8.DebugPtr = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.DebugPtr != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  UTypedElementRegistry::GetElementImpl<ITypedElementWorldInterface>
            (this_00,param_1,(TSubclassOf<UInterface> *)&local_res8.ObjectPtr,
             (TTypedElement<ITypedElementWorldInterface> *)local_48);
  uVar7 = local_48._8_4_;
  if (local_48._0_8_ != 0) {
    if (local_38 != (longlong *)0x0) {
      uVar8 = (**(code **)(*local_38 + 0x1c0))
                        (local_38,local_48,*(undefined8 *)this,param_2->bMustEncompassEntireElement)
      ;
      uVar7 = local_48._8_4_;
      if (local_48._0_8_ == 0) {
        return (bool)uVar8;
      }
      lVar13 = (longlong)(int)local_48._8_4_;
      LOCK();
      *(int *)(local_48._0_8_ + 0xc) = *(int *)(local_48._0_8_ + 0xc) + -1;
      UNLOCK();
      p_Var3 = *(LPCRITICAL_SECTION *)(local_48._0_8_ + 0x10);
      if (p_Var3 == (LPCRITICAL_SECTION)0x0) {
        return (bool)uVar8;
      }
      if (local_48._8_4_ == -1) {
        return (bool)uVar8;
      }
      EnterCriticalSection(p_Var3);
      p_Var4 = p_Var3[1].DebugInfo;
      bVar6 = (byte)uVar7 & 0x1f;
      uVar12 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((((int)uVar7 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar7)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      lVar2 = (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      ppvVar10 = (HANDLE *)p_Var3[1].SpinCount;
      if ((HANDLE *)p_Var3[1].SpinCount == (HANDLE *)0x0) {
        ppvVar10 = &p_Var3[1].OwningThread;
      }
      if (((*(uint *)((longlong)ppvVar10 + lVar2) & uVar12) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (p_Var3[2].RecursionCount != 0) {
        *(undefined4 *)((longlong)p_Var3[2].LockCount * 0x108 + (longlong)p_Var4) = uVar7;
      }
      *(undefined4 *)(lVar13 * 0x108 + (longlong)p_Var4) = 0xffffffff;
      if (0 < p_Var3[2].RecursionCount) {
        LVar11 = p_Var3[2].LockCount;
      }
      *(LONG *)(lVar13 * 0x108 + 4 + (longlong)p_Var4) = LVar11;
      p_Var3[2].RecursionCount = p_Var3[2].RecursionCount + 1;
      p_Var3[2].LockCount = uVar7;
      if ((((int)uVar7 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar7)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      ppvVar10 = (HANDLE *)p_Var3[1].SpinCount;
      if ((HANDLE *)p_Var3[1].SpinCount == (HANDLE *)0x0) {
        ppvVar10 = &p_Var3[1].OwningThread;
      }
      puVar1 = (uint *)((longlong)ppvVar10 + lVar2);
      *puVar1 = *puVar1 & ~uVar12;
      LeaveCriticalSection(p_Var3);
      return (bool)uVar8;
    }
    if (local_48._0_8_ != 0) {
      lVar13 = (longlong)(int)local_48._8_4_;
      LOCK();
      *(int *)(local_48._0_8_ + 0xc) = *(int *)(local_48._0_8_ + 0xc) + -1;
      UNLOCK();
      p_Var3 = *(LPCRITICAL_SECTION *)(local_48._0_8_ + 0x10);
      if ((p_Var3 != (LPCRITICAL_SECTION)0x0) && (local_48._8_4_ != -1)) {
        EnterCriticalSection(p_Var3);
        p_Var4 = p_Var3[1].DebugInfo;
        bVar6 = (byte)uVar7 & 0x1f;
        uVar12 = 1 << bVar6 | 1U >> 0x20 - bVar6;
        if ((((int)uVar7 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar7)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        lVar2 = (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
        ppvVar10 = (HANDLE *)p_Var3[1].SpinCount;
        if ((HANDLE *)p_Var3[1].SpinCount == (HANDLE *)0x0) {
          ppvVar10 = &p_Var3[1].OwningThread;
        }
        if (((*(uint *)((longlong)ppvVar10 + lVar2) & uVar12) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if (p_Var3[2].RecursionCount != 0) {
          *(undefined4 *)((longlong)p_Var3[2].LockCount * 0x108 + (longlong)p_Var4) = uVar7;
        }
        *(undefined4 *)(lVar13 * 0x108 + (longlong)p_Var4) = 0xffffffff;
        if (0 < p_Var3[2].RecursionCount) {
          LVar11 = p_Var3[2].LockCount;
        }
        *(LONG *)(lVar13 * 0x108 + 4 + (longlong)p_Var4) = LVar11;
        p_Var3[2].RecursionCount = p_Var3[2].RecursionCount + 1;
        p_Var3[2].LockCount = uVar7;
        if ((((int)uVar7 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar7)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        ppvVar10 = (HANDLE *)p_Var3[1].SpinCount;
        if ((HANDLE *)p_Var3[1].SpinCount == (HANDLE *)0x0) {
          ppvVar10 = &p_Var3[1].OwningThread;
        }
        puVar1 = (uint *)((longlong)ppvVar10 + lVar2);
        *puVar1 = *puVar1 & ~uVar12;
        LeaveCriticalSection(p_Var3);
      }
    }
  }
  return false;
}

// operator() @ 147b3eb10

bool __thiscall
`ITypedElementWorldInterface::GetSelectionElementsInConvexVolume'::__l2::<lambda_1>::operator()
          (void *this,FTypedElementHandle *param_1,FWorldSelectionElementArgs *param_2)

{
  uint *puVar1;
  longlong lVar2;
  UTypedElementRegistry *this_00;
  LPCRITICAL_SECTION p_Var3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  code *pcVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  bool bVar9;
  HANDLE *ppvVar10;
  LONG LVar11;
  uint uVar12;
  longlong lVar13;
  TObjectPtr<UClass>_u_0 local_res8;
  undefined1 local_48 [16];
  longlong *local_38;
  
  this_00 = *(UTypedElementRegistry **)((longlong)this + 8);
  LVar11 = -1;
  local_48._0_8_ = 0;
  local_48._8_4_ = -1;
  local_38 = (longlong *)0x0;
  local_res8.DebugPtr = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.DebugPtr != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  UTypedElementRegistry::GetElementImpl<ITypedElementWorldInterface>
            (this_00,param_1,(TSubclassOf<UInterface> *)&local_res8.ObjectPtr,
             (TTypedElement<ITypedElementWorldInterface> *)local_48);
  uVar7 = local_48._8_4_;
  if (local_48._0_8_ != 0) {
    if (local_38 != (longlong *)0x0) {
      uVar8 = (**(code **)(*local_38 + 0x1b8))
                        (local_38,local_48,*(undefined8 *)this,param_2->bMustEncompassEntireElement)
      ;
      uVar7 = local_48._8_4_;
      if (local_48._0_8_ == 0) {
        return (bool)uVar8;
      }
      lVar13 = (longlong)(int)local_48._8_4_;
      LOCK();
      *(int *)(local_48._0_8_ + 0xc) = *(int *)(local_48._0_8_ + 0xc) + -1;
      UNLOCK();
      p_Var3 = *(LPCRITICAL_SECTION *)(local_48._0_8_ + 0x10);
      if (p_Var3 == (LPCRITICAL_SECTION)0x0) {
        return (bool)uVar8;
      }
      if (local_48._8_4_ == -1) {
        return (bool)uVar8;
      }
      EnterCriticalSection(p_Var3);
      p_Var4 = p_Var3[1].DebugInfo;
      bVar6 = (byte)uVar7 & 0x1f;
      uVar12 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((((int)uVar7 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar7)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      lVar2 = (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      ppvVar10 = (HANDLE *)p_Var3[1].SpinCount;
      if ((HANDLE *)p_Var3[1].SpinCount == (HANDLE *)0x0) {
        ppvVar10 = &p_Var3[1].OwningThread;
      }
      if (((*(uint *)((longlong)ppvVar10 + lVar2) & uVar12) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (p_Var3[2].RecursionCount != 0) {
        *(undefined4 *)((longlong)p_Var3[2].LockCount * 0x108 + (longlong)p_Var4) = uVar7;
      }
      *(undefined4 *)(lVar13 * 0x108 + (longlong)p_Var4) = 0xffffffff;
      if (0 < p_Var3[2].RecursionCount) {
        LVar11 = p_Var3[2].LockCount;
      }
      *(LONG *)(lVar13 * 0x108 + 4 + (longlong)p_Var4) = LVar11;
      p_Var3[2].RecursionCount = p_Var3[2].RecursionCount + 1;
      p_Var3[2].LockCount = uVar7;
      if ((((int)uVar7 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar7)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      ppvVar10 = (HANDLE *)p_Var3[1].SpinCount;
      if ((HANDLE *)p_Var3[1].SpinCount == (HANDLE *)0x0) {
        ppvVar10 = &p_Var3[1].OwningThread;
      }
      puVar1 = (uint *)((longlong)ppvVar10 + lVar2);
      *puVar1 = *puVar1 & ~uVar12;
      LeaveCriticalSection(p_Var3);
      return (bool)uVar8;
    }
    if (local_48._0_8_ != 0) {
      lVar13 = (longlong)(int)local_48._8_4_;
      LOCK();
      *(int *)(local_48._0_8_ + 0xc) = *(int *)(local_48._0_8_ + 0xc) + -1;
      UNLOCK();
      p_Var3 = *(LPCRITICAL_SECTION *)(local_48._0_8_ + 0x10);
      if ((p_Var3 != (LPCRITICAL_SECTION)0x0) && (local_48._8_4_ != -1)) {
        EnterCriticalSection(p_Var3);
        p_Var4 = p_Var3[1].DebugInfo;
        bVar6 = (byte)uVar7 & 0x1f;
        uVar12 = 1 << bVar6 | 1U >> 0x20 - bVar6;
        if ((((int)uVar7 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar7)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        lVar2 = (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
        ppvVar10 = (HANDLE *)p_Var3[1].SpinCount;
        if ((HANDLE *)p_Var3[1].SpinCount == (HANDLE *)0x0) {
          ppvVar10 = &p_Var3[1].OwningThread;
        }
        if (((*(uint *)((longlong)ppvVar10 + lVar2) & uVar12) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if (p_Var3[2].RecursionCount != 0) {
          *(undefined4 *)((longlong)p_Var3[2].LockCount * 0x108 + (longlong)p_Var4) = uVar7;
        }
        *(undefined4 *)(lVar13 * 0x108 + (longlong)p_Var4) = 0xffffffff;
        if (0 < p_Var3[2].RecursionCount) {
          LVar11 = p_Var3[2].LockCount;
        }
        *(LONG *)(lVar13 * 0x108 + 4 + (longlong)p_Var4) = LVar11;
        p_Var3[2].RecursionCount = p_Var3[2].RecursionCount + 1;
        p_Var3[2].LockCount = uVar7;
        if ((((int)uVar7 < 0) || (*(int *)&p_Var3[2].DebugInfo <= (int)uVar7)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        ppvVar10 = (HANDLE *)p_Var3[1].SpinCount;
        if ((HANDLE *)p_Var3[1].SpinCount == (HANDLE *)0x0) {
          ppvVar10 = &p_Var3[1].OwningThread;
        }
        puVar1 = (uint *)((longlong)ppvVar10 + lVar2);
        *puVar1 = *puVar1 & ~uVar12;
        LeaveCriticalSection(p_Var3);
      }
    }
  }
  return false;
}

// AddIgnoredElementToCollisionQueryParams @ 147b42e80

bool __thiscall
ITypedElementWorldInterface::AddIgnoredElementToCollisionQueryParams
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,
          FCollisionQueryParams *param_2,bool param_3)

{
  return false;
}

// CanCopyElement @ 147b49ef0

bool __thiscall
ITypedElementWorldInterface::CanCopyElement
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1)

{
  return false;
}

// CanDeleteElement @ 147b49f90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::CanDeleteElement
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      uVar8 = (**(code **)((longlong)*this + 0x130))(this,&local_38);
      goto LAB_147b4a005;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  uVar8 = 0;
LAB_147b4a005:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar8;
}

// CanDeleteElement @ 147b4a190

bool __thiscall
ITypedElementWorldInterface::CanDeleteElement
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1)

{
  return false;
}

// CanDuplicateElement @ 147b4a1b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::CanDuplicateElement
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      uVar8 = (**(code **)((longlong)*this + 0x158))(this,&local_38);
      goto LAB_147b4a225;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  uVar8 = 0;
LAB_147b4a225:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar8;
}

// CanDuplicateElement @ 147b4a3b0

bool __thiscall
ITypedElementWorldInterface::CanDuplicateElement
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1)

{
  return false;
}

// CanEditElement @ 147b4a3d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::CanEditElement
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      uVar8 = (**(code **)((longlong)*this + 0x28))(this,&local_38);
      goto LAB_147b4a442;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  uVar8 = 0;
LAB_147b4a442:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar8;
}

// CanEditElement @ 147b4a5d0

bool __thiscall
ITypedElementWorldInterface::CanEditElement
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1)

{
  return true;
}

// CanMoveElement @ 147b4a6d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::CanMoveElement
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1,
          ETypedElementWorldType param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  uVar8 = 0;
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      uVar8 = (**(code **)((longlong)*this + 0x68))(this,&local_38,param_2);
      goto LAB_147b4a747;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_147b4a747:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar8;
}

// CanMoveElement @ 147b4a8d0

bool __thiscall
ITypedElementWorldInterface::CanMoveElement
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,
          ETypedElementWorldType param_2)

{
  return false;
}

// CanPromoteElement @ 147b4aa10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::CanPromoteElement
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      uVar8 = (**(code **)((longlong)*this + 0x1a0))(this,&local_38);
      goto LAB_147b4aa85;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  uVar8 = 0;
LAB_147b4aa85:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar8;
}

// CanPromoteElement @ 147b4ac10

bool __thiscall
ITypedElementWorldInterface::CanPromoteElement
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1)

{
  return false;
}

// CanScaleElement @ 147b4ac50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::CanScaleElement
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      uVar8 = (**(code **)((longlong)*this + 0x78))(this,&local_38);
      goto LAB_147b4acc2;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  uVar8 = 0;
LAB_147b4acc2:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar8;
}

// CanScaleElement @ 147b4ae50

bool __thiscall
ITypedElementWorldInterface::CanScaleElement
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1)

{
  return true;
}

// CopyElement @ 147b4cd00

void __thiscall
ITypedElementWorldInterface::CopyElement
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,FOutputDevice *param_2)

{
  undefined4 uVar1;
  FTypedElementHandle *local_18;
  undefined4 uStack_10;
  
  local_18._0_4_ = SUB84(param_1,0);
  uStack_10 = 1;
  uVar1 = local_18._0_4_;
  local_18 = param_1;
  (**(code **)((longlong)*this + 0x188))(uVar1,&local_18);
  return;
}

// CopyElements @ 147b4cd70

void __thiscall
ITypedElementWorldInterface::CopyElements
          (ITypedElementWorldInterface *this,TArrayView<FTypedElementHandle_const_,int> *param_1,
          FOutputDevice *param_2)

{
  return;
}

// DeleteElement @ 147b4fb40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::DeleteElement
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1,UWorld *param_2,
          UTypedElementSelectionSet *param_3,FTypedElementDeletionOptions *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 uVar14;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar14 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
     (this_00 = pFVar3->Data, this_00 == (FTypedElementInternalData *)0x0)) {
LAB_147b4fbe9:
    pwVar11 = L"InElementHandle is not a valid handle.";
  }
  else {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 == (FTypedElementInternalData *)0x0) goto LAB_147b4fbe9;
    if (param_2 == (UWorld *)0x0) {
      pwVar11 = L"InWorld is null";
    }
    else {
      if (param_3 != (UTypedElementSelectionSet *)0x0) {
        uVar9 = (**(code **)((longlong)*this + 0x140))(this,&local_38,param_2,param_3,param_4);
        goto LAB_147b4fc02;
      }
      pwVar11 = L"InSelectionSet is null";
    }
  }
  FFrame::KismetExecutionMessage(pwVar11,Error,(FName)0x0);
  uVar9 = 0;
LAB_147b4fc02:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar12 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar12 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar14 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar12 * 0x108 + 4 + lVar4) = uVar14;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar9;
}

// DeleteElement @ 147b4fd90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::DeleteElement
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,UWorld *param_2,
          UTypedElementSelectionSet *param_3,FTypedElementDeletionOptions *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  FTypedElementHandle *local_18;
  undefined4 uStack_10;
  
  local_18._0_4_ = SUB84(param_1,0);
  uStack_10 = 1;
  uVar1 = local_18._0_4_;
  local_18 = param_1;
  uVar2 = (**(code **)((longlong)*this + 0x148))(uVar1,&local_18,param_2,param_3,param_4);
  return (bool)uVar2;
}

// DeleteElements @ 147b4fe30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::DeleteElements
          (ITypedElementWorldInterface *this,TArrayView<FTypedElementHandle_const_,int> *param_1,
          UWorld *param_2,UTypedElementSelectionSet *param_3,FTypedElementDeletionOptions *param_4)

{
  return false;
}

// DuplicateElement @ 147b5e050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FScriptTypedElementHandle __thiscall
ITypedElementWorldInterface::DuplicateElement
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1,UWorld *param_2,
          TVector<double> *param_3)

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
  UTypedElementRegistry *this_01;
  FScriptTypedElementHandle FVar8;
  undefined1 *puVar9;
  wchar_t *pwVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 in_stack_00000028;
  FTypedElementInternalData *local_50;
  int local_48;
  FTypedElementInternalData *local_40;
  int local_38;
  
  uVar11 = 0xffffffff;
  local_50 = (FTypedElementInternalData *)0x0;
  local_48 = -1;
  if ((((undefined8 *)param_2->_padding_ == (undefined8 *)0x0) ||
      (this_00 = *(FTypedElementInternalData **)param_2->_padding_,
      this_00 == (FTypedElementInternalData *)0x0)) ||
     (local_50 = this_00, local_48 = FTypedElementInternalData::AddRef(this_00,true),
     local_50 == (FTypedElementInternalData *)0x0)) {
    pwVar10 = L"InElementHandle is not a valid handle.";
  }
  else {
    if (param_3 != (TVector<double> *)0x0) {
      this_01 = (UTypedElementRegistry *)(**(code **)((longlong)*this + 0x1d0))(this);
      (**(code **)((longlong)*this + 0x168))(this,&local_40,&local_50,param_3,in_stack_00000028);
      UTypedElementRegistry::CreateScriptHandle(this_01,(FTypedElementId *)param_1);
      if (local_40 != (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef(local_40,local_38);
      }
      local_40 = (FTypedElementInternalData *)0x0;
      local_38 = -1;
      goto LAB_147b5e166;
    }
    pwVar10 = L"InWorld is null";
  }
  FFrame::KismetExecutionMessage(pwVar10,Error,(FName)0x0);
  (param_1->InternalData).ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
LAB_147b5e166:
  iVar6 = local_48;
  if (local_50 != (FTypedElementInternalData *)0x0) {
    lVar12 = (longlong)local_48;
    LOCK();
    local_50->RefCount = local_50->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_50->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_48 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar3 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar5 = (byte)iVar6 & 0x1f;
      uVar13 = 1 << bVar5 | 1U >> 0x20 - bVar5;
      if (((iVar6 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar6)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        FVar8.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar4)();
        return (FScriptTypedElementHandle)FVar8.InternalData.ControlBlock;
      }
      puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      if (((*(uint *)(puVar9 + lVar2) & uVar13) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        FVar8.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar4)();
        return (FScriptTypedElementHandle)FVar8.InternalData.ControlBlock;
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar3) =
             iVar6;
      }
      *(undefined4 *)(lVar12 * 0x108 + lVar3) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar11 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar12 * 0x108 + 4 + lVar3) = uVar11;
      puVar9 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar9 = *(int *)puVar9 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar6;
      if (((iVar6 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar6)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        FVar8.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar4)();
        return (FScriptTypedElementHandle)FVar8.InternalData.ControlBlock;
      }
      puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      *(uint *)(puVar9 + lVar2) = *(uint *)(puVar9 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (FScriptTypedElementHandle)(FScriptTypedElementInternalDataPtr)param_1;
}

// DuplicateElement @ 147b5e2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTypedElementHandle * __thiscall
ITypedElementWorldInterface::DuplicateElement
          (ITypedElementWorldInterface *this,FTypedElementHandle *__return_storage_ptr__,
          FTypedElementHandle *param_1,UWorld *param_2,TVector<double> *param_3)

{
  int iVar1;
  undefined4 uVar2;
  FTypedElementHandle *local_58;
  undefined8 local_50;
  FTypedElementHandle *local_48;
  undefined4 uStack_40;
  FTypedElementHandle *local_38;
  undefined4 uStack_30;
  
  uStack_40 = 1;
  local_48._0_4_ = SUB84(param_1,0);
  uStack_30 = 1;
  local_58 = (FTypedElementHandle *)0x0;
  local_50 = 0;
  uVar2 = local_48._0_4_;
  local_48 = param_1;
  local_38 = param_1;
  (**(code **)((longlong)*this + 0x170))(uVar2,&local_38,param_2,param_3,&local_58);
  if ((int)local_50 < 1) {
    __return_storage_ptr__->DataPtr = (FTypedElementInternalData *)0x0;
    __return_storage_ptr__->ReferenceId = -1;
  }
  else {
    iVar1 = local_58->ReferenceId;
    __return_storage_ptr__->DataPtr = local_58->DataPtr;
    local_58->DataPtr = (FTypedElementInternalData *)0x0;
    local_58->ReferenceId = -1;
    __return_storage_ptr__->ReferenceId = iVar1;
  }
  DestructItems<FTypedElementHandle,int>(local_58,(int)local_50);
  if (local_58 != (FTypedElementHandle *)0x0) {
    FMemory::Free(local_58);
  }
  return __return_storage_ptr__;
}

// DuplicateElements @ 147b5e400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ITypedElementWorldInterface::DuplicateElements
          (ITypedElementWorldInterface *this,TArrayView<FTypedElementHandle_const_,int> *param_1,
          UWorld *param_2,TVector<double> *param_3,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// FindSuitableTransformAlongPath @ 147b61740

bool __thiscall
ITypedElementWorldInterface::FindSuitableTransformAlongPath
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FCollisionShape *param_4,
          TArrayView<FTypedElementHandle_const_,int> *param_5,TTransform<double> *param_6)

{
  return false;
}

// FindSuitableTransformAtPoint @ 147b62030

bool __thiscall
ITypedElementWorldInterface::FindSuitableTransformAtPoint
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2,TTransform<double> *param_3)

{
  double dVar1;
  
  dVar1 = (param_2->Rotation).XY.m128d_f64[1];
  (param_3->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (param_3->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
  (param_3->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (param_3->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).XY.m128d_f64[1];
  (param_3->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (param_3->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).ZW.m128d_f64[1];
  (param_3->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (param_3->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
  (param_3->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (param_3->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
  (param_3->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (param_3->Scale3D).ZW.m128d_f64[1] = dVar1;
  return true;
}

// GetBounds @ 147b63ca0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::GetBounds
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1,
          TBoxSphereBounds<double,double> *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  uVar8 = 0;
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      uVar8 = (**(code **)((longlong)*this + 0x58))(this,&local_38,param_2);
      goto LAB_147b63d15;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_147b63d15:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar8;
}

// GetBounds @ 147b63ea0

bool __thiscall
ITypedElementWorldInterface::GetBounds
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,
          TBoxSphereBounds<double,double> *param_2)

{
  return false;
}

// GetOwnerLevel @ 147b6a100

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall
ITypedElementWorldInterface::GetOwnerLevel
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  ULevel *pUVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pUVar9 = (ULevel *)0x0;
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      pUVar9 = (ULevel *)(**(code **)((longlong)*this + 0x38))(this,&local_38);
      goto LAB_147b6a16e;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_147b6a16e:
  iVar7 = local_30;
  if (local_38 == (FTypedElementInternalData *)0x0) {
    return pUVar9;
  }
  lVar11 = (longlong)local_30;
  LOCK();
  local_38->RefCount = local_38->RefCount + -1;
  UNLOCK();
  lpCriticalSection = (local_38->References).Ptr;
  if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar4 = *(longlong *)&lpCriticalSection->References;
    puVar1 = &(lpCriticalSection->References).field_0x10;
    bVar6 = (byte)iVar7 & 0x1f;
    uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
    if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (ULevel *)(*pcVar5)();
        return pUVar9;
      }
    }
    puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
    lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0xc5,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (ULevel *)(*pcVar5)();
        return pUVar9;
      }
    }
    if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
      *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
           iVar7;
    }
    *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
    if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
      uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
    }
    *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
    puVar10 = &(lpCriticalSection->References).field_0x34;
    *(int *)puVar10 = *(int *)puVar10 + 1;
    *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
    if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (ULevel *)(*pcVar5)();
        return pUVar9;
      }
    }
    puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pUVar9;
  }
  return pUVar9;
}

// GetOwnerLevel @ 147b6a320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall
ITypedElementWorldInterface::GetOwnerLevel
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1)

{
  return (ULevel *)0x0;
}

// GetOwnerWorld @ 147b6a3f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
ITypedElementWorldInterface::GetOwnerWorld
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  UWorld *pUVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pUVar9 = (UWorld *)0x0;
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      pUVar9 = (UWorld *)(**(code **)((longlong)*this + 0x48))(this,&local_38);
      goto LAB_147b6a45e;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_147b6a45e:
  iVar7 = local_30;
  if (local_38 == (FTypedElementInternalData *)0x0) {
    return pUVar9;
  }
  lVar11 = (longlong)local_30;
  LOCK();
  local_38->RefCount = local_38->RefCount + -1;
  UNLOCK();
  lpCriticalSection = (local_38->References).Ptr;
  if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lVar4 = *(longlong *)&lpCriticalSection->References;
    puVar1 = &(lpCriticalSection->References).field_0x10;
    bVar6 = (byte)iVar7 & 0x1f;
    uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
    if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (UWorld *)(*pcVar5)();
        return pUVar9;
      }
    }
    puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
    lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0xc5,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (UWorld *)(*pcVar5)();
        return pUVar9;
      }
    }
    if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
      *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
           iVar7;
    }
    *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
    if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
      uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
    }
    *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
    puVar10 = &(lpCriticalSection->References).field_0x34;
    *(int *)puVar10 = *(int *)puVar10 + 1;
    *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
    if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (UWorld *)(*pcVar5)();
        return pUVar9;
      }
    }
    puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pUVar9;
  }
  return pUVar9;
}

// GetOwnerWorld @ 147b6a610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
ITypedElementWorldInterface::GetOwnerWorld
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1)

{
  return (UWorld *)0x0;
}

// GetPasteImporter @ 147b6a810

TSharedPtr<FWorldElementPasteImporter,1> * __thiscall
ITypedElementWorldInterface::GetPasteImporter
          (ITypedElementWorldInterface *this,
          TSharedPtr<FWorldElementPasteImporter,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FWorldElementPasteImporter *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPivotOffset @ 147b6a8f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::GetPivotOffset
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1,
          TVector<double> *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  uVar8 = 0;
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      uVar8 = (**(code **)((longlong)*this + 200))(this,&local_38,param_2);
      goto LAB_147b6a968;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_147b6a968:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar8;
}

// GetPivotOffset @ 147b6aaf0

bool __thiscall
ITypedElementWorldInterface::GetPivotOffset
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,TVector<double> *param_2)

{
  return false;
}

// GetRegistry @ 147b6d1f0

UTypedElementRegistry * __thiscall
ITypedElementWorldInterface::GetRegistry(ITypedElementWorldInterface *this)

{
  TStrongObjectPtr<UTypedElementRegistry,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  
  pTVar1 = GetTypedElementRegistryInstance();
  return (UTypedElementRegistry *)pTVar1->Object;
}

// GetRelativeTransform @ 147b6d200

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::GetRelativeTransform
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  uVar8 = 0;
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      uVar8 = (**(code **)((longlong)*this + 0xa8))(this,&local_38,param_2);
      goto LAB_147b6d278;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_147b6d278:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar8;
}

// GetRelativeTransform @ 147b6d400

bool __thiscall
ITypedElementWorldInterface::GetRelativeTransform
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147b6d403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x88))();
  return (bool)uVar1;
}

// GetSelectionElementsFromSelectionFunction @ 147b6eac0

TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
ITypedElementWorldInterface::GetSelectionElementsFromSelectionFunction
          (ITypedElementWorldInterface *this,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FTypedElementHandle *param_1,FWorldSelectionElementArgs *param_2,
          TFunction<bool___cdecl(FTypedElementHandle_const_&,FWorldSelectionElementArgs_const_&)>
          *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  FTypedElementInternalData *pFVar3;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  UTypedElementRegistry *pUVar14;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar15;
  undefined1 *puVar16;
  FTypedElementHandle *pFVar17;
  FTypedElementHandle *pFVar18;
  FTypedElementHandle *pFVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar22;
  char cVar23;
  ForAnyElementType local_e8;
  int local_e0;
  int iStack_dc;
  undefined1 local_d8;
  undefined1 local_d7;
  char local_d6;
  FTypedElementHandle *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  longlong *local_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  FTypedElementHandle *local_90;
  int local_88;
  FTypedElementHandle local_80;
  FTypedElementHandle local_70;
  TObjectPtr<UClass>_u_0 local_60;
  TObjectPtr<UClass>_u_0 local_58;
  FTypedElementHandle *local_50;
  FTypedElementHandle local_48;
  
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  iStack_dc = 0;
  cVar23 = '\x01';
  pUVar14 = (UTypedElementRegistry *)(**(code **)((longlong)*this + 0x1d0))();
  local_a8._0_8_ = (FTypedElementInternalData *)0x0;
  local_a8._8_4_ = -1;
  local_98 = (longlong *)0x0;
  local_60.DebugPtr = Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60.DebugPtr != (UClass *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_60.DebugPtr);
  }
  UTypedElementRegistry::GetElementImpl<ITypedElementHierarchyInterface>
            (pUVar14,param_1,(TSubclassOf<UInterface> *)&local_60.ObjectPtr,
             (TTypedElement<ITypedElementHierarchyInterface> *)local_a8);
  if ((FTypedElementInternalData *)local_a8._0_8_ != (FTypedElementInternalData *)0x0) {
    if (local_98 != (longlong *)0x0) {
      local_d0 = (FTypedElementHandle *)0x0;
      local_c8 = 0;
      (**(code **)(*local_98 + 0x28))(local_98,local_a8,&local_d0,1);
      iVar13 = (int)local_c8;
      local_d6 = (int)local_c8 == 0;
      local_50 = local_d0 + (int)local_c8;
      pFVar17 = local_d0;
      while( true ) {
        pFVar18 = local_50;
        if ((int)local_c8 != iVar13) {
          local_d8 = 0;
          `TCheckedPointerIterator<FTypedElementHandle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_d8);
        }
        cVar23 = local_d6;
        iVar12 = local_e0;
        FVar22.Data = local_e8.Data;
        if (pFVar17 == pFVar18) break;
        pUVar14 = (UTypedElementRegistry *)(**(code **)((longlong)*this + 0x1d0))(this);
        local_c0._0_8_ = (FTypedElementInternalData *)0x0;
        local_c0._8_4_ = -1;
        local_b0 = (longlong *)0x0;
        local_58.DebugPtr = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_58.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_58.DebugPtr);
        }
        UTypedElementRegistry::GetElementImpl<ITypedElementWorldInterface>
                  (pUVar14,pFVar17,(TSubclassOf<UInterface> *)&local_58.ObjectPtr,
                   (TTypedElement<ITypedElementWorldInterface> *)local_c0);
        if ((FTypedElementInternalData *)local_c0._0_8_ != (FTypedElementInternalData *)0x0) {
          if (local_b0 != (longlong *)0x0) {
            (**(code **)(*local_b0 + 0x1c8))(local_b0,&local_90,local_c0,param_2,param_3);
            if (1 < local_88) {
              uVar9 = local_88 + local_e0;
              if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
              }
              if (iStack_dc < (int)uVar9) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,uVar9,&local_e8,local_e0,&iStack_dc);
              }
            }
            iVar12 = local_88;
            pFVar19 = local_90 + local_88;
            pFVar18 = local_90;
            while( true ) {
              if (local_88 != iVar12) {
                local_d7 = 0;
                `TCheckedPointerIterator<FTypedElementHandle,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_d7);
              }
              if (pFVar18 == pFVar19) break;
              pFVar3 = param_1->DataPtr;
              if (pFVar18->DataPtr == pFVar3) {
                local_80.ReferenceId = -1;
                local_80.DataPtr = (FTypedElementInternalData *)0x0;
                if (pFVar3 != (FTypedElementInternalData *)0x0) {
                  local_80.DataPtr = pFVar3;
                  local_80.ReferenceId = FTypedElementInternalData::AddRef(pFVar3,true);
                }
                (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                __return_storage_ptr__->ArrayNum = 1;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,
                           &__return_storage_ptr__->ArrayMax);
                ConstructItems<FTypedElementHandle,FTypedElementHandle,int>
                          ((__return_storage_ptr__->AllocatorInstance).Data,&local_80,1);
                if (local_80.DataPtr != (FTypedElementInternalData *)0x0) {
                  FTypedElementInternalData::ReleaseRef(local_80.DataPtr,local_80.ReferenceId);
                }
                local_80.DataPtr = (FTypedElementInternalData *)0x0;
                local_80.ReferenceId = -1;
                DestructItems<FTypedElementHandle,int>(local_90,local_88);
                if (local_90 != (FTypedElementHandle *)0x0) {
                  FMemory::Free(local_90);
                }
                uVar7 = local_c0._8_4_;
                if ((FTypedElementInternalData *)local_c0._0_8_ != (FTypedElementInternalData *)0x0)
                {
                  lVar20 = (longlong)(int)local_c0._8_4_;
                  LOCK();
                  *(int *)(local_c0._0_8_ + 0xc) = *(int *)(local_c0._0_8_ + 0xc) + -1;
                  UNLOCK();
                  lpCriticalSection =
                       ((TUniquePtr<FTypedElementReferences,TDefaultDelete<FTypedElementReferences>_>
                         *)(local_c0._0_8_ + 0x10))->Ptr;
                  if ((lpCriticalSection != (FTypedElementReferences *)0x0) &&
                     (local_c0._8_4_ != -1)) {
                    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                    lVar4 = *(longlong *)&(lpCriticalSection->References).field_0x0;
                    puVar1 = &(lpCriticalSection->References).field_0x10;
                    bVar6 = (byte)uVar7 & 0x1f;
                    uVar9 = 1 << bVar6 | 1U >> 0x20 - bVar6;
                    if ((((int)uVar7 < 0) ||
                        (*(int *)&(lpCriticalSection->References).field_0x28 <= (int)uVar7)) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Index>=0 && Index<NumBits",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                           ,0x5be,L""), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      pTVar15 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)
                                (*pcVar5)();
                      return pTVar15;
                    }
                    puVar16 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
                    lVar2 = (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
                    if (puVar16 == (undefined1 *)0x0) {
                      puVar16 = puVar1;
                    }
                    if (((*(uint *)(puVar16 + lVar2) & uVar9) == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("AllocationFlags[Index]",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                           ,0xc5,L""), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      pTVar15 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)
                                (*pcVar5)();
                      return pTVar15;
                    }
                    if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
                      *(undefined4 *)
                       ((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 +
                       lVar4) = uVar7;
                    }
                    *(undefined4 *)(lVar20 * 0x108 + lVar4) = 0xffffffff;
                    if (*(int *)&(lpCriticalSection->References).field_0x34 < 1) {
                      uVar11 = 0xffffffff;
                    }
                    else {
                      uVar11 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
                    }
                    *(undefined4 *)(lVar20 * 0x108 + 4 + lVar4) = uVar11;
                    puVar16 = &(lpCriticalSection->References).field_0x34;
                    *(int *)puVar16 = *(int *)puVar16 + 1;
                    *(undefined4 *)&(lpCriticalSection->References).field_0x30 = uVar7;
                    if ((((int)uVar7 < 0) ||
                        (*(int *)&(lpCriticalSection->References).field_0x28 <= (int)uVar7)) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Index>=0 && Index<NumBits",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                           ,0x5be,L""), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      pTVar15 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)
                                (*pcVar5)();
                      return pTVar15;
                    }
                    puVar16 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
                    if (puVar16 == (undefined1 *)0x0) {
                      puVar16 = puVar1;
                    }
                    *(uint *)(puVar16 + lVar2) = *(uint *)(puVar16 + lVar2) & ~uVar9;
                    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  }
                }
                local_b0 = (longlong *)0x0;
                local_c0._0_8_ = 0;
                local_c0._8_4_ = 0xffffffff;
                DestructItems<FTypedElementHandle,int>(local_d0,(int)local_c8);
                if (local_d0 != (FTypedElementHandle *)0x0) {
                  FMemory::Free(local_d0);
                }
                if ((FTypedElementInternalData *)local_a8._0_8_ != (FTypedElementInternalData *)0x0)
                {
                  FTypedElementInternalData::ReleaseRef
                            ((FTypedElementInternalData *)local_a8._0_8_,local_a8._8_4_);
                }
                local_98 = (longlong *)0x0;
                local_a8._0_8_ = 0;
                local_a8._8_4_ = 0xffffffff;
                goto LAB_147b6f468;
              }
              if (((local_e8.Data <= pFVar18) &&
                  (pFVar18 < (FTypedElementHandle *)(local_e8.Data + (longlong)iStack_dc * 0x10)))
                 && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar8)) {
                pcVar5 = (code *)swi(3);
                pTVar15 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
                return pTVar15;
              }
              if (local_e0 == iStack_dc) {
                local_e0 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_e8,&iStack_dc);
              }
              pFVar21 = local_e8.Data + (longlong)local_e0 * 0x10;
              local_e0 = local_e0 + 1;
              *(undefined8 *)&pFVar21->field_0x0 = 0;
              *(undefined4 *)(pFVar21 + 8) = 0xffffffff;
              pFVar3 = pFVar18->DataPtr;
              if (pFVar3 != (FTypedElementInternalData *)0x0) {
                *(FTypedElementInternalData **)&pFVar21->field_0x0 = pFVar3;
                iVar10 = FTypedElementInternalData::AddRef(pFVar3,true);
                *(int *)(pFVar21 + 8) = iVar10;
              }
              pFVar18 = pFVar18 + 1;
            }
            DestructItems<FTypedElementHandle,int>(local_90,local_88);
            if (local_90 != (FTypedElementHandle *)0x0) {
              FMemory::Free(local_90);
            }
          }
          if ((FTypedElementInternalData *)local_c0._0_8_ != (FTypedElementInternalData *)0x0) {
            FTypedElementInternalData::ReleaseRef
                      ((FTypedElementInternalData *)local_c0._0_8_,local_c0._8_4_);
          }
        }
        pFVar17 = pFVar17 + 1;
        local_b0 = (longlong *)0x0;
        local_c0._0_8_ = 0;
        local_c0._8_4_ = 0xffffffff;
      }
      if (((local_d6 == '\0') && ((int)local_c8 == local_e0)) &&
         (bVar8 = CompareItems<FTypedElementHandle,int>
                            (local_d0,(FTypedElementHandle *)local_e8.Data,(int)local_c8), bVar8)) {
        if (param_2->SelectionSet == (UTypedElementSelectionSet *)0x0) {
          if (((FVar22.Data <= param_1) &&
              (param_1 < (FTypedElementHandle *)(FVar22.Data + (longlong)iStack_dc * 0x10))) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), FVar22.Data = local_e8.Data, iVar12 = local_e0, bVar8)) {
            pcVar5 = (code *)swi(3);
            pTVar15 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar15;
          }
          if (iVar12 == iStack_dc) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_e8,&iStack_dc);
            FVar22.Data = local_e8.Data;
          }
          local_e0 = iVar12 + 1;
          pFVar17 = (FTypedElementHandle *)((longlong)FVar22.Data + (longlong)iVar12 * 0x10);
          pFVar17->DataPtr = (FTypedElementInternalData *)0x0;
          pFVar17->ReferenceId = -1;
          pFVar3 = param_1->DataPtr;
          if (pFVar3 != (FTypedElementInternalData *)0x0) {
            pFVar17->DataPtr = pFVar3;
            iVar13 = FTypedElementInternalData::AddRef(pFVar3,true);
            pFVar17->ReferenceId = iVar13;
          }
        }
        else {
          pFVar17 = UTypedElementSelectionSet::GetSelectionElement
                              (param_2->SelectionSet,&local_70,param_1,param_2->SelectionMethod);
          if (((local_e8.Data <= pFVar17) &&
              (pFVar17 < (FTypedElementHandle *)(local_e8.Data + (longlong)iStack_dc * 0x10))) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            pTVar15 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar15;
          }
          if (local_e0 == iStack_dc) {
            local_e0 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_e8,&iStack_dc);
          }
          iVar13 = local_e0 + 1;
          *(FTypedElementInternalData **)&local_e8.Data[(longlong)local_e0 * 0x10].field_0x0 =
               pFVar17->DataPtr;
          *(int *)(local_e8.Data + (longlong)local_e0 * 0x10 + 8) = pFVar17->ReferenceId;
          pFVar17->DataPtr = (FTypedElementInternalData *)0x0;
          pFVar17->ReferenceId = -1;
          local_e0 = iVar13;
          if (local_70.DataPtr != (FTypedElementInternalData *)0x0) {
            FTypedElementInternalData::ReleaseRef(local_70.DataPtr,local_70.ReferenceId);
          }
          local_70.DataPtr = (FTypedElementInternalData *)0x0;
          local_70.ReferenceId = -1;
        }
      }
      DestructItems<FTypedElementHandle,int>(local_d0,(int)local_c8);
      if (local_d0 != (FTypedElementHandle *)0x0) {
        FMemory::Free(local_d0);
      }
    }
    if ((FTypedElementInternalData *)local_a8._0_8_ != (FTypedElementInternalData *)0x0) {
      FTypedElementInternalData::ReleaseRef
                ((FTypedElementInternalData *)local_a8._0_8_,local_a8._8_4_);
    }
  }
  local_98 = (longlong *)0x0;
  local_a8._0_8_ = 0;
  local_a8._8_4_ = 0xffffffff;
  if ((cVar23 != '\0') &&
     (bVar8 = UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FTypedElementHandle_const_&,FWorldSelectionElementArgs_const_&)>
              ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FTypedElementHandle_const_&,FWorldSelectionElementArgs_const_&)>
                            *)param_3,param_1,param_2), bVar8)) {
    if (param_2->SelectionSet == (UTypedElementSelectionSet *)0x0) {
      if (((local_e8.Data <= param_1) &&
          (param_1 < (FTypedElementHandle *)(local_e8.Data + (longlong)iStack_dc * 0x10))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar15;
      }
      if (local_e0 == iStack_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_e8,&iStack_dc);
      }
      iVar13 = local_e0 + 1;
      pFVar21 = local_e8.Data + (longlong)local_e0 * 0x10;
      *(undefined8 *)&pFVar21->field_0x0 = 0;
      *(undefined4 *)(pFVar21 + 8) = 0xffffffff;
      pFVar3 = param_1->DataPtr;
      local_e0 = iVar13;
      if (pFVar3 != (FTypedElementInternalData *)0x0) {
        *(FTypedElementInternalData **)&pFVar21->field_0x0 = pFVar3;
        iVar13 = FTypedElementInternalData::AddRef(pFVar3,true);
        *(int *)(pFVar21 + 8) = iVar13;
      }
    }
    else {
      pFVar17 = UTypedElementSelectionSet::GetSelectionElement
                          (param_2->SelectionSet,&local_48,param_1,param_2->SelectionMethod);
      if (((local_e8.Data <= pFVar17) &&
          (pFVar17 < (FTypedElementHandle *)(local_e8.Data + (longlong)iStack_dc * 0x10))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar15;
      }
      if (local_e0 == iStack_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_e8,&iStack_dc);
      }
      iVar13 = local_e0 + 1;
      *(FTypedElementInternalData **)&local_e8.Data[(longlong)local_e0 * 0x10].field_0x0 =
           pFVar17->DataPtr;
      *(int *)(local_e8.Data + (longlong)local_e0 * 0x10 + 8) = pFVar17->ReferenceId;
      pFVar17->DataPtr = (FTypedElementInternalData *)0x0;
      pFVar17->ReferenceId = -1;
      local_e0 = iVar13;
      if (local_48.DataPtr != (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef(local_48.DataPtr,local_48.ReferenceId);
      }
    }
  }
  FVar22.Data = local_e8.Data;
  local_e8.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = FVar22.Data;
  __return_storage_ptr__->ArrayNum = local_e0;
  __return_storage_ptr__->ArrayMax = iStack_dc;
  local_e0 = 0;
  iStack_dc = 0;
LAB_147b6f468:
  DestructItems<FTypedElementHandle,int>((FTypedElementHandle *)local_e8.Data,local_e0);
  if ((FTypedElementHandle *)local_e8.Data != (FTypedElementHandle *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return __return_storage_ptr__;
}

// GetSelectionElementsInBox @ 147b6f6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
ITypedElementWorldInterface::GetSelectionElementsInBox
          (ITypedElementWorldInterface *this,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FTypedElementHandle *param_1,TBox<double> *param_2,FWorldSelectionElementArgs *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined **local_58;
  TBox<double> *local_50;
  undefined8 local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_48 = (**(code **)((longlong)*this + 0x1d0))();
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`ITypedElementWorldInterface::GetSelectionElementsInBox'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`ITypedElementWorldInterface::GetSelectionElementsInBox'::__l2::<lambda_1>,bool,FTypedElementHandle_const_&,FWorldSelectionElementArgs_const_&>
                ::Call;
  local_78 = local_68;
  local_50 = param_2;
  (**(code **)((longlong)*this + 0x1c8))(this,__return_storage_ptr__,param_1,param_3);
  if (local_68[0] != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return __return_storage_ptr__;
}

// GetSelectionElementsInConvexVolume @ 147b6f7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> * __thiscall
ITypedElementWorldInterface::GetSelectionElementsInConvexVolume
          (ITypedElementWorldInterface *this,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FTypedElementHandle *param_1,FConvexVolume *param_2,FWorldSelectionElementArgs *param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined **local_58;
  FConvexVolume *local_50;
  undefined8 local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_48 = (**(code **)((longlong)*this + 0x1d0))();
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`ITypedElementWorldInterface::GetSelectionElementsInConvexVolume'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`ITypedElementWorldInterface::GetSelectionElementsInConvexVolume'::__l2::<lambda_1>,bool,FTypedElementHandle_const_&,FWorldSelectionElementArgs_const_&>
                ::Call;
  local_78 = local_68;
  local_50 = param_2;
  (**(code **)((longlong)*this + 0x1c8))(this,__return_storage_ptr__,param_1,param_3);
  if (local_68[0] != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar1 = local_40;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return __return_storage_ptr__;
}

// GetWorldTransform @ 147b729f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::GetWorldTransform
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  uVar8 = 0;
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      uVar8 = (**(code **)((longlong)*this + 0x88))(this,&local_38,param_2);
      goto LAB_147b72a68;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_147b72a68:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar8;
}

// GetWorldTransform @ 147b72bf0

bool __thiscall
ITypedElementWorldInterface::GetWorldTransform
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  return false;
}

// IsElementInBox @ 147b78050

bool __thiscall
ITypedElementWorldInterface::IsElementInBox
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,TBox<double> *param_2,
          bool param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  cVar8 = (**(code **)((longlong)*this + 0x58))(this,param_1,&local_78);
  if (cVar8 != '\0') {
    dVar2 = (param_2->Min).field0_0x0._s_0.X;
    dVar7 = local_78 + local_60;
    dVar6 = local_70 + local_58;
    dVar9 = local_68 + local_50;
    local_78 = local_78 - local_60;
    local_70 = local_70 - local_58;
    local_68 = local_68 - local_50;
    if (param_3) {
      if (((((((dVar2 < local_78) && (local_78 < (param_2->Max).field0_0x0._s_0.X)) &&
             (dVar3 = (param_2->Min).field0_0x0._s_0.Y, dVar3 < local_70)) &&
            ((local_70 < (param_2->Max).field0_0x0._s_0.Y &&
             (dVar4 = (param_2->Min).field0_0x0._s_0.Z, dVar4 < local_68)))) &&
           ((dVar5 = (param_2->Max).field0_0x0._s_0.Z, local_68 < dVar5 &&
            ((dVar2 < dVar7 && (dVar7 < (param_2->Max).field0_0x0._s_0.X)))))) && (dVar3 < dVar6))
         && (((dVar6 < (param_2->Max).field0_0x0._s_0.Y && (dVar4 < dVar9)) && (dVar9 < dVar5)))) {
        return true;
      }
    }
    else if ((((dVar2 <= dVar7) &&
              (local_78 < (param_2->Max).field0_0x0._s_0.X ||
               local_78 == (param_2->Max).field0_0x0._s_0.X)) &&
             (((param_2->Min).field0_0x0._s_0.Y <= dVar6 &&
              ((pdVar1 = &(param_2->Max).field0_0x0._s_0.Y,
               local_70 < *pdVar1 || local_70 == *pdVar1 &&
               ((param_2->Min).field0_0x0._s_0.Z <= dVar9)))))) &&
            (pdVar1 = &(param_2->Max).field0_0x0._s_0.Z, local_68 < *pdVar1 || local_68 == *pdVar1))
    {
      return true;
    }
  }
  return false;
}

// IsElementInConvexVolume @ 147b78190

bool __thiscall
ITypedElementWorldInterface::IsElementInConvexVolume
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,FConvexVolume *param_2,
          bool param_3)

{
  char cVar1;
  bool bVar2;
  bool local_res8 [8];
  TVector<double> local_48;
  TVector<double> local_30;
  
  cVar1 = (**(code **)((longlong)*this + 0x58))(this,param_1,&local_48);
  if (cVar1 != '\0') {
    local_res8[0] = false;
    bVar2 = FConvexVolume::IntersectBox(param_2,&local_48,&local_30,local_res8);
    if ((bVar2) && ((!param_3 || (local_res8[0] != false)))) {
      return true;
    }
  }
  return false;
}

// IsTemplateElement @ 147b78320

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::IsTemplateElement
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      uVar8 = (**(code **)((longlong)*this + 0x18))(this,&local_38);
      goto LAB_147b78392;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  uVar8 = 0;
LAB_147b78392:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar8;
}

// IsTemplateElement @ 147b78520

bool __thiscall
ITypedElementWorldInterface::IsTemplateElement
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1)

{
  return false;
}

// NotifyMovementEnded @ 147b7a440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ITypedElementWorldInterface::NotifyMovementEnded
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint uVar12;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar10 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      (**(code **)((longlong)*this + 0x108))(this,&local_38);
      goto LAB_147b7a4ab;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_147b7a4ab:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar12 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      if ((*(uint *)(puVar9 + lVar2) & uVar12) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar10 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar10;
      puVar9 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar9 = *(int *)puVar9 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
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

// NotifyMovementEnded @ 147b7a630

void __thiscall
ITypedElementWorldInterface::NotifyMovementEnded
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1)

{
  return;
}

// NotifyMovementOngoing @ 147b7a680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ITypedElementWorldInterface::NotifyMovementOngoing
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint uVar12;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar10 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      (**(code **)((longlong)*this + 0xf8))(this,&local_38);
      goto LAB_147b7a6eb;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_147b7a6eb:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar12 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      if ((*(uint *)(puVar9 + lVar2) & uVar12) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar10 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar10;
      puVar9 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar9 = *(int *)puVar9 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
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

// NotifyMovementOngoing @ 147b7a870

void __thiscall
ITypedElementWorldInterface::NotifyMovementOngoing
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1)

{
  return;
}

// NotifyMovementStarted @ 147b7a8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ITypedElementWorldInterface::NotifyMovementStarted
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint uVar12;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar10 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      (**(code **)((longlong)*this + 0xe8))(this,&local_38);
      goto LAB_147b7a92b;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_147b7a92b:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar12 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      if ((*(uint *)(puVar9 + lVar2) & uVar12) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar10 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar10;
      puVar9 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar9 = *(int *)puVar9 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
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

// NotifyMovementStarted @ 147b7aab0

void __thiscall
ITypedElementWorldInterface::NotifyMovementStarted
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1)

{
  return;
}

// PromoteElement @ 147b7e970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FScriptTypedElementHandle __thiscall
ITypedElementWorldInterface::PromoteElement
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1,UWorld *param_2)

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
  UTypedElementRegistry *this_01;
  FScriptTypedElementHandle FVar8;
  undefined1 *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  FTypedElementInternalData *local_48;
  int local_40;
  FTypedElementInternalData *local_38;
  int local_30;
  
  uVar12 = 0xffffffff;
  local_48 = (FTypedElementInternalData *)0x0;
  local_40 = -1;
  if ((((undefined8 *)param_2->_padding_ == (undefined8 *)0x0) ||
      (this_00 = *(FTypedElementInternalData **)param_2->_padding_,
      this_00 == (FTypedElementInternalData *)0x0)) ||
     (local_48 = this_00, local_40 = FTypedElementInternalData::AddRef(this_00,true),
     local_48 == (FTypedElementInternalData *)0x0)) {
    FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
    (param_1->InternalData).ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
  }
  else {
    this_01 = (UTypedElementRegistry *)(**(code **)((longlong)*this + 0x1d0))(this);
    (**(code **)((longlong)*this + 0x1b0))(this,&local_38,&local_48);
    UTypedElementRegistry::CreateScriptHandle(this_01,(FTypedElementId *)param_1);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      FTypedElementInternalData::ReleaseRef(local_38,local_30);
    }
    local_38 = (FTypedElementInternalData *)0x0;
    local_30 = -1;
  }
  iVar6 = local_40;
  if (local_48 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_40;
    LOCK();
    local_48->RefCount = local_48->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_48->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_40 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar3 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar5 = (byte)iVar6 & 0x1f;
      uVar10 = 1 << bVar5 | 1U >> 0x20 - bVar5;
      if (((iVar6 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar6)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        FVar8.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar4)();
        return (FScriptTypedElementHandle)FVar8.InternalData.ControlBlock;
      }
      puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      if (((*(uint *)(puVar9 + lVar2) & uVar10) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        FVar8.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar4)();
        return (FScriptTypedElementHandle)FVar8.InternalData.ControlBlock;
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar3) =
             iVar6;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar3) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar3) = uVar12;
      puVar9 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar9 = *(int *)puVar9 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar6;
      if (((iVar6 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar6)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        FVar8.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar4)();
        return (FScriptTypedElementHandle)FVar8.InternalData.ControlBlock;
      }
      puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      *(uint *)(puVar9 + lVar2) = *(uint *)(puVar9 + lVar2) & ~uVar10;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (FScriptTypedElementHandle)(FScriptTypedElementInternalDataPtr)param_1;
}

// PromoteElement @ 147b7ebd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTypedElementHandle * __thiscall
ITypedElementWorldInterface::PromoteElement
          (ITypedElementWorldInterface *this,FTypedElementHandle *__return_storage_ptr__,
          FTypedElementHandle *param_1,UWorld *param_2)

{
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  __return_storage_ptr__->DataPtr = (FTypedElementInternalData *)0x0;
  __return_storage_ptr__->ReferenceId = -1;
  return __return_storage_ptr__;
}

// SetPivotOffset @ 147b8ca00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::SetPivotOffset
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1,
          TVector<double> *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  uVar8 = 0;
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      uVar8 = (**(code **)((longlong)*this + 0xd8))(this,&local_38,param_2);
      goto LAB_147b8ca78;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_147b8ca78:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar8;
}

// SetPivotOffset @ 147b8cc00

bool __thiscall
ITypedElementWorldInterface::SetPivotOffset
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,TVector<double> *param_2)

{
  return false;
}

// SetRelativeTransform @ 147b8cc10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::SetRelativeTransform
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  uVar8 = 0;
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      uVar8 = (**(code **)((longlong)*this + 0xb8))(this,&local_38,param_2);
      goto LAB_147b8cc88;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_147b8cc88:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar8;
}

// SetRelativeTransform @ 147b8ce10

bool __thiscall
ITypedElementWorldInterface::SetRelativeTransform
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147b8ce13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x98))();
  return (bool)uVar1;
}

// SetWorldTransform @ 147b8de20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementWorldInterface::SetWorldTransform
          (ITypedElementWorldInterface *this,FScriptTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  uVar8 = 0;
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      uVar8 = (**(code **)((longlong)*this + 0x98))(this,&local_38,param_2);
      goto LAB_147b8de98;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_147b8de98:
  iVar7 = local_30;
  if (local_38 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_30;
    LOCK();
    local_38->RefCount = local_38->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_38->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_30 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      if ((*(uint *)(puVar10 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar4) = uVar12;
      puVar10 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar10 = *(int *)puVar10 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar10 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = puVar1;
      }
      *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (bool)uVar8;
}

// SetWorldTransform @ 147b8e020

bool __thiscall
ITypedElementWorldInterface::SetWorldTransform
          (ITypedElementWorldInterface *this,FTypedElementHandle *param_1,
          TTransform<double> *param_2)

{
  return false;
}

// _getUObject @ 147b91f10

UObject * __thiscall ITypedElementWorldInterface::_getUObject(ITypedElementWorldInterface *this)

{
  return (UObject *)0x0;
}

// execCanDeleteElement @ 147b92070

void __cdecl
ITypedElementWorldInterface::execCanDeleteElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  void *local_res8;
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar3 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x128))(param_1,ppvVar3);
  *(undefined1 *)param_3 = uVar2;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execCanDuplicateElement @ 147b92150

void __cdecl
ITypedElementWorldInterface::execCanDuplicateElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  void *local_res8;
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar3 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x150))(param_1,ppvVar3);
  *(undefined1 *)param_3 = uVar2;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execCanEditElement @ 147b92230

void __cdecl
ITypedElementWorldInterface::execCanEditElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  void *local_res8;
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar3 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1,ppvVar3);
  *(undefined1 *)param_3 = uVar2;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execCanMoveElement @ 147b92300

void __cdecl
ITypedElementWorldInterface::execCanMoveElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  undefined1 local_res8 [8];
  void *local_res10;
  
  local_res10 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  ppvVar3 = &local_res10;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1,ppvVar3,local_res8[0]);
  *(undefined1 *)param_3 = uVar2;
  if (local_res10 != (void *)0x0) {
    *(int *)((longlong)local_res10 + 8) = *(int *)((longlong)local_res10 + 8) + -1;
    if (*(int *)((longlong)local_res10 + 8) == 0) {
      ::operator_delete(local_res10,0x10);
    }
  }
  return;
}

// execCanPromoteElement @ 147b92420

void __cdecl
ITypedElementWorldInterface::execCanPromoteElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  void *local_res8;
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar3 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x198))(param_1,ppvVar3);
  *(undefined1 *)param_3 = uVar2;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execCanScaleElement @ 147b92500

void __cdecl
ITypedElementWorldInterface::execCanScaleElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  void *local_res8;
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar3 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x70))(param_1,ppvVar3);
  *(undefined1 *)param_3 = uVar2;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execDeleteElement @ 147b92b90

void __cdecl
ITypedElementWorldInterface::execDeleteElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  void **ppvVar4;
  uchar local_res8 [8];
  void *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = 0;
  ppvVar4 = &local_res10;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res8[0] = '\0';
  local_res8[1] = '\x01';
  local_res8[2] = 1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x138))
                    (param_1,ppvVar4,local_res20,local_res18,puVar3);
  *(undefined1 *)param_3 = uVar2;
  if (local_res10 != (void *)0x0) {
    *(int *)((longlong)local_res10 + 8) = *(int *)((longlong)local_res10 + 8) + -1;
    if (*(int *)((longlong)local_res10 + 8) == 0) {
      ::operator_delete(local_res10,0x10);
    }
  }
  return;
}

// execDuplicateElement @ 147b93160

void __cdecl
ITypedElementWorldInterface::execDuplicateElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  uchar *puVar3;
  void **ppvVar4;
  void *local_res8;
  undefined8 local_res10;
  void *local_res18 [2];
  uchar local_48 [32];
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = 0;
  ppvVar4 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar3 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0x160))
                     (param_1,local_res18,ppvVar4,local_res10,puVar3);
  *(undefined8 *)param_3 = *puVar2;
  *puVar2 = 0;
  if (local_res18[0] != (void *)0x0) {
    *(int *)((longlong)local_res18[0] + 8) = *(int *)((longlong)local_res18[0] + 8) + -1;
    if (*(int *)((longlong)local_res18[0] + 8) == 0) {
      ::operator_delete(local_res18[0],0x10);
    }
  }
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execGetBounds @ 147b93630

void __cdecl
ITypedElementWorldInterface::execGetBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  undefined1 uVar3;
  void **ppvVar4;
  uchar *puVar5;
  void *local_res8;
  uchar local_58 [64];
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  ppvVar4 = &local_res8;
  if (ppvVar1 != (void **)0x0) {
    ppvVar4 = ppvVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  puVar5 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1,ppvVar4,puVar5);
  *(undefined1 *)param_3 = uVar3;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execGetOwnerLevel @ 147b93760

void __cdecl
ITypedElementWorldInterface::execGetOwnerLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  void **ppvVar3;
  void *local_res8;
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar3 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1,ppvVar3);
  *(undefined8 *)param_3 = uVar2;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execGetOwnerWorld @ 147b93830

void __cdecl
ITypedElementWorldInterface::execGetOwnerWorld(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  void **ppvVar3;
  void *local_res8;
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar3 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x40))(param_1,ppvVar3);
  *(undefined8 *)param_3 = uVar2;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execGetPivotOffset @ 147b93900

void __cdecl
ITypedElementWorldInterface::execGetPivotOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  undefined1 uVar3;
  void **ppvVar4;
  uchar *puVar5;
  void *local_res8;
  uchar local_38 [32];
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  ppvVar4 = &local_res8;
  if (ppvVar1 != (void **)0x0) {
    ppvVar4 = ppvVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar5 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = (**(code **)(*(longlong *)param_1 + 0xc0))(param_1,ppvVar4,puVar5);
  *(undefined1 *)param_3 = uVar3;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execGetRelativeTransform @ 147b93a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ITypedElementWorldInterface::execGetRelativeTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 uVar13;
  void **ppvVar14;
  double *pdVar15;
  undefined1 auStack_c8 [32];
  void *local_a8 [2];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  ppvVar14 = local_a8;
  if (ppvVar1 != (void **)0x0) {
    ppvVar14 = ppvVar1;
  }
  local_88 = (double)fVar7;
  dStack_80 = (double)fVar10;
  local_68 = (double)fVar8;
  dStack_60 = (double)fVar11;
  local_78._8_4_ = SUB84((double)fVar5,0);
  local_78._0_8_ = (double)fVar3;
  local_78._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_48 = (double)fVar9;
  dStack_40 = (double)fVar12;
  local_58._8_4_ = SUB84((double)fVar6,0);
  local_58._0_8_ = (double)fVar4;
  local_58._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pdVar15 = &local_98;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar15 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar13 = (**(code **)(*(longlong *)param_1 + 0xa0))(param_1,ppvVar14,pdVar15);
  *(undefined1 *)param_3 = uVar13;
  if (local_a8[0] != (void *)0x0) {
    *(int *)((longlong)local_a8[0] + 8) = *(int *)((longlong)local_a8[0] + 8) + -1;
    if (*(int *)((longlong)local_a8[0] + 8) == 0) {
      ::operator_delete(local_a8[0],0x10);
    }
  }
  return;
}

// execGetWorldTransform @ 147b93bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ITypedElementWorldInterface::execGetWorldTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 uVar13;
  void **ppvVar14;
  double *pdVar15;
  undefined1 auStack_c8 [32];
  void *local_a8 [2];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  ppvVar14 = local_a8;
  if (ppvVar1 != (void **)0x0) {
    ppvVar14 = ppvVar1;
  }
  local_88 = (double)fVar7;
  dStack_80 = (double)fVar10;
  local_68 = (double)fVar8;
  dStack_60 = (double)fVar11;
  local_78._8_4_ = SUB84((double)fVar5,0);
  local_78._0_8_ = (double)fVar3;
  local_78._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_48 = (double)fVar9;
  dStack_40 = (double)fVar12;
  local_58._8_4_ = SUB84((double)fVar6,0);
  local_58._0_8_ = (double)fVar4;
  local_58._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pdVar15 = &local_98;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar15 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar13 = (**(code **)(*(longlong *)param_1 + 0x80))(param_1,ppvVar14,pdVar15);
  *(undefined1 *)param_3 = uVar13;
  if (local_a8[0] != (void *)0x0) {
    *(int *)((longlong)local_a8[0] + 8) = *(int *)((longlong)local_a8[0] + 8) + -1;
    if (*(int *)((longlong)local_a8[0] + 8) == 0) {
      ::operator_delete(local_a8[0],0x10);
    }
  }
  return;
}

// execIsTemplateElement @ 147b93d40

void __cdecl
ITypedElementWorldInterface::execIsTemplateElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  void *local_res8;
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar3 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x10))(param_1,ppvVar3);
  *(undefined1 *)param_3 = uVar2;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execNotifyMovementEnded @ 147b947f0

void __cdecl
ITypedElementWorldInterface::execNotifyMovementEnded(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void *local_res8;
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar2 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x100))(param_1,ppvVar2);
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execNotifyMovementOngoing @ 147b948b0

void __cdecl
ITypedElementWorldInterface::execNotifyMovementOngoing
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void *local_res8;
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar2 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xf0))(param_1,ppvVar2);
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execNotifyMovementStarted @ 147b94970

void __cdecl
ITypedElementWorldInterface::execNotifyMovementStarted
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void *local_res8;
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar2 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xe0))(param_1,ppvVar2);
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execPromoteElement @ 147b952a0

void __cdecl
ITypedElementWorldInterface::execPromoteElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  void **ppvVar3;
  void *local_res8;
  undefined8 local_res10;
  void *local_res18 [2];
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = 0;
  ppvVar3 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0x1a8))(param_1,local_res18,ppvVar3,local_res10);
  *(undefined8 *)param_3 = *puVar2;
  *puVar2 = 0;
  if (local_res18[0] != (void *)0x0) {
    *(int *)((longlong)local_res18[0] + 8) = *(int *)((longlong)local_res18[0] + 8) + -1;
    if (*(int *)((longlong)local_res18[0] + 8) == 0) {
      ::operator_delete(local_res18[0],0x10);
    }
  }
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execSetPivotOffset @ 147b953d0

void __cdecl
ITypedElementWorldInterface::execSetPivotOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  undefined1 uVar3;
  void **ppvVar4;
  uchar *puVar5;
  void *local_res8;
  uchar local_38 [32];
  
  local_res8 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  ppvVar4 = &local_res8;
  if (ppvVar1 != (void **)0x0) {
    ppvVar4 = ppvVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar5 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = (**(code **)(*(longlong *)param_1 + 0xd0))(param_1,ppvVar4,puVar5);
  *(undefined1 *)param_3 = uVar3;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execSetRelativeTransform @ 147b954f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ITypedElementWorldInterface::execSetRelativeTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 uVar13;
  void **ppvVar14;
  double *pdVar15;
  undefined1 auStack_c8 [32];
  void *local_a8 [2];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  ppvVar14 = local_a8;
  if (ppvVar1 != (void **)0x0) {
    ppvVar14 = ppvVar1;
  }
  local_88 = (double)fVar7;
  dStack_80 = (double)fVar10;
  local_68 = (double)fVar8;
  dStack_60 = (double)fVar11;
  local_78._8_4_ = SUB84((double)fVar5,0);
  local_78._0_8_ = (double)fVar3;
  local_78._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_48 = (double)fVar9;
  dStack_40 = (double)fVar12;
  local_58._8_4_ = SUB84((double)fVar6,0);
  local_58._0_8_ = (double)fVar4;
  local_58._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pdVar15 = &local_98;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar15 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar13 = (**(code **)(*(longlong *)param_1 + 0xb0))(param_1,ppvVar14,pdVar15);
  *(undefined1 *)param_3 = uVar13;
  if (local_a8[0] != (void *)0x0) {
    *(int *)((longlong)local_a8[0] + 8) = *(int *)((longlong)local_a8[0] + 8) + -1;
    if (*(int *)((longlong)local_a8[0] + 8) == 0) {
      ::operator_delete(local_a8[0],0x10);
    }
  }
  return;
}

// execSetWorldTransform @ 147b95680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ITypedElementWorldInterface::execSetWorldTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 uVar13;
  void **ppvVar14;
  double *pdVar15;
  undefined1 auStack_c8 [32];
  void *local_a8 [2];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  ppvVar14 = local_a8;
  if (ppvVar1 != (void **)0x0) {
    ppvVar14 = ppvVar1;
  }
  local_88 = (double)fVar7;
  dStack_80 = (double)fVar10;
  local_68 = (double)fVar8;
  dStack_60 = (double)fVar11;
  local_78._8_4_ = SUB84((double)fVar5,0);
  local_78._0_8_ = (double)fVar3;
  local_78._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_48 = (double)fVar9;
  dStack_40 = (double)fVar12;
  local_58._8_4_ = SUB84((double)fVar6,0);
  local_58._0_8_ = (double)fVar4;
  local_58._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pdVar15 = &local_98;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar15 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar13 = (**(code **)(*(longlong *)param_1 + 0x90))(param_1,ppvVar14,pdVar15);
  *(undefined1 *)param_3 = uVar13;
  if (local_a8[0] != (void *)0x0) {
    *(int *)((longlong)local_a8[0] + 8) = *(int *)((longlong)local_a8[0] + 8) + -1;
    if (*(int *)((longlong)local_a8[0] + 8) == 0) {
      ::operator_delete(local_a8[0],0x10);
    }
  }
  return;
}

