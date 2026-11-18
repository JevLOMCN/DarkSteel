// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 4

// SetCustomData @ 144549b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ITypedElementPrimitiveCustomDataInterface::SetCustomData
          (ITypedElementPrimitiveCustomDataInterface *this,FScriptTypedElementHandle *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  code *pcVar4;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  undefined1 *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  FTypedElementInternalData *local_58;
  int local_50;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_58 = (FTypedElementInternalData *)0x0;
  local_50 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_58 = this_00;
    local_50 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_58 != (FTypedElementInternalData *)0x0) {
      pcVar4 = *(code **)((longlong)*this + 0x18);
      local_48 = (param_2->AllocatorInstance).Data;
      iStack_40 = param_2->ArrayNum;
      if (iStack_40 < 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_38 = (undefined4)local_48;
      uStack_34 = local_48._4_4_;
      iStack_30 = iStack_40;
      uStack_2c = uStack_3c;
      (*pcVar4)(this,&local_58,&local_38,param_3);
      goto LAB_144549c57;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_144549c57:
  iVar7 = local_50;
  if (local_58 != (FTypedElementInternalData *)0x0) {
    lVar11 = (longlong)local_50;
    LOCK();
    local_58->RefCount = local_58->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_58->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_50 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar5 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar6 = (byte)iVar7 & 0x1f;
      uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      if ((*(uint *)(puVar9 + lVar2) & uVar10) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar5) =
             iVar7;
      }
      *(undefined4 *)(lVar11 * 0x108 + lVar5) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar11 * 0x108 + 4 + lVar5) = uVar12;
      puVar9 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar9 = *(int *)puVar9 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar7;
      if ((iVar7 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar7)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      puVar9 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      *(uint *)(puVar9 + lVar2) = *(uint *)(puVar9 + lVar2) & ~uVar10;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// SetCustomDataValue @ 144549de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ITypedElementPrimitiveCustomDataInterface::SetCustomDataValue
          (ITypedElementPrimitiveCustomDataInterface *this,FScriptTypedElementHandle *param_1,
          int param_2,float param_3,bool param_4)

{
  undefined1 *puVar1;
  FScriptTypedElementInternalDataControlBlock *pFVar2;
  FTypedElementInternalData *this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  bool bVar7;
  undefined1 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  FTypedElementInternalData *local_48;
  int local_40;
  
  local_48 = (FTypedElementInternalData *)0x0;
  pFVar2 = (param_1->InternalData).ControlBlock;
  uVar12 = 0xffffffff;
  local_40 = -1;
  if ((pFVar2 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar2->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_48 = this_00;
    local_40 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_48 != (FTypedElementInternalData *)0x0) {
      (**(code **)((longlong)*this + 0x28))(this,&local_48,param_2,param_3,param_4);
      goto LAB_144549e70;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_144549e70:
  iVar6 = local_40;
  if (local_48 != (FTypedElementInternalData *)0x0) {
    lVar10 = (longlong)local_40;
    LOCK();
    local_48->RefCount = local_48->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_48->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_40 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar3 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar5 = (byte)iVar6 & 0x1f;
      uVar9 = 1 << bVar5 | 1U >> 0x20 - bVar5;
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
      puVar8 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar11 = (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = puVar1;
      }
      if ((*(uint *)(puVar8 + lVar11 * 4) & uVar9) == 0) {
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
      *(undefined4 *)(lVar10 * 0x108 + lVar3) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar12 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar10 * 0x108 + 4 + lVar3) = uVar12;
      puVar8 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar8 = *(int *)puVar8 + 1;
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
      puVar8 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = puVar1;
      }
      *(uint *)(puVar8 + lVar11 * 4) = *(uint *)(puVar8 + lVar11 * 4) & ~uVar9;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// execSetCustomData @ 14454dfb0

void __cdecl
ITypedElementPrimitiveCustomDataInterface::execSetCustomData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void **ppvVar3;
  int local_res8 [2];
  void *local_res10;
  void *local_28;
  undefined8 local_20;
  
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
  local_28 = (void *)0x0;
  local_20 = 0;
  ppvVar2 = &local_res10;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  ppvVar3 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,ppvVar2,ppvVar3,local_res8[0] != 0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_res10 != (void *)0x0) {
    *(int *)((longlong)local_res10 + 8) = *(int *)((longlong)local_res10 + 8) + -1;
    if (*(int *)((longlong)local_res10 + 8) == 0) {
      ::operator_delete(local_res10,0x10);
    }
  }
  return;
}

// execSetCustomDataValue @ 14454e130

void __cdecl
ITypedElementPrimitiveCustomDataInterface::execSetCustomDataValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  void *local_28 [2];
  
  local_28[0] = (void *)0x0;
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
  local_res20[0] = 0;
  ppvVar2 = local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x20))
            (param_1,ppvVar2,local_res20[0],local_res10[0],local_res8[0] != 0);
  if (local_28[0] != (void *)0x0) {
    *(int *)((longlong)local_28[0] + 8) = *(int *)((longlong)local_28[0] + 8) + -1;
    if (*(int *)((longlong)local_28[0] + 8) == 0) {
      ::operator_delete(local_28[0],0x10);
    }
  }
  return;
}

