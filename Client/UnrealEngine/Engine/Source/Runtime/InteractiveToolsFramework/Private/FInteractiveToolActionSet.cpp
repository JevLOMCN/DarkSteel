// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 4

// CollectActions @ 1496d91a0

void __thiscall
FInteractiveToolActionSet::CollectActions
          (FInteractiveToolActionSet *this,
          TArray<FInteractiveToolAction,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FInteractiveToolAction *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FInteractiveToolAction *pFVar6;
  FInteractiveToolAction *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Actions).ArrayNum;
  pFVar7 = (FInteractiveToolAction *)(this->Actions).AllocatorInstance.Data;
  pFVar6 = pFVar7 + iVar1;
  while( true ) {
    if ((this->Actions).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInteractiveToolAction_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    pFVar2 = (FInteractiveToolAction *)(param_1->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + param_1->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1090,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar5;
    }
    param_1->ArrayNum = iVar5 + 1;
    FInteractiveToolAction::FInteractiveToolAction
              ((FInteractiveToolAction *)
               ((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x90),pFVar7);
    pFVar7 = pFVar7 + 1;
  }
  return;
}

// ExecuteAction @ 1496dbd70

void __thiscall
FInteractiveToolActionSet::ExecuteAction(FInteractiveToolActionSet *this,int param_1)

{
  code *pcVar1;
  longlong *plVar2;
  FInteractiveToolAction *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pFVar3 = FindActionByID(this,param_1);
  if (pFVar3 != (FInteractiveToolAction *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&pFVar3->OnAction);
    pcVar1 = *(code **)&pFVar3->OnAction;
    plVar2 = *(longlong **)&(pFVar3->OnAction).field_0x28;
    plVar5 = (longlong *)&(pFVar3->OnAction).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar4);
  }
  return;
}

// FindActionByID @ 1496dbfa0

FInteractiveToolAction * __thiscall
FInteractiveToolActionSet::FindActionByID(FInteractiveToolActionSet *this,int param_1)

{
  int iVar1;
  FInteractiveToolAction *pFVar2;
  FInteractiveToolAction *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Actions).ArrayNum;
  pFVar2 = (FInteractiveToolAction *)(this->Actions).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->Actions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInteractiveToolAction_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2->ActionID == param_1) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return (FInteractiveToolAction *)0x0;
}

