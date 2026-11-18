// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// ~FCounterTree @ 14a225b50

void __thiscall `FControlRigStats::Dump'::__l2::FCounterTree::~FCounterTree(void *this)

{
  undefined8 *puVar1;
  int iVar2;
  void *this_00;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  iVar2 = *(int *)((longlong)this + 0x18);
  puVar1 = puVar3 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 0x18) != iVar2) {
      `TCheckedPointerIterator<`FControlRigStats::Dump'::__l2::FCounterTree_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar3 == puVar1) break;
    this_00 = (void *)*puVar3;
    if (this_00 != (void *)0x0) {
      ~FCounterTree(this_00);
      ::operator_delete(this_00,0x20);
    }
    puVar3 = puVar3 + 1;
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// Dump @ 14a250660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FControlRigStats::Dump'::__l2::FCounterTree::Dump(void *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  TLess<void> local_res8 [8];
  undefined1 local_res18 [16];
  uint local_88 [2];
  ForAnyElementType local_80;
  undefined8 local_78;
  ForAnyElementType local_70;
  int local_68;
  int local_64;
  FString local_60;
  FString local_50;
  FString local_40;
  
  if (*(double *)((longlong)this + 8) <= __real_3e45798ee0000000) {
    if ((byte)ControlRigProfilingLog._0_1_ < 4) goto LAB_14a25074b;
    ::FName::ToString(this,&local_40);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&ControlRigProfilingLog);
    local_50.Data.AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
  }
  else {
    if ((byte)ControlRigProfilingLog._0_1_ < 4) goto LAB_14a25074b;
    ::FName::ToString(this,&local_50);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&ControlRigProfilingLog);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
LAB_14a25074b:
  local_68 = *(int *)((longlong)this + 0x18);
  lVar10 = (longlong)local_68;
  pvVar2 = *(void **)((longlong)this + 0x10);
  local_70.Data = (FScriptContainerElement *)0x0;
  if (local_68 == 0) {
    local_64 = 0;
    iVar8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_68,0,&local_70,local_68,&local_64);
    memcpy(local_70.Data,pvVar2,lVar10 << 3);
    iVar8 = local_68;
  }
  uVar6 = 0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  pFVar1 = local_70.Data + (longlong)iVar8 * 8;
  FVar11.Data = local_70.Data;
  iVar9 = iVar8;
  while( true ) {
    if (iVar9 != iVar8) {
      local_res8[0] = (TLess<void>)0x0;
      `TCheckedPointerIterator<`FControlRigStats::Dump'::__l2::FCounterTree_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
      uVar6 = (uint)local_78;
    }
    if (FVar11.Data == pFVar1) break;
    uVar5 = uVar6;
    local_88[0] = uVar6;
    if ((local_80.Data <= (FScriptContainerElement *)local_88) &&
       ((FScriptContainerElement *)local_88 < local_80.Data + (longlong)(int)local_78._4_4_ * 4)) {
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
      uVar5 = (uint)local_78;
    }
    if (uVar5 == local_78._4_4_) {
      uVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_80,(int *)((longlong)&local_78 + 4));
    }
    uVar6 = uVar5 + 1;
    local_78 = CONCAT44(local_78._4_4_,uVar6);
    FVar11.Data = FVar11.Data + 8;
    *(uint *)(local_80.Data + (longlong)(int)uVar5 * 4) = local_88[0];
    iVar9 = local_68;
  }
  AlgoImpl::
  IntroSortInternal<int,int,__FControlRigStats::Dump_::__l2::FCounterTree::Dump_::__l2::<lambda_1>,TLess<void>_>
            ((int *)local_80.Data,uVar6,
             (TArray<_public:_void___cdecl_FControlRigStats::Dump(void)_::_2_::FCounterTree_*,TSizedDefaultAllocator<32>_>
              *)&local_70,local_res8[0]);
  iVar8 = (uint)local_78;
  uVar7 = (ulonglong)(int)(uint)local_78;
  pFVar1 = local_80.Data + uVar7 * 4;
  FVar11.Data = local_80.Data;
  while( true ) {
    if ((int)uVar7 != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar11.Data == pFVar1) break;
    uVar6 = *(uint *)FVar11.Data;
    uVar5 = 0;
    if ((int)uVar6 < local_68) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pvVar2 = *(void **)(local_70.Data + (longlong)(int)uVar6 * 8);
    ::FString::ConcatFC(&local_60,param_1,L"   ");
    Dump(pvVar2,&local_60);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    uVar7 = local_78 & 0xffffffff;
    FVar11.Data = FVar11.Data + 4;
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return;
}

// FindOrAddChild @ 14a25bfb0

FCounterTree * __thiscall
`FControlRigStats::Dump'::__l2::FCounterTree::FindOrAddChild(void *this,FName *param_1)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCounterTree *pFVar7;
  FCounterTree *pFVar8;
  ForAnyElementType FVar9;
  FName *pFVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  FCounterTree *local_a8;
  FCounterTree *local_a0;
  FString local_98;
  FString local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FString local_60;
  FString local_50;
  
  plVar11 = *(longlong **)((longlong)this + 0x10);
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  iVar6 = *(int *)((longlong)this + 0x18);
  plVar2 = plVar11 + iVar6;
  while( true ) {
    if (*(int *)((longlong)this + 0x18) != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<`FControlRigStats::Dump'::__l2::FCounterTree_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar11 == plVar2) goto LAB_14a25c018;
    pFVar8 = (FCounterTree *)*plVar11;
    if (pFVar8->Name == *param_1) break;
    plVar11 = plVar11 + 1;
  }
  if (pFVar8 != (FCounterTree *)0x0) {
    return pFVar8;
  }
LAB_14a25c018:
  ::FName::ToString(param_1,&local_50);
  pFVar8 = (FCounterTree *)0x0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  ::FString::FString(&local_60,L".");
  bVar5 = ::FString::Split(&local_50,&local_60,&local_88,&local_98);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar9.Data = local_88.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res20,(wchar_t *)FVar9.Data);
    pFVar12 = pFVar1->Data;
    iVar6 = *(int *)((longlong)this + 0x18);
    pFVar3 = pFVar12 + (longlong)iVar6 * 8;
    while( true ) {
      if (*(int *)((longlong)this + 0x18) != iVar6) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<`FControlRigStats::Dump'::__l2::FCounterTree_*,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar3) goto LAB_14a25c100;
      pFVar7 = *(FCounterTree **)pFVar12;
      if (pFVar7->Name == local_res20) break;
      pFVar12 = pFVar12 + 8;
    }
    if (pFVar7 == (FCounterTree *)0x0) {
LAB_14a25c100:
      pFVar7 = ::operator_new(0x20);
      if (pFVar7 != (FCounterTree *)0x0) {
        (pFVar7->Name).ComparisonIndex = 0;
        (pFVar7->Name).Number = 0;
        (pFVar7->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar7->Children).ArrayNum = 0;
        (pFVar7->Children).ArrayMax = 0;
        pFVar8 = pFVar7;
      }
      pFVar8->Seconds = 0.0;
      local_a8 = pFVar8;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 <
           pFVar1->Data + (longlong)*(int *)((longlong)this + 0x1c) * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FCounterTree *)(*pcVar4)();
        return pFVar8;
      }
      iVar6 = *(int *)((longlong)this + 0x18);
      if (iVar6 == *(int *)((longlong)this + 0x1c)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar1,(int *)((longlong)this + 0x1c));
      }
      *(int *)((longlong)this + 0x18) = iVar6 + 1;
      *(FCounterTree **)(pFVar1->Data + (longlong)iVar6 * 8) = local_a8;
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar9.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_70,(wchar_t *)FVar9.Data);
      local_a8->Name = local_70;
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar9.Data = local_98.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_68,(wchar_t *)FVar9.Data);
      pFVar10 = &local_68;
      pFVar7 = local_a8;
    }
    else {
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar9.Data = local_98.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_78,(wchar_t *)FVar9.Data);
      pFVar10 = &local_78;
    }
    pFVar8 = FindOrAddChild(pFVar7,pFVar10);
  }
  else {
    pFVar7 = ::operator_new(0x20);
    if (pFVar7 != (FCounterTree *)0x0) {
      (pFVar7->Name).ComparisonIndex = 0;
      (pFVar7->Name).Number = 0;
      (pFVar7->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar7->Children).ArrayNum = 0;
      (pFVar7->Children).ArrayMax = 0;
      pFVar8 = pFVar7;
    }
    pFVar8->Seconds = 0.0;
    local_a0 = pFVar8;
    if (((pFVar1->Data <= (FScriptContainerElement *)&local_a0) &&
        ((FScriptContainerElement *)&local_a0 <
         pFVar1->Data + (longlong)*(int *)((longlong)this + 0x1c) * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FCounterTree *)(*pcVar4)();
      return pFVar8;
    }
    iVar6 = *(int *)((longlong)this + 0x18);
    if (iVar6 == *(int *)((longlong)this + 0x1c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar1,(int *)((longlong)this + 0x1c));
    }
    *(int *)((longlong)this + 0x18) = iVar6 + 1;
    *(FCounterTree **)(pFVar1->Data + (longlong)iVar6 * 8) = local_a0;
    local_a0->Name = *param_1;
    pFVar8 = local_a0;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return pFVar8;
}

