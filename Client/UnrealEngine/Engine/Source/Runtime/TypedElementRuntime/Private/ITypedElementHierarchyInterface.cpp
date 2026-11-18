// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 5

// GetChildElements @ 144543f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ITypedElementHierarchyInterface::GetChildElements
          (ITypedElementHierarchyInterface *this,FScriptTypedElementHandle *param_1,
          TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  FScriptContainerElement *pFVar4;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  UTypedElementRegistry *pUVar10;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 *puVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 uVar15;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> local_58;
  FTypedElementInternalData *local_48;
  int local_40;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> local_38;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  uVar15 = 0xffffffff;
  local_48 = (FTypedElementInternalData *)0x0;
  local_40 = -1;
  if ((pFVar3 != (FScriptTypedElementInternalDataControlBlock *)0x0) &&
     (this_00 = pFVar3->Data, this_00 != (FTypedElementInternalData *)0x0)) {
    local_48 = this_00;
    local_40 = FTypedElementInternalData::AddRef(this_00,true);
    if (local_48 != (FTypedElementInternalData *)0x0) {
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      (**(code **)((longlong)*this + 0x28))(this,&local_48,&local_58,param_3);
      pUVar10 = (UTypedElementRegistry *)(**(code **)((longlong)*this + 0x30))(this);
      pTVar11 = TypedElementUtil::ConvertToScriptElementArray(&local_38,&local_58,pUVar10);
      if (param_2 != pTVar11) {
        DestructItems<FScriptTypedElementHandle,int>
                  ((FScriptTypedElementHandle *)(param_2->AllocatorInstance).Data,param_2->ArrayNum)
        ;
        pFVar4 = (param_2->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (param_2->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
        (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        param_2->ArrayNum = pTVar11->ArrayNum;
        param_2->ArrayMax = pTVar11->ArrayMax;
        pTVar11->ArrayNum = 0;
        pTVar11->ArrayMax = 0;
      }
      DestructItems<FScriptTypedElementHandle,int>
                ((FScriptTypedElementHandle *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      DestructItems<FTypedElementHandle,int>
                ((FTypedElementHandle *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      if ((FTypedElementHandle *)local_58.AllocatorInstance.Data != (FTypedElementHandle *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      goto LAB_144544044;
    }
  }
  FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
LAB_144544044:
  iVar8 = local_40;
  if (local_48 != (FTypedElementInternalData *)0x0) {
    lVar14 = (longlong)local_40;
    LOCK();
    local_48->RefCount = local_48->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (local_48->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (local_40 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar5 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar7 = (byte)iVar8 & 0x1f;
      uVar13 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if ((iVar8 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar8)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      puVar12 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if ((*(uint *)(puVar12 + lVar2) & uVar13) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar5) =
             iVar8;
      }
      *(undefined4 *)(lVar14 * 0x108 + lVar5) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar15 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)(lVar14 * 0x108 + 4 + lVar5) = uVar15;
      puVar12 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar8;
      if ((iVar8 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar8)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      puVar12 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar13;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// GetParentElement @ 1445457b0

/* WARNING: Enum "Type": Some values do not have unique names */

FScriptTypedElementHandle __thiscall
ITypedElementHierarchyInterface::GetParentElement
          (ITypedElementHierarchyInterface *this,FScriptTypedElementHandle *param_1,bool param_2)

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
  undefined7 in_register_00000081;
  undefined1 in_R9B;
  undefined4 uVar12;
  FTypedElementInternalData *local_48;
  int local_40;
  FTypedElementInternalData *local_38;
  int local_30;
  
  uVar12 = 0xffffffff;
  local_48 = (FTypedElementInternalData *)0x0;
  local_40 = -1;
  if (((*(undefined8 **)CONCAT71(in_register_00000081,param_2) == (undefined8 *)0x0) ||
      (this_00 = (FTypedElementInternalData *)
                 **(undefined8 **)CONCAT71(in_register_00000081,param_2),
      this_00 == (FTypedElementInternalData *)0x0)) ||
     (local_48 = this_00, local_40 = FTypedElementInternalData::AddRef(this_00,true),
     local_48 == (FTypedElementInternalData *)0x0)) {
    FFrame::KismetExecutionMessage(L"InElementHandle is not a valid handle.",Error,(FName)0x0);
    (param_1->InternalData).ControlBlock = (FScriptTypedElementInternalDataControlBlock *)0x0;
  }
  else {
    this_01 = (UTypedElementRegistry *)(**(code **)((longlong)*this + 0x30))(this);
    (**(code **)((longlong)*this + 0x18))(this,&local_38,&local_48,in_R9B);
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

// GetRegistry @ 144545f30

UTypedElementRegistry * __thiscall
ITypedElementHierarchyInterface::GetRegistry(ITypedElementHierarchyInterface *this)

{
  TStrongObjectPtr<UTypedElementRegistry,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  
  pTVar1 = GetTypedElementRegistryInstance();
  return (UTypedElementRegistry *)pTVar1->Object;
}

// execGetChildElements @ 14454c2a0

void __cdecl
ITypedElementHierarchyInterface::execGetChildElements
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  FScriptTypedElementHandle **ppFVar3;
  int local_res8 [2];
  void *local_res10;
  FScriptTypedElementHandle *local_28;
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
  local_28 = (FScriptTypedElementHandle *)0x0;
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
  ppFVar3 = &local_28;
  if ((FScriptTypedElementHandle **)param_2->MostRecentPropertyAddress !=
      (FScriptTypedElementHandle **)0x0) {
    ppFVar3 = (FScriptTypedElementHandle **)param_2->MostRecentPropertyAddress;
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
  (**(code **)(*(longlong *)param_1 + 0x20))(param_1,ppvVar2,ppFVar3,local_res8[0] != 0);
  DestructItems<FScriptTypedElementHandle,int>(local_28,(int)local_20);
  if (local_28 != (FScriptTypedElementHandle *)0x0) {
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

// execGetParentElement @ 14454c950

void __cdecl
ITypedElementHierarchyInterface::execGetParentElement
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  void **ppvVar3;
  int local_res8 [2];
  void *local_res10;
  void *local_res18 [2];
  
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
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0x10))
                     (param_1,local_res18,ppvVar3,local_res8[0] != 0);
  *(undefined8 *)param_3 = *puVar2;
  *puVar2 = 0;
  if (local_res18[0] != (void *)0x0) {
    *(int *)((longlong)local_res18[0] + 8) = *(int *)((longlong)local_res18[0] + 8) + -1;
    if (*(int *)((longlong)local_res18[0] + 8) == 0) {
      ::operator_delete(local_res18[0],0x10);
    }
  }
  if (local_res10 != (void *)0x0) {
    *(int *)((longlong)local_res10 + 8) = *(int *)((longlong)local_res10 + 8) + -1;
    if (*(int *)((longlong)local_res10 + 8) == 0) {
      ::operator_delete(local_res10,0x10);
    }
  }
  return;
}

