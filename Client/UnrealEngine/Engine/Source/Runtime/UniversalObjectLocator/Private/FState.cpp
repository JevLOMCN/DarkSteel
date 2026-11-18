// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 2

// ~FState @ 144345f80

void __thiscall `FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState::~FState(void *this)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  
  bVar3 = *(byte *)((longlong)this + 0x50);
  if (1 < (ulonglong)bVar3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar3])((longlong)this + 0x40);
  if (*(char *)((longlong)this + 0x38) != '\0') {
    if ((*(longlong *)((longlong)this + 0x20) != 0) &&
       (*(char *)(*(longlong *)((longlong)this + 0x20) + 0x68) == '\0')) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  }
  DestructItems<FUniversalObjectLocatorFragment,int>
            (*(FUniversalObjectLocatorFragment **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  plVar4 = *(longlong **)((longlong)this + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// ProcessNext @ 144348a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState::ProcessNext
          (void *this,FResolveResultData *param_1)

{
  byte bVar1;
  uint uVar2;
  TFutureState<UE::UniversalObjectLocator::FResolveResultData> *pTVar3;
  longlong lVar4;
  FFutureState *this_00;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  uint uVar8;
  atomic<int> aVar9;
  FFragmentType *pFVar10;
  void *pvVar11;
  TReferenceControllerBase<1> *pTVar12;
  FEvent *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined ***pppuVar16;
  char cVar17;
  uint uVar18;
  FUniversalObjectLocatorFragment *this_01;
  ulonglong uVar19;
  TReferenceControllerBase<1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  FResolveParams local_148;
  FResolveResultData local_128;
  undefined1 local_118 [8];
  TReferenceControllerBase<1> *local_110;
  undefined1 local_108 [12];
  atomic<int> aStack_fc;
  code *local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TReferenceControllerBase<1> *local_d8;
  undefined8 local_d0;
  TReferenceControllerBase<1> local_c8;
  byte local_b8;
  code *local_a8;
  undefined **local_98;
  undefined8 uStack_90;
  TReferenceControllerBase<1> *local_88;
  undefined ***local_80;
  FResolveResult local_78;
  FResolveResult local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  uVar2 = *(uint *)((longlong)this + 0x18);
  uVar18 = *(int *)((longlong)this + 0x58) + 1;
  *(uint *)((longlong)this + 0x58) = uVar18;
  local_148.Context = param_1->Object;
  if (uVar18 != uVar2 - 1) {
    *(byte *)((longlong)this + 0x5d) = (param_1->Flags).bWasLoaded;
  }
  if ((local_148.Context == (UObject *)0x0) && (uVar18 != 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((uVar18 == uVar2) || (bVar7)) {
    if (*(char *)((longlong)this + 0x38) == '\0') {
      local_60.Value._padding_ = (longlong)param_1->Object;
      local_60.Value._padding_ = *(longlong *)&param_1->Flags;
      local_60.Value.TypeIndex = 0;
      UE::UniversalObjectLocator::FResolveResult::operator=
                ((FResolveResult *)((longlong)this + 0x40),&local_60);
      uVar19 = (ulonglong)local_60.Value.TypeIndex;
      if ((1 < local_60.Value.TypeIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19] ==
          UE::Core::Private::TDestructorCaller<UE::UniversalObjectLocator::FResolveResultData>::
          Destruct) {
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar19])(&local_60);
      return;
    }
    param_1->Flags =
         (FResolveResultFlags)
         ((byte)param_1->Flags ^
         (*(char *)((longlong)this + 0x5d) * '\x02' ^ (byte)param_1->Flags) & 2);
    if (*(longlong *)((longlong)this + 0x20) == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(longlong *)((longlong)this + 0x20) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_00 = *(FFutureState **)((longlong)this + 0x20);
    if ((this_00->bComplete != (TAtomic<bool>)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0xcd,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar15 = *(undefined8 *)&param_1->Flags;
    this_00[1].Mutex.CriticalSection.Opaque1[0] = param_1->Object;
    *(undefined8 *)this_00[1].Mutex.CriticalSection.Opaque2 = uVar15;
    FFutureState::MarkComplete(this_00);
    return;
  }
  local_148.Flags = *(ELocatorResolveFlags *)((longlong)this + 0x5c);
  pTVar20 = (TReferenceControllerBase<1> *)0x0;
  local_148.ParameterBuffer = (FResolveParameterBuffer *)0x0;
  if (uVar18 != uVar2 - 1) {
    local_148.Flags = local_148.Flags & ~Unload;
  }
  uVar8 = 0;
  if ((int)uVar18 < (int)uVar2) {
    uVar8 = ~uVar18 >> 0x1f;
  }
  if (uVar8 == 0) {
    local_158 = (longlong)(int)uVar18;
    local_150 = (longlong)(int)uVar2;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_01 = (FUniversalObjectLocatorFragment *)
            ((longlong)(int)uVar18 * 0x20 + *(longlong *)((longlong)this + 0x10));
  pFVar10 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this_01->FragmentType);
  if ((pFVar10 == (FFragmentType *)0x0) || (this_01->bIsInitialized == 0)) {
    local_c8.SharedReferenceCount = (atomic<int>)((uint)local_c8.SharedReferenceCount & 0xfffffffc);
    local_c8._padding_ = 0;
    local_b8 = 0;
  }
  else {
    pvVar11 = FUniversalObjectLocatorFragment::GetPayload(this_01);
    (*(pFVar10->InstanceBindings).Resolve)((FResolveResult *)&local_c8,pvVar11,&local_148);
    if (local_b8 == 1) {
      if (local_c8._padding_ == 0) {
        cVar17 = '\0';
      }
      else {
        cVar17 = *(char *)(local_c8._padding_ + 0x68);
      }
      if (cVar17 == '\0') {
        bVar1 = *(byte *)((longlong)this + 0x50);
        if ((1 < (ulonglong)bVar1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TFuture<UE::UniversalObjectLocator::FResolveResultData>,UE::UniversalObjectLocator::FResolveResultData,TFuture<struct_UE::UniversalObjectLocator::FResolveResultData>_>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
          if (*(char *)((longlong)this + 0x38) != '\0') {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!AsyncResult.IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                               ,0xd3,L"");
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (*(char *)((longlong)this + 0x38) != '\0') {
              if (((*(longlong *)((longlong)this + 0x20) != 0) &&
                  (*(char *)(*(longlong *)((longlong)this + 0x20) + 0x68) == '\0')) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("State->IsComplete()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                     ,0x242,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
            }
          }
          pTVar12 = ::operator_new(0x90);
          if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
            *(undefined8 *)((longlong)this + 0x20) = 0x10;
            *(undefined8 *)((longlong)this + 0x28) = 0;
            pTVar12 = pTVar20;
          }
          else {
            pTVar12->SharedReferenceCount = (atomic<int>)0x1;
            pTVar12->WeakReferenceCount = (atomic<int>)0x1;
            pTVar12->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_V__TFutureState_UFResolveResultData_UniversalObjectLocator_UE_____00_SharedPointerInternals__6B_
            ;
            pTVar12[1]._padding_ = 0;
            pTVar12[1].SharedReferenceCount = (atomic<int>)0x0;
            pTVar12[1].WeakReferenceCount = (atomic<int>)0x0;
            pTVar12[2]._padding_ = 0;
            pTVar12[2].SharedReferenceCount = (atomic<int>)0x0;
            pTVar12[2].WeakReferenceCount = (atomic<int>)0x0;
            pTVar12[3]._padding_ = 0;
            pTVar12[3].SharedReferenceCount = (atomic<int>)0x0;
            pTVar12[3].WeakReferenceCount = (atomic<int>)0x0;
            pTVar12[4]._padding_ = 0;
            pTVar12[4].SharedReferenceCount = (atomic<int>)0x0;
            pTVar12[4].WeakReferenceCount = (atomic<int>)0x0;
            pTVar12[5]._padding_ = 0;
            pTVar12[5].SharedReferenceCount = (atomic<int>)0x0;
            pTVar12[5].WeakReferenceCount = (atomic<int>)0x0;
            pTVar12[6]._padding_ = 0;
            pTVar12[6].SharedReferenceCount = (atomic<int>)0x0;
            pTVar12[6].WeakReferenceCount = (atomic<int>)0x0;
            pTVar12[7]._padding_ = 0;
            pTVar12[7].SharedReferenceCount = (atomic<int>)0x0;
            pTVar12[7].WeakReferenceCount = (atomic<int>)0x0;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar12 + 1),4000);
            pTVar12[4]._padding_ = 0;
            pTVar12[6].SharedReferenceCount = (atomic<int>)0x0;
            pTVar12[6].WeakReferenceCount = (atomic<int>)0x0;
            pFVar13 = FGenericPlatformProcess::GetSynchEventFromPool(true);
            pTVar12[7]._padding_ = (longlong)pFVar13;
            *(undefined1 *)&pTVar12[7].SharedReferenceCount = 0;
            if ((pTVar12 + 1 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(TReferenceControllerBase<1> **)((longlong)this + 0x20) = pTVar12 + 1;
            *(TReferenceControllerBase<1> **)((longlong)this + 0x28) = pTVar12;
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar12);
          *(undefined1 *)((longlong)this + 0x38) = 1;
          *(undefined1 *)((longlong)this + 0x30) = 1;
          if ((*(longlong *)((longlong)this + 0x20) == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("State.IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                 ,0x283,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_78.Value._padding_ = *(longlong *)((longlong)this + 0x28);
          local_78.Value._padding_ = *(longlong *)((longlong)this + 0x20);
          if ((TReferenceControllerBase<1> *)local_78.Value._padding_ !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            ((TReferenceControllerBase<1> *)local_78.Value._padding_)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)((TReferenceControllerBase<1> *)local_78.Value._padding_)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          local_78.Value.TypeIndex = 1;
          UE::UniversalObjectLocator::FResolveResult::operator=
                    ((FResolveResult *)((longlong)this + 0x40),&local_78);
          uVar19 = (ulonglong)local_78.Value.TypeIndex;
          if ((1 < local_78.Value.TypeIndex) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar19] ==
              UE::Core::Private::
              TDestructorCaller<TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct)
          {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_78.Value._padding_);
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar19])();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        pTVar12 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
        pTVar21 = pTVar12;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          aVar6 = pTVar12->SharedReferenceCount;
          do {
            pTVar21 = pTVar20;
            if (aVar6 == (atomic<int>)0x0) goto LAB_144348e51;
            LOCK();
            aVar9 = pTVar12->SharedReferenceCount;
            bVar7 = aVar6 == aVar9;
            if (bVar7) {
              pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
              aVar9 = aVar6;
            }
            UNLOCK();
            aVar6 = aVar9;
          } while (!bVar7);
          pTVar20 = *(TReferenceControllerBase<1> **)this;
          pTVar21 = pTVar12;
        }
LAB_144348e51:
        if ((pTVar20 != this) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("SharedThis.Get() == this",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x67f,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x416,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x26c,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
          local_80 = (undefined ***)0x0;
          local_98 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<``FUniversalObjectLocator::ResolveAsyncImpl'::`2'::FState::ProcessNext'::`2'::<lambda_1>,1,0>
                      ::_vftable_;
          uStack_90 = pTVar20;
          local_88 = pTVar21;
        }
        else {
          LOCK();
          pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
          UNLOCK();
          local_80 = (undefined ***)0x0;
          local_98 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<``FUniversalObjectLocator::ResolveAsyncImpl'::`2'::FState::ProcessNext'::`2'::<lambda_1>,1,0>
                      ::_vftable_;
          uStack_90 = pTVar20;
          local_88 = pTVar21;
          LOCK();
          pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_80 = (undefined ***)0x0;
        local_98 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<``FUniversalObjectLocator::ResolveAsyncImpl'::`2'::FState::ProcessNext'::`2'::<lambda_1>,1,0>
                    ::_vftable_;
        local_a8 = UE::Core::Private::Function::
                   TFunctionRefCaller<``FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState::ProcessNext'::__l2::<lambda_1>,void,UE::UniversalObjectLocator::FResolveResultData_const_&>
                   ::Call;
        pTVar12 = &local_c8;
        if (local_b8 != 1) {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
        }
        uStack_90 = pTVar20;
        local_88 = pTVar21;
        if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
          if ((local_b8 != 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UE::Core::Private::Function::CheckCallable(local_a8);
          pcVar5 = local_a8;
          pppuVar16 = &local_98;
          if (local_80 != (undefined ***)0x0) {
            pppuVar16 = local_80;
          }
          uVar15 = (*(code *)(*pppuVar16)[1])();
          (*pcVar5)(uVar15,&local_c8);
        }
        else {
          pTVar3 = ((TSharedPtr<TFutureState<UE::UniversalObjectLocator::FResolveResultData>,1> *)
                   &pTVar12->_padding_)->Object;
          if ((pTVar3 == (TFutureState<UE::UniversalObjectLocator::FResolveResultData> *)0x0) ||
             ((char)pTVar3->_padding_ == '\0')) {
            uStack_90._0_4_ = SUB84(pTVar20,0);
            uStack_90._4_4_ = (undefined4)((ulonglong)pTVar20 >> 0x20);
            local_f8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<``FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState::ProcessNext'::__l2::<lambda_1>,void,UE::UniversalObjectLocator::FResolveResultData_const_&>
                          ::Call;
            local_a8 = (code *)0x0;
            local_d0 = 0;
            local_e8 = 0x50bc3f48;
            uStack_e4 = 1;
            uStack_e0 = (undefined4)uStack_90;
            uStack_dc = uStack_90._4_4_;
            local_d8 = pTVar21;
            TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::
            Then<_UE::UniversalObjectLocator::FResolveResult::AsyncGet_::__l10::<lambda_1>_>
                      ((TFutureBase<UE::UniversalObjectLocator::FResolveResultData> *)pTVar12,
                       local_118,local_f8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_110);
          }
          else {
            if (((TSharedPtr<TFutureState<UE::UniversalObjectLocator::FResolveResultData>,1> *)
                &pTVar12->_padding_)->Object ==
                (TFutureState<UE::UniversalObjectLocator::FResolveResultData> *)0x0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("State.IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                                 ,0x155,L"");
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((((TSharedPtr<TFutureState<UE::UniversalObjectLocator::FResolveResultData>,1> *)
                   &pTVar12->_padding_)->Object ==
                   (TFutureState<UE::UniversalObjectLocator::FResolveResultData> *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            pTVar3 = ((TSharedPtr<TFutureState<UE::UniversalObjectLocator::FResolveResultData>,1> *)
                     &pTVar12->_padding_)->Object;
            while ((char)pTVar3->_padding_ == '\0') {
              (**(code **)(*(longlong *)pTVar3->_padding_ + 0x20))
                        ((longlong *)pTVar3->_padding_,0xffffffff,0);
            }
            UE::Core::Private::Function::CheckCallable(local_a8);
            pcVar5 = local_a8;
            pppuVar16 = &local_98;
            if (local_80 != (undefined ***)0x0) {
              pppuVar16 = local_80;
            }
            puVar14 = (undefined8 *)(*(code *)(*pppuVar16)[1])();
            if (pcVar5 == UE::Core::Private::Function::
                          TFunctionRefCaller<``FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState::ProcessNext'::__l2::<lambda_1>,void,UE::UniversalObjectLocator::FResolveResultData_const_&>
                          ::Call) {
              local_128.Object = *(UObject **)(pTVar3->Result).Pad;
              local_128.Flags = (FResolveResultFlags)(pTVar3->Result).Pad[8];
              local_128._9_1_ = (pTVar3->Result).Pad[9];
              local_128._10_1_ = (pTVar3->Result).Pad[10];
              local_128._11_1_ = (pTVar3->Result).Pad[0xb];
              local_128._12_1_ = (pTVar3->Result).Pad[0xc];
              local_128._13_1_ = (pTVar3->Result).Pad[0xd];
              local_128._14_1_ = (pTVar3->Result).Pad[0xe];
              local_128._15_1_ = (pTVar3->Result).Pad[0xf];
              ProcessNext((void *)*puVar14,&local_128);
            }
            else {
              (*pcVar5)(puVar14,&pTVar3->Result);
            }
          }
        }
        if (local_a8 != (code *)0x0) {
          pppuVar16 = &local_98;
          if (local_80 != (undefined ***)0x0) {
            pppuVar16 = local_80;
          }
          (*(code *)(*pppuVar16)[2])();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21)
        ;
        goto LAB_1443491c7;
      }
    }
  }
  pTVar12 = &local_c8;
  if (local_b8 != 1) {
    pTVar12 = pTVar20;
  }
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    if ((local_b8 != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_108._0_4_ = (undefined4)local_c8._padding_;
    local_108._4_4_ = local_c8._padding_._4_4_;
    local_108._8_4_ = local_c8.SharedReferenceCount;
  }
  else {
    if (pTVar12->_padding_ == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x155,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pTVar12->_padding_ == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar4 = pTVar12->_padding_;
    while (*(char *)(lVar4 + 0x68) == '\0') {
      (**(code **)(**(longlong **)(lVar4 + 0x60) + 0x20))(*(longlong **)(lVar4 + 0x60),0xffffffff,0)
      ;
    }
    local_c8.WeakReferenceCount = *(atomic<int> *)(lVar4 + 0x7c);
    local_108._0_4_ = *(undefined4 *)(lVar4 + 0x70);
    local_108._4_4_ = *(undefined4 *)(lVar4 + 0x74);
    local_108._8_4_ = *(atomic<int> *)(lVar4 + 0x78);
  }
  aStack_fc = local_c8.WeakReferenceCount;
  ProcessNext(this,(FResolveResultData *)local_108);
LAB_1443491c7:
  uVar19 = (ulonglong)local_b8;
  if ((1 < local_b8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar19])(&local_c8);
  return;
}