// RegisterAction @ 1496e31c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FInteractiveToolActionSet::RegisterAction
          (FInteractiveToolActionSet *this,UInteractiveTool *param_1,int param_2,FString *param_3,
          FText *param_4,FText *param_5,uchar param_6,FKey *param_7,
          TFunction<void___cdecl(void)> *param_8)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  FKeyDetails *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  TRefCountPtr<ITextData> TVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  FInteractiveToolAction *pFVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  undefined8 local_118;
  TReferenceControllerBase<1> *pTStack_110;
  longlong local_108;
  int local_100;
  FString local_f8;
  FText local_e8;
  FText local_d8;
  FScriptContainerElement local_c8;
  FName local_c0;
  FKeyDetails *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar17 = FindActionByID(this,param_2);
  if (pFVar17 != (FInteractiveToolAction *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("FindActionByID(ActionID) == nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveToolActionSet.cpp"
                        ,0xd,
                        L"InteractiveToolActionSet::RegisterAction: Action ID is already registered!"
                       );
    if (bVar15) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  FText::FText(&local_e8);
  FText::FText(&local_d8);
  local_108 = param_1->_padding_;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  local_b8 = (FKeyDetails *)0x0;
  pTStack_b0 = (TReferenceControllerBase<1> *)0x0;
  local_a8 = 0;
  plStack_80 = (longlong *)0x0;
  local_100 = param_2;
  if (&local_f8 != param_3) {
    iVar16 = (param_3->Data).ArrayNum;
    pFVar2 = (param_3->Data).AllocatorInstance.Data;
    local_f8.Data.ArrayNum = iVar16;
    if ((iVar16 == 0) && (local_f8.Data.ArrayMax == 0)) {
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar16,local_f8.Data.ArrayMax,(ForAnyElementType *)&local_f8,iVar16,
                 &local_f8.Data.ArrayMax);
      if (iVar16 != 0) {
        memcpy(local_f8.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar16 * 2);
      }
    }
  }
  TVar7.Reference = local_e8.TextData.Reference;
  pIVar3 = (param_4->TextData).Reference;
  if (local_e8.TextData.Reference != pIVar3) {
    local_e8.TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_128);
    }
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 0x10))(TVar7.Reference);
    }
  }
  TVar7.Reference = local_d8.TextData.Reference;
  local_e8.Flags = param_4->Flags;
  pIVar3 = (param_5->TextData).Reference;
  if (local_d8.TextData.Reference != pIVar3) {
    local_d8.TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_124);
    }
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 0x10))(TVar7.Reference);
    }
  }
  pTVar8 = pTStack_b0;
  local_d8.Flags = param_5->Flags;
  local_c8 = (FScriptContainerElement)param_6;
  local_c0 = param_7->KeyName;
  pFVar4 = (param_7->KeyDetails).Object;
  pTVar5 = (param_7->KeyDetails).SharedReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_118 = local_b8;
  pTStack_110 = pTStack_b0;
  local_b8 = pFVar4;
  pTStack_b0 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  local_78 = *(longlong *)param_8;
  plStack_50 = (longlong *)0x0;
  if (local_78 != 0) {
    puVar18 = (undefined8 *)&param_8->field_0x10;
    if (*(undefined8 **)&param_8->field_0x28 != (undefined8 *)0x0) {
      puVar18 = *(undefined8 **)&param_8->field_0x28;
    }
    (**(code **)*puVar18)(puVar18,&local_68);
  }
  plVar20 = plStack_80;
  uVar14 = local_88;
  uVar13 = uStack_8c;
  uVar12 = uStack_90;
  uVar11 = uStack_94;
  uVar10 = local_98;
  uVar9 = uStack_a0;
  lVar22 = local_a8;
  local_a8 = local_78;
  uStack_a0 = uStack_70;
  local_88 = local_58;
  plStack_80 = plStack_50;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = uStack_60;
  uStack_8c = uStack_5c;
  local_78 = lVar22;
  uStack_70 = uVar9;
  local_68._0_4_ = uVar10;
  local_68._4_4_ = uVar11;
  uStack_60 = uVar12;
  uStack_5c = uVar13;
  local_58 = uVar14;
  plStack_50 = plVar20;
  if (lVar22 != 0) {
    plVar19 = &local_68;
    if (plVar20 != (longlong *)0x0) {
      plVar19 = plVar20;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  pFVar2 = (this->Actions).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_108) &&
     ((FScriptContainerElement *)&local_108 < pFVar2 + (longlong)(this->Actions).ArrayMax * 0x90)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar16 = (this->Actions).ArrayNum;
  piVar1 = &(this->Actions).ArrayMax;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1090,(ForAnyElementType *)this,piVar1);
  }
  _Src.Data = local_f8.Data.AllocatorInstance.Data;
  (this->Actions).ArrayNum = iVar16 + 1;
  pFVar21 = (this->Actions).AllocatorInstance.Data + (longlong)iVar16 * 0x90;
  *(longlong *)pFVar21 = local_108;
  pFVar2 = pFVar21 + 0x10;
  *(int *)(pFVar21 + 8) = local_100;
  *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
  lVar22 = (longlong)local_f8.Data.ArrayNum;
  *(int *)(pFVar21 + 0x18) = local_f8.Data.ArrayNum;
  if (local_f8.Data.ArrayNum == 0) {
    *(int *)(pFVar21 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)pFVar2,local_f8.Data.ArrayNum,
               (int *)(pFVar21 + 0x1c));
    memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,_Src.Data,lVar22 * 2);
  }
  *(undefined8 *)(pFVar21 + 0x20) = 0;
  *(ITextData **)(pFVar21 + 0x20) = local_e8.TextData.Reference;
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 8))(local_e8.TextData.Reference,local_120)
    ;
  }
  *(uint *)(pFVar21 + 0x28) = local_e8.Flags;
  *(undefined8 *)(pFVar21 + 0x30) = 0;
  *(ITextData **)(pFVar21 + 0x30) = local_d8.TextData.Reference;
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 8))(local_d8.TextData.Reference,local_11c)
    ;
  }
  *(uint *)(pFVar21 + 0x38) = local_d8.Flags;
  pFVar21[0x40] = local_c8;
  *(FName *)(pFVar21 + 0x48) = local_c0;
  *(FKeyDetails **)(pFVar21 + 0x50) = local_b8;
  *(TReferenceControllerBase<1> **)(pFVar21 + 0x58) = pTStack_b0;
  if (pTStack_b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_b0->SharedReferenceCount = (atomic<int>)((int)pTStack_b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(longlong *)(pFVar21 + 0x60) = local_a8;
  *(undefined8 *)(pFVar21 + 0x88) = 0;
  if (local_a8 != 0) {
    plVar20 = (longlong *)&local_98;
    if (plStack_80 != (longlong *)0x0) {
      plVar20 = plStack_80;
    }
    (**(code **)*plVar20)();
  }
  if (local_a8 != 0) {
    plVar20 = (longlong *)&local_98;
    if (plStack_80 != (longlong *)0x0) {
      plVar20 = plStack_80;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b0);
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (*(longlong *)param_8 != 0) {
    plVar20 = (longlong *)&param_8->field_0x10;
    if (*(longlong **)&param_8->field_0x28 != (longlong *)0x0) {
      plVar20 = *(longlong **)&param_8->field_0x28;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  return;
}

