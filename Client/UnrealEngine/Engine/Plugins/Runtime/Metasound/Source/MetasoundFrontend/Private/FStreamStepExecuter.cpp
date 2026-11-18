// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// CanProcessRemovals @ 14ae65dc0

bool __thiscall
Metasound::FrontendQueryPrivate::FStreamStepExecuter::CanProcessRemovals(FStreamStepExecuter *this)

{
  return false;
}

// CanProduceEntries @ 14ae65e80

bool __thiscall
Metasound::FrontendQueryPrivate::FStreamStepExecuter::CanProduceEntries(FStreamStepExecuter *this)

{
  return true;
}

// Execute @ 14ae6fdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FrontendQueryPrivate::FStreamStepExecuter::Execute
          (FStreamStepExecuter *this,
          TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
          *param_1,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                   *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  FGuid *pFVar27;
  ForElementType<Metasound::FFrontendQueryEntry> FVar28;
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *pTVar29;
  char cVar30;
  TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
  *pTVar31;
  longlong lVar32;
  ForElementType<Metasound::FFrontendQueryEntry> FVar33;
  char cVar34;
  uint uVar35;
  ulonglong uVar36;
  ForElementType<Metasound::FFrontendQueryEntry> FVar37;
  uint uVar38;
  TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
  *pTVar39;
  bool bVar40;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  ForElementType<Metasound::FFrontendQueryEntry> local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  char local_248;
  char local_247;
  undefined1 local_246 [6];
  TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
  *local_240;
  ulonglong local_238;
  TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
  *local_230;
  undefined1 local_228 [24];
  FFrontendQueryKey local_210;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
  local_1e0;
  undefined4 local_148;
  longlong local_140;
  longlong lStack_138;
  longlong local_130;
  longlong lStack_128;
  longlong local_120;
  longlong lStack_118;
  longlong local_110;
  longlong lStack_108;
  longlong local_100;
  longlong lStack_f8;
  longlong local_f0;
  longlong lStack_e8;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  
  iVar3 = GCycleStatsShouldEmitNamedEvents;
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_298;
  local_230 = param_2;
  if (GCycleStatsShouldEmitNamedEvents < 1) {
    local_248 = '\0';
  }
  else {
    local_248 = '\x01';
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::StreamQueryStep::Execute");
  }
  cVar30 = 0 < iVar3;
  bVar40 = CpuChannel->Enabled < 0;
  if (bVar40) {
    local_247 = '\0';
  }
  else {
    local_247 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FStreamStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId565,"MetaSound::StreamQueryStep::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuery.cpp"
               ,0x235);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_Metasound::FrontendQueryPrivate::FStreamStepExecuter::Execute(TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>&___ptr64,TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const&___ptr64>_>&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId565);
  }
  cVar34 = !bVar40;
  TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
  ::Reset(param_1);
  plVar4 = *(longlong **)&this->field_0x8;
  if (plVar4 == (longlong *)0x0) goto LAB_14ae70435;
  local_240 = (TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
               *)0x0;
  local_238 = 0;
  (**(code **)(*plVar4 + 8))(plVar4,&local_240);
  if (0 < (int)local_238) {
    local_210.Key.TypeIndex = 0;
    local_210.Hash = 0xffffffff;
    TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
    ::Emplace<Metasound::FFrontendQueryKey_const_&>
              (param_1,(FFrontendQueryKey *)local_228,(bool *)&local_210);
    uVar38 = (param_2->Pairs).ArrayNum;
    uVar35 = 0;
    pFVar5 = (param_2->Pairs).AllocatorInstance.Data;
    if (0 < (int)uVar38) {
      do {
        iVar3 = (uVar38 >> 1) + uVar35;
        bVar40 = Metasound::operator<
                           ((FFrontendQueryKey *)(pFVar5 + (longlong)iVar3 * 0xe0),&local_210);
        if (bVar40) {
          uVar35 = iVar3 + (uVar38 & 1);
        }
        uVar7 = uVar38 >> 1;
        param_2 = local_230;
        uVar38 = uVar38 >> 1;
      } while (uVar7 != 0);
    }
    if ((int)uVar35 < (param_2->Pairs).ArrayNum) {
      lVar32 = (longlong)(int)uVar35 * 0xe0;
      bVar40 = Metasound::operator<
                         (&local_210,
                          (FFrontendQueryKey *)((param_2->Pairs).AllocatorInstance.Data + lVar32));
      if ((bVar40) || (uVar35 == 0xffffffff)) goto LAB_14ae6ffa4;
      iVar3 = (param_2->Pairs).ArrayNum;
      uVar38 = 0;
      if ((int)uVar35 < iVar3) {
        uVar38 = ~uVar35 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (local_278 = (undefined8 *)(longlong)(int)uVar35,
         local_270 = (ForElementType<Metasound::FFrontendQueryEntry>)(longlong)iVar3,
         bVar40 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar33 = (ForElementType<Metasound::FFrontendQueryEntry>)
               (lVar32 + 0x20 + (longlong)(param_2->Pairs).AllocatorInstance.Data);
      if (FVar33 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) goto LAB_14ae6ffa4;
    }
    else {
LAB_14ae6ffa4:
      FVar33 = (ForElementType<Metasound::FFrontendQueryEntry>)
               TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
               ::Emplace<Metasound::FFrontendQueryKey_const_&>(param_2,&local_210);
    }
    iVar3 = (int)local_238;
    uVar26 = (ulonglong)(int)local_238;
    pTVar31 = local_240 + uVar26;
    pTVar39 = local_240;
    while( true ) {
      if ((int)uVar26 != iVar3) {
        local_246[0] = 0;
        `TCheckedPointerIterator<TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_246);
      }
      cVar34 = local_247;
      cVar30 = local_248;
      if (pTVar39 == pTVar31) break;
      local_1f0 = 0;
      local_1e0._padding_ = 0;
      local_1e0._padding_ = 1;
      uStack_1e8 = 0;
      local_1e0._144_8_ = local_1e0._144_8_ & 0xffffffffffffff00;
      local_148 = 0;
      pFVar27 = FGuid::NewGuid((FGuid *)(local_228 + 8));
      local_1f0._0_4_ = pFVar27->A;
      local_1f0._4_4_ = pFVar27->B;
      uStack_1e8._0_4_ = pFVar27->C;
      uStack_1e8._4_4_ = pFVar27->D;
      if (pTVar39 != &local_1e0) {
        bVar2 = pTVar39->TypeIndex;
        local_b0 = CONCAT71(local_b0._1_7_,bVar2);
        if ((4 < bVar2) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0x105,L""), bVar40)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                    ::__l2::MoveConstructors)[bVar2])(&local_140,pTVar39);
        uVar26 = local_b0;
        lVar24 = lStack_b8;
        lVar23 = local_c0;
        lVar22 = lStack_c8;
        lVar21 = local_d0;
        lVar20 = lStack_d8;
        lVar19 = local_e0;
        lVar18 = lStack_e8;
        lVar17 = local_f0;
        lVar16 = lStack_f8;
        lVar15 = local_100;
        lVar14 = lStack_108;
        lVar13 = local_110;
        lVar12 = lStack_118;
        lVar11 = local_120;
        lVar10 = lStack_128;
        lVar9 = local_130;
        lVar8 = lStack_138;
        lVar32 = local_140;
        local_130 = local_1e0._padding_;
        lStack_128 = local_1e0._padding_;
        local_140 = local_1e0._padding_;
        lStack_138 = local_1e0._padding_;
        local_110 = local_1e0._padding_;
        lStack_108 = local_1e0._padding_;
        local_120 = local_1e0._padding_;
        lStack_118 = local_1e0._padding_;
        local_f0 = local_1e0._padding_;
        lStack_e8 = local_1e0._padding_;
        local_100 = local_1e0._padding_;
        lStack_f8 = local_1e0._padding_;
        local_d0 = local_1e0._padding_;
        lStack_c8 = local_1e0._padding_;
        local_e0 = local_1e0._padding_;
        lStack_d8 = local_1e0._padding_;
        local_b0 = local_1e0._144_8_;
        uVar36 = local_1e0._144_8_ & 0xff;
        local_1e0._144_8_ = uVar26;
        local_c0 = local_1e0._padding_;
        lStack_b8 = local_1e0._padding_;
        local_1e0._padding_ = lVar32;
        local_1e0._padding_ = lVar8;
        local_1e0._padding_ = lVar9;
        local_1e0._padding_ = lVar10;
        local_1e0._padding_ = lVar11;
        local_1e0._padding_ = lVar12;
        local_1e0._padding_ = lVar13;
        local_1e0._padding_ = lVar14;
        local_1e0._padding_ = lVar15;
        local_1e0._padding_ = lVar16;
        local_1e0._padding_ = lVar17;
        local_1e0._padding_ = lVar18;
        local_1e0._padding_ = lVar19;
        local_1e0._padding_ = lVar20;
        local_1e0._padding_ = lVar21;
        local_1e0._padding_ = lVar22;
        local_1e0._padding_ = lVar23;
        local_1e0._padding_ = lVar24;
        if ((4 < uVar36) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar40)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar36])(&local_140);
      }
      FVar37 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar33 + 0xb0);
      FVar28 = FVar33;
      if (FVar37 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar28 = FVar37;
      }
      if ((ulonglong)FVar28 <= &local_1f0) {
        FVar28 = FVar33;
        if (FVar37 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar28 = FVar37;
        }
        if (&local_1f0 <
            (undefined8 *)((longlong)*(int *)((longlong)FVar33 + 0xbc) * 0xb0 + (longlong)FVar28)) {
          local_260 = (longlong)*(int *)((longlong)FVar33 + 0xb8);
          local_258 = 0xb0;
          local_270 = FVar33;
          if (FVar37 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            local_270 = FVar37;
          }
          local_278 = &local_1f0;
          local_268 = (longlong)*(int *)((longlong)FVar33 + 0xbc);
          bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar40) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
      iVar25 = *(int *)((longlong)FVar33 + 0xb8);
      if (iVar25 == *(int *)((longlong)FVar33 + 0xbc)) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                           (0x8b0,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar33,
                            (int *)((longlong)FVar33 + 0xbc));
      }
      *(int *)((longlong)FVar33 + 0xb8) = iVar25 + 1;
      FVar37 = FVar33;
      if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar33 + 0xb0) !=
          (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar37 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar33 + 0xb0);
      }
      pTVar29 = (TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
                 *)((longlong)iVar25 * 0xb0);
      puVar1 = (undefined8 *)((longlong)&(pTVar29->Pairs).AllocatorInstance.Data + (longlong)FVar37)
      ;
      *puVar1 = local_1f0;
      puVar1[1] = uStack_1e8;
      uVar26 = local_1e0._144_8_ & 0xff;
      *(uchar *)((longlong)&pTVar29[10].Pairs.AllocatorInstance.Data + (longlong)FVar37) =
           local_1e0.TypeIndex;
      local_230 = pTVar29;
      if ((4 < local_1e0.TypeIndex) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x105,L""), bVar40)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                    ::__l2::MoveConstructors)[uVar26] ==
          UE::Core::Private::TMoveConstructorCaller<FMetasoundFrontendVersion>::Construct) {
        *(longlong *)((longlong)&pTVar29[1].Pairs.AllocatorInstance.Data + (longlong)FVar37) =
             local_1e0._padding_;
        *(longlong *)((longlong)&pTVar29[1].Pairs.ArrayNum + (longlong)FVar37) = local_1e0._padding_
        ;
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                    ::__l2::MoveConstructors)[uVar26])
                  ((longlong)&pTVar29[1].Pairs.AllocatorInstance.Data + (longlong)FVar37,&local_1e0)
        ;
      }
      *(undefined4 *)((longlong)&local_230[10].Pairs.ArrayNum + (longlong)FVar37) = local_148;
      uVar26 = local_1e0._144_8_ & 0xff;
      if ((4 < local_1e0.TypeIndex) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar40)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar26] !=
          UE::Core::Private::TDestructorCaller<FMetasoundFrontendVersion>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar26])(&local_1e0);
      }
      uVar26 = local_238 & 0xffffffff;
      pTVar39 = pTVar39 + 1;
    }
    uVar26 = (ulonglong)local_210.Key.TypeIndex;
    if ((3 < local_210.Key.TypeIndex) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar40)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar26])(&local_210);
  }
  DestructItems<TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>,int>
            (local_240,(int)local_238);
  if (local_240 !=
      (TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
       *)0x0) {
    FMemory::Free(local_240);
  }
LAB_14ae70435:
  if (cVar34 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (cVar30 != '\0') {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

