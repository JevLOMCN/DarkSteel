// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FTrackedActivity @ 1419190d0

FTrackedActivity * __thiscall
FTrackedActivity::FTrackedActivity
          (FTrackedActivity *this,wchar_t *param_1,wchar_t *param_2,ETrackedActivityLight param_3,
          EType param_4,int param_5)

{
  FTrackedActivityManager *this_00;
  FActivity *pFVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this_00 = FTrackedActivityManager::Get();
  pFVar1 = FTrackedActivityManager::Create(this_00,param_1,param_2,param_3,param_4,param_5);
  this->Internal = pFVar1;
  return this;
}

// ~FTrackedActivity @ 14191c930

void __thiscall FTrackedActivity::~FTrackedActivity(FTrackedActivity *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FTrackedActivityManager *this_00;
  
  this_00 = FTrackedActivityManager::Get();
  FTrackedActivityManager::Destroy(this_00,this->Internal);
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014191c96f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// GetEngineActivity @ 1419468b0

FTrackedActivity * __cdecl FTrackedActivity::GetEngineActivity(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FTrackedActivity *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FTrackedActivityManager *this;
  FActivity *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  
  if ((::_TSS0 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c)) || (_Init_thread_header(&::_TSS0), ::_TSS0 != -1)) goto LAB_1419468d7;
  pTVar7 = ::operator_new(0x28);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar6 = (FTrackedActivity *)&DAT_00000010;
LAB_141946a2d:
    if (((pFVar6->_padding_ == 0) || (pFVar6->_padding_ == 0)) ||
       (*(int *)(pFVar6->_padding_ + 8) < 1)) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar6->_padding_ = (longlong)pFVar6;
      if (pTVar9 != (TReferenceControllerBase<1> *)pFVar6->_padding_) {
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)pFVar6->_padding_;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        pFVar6->_padding_ = (longlong)pTVar9;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    }
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTrackedActivity___00_SharedPointerInternals__6B_;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    this = FTrackedActivityManager::Get();
    pFVar8 = FTrackedActivityManager::Create(this,L"Status",L"Unknown",None,Activity,0);
    pFVar6 = (FTrackedActivity *)(pTVar7 + 1);
    pTVar7[2]._padding_ = (longlong)pFVar8;
    pTVar9 = pTVar7;
    if (pFVar6 != (FTrackedActivity *)0x0) goto LAB_141946a2d;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FTrackedActivity *)(*pcVar4)();
      return pFVar6;
    }
  }
  ::A.Object = pFVar6;
  ::A.SharedReferenceCount.ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  atexit(`FTrackedActivity::GetEngineActivity'::__l2::_dynamic_atexit_destructor_for__A__);
  _Init_thread_footer(&::_TSS0);
LAB_1419468d7:
  if ((::A.Object == (FTrackedActivity *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FTrackedActivity *)(*pcVar4)();
    return pFVar6;
  }
  return ::A.Object;
}

// GetIOActivity @ 141947e80

FTrackedActivity * __cdecl FTrackedActivity::GetIOActivity(void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FTrackedActivity *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FTrackedActivityManager *this;
  FActivity *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  
  if ((::_TSS0 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c)) || (_Init_thread_header(&::_TSS0), ::_TSS0 != -1)) goto LAB_141947ea7;
  pTVar7 = ::operator_new(0x28);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar6 = (FTrackedActivity *)&DAT_00000010;
LAB_141948001:
    if (((pFVar6->_padding_ == 0) || (pFVar6->_padding_ == 0)) ||
       (*(int *)(pFVar6->_padding_ + 8) < 1)) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar6->_padding_ = (longlong)pFVar6;
      if (pTVar9 != (TReferenceControllerBase<1> *)pFVar6->_padding_) {
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)pFVar6->_padding_;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        pFVar6->_padding_ = (longlong)pTVar9;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    }
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTrackedActivity___00_SharedPointerInternals__6B_;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    this = FTrackedActivityManager::Get();
    pFVar8 = FTrackedActivityManager::Create(this,L"I/O",L"Idle",None,Activity,1);
    pFVar6 = (FTrackedActivity *)(pTVar7 + 1);
    pTVar7[2]._padding_ = (longlong)pFVar8;
    pTVar9 = pTVar7;
    if (pFVar6 != (FTrackedActivity *)0x0) goto LAB_141948001;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FTrackedActivity *)(*pcVar4)();
      return pFVar6;
    }
  }
  ::A.Object = pFVar6;
  ::A.SharedReferenceCount.ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  atexit(`FTrackedActivity::GetIOActivity'::__l2::_dynamic_atexit_destructor_for__A__);
  _Init_thread_footer(&::_TSS0);
LAB_141947ea7:
  if ((::A.Object == (FTrackedActivity *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FTrackedActivity *)(*pcVar4)();
    return pFVar6;
  }
  return ::A.Object;
}

// Pop @ 14195acb0

void __thiscall FTrackedActivity::Pop(FTrackedActivity *this)

{
  uint uVar1;
  FActivity *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTrackedActivityManager *this_00;
  
  this_00 = FTrackedActivityManager::Get();
  pFVar2 = this->Internal;
  if (this_00 == (FTrackedActivityManager *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  iVar5 = (pFVar2->Stack).ArrayNum;
  uVar1 = iVar5 - 1;
  if (iVar5 < (int)uVar1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,-1,&(pFVar2->Stack).AllocatorInstance,&(pFVar2->Stack).ArrayNum,
                       &(pFVar2->Stack).ArrayMax);
    DefaultConstructItems<FTrackedActivityManager::FInfo,int>
              ((pFVar2->Stack).AllocatorInstance.Data + (longlong)iVar5 * 0x18,-1);
  }
  else {
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((int)uVar1 < iVar5) {
      TArray<FTrackedActivityManager::FInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (&pFVar2->Stack,uVar1,1);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&(pFVar2->Stack).AllocatorInstance,(pFVar2->Stack).ArrayNum,
                 &(pFVar2->Stack).ArrayMax);
    }
  }
  FTrackedActivityManager::SendEvent(this_00,Changed,pFVar2);
  if (this_00 != (FTrackedActivityManager *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  return;
}

// Push @ 14195eb60

/* WARNING: Removing unreachable block (ram,0x00014195ecc3) */

uint __thiscall
FTrackedActivity::Push
          (FTrackedActivity *this,wchar_t *param_1,bool param_2,ETrackedActivityLight param_3)

{
  int *piVar1;
  FActivity *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FTrackedActivityManager *this_00;
  FString local_38;
  FScriptContainerElement local_28;
  FScriptContainerElement local_27;
  
  this_00 = FTrackedActivityManager::Get();
  pFVar2 = this->Internal;
  if ((this_00 == (FTrackedActivityManager *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  uVar6 = (pFVar2->Stack).ArrayNum;
  ::FString::FString(&local_38,param_1);
  pFVar3 = (pFVar2->Stack).AllocatorInstance.Data;
  local_28 = (FScriptContainerElement)param_3;
  local_27 = (FScriptContainerElement)param_2;
  if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(pFVar2->Stack).ArrayMax * 0x18))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  iVar7 = (pFVar2->Stack).ArrayNum;
  piVar1 = &(pFVar2->Stack).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->Stack).AllocatorInstance,piVar1);
  }
  (pFVar2->Stack).ArrayNum = iVar7 + 1;
  pFVar3 = (pFVar2->Stack).AllocatorInstance.Data + (longlong)iVar7 * 0x18;
  *(undefined8 *)pFVar3 = 0;
  *(FScriptContainerElement **)pFVar3 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar3 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar3 + 0xc) = local_38.Data.ArrayMax;
  pFVar3[0x10] = local_28;
  pFVar3[0x11] = local_27;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FTrackedActivityManager::SendEvent(this_00,Changed,pFVar2);
  if (this_00 != (FTrackedActivityManager *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  return uVar6;
}

// RegisterEventListener @ 1419620b0

void __cdecl
FTrackedActivity::RegisterEventListener
          (TUniqueFunction<void___cdecl(FTrackedActivity::EEvent,FTrackedActivity::FInfo_const_&)>
           *param_1,uint param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  FTrackedActivityManager *lpCriticalSection;
  
  lpCriticalSection = FTrackedActivityManager::Get();
  if (*(longlong *)&lpCriticalSection->EventFunc != 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("!EventFunc",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\TrackedActivity.cpp"
                        ,0x9a,
                        L"TrackedActivity system is only supporting one event listener at the time. Please add support"
                       );
    if (bVar16) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar13 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined4 *)&lpCriticalSection->EventFunc;
  uVar3 = *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x4;
  uVar4 = *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x8;
  uVar5 = *(undefined4 *)&(lpCriticalSection->EventFunc).field_0xc;
  uVar6 = *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x10;
  uVar7 = *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x14;
  uVar8 = *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x18;
  uVar9 = *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x1c;
  uVar14 = *(undefined8 *)&(lpCriticalSection->EventFunc).field_0x20;
  uVar15 = *(undefined8 *)&(lpCriticalSection->EventFunc).field_0x28;
  *(undefined8 *)&lpCriticalSection->EventFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(lpCriticalSection->EventFunc).field_0x8 = uVar13;
  uVar10 = *(undefined4 *)&param_1->field_0x14;
  uVar11 = *(undefined4 *)&param_1->field_0x18;
  uVar12 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x14 = uVar10;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x18 = uVar11;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x1c = uVar12;
  uVar10 = *(undefined4 *)&param_1->field_0x24;
  uVar11 = *(undefined4 *)&param_1->field_0x28;
  uVar12 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x24 = uVar10;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x28 = uVar11;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x2c = uVar12;
  *(undefined4 *)param_1 = uVar2;
  *(undefined4 *)&param_1->field_0x4 = uVar3;
  *(undefined4 *)&param_1->field_0x8 = uVar4;
  *(undefined4 *)&param_1->field_0xc = uVar5;
  *(undefined4 *)&param_1->field_0x10 = uVar6;
  *(undefined4 *)&param_1->field_0x14 = uVar7;
  *(undefined4 *)&param_1->field_0x18 = uVar8;
  *(undefined4 *)&param_1->field_0x1c = uVar9;
  *(undefined8 *)&param_1->field_0x20 = uVar14;
  *(undefined8 *)&param_1->field_0x28 = uVar15;
  lpCriticalSection->EventFuncMaxDepth = param_2;
                    /* WARNING: Could not recover jumptable at 0x000141962145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// TraverseActivities @ 1419750f0

void __cdecl
FTrackedActivity::TraverseActivities
          (TFunction<void___cdecl(FTrackedActivity::FInfo_const_&)> *param_1)

{
  FTrackedActivityManager *this;
  
  this = FTrackedActivityManager::Get();
  FTrackedActivityManager::TraverseActivities(this,param_1);
  return;
}

// UnregisterEventListener @ 14197aa50

void __cdecl FTrackedActivity::UnregisterEventListener(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  FTrackedActivityManager *lpCriticalSection;
  longlong *plVar12;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  longlong *plStack_10;
  
  lpCriticalSection = FTrackedActivityManager::Get();
  if (*(longlong *)&lpCriticalSection->EventFunc == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("EventFunc",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\TrackedActivity.cpp"
                        ,0xa3,L"TrackedActivity system is not currently registered");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar9 = local_28;
  lVar7 = *(longlong *)&lpCriticalSection->EventFunc;
  uVar8 = *(undefined8 *)&(lpCriticalSection->EventFunc).field_0x8;
  uVar2 = *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x10;
  uVar3 = *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x14;
  uVar4 = *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x18;
  uVar5 = *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x1c;
  uVar6 = *(undefined8 *)&(lpCriticalSection->EventFunc).field_0x20;
  plStack_10 = *(longlong **)&(lpCriticalSection->EventFunc).field_0x28;
  *(undefined8 *)&lpCriticalSection->EventFunc = 0;
  *(undefined8 *)&(lpCriticalSection->EventFunc).field_0x8 = in_stack_ffffffffffffffd0;
  uVar10 = (undefined4)local_18;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x10 = local_28;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x14 = uStack_24;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x18 = uStack_20;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x1c = uStack_1c;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x20 = (undefined4)local_18;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x24 = local_18._4_4_;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x28 = 0;
  *(undefined4 *)&(lpCriticalSection->EventFunc).field_0x2c = 0;
  local_28 = uVar2;
  uStack_24 = uVar3;
  uStack_20 = uVar4;
  uStack_1c = uVar5;
  local_18 = uVar6;
  if (lVar7 != 0) {
    plVar12 = (longlong *)&local_28;
    if (plStack_10 != (longlong *)0x0) {
      plVar12 = plStack_10;
    }
    (**(code **)(*plVar12 + 0x10))(uVar10,uVar9,uVar2,(int)lVar7,lVar7,uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014197ab04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Update @ 14197b6d0

void __thiscall FTrackedActivity::Update(FTrackedActivity *this,wchar_t *param_1,uint param_2)

{
  int iVar1;
  FActivity *pFVar2;
  code *pcVar3;
  bool bVar4;
  FTrackedActivityManager *this_00;
  uint uVar5;
  
  this_00 = FTrackedActivityManager::Get();
  pFVar2 = this->Internal;
  if ((this_00 == (FTrackedActivityManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  iVar1 = (pFVar2->Stack).ArrayNum;
  if (param_2 == 0xffffffff) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
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
    param_2 = (pFVar2->Stack).ArrayNum - 1;
  }
  else {
    uVar5 = 0;
    if ((int)param_2 < iVar1) {
      uVar5 = ~param_2 >> 0x1f;
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
  }
  ::FString::operator=
            ((FString *)((pFVar2->Stack).AllocatorInstance.Data + (longlong)(int)param_2 * 0x18),
             param_1);
  FTrackedActivityManager::SendEvent(this_00,Changed,pFVar2);
  if (this_00 != (FTrackedActivityManager *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  return;
}

// Update @ 14197b820

void __thiscall
FTrackedActivity::Update
          (FTrackedActivity *this,wchar_t *param_1,ETrackedActivityLight param_2,uint param_3)

{
  FScriptContainerElement *this_00;
  int iVar1;
  FActivity *pFVar2;
  code *pcVar3;
  bool bVar4;
  FTrackedActivityManager *this_01;
  uint uVar5;
  
  this_01 = FTrackedActivityManager::Get();
  pFVar2 = this->Internal;
  if ((this_01 == (FTrackedActivityManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_01);
  iVar1 = (pFVar2->Stack).ArrayNum;
  if (param_3 == 0xffffffff) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
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
    param_3 = (pFVar2->Stack).ArrayNum - 1;
  }
  else {
    uVar5 = 0;
    if ((int)param_3 < iVar1) {
      uVar5 = ~param_3 >> 0x1f;
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
  }
  this_00 = (pFVar2->Stack).AllocatorInstance.Data + (longlong)(int)param_3 * 0x18;
  ::FString::operator=((FString *)this_00,param_1);
  *(ETrackedActivityLight *)
   &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_00[0x10].field_0x0)->AllocatorInstance).
    Data = param_2;
  FTrackedActivityManager::SendEvent(this_01,Changed,pFVar2);
  if (this_01 != (FTrackedActivityManager *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_01);
  }
  return;
}

// Update @ 14197b990

void __thiscall
FTrackedActivity::Update(FTrackedActivity *this,ETrackedActivityLight param_1,uint param_2)

{
  int iVar1;
  FActivity *pFVar2;
  code *pcVar3;
  bool bVar4;
  FTrackedActivityManager *this_00;
  uint uVar5;
  
  this_00 = FTrackedActivityManager::Get();
  pFVar2 = this->Internal;
  if ((this_00 == (FTrackedActivityManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this_00);
  iVar1 = (pFVar2->Stack).ArrayNum;
  if (param_2 == 0xffffffff) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
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
    param_2 = (pFVar2->Stack).ArrayNum - 1;
  }
  else {
    uVar5 = 0;
    if ((int)param_2 < iVar1) {
      uVar5 = ~param_2 >> 0x1f;
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
  }
  (pFVar2->Stack).AllocatorInstance.Data[(longlong)(int)param_2 * 0x18 + 0x10] =
       (FScriptContainerElement)param_1;
  FTrackedActivityManager::SendEvent(this_00,Changed,pFVar2);
  if (this_00 != (FTrackedActivityManager *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  return;
}

