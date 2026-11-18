// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 11

// StaticClass @ 142cc8f70

UClass * __cdecl UTest_PingPongBetweenPhaseFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"Test_PingPongBetweenPhaseFactory",
               &Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.InnerSingleton,
               StaticRegisterNativesUTest_PingPongBetweenPhaseFactory,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTest_PingPongBetweenPhaseFactory>,
               InternalVTableHelperCtorCaller<UTest_PingPongBetweenPhaseFactory>,local_res8,
               UEditorDataStorageFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.InnerSingleton;
}

// UTest_PingPongBetweenPhaseFactory @ 142ce4720

UTest_PingPongBetweenPhaseFactory * __thiscall
UTest_PingPongBetweenPhaseFactory::UTest_PingPongBetweenPhaseFactory
          (UTest_PingPongBetweenPhaseFactory *this,FVTableHelper *param_1)

{
  UEditorDataStorageFactory::UEditorDataStorageFactory((UEditorDataStorageFactory *)this,param_1);
  *(undefined ***)this = &___7UTest_PingPongBetweenPhaseFactory__6B_;
  return this;
}

// UTest_PingPongBetweenPhaseFactory @ 142ce4750

UTest_PingPongBetweenPhaseFactory * __thiscall
UTest_PingPongBetweenPhaseFactory::UTest_PingPongBetweenPhaseFactory
          (UTest_PingPongBetweenPhaseFactory *this,FObjectInitializer *param_1)

{
  UEditorDataStorageFactory::UEditorDataStorageFactory((UEditorDataStorageFactory *)this,param_1);
  *(undefined ***)this = &___7UTest_PingPongBetweenPhaseFactory__6B_;
  return this;
}

// ~UTest_PingPongBetweenPhaseFactory @ 142ce5810

void __thiscall
UTest_PingPongBetweenPhaseFactory::~UTest_PingPongBetweenPhaseFactory
          (UTest_PingPongBetweenPhaseFactory *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// operator() @ 142ce7210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>::operator()
          (void *this,IQueryContext *param_1,ulong64 *param_2,FTest_PingPongPrePhys *param_3)

{
  longlong lVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UTest_PingPongBetweenPhaseFactory::RegisterQueries(UE::Editor::DataStorage::ICoreProvider_&)_::_2_::<lambda_1>::operator()(UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*)const_::_2_::FStat_PingPong_Pre_During>
  FVar14;
  UPackage *pUVar15;
  longlong *plVar16;
  uint uVar17;
  FName FVar18;
  uint uVar19;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_a0;
  UScriptStruct *local_98;
  longlong local_90;
  FName local_88;
  FName local_80;
  UScriptStruct *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FName local_58;
  FName local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar17 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_PingPong_Pre_During ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UTest_PingPongBetweenPhaseFactory::RegisterQueries(UE::Editor::DataStorage::ICoreProvider_&)_::_2_::<lambda_1>::operator()(UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*)const_::_2_::FStat_PingPong_Pre_During>
           )0x0) {
        pFVar13 = ::FName::FName(&local_58,"PingPong_Pre_During");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_PingPong_Pre_During,*pFVar13,
                   L"PingPong_Pre_During","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                   ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar14 = StatPtr_PingPong_Pre_During;
  if (StatPtr_PingPong_Pre_During ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UTest_PingPongBetweenPhaseFactory::RegisterQueries(UE::Editor::DataStorage::ICoreProvider_&)_::_2_::<lambda_1>::operator()(UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*)const_::_2_::FStat_PingPong_Pre_During>
       )0x0) {
    pFVar13 = ::FName::FName(&local_50,"PingPong_Pre_During");
    FVar14 = (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UTest_PingPongBetweenPhaseFactory::RegisterQueries(UE::Editor::DataStorage::ICoreProvider_&)_::_2_::<lambda_1>::operator()(UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*)const_::_2_::FStat_PingPong_Pre_During>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_PingPong_Pre_During,*pFVar13,
                          L"PingPong_Pre_During","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar14;
  bVar5 = false;
  bVar7 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar8 = false;
  bVar9 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) ||
     (bVar4 = bVar5, bVar6 = bVar7, FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar7 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_a0.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStoragePerformanceTestCommands.cpp"
                   ,0x5b);
        bVar5 = true;
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    bVar4 = bVar5;
    bVar6 = bVar7;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar18;
      local_88 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar8 = true;
      goto LAB_142ce73c1;
    }
  }
  bVar7 = bVar9;
  bVar5 = bVar8;
  bVar8 = false;
  local_88 = local_80;
  FVar18 = local_80;
