// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// ~FSystemTaskPrerequisites @ 14611e4f0

void __thiscall
UE::MovieScene::FSystemTaskPrerequisites::~FSystemTaskPrerequisites(FSystemTaskPrerequisites *this)

{
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar2;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar3;
  
  FVar2 = (this->AllTasks).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar2 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->AllTasks;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar2,(this->AllTasks).ArrayNum);
  FVar2 = (this->AllTasks).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar1 = (this->Prereqs).AllocatorInstance.SecondaryData;
  FVar3 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)this;
  if (FVar1 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FVar3 = FVar1;
  }
  DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
            ((FPrerequisite *)FVar3,(this->Prereqs).ArrayNum);
  FVar1 = (this->Prereqs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return;
}

// AddComponentTask @ 14618d8c0

/* WARNING: Removing unreachable block (ram,0x00014618d9c7) */
/* WARNING: Removing unreachable block (ram,0x00014618d9d6) */

void __thiscall
UE::MovieScene::FSystemTaskPrerequisites::AddComponentTask
          (FSystemTaskPrerequisites *this,FComponentTypeID param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar6;
  longlong lVar7;
  FBaseGraphTask *local_18;
  ushort local_10;
  
  local_18 = param_2->Reference;
  if (local_18 != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&local_18->field_0x30 = *(int *)&local_18->field_0x30 + 1;
    UNLOCK();
  }
  FVar2 = (this->Prereqs).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)this;
  if (FVar2 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FVar6 = FVar2;
  }
  local_10 = param_1.Value;
  if ((ulonglong)FVar6 <= &local_18) {
    FVar6 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)this;
    if (FVar2 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FVar6 = FVar2;
    }
    if ((&local_18 <
         (FBaseGraphTask **)((longlong)(this->Prereqs).ArrayMax * 0x10 + (longlong)FVar6)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Prereqs).ArrayNum;
  piVar1 = &(this->Prereqs).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_>
                      (0x810,(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>
                              *)this,piVar1);
  }
  (this->Prereqs).ArrayNum = iVar5 + 1;
  FVar2 = (this->Prereqs).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    this = (FSystemTaskPrerequisites *)FVar2;
  }
  lVar7 = (longlong)iVar5;
  *(undefined8 *)((longlong)this + lVar7 * 0x10) = 0;
  *(FBaseGraphTask **)((longlong)this + lVar7 * 0x10) = local_18;
  *(ushort *)((uchar *)((longlong)this + 8) + lVar7 * 0x10) = local_10;
  return;
}

// All @ 146191a40

TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall UE::MovieScene::FSystemTaskPrerequisites::All(FSystemTaskPrerequisites *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar9;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar10;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar11;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar12;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar13;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar14;
  undefined1 local_res8 [8];
  
  iVar3 = (this->AllTasks).ArrayNum;
  pTVar10 = &this->AllTasks;
  piVar1 = &(this->Prereqs).ArrayNum;
  if (iVar3 == *piVar1) {
    return pTVar10;
  }
  FVar11 = (this->AllTasks).AllocatorInstance.SecondaryData;
  piVar2 = &(this->AllTasks).ArrayMax;
  if ((this->AllTasks).ArrayMax < 0) {
    if (FVar11 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar10;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar11,iVar3);
    (this->AllTasks).ArrayNum = 0;
    if (*piVar2 != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,0,&pTVar10->AllocatorInstance,0,piVar2);
    }
  }
  else {
    if (FVar11 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar10;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar11,iVar3);
    (this->AllTasks).ArrayNum = 0;
  }
  FVar14 = (this->Prereqs).AllocatorInstance.SecondaryData;
  iVar3 = *piVar1;
  FVar13 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)this;
  if (FVar14 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FVar13 = FVar14;
  }
  FVar14 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
           ((longlong)iVar3 * 0x10 + (longlong)FVar13);
  do {
    if (*piVar1 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar13 == FVar14) {
      return pTVar10;
    }
    FVar4 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
             &(this->AllTasks).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)pTVar10;
    if (FVar4 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FVar9 = FVar4;
    }
    if ((ulonglong)FVar9 <= (ulonglong)FVar13) {
      FVar9 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)pTVar10;
      if (FVar4 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FVar9 = FVar4;
      }
      if (((ulonglong)FVar13 < (ulonglong)((longlong)FVar9 + (longlong)*piVar2 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)(*pcVar6)();
        return pTVar10;
      }
    }
    iVar8 = (this->AllTasks).ArrayNum;
    if (iVar8 == *piVar2) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                        (0x808,&pTVar10->AllocatorInstance,piVar2);
    }
    (this->AllTasks).ArrayNum = iVar8 + 1;
    FVar11 = (this->AllTasks).AllocatorInstance.SecondaryData;
    FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar10;
    if (FVar11 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar12 = FVar11;
    }
    *(undefined8 *)((longlong)FVar12 + (longlong)iVar8 * 8) = 0;
    lVar5 = *(longlong *)FVar13;
    *(longlong *)((longlong)FVar12 + (longlong)iVar8 * 8) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
      UNLOCK();
    }
    FVar13 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
             ((longlong)FVar13 + 0x10);
  } while( true );
}

