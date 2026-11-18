// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// FLLMThreadState @ 141678560

FLLMThreadState * __thiscall UE::LLMPrivate::FLLMThreadState::FLLMThreadState(FLLMThreadState *this)

{
  *(undefined8 *)this->TagStack = 0;
  *(undefined8 *)&this->TagStack[0].field_0x8 = 0;
  *(undefined8 *)&this->TagStack[0].field_0x10 = 0;
  *(undefined8 *)(this->TagStack + 1) = 0;
  *(undefined8 *)&this->TagStack[1].field_0x8 = 0;
  *(undefined8 *)&this->TagStack[1].field_0x10 = 0;
  *(undefined8 *)(this->TagStack + 2) = 0;
  *(undefined8 *)&this->TagStack[2].field_0x8 = 0;
  *(undefined8 *)&this->TagStack[2].field_0x10 = 0;
  *(undefined8 *)(this->TagStack + 3) = 0;
  *(undefined8 *)&this->TagStack[3].field_0x8 = 0;
  *(undefined8 *)&this->TagStack[3].field_0x10 = 0;
  (this->Allocations).Pairs.AllocatorInstance.Data = (void *)0x0;
  (this->Allocations).Pairs.AllocatorInstance.Size = 0;
  (this->Allocations).Pairs.ArrayNum = 0;
  (this->Allocations).Pairs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TagSection,4000);
  this->PausedCounter[0] = '\0';
  this->PausedCounter[1] = '\0';
  this->PausedCounter[2] = '\0';
  this->PausedCounter[3] = '\0';
  this->AllocTypeAmounts[0] = 0;
  this->AllocTypeAmounts[1] = 0;
  this->AllocTypeAmounts[2] = 0;
  this->AllocTypeAmounts[3] = 0;
  return this;
}

// Clear @ 14168a940

void __thiscall UE::LLMPrivate::FLLMThreadState::Clear(FLLMThreadState *this)

{
  undefined1 *puVar1;
  int *piVar2;
  
  puVar1 = &this->TagStack[0].field_0x14;
  *(undefined4 *)&this->TagStack[0].field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  puVar1 = &this->TagStack[1].field_0x14;
  *(undefined4 *)&this->TagStack[1].field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(this->TagStack + 1),0,(int *)puVar1);
  }
  puVar1 = &this->TagStack[2].field_0x14;
  *(undefined4 *)&this->TagStack[2].field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(this->TagStack + 2),0,(int *)puVar1);
  }
  puVar1 = &this->TagStack[3].field_0x14;
  *(undefined4 *)&this->TagStack[3].field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(this->TagStack + 3),0,(int *)puVar1);
  }
  piVar2 = &(this->Allocations).Pairs.ArrayMax;
  (this->Allocations).Pairs.ArrayNum = 0;
  if (*piVar2 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->Allocations,0,piVar2);
  }
  this->AllocTypeAmounts[0] = 0;
  this->AllocTypeAmounts[1] = 0;
  this->AllocTypeAmounts[2] = 0;
  this->AllocTypeAmounts[3] = 0;
  return;
}

// ClearAllocTypeAmounts @ 14168b090

void __thiscall UE::LLMPrivate::FLLMThreadState::ClearAllocTypeAmounts(FLLMThreadState *this)

{
  this->AllocTypeAmounts[0] = 0;
  this->AllocTypeAmounts[1] = 0;
  this->AllocTypeAmounts[2] = 0;
  this->AllocTypeAmounts[3] = 0;
  return;
}

// FetchAndClearTagSizes @ 141692770