LAB_142ce73c1:
  iVar10 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (iVar10 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar11 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (iVar11 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_98 = Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar15 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPrePhys,(UObject *)pUVar15,
                         L"Test_PingPongPrePhys");
  }
  local_98 = Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton;
  iVar12 = (**(code **)((longlong)*param_1 + 8))(param_1);
  local_90 = (longlong)iVar12;
  if (0 < iVar12) {
    local_res20 = (FName)((longlong)param_3 - (longlong)param_2);
    do {
      FVar18 = local_res20;
      uVar19 = 0;
      if ((int)uVar17 < iVar11) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar1 = *(longlong *)((longlong)param_2 + (longlong)FVar18);
      uVar19 = (uint)((int)uVar17 < iVar10) & ~uVar17 >> 0x1f;
      if (uVar19 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar2 = *param_2;
      if (Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar15 = Z_Construct_UPackage__Script_TypedElementFramework();
        Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongDurPhys,(UObject *)pUVar15,
                             L"Test_PingPongDurPhys");
      }
      plVar16 = (longlong *)
                (**(code **)((longlong)*param_1 + 0xe0))
                          (param_1,uVar2,
                           Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton,
                           `UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::
                           AddColumn<FTest_PingPongDurPhys>'::__l3::<lambda_1>::
                           <lambda_invoker_cdecl>);
      uStack_60 = 1;
      *plVar16 = lVar1 + 1;
      pcVar3 = *(code **)((longlong)*param_1 + 0xf8);
      local_70 = local_98;
      local_68 = &local_70;
      if (uVar19 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_48 = (undefined4)local_68;
      uStack_44 = local_68._4_4_;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      (*pcVar3)(param_1,*param_2,&local_48);
      uVar17 = uVar17 + 1;
      param_2 = param_2 + 1;
      local_90 = local_90 + -1;
    } while (local_90 != 0);
    local_90 = 0;
    FVar18 = local_88;
    bVar4 = bVar5;
    bVar6 = bVar7;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// operator() @ 142ce8c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>::operator()
          (void *this,IQueryContext *param_1,ulong64 *param_2,FTest_PingPongDurPhys *param_3)

{
  longlong lVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UTest_PingPongBetweenPhaseFactory::RegisterQueries(UE::Editor::DataStorage::ICoreProvider_&)_::_2_::<lambda_2>::operator()(UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*)const_::_2_::FStat_PingPong_During_Post>
  FVar14;
  UPackage *pUVar15;
  longlong *plVar16;
  uint uVar17;
  FName FVar18;
  uint uVar19;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_a0;
  UScriptStruct *local_98;
  longlong local_90;
  FName local_88;
  FName local_80;
  UScriptStruct *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FName local_58;
  FName local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar17 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_PingPong_During_Post ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UTest_PingPongBetweenPhaseFactory::RegisterQueries(UE::Editor::DataStorage::ICoreProvider_&)_::_2_::<lambda_2>::operator()(UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*)const_::_2_::FStat_PingPong_During_Post>
           )0x0) {
        pFVar13 = ::FName::FName(&local_58,"PingPong_During_Post");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_PingPong_During_Post,*pFVar13,
                   L"PingPong_During_Post","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                   ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar14 = StatPtr_PingPong_During_Post;
  if (StatPtr_PingPong_During_Post ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UTest_PingPongBetweenPhaseFactory::RegisterQueries(UE::Editor::DataStorage::ICoreProvider_&)_::_2_::<lambda_2>::operator()(UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*)const_::_2_::FStat_PingPong_During_Post>
       )0x0) {
    pFVar13 = ::FName::FName(&local_50,"PingPong_During_Post");
    FVar14 = (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UTest_PingPongBetweenPhaseFactory::RegisterQueries(UE::Editor::DataStorage::ICoreProvider_&)_::_2_::<lambda_2>::operator()(UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*)const_::_2_::FStat_PingPong_During_Post>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_PingPong_During_Post,*pFVar13,
                          L"PingPong_During_Post","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                          ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar14;
  bVar5 = false;
  bVar7 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar8 = false;
  bVar9 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) ||
     (bVar4 = bVar5, bVar6 = bVar7, FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar7 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_a0.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStoragePerformanceTestCommands.cpp"
                   ,0x71);
        bVar5 = true;
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    bVar4 = bVar5;
    bVar6 = bVar7;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar18;
      local_88 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar8 = true;
      goto LAB_142ce8e11;
    }
  }
  bVar7 = bVar9;
  bVar5 = bVar8;
  bVar8 = false;
  local_88 = local_80;
  FVar18 = local_80;
LAB_142ce8e11:
  iVar10 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (iVar10 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar11 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (iVar11 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_98 = Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar15 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongDurPhys,(UObject *)pUVar15,
                         L"Test_PingPongDurPhys");
  }
  local_98 = Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton;
  iVar12 = (**(code **)((longlong)*param_1 + 8))(param_1);
  local_90 = (longlong)iVar12;
  if (0 < iVar12) {
    local_res20 = (FName)((longlong)param_3 - (longlong)param_2);
    do {
      FVar18 = local_res20;
      uVar19 = 0;
      if ((int)uVar17 < iVar11) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar1 = *(longlong *)((longlong)param_2 + (longlong)FVar18);
      uVar19 = (uint)((int)uVar17 < iVar10) & ~uVar17 >> 0x1f;
      if (uVar19 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar2 = *param_2;
      if (Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar15 = Z_Construct_UPackage__Script_TypedElementFramework();
        Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPostPhys,(UObject *)pUVar15,
                             L"Test_PingPongPostPhys");
      }
      plVar16 = (longlong *)
                (**(code **)((longlong)*param_1 + 0xe0))
                          (param_1,uVar2,
                           Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton,
                           `UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::
                           AddColumn<FTest_PingPongPostPhys>'::__l3::<lambda_1>::
                           <lambda_invoker_cdecl>);
      uStack_60 = 1;
      *plVar16 = lVar1 + 1;
      pcVar3 = *(code **)((longlong)*param_1 + 0xf8);
      local_70 = local_98;
      local_68 = &local_70;
      if (uVar19 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_48 = (undefined4)local_68;
      uStack_44 = local_68._4_4_;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      (*pcVar3)(param_1,*param_2,&local_48);
      uVar17 = uVar17 + 1;
      param_2 = param_2 + 1;
      local_90 = local_90 + -1;
    } while (local_90 != 0);
    local_90 = 0;
    FVar18 = local_88;
    bVar4 = bVar5;
    bVar6 = bVar7;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// operator() @ 142ce9a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>::operator()
          (void *this,IQueryContext *param_1,ulong64 *param_2,FTest_PingPongPostPhys *param_3)

{
  longlong lVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UTest_PingPongBetweenPhaseFactory::RegisterQueries(UE::Editor::DataStorage::ICoreProvider_&)_::_2_::<lambda_3>::operator()(UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*)const_::_2_::FStat_PingPong_Post_Pre>
  FVar14;
  UPackage *pUVar15;
  longlong *plVar16;
  uint uVar17;
  FName FVar18;
  uint uVar19;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_a0;
  UScriptStruct *local_98;
  longlong local_90;
  FName local_88;
  FName local_80;
  UScriptStruct *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FName local_58;
  FName local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar17 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_PingPong_Post_Pre ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UTest_PingPongBetweenPhaseFactory::RegisterQueries(UE::Editor::DataStorage::ICoreProvider_&)_::_2_::<lambda_3>::operator()(UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*)const_::_2_::FStat_PingPong_Post_Pre>
           )0x0) {
        pFVar13 = ::FName::FName(&local_58,"PingPong_Post_Pre");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_PingPong_Post_Pre,*pFVar13,
                   L"PingPong_Post_Pre","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                   ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar14 = StatPtr_PingPong_Post_Pre;
  if (StatPtr_PingPong_Post_Pre ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UTest_PingPongBetweenPhaseFactory::RegisterQueries(UE::Editor::DataStorage::ICoreProvider_&)_::_2_::<lambda_3>::operator()(UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*)const_::_2_::FStat_PingPong_Post_Pre>
       )0x0) {
    pFVar13 = ::FName::FName(&local_50,"PingPong_Post_Pre");
    FVar14 = (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UTest_PingPongBetweenPhaseFactory::RegisterQueries(UE::Editor::DataStorage::ICoreProvider_&)_::_2_::<lambda_3>::operator()(UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*)const_::_2_::FStat_PingPong_Post_Pre>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_PingPong_Post_Pre,*pFVar13,
                          L"PingPong_Post_Pre","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar14;
  bVar5 = false;
  bVar7 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar8 = false;
  bVar9 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) ||
     (bVar4 = bVar5, bVar6 = bVar7, FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar7 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_a0.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementDataStoragePerformanceTestCommands.cpp"
                   ,0x87);
        bVar5 = true;
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    bVar4 = bVar5;
    bVar6 = bVar7;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar18;
      local_88 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar8 = true;
      goto LAB_142ce9bc1;
    }
  }
  bVar7 = bVar9;
  bVar5 = bVar8;
  bVar8 = false;
  local_88 = local_80;
  FVar18 = local_80;