// Consume @ 146198fc0

void __thiscall
UE::MovieScene::FSystemTaskPrerequisites::Consume
          (FSystemTaskPrerequisites *this,FSystemTaskPrerequisites *param_1)

{
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar8;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar9;
  
  if (this == param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = (param_1->Prereqs).ArrayNum;
  if (iVar3 != 0) {
    iVar7 = Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_>
                      (0x10,8,iVar3,
                       (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                       this,&(this->Prereqs).ArrayNum,&(this->Prereqs).ArrayMax);
    FVar4 = (param_1->Prereqs).AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      param_1 = (FSystemTaskPrerequisites *)FVar4;
    }
    FVar4 = (this->Prereqs).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)this;
    if (FVar4 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FVar9 = FVar4;
    }
    ConstructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
              ((void *)((longlong)iVar7 * 0x10 + (longlong)FVar9),(FPrerequisite *)param_1,iVar3);
  }
  iVar3 = (this->AllTasks).ArrayNum;
  pTVar1 = &this->AllTasks;
  piVar2 = &(this->AllTasks).ArrayMax;
  FVar8 = (this->AllTasks).AllocatorInstance.SecondaryData;
  if (-1 < (this->AllTasks).ArrayMax) {
    if (FVar8 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar8 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar1;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar8,iVar3);
    (this->AllTasks).ArrayNum = 0;
    return;
  }
  if (FVar8 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar8 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar1;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar8,iVar3);
  (this->AllTasks).ArrayNum = 0;
  if (*piVar2 != 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  return;
}

// FilterByComponent @ 1461a6070

void __thiscall
UE::MovieScene::FSystemTaskPrerequisites::FilterByComponent
          (FSystemTaskPrerequisites *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,initializer_list<UE::MovieScene::FComponentTypeID> *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FComponentTypeID *pFVar9;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar10;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar11;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar12;
  undefined1 local_res8 [8];
  
  FVar12 = (this->Prereqs).AllocatorInstance.SecondaryData;
  piVar1 = &(this->Prereqs).ArrayNum;
  iVar2 = *piVar1;
  if (FVar12 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    this = (FSystemTaskPrerequisites *)FVar12;
  }
  FVar12 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
           ((longlong)iVar2 * 0x10 + (longlong)this);
  do {
    while( true ) {
      if (*piVar1 != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)this == FVar12) {
        return;
      }
      pFVar9 = param_2->_First;
      if (pFVar9 != param_2->_Last) break;
LAB_1461a61c2:
      this = (FSystemTaskPrerequisites *)((longlong)this + 0x10);
    }
    do {
      if (pFVar9->Value == *(ushort *)((longlong)this + 8)) {
        FVar3 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                 &(param_1->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)param_1;
        if (FVar3 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
          FVar10 = FVar3;
        }
        if ((ulonglong)FVar10 <= this) {
          FVar10 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)param_1;
          if (FVar3 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0)
          {
            FVar10 = FVar3;
          }
          if ((this < (ulonglong)((longlong)FVar10 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == param_1->ArrayMax) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar8 + 1;
        FVar4 = (param_1->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1;
        if (FVar4 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar11 = FVar4;
        }
        *(undefined8 *)((longlong)FVar11 + (longlong)iVar8 * 8) = 0;
        lVar5 = *(longlong *)this;
        *(longlong *)((longlong)FVar11 + (longlong)iVar8 * 8) = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
          UNLOCK();
        }
        goto LAB_1461a61c2;
      }
      pFVar9 = pFVar9 + 1;
    } while (pFVar9 != param_2->_Last);
    this = (FSystemTaskPrerequisites *)((longlong)this + 0x10);
  } while( true );
}