void __thiscall
UE::LLMPrivate::FLLMThreadState::FetchAndClearTagSizes
          (FLLMThreadState *this,
          TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *param_1,
          long64 *param_2,bool param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  void *pvVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  void *pvVar7;
  ulonglong local_res8;
  int local_48 [2];
  ulonglong *local_40;
  
  lpCriticalSection = &this->TagSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = (this->Allocations).Pairs.ArrayNum;
  pvVar7 = (this->Allocations).Pairs.AllocatorInstance.Data;
  pvVar1 = (void *)((longlong)pvVar7 + (longlong)iVar2 * 0x18);
  do {
    if ((this->Allocations).Pairs.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<int,UE::LLMPrivate::FThreadTagSizeData>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res8);
    }
    if (pvVar7 == pvVar1) {
      if (param_3) {
        iVar2 = (this->Allocations).Pairs.ArrayMax;
        (this->Allocations).Pairs.ArrayNum = 0;
        if (iVar2 != 0) {
          Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)&this->Allocations,0,
                     &(this->Allocations).Pairs.ArrayMax);
        }
      }
      *param_2 = *param_2 + this->AllocTypeAmounts[0];
      this->AllocTypeAmounts[0] = 0;
      param_2[1] = param_2[1] + this->AllocTypeAmounts[1];
      this->AllocTypeAmounts[1] = 0;
      param_2[2] = param_2[2] + this->AllocTypeAmounts[2];
      this->AllocTypeAmounts[2] = 0;
      param_2[3] = param_2[3] + this->AllocTypeAmounts[3];
      this->AllocTypeAmounts[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x00014169295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    if (*(longlong *)((longlong)pvVar7 + 0x10) != 0) {
      local_res8 = *(ulonglong *)((longlong)pvVar7 + 8);
      uVar5 = ((uint)(local_res8 >> 0x14) & 0xffff ^ (uint)(local_res8 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      uVar5 = uVar5 >> 0x10 ^ uVar5;
      if (*(int *)&param_1->field_0x10 != *(int *)&param_1->field_0x44) {
        puVar6 = &param_1->field_0x48;
        if (*(undefined1 **)&param_1->field_0x50 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&param_1->field_0x50;
        }
        iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&param_1->field_0x60 - 1U & uVar5) * 4);
        if (iVar3 != -1) {
          do {
            puVar4 = (ulonglong *)((longlong)iVar3 * 0x38 + *(longlong *)param_1);
            if (*puVar4 == local_res8) {
              if (puVar4 != (ulonglong *)0x0) goto LAB_1416928a3;
              break;
            }
            iVar3 = (int)puVar4[6];
          } while (iVar3 != -1);
        }
      }
      local_40 = &local_res8;
      TSet<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>,FDefaultSetLLMAllocator>
      ::EmplaceByHash<TKeyInitializer<UE::LLMPrivate::FTagData_const_*_const_&>_>
                ((TSet<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>,FDefaultSetLLMAllocator>
                  *)param_1,(uint)local_48,
                 (TKeyInitializer<UE::LLMPrivate::FTagData_const_*_const_&> *)(ulonglong)uVar5,
                 (bool *)&local_40);
      puVar4 = (ulonglong *)((longlong)local_48[0] * 0x38 + *(longlong *)param_1);
LAB_1416928a3:
      puVar4[1] = puVar4[1] + *(longlong *)((longlong)pvVar7 + 0x10);
      *(undefined8 *)((longlong)pvVar7 + 0x10) = 0;
    }
    pvVar7 = (void *)((longlong)pvVar7 + 0x18);
  } while( true );
}

// GetTopTag @ 1416a14f0

FTagData * __thiscall
UE::LLMPrivate::FLLMThreadState::GetTopTag(FLLMThreadState *this,ELLMTagSet param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTagData *pFVar5;
  
  iVar1 = *(int *)&this->TagStack[param_1].field_0x10;
  if (iVar1 == 0) {
    return (FTagData *)0x0;
  }
  uVar4 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar4 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTagData *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FTagData **)
          (*(longlong *)(this->TagStack + param_1) + -8 +
          (longlong)*(int *)&this->TagStack[param_1].field_0x10 * 8);
}

// IncrTag @ 1416a22a0

void __thiscall
UE::LLMPrivate::FLLMThreadState::IncrTag(FLLMThreadState *this,FTagData *param_1,long64 param_2)

{
  FThreadTagSizeData *pFVar1;
  TTuple<int,UE::LLMPrivate::FThreadTagSizeData> *pTVar2;
  int local_res8 [2];
  
  local_res8[0] = param_1->Index;
  pFVar1 = TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>
           ::Find(&this->Allocations,local_res8[0]);
  if (pFVar1 == (FThreadTagSizeData *)0x0) {
    pTVar2 = TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>
             ::AllocateMemoryForEmplace<int_&>(&this->Allocations,local_res8);
    *(int *)pTVar2 = local_res8[0];
    pFVar1 = (FThreadTagSizeData *)&pTVar2->field_0x8;
    *(undefined8 *)pFVar1 = 0;
    *(undefined8 *)&pTVar2->field_0x10 = 0;
  }
  pFVar1->Size = pFVar1->Size + param_2;
  pFVar1->TagData = param_1;
  return;
}

// LockTags @ 1416b1f10

void __thiscall UE::LLMPrivate::FLLMThreadState::LockTags(FLLMThreadState *this,bool param_1)

{
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x0001416b1f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&this->TagSection);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416b1f1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->TagSection);
  return;
}

// OnTagsResorted @ 1416b55f0