LAB_142ce9bc1:
  iVar10 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (iVar10 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar11 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (iVar11 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_98 = Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar15 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPostPhys,(UObject *)pUVar15,
                         L"Test_PingPongPostPhys");
  }
  local_98 = Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton;
  iVar12 = (**(code **)((longlong)*param_1 + 8))(param_1);
  local_90 = (longlong)iVar12;
  if (0 < iVar12) {
    local_res20 = (FName)((longlong)param_3 - (longlong)param_2);
    do {
      FVar18 = local_res20;
      uVar19 = 0;
      if ((int)uVar17 < iVar11) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar1 = *(longlong *)((longlong)param_2 + (longlong)FVar18);
      uVar19 = (uint)((int)uVar17 < iVar10) & ~uVar17 >> 0x1f;
      if (uVar19 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar2 = *param_2;
      if (Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar15 = Z_Construct_UPackage__Script_TypedElementFramework();
        Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPrePhys,(UObject *)pUVar15,
                             L"Test_PingPongPrePhys");
      }
      plVar16 = (longlong *)
                (**(code **)((longlong)*param_1 + 0xe0))
                          (param_1,uVar2,
                           Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton,
                           `UE::Editor::DataStorage::ICommonQueryWithEnvironmentContext::
                           AddColumn<FTest_PingPongPrePhys>'::__l3::<lambda_1>::
                           <lambda_invoker_cdecl>);
      uStack_60 = 1;
      *plVar16 = lVar1 + 1;
      pcVar3 = *(code **)((longlong)*param_1 + 0xf8);
      local_70 = local_98;
      local_68 = &local_70;
      if (uVar19 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_48 = (undefined4)local_68;
      uStack_44 = local_68._4_4_;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      (*pcVar3)(param_1,*param_2,&local_48);
      uVar17 = uVar17 + 1;
      param_2 = param_2 + 1;
      local_90 = local_90 + -1;
    } while (local_90 != 0);
    local_90 = 0;
    FVar18 = local_88;
    bVar4 = bVar5;
    bVar6 = bVar7;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// GetPrivateStaticClass @ 142cf5aa0

UClass * __cdecl UTest_PingPongBetweenPhaseFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"Test_PingPongBetweenPhaseFactory",
               &Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.InnerSingleton,
               StaticRegisterNativesUTest_PingPongBetweenPhaseFactory,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTest_PingPongBetweenPhaseFactory>,
               InternalVTableHelperCtorCaller<UTest_PingPongBetweenPhaseFactory>,local_res8,
               UEditorDataStorageFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTest_PingPongBetweenPhaseFactory.InnerSingleton;
}

// RegisterQueries @ 142cf8870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UTest_PingPongBetweenPhaseFactory::RegisterQueries
          (UTest_PingPongBetweenPhaseFactory *this,ICoreProvider *param_1)

{
  code *pcVar1;
  FName FVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FName *pFVar9;
  FProcessor *pFVar10;
  UPackage *pUVar11;
  FSimpleQuery FVar12;
  FQueryDescription *pFVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_d78 [32];
  undefined1 local_d58;
  undefined1 local_d50 [8];
  FName local_d48;
  undefined1 local_d40 [8];
  FProcessor local_d38;
  code *local_d08;
  undefined8 uStack_d00;
  longlong local_cf8;
  undefined1 uStack_cf0;
  undefined3 uStack_cef;
  undefined4 uStack_cec;
  undefined8 local_ce8;
  longlong *plStack_ce0;
  undefined1 local_cd8 [80];
  undefined4 local_c88;
  undefined4 uStack_c84;
  undefined4 uStack_c80;
  undefined4 uStack_c7c;
  undefined4 local_c78;
  undefined4 uStack_c74;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  FName local_c68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d78;
  pcVar1 = *(code **)((longlong)*param_1 + 0x1a8);
  pFVar9 = (FName *)(**(code **)((longlong)*param_1 + 0x1c0))(param_1,local_d50,0);
  pFVar10 = UE::Editor::DataStorage::Queries::FProcessor::FProcessor(&local_d38,PrePhysics,*pFVar9);
  pFVar10 = UE::Editor::DataStorage::Queries::FProcessor::SetExecutionMode(pFVar10,GameThread);
  pFVar9 = ::FName::FName(&local_d48,L"PingPong PrePhysics->DurPhysics");
  FVar2 = *pFVar9;
  UE::Editor::DataStorage::Queries::Select::Select((Select *)local_cd8);
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar11 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPrePhys,(UObject *)pUVar11,
                         L"Test_PingPongPrePhys");
  }
  UE::Editor::DataStorage::Queries::Select::ReadWrite
            ((Select *)local_cd8,
             Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton);
  UE::Editor::DataStorage::Queries::Private::PrepareForQueryBinding
            ((FQueryDescription *)local_cd8,pFVar10);
  uVar6 = uStack_c7c;
  uVar5 = uStack_c80;
  uVar4 = local_cd8._72_8_;
  local_d08 = (code *)local_cd8._64_8_;
  uVar3 = CONCAT44(uStack_c74,local_c78);
  plVar15 = (longlong *)CONCAT44(uStack_c6c,uStack_c70);
  uStack_cf0 = local_d58;
  local_cd8._64_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&>
       ::Call;
  local_cd8._72_8_ = uStack_d00;
  local_c78 = (undefined4)local_ce8;
  uStack_c74 = local_ce8._4_4_;
  uStack_c70 = 0;
  uStack_c6c = 0;
  local_c68 = FVar2;
  local_c88 = 0x509d9dc8;
  uStack_c84 = 1;
  uStack_c80 = _uStack_cf0;
  uStack_c7c = uStack_cec;
  uStack_d00 = uVar4;
  _uStack_cf0 = uVar5;
  uStack_cec = uVar6;
  local_ce8 = uVar3;
  if (local_d08 != (code *)0x0) {
    plVar14 = &local_cf8;
    if (plVar15 != (longlong *)0x0) {
      plVar14 = plVar15;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  FVar12 = UE::Editor::DataStorage::Queries::Select::Where((Select *)local_cd8);
  pFVar13 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar12.Query);
  (*pcVar1)(param_1,pFVar13);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription((FQueryDescription *)local_cd8);
  pcVar1 = *(code **)((longlong)*param_1 + 0x1a8);
  pFVar9 = (FName *)(**(code **)((longlong)*param_1 + 0x1c0))(param_1,local_d40,0);
  pFVar10 = UE::Editor::DataStorage::Queries::FProcessor::FProcessor
                      (&local_d38,DuringPhysics,*pFVar9);
  pFVar10 = UE::Editor::DataStorage::Queries::FProcessor::SetExecutionMode(pFVar10,GameThread);
  pFVar9 = ::FName::FName(&local_d48,L"PingPong DurPhysics->PostPhysics");
  FVar2 = *pFVar9;
  UE::Editor::DataStorage::Queries::Select::Select((Select *)local_cd8);
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar11 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongDurPhys,(UObject *)pUVar11,
                         L"Test_PingPongDurPhys");
  }
  UE::Editor::DataStorage::Queries::Select::ReadWrite
            ((Select *)local_cd8,
             Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton);
  UE::Editor::DataStorage::Queries::Private::PrepareForQueryBinding
            ((FQueryDescription *)local_cd8,pFVar10);
  uVar8 = uStack_c7c;
  uVar7 = uStack_c80;
  uVar6 = uStack_c84;
  uVar5 = local_c88;
  uVar4 = local_cd8._72_8_;
  local_d08 = (code *)local_cd8._64_8_;
  uVar3 = CONCAT44(uStack_c74,local_c78);
  plStack_ce0 = (longlong *)CONCAT44(uStack_c6c,uStack_c70);
  uStack_cf0 = local_d58;
  local_cd8._64_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&>
       ::Call;
  local_cd8._72_8_ = uStack_d00;
  local_c78 = (undefined4)local_ce8;
  uStack_c74 = local_ce8._4_4_;
  uStack_c70 = 0;
  uStack_c6c = 0;
  local_c68 = FVar2;
  local_c88 = 0x509d9de8;
  uStack_c84 = 1;
  uStack_c80 = _uStack_cf0;
  uStack_c7c = uStack_cec;
  uStack_d00 = uVar4;
  local_cf8 = CONCAT44(uVar6,uVar5);
  _uStack_cf0 = uVar7;
  uStack_cec = uVar8;
  local_ce8 = uVar3;
  if (local_d08 != (code *)0x0) {
    plVar15 = &local_cf8;
    if (plStack_ce0 != (longlong *)0x0) {
      plVar15 = plStack_ce0;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  FVar12 = UE::Editor::DataStorage::Queries::Select::Where((Select *)local_cd8);
  pFVar13 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar12.Query);
  (*pcVar1)(param_1,pFVar13);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription((FQueryDescription *)local_cd8);
  pcVar1 = *(code **)((longlong)*param_1 + 0x1a8);
  pFVar9 = (FName *)(**(code **)((longlong)*param_1 + 0x1c0))(param_1,local_d40,0);
  pFVar10 = UE::Editor::DataStorage::Queries::FProcessor::FProcessor(&local_d38,PostPhysics,*pFVar9)
  ;
  pFVar10 = UE::Editor::DataStorage::Queries::FProcessor::SetExecutionMode(pFVar10,GameThread);
  pFVar9 = ::FName::FName(&local_d48,L"PingPong PostPhysics->PrePhysics");
  FVar2 = *pFVar9;
  UE::Editor::DataStorage::Queries::Select::Select((Select *)local_cd8);
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar11 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPostPhys,(UObject *)pUVar11,
                         L"Test_PingPongPostPhys");
  }
  UE::Editor::DataStorage::Queries::Select::ReadWrite
            ((Select *)local_cd8,
             Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton);
  UE::Editor::DataStorage::Queries::Private::PrepareForQueryBinding
            ((FQueryDescription *)local_cd8,pFVar10);
  uVar8 = uStack_c7c;
  uVar7 = uStack_c80;
  uVar6 = uStack_c84;
  uVar5 = local_c88;
  uVar4 = local_cd8._72_8_;
  local_d08 = (code *)local_cd8._64_8_;
  uVar3 = CONCAT44(uStack_c74,local_c78);
  plStack_ce0 = (longlong *)CONCAT44(uStack_c6c,uStack_c70);
  uStack_cf0 = local_d58;
  local_cd8._64_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&>
       ::Call;
  local_cd8._72_8_ = uStack_d00;
  local_c78 = (undefined4)local_ce8;
  uStack_c74 = local_ce8._4_4_;
  uStack_c70 = 0;
  uStack_c6c = 0;
  local_c68 = FVar2;
  local_c88 = 0x509d9e08;
  uStack_c84 = 1;
  uStack_c80 = _uStack_cf0;
  uStack_c7c = uStack_cec;
  uStack_d00 = uVar4;
  local_cf8 = CONCAT44(uVar6,uVar5);
  _uStack_cf0 = uVar7;
  uStack_cec = uVar8;
  local_ce8 = uVar3;
  if (local_d08 != (code *)0x0) {
    plVar15 = &local_cf8;
    if (plStack_ce0 != (longlong *)0x0) {
      plVar15 = plStack_ce0;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  FVar12 = UE::Editor::DataStorage::Queries::Select::Where((Select *)local_cd8);
  pFVar13 = UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FVar12.Query);
  (*pcVar1)(param_1,pFVar13);
  UE::Editor::DataStorage::FQueryDescription::~FQueryDescription((FQueryDescription *)local_cd8);
  return;
}

// RegisterTables @ 142cf8ca0

void __thiscall
UTest_PingPongBetweenPhaseFactory::RegisterTables
          (UTest_PingPongBetweenPhaseFactory *this,ICoreProvider *param_1)

{
  code *pcVar1;
  UPackage *pUVar2;
  UScriptStruct *local_res10;
  FName local_res18 [2];
  UScriptStruct **local_18;
  undefined4 uStack_10;
  
  pcVar1 = *(code **)((longlong)*param_1 + 0x18);
  ::FName::FName(local_res18,L"Test_PingPongPrePhys");
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar2 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPrePhys,(UObject *)pUVar2,
                         L"Test_PingPongPrePhys");
  }
  local_18 = &local_res10;
  uStack_10 = 1;
  local_res10 = Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton;
  UE::Editor::DataStorage::Private::PerformanceTestCommandTable =
       (*pcVar1)(param_1,&local_18,local_res18);
  return;
}

// StaticRegisterNativesUTest_PingPongBetweenPhaseFactory @ 142cfe7e0

void __cdecl
UTest_PingPongBetweenPhaseFactory::StaticRegisterNativesUTest_PingPongBetweenPhaseFactory(void)

{
  return;
}

