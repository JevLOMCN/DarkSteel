// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 6

// GetObject @ 144545190

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
ITypedElementObjectInterface::GetObject
          (ITypedElementObjectInterface *this,FScriptTypedElementHandle *param_1)

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
  UObject *pUVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pUVar9 = (UObject *)0x0;
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      pUVar9 = (UObject *)(**(code **)((longlong)*this + 0x18))(this,&local_38);
      goto LAB_1445451fe;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_1445451fe:
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
        pUVar9 = (UObject *)(*pcVar5)();
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
        pUVar9 = (UObject *)(*pcVar5)();
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
        pUVar9 = (UObject *)(*pcVar5)();
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

// GetObject @ 1445453b0

UObject * __thiscall
ITypedElementObjectInterface::GetObject
          (ITypedElementObjectInterface *this,FTypedElementHandle *param_1)

{
  return (UObject *)0x0;
}

// GetObjectClass @ 1445453c0

/* WARNING: Enum "Type": Some values do not have unique names */

UClass * __thiscall
ITypedElementObjectInterface::GetObjectClass
          (ITypedElementObjectInterface *this,FScriptTypedElementHandle *param_1)

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
  UClass *pUVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  FTypedElementInternalData *local_38;
  int local_30;
  
  pUVar9 = (UClass *)0x0;
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_38 = (FTypedElementInternalData *)0x0;
  local_30 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_38 = this_00;
    local_30 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_38 != (FTypedElementInternalData *)0x0) {
      pUVar9 = (UClass *)(**(code **)((longlong)*this + 0x28))(this,&local_38);
      goto LAB_14454542e;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_14454542e:
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
        pUVar9 = (UClass *)(*pcVar5)();
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
        pUVar9 = (UClass *)(*pcVar5)();
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
        pUVar9 = (UClass *)(*pcVar5)();
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

// GetObjectClass @ 1445455e0

UClass * __thiscall
ITypedElementObjectInterface::GetObjectClass
          (ITypedElementObjectInterface *this,FTypedElementHandle *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((longlong)*this + 0x18))();
  if (lVar1 != 0) {
    return *(UClass **)(lVar1 + 0x10);
  }
  return (UClass *)0x0;
}

// execGetObject @ 14454c7b0

void __cdecl
ITypedElementObjectInterface::execGetObject(UObject *param_1,FFrame *param_2,void *param_3)

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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x10))(param_1,ppvVar3);
  *(undefined8 *)param_3 = uVar2;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

// execGetObjectClass @ 14454c880

void __cdecl
ITypedElementObjectInterface::execGetObjectClass(UObject *param_1,FFrame *param_2,void *param_3)

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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1,ppvVar3);
  *(undefined8 *)param_3 = uVar2;
  if (local_res8 != (void *)0x0) {
    *(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1;
    if (*(int *)((longlong)local_res8 + 8) == 0) {
      ::operator_delete(local_res8,0x10);
    }
  }
  return;
}

