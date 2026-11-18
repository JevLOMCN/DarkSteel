// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// Filter @ 14a303c80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UModularRigRuleManager::FWorkData::Filter
          (FWorkData *this,TFunction<void___cdecl(FRigElementResolveResult_&)> *param_1)

{
  int *piVar1;
  FRigElementResolveResult *pFVar2;
  uint uVar3;
  FModularRigResolveResult *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FRigElementResolveResult *pFVar14;
  undefined1 local_88 [8];
  ForAnyElementType local_80;
  uint local_78;
  int local_74;
  longlong local_70;
  uint local_68;
  FScriptContainerElement local_64;
  longlong *local_60;
  uint local_58;
  uint local_50;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [12];
  
  local_80.Data = (FScriptContainerElement *)0x0;
  uVar3 = (this->Result->Matches).ArrayNum;
  pFVar14 = (FRigElementResolveResult *)(this->Result->Matches).AllocatorInstance.Data;
  local_78 = uVar3;
  if (uVar3 == 0) {
    local_74 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar3,0,&local_80,uVar3,&local_74);
    ConstructItems<FRigElementResolveResult,FRigElementResolveResult,int>
              (local_80.Data,pFVar14,uVar3);
  }
  pFVar4 = this->Result;
  piVar1 = &(pFVar4->Matches).ArrayMax;
  pFVar14 = (FRigElementResolveResult *)(pFVar4->Matches).AllocatorInstance.Data;
  iVar7 = (pFVar4->Matches).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FRigElementResolveResult,int>(pFVar14,iVar7);
    (pFVar4->Matches).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(pFVar4->Matches).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRigElementResolveResult,int>(pFVar14,iVar7);
    (pFVar4->Matches).ArrayNum = 0;
  }
  uVar9 = (ulonglong)(int)local_78;
  pFVar14 = (FRigElementResolveResult *)(local_80.Data + uVar9 * 0x20);
  local_50 = local_78;
  pFVar13 = local_80.Data + 0x10;
  do {
    if (local_78 != (uint)uVar9) {
      local_88[0] = 0;
      `TCheckedPointerIterator<FRigElementResolveResult_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_88);
    }
    pFVar2 = (FRigElementResolveResult *)(pFVar13 + -0x10);
    if (pFVar2 == pFVar14) {
      DestructItems<FRigElementResolveResult,int>
                ((FRigElementResolveResult *)local_80.Data,local_78);
      if ((FRigElementResolveResult *)local_80.Data != (FRigElementResolveResult *)0x0) {
        FMemory::Free(local_80.Data);
      }
      if (*(longlong *)param_1 != 0) {
        plVar10 = (longlong *)&param_1->field_0x10;
        if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
          plVar10 = *(longlong **)&param_1->field_0x28;
        }
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      return;
    }
    local_70._0_1_ = (pFVar2->Key).Type;
    local_70._1_3_ = *(undefined3 *)&(pFVar2->Key).field_0x1;
    local_70._4_4_ = (pFVar2->Key).Name.ComparisonIndex;
    local_68 = *(uint *)(pFVar13 + -8);
    local_60 = *(longlong **)pFVar13;
    local_64 = pFVar13[-4];
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 8))(local_60,local_4c);
    }
    local_58 = *(uint *)(pFVar13 + 8);
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar5 = *(code **)param_1;
    plVar10 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar10 = (longlong *)&param_1->field_0x10;
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar5)(uVar8,&local_70);
    pFVar4 = this->Result;
    if ((byte)((char)local_64 - 2U) < 2) {
      pFVar12 = (pFVar4->Matches).AllocatorInstance.Data;
      if ((pFVar12 <= (FScriptContainerElement *)&local_70) &&
         ((FScriptContainerElement *)&local_70 <
          pFVar12 + (longlong)(pFVar4->Matches).ArrayMax * 0x20)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = (pFVar4->Matches).ArrayNum;
      piVar1 = &(pFVar4->Matches).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&(pFVar4->Matches).AllocatorInstance,piVar1);
      }
      (pFVar4->Matches).ArrayNum = iVar7 + 1;
      pFVar12 = (pFVar4->Matches).AllocatorInstance.Data + (longlong)iVar7 * 0x20;
      *(longlong *)pFVar12 = local_70;
      *(uint *)(pFVar12 + 8) = local_68;
      pFVar12[0xc] = local_64;
      *(longlong *)(pFVar12 + 0x10) = 0;
      *(longlong **)(pFVar12 + 0x10) = local_60;
      if (local_60 != (longlong *)0x0) {
        puVar11 = local_44;
        goto LAB_14a303f8f;
      }
    }
    else {
      pFVar12 = (pFVar4->Excluded).AllocatorInstance.Data;
      if ((pFVar12 <= (FScriptContainerElement *)&local_70) &&
         ((FScriptContainerElement *)&local_70 <
          pFVar12 + (longlong)(pFVar4->Excluded).ArrayMax * 0x20)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = (pFVar4->Excluded).ArrayNum;
      piVar1 = &(pFVar4->Excluded).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&(pFVar4->Excluded).AllocatorInstance,piVar1);
      }
      (pFVar4->Excluded).ArrayNum = iVar7 + 1;
      pFVar12 = (pFVar4->Excluded).AllocatorInstance.Data + (longlong)iVar7 * 0x20;
      *(longlong *)pFVar12 = local_70;
      *(uint *)(pFVar12 + 8) = local_68;
      pFVar12[0xc] = local_64;
      *(longlong *)(pFVar12 + 0x10) = 0;
      *(longlong **)(pFVar12 + 0x10) = local_60;
      if (local_60 != (longlong *)0x0) {
        puVar11 = local_48;
LAB_14a303f8f:
        (**(code **)(*local_60 + 8))(local_60,puVar11);
      }
    }
    *(uint *)(pFVar12 + 0x18) = local_58;
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
    uVar9 = (ulonglong)local_50;
    pFVar13 = pFVar13 + 0x20;
  } while( true );
}