void __thiscall
UE::LLMPrivate::FLLMThreadState::OnTagsResorted(FLLMThreadState *this,FTagDataArray *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  void *pvVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  TTuple<int,UE::LLMPrivate::FThreadTagSizeData> *pTVar10;
  longlong *plVar11;
  longlong *plVar12;
  void *pvVar13;
  undefined1 local_res8 [8];
  int local_res18 [4];
  ForAnyElementType local_58;
  undefined8 local_48;
  
  lpCriticalSection = &this->TagSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar2 = (this->Allocations).Pairs.ArrayNum;
  local_48._0_4_ = 0;
  local_48 = 0;
  local_58.Data = (longlong *)0x0;
  local_58.Size = 0;
  if (-1 < (int)uVar2) {
    if (0 < (int)uVar2) {
      Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
                (0x10,8,uVar2,&local_58,0,(int *)((longlong)&local_48 + 4));
    }
    pvVar13 = (this->Allocations).Pairs.AllocatorInstance.Data;
    iVar3 = (this->Allocations).Pairs.ArrayNum;
    plVar11 = (longlong *)((longlong)pvVar13 + 8);
    pvVar1 = (void *)((longlong)pvVar13 + (longlong)iVar3 * 0x18);
    plVar12 = local_58.Data;
    iVar8 = (int)local_48;
    while( true ) {
      if ((this->Allocations).Pairs.ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<int,UE::LLMPrivate::FThreadTagSizeData>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pvVar13 == pvVar1) break;
      if ((plVar12 <= plVar11) && (plVar11 < plVar12 + (longlong)local_48._4_4_ * 2)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (iVar8 == local_48._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_48 + 4));
        plVar12 = local_58.Data;
      }
      lVar5 = *plVar11;
      lVar6 = plVar11[1];
      lVar9 = (longlong)iVar8;
      pvVar13 = (void *)((longlong)pvVar13 + 0x18);
      iVar8 = iVar8 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar8);
      plVar11 = plVar11 + 3;
      plVar12[lVar9 * 2] = lVar5;
      (plVar12 + lVar9 * 2)[1] = lVar6;
    }
    iVar3 = (this->Allocations).Pairs.ArrayMax;
    (this->Allocations).Pairs.ArrayNum = 0;
    if (iVar3 < 0) {
      Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->Allocations,0,
                 &(this->Allocations).Pairs.ArrayMax);
    }
    pvVar1 = local_58.Data;
    plVar12 = (longlong *)((longlong)local_58.Data + (longlong)(int)local_48 * 2 * 8);
    for (plVar11 = local_58.Data; plVar11 != plVar12; plVar11 = plVar11 + 2) {
      local_res18[0] = *(int *)(*plVar11 + 0x28);
      pTVar10 = TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>
                ::AllocateMemoryForEmplace<int_&>(&this->Allocations,local_res18);
      *(int *)pTVar10 = local_res18[0];
      lVar5 = plVar11[1];
      *(longlong *)&pTVar10->field_0x8 = *plVar11;
      *(longlong *)&pTVar10->field_0x10 = lVar5;
    }
    if (pvVar1 != (longlong *)0x0) {
      FLLMAllocator::Free(Allocator,pvVar1,local_58.Size);
    }
                    /* WARNING: Could not recover jumptable at 0x0001416b583d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// PopTag @ 1416b6750

void __thiscall UE::LLMPrivate::FLLMThreadState::PopTag(FLLMThreadState *this,ELLMTagSet param_1)

{
  uint uVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  FConstTagDataArray *pFVar3;
  void *_Dst;
  code *pcVar4;
  bool bVar5;
  
  lpCriticalSection = &this->TagSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar3 = this->TagStack + param_1;
  if (*(int *)&this->TagStack[param_1].field_0x10 < 1) {
    HandleAssert(true,
                 L"LLM check failed: %s [File:%s] [Line: %d]\r\nCalled FLLMThreadState::PopTag without a matching Push (stack was empty on pop)\r\n"
                );
    FWindowsPlatformMisc::RaiseException(1);
  }
  if (*(int *)&pFVar3->field_0x10 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar1 = *(int *)&pFVar3->field_0x10 - 1;
  _Dst = (void *)(*(longlong *)pFVar3 + (longlong)(int)uVar1 * 8);
  iVar2 = ~uVar1 + *(int *)&pFVar3->field_0x10;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar2 << 3);
  }
  *(int *)&pFVar3->field_0x10 = *(int *)&pFVar3->field_0x10 + -1;
                    /* WARNING: Could not recover jumptable at 0x0001416b6838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// PropagateChildSizesToParents @ 1416b7090

void __thiscall UE::LLMPrivate::FLLMThreadState::PropagateChildSizesToParents(FLLMThreadState *this)

{
  TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>
  *this_00;
  void *pvVar1;
  FTagData **ppFVar2;
  int iVar3;
  code *pcVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar5;
  int iVar6;
  FThreadTagSizeData *pFVar7;
  longlong lVar8;
  TTuple<int,UE::LLMPrivate::FThreadTagSizeData> *pTVar9;
  FTagData *pFVar10;
  FTagData **ppFVar11;
  int iVar12;
  void *pvVar13;
  undefined1 local_res8 [8];
  int local_res10 [2];
  LPCRITICAL_SECTION local_res18;
  FTagData *local_58;
  ForAnyElementType local_50;
  undefined8 local_40;
  
  local_res18 = (LPCRITICAL_SECTION)&this->TagSection;
  if (local_res18 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_res18);
  iVar3 = (this->Allocations).Pairs.ArrayNum;
  this_00 = &this->Allocations;
  pvVar13 = (this_00->Pairs).AllocatorInstance.Data;
  iVar6 = 0;
  iVar12 = 0;
  local_40 = 0;
  local_50.Data = (FTagData **)0x0;
  local_50.Size = 0;
  ppFVar11 = (FTagData **)0x0;
  pvVar1 = (void *)((longlong)pvVar13 + (longlong)iVar3 * 0x18);
  while( true ) {
    if ((this->Allocations).Pairs.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<int,UE::LLMPrivate::FThreadTagSizeData>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    lpCriticalSection = local_res18;
    if (pvVar13 == pvVar1) break;
    local_58 = FTagData::GetParent(*(FTagData **)((longlong)pvVar13 + 8));
    while ((local_58 != (FTagData *)0x0 &&
           (pFVar7 = TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>
                     ::Find(this_00,local_58->Index), pFVar7 == (FThreadTagSizeData *)0x0))) {
      if ((ppFVar11 <= &local_58) &&
         ((&local_58 < ppFVar11 + iVar12 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iVar6 == iVar12) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                          (0x808,&local_50,(int *)((longlong)&local_40 + 4));
        ppFVar11 = local_50.Data;
        iVar12 = local_40._4_4_;
      }
      lVar8 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      ppFVar11[lVar8] = local_58;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      local_58 = FTagData::GetParent(local_58);
    }
    pvVar13 = (void *)((longlong)pvVar13 + 0x18);
  }
  ppFVar2 = ppFVar11 + iVar6;
  for (; ppFVar11 != ppFVar2; ppFVar11 = ppFVar11 + 1) {
    pFVar10 = *ppFVar11;
    local_res10[0] = pFVar10->Index;
    pFVar7 = TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>
             ::Find(this_00,local_res10[0]);
    if (pFVar7 == (FThreadTagSizeData *)0x0) {
      pTVar9 = TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>
               ::AllocateMemoryForEmplace<int_&>(this_00,local_res10);
      *(int *)pTVar9 = local_res10[0];
      pFVar7 = (FThreadTagSizeData *)&pTVar9->field_0x8;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)&pTVar9->field_0x10 = 0;
    }
    pFVar7->TagData = pFVar10;
  }
  iVar3 = (this->Allocations).Pairs.ArrayNum;
  pvVar1 = (this_00->Pairs).AllocatorInstance.Data;
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 == -1) {
      if (local_50.Data != (FTagData **)0x0) {
        FLLMAllocator::Free(Allocator,local_50.Data,local_50.Size);
      }
                    /* WARNING: Could not recover jumptable at 0x0001416b735d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    pFVar10 = FTagData::GetParent(*(FTagData **)((longlong)pvVar1 + (longlong)iVar3 * 0x18 + 8));
    lVar8 = *(longlong *)((longlong)pvVar1 + (longlong)iVar3 * 0x18 + 0x10);
    if ((lVar8 != 0) && (pFVar10 != (FTagData *)0x0)) {
      pFVar7 = TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>
               ::Find(this_00,pFVar10->Index);
      if ((pFVar7 == (FThreadTagSizeData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                             ,0x141,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7->Size = pFVar7->Size + lVar8;
    }
    if ((iVar3 == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index != static_cast<SizeType>(-1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                           ,0x2c0,L"Incrementing an invalid iterator is illegal"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  } while( true );
}

// PushTag @ 1416b9600

void __thiscall
UE::LLMPrivate::FLLMThreadState::PushTag(FLLMThreadState *this,FTagData *param_1,ELLMTagSet param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTagData *local_res10;
  
  lpCriticalSection = &this->TagSection;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (ForAnyElementType *)(this->TagStack + param_2);
  if ((pFVar2->Data <= &local_res10) &&
     (&local_res10 <
      (FTagData **)((longlong)pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8))
     ) {
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
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(FTagData **)((longlong)pFVar2->Data + (longlong)iVar5 * 8) = local_res10;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// TrackAllocation @ 1416c2240

void __thiscall
UE::LLMPrivate::FLLMThreadState::TrackAllocation
          (FLLMThreadState *this,void *param_1,long64 param_2,ELLMTracker param_3,
          ELLMAllocType param_4,FTagData *param_5,FTagData *param_6,FTagData *param_7,
          FTagData *param_8,bool param_9)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->TagSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->AllocTypeAmounts[(int)param_4] = this->AllocTypeAmounts[(int)param_4] + param_2;
    if (param_5 != (FTagData *)0x0) {
      IncrTag(this,param_5,param_2);
    }
    if (param_8 != (FTagData *)0x0) {
      IncrTag(this,param_8,param_2);
    }
    if (param_5 != (FTagData *)0x0) {
      FTagData::GetContainingEnum(param_5);
    }
                    /* WARNING: Could not recover jumptable at 0x0001416c22ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// TrackFree @ 1416c2600

void __thiscall
UE::LLMPrivate::FLLMThreadState::TrackFree
          (FLLMThreadState *this,void *param_1,long64 param_2,ELLMTracker param_3,
          ELLMAllocType param_4,FTagData *param_5,FTagData *param_6,FTagData *param_7,
          FTagData *param_8,bool param_9)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->TagSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->AllocTypeAmounts[(int)param_4] = this->AllocTypeAmounts[(int)param_4] - param_2;
    if (param_5 != (FTagData *)0x0) {
      IncrTag(this,param_5,-param_2);
    }
    if (param_8 != (FTagData *)0x0) {
      IncrTag(this,param_8,-param_2);
    }
    if (param_5 != (FTagData *)0x0) {
      FTagData::GetContainingEnum(param_5);
    }
                    /* WARNING: Could not recover jumptable at 0x0001416c268d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// TrackMemory @ 1416c2860

void __thiscall
UE::LLMPrivate::FLLMThreadState::TrackMemory
          (FLLMThreadState *this,long64 param_1,ELLMTracker param_2,ELLMAllocType param_3,
          FTagData *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FThreadTagSizeData *pFVar1;
  TTuple<int,UE::LLMPrivate::FThreadTagSizeData> *pTVar2;
  int local_res8 [2];
  
  lpCriticalSection = &this->TagSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->AllocTypeAmounts[(int)param_3] = this->AllocTypeAmounts[(int)param_3] + param_1;
    local_res8[0] = param_4->Index;
    pFVar1 = TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>
             ::Find(&this->Allocations,local_res8[0]);
    if (pFVar1 == (FThreadTagSizeData *)0x0) {
      pTVar2 = TSortedMap<int,UE::LLMPrivate::FThreadTagSizeData,TSizedLLMAllocator<32>,TLess<int_const_>_>
               ::AllocateMemoryForEmplace<int_&>(&this->Allocations,local_res8);
      *(int *)pTVar2 = local_res8[0];
      pFVar1 = (FThreadTagSizeData *)&pTVar2->field_0x8;
      *(undefined8 *)pFVar1 = 0;
      *(undefined8 *)&pTVar2->field_0x10 = 0;
    }
    pFVar1->Size = pFVar1->Size + param_1;
    pFVar1->TagData = param_4;
                    /* WARNING: Could not recover jumptable at 0x0001416c28f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// TrackMoved @ 1416c2c10

void __thiscall
UE::LLMPrivate::FLLMThreadState::TrackMoved
          (FLLMThreadState *this,void *param_1,void *param_2,long64 param_3,ELLMTracker param_4,
          FTagData *param_5)

{
  if (param_5 == (FTagData *)0x0) {
    return;
  }
  do {
    if (param_5->bHasEnumTag != false) {
      return;
    }
    param_5 = FTagData::GetParent(param_5);
  } while (param_5 != (FTagData *)0x0);
  HandleAssert(true,
               L"LLM check failed: %s [File:%s] [Line: %d]\r\nTagData is not a descendent of an ELLMTag TagData. All TagDatas must be descendents of ELLMTag::CustomName if they are not descendets of any other ELLMTag\r\n"
              );
  FWindowsPlatformMisc::RaiseException(1);
  return;
}

