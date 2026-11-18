// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 2

// Deserialize<wchar_t> @ 144611450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_NestedVariant>::Deserialize<wchar_t>
          (TJsonReader<wchar_t> *param_1,StackState *param_2,EFlags param_3)

{
  void *_Src;
  TReferenceControllerBase<1> *pTVar1;
  TNestedVariantArray<FString,bool,__int64,double,FString> *pTVar2;
  TNestedVariantMap<FString,bool,__int64,double,FString> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> *pTVar11;
  longlong *plVar12;
  StackState *pSVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  atomic<int> *paVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStackY_218 [32];
  TArray<TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1>,TSizedDefaultAllocator<32>_>
  local_1c8;
  StackState *local_1b8;
  FSharedReferencer<1> FStack_1b0;
  FString local_1a8;
  EJsonNotation local_198 [4];
  TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> local_188;
  EFlags local_178;
  TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> local_168;
  TPairInitializer<FString_const_&,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_const_&>
  local_158;
  FSharedReferencer<1> local_148;
  undefined8 local_140;
  FSharedReferencer<1> local_138;
  undefined8 local_130;
  FSharedReferencer<1> local_128;
  undefined8 local_120;
  FSharedReferencer<1> local_118;
  FString *local_110;
  TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
  *local_108;
  TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> local_100;
  TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> local_f0;
  TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> local_e0;
  void *local_d0 [2];
  TNestedVariantArray<FString,bool,__int64,double,FString> *local_c0;
  TReferenceControllerBase<1> *pTStack_b8;
  TNestedVariantMap<FString,bool,__int64,double,FString> *local_b0;
  TReferenceControllerBase<1> *pTStack_a8;
  TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
  local_a0;
  TNestedVariantMap<FString,bool,__int64,double,FString> *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  ulonglong local_78;
  undefined1 local_70 [16];
  byte local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pSVar13 = (StackState *)0x0;
  local_1b8 = (StackState *)0x0;
  FStack_1b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  local_a0._padding_ = local_a0._padding_ & 0xffffffffffffff00;
  local_a0._16_8_ = local_a0._16_8_ & 0xffffffffffffff00;
  local_178 = param_3;
  bVar5 = TJsonReader<wchar_t>::ReadNext(param_1,local_198);
  if (bVar5) {
    do {
      puVar10 = (undefined8 *)(**(code **)(param_1->_padding_ + 8))(param_1);
      local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.Data.ArrayNum = *(int *)(puVar10 + 1);
      lVar15 = (longlong)local_1a8.Data.ArrayNum;
      _Src = (void *)*puVar10;
      if (local_1a8.Data.ArrayNum == 0) {
        local_1a8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1a8.Data.ArrayNum,0,(ForAnyElementType *)&local_1a8,
                   local_1a8.Data.ArrayNum,&local_1a8.Data.ArrayMax);
        memcpy(local_1a8.Data.AllocatorInstance.Data,_Src,lVar15 * 2);
      }
      pTVar1 = pTStack_80;
      local_78 = local_78 & 0xffffffffffffff00;
      uVar14 = local_78;
      local_88 = (TNestedVariantMap<FString,bool,__int64,double,FString> *)
                 ((ulonglong)local_88 & 0xffffffffffffff00);
      pTVar3 = local_88;
      local_70[0] = 0;
      local_78 = local_a0._16_8_;
      uVar16 = local_a0._16_8_ & 0xff;
      local_60 = 0;
      local_a0._16_8_ = uVar14;
      local_88 = (TNestedVariantMap<FString,bool,__int64,double,FString> *)local_a0._padding_;
      pTStack_80 = (TReferenceControllerBase<1> *)local_a0._padding_;
      local_a0._padding_ = (longlong)pTVar3;
      local_a0._padding_ = (longlong)pTVar1;
      if ((5 < uVar16) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar16] !=
          UE::Core::Private::TDestructorCaller<bool>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar16])(&local_88);
      }
      uVar14 = (ulonglong)local_60;
      if ((5 < uVar14) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14] !=
          UE::Core::Private::TDestructorCaller<bool>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(local_70);
      }
      iVar9 = 0;
      switch(local_198[0]) {
      case ObjectStart:
        if (pSVar13 != (StackState *)0x0) {
          if ((pSVar13 == (StackState *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          local_188.Object = local_1b8;
          local_188.SharedReferenceCount.ReferenceController = FStack_1b0.ReferenceController;
          if (FStack_1b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_1b0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_1b0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_1b8 == (StackState *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (((local_1c8.AllocatorInstance.Data <= &local_188) &&
              (&local_188 <
               (TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> *)
               (local_1c8.AllocatorInstance.Data + (longlong)local_1c8.ArrayMax * 0x10))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar9 = local_1c8.ArrayNum;
          if (local_1c8.ArrayNum == local_1c8.ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_1c8.AllocatorInstance,&local_1c8.ArrayMax);
          }
          local_1c8.ArrayNum = iVar9 + 1;
          *(StackState **)&local_1c8.AllocatorInstance.Data[(longlong)iVar9 * 0x10].field_0x0 =
               local_188.Object;
          *(TReferenceControllerBase<1> **)
           (local_1c8.AllocatorInstance.Data + (longlong)iVar9 * 0x10 + 8) =
               local_188.SharedReferenceCount.ReferenceController;
          if (local_188.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_188.SharedReferenceCount.ReferenceController);
        }
        pTVar11 = MakeShared<FJsonSerializerPolicy_NestedVariant::StackState,1>(&local_100);
        local_148.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
        local_1b8 = pTVar11->Object;
        if (local_148.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_148.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_148.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_158.Value =
             (TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
              *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1b0,&local_148);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_148.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_100.SharedReferenceCount.ReferenceController);
        pSVar13 = local_1b8;
        if ((local_1b8 == (StackState *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar9 = local_1a8.Data.ArrayNum + -1;
        if (local_1a8.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        ::FString::AssignRange
                  (&pSVar13->Identifier,(wchar_t *)local_1a8.Data.AllocatorInstance.Data,iVar9);
        if ((pSVar13 == (StackState *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        FJsonSerializerPolicy_NestedVariant::ReadObjectStart(pSVar13);
        break;
      case ObjectEnd:
        if (0 < local_1c8.ArrayNum) {
          if ((pSVar13 == (StackState *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar8 = (pSVar13->Identifier).Data.ArrayNum;
          iVar18 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar18 = iVar9;
          }
          ::FString::AssignRange
                    (&local_1a8,(wchar_t *)(pSVar13->Identifier).Data.AllocatorInstance.Data,iVar18)
          ;
          if ((pSVar13 == (StackState *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (((pSVar13->Object).Object ==
               (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pTVar3 = (pSVar13->Object).Object;
          pTVar1 = (pSVar13->Object).SharedReferenceCount.ReferenceController;
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pTVar3 == (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          uVar14 = local_a0._16_8_ & 0xff;
          if ((5 < uVar14) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar14] ==
              UE::Core::Private::
              TDestructorCaller<TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>_>
              ::Destruct) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_a0._padding_);
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar14])(&local_a0);
          }
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_a0.TypeIndex = 5;
          local_a0._padding_ = (longlong)pTVar3;
          local_a0._padding_ = (longlong)pTVar1;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          iVar9 = local_1c8.ArrayNum;
          if (local_1c8.ArrayNum < 1) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            iVar9 = local_1c8.ArrayNum;
          }
          pTVar1 = *(TReferenceControllerBase<1> **)
                    (local_1c8.AllocatorInstance.Data + (longlong)iVar9 * 0x10 + -8);
          pSVar13 = *(StackState **)
                     &local_1c8.AllocatorInstance.Data[(longlong)iVar9 * 0x10 + -0x10].field_0x0;
          if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
            paVar17 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar17 = &pTVar1->SharedReferenceCount;
            LOCK();
            *paVar17 = (atomic<int>)((int)*paVar17 + 1);
            UNLOCK();
            iVar9 = local_1c8.ArrayNum;
          }
          pFVar19 = local_1c8.AllocatorInstance.Data + (longlong)(iVar9 + -1) * 0x10;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(pFVar19 + 8));
          iVar9 = (local_1c8.ArrayNum - (iVar9 + -1)) + -1;
          if (iVar9 != 0) {
            memmove(pFVar19,pFVar19 + 0x10,(longlong)iVar9 << 4);
          }
          iVar9 = local_1c8.ArrayNum + -1;
          local_1c8.ArrayNum = iVar9;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&local_1c8.AllocatorInstance,iVar9,&local_1c8.ArrayMax);
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar17 = (atomic<int>)((int)*paVar17 + 1);
            UNLOCK();
          }
          local_140 = 0;
          local_1b8 = pSVar13;
          local_138.ReferenceController = pTVar1;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1b0,&local_138);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_138.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          pSVar13 = local_1b8;
          param_3 = local_178;
          goto switchD_14461165a_caseD_7;
        }
        break;
      case ArrayStart:
        if (pSVar13 != (StackState *)0x0) {
          if ((pSVar13 == (StackState *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          local_168.Object = local_1b8;
          local_168.SharedReferenceCount.ReferenceController = FStack_1b0.ReferenceController;
          if (FStack_1b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_1b0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_1b0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_1b8 == (StackState *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (((local_1c8.AllocatorInstance.Data <= &local_168) &&
              (&local_168 <
               (TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> *)
               (local_1c8.AllocatorInstance.Data + (longlong)local_1c8.ArrayMax * 0x10))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar8 = local_1c8.ArrayNum;
          if (local_1c8.ArrayNum == local_1c8.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_1c8.AllocatorInstance,&local_1c8.ArrayMax);
          }
          local_1c8.ArrayNum = iVar8 + 1;
          *(StackState **)&local_1c8.AllocatorInstance.Data[(longlong)iVar8 * 0x10].field_0x0 =
               local_168.Object;
          *(TReferenceControllerBase<1> **)
           (local_1c8.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) =
               local_168.SharedReferenceCount.ReferenceController;
          if (local_168.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_168.SharedReferenceCount.ReferenceController);
        }
        pTVar11 = MakeShared<FJsonSerializerPolicy_NestedVariant::StackState,1>(&local_f0);
        local_128.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
        local_1b8 = pTVar11->Object;
        if (local_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_128.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_128.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_130 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1b0,&local_128);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f0.SharedReferenceCount.ReferenceController);
        pSVar13 = local_1b8;
        if ((local_1b8 == (StackState *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        FJsonSerializerPolicy_NestedVariant::ReadArrayStart(pSVar13);
        if ((pSVar13 == (StackState *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar8 = local_1a8.Data.ArrayNum + -1;
        if (local_1a8.Data.ArrayNum == 0) {
          iVar8 = iVar9;
        }
        ::FString::AssignRange
                  (&pSVar13->Identifier,(wchar_t *)local_1a8.Data.AllocatorInstance.Data,iVar8);
        break;
      case ArrayEnd:
        if (0 < local_1c8.ArrayNum) {
          if ((pSVar13 == (StackState *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar8 = (pSVar13->Identifier).Data.ArrayNum;
          iVar18 = iVar8 + -1;
          if (iVar8 == 0) {
            iVar18 = iVar9;
          }
          ::FString::AssignRange
                    (&local_1a8,(wchar_t *)(pSVar13->Identifier).Data.AllocatorInstance.Data,iVar18)
          ;
          if ((pSVar13 == (StackState *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (((pSVar13->Array).Object ==
               (TNestedVariantArray<FString,bool,__int64,double,FString> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pTVar3 = (TNestedVariantMap<FString,bool,__int64,double,FString> *)(pSVar13->Array).Object
          ;
          pTVar1 = (pSVar13->Array).SharedReferenceCount.ReferenceController;
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pTVar3 == (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          uVar14 = local_a0._16_8_ & 0xff;
          if ((5 < uVar14) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar14] ==
              UE::Core::Private::TDestructorCaller<FString>::Destruct) {
            if ((TNestedVariantMap<FString,bool,__int64,double,FString> *)local_a0._padding_ !=
                (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) {
              FMemory::Free((void *)local_a0._padding_);
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar14])(&local_a0);
          }
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_a0.TypeIndex = 4;
          local_a0._padding_ = (longlong)pTVar3;
          local_a0._padding_ = (longlong)pTVar1;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          pTVar11 = TArray<TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1>,TSizedDefaultAllocator<32>_>
                    ::Pop(&local_1c8,&local_e0,Default);
          local_118.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
          local_1b8 = pTVar11->Object;
          if (local_118.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_118.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_118.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_120 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1b0,&local_118);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_118.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e0.SharedReferenceCount.ReferenceController);
          pSVar13 = local_1b8;
          goto switchD_14461165a_caseD_7;
        }
        break;
      case Boolean:
        if (((param_1->CurrentToken != True) && (param_1->CurrentToken != False)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(CurrentToken == EJsonToken::True) || (CurrentToken == EJsonToken::False)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                               ,0xce,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        uVar14 = local_a0._16_8_ & 0xff;
        bVar5 = param_1->BoolValue;
        if ((5 < uVar14) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14] ==
            UE::Core::Private::TDestructorCaller<FString>::Destruct) {
          if ((TNestedVariantMap<FString,bool,__int64,double,FString> *)local_a0._padding_ !=
              (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) {
            FMemory::Free((void *)local_a0._padding_);
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14])(&local_a0);
        }
        local_a0._padding_ = CONCAT71(local_a0._padding_._1_7_,bVar5);
        local_a0._16_8_ = local_a0._16_8_ & 0xffffffffffffff00;
      case Null:
switchD_14461165a_caseD_7:
        if (pSVar13 != (StackState *)0x0) {
          if ((pSVar13 == (StackState *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (pSVar13->Type == Object) {
            if (((pSVar13->Object).Object ==
                 (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            local_110 = &local_1a8;
            local_108 = &local_a0;
            TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<FString_const_&,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_const_&>_>
                      ((TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
                        *)(pSVar13->Object).Object,&local_158,(bool *)&local_110);
          }
          else {
            if (((pSVar13->Array).Object ==
                 (TNestedVariantArray<FString,bool,__int64,double,FString> *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            pTVar2 = (pSVar13->Array).Object;
            if (((*(TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                    **)&pTVar2->field_0x0 <= &local_a0) &&
                (&local_a0 <
                 *(TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
                   **)&pTVar2->field_0x0 + *(int *)(&pTVar2->field_0x8 + 4))) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            iVar9 = *(int *)&pTVar2->field_0x8;
            if (iVar9 == *(int *)(&pTVar2->field_0x8 + 4)) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,(ForAnyElementType *)pTVar2,(int *)(&pTVar2->field_0x8 + 4));
            }
            *(int *)&pTVar2->field_0x8 = iVar9 + 1;
            pFVar19 = *(FScriptContainerElement **)&pTVar2->field_0x0;
            (pFVar19 + (longlong)iVar9 * 0x18)[0x10] = (FScriptContainerElement)local_a0.TypeIndex;
            uVar14 = local_a0._16_8_ & 0xff;
            if ((5 < local_a0.TypeIndex) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xec,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                        ::__l2::CopyConstructors)[uVar14])
                      (pFVar19 + (longlong)iVar9 * 0x18,&local_a0);
          }
        }
        break;
      case String:
        plVar12 = (longlong *)(**(code **)(param_1->_padding_ + 0x20))(param_1,local_d0);
        uVar14 = local_a0._16_8_ & 0xff;
        if ((5 < uVar14) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14] !=
            UE::Core::Private::TDestructorCaller<bool>::Destruct) {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14])(&local_a0);
        }
        local_a0._padding_ = *plVar12;
        *plVar12 = 0;
        local_a0._padding_ = plVar12[1];
        plVar12[1] = 0;
        local_a0.TypeIndex = 3;
        if (local_d0[0] != (void *)0x0) {
          FMemory::Free(local_d0[0]);
        }
        goto switchD_14461165a_caseD_7;
      case Number:
        if ((param_3 & StoreNumbersAsStrings) == None) {
          FJsonSerializerPolicy_NestedVariant::ReadNumber<wchar_t>(param_1,&local_a0);
        }
        else {
          if ((param_1->CurrentToken != Number) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentToken == EJsonToken::Number",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                                 ,200,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          uVar14 = local_a0._16_8_ & 0xff;
          if ((5 < uVar14) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar14] !=
              UE::Core::Private::TDestructorCaller<bool>::Destruct) {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar14])(&local_a0);
          }
          ::FString::FString((FString *)&local_a0,&param_1->StringValue);
          local_a0.TypeIndex = 3;
        }
        goto switchD_14461165a_caseD_7;
      case Error:
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        goto LAB_1446123c6;
      }
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      bVar5 = TJsonReader<wchar_t>::ReadNext(param_1,local_198);
    } while (bVar5);
    if ((pSVar13 != (StackState *)0x0) && ((param_1->ErrorMessage).Data.ArrayNum < 2)) {
      param_2->Type = pSVar13->Type;
      ::FString::operator=(&param_2->Identifier,&pSVar13->Identifier);
      pTVar1 = (pSVar13->Array).SharedReferenceCount.ReferenceController;
      pTVar2 = (pSVar13->Array).Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_c0 = (param_2->Array).Object;
      pTStack_b8 = (param_2->Array).SharedReferenceCount.ReferenceController;
      (param_2->Array).Object = pTVar2;
      (param_2->Array).SharedReferenceCount.ReferenceController = pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_b8);
      pTVar1 = (pSVar13->Object).SharedReferenceCount.ReferenceController;
      pTVar3 = (pSVar13->Object).Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b0 = (param_2->Object).Object;
      pTStack_a8 = (param_2->Object).SharedReferenceCount.ReferenceController;
      (param_2->Object).Object = pTVar3;
      (param_2->Object).SharedReferenceCount.ReferenceController = pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_a8);
      bVar5 = true;
      goto LAB_1446123c8;
    }
  }
LAB_1446123c6:
  bVar5 = false;
LAB_1446123c8:
  uVar14 = local_a0._16_8_ & 0xff;
  if ((5 < uVar14) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14] != UE::Core::Private::TDestructorCaller<bool>::Destruct
     ) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(&local_a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1b0.ReferenceController);
  DestructItems<TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1>,int>
            ((TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> *)
             local_1c8.AllocatorInstance.Data,local_1c8.ArrayNum);
  if ((TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> *)
      local_1c8.AllocatorInstance.Data !=
      (TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  return bVar5;
}

// Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 144613a40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_NestedVariant>::
Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *param_1,
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FElement *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  EJsonToken EVar9;
  uint uVar10;
  TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *_Dst;
  ulonglong uVar11;
  TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
  *pTVar12;
  undefined2 local_res8 [4];
  TArray<TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1>,TSizedDefaultAllocator<32>_>
  local_58;
  TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> local_48;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_58.AllocatorInstance,&local_58.ArrayMax);
  uVar8 = iVar7 + 1;
  local_58.ArrayNum = uVar8;
  *(FElement **)&local_58.AllocatorInstance.Data[(longlong)iVar7 * 0x10].field_0x0 = param_1->Object
  ;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(local_58.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
       pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar11 = local_58._8_8_;
  local_58._8_8_ = (ulonglong)uVar8;
  do {
    if ((int)uVar8 < 1) {
      if (param_3) {
        local_58._8_8_ = uVar11;
        uVar5 = (**(code **)(param_2->_padding_ + 8))(param_2);
        uVar8 = local_58.ArrayNum;
      }
      else {
        uVar5 = 1;
        local_58._8_8_ = uVar11;
      }
      DestructItems<TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1>,int>
                ((TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *)
                 local_58.AllocatorInstance.Data,uVar8);
      if ((TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *)
          local_58.AllocatorInstance.Data !=
          (TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return (bool)uVar5;
    }
    local_48.Object =
         ((TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *)
         ((longlong)local_58.AllocatorInstance.Data + ((longlong)local_58.ArrayNum + -1) * 0x10))->
         Object;
    local_48.SharedReferenceCount.ReferenceController =
         (((TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *)
          ((longlong)local_58.AllocatorInstance.Data + ((longlong)local_58.ArrayNum + -1) * 0x10))->
         SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      local_58.ArrayNum = (int)uVar11;
    }
    iVar7 = local_58.ArrayNum + -1;
    _Dst = (TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *)
           ((longlong)local_58.AllocatorInstance.Data + (longlong)iVar7 * 0x10);
    local_58._8_8_ = uVar11;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((_Dst->SharedReferenceCount).ReferenceController);
    iVar7 = (local_58.ArrayNum - iVar7) + -1;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 1,(longlong)iVar7 << 4);
    }
    iVar7 = local_58.ArrayNum + -1;
    local_58.ArrayNum = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&local_58.AllocatorInstance,iVar7,&local_58.ArrayMax);
    if ((local_48.Object)->bIsKeyValuePair == false) {
LAB_144613bdf:
      bVar4 = true;
    }
    else {
      if (((local_48.Object)->Identifier).Data.ArrayNum < 2) {
        iVar7 = (param_2->Stack).ArrayNum;
        if (0 < iVar7) {
          uVar8 = 0;
          if ((int)(iVar7 - 1U) < iVar7) {
            uVar8 = ~(iVar7 - 1U) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (*(int *)((param_2->Stack).AllocatorInstance.Data +
                      (longlong)(param_2->Stack).ArrayNum * 4 + -4) == 6) goto LAB_144613bdb;
        }
        goto LAB_144613bdf;
      }
LAB_144613bdb:
      bVar4 = false;
    }
    uVar11 = (ulonglong)((local_48.Object)->Value).TypeIndex;
    if ((5 < uVar11) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar11) == '\0') {
      bVar6 = FJsonSerializerPolicy_NestedVariant::
              SerializeIfNumber<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
                        (&local_48,param_2,bVar4);
      if ((((!bVar6) &&
           (bVar6 = FJsonSerializerPolicy_NestedVariant::
                    SerializeIfString<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
                              (&local_48,param_2,bVar4), !bVar6)) &&
          (bVar6 = FJsonSerializerPolicy_NestedVariant::
                   SerializeIfArray<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
                             (&local_58,&local_48,param_2,bVar4), !bVar6)) &&
         (bVar4 = FJsonSerializerPolicy_NestedVariant::
                  SerializeIfObject<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
                            (&local_58,&local_48,param_2,bVar4), !bVar4)) {
        UE::Logging::Private::BasicFatalLog
                  (&`private:_static_bool___cdecl_TJsonSerializer<FJsonSerializerPolicy_NestedVariant>::Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1>_const&___ptr64,TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>&___ptr64,bool)'
                    ::__l23::LOG_Static,(FLogCategoryBase *)&LogJson);
      }
    }
    else {
      pTVar12 = &(local_48.Object)->Value;
      if (bVar4 == false) {
        if ((((local_48.Object)->Value).TypeIndex != '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pFVar3 = local_48.Object;
        iVar7 = (param_2->Stack).ArrayNum;
        uVar10 = iVar7 - 1;
        uVar8 = 0;
        if ((int)uVar10 < iVar7) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                     (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                  (param_2,&pFVar3->Identifier);
      }
      else {
        if ((((local_48.Object)->Value).TypeIndex != '\0') &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        bVar4 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
                CanWriteValueWithoutIdentifier(param_2);
        if ((!bVar4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("CanWriteValueWithoutIdentifier()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0xde,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        EVar9 = param_2->PreviousTokenWritten;
        if ((EVar9 != CurlyOpen) && ((Identifier < EVar9 || ((0x1013U >> (EVar9 & 0x1f) & 1) == 0)))
           ) {
          local_res8[0] = 0x2c;
          (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,2);
          param_2->PreviousTokenWritten = Comma;
          EVar9 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                            (param_2,SUB81(pTVar12->_padding_,0));
          param_2->PreviousTokenWritten = EVar9;
          goto LAB_144613e18;
        }
      }
      EVar9 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                        (param_2,SUB81(pTVar12->_padding_,0));
      param_2->PreviousTokenWritten = EVar9;
    }
LAB_144613e18:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    uVar8 = local_58.ArrayNum;
    uVar11 = local_58._8_8_;
  } while( true );
}

