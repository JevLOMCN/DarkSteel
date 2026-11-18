// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 17

// AllowSelectionModifiers @ 144540300

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementSelectionInterface::AllowSelectionModifiers
          (ITypedElementSelectionInterface *this,FScriptTypedElementHandle *param_1,
          FScriptTypedElementListProxy *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *pFVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  uint uVar14;
  FTypedElementInternalData *local_80;
  int local_78;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_68;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_58;
  TTypedElementList<FTypedElementHandle> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_78 = -1;
  local_80 = (FTypedElementInternalData *)0x0;
  pFVar3 = (param_1->InternalData).ControlBlock;
  if (((pFVar3 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
      (this_00 = pFVar3->Data, this_00 == (FTypedElementInternalData *)0x0)) ||
     (local_80 = this_00, local_78 = FTypedElementInternalData::AddRef(this_00,true),
     local_80 == (FTypedElementInternalData *)0x0)) {
    FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  }
  else {
    local_58.Object = (param_2->ElementList).Object;
    local_58.SharedReferenceCount.ReferenceController =
         (param_2->ElementList).SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_68,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (local_68.Object != (TTypedElementList<FTypedElementHandle> *)0x0) {
      local_48 = local_68.Object;
      pTStack_40 = local_68.SharedReferenceCount.ReferenceController;
      pcVar6 = *(code **)((longlong)*this + 0x68);
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar10 = (*pcVar6)(this,&local_80,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      iVar8 = local_78;
      if (local_80 != (FTypedElementInternalData *)0x0) {
        lVar13 = (longlong)local_78;
        LOCK();
        local_80->RefCount = local_80->RefCount + -1;
        UNLOCK();
        pFVar4 = (local_80->References).Ptr;
        if ((pFVar4 != (FTypedElementReferences *)0x0) && (local_78 != -1)) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
          lVar5 = *(longlong *)&pFVar4->References;
          puVar1 = &(pFVar4->References).field_0x10;
          bVar7 = (byte)iVar8 & 0x1f;
          uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
          if (((iVar8 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar12 = *(undefined1 **)&(pFVar4->References).field_0x20;
          lVar2 = (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar1;
          }
          if (((*(uint *)(puVar12 + lVar2) & uVar14) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          if (*(int *)&(pFVar4->References).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(pFVar4->References).field_0x30 * 0x108 + lVar5) = iVar8;
          }
          *(undefined4 *)(lVar13 * 0x108 + lVar5) = 0xffffffff;
          if (*(int *)&(pFVar4->References).field_0x34 < 1) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = *(undefined4 *)&(pFVar4->References).field_0x30;
          }
          *(undefined4 *)(lVar13 * 0x108 + 4 + lVar5) = uVar11;
          puVar12 = &(pFVar4->References).field_0x34;
          *(int *)puVar12 = *(int *)puVar12 + 1;
          *(int *)&(pFVar4->References).field_0x30 = iVar8;
          if (((iVar8 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar12 = *(undefined1 **)&(pFVar4->References).field_0x20;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar1;
          }
          *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar14;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
        }
      }
      local_80 = (FTypedElementInternalData *)0x0;
      local_78 = 0xffffffff;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->ElementList).SharedReferenceCount.ReferenceController);
      return (bool)uVar10;
    }
    FFrame::KismetExecutionMessage(L"InSelectionSet is in a invalid state.",Error,(FName)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  iVar8 = local_78;
  if (local_80 != (FTypedElementInternalData *)0x0) {
    lVar13 = (longlong)local_78;
    LOCK();
    local_80->RefCount = local_80->RefCount + -1;
    UNLOCK();
    pFVar4 = (local_80->References).Ptr;
    if ((pFVar4 != (FTypedElementReferences *)0x0) && (local_78 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
      lVar5 = *(longlong *)&pFVar4->References;
      puVar1 = &(pFVar4->References).field_0x10;
      bVar7 = (byte)iVar8 & 0x1f;
      uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if (((iVar8 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar12 = *(undefined1 **)&(pFVar4->References).field_0x20;
      lVar2 = (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if (((*(uint *)(puVar12 + lVar2) & uVar14) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      if (*(int *)&(pFVar4->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar4->References).field_0x30 * 0x108 + lVar5) = iVar8;
      }
      *(undefined4 *)(lVar13 * 0x108 + lVar5) = 0xffffffff;
      if (*(int *)&(pFVar4->References).field_0x34 < 1) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = *(undefined4 *)&(pFVar4->References).field_0x30;
      }
      *(undefined4 *)(lVar13 * 0x108 + 4 + lVar5) = uVar11;
      puVar12 = &(pFVar4->References).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
      *(int *)&(pFVar4->References).field_0x30 = iVar8;
      if (((iVar8 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar12 = *(undefined1 **)&(pFVar4->References).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar14;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
    }
  }
  local_80 = (FTypedElementInternalData *)0x0;
  local_78 = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ElementList).SharedReferenceCount.ReferenceController);
  return false;
}

// CanDeselectElement @ 144540d80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementSelectionInterface::CanDeselectElement
          (ITypedElementSelectionInterface *this,FScriptTypedElementHandle *param_1,
          FTypedElementSelectionOptions *param_2)

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
      uVar8 = (**(code **)((longlong)*this + 0x38))(this,&local_38,param_2);
      goto LAB_144540df5;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_144540df5:
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

// CanSelectElement @ 1445412b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementSelectionInterface::CanSelectElement
          (ITypedElementSelectionInterface *this,FScriptTypedElementHandle *param_1,
          FTypedElementSelectionOptions *param_2)

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
      uVar8 = (**(code **)((longlong)*this + 0x28))(this,&local_38,param_2);
      goto LAB_144541325;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_144541325:
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

// DeselectElement @ 144542150

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementSelectionInterface::DeselectElement
          (ITypedElementSelectionInterface *this,FScriptTypedElementHandle *param_1,
          FScriptTypedElementListProxy *param_2,FTypedElementSelectionOptions *param_3)

{
  FScriptTypedElementInternalDataControlBlock *pFVar1;
  FTypedElementInternalData *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FTypedElementReferences *pFVar3;
  longlong lVar4;
  undefined1 *puVar5;
  code *pcVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  FTypedElementInternalData *local_58;
  int local_50;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_48;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_38;
  
  local_50 = -1;
  local_58 = (FTypedElementInternalData *)0x0;
  pFVar1 = (param_1->InternalData).ControlBlock;
  if (((pFVar1 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
      (this_00 = pFVar1->Data, this_00 == (FTypedElementInternalData *)0x0)) ||
     (local_58 = this_00, local_50 = FTypedElementInternalData::AddRef(this_00,true),
     local_58 == (FTypedElementInternalData *)0x0)) {
    FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  }
  else {
    pTVar2 = (param_2->ElementList).SharedReferenceCount.ReferenceController;
    local_48.Object = (param_2->ElementList).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.SharedReferenceCount.ReferenceController = pTVar2;
    UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_38,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (local_38.Object != (TTypedElementList<FTypedElementHandle> *)0x0) {
      uVar10 = (**(code **)((longlong)*this + 0x58))(this,&local_58,&local_38,param_3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      iVar8 = local_50;
      if (local_58 != (FTypedElementInternalData *)0x0) {
        lVar13 = (longlong)local_50;
        LOCK();
        local_58->RefCount = local_58->RefCount + -1;
        UNLOCK();
        pFVar3 = (local_58->References).Ptr;
        if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_50 != -1)) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
          lVar4 = *(longlong *)&pFVar3->References;
          puVar16 = &(pFVar3->References).field_0x10;
          bVar7 = (byte)iVar8 & 0x1f;
          uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
          if (((iVar8 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
          puVar15 = puVar16;
          if (puVar5 != (undefined1 *)0x0) {
            puVar15 = puVar5;
          }
          lVar12 = (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (((*(uint *)(puVar15 + lVar12) & uVar14) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          if (*(int *)&(pFVar3->References).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar4) = iVar8;
          }
          *(undefined4 *)(lVar13 * 0x108 + lVar4) = 0xffffffff;
          if (*(int *)&(pFVar3->References).field_0x34 < 1) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
          }
          *(undefined4 *)(lVar13 * 0x108 + 4 + lVar4) = uVar11;
          puVar5 = &(pFVar3->References).field_0x34;
          *(int *)puVar5 = *(int *)puVar5 + 1;
          *(int *)&(pFVar3->References).field_0x30 = iVar8;
          if (((iVar8 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
          if (puVar5 != (undefined1 *)0x0) {
            puVar16 = puVar5;
          }
          *(uint *)(puVar16 + lVar12) = *(uint *)(puVar16 + lVar12) & ~uVar14;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
        }
      }
      local_58 = (FTypedElementInternalData *)0x0;
      local_50 = 0xffffffff;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->ElementList).SharedReferenceCount.ReferenceController);
      return (bool)uVar10;
    }
    FFrame::KismetExecutionMessage(L"InSelectionSet is in a invalid state.",Error,(FName)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  iVar8 = local_50;
  if (local_58 != (FTypedElementInternalData *)0x0) {
    lVar13 = (longlong)local_50;
    LOCK();
    local_58->RefCount = local_58->RefCount + -1;
    UNLOCK();
    pFVar3 = (local_58->References).Ptr;
    if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_50 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
      lVar4 = *(longlong *)&pFVar3->References;
      puVar16 = &(pFVar3->References).field_0x10;
      bVar7 = (byte)iVar8 & 0x1f;
      uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if (((iVar8 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
      puVar15 = puVar16;
      if (puVar5 != (undefined1 *)0x0) {
        puVar15 = puVar5;
      }
      lVar12 = (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5);
      if (((*(uint *)(puVar15 + lVar12 * 4) & uVar14) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      if (*(int *)&(pFVar3->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar4) = iVar8;
      }
      *(undefined4 *)(lVar13 * 0x108 + lVar4) = 0xffffffff;
      if (*(int *)&(pFVar3->References).field_0x34 < 1) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
      }
      *(undefined4 *)(lVar13 * 0x108 + 4 + lVar4) = uVar11;
      puVar5 = &(pFVar3->References).field_0x34;
      *(int *)puVar5 = *(int *)puVar5 + 1;
      *(int *)&(pFVar3->References).field_0x30 = iVar8;
      if (((iVar8 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
      if (puVar5 != (undefined1 *)0x0) {
        puVar16 = puVar5;
      }
      *(uint *)(puVar16 + lVar12 * 4) = *(uint *)(puVar16 + lVar12 * 4) & ~uVar14;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
    }
  }
  local_58 = (FTypedElementInternalData *)0x0;
  local_50 = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ElementList).SharedReferenceCount.ReferenceController);
  return false;
}

// DeselectElement @ 144542560

bool __thiscall
ITypedElementSelectionInterface::DeselectElement
          (ITypedElementSelectionInterface *this,FTypedElementHandle *param_1,
          TSharedPtr<TTypedElementList<FTypedElementHandle>,1> *param_2,
          FTypedElementSelectionOptions *param_3)

{
  bool bVar1;
  FTypedElementId *pFVar2;
  
  if (param_2->Object != (TTypedElementList<FTypedElementHandle> *)0x0) {
    if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
      pFVar2 = &FTypedElementId::Unset;
    }
    else {
      pFVar2 = &param_1->DataPtr->Id;
    }
    bVar1 = TTypedElementList<FTypedElementHandle>::RemoveElementImpl(param_2->Object,pFVar2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// GetSelectionElement @ 144545fe0

/* WARNING: Enum "Type": Some values do not have unique names */

FScriptTypedElementHandle __thiscall
ITypedElementSelectionInterface::GetSelectionElement
          (ITypedElementSelectionInterface *this,FScriptTypedElementHandle *param_1,
          FScriptTypedElementListProxy *param_2,ETypedElementSelectionMethod param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  TTypedElementList<FScriptTypedElementHandle> *pTVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *pFVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  undefined4 uVar10;
  UTypedElementRegistry *this_01;
  undefined1 *puVar11;
  FScriptTypedElementHandle FVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  uint uVar15;
  undefined7 in_register_00000089;
  undefined8 *puVar16;
  undefined1 in_stack_00000028;
  FTypedElementInternalData *local_90;
  int local_88;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_78;
  FTypedElementInternalData *local_68;
  int local_60;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_58;
  TTypedElementList<FTypedElementHandle> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  puVar16 = (undefined8 *)CONCAT71(in_register_00000089,param_3);
  local_88 = -1;
  local_90 = (FTypedElementInternalData *)0x0;
  pTVar3 = (param_2->ElementList).Object;
  if (((pTVar3 == (TTypedElementList<FScriptTypedElementHandle> *)0x0) ||
      (this_00 = (FTypedElementInternalData *)pTVar3->_padding_,
      this_00 == (FTypedElementInternalData *)0x0)) ||
     (local_90 = this_00, local_88 = FTypedElementInternalData::AddRef(this_00,true),
     local_90 == (FTypedElementInternalData *)0x0)) {
    FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
    (param_1->InternalData).ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
  }
  else {
    local_58.Object = (TTypedElementList<FScriptTypedElementHandle> *)*puVar16;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar16[1];
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_78,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (local_78.Object != (TTypedElementList<FTypedElementHandle> *)0x0) {
      if ((local_78.Object == (TTypedElementList<FTypedElementHandle> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        FVar12.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar6)();
        return (FScriptTypedElementHandle)FVar12.InternalData.ControlBlock;
      }
      this_01 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&((local_78.Object)->Registry).WeakPtr)
      ;
      local_48 = local_78.Object;
      pTStack_40 = local_78.SharedReferenceCount.ReferenceController;
      pcVar6 = *(code **)((longlong)*this + 0x78);
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar6)(this,&local_68,&local_90,&local_48,in_stack_00000028);
      UTypedElementRegistry::CreateScriptHandle(this_01,(FTypedElementId *)param_1);
      if (local_68 != (FTypedElementInternalData *)0x0) {
        FTypedElementInternalData::ReleaseRef(local_68,local_60);
      }
      local_68 = (FTypedElementInternalData *)0x0;
      local_60 = -1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      iVar8 = local_88;
      if (local_90 != (FTypedElementInternalData *)0x0) {
        lVar14 = (longlong)local_88;
        LOCK();
        local_90->RefCount = local_90->RefCount + -1;
        UNLOCK();
        pFVar4 = (local_90->References).Ptr;
        if ((pFVar4 != (FTypedElementReferences *)0x0) && (local_88 != -1)) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
          lVar5 = *(longlong *)&pFVar4->References;
          puVar1 = &(pFVar4->References).field_0x10;
          bVar7 = (byte)iVar8 & 0x1f;
          uVar15 = 1 << bVar7 | 1U >> 0x20 - bVar7;
          if (((iVar8 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            FVar12.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar6)();
            return (FScriptTypedElementHandle)FVar12.InternalData.ControlBlock;
          }
          puVar11 = *(undefined1 **)&(pFVar4->References).field_0x20;
          lVar2 = (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = puVar1;
          }
          if (((*(uint *)(puVar11 + lVar2) & uVar15) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            FVar12.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar6)();
            return (FScriptTypedElementHandle)FVar12.InternalData.ControlBlock;
          }
          if (*(int *)&(pFVar4->References).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(pFVar4->References).field_0x30 * 0x108 + lVar5) = iVar8;
          }
          *(undefined4 *)(lVar14 * 0x108 + lVar5) = 0xffffffff;
          if (*(int *)&(pFVar4->References).field_0x34 < 1) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = *(undefined4 *)&(pFVar4->References).field_0x30;
          }
          *(undefined4 *)(lVar14 * 0x108 + 4 + lVar5) = uVar10;
          puVar11 = &(pFVar4->References).field_0x34;
          *(int *)puVar11 = *(int *)puVar11 + 1;
          *(int *)&(pFVar4->References).field_0x30 = iVar8;
          if (((iVar8 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            FVar12.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar6)();
            return (FScriptTypedElementHandle)FVar12.InternalData.ControlBlock;
          }
          puVar11 = *(undefined1 **)&(pFVar4->References).field_0x20;
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = puVar1;
          }
          *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar15;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
        }
      }
      pTVar13 = (TReferenceControllerBase<1> *)puVar16[1];
      goto LAB_144546439;
    }
    FFrame::KismetExecutionMessage(L"InCurrentSelection is in a invalid state.",Error,(FName)0x0);
    (param_1->InternalData).ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  iVar8 = local_88;
  if (local_90 != (FTypedElementInternalData *)0x0) {
    lVar14 = (longlong)local_88;
    LOCK();
    local_90->RefCount = local_90->RefCount + -1;
    UNLOCK();
    pFVar4 = (local_90->References).Ptr;
    if ((pFVar4 != (FTypedElementReferences *)0x0) && (local_88 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
      lVar5 = *(longlong *)&pFVar4->References;
      puVar1 = &(pFVar4->References).field_0x10;
      bVar7 = (byte)iVar8 & 0x1f;
      uVar15 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if (((iVar8 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        FVar12.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar6)();
        return (FScriptTypedElementHandle)FVar12.InternalData.ControlBlock;
      }
      puVar11 = *(undefined1 **)&(pFVar4->References).field_0x20;
      lVar2 = (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      if (((*(uint *)(puVar11 + lVar2) & uVar15) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        FVar12.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar6)();
        return (FScriptTypedElementHandle)FVar12.InternalData.ControlBlock;
      }
      if (*(int *)&(pFVar4->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar4->References).field_0x30 * 0x108 + lVar5) = iVar8;
      }
      *(undefined4 *)(lVar14 * 0x108 + lVar5) = 0xffffffff;
      if (*(int *)&(pFVar4->References).field_0x34 < 1) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)&(pFVar4->References).field_0x30;
      }
      *(undefined4 *)(lVar14 * 0x108 + 4 + lVar5) = uVar10;
      puVar11 = &(pFVar4->References).field_0x34;
      *(int *)puVar11 = *(int *)puVar11 + 1;
      *(int *)&(pFVar4->References).field_0x30 = iVar8;
      if (((iVar8 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        FVar12.InternalData.ControlBlock = (FScriptTypedElementInternalDataPtr)(*pcVar6)();
        return (FScriptTypedElementHandle)FVar12.InternalData.ControlBlock;
      }
      puVar11 = *(undefined1 **)&(pFVar4->References).field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar15;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
    }
  }
  pTVar13 = (TReferenceControllerBase<1> *)puVar16[1];
LAB_144546439:
  local_90 = (FTypedElementInternalData *)0x0;
  local_88 = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return (FScriptTypedElementHandle)(FScriptTypedElementInternalDataPtr)param_1;
}

// IsElementSelected @ 144546f70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementSelectionInterface::IsElementSelected
          (ITypedElementSelectionInterface *this,FScriptTypedElementHandle *param_1,
          FScriptTypedElementListProxy *param_2,FTypedElementIsSelectedOptions *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *pFVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  uint uVar14;
  FTypedElementInternalData *local_68;
  int local_60;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_58;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_48;
  TTypedElementList<FTypedElementHandle> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  local_60 = -1;
  local_68 = (FTypedElementInternalData *)0x0;
  pFVar3 = (param_1->InternalData).ControlBlock;
  if (((pFVar3 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
      (this_00 = pFVar3->Data, this_00 == (FTypedElementInternalData *)0x0)) ||
     (local_68 = this_00, local_60 = FTypedElementInternalData::AddRef(this_00,true),
     local_68 == (FTypedElementInternalData *)0x0)) {
    FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  }
  else {
    local_48.Object = (param_2->ElementList).Object;
    local_48.SharedReferenceCount.ReferenceController =
         (param_2->ElementList).SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_58,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    if (local_58.Object != (TTypedElementList<FTypedElementHandle> *)0x0) {
      local_38 = local_58.Object;
      pTStack_30 = local_58.SharedReferenceCount.ReferenceController;
      pcVar6 = *(code **)((longlong)*this + 0x18);
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar10 = (*pcVar6)(this,&local_68,&local_38,param_3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      iVar8 = local_60;
      if (local_68 != (FTypedElementInternalData *)0x0) {
        lVar13 = (longlong)local_60;
        LOCK();
        local_68->RefCount = local_68->RefCount + -1;
        UNLOCK();
        pFVar4 = (local_68->References).Ptr;
        if ((pFVar4 != (FTypedElementReferences *)0x0) && (local_60 != -1)) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
          lVar5 = *(longlong *)&pFVar4->References;
          puVar1 = &(pFVar4->References).field_0x10;
          bVar7 = (byte)iVar8 & 0x1f;
          uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
          if (((iVar8 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar12 = *(undefined1 **)&(pFVar4->References).field_0x20;
          lVar2 = (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar1;
          }
          if (((*(uint *)(puVar12 + lVar2) & uVar14) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          if (*(int *)&(pFVar4->References).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(pFVar4->References).field_0x30 * 0x108 + lVar5) = iVar8;
          }
          *(undefined4 *)(lVar13 * 0x108 + lVar5) = 0xffffffff;
          if (*(int *)&(pFVar4->References).field_0x34 < 1) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = *(undefined4 *)&(pFVar4->References).field_0x30;
          }
          *(undefined4 *)(lVar13 * 0x108 + 4 + lVar5) = uVar11;
          puVar12 = &(pFVar4->References).field_0x34;
          *(int *)puVar12 = *(int *)puVar12 + 1;
          *(int *)&(pFVar4->References).field_0x30 = iVar8;
          if (((iVar8 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar12 = *(undefined1 **)&(pFVar4->References).field_0x20;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = puVar1;
          }
          *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar14;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
        }
      }
      local_68 = (FTypedElementInternalData *)0x0;
      local_60 = 0xffffffff;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->ElementList).SharedReferenceCount.ReferenceController);
      return (bool)uVar10;
    }
    FFrame::KismetExecutionMessage(L"InSelectionSet is in a invalid state.",Error,(FName)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  iVar8 = local_60;
  if (local_68 != (FTypedElementInternalData *)0x0) {
    lVar13 = (longlong)local_60;
    LOCK();
    local_68->RefCount = local_68->RefCount + -1;
    UNLOCK();
    pFVar4 = (local_68->References).Ptr;
    if ((pFVar4 != (FTypedElementReferences *)0x0) && (local_60 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar4);
      lVar5 = *(longlong *)&pFVar4->References;
      puVar1 = &(pFVar4->References).field_0x10;
      bVar7 = (byte)iVar8 & 0x1f;
      uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if (((iVar8 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar12 = *(undefined1 **)&(pFVar4->References).field_0x20;
      lVar2 = (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if (((*(uint *)(puVar12 + lVar2) & uVar14) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      if (*(int *)&(pFVar4->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar4->References).field_0x30 * 0x108 + lVar5) = iVar8;
      }
      *(undefined4 *)(lVar13 * 0x108 + lVar5) = 0xffffffff;
      if (*(int *)&(pFVar4->References).field_0x34 < 1) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = *(undefined4 *)&(pFVar4->References).field_0x30;
      }
      *(undefined4 *)(lVar13 * 0x108 + 4 + lVar5) = uVar11;
      puVar12 = &(pFVar4->References).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
      *(int *)&(pFVar4->References).field_0x30 = iVar8;
      if (((iVar8 < 0) || (*(int *)&(pFVar4->References).field_0x28 <= iVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar12 = *(undefined1 **)&(pFVar4->References).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar14;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar4);
    }
  }
  local_68 = (FTypedElementInternalData *)0x0;
  local_60 = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ElementList).SharedReferenceCount.ReferenceController);
  return false;
}

// IsElementSelected @ 144547390

bool __thiscall
ITypedElementSelectionInterface::IsElementSelected
          (ITypedElementSelectionInterface *this,FTypedElementHandle *param_1,
          TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> *param_2,
          FTypedElementIsSelectedOptions *param_3)

{
  bool bVar1;
  FTypedElementId *pFVar2;
  
  if (param_2->Object != (TTypedElementList<FTypedElementHandle> *)0x0) {
    if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
      pFVar2 = &FTypedElementId::Unset;
    }
    else {
      pFVar2 = &param_1->DataPtr->Id;
    }
    bVar1 = TTypedElementList<FTypedElementHandle>::ContainsElementImpl(param_2->Object,pFVar2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// SelectElement @ 144548a00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ITypedElementSelectionInterface::SelectElement
          (ITypedElementSelectionInterface *this,FScriptTypedElementHandle *param_1,
          FScriptTypedElementListProxy *param_2,FTypedElementSelectionOptions *param_3)

{
  FScriptTypedElementInternalDataControlBlock *pFVar1;
  FTypedElementInternalData *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FTypedElementReferences *pFVar3;
  longlong lVar4;
  undefined1 *puVar5;
  code *pcVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  FTypedElementInternalData *local_58;
  int local_50;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> local_48;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> local_38;
  
  local_50 = -1;
  local_58 = (FTypedElementInternalData *)0x0;
  pFVar1 = (param_1->InternalData).ControlBlock;
  if (((pFVar1 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
      (this_00 = pFVar1->Data, this_00 == (FTypedElementInternalData *)0x0)) ||
     (local_58 = this_00, local_50 = FTypedElementInternalData::AddRef(this_00,true),
     local_58 == (FTypedElementInternalData *)0x0)) {
    FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
  }
  else {
    pTVar2 = (param_2->ElementList).SharedReferenceCount.ReferenceController;
    local_48.Object = (param_2->ElementList).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.SharedReferenceCount.ReferenceController = pTVar2;
    UE::TypedElementFramework::ConvertToNativeTypedElementList(&local_38,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (local_38.Object != (TTypedElementList<FTypedElementHandle> *)0x0) {
      uVar10 = (**(code **)((longlong)*this + 0x48))(this,&local_58,&local_38,param_3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      iVar8 = local_50;
      if (local_58 != (FTypedElementInternalData *)0x0) {
        lVar13 = (longlong)local_50;
        LOCK();
        local_58->RefCount = local_58->RefCount + -1;
        UNLOCK();
        pFVar3 = (local_58->References).Ptr;
        if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_50 != -1)) {
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
          lVar4 = *(longlong *)&pFVar3->References;
          puVar16 = &(pFVar3->References).field_0x10;
          bVar7 = (byte)iVar8 & 0x1f;
          uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
          if (((iVar8 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
          puVar15 = puVar16;
          if (puVar5 != (undefined1 *)0x0) {
            puVar15 = puVar5;
          }
          lVar12 = (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4;
          if (((*(uint *)(puVar15 + lVar12) & uVar14) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("AllocationFlags[Index]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                 ,0xc5,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          if (*(int *)&(pFVar3->References).field_0x34 != 0) {
            *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar4) = iVar8;
          }
          *(undefined4 *)(lVar13 * 0x108 + lVar4) = 0xffffffff;
          if (*(int *)&(pFVar3->References).field_0x34 < 1) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
          }
          *(undefined4 *)(lVar13 * 0x108 + 4 + lVar4) = uVar11;
          puVar5 = &(pFVar3->References).field_0x34;
          *(int *)puVar5 = *(int *)puVar5 + 1;
          *(int *)&(pFVar3->References).field_0x30 = iVar8;
          if (((iVar8 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
          if (puVar5 != (undefined1 *)0x0) {
            puVar16 = puVar5;
          }
          *(uint *)(puVar16 + lVar12) = *(uint *)(puVar16 + lVar12) & ~uVar14;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
        }
      }
      local_58 = (FTypedElementInternalData *)0x0;
      local_50 = 0xffffffff;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->ElementList).SharedReferenceCount.ReferenceController);
      return (bool)uVar10;
    }
    FFrame::KismetExecutionMessage(L"InSelectionSet is in a invalid state.",Error,(FName)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  iVar8 = local_50;
  if (local_58 != (FTypedElementInternalData *)0x0) {
    lVar13 = (longlong)local_50;
    LOCK();
    local_58->RefCount = local_58->RefCount + -1;
    UNLOCK();
    pFVar3 = (local_58->References).Ptr;
    if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_50 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
      lVar4 = *(longlong *)&pFVar3->References;
      puVar16 = &(pFVar3->References).field_0x10;
      bVar7 = (byte)iVar8 & 0x1f;
      uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if (((iVar8 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
      puVar15 = puVar16;
      if (puVar5 != (undefined1 *)0x0) {
        puVar15 = puVar5;
      }
      lVar12 = (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5);
      if (((*(uint *)(puVar15 + lVar12 * 4) & uVar14) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      if (*(int *)&(pFVar3->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar4) = iVar8;
      }
      *(undefined4 *)(lVar13 * 0x108 + lVar4) = 0xffffffff;
      if (*(int *)&(pFVar3->References).field_0x34 < 1) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
      }
      *(undefined4 *)(lVar13 * 0x108 + 4 + lVar4) = uVar11;
      puVar5 = &(pFVar3->References).field_0x34;
      *(int *)puVar5 = *(int *)puVar5 + 1;
      *(int *)&(pFVar3->References).field_0x30 = iVar8;
      if (((iVar8 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
      if (puVar5 != (undefined1 *)0x0) {
        puVar16 = puVar5;
      }
      *(uint *)(puVar16 + lVar12 * 4) = *(uint *)(puVar16 + lVar12 * 4) & ~uVar14;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
    }
  }
  local_58 = (FTypedElementInternalData *)0x0;
  local_50 = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->ElementList).SharedReferenceCount.ReferenceController);
  return false;
}

// SelectElement @ 144548e10

bool __thiscall
ITypedElementSelectionInterface::SelectElement
          (ITypedElementSelectionInterface *this,FTypedElementHandle *param_1,
          TSharedPtr<TTypedElementList<FTypedElementHandle>,1> *param_2,
          FTypedElementSelectionOptions *param_3)

{
  bool bVar1;
  
  if (param_2->Object != (TTypedElementList<FTypedElementHandle> *)0x0) {
    bVar1 = TTypedElementList<FTypedElementHandle>::Add(param_2->Object,param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// execAllowSelectionModifiers @ 14454ae00

void __cdecl
ITypedElementSelectionInterface::execAllowSelectionModifiers
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  void **ppvVar4;
  void *local_res8;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
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
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  ppvVar4 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28 = local_38;
  pTStack_20 = pTStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x60);
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = (*pcVar2)(param_1,ppvVar4,&local_28);
  *(undefined1 *)param_3 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execCanDeselectElement @ 14454b020

void __cdecl
ITypedElementSelectionInterface::execCanDeselectElement
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  uchar *puVar4;
  void *local_res8;
  uchar local_28 [8];
  undefined8 local_20;
  
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
  local_28[0] = '\0';
  local_28[1] = '\x01';
  local_28[2] = '\x01';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  ppvVar3 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar4 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1,ppvVar3,puVar4);
  *(undefined1 *)param_3 = uVar2;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execCanSelectElement @ 14454b280

void __cdecl
ITypedElementSelectionInterface::execCanSelectElement
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  uchar *puVar4;
  void *local_res8;
  uchar local_28 [8];
  undefined8 local_20;
  
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
  local_28[0] = '\0';
  local_28[1] = '\x01';
  local_28[2] = '\x01';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  ppvVar3 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar4 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1,ppvVar3,puVar4);
  *(undefined1 *)param_3 = uVar2;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execDeselectElement @ 14454b840

void __cdecl
ITypedElementSelectionInterface::execDeselectElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  void **ppvVar4;
  uchar *puVar5;
  void *local_res8;
  uchar local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
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
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  ppvVar4 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48[0] = '\0';
  local_48[1] = '\x01';
  local_48[2] = '\x01';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_40 = 0;
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
  local_28 = local_38;
  pTStack_20 = pTStack_30;
  puVar5 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x50);
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = (*pcVar2)(param_1,ppvVar4,&local_28,puVar5);
  *(undefined1 *)param_3 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execGetSelectionElement @ 14454cc80

void __cdecl
ITypedElementSelectionInterface::execGetSelectionElement
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  undefined1 local_res8 [8];
  void *local_res10;
  void *local_res18 [2];
  undefined8 local_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
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
  local_48 = 0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  ppvVar4 = &local_res10;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38 = local_48;
  pTStack_30 = pTStack_40;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x70);
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar3 = (undefined8 *)(*pcVar2)(param_1,local_res18,ppvVar4,&local_38,local_res8[0]);
  *(undefined8 *)param_3 = *puVar3;
  *puVar3 = 0;
  if (local_res18[0] != (void *)0x0) {
    *(int *)((longlong)local_res18[0] + 8) = *(int *)((longlong)local_res18[0] + 8) + -1;
    if (*(int *)((longlong)local_res18[0] + 8) == 0) {
      ::operator_delete(local_res18[0],0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  if (local_res10 != (void *)0x0) {
    *(int *)((longlong)local_res10 + 8) = *(int *)((longlong)local_res10 + 8) + -1;
    if (*(int *)((longlong)local_res10 + 8) == 0) {
      ::operator_delete(local_res10,0x10);
    }
  }
  return;
}

// execIsElementSelected @ 14454d350

void __cdecl
ITypedElementSelectionInterface::execIsElementSelected
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  void **ppvVar4;
  uchar *puVar5;
  void *local_res8;
  uchar local_48 [4];
  undefined8 local_44;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
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
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  ppvVar4 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48[0] = '\0';
  local_44 = 0;
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
  local_28 = local_38;
  pTStack_20 = pTStack_30;
  puVar5 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x10);
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = (*pcVar2)(param_1,ppvVar4,&local_28,puVar5);
  *(undefined1 *)param_3 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execSelectElement @ 14454d8c0

void __cdecl
ITypedElementSelectionInterface::execSelectElement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  void **ppvVar4;
  uchar *puVar5;
  void *local_res8;
  uchar local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
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
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  ppvVar4 = &local_res8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48[0] = '\0';
  local_48[1] = '\x01';
  local_48[2] = '\x01';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_40 = 0;
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
  local_28 = local_38;
  pTStack_20 = pTStack_30;
  puVar5 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x40);
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = (*pcVar2)(param_1,ppvVar4,&local_28,puVar5);
  *(undefined1 *)param_3 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

