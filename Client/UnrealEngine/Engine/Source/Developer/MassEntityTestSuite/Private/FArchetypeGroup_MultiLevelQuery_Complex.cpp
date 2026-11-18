// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 8

// FArchetypeGroup_MultiLevelQuery_Complex @ 1470f2cc0

FArchetypeGroup_MultiLevelQuery_Complex * __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::FArchetypeGroup_MultiLevelQuery_Complex
          (FArchetypeGroup_MultiLevelQuery_Complex *this)

{
  int iVar1;
  
  FArchetypeGroup_MultiLevelQueryBase::FArchetypeGroup_MultiLevelQueryBase
            ((FArchetypeGroup_MultiLevelQueryBase *)this);
  this->_padding_ = (longlong)&___7FArchetypeGroup_MultiLevelQuery_Complex_Test_Mass_UE__6B_;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->OderedSets).AllocatorInstance);
  (this->OderedSets).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->OderedSets).AllocatorInstance);
  (this->OderedSets).ArrayMax = iVar1;
  return this;
}

// operator() @ 1470ff1a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_98 [4];
  uint local_94;
  longlong *local_90;
  int local_88;
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0> local_80;
  FArchetypeGroupType *local_68;
  FArchetypeGroupType *local_60;
  longlong local_58;
  longlong local_50;
  FArchetypeGroupType *local_48;
  FArchetypeGroupType *local_40;
  FMassEntityQuery *local_38;
  FArchetypeGroup_MultiLevelQueryBase *local_30;
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0> local_28;
  
  FMassEntityQuery::ResetGrouping((FMassEntityQuery *)(*(longlong *)this + 0xb0));
  local_90 = (longlong *)(*(longlong *)this + 0x90);
  local_68 = (FArchetypeGroupType *)*local_90;
  local_60 = local_68;
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>::
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>
            (&local_80,(int *)(*(longlong *)this + 0x98),local_68);
  local_58 = *local_90;
  local_88 = (int)local_90[1];
  local_50 = local_58;
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>::
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>
            (&local_28,(int *)(local_90 + 1),
             (FArchetypeGroupType *)(local_58 + (longlong)local_88 * 4));
  while( true ) {
    if (*local_80.CurrentNum != local_80.InitialNum) {
      puVar3 = local_98;
      for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      `TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_98);
    }
    local_98[1] = local_80.Ptr != local_28.Ptr;
    local_94 = (uint)(byte)local_98[1];
    if (!(bool)local_98[1]) break;
    local_48 = local_80.Ptr;
    local_40 = local_80.Ptr;
    local_38 = (FMassEntityQuery *)(*(longlong *)this + 0xb0);
    FMassEntityQuery::GroupBy(local_38,(FArchetypeGroupType)(local_80.Ptr)->Identifier);
    local_80.Ptr = local_80.Ptr + 1;
  }
  local_30 = *(FArchetypeGroup_MultiLevelQueryBase **)this;
  bVar1 = UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::TestRaw
                    (local_30,param_1,
                     (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)(*(longlong *)this + 0x420));
  return bVar1;
}

// operator() @ 147102180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471021ce) */
/* WARNING: Removing unreachable block (ram,0x00014710236a) */
/* WARNING: Removing unreachable block (ram,0x000147102512) */
/* WARNING: Removing unreachable block (ram,0x0001471026c0) */
/* WARNING: Removing unreachable block (ram,0x00014710286e) */
/* WARNING: Removing unreachable block (ram,0x000147102a1c) */
/* WARNING: Removing unreachable block (ram,0x000147102bca) */
/* WARNING: Removing unreachable block (ram,0x000147102d78) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp'::__l2::<lambda_2>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar4;
  longlong lVar5;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar6;
  undefined1 auStack_428 [32];
  undefined8 local_408;
  longlong local_400;
  undefined1 local_3f8;
  uint local_3f4;
  undefined4 local_3f0;
  uint local_3ec;
  undefined4 local_3e8;
  uint local_3e4;
  undefined4 local_3e0;
  uint local_3dc;
  undefined4 local_3d8;
  uint local_3d4;
  undefined4 local_3d0;
  uint local_3cc;
  undefined4 local_3c8;
  uint local_3c4;
  undefined4 local_3c0;
  uint local_3bc;
  undefined4 local_3b8;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  int local_398;
  int local_394;
  int local_390;
  int local_38c;
  int local_388;
  int local_384;
  int local_380;
  int local_37c;
  int local_378;
  undefined8 *local_370;
  longlong *local_368;
  longlong *local_360;
  longlong *local_358;
  longlong *local_350;
  longlong *local_348;
  longlong *local_340;
  longlong *local_338;
  undefined8 *local_330;
  undefined8 *local_328;
  undefined8 *local_320;
  undefined8 *local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 *local_2e8;
  undefined8 *local_2e0;
  undefined8 *local_2d8;
  int *local_2d0;
  int *local_2c8;
  int *local_2c0;
  int *local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 *local_298;
  int *local_290;
  int *local_288;
  int *local_280;
  int *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  longlong local_268;
  longlong local_260;
  undefined8 *local_258;
  int *local_250;
  int *local_248;
  int *local_240;
  int *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  longlong local_228;
  longlong local_220;
  undefined8 *local_218;
  int *local_210;
  int *local_208;
  int *local_200;
  int *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 *local_1d8;
  int *local_1d0;
  int *local_1c8;
  int *local_1c0;
  int *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  int *local_190;
  int *local_188;
  int *local_180;
  int *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168;
  longlong local_160;
  undefined8 *local_158;
  int *local_150;
  int *local_148;
  int *local_140;
  int *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  longlong local_120;
  undefined8 *local_118;
  int *local_110;
  int *local_108;
  int *local_100;
  int *local_f8;
  FArchetypeGroup_MultiLevelQueryBase *local_f0;
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_e8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_d8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_c8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_b8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_a8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_98;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_88;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_78;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_68;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_58;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_48;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_428;
  local_370 = (undefined8 *)(*(longlong *)this + 0x420);
  local_3f0 = 1;
  local_3f4 = (uint)(0 < *(int *)(*(longlong *)this + 0x428));
  if (local_3f4 == 0) {
    local_2f0 = 0;
    local_2ec = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)*(int *)(local_370 + 1);
    local_408 = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_330 = (undefined8 *)*local_370;
  local_2e8 = local_330;
  local_2e0 = local_330;
  local_2d8 = local_330;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_b8.AllocatorInstance)
  ;
  local_3b4 = *(int *)(local_330 + 1);
  local_2d0 = (int *)*local_330;
  local_3b0 = local_3b4;
  local_2c8 = local_2d0;
  local_2c0 = local_2d0;
  local_2b8 = local_2d0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_b8,local_2d0,local_3b4,0);
  local_368 = (longlong *)(*(longlong *)this + 0x420);
  local_3e8 = 1;
  local_3ec = (uint)(2 < *(int *)(*(longlong *)this + 0x428));
  if (local_3ec == 0) {
    local_2b0 = 0;
    local_2ac = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)(int)local_368[1];
    local_408 = 2;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_2a8 = *local_368;
  local_328 = (undefined8 *)(local_2a8 + 0x20);
  local_2a0 = local_2a8;
  local_298 = local_328;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_a8.AllocatorInstance)
  ;
  local_3ac = *(int *)(local_328 + 1);
  local_290 = (int *)*local_328;
  local_3a8 = local_3ac;
  local_288 = local_290;
  local_280 = local_290;
  local_278 = local_290;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_a8,local_290,local_3ac,0);
  local_360 = (longlong *)(*(longlong *)this + 0x420);
  local_3e0 = 1;
  local_3e4 = (uint)(1 < *(int *)(*(longlong *)this + 0x428));
  if (local_3e4 == 0) {
    local_270 = 0;
    local_26c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)(int)local_360[1];
    local_408 = 1;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_268 = *local_360;
  local_320 = (undefined8 *)(local_268 + 0x10);
  local_260 = local_268;
  local_258 = local_320;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_98.AllocatorInstance)
  ;
  local_3a4 = *(int *)(local_320 + 1);
  local_250 = (int *)*local_320;
  local_3a0 = local_3a4;
  local_248 = local_250;
  local_240 = local_250;
  local_238 = local_250;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_98,local_250,local_3a4,0);
  local_358 = (longlong *)(*(longlong *)this + 0x420);
  local_3d8 = 1;
  local_3dc = (uint)(4 < *(int *)(*(longlong *)this + 0x428));
  if (local_3dc == 0) {
    local_230 = 0;
    local_22c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)(int)local_358[1];
    local_408 = 4;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_228 = *local_358;
  local_318 = (undefined8 *)(local_228 + 0x40);
  local_220 = local_228;
  local_218 = local_318;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_88.AllocatorInstance)
  ;
  local_39c = *(int *)(local_318 + 1);
  local_210 = (int *)*local_318;
  local_398 = local_39c;
  local_208 = local_210;
  local_200 = local_210;
  local_1f8 = local_210;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_88,local_210,local_39c,0);
  local_350 = (longlong *)(*(longlong *)this + 0x420);
  local_3d0 = 1;
  local_3d4 = (uint)(3 < *(int *)(*(longlong *)this + 0x428));
  if (local_3d4 == 0) {
    local_1f0 = 0;
    local_1ec = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)(int)local_350[1];
    local_408 = 3;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_1e8 = *local_350;
  local_310 = (undefined8 *)(local_1e8 + 0x30);
  local_1e0 = local_1e8;
  local_1d8 = local_310;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_78.AllocatorInstance)
  ;
  local_394 = *(int *)(local_310 + 1);
  local_1d0 = (int *)*local_310;
  local_390 = local_394;
  local_1c8 = local_1d0;
  local_1c0 = local_1d0;
  local_1b8 = local_1d0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_78,local_1d0,local_394,0);
  local_348 = (longlong *)(*(longlong *)this + 0x420);
  local_3c8 = 1;
  local_3cc = (uint)(5 < *(int *)(*(longlong *)this + 0x428));
  if (local_3cc == 0) {
    local_1b0 = 0;
    local_1ac = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)(int)local_348[1];
    local_408 = 5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_1a8 = *local_348;
  local_308 = (undefined8 *)(local_1a8 + 0x50);
  local_1a0 = local_1a8;
  local_198 = local_308;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_68.AllocatorInstance)
  ;
  local_38c = *(int *)(local_308 + 1);
  local_190 = (int *)*local_308;
  local_388 = local_38c;
  local_188 = local_190;
  local_180 = local_190;
  local_178 = local_190;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_68,local_190,local_38c,0);
  local_340 = (longlong *)(*(longlong *)this + 0x420);
  local_3c0 = 1;
  local_3c4 = (uint)(6 < *(int *)(*(longlong *)this + 0x428));
  if (local_3c4 == 0) {
    local_170 = 0;
    local_16c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)(int)local_340[1];
    local_408 = 6;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_168 = *local_340;
  local_300 = (undefined8 *)(local_168 + 0x60);
  local_160 = local_168;
  local_158 = local_300;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_58.AllocatorInstance)
  ;
  local_384 = *(int *)(local_300 + 1);
  local_150 = (int *)*local_300;
  local_380 = local_384;
  local_148 = local_150;
  local_140 = local_150;
  local_138 = local_150;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_58,local_150,local_384,0);
  local_338 = (longlong *)(*(longlong *)this + 0x420);
  local_3b8 = 1;
  local_3bc = (uint)(7 < *(int *)(*(longlong *)this + 0x428));
  if (local_3bc == 0) {
    local_130 = 0;
    local_12c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)(int)local_338[1];
    local_408 = 7;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_128 = *local_338;
  local_2f8 = (undefined8 *)(local_128 + 0x70);
  local_120 = local_128;
  local_118 = local_2f8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_48.AllocatorInstance)
  ;
  local_37c = *(int *)(local_2f8 + 1);
  local_110 = (int *)*local_2f8;
  local_378 = local_37c;
  local_108 = local_110;
  local_100 = local_110;
  local_f8 = local_110;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_48,local_110,local_37c,0);
  piVar4 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&local_c8,&local_b8,&local_38);
  piVar6 = &local_d8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&piVar6->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar4->_First + 1);
    piVar6 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar6->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (&local_e8,&local_d8);
  _vector_destructor_iterator_
            (&local_b8,0x10,8,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  local_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)this;
  local_3f8 = UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test1(local_f0,param_1,&local_e8)
  ;
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>(&local_e8);
  return (bool)local_3f8;
}

// operator() @ 147103c90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp'::__l2::<lambda_3>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test2
                    (*(FArchetypeGroup_MultiLevelQueryBase **)this,param_1,
                     (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)(*(longlong *)this + 0x420));
  return bVar1;
}

// operator() @ 1471042c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014710430f) */
/* WARNING: Removing unreachable block (ram,0x0001471044b1) */
/* WARNING: Removing unreachable block (ram,0x000147104659) */
/* WARNING: Removing unreachable block (ram,0x000147104807) */
/* WARNING: Removing unreachable block (ram,0x0001471049b5) */
/* WARNING: Removing unreachable block (ram,0x000147104b63) */
/* WARNING: Removing unreachable block (ram,0x000147104d11) */
/* WARNING: Removing unreachable block (ram,0x000147104ebe) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp'::__l2::<lambda_4>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar4;
  longlong lVar5;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar6;
  undefined1 auStack_428 [32];
  undefined8 local_408;
  longlong local_400;
  undefined1 local_3f8;
  uint local_3f4;
  undefined4 local_3f0;
  uint local_3ec;
  undefined4 local_3e8;
  uint local_3e4;
  undefined4 local_3e0;
  uint local_3dc;
  undefined4 local_3d8;
  uint local_3d4;
  undefined4 local_3d0;
  uint local_3cc;
  undefined4 local_3c8;
  uint local_3c4;
  undefined4 local_3c0;
  uint local_3bc;
  undefined4 local_3b8;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  int local_398;
  int local_394;
  int local_390;
  int local_38c;
  int local_388;
  int local_384;
  int local_380;
  int local_37c;
  int local_378;
  longlong *local_370;
  longlong *local_368;
  longlong *local_360;
  longlong *local_358;
  longlong *local_350;
  longlong *local_348;
  longlong *local_340;
  undefined8 *local_338;
  undefined8 *local_330;
  undefined8 *local_328;
  undefined8 *local_320;
  undefined8 *local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  longlong local_2e8;
  longlong local_2e0;
  undefined8 *local_2d8;
  int *local_2d0;
  int *local_2c8;
  int *local_2c0;
  int *local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 *local_298;
  int *local_290;
  int *local_288;
  int *local_280;
  int *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  longlong local_268;
  longlong local_260;
  undefined8 *local_258;
  int *local_250;
  int *local_248;
  int *local_240;
  int *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  longlong local_228;
  longlong local_220;
  undefined8 *local_218;
  int *local_210;
  int *local_208;
  int *local_200;
  int *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 *local_1d8;
  int *local_1d0;
  int *local_1c8;
  int *local_1c0;
  int *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  int *local_190;
  int *local_188;
  int *local_180;
  int *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168;
  longlong local_160;
  undefined8 *local_158;
  int *local_150;
  int *local_148;
  int *local_140;
  int *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  int *local_110;
  int *local_108;
  int *local_100;
  int *local_f8;
  FArchetypeGroup_MultiLevelQueryBase *local_f0;
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_e8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_d8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_c8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_b8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_a8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_98;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_88;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_78;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_68;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_58;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_48;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_428;
  local_370 = (longlong *)(*(longlong *)this + 0x420);
  local_3f0 = 1;
  local_3f4 = (uint)(7 < *(int *)(*(longlong *)this + 0x428));
  if (local_3f4 == 0) {
    local_2f0 = 0;
    local_2ec = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)(int)local_370[1];
    local_408 = 7;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_2e8 = *local_370;
  local_330 = (undefined8 *)(local_2e8 + 0x70);
  local_2e0 = local_2e8;
  local_2d8 = local_330;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_b8.AllocatorInstance)
  ;
  local_3b4 = *(int *)(local_330 + 1);
  local_2d0 = (int *)*local_330;
  local_3b0 = local_3b4;
  local_2c8 = local_2d0;
  local_2c0 = local_2d0;
  local_2b8 = local_2d0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_b8,local_2d0,local_3b4,0);
  local_368 = (longlong *)(*(longlong *)this + 0x420);
  local_3e8 = 1;
  local_3ec = (uint)(6 < *(int *)(*(longlong *)this + 0x428));
  if (local_3ec == 0) {
    local_2b0 = 0;
    local_2ac = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)(int)local_368[1];
    local_408 = 6;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_2a8 = *local_368;
  local_328 = (undefined8 *)(local_2a8 + 0x60);
  local_2a0 = local_2a8;
  local_298 = local_328;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_a8.AllocatorInstance)
  ;
  local_3ac = *(int *)(local_328 + 1);
  local_290 = (int *)*local_328;
  local_3a8 = local_3ac;
  local_288 = local_290;
  local_280 = local_290;
  local_278 = local_290;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_a8,local_290,local_3ac,0);
  local_360 = (longlong *)(*(longlong *)this + 0x420);
  local_3e0 = 1;
  local_3e4 = (uint)(5 < *(int *)(*(longlong *)this + 0x428));
  if (local_3e4 == 0) {
    local_270 = 0;
    local_26c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)(int)local_360[1];
    local_408 = 5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_268 = *local_360;
  local_320 = (undefined8 *)(local_268 + 0x50);
  local_260 = local_268;
  local_258 = local_320;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_98.AllocatorInstance)
  ;
  local_3a4 = *(int *)(local_320 + 1);
  local_250 = (int *)*local_320;
  local_3a0 = local_3a4;
  local_248 = local_250;
  local_240 = local_250;
  local_238 = local_250;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_98,local_250,local_3a4,0);
  local_358 = (longlong *)(*(longlong *)this + 0x420);
  local_3d8 = 1;
  local_3dc = (uint)(4 < *(int *)(*(longlong *)this + 0x428));
  if (local_3dc == 0) {
    local_230 = 0;
    local_22c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)(int)local_358[1];
    local_408 = 4;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_228 = *local_358;
  local_318 = (undefined8 *)(local_228 + 0x40);
  local_220 = local_228;
  local_218 = local_318;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_88.AllocatorInstance)
  ;
  local_39c = *(int *)(local_318 + 1);
  local_210 = (int *)*local_318;
  local_398 = local_39c;
  local_208 = local_210;
  local_200 = local_210;
  local_1f8 = local_210;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_88,local_210,local_39c,0);
  local_350 = (longlong *)(*(longlong *)this + 0x420);
  local_3d0 = 1;
  local_3d4 = (uint)(3 < *(int *)(*(longlong *)this + 0x428));
  if (local_3d4 == 0) {
    local_1f0 = 0;
    local_1ec = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)(int)local_350[1];
    local_408 = 3;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_1e8 = *local_350;
  local_310 = (undefined8 *)(local_1e8 + 0x30);
  local_1e0 = local_1e8;
  local_1d8 = local_310;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_78.AllocatorInstance)
  ;
  local_394 = *(int *)(local_310 + 1);
  local_1d0 = (int *)*local_310;
  local_390 = local_394;
  local_1c8 = local_1d0;
  local_1c0 = local_1d0;
  local_1b8 = local_1d0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_78,local_1d0,local_394,0);
  local_348 = (longlong *)(*(longlong *)this + 0x420);
  local_3c8 = 1;
  local_3cc = (uint)(2 < *(int *)(*(longlong *)this + 0x428));
  if (local_3cc == 0) {
    local_1b0 = 0;
    local_1ac = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)(int)local_348[1];
    local_408 = 2;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_1a8 = *local_348;
  local_308 = (undefined8 *)(local_1a8 + 0x20);
  local_1a0 = local_1a8;
  local_198 = local_308;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_68.AllocatorInstance)
  ;
  local_38c = *(int *)(local_308 + 1);
  local_190 = (int *)*local_308;
  local_388 = local_38c;
  local_188 = local_190;
  local_180 = local_190;
  local_178 = local_190;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_68,local_190,local_38c,0);
  local_340 = (longlong *)(*(longlong *)this + 0x420);
  local_3c0 = 1;
  local_3c4 = (uint)(1 < *(int *)(*(longlong *)this + 0x428));
  if (local_3c4 == 0) {
    local_170 = 0;
    local_16c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)(int)local_340[1];
    local_408 = 1;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_168 = *local_340;
  local_300 = (undefined8 *)(local_168 + 0x10);
  local_160 = local_168;
  local_158 = local_300;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_58.AllocatorInstance)
  ;
  local_384 = *(int *)(local_300 + 1);
  local_150 = (int *)*local_300;
  local_380 = local_384;
  local_148 = local_150;
  local_140 = local_150;
  local_138 = local_150;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_58,local_150,local_384,0);
  local_338 = (undefined8 *)(*(longlong *)this + 0x420);
  local_3b8 = 1;
  local_3bc = (uint)(0 < *(int *)(*(longlong *)this + 0x428));
  if (local_3bc == 0) {
    local_130 = 0;
    local_12c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_400 = (longlong)*(int *)(local_338 + 1);
    local_408 = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_2f8 = (undefined8 *)*local_338;
  local_128 = local_2f8;
  local_120 = local_2f8;
  local_118 = local_2f8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_48.AllocatorInstance)
  ;
  local_37c = *(int *)(local_2f8 + 1);
  local_110 = (int *)*local_2f8;
  local_378 = local_37c;
  local_108 = local_110;
  local_100 = local_110;
  local_f8 = local_110;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_48,local_110,local_37c,0);
  piVar4 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&local_c8,&local_b8,&local_38);
  piVar6 = &local_d8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&piVar6->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar4->_First + 1);
    piVar6 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar6->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (&local_e8,&local_d8);
  _vector_destructor_iterator_
            (&local_b8,0x10,8,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  local_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)this;
  local_3f8 = UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test3(local_f0,param_1,&local_e8)
  ;
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>(&local_e8);
  return (bool)local_3f8;
}

// operator() @ 1471053f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147105486) */
/* WARNING: Removing unreachable block (ram,0x0001471055dd) */
/* WARNING: Removing unreachable block (ram,0x00014710572e) */
/* WARNING: Removing unreachable block (ram,0x00014710586d) */
/* WARNING: Removing unreachable block (ram,0x000147105a1b) */
/* WARNING: Removing unreachable block (ram,0x000147105bc9) */
/* WARNING: Removing unreachable block (ram,0x000147105d77) */
/* WARNING: Removing unreachable block (ram,0x000147105f25) */
/* WARNING: Removing unreachable block (ram,0x0001471060d2) */
/* WARNING: Removing unreachable block (ram,0x00014710627d) */
/* WARNING: Removing unreachable block (ram,0x000147106434) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp'::__l2::<lambda_5>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar4;
  longlong lVar5;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar6;
  undefined1 auStack_538 [32];
  undefined8 local_518;
  longlong local_510;
  undefined1 local_508;
  uint local_504;
  undefined4 local_500;
  uint local_4fc;
  undefined4 local_4f8;
  uint local_4f4;
  undefined4 local_4f0;
  uint local_4ec;
  undefined4 local_4e8;
  uint local_4e4;
  undefined4 local_4e0;
  uint local_4dc;
  undefined4 local_4d8;
  uint local_4d4;
  undefined4 local_4d0;
  uint local_4cc;
  undefined4 local_4c8;
  uint local_4c4;
  undefined4 local_4c0;
  uint local_4bc;
  undefined4 local_4b8;
  uint local_4b4;
  undefined4 local_4b0;
  uint local_4ac;
  uint local_4a8;
  uint local_4a4;
  int local_4a0;
  int local_49c;
  int local_498;
  int local_494;
  int local_490;
  int local_48c;
  int local_488;
  int local_484;
  int local_480;
  int local_47c;
  int local_478;
  int local_474;
  int local_470;
  int local_46c;
  int local_468;
  int local_464;
  longlong *local_460;
  undefined8 *local_458;
  longlong *local_450;
  longlong *local_448;
  longlong *local_440;
  longlong *local_438;
  longlong *local_430;
  longlong *local_428;
  undefined8 *local_420;
  longlong *local_418;
  longlong *local_410;
  undefined8 *local_408;
  undefined8 *local_400;
  undefined8 *local_3f8;
  undefined8 *local_3f0;
  undefined8 *local_3e8;
  undefined8 *local_3e0;
  undefined8 *local_3d8;
  undefined8 *local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  longlong local_3c0;
  longlong local_3b8;
  uint *local_3b0;
  FMassEntityQuery *local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  uint *local_398;
  uint *local_390;
  uint *local_388;
  FMassEntityQuery *local_380;
  undefined4 local_378;
  undefined4 local_374;
  longlong local_370;
  longlong local_368;
  uint *local_360;
  FMassEntityQuery *local_358;
  undefined4 local_350;
  undefined4 local_34c;
  longlong local_348;
  longlong local_340;
  undefined8 *local_338;
  int *local_330;
  int *local_328;
  int *local_320;
  int *local_318;
  undefined4 local_310;
  undefined4 local_30c;
  longlong local_308;
  longlong local_300;
  undefined8 *local_2f8;
  int *local_2f0;
  int *local_2e8;
  int *local_2e0;
  int *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  longlong local_2c8;
  longlong local_2c0;
  undefined8 *local_2b8;
  int *local_2b0;
  int *local_2a8;
  int *local_2a0;
  int *local_298;
  undefined4 local_290;
  undefined4 local_28c;
  longlong local_288;
  longlong local_280;
  undefined8 *local_278;
  int *local_270;
  int *local_268;
  int *local_260;
  int *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  longlong local_248;
  longlong local_240;
  undefined8 *local_238;
  int *local_230;
  int *local_228;
  int *local_220;
  int *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  int *local_1f0;
  int *local_1e8;
  int *local_1e0;
  int *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 *local_1b8;
  int *local_1b0;
  int *local_1a8;
  int *local_1a0;
  int *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong local_188;
  longlong local_180;
  undefined8 *local_178;
  int *local_170;
  int *local_168;
  int *local_160;
  int *local_158;
  FArchetypeGroup_MultiLevelQueryBase *local_150;
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_148;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_138;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_128;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_118;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_108;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_f8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_e8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_d8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_c8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_b8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_a8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_98;
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)> local_88;
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)> local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_538;
  FMassEntityQuery::ResetGrouping((FMassEntityQuery *)(*(longlong *)this + 0xb0));
  local_3a8 = (FMassEntityQuery *)(*(longlong *)this + 0xb0);
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)><UE::Mass::Test::DescendingGroupSorter::<lambda>_&>
            (&local_88,&UE::Mass::Test::DescendingGroupSorter);
  local_460 = (longlong *)(*(longlong *)this + 0x90);
  local_500 = 1;
  local_504 = (uint)(2 < *(int *)(*(longlong *)this + 0x98));
  if (local_504 == 0) {
    local_3c8 = 0;
    local_3c4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_510 = (longlong)(int)local_460[1];
    local_518 = 2;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_3c0 = *local_460;
  local_3b0 = (uint *)(local_3c0 + 8);
  local_4ac = *local_3b0;
  local_3b8 = local_3c0;
  FMassEntityQuery::GroupBy(local_3a8,(FArchetypeGroupType)local_4ac,&local_88);
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  ~TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>(&local_88);
  local_380 = (FMassEntityQuery *)(*(longlong *)this + 0xb0);
  local_458 = (undefined8 *)(*(longlong *)this + 0x90);
  local_4f8 = 1;
  local_4fc = (uint)(0 < *(int *)(*(longlong *)this + 0x98));
  if (local_4fc == 0) {
    local_3a0 = 0;
    local_39c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_510 = (longlong)*(int *)(local_458 + 1);
    local_518 = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_398 = (uint *)*local_458;
  local_4a8 = *local_398;
  local_390 = local_398;
  local_388 = local_398;
  FMassEntityQuery::GroupBy(local_380,(FArchetypeGroupType)local_4a8);
  local_358 = (FMassEntityQuery *)(*(longlong *)this + 0xb0);
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)><UE::Mass::Test::DescendingGroupSorter::<lambda>_&>
            (&local_58,&UE::Mass::Test::DescendingGroupSorter);
  local_450 = (longlong *)(*(longlong *)this + 0x90);
  local_4f0 = 1;
  local_4f4 = (uint)(1 < *(int *)(*(longlong *)this + 0x98));
  if (local_4f4 == 0) {
    local_378 = 0;
    local_374 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_510 = (longlong)(int)local_450[1];
    local_518 = 1;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_370 = *local_450;
  local_360 = (uint *)(local_370 + 4);
  local_4a4 = *local_360;
  local_368 = local_370;
  FMassEntityQuery::GroupBy(local_358,(FArchetypeGroupType)local_4a4,&local_58);
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  ~TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>(&local_58);
  local_448 = (longlong *)(*(longlong *)this + 0x420);
  local_4e8 = 1;
  local_4ec = (uint)(6 < *(int *)(*(longlong *)this + 0x428));
  if (local_4ec == 0) {
    local_350 = 0;
    local_34c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_510 = (longlong)(int)local_448[1];
    local_518 = 6;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_348 = *local_448;
  local_408 = (undefined8 *)(local_348 + 0x60);
  local_340 = local_348;
  local_338 = local_408;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_118.AllocatorInstance);
  local_4a0 = *(int *)(local_408 + 1);
  local_330 = (int *)*local_408;
  local_49c = local_4a0;
  local_328 = local_330;
  local_320 = local_330;
  local_318 = local_330;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_118,local_330,local_4a0,0);
  local_440 = (longlong *)(*(longlong *)this + 0x420);
  local_4e0 = 1;
  local_4e4 = (uint)(7 < *(int *)(*(longlong *)this + 0x428));
  if (local_4e4 == 0) {
    local_310 = 0;
    local_30c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_510 = (longlong)(int)local_440[1];
    local_518 = 7;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_308 = *local_440;
  local_400 = (undefined8 *)(local_308 + 0x70);
  local_300 = local_308;
  local_2f8 = local_400;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_108.AllocatorInstance);
  local_498 = *(int *)(local_400 + 1);
  local_2f0 = (int *)*local_400;
  local_494 = local_498;
  local_2e8 = local_2f0;
  local_2e0 = local_2f0;
  local_2d8 = local_2f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_108,local_2f0,local_498,0);
  local_438 = (longlong *)(*(longlong *)this + 0x420);
  local_4d8 = 1;
  local_4dc = (uint)(4 < *(int *)(*(longlong *)this + 0x428));
  if (local_4dc == 0) {
    local_2d0 = 0;
    local_2cc = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_510 = (longlong)(int)local_438[1];
    local_518 = 4;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_2c8 = *local_438;
  local_3f8 = (undefined8 *)(local_2c8 + 0x40);
  local_2c0 = local_2c8;
  local_2b8 = local_3f8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_f8.AllocatorInstance)
  ;
  local_490 = *(int *)(local_3f8 + 1);
  local_2b0 = (int *)*local_3f8;
  local_48c = local_490;
  local_2a8 = local_2b0;
  local_2a0 = local_2b0;
  local_298 = local_2b0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_f8,local_2b0,local_490,0);
  local_430 = (longlong *)(*(longlong *)this + 0x420);
  local_4d0 = 1;
  local_4d4 = (uint)(3 < *(int *)(*(longlong *)this + 0x428));
  if (local_4d4 == 0) {
    local_290 = 0;
    local_28c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_510 = (longlong)(int)local_430[1];
    local_518 = 3;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_288 = *local_430;
  local_3f0 = (undefined8 *)(local_288 + 0x30);
  local_280 = local_288;
  local_278 = local_3f0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_e8.AllocatorInstance)
  ;
  local_488 = *(int *)(local_3f0 + 1);
  local_270 = (int *)*local_3f0;
  local_484 = local_488;
  local_268 = local_270;
  local_260 = local_270;
  local_258 = local_270;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_e8,local_270,local_488,0);
  local_428 = (longlong *)(*(longlong *)this + 0x420);
  local_4c8 = 1;
  local_4cc = (uint)(5 < *(int *)(*(longlong *)this + 0x428));
  if (local_4cc == 0) {
    local_250 = 0;
    local_24c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_510 = (longlong)(int)local_428[1];
    local_518 = 5;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_248 = *local_428;
  local_3e8 = (undefined8 *)(local_248 + 0x50);
  local_240 = local_248;
  local_238 = local_3e8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_d8.AllocatorInstance)
  ;
  local_480 = *(int *)(local_3e8 + 1);
  local_230 = (int *)*local_3e8;
  local_47c = local_480;
  local_228 = local_230;
  local_220 = local_230;
  local_218 = local_230;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_d8,local_230,local_480,0);
  local_420 = (undefined8 *)(*(longlong *)this + 0x420);
  local_4c0 = 1;
  local_4c4 = (uint)(0 < *(int *)(*(longlong *)this + 0x428));
  if (local_4c4 == 0) {
    local_210 = 0;
    local_20c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_510 = (longlong)*(int *)(local_420 + 1);
    local_518 = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_3e0 = (undefined8 *)*local_420;
  local_208 = local_3e0;
  local_200 = local_3e0;
  local_1f8 = local_3e0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_c8.AllocatorInstance)
  ;
  local_478 = *(int *)(local_3e0 + 1);
  local_1f0 = (int *)*local_3e0;
  local_474 = local_478;
  local_1e8 = local_1f0;
  local_1e0 = local_1f0;
  local_1d8 = local_1f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_c8,local_1f0,local_478,0);
  local_418 = (longlong *)(*(longlong *)this + 0x420);
  local_4b8 = 1;
  local_4bc = (uint)(2 < *(int *)(*(longlong *)this + 0x428));
  if (local_4bc == 0) {
    local_1d0 = 0;
    local_1cc = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_510 = (longlong)(int)local_418[1];
    local_518 = 2;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_1c8 = *local_418;
  local_3d8 = (undefined8 *)(local_1c8 + 0x20);
  local_1c0 = local_1c8;
  local_1b8 = local_3d8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_b8.AllocatorInstance)
  ;
  local_470 = *(int *)(local_3d8 + 1);
  local_1b0 = (int *)*local_3d8;
  local_46c = local_470;
  local_1a8 = local_1b0;
  local_1a0 = local_1b0;
  local_198 = local_1b0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_b8,local_1b0,local_470,0);
  local_410 = (longlong *)(*(longlong *)this + 0x420);
  local_4b0 = 1;
  local_4b4 = (uint)(1 < *(int *)(*(longlong *)this + 0x428));
  if (local_4b4 == 0) {
    local_190 = 0;
    local_18c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_510 = (longlong)(int)local_410[1];
    local_518 = 1;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_188 = *local_410;
  local_3d0 = (undefined8 *)(local_188 + 0x10);
  local_180 = local_188;
  local_178 = local_3d0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_a8.AllocatorInstance)
  ;
  local_468 = *(int *)(local_3d0 + 1);
  local_170 = (int *)*local_3d0;
  local_464 = local_468;
  local_168 = local_170;
  local_160 = local_170;
  local_158 = local_170;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&local_a8,local_170,local_468,0);
  piVar4 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&local_128,&local_118,&local_98);
  piVar6 = &local_138;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&piVar6->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar4->_First + 1);
    piVar6 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar6->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (&local_148,&local_138);
  _vector_destructor_iterator_
            (&local_118,0x10,8,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  local_150 = *(FArchetypeGroup_MultiLevelQueryBase **)this;
  local_508 = UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::TestRaw
                        (local_150,param_1,&local_148);
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>(&local_148);
  return (bool)local_508;
}

// AssignGroups @ 147110770

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::AssignGroups
          (FArchetypeGroup_MultiLevelQuery_Complex *this)

{
  int iVar1;
  FArchetypeGroupID FVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  TArrayView<FMassEntityHandle_const_,int> *pTVar7;
  FArchetypeGroupID *pFVar8;
  FArchetypeGroupHandle *pFVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int local_178;
  int local_174;
  uint local_16c;
  int local_158;
  FArchetypeGroupID local_108 [2];
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  longlong local_f0;
  int *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  longlong local_d0;
  FMassEntityHandle *local_c8;
  TArrayView<FMassEntityHandle_const_,int> *local_c0;
  FArchetypeGroupID *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  longlong local_a0;
  uint *local_98;
  FArchetypeGroupHandle local_90;
  FArchetypeGroupHandle local_88;
  FMassEntityManager *local_80;
  FArchetypeGroupHandle local_78;
  TArrayView<FMassEntityHandle,int> local_70;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  TArrayView<FMassEntityHandle_const_,int> local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  
  lVar4 = this->_padding_;
  local_178 = 0;
  do {
    if ((int)lVar4 <= local_178) {
      return;
    }
    if (local_178 < 0 || (int)this->_padding_ <= local_178) {
      local_100 = 0;
      local_fc = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_f8 = this->_padding_;
    local_e8 = (int *)(local_f8 + (longlong)local_178 * 4);
    iVar1 = *local_e8;
    local_16c = 0;
    local_f0 = local_f8;
    for (local_174 = 0; local_174 < (int)this->_padding_; local_174 = local_174 + iVar1) {
      iVar6 = (int)this->_padding_ - local_174;
      local_158 = iVar1;
      if (iVar6 < iVar1) {
        local_158 = iVar6;
      }
      if (local_174 < 0 || (int)this->_padding_ <= local_174) {
        local_e0 = 0;
        local_dc = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_d8 = this->_padding_;
      local_c8 = (FMassEntityHandle *)(local_d8 + (longlong)local_174 * 8);
      local_d0 = local_d8;
      MakeArrayView<FMassEntityHandle>(&local_70,local_c8,local_158);
      local_80 = TSharedPtr<FMassEntityManager,1>::operator->
                           ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
      local_c0 = &local_28;
      pTVar7 = TArrayView<FMassEntityHandle_const_,int>::
               TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>_&,TArrayView<FMassEntityHandle,int>_>
                         (local_c0,&local_70);
      puVar11 = local_60;
      for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar11 = *(undefined1 *)&pTVar7->DataPtr;
        pTVar7 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar7->DataPtr + 1);
        puVar11 = puVar11 + 1;
      }
      puVar11 = local_60;
      puVar12 = local_50;
      for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      local_b8 = local_108;
      pFVar8 = FArchetypeGroupID::FArchetypeGroupID(local_b8,local_16c);
      FVar2.ID = pFVar8->ID;
      if (local_178 < 0 || (int)this->_padding_ <= local_178) {
        local_b0 = 0;
        local_ac = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_a8 = this->_padding_;
      local_98 = (uint *)(local_a8 + (longlong)local_178 * 4);
      local_a0 = local_a8;
      pFVar9 = FArchetypeGroupHandle::FArchetypeGroupHandle
                         (&local_78,(FArchetypeGroupType)*local_98,FVar2);
      local_90 = *pFVar9;
      puVar11 = local_50;
      pTVar7 = &local_38;
      for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
        *(undefined1 *)&pTVar7->DataPtr = *puVar11;
        puVar11 = puVar11 + 1;
        pTVar7 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar7->DataPtr + 1);
      }
      local_88 = local_90;
      FMassEntityManager::BatchGroupEntities(local_80,local_90,&local_38);
      local_16c = local_16c + 1;
    }
    local_178 = local_178 + 1;
  } while( true );
}

// SetUp @ 14719efa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp
          (FArchetypeGroup_MultiLevelQuery_Complex *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  initializer_list<int_const_> *piVar5;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar6;
  longlong lVar7;
  initializer_list<int_const_> *piVar8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar9;
  undefined1 auStack_708 [32];
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_6e8;
  ulonglong local_6e0;
  longlong local_6d8;
  longlong local_6d0;
  undefined8 local_6c8;
  longlong *local_6b8;
  longlong *local_6b0;
  longlong *local_6a8;
  longlong *local_6a0;
  longlong *local_698;
  int local_690;
  int local_68c;
  int local_688;
  int local_684;
  int local_680;
  int local_67c;
  int local_678 [3];
  int local_66c;
  int local_668 [2];
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_660;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_658;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_650;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_648;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_640;
  int local_638 [4];
  int local_628 [4];
  int local_618;
  int local_614;
  int local_610;
  longlong *local_608;
  <lambda_1> local_600;
  <lambda_1> *local_5f8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_5f0;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_5e8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_5e0;
  ulonglong local_5d8;
  ulonglong local_5d0;
  ulonglong local_5c8;
  undefined4 local_5c0;
  undefined4 local_5bc;
  ulonglong local_5b8;
  ulonglong local_5b0;
  ulonglong local_5a8;
  longlong local_5a0;
  longlong local_598;
  ulonglong local_590;
  longlong local_588;
  void *local_580;
  TFunction<bool___cdecl(FMassExecutionContext_&)> *local_578;
  <lambda_2> local_570;
  <lambda_2> *local_568;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_560;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_558;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_550;
  ulonglong local_548;
  ulonglong local_540;
  ulonglong local_538;
  undefined4 local_530;
  undefined4 local_52c;
  ulonglong local_528;
  ulonglong local_520;
  ulonglong local_518;
  longlong local_510;
  longlong local_508;
  ulonglong local_500;
  longlong local_4f8;
  void *local_4f0;
  TFunction<bool___cdecl(FMassExecutionContext_&)> *local_4e8;
  <lambda_3> local_4e0;
  <lambda_3> *local_4d8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_4d0;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_4c8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_4c0;
  ulonglong local_4b8;
  ulonglong local_4b0;
  ulonglong local_4a8;
  undefined4 local_4a0;
  undefined4 local_49c;
  ulonglong local_498;
  ulonglong local_490;
  ulonglong local_488;
  longlong local_480;
  longlong local_478;
  ulonglong local_470;
  longlong local_468;
  void *local_460;
  TFunction<bool___cdecl(FMassExecutionContext_&)> *local_458;
  <lambda_4> local_450;
  <lambda_4> *local_448;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_440;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_438;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_430;
  ulonglong local_428;
  ulonglong local_420;
  ulonglong local_418;
  undefined4 local_410;
  undefined4 local_40c;
  ulonglong local_408;
  ulonglong local_400;
  ulonglong local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  ulonglong local_3e0;
  longlong local_3d8;
  void *local_3d0;
  TFunction<bool___cdecl(FMassExecutionContext_&)> *local_3c8;
  <lambda_5> local_3c0;
  <lambda_5> *local_3b8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_3b0;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_3a8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  *local_3a0;
  ulonglong local_398;
  ulonglong local_390;
  ulonglong local_388;
  undefined4 local_380;
  undefined4 local_37c;
  ulonglong local_378;
  ulonglong local_370;
  ulonglong local_368;
  longlong local_360;
  longlong local_358;
  ulonglong local_350;
  longlong local_348;
  void *local_340;
  TFunction<bool___cdecl(FMassExecutionContext_&)> *local_338;
  int local_330;
  int local_32c;
  initializer_list<int_const_> local_328;
  initializer_list<int_const_> local_318;
  initializer_list<int_const_> local_308;
  initializer_list<int_const_> local_2f8;
  initializer_list<int_const_> local_2e8;
  initializer_list<int_const_> local_2d8;
  initializer_list<int_const_> local_2c8;
  initializer_list<int_const_> local_2b8;
  initializer_list<int_const_> local_2a8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_298;
  initializer_list<int_const_> local_288;
  initializer_list<int_const_> local_278;
  initializer_list<int_const_> local_268;
  initializer_list<int_const_> local_258;
  initializer_list<int_const_> local_248;
  initializer_list<int_const_> local_238;
  initializer_list<int_const_> local_228;
  initializer_list<int_const_> local_218;
  initializer_list<int_const_> local_208;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> local_1f8;
  int local_1e8 [4];
  int local_1d8 [4];
  int local_1c8 [4];
  int local_1b8 [4];
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_1a8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_198;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_188;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_178;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_168;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_158;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_148;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_138;
  TArray<int_const_,TSizedDefaultAllocator<32>_> local_128;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  local_118;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  local_e8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  local_b8;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  local_88;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
  local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_708;
  bVar2 = FArchetypeGroup_MultiLevelQueryBase::SetUp((FArchetypeGroup_MultiLevelQueryBase *)this);
  if (bVar2) {
    local_1e8[0] = 3;
    local_1e8[1] = 4;
    local_1e8[2] = 6;
    piVar5 = std::initializer_list<int_const_>::initializer_list<int_const_>
                       (&local_288,local_1e8,local_1e8 + 3);
    piVar8 = &local_328;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar5->_First;
      piVar5 = (initializer_list<int_const_> *)((longlong)&piVar5->_First + 1);
      piVar8 = (initializer_list<int_const_> *)((longlong)&piVar8->_First + 1);
    }
    TArray<int_const_,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int_const_,TSizedDefaultAllocator<32>_> *)&this->_padding_,&local_328);
    local_1d8[0] = 0;
    local_1d8[1] = 1;
    local_1d8[2] = 2;
    piVar5 = std::initializer_list<int_const_>::initializer_list<int_const_>
                       (&local_278,local_1d8,local_1d8 + 3);
    piVar8 = &local_318;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar5->_First;
      piVar5 = (initializer_list<int_const_> *)((longlong)&piVar5->_First + 1);
      piVar8 = (initializer_list<int_const_> *)((longlong)&piVar8->_First + 1);
    }
    TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
              (&local_1a8,&local_318);
    local_67c = 3;
    piVar5 = std::initializer_list<int_const_>::initializer_list<int_const_>
                       (&local_268,&local_67c,local_678);
    piVar8 = &local_308;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar5->_First;
      piVar5 = (initializer_list<int_const_> *)((longlong)&piVar5->_First + 1);
      piVar8 = (initializer_list<int_const_> *)((longlong)&piVar8->_First + 1);
    }
    TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
              (&local_198,&local_308);
    local_638[0] = 4;
    local_638[1] = 5;
    piVar5 = std::initializer_list<int_const_>::initializer_list<int_const_>
                       (&local_258,local_638,local_638 + 2);
    piVar8 = &local_2f8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar5->_First;
      piVar5 = (initializer_list<int_const_> *)((longlong)&piVar5->_First + 1);
      piVar8 = (initializer_list<int_const_> *)((longlong)&piVar8->_First + 1);
    }
    TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
              (&local_188,&local_2f8);
    local_628[0] = 6;
    local_628[1] = 7;
    piVar5 = std::initializer_list<int_const_>::initializer_list<int_const_>
                       (&local_248,local_628,local_628 + 2);
    piVar8 = &local_2e8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar5->_First;
      piVar5 = (initializer_list<int_const_> *)((longlong)&piVar5->_First + 1);
      piVar8 = (initializer_list<int_const_> *)((longlong)&piVar8->_First + 1);
    }
    TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
              (&local_178,&local_2e8);
    local_678[1] = 8;
    piVar5 = std::initializer_list<int_const_>::initializer_list<int_const_>
                       (&local_238,local_678 + 1,local_678 + 2);
    piVar8 = &local_2d8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar5->_First;
      piVar5 = (initializer_list<int_const_> *)((longlong)&piVar5->_First + 1);
      piVar8 = (initializer_list<int_const_> *)((longlong)&piVar8->_First + 1);
    }
    TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
              (&local_168,&local_2d8);
    local_1c8[0] = 9;
    local_1c8[1] = 10;
    local_1c8[2] = 0xb;
    piVar5 = std::initializer_list<int_const_>::initializer_list<int_const_>
                       (&local_228,local_1c8,local_1c8 + 3);
    piVar8 = &local_2c8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar5->_First;
      piVar5 = (initializer_list<int_const_> *)((longlong)&piVar5->_First + 1);
      piVar8 = (initializer_list<int_const_> *)((longlong)&piVar8->_First + 1);
    }
    TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
              (&local_158,&local_2c8);
    local_1b8[0] = 0xc;
    local_1b8[1] = 0xd;
    local_1b8[2] = 0xe;
    piVar5 = std::initializer_list<int_const_>::initializer_list<int_const_>
                       (&local_218,local_1b8,local_1b8 + 3);
    piVar8 = &local_2b8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar5->_First;
      piVar5 = (initializer_list<int_const_> *)((longlong)&piVar5->_First + 1);
      piVar8 = (initializer_list<int_const_> *)((longlong)&piVar8->_First + 1);
    }
    TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
              (&local_148,&local_2b8);
    local_66c = 0xf;
    piVar5 = std::initializer_list<int_const_>::initializer_list<int_const_>
                       (&local_208,&local_66c,local_668);
    piVar8 = &local_2a8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&piVar8->_First = *(undefined1 *)&piVar5->_First;
      piVar5 = (initializer_list<int_const_> *)((longlong)&piVar5->_First + 1);
      piVar8 = (initializer_list<int_const_> *)((longlong)&piVar8->_First + 1);
    }
    TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
              (&local_138,&local_2a8);
    piVar6 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
             initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                       (&local_1f8,&local_1a8,&local_128);
    piVar9 = &local_298;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&piVar9->_First = *(undefined1 *)&piVar6->_First;
      piVar6 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
               ((longlong)&piVar6->_First + 1);
      piVar9 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
               ((longlong)&piVar9->_First + 1);
    }
    TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
              (&this->OderedSets,&local_298);
    _vector_destructor_iterator_
              (&local_1a8,0x10,8,
               TArray<int_const_,TSizedDefaultAllocator<32>_>::
               ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
    local_608 = &this->_padding_;
    TArray<TFunction<bool___cdecl(FMassExecutionContext_&)>,TSizedDefaultAllocator<32>_>::Reset
              ((TArray<TFunction<bool___cdecl(FMassExecutionContext_&)>,TSizedDefaultAllocator<32>_>
                *)local_608,0);
    local_6b8 = &this->_padding_;
    local_5f8 = &local_600;
    local_600.__this = this;
    TFunction<bool___cdecl(FMassExecutionContext_&)>::
    TFunction<bool___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp_::__l2::<lambda_1>_>
              ((TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_118,local_5f8);
    local_660 = &local_118;
    local_5f0 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
                 *)*local_6b8;
    local_5e8 = local_5f0;
    local_5e0 = local_5f0;
    if ((local_5f0 <= local_660) &&
       (local_5d8 = *local_6b8, local_5d0 = local_5d8, local_5c8 = local_5d8,
       local_660 <
       (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
        *)(local_5d8 + (longlong)*(int *)((longlong)local_6b8 + 0xc) * 0x30))) {
      local_5c0 = 0;
      local_5bc = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_6d0 = (longlong)(int)local_6b8[1];
      local_6d8 = (longlong)*(int *)((longlong)local_6b8 + 0xc);
      local_6e0 = *local_6b8;
      local_6c8 = 0x30;
      local_6e8 = local_660;
      local_5b8 = local_6e0;
      local_5b0 = local_6e0;
      local_5a8 = local_6e0;
      local_5a0 = local_6d0;
      local_598 = local_6d8;
      local_590 = local_6e0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((int)local_6b8[1] == *(int *)((longlong)local_6b8 + 0xc)) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,(ForAnyElementType *)local_6b8,(int *)((longlong)local_6b8 + 0xc));
      *(int *)(local_6b8 + 1) = iVar4;
    }
    local_690 = (int)local_6b8[1];
    *(int *)(local_6b8 + 1) = (int)local_6b8[1] + 1;
    local_588 = *local_6b8;
    local_580 = (void *)(local_588 + (longlong)local_690 * 0x30);
    local_578 = ::operator_new(0x30,local_580);
    TFunction<bool___cdecl(FMassExecutionContext_&)>::
    TFunction<bool___cdecl(FMassExecutionContext_&)>
              (local_578,(TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_118);
    local_330 = local_690;
    Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
    ::
    ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
              (&local_118);
    local_6b0 = &this->_padding_;
    local_568 = &local_570;
    local_570.__this = this;
    TFunction<bool___cdecl(FMassExecutionContext_&)>::
    TFunction<bool___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp_::__l2::<lambda_2>_>
              ((TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_e8,local_568);
    local_658 = &local_e8;
    local_560 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
                 *)*local_6b0;
    local_558 = local_560;
    local_550 = local_560;
    if ((local_560 <= local_658) &&
       (local_548 = *local_6b0, local_540 = local_548, local_538 = local_548,
       local_658 <
       (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
        *)(local_548 + (longlong)*(int *)((longlong)local_6b0 + 0xc) * 0x30))) {
      local_530 = 0;
      local_52c = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_6d0 = (longlong)(int)local_6b0[1];
      local_6d8 = (longlong)*(int *)((longlong)local_6b0 + 0xc);
      local_6e0 = *local_6b0;
      local_6c8 = 0x30;
      local_6e8 = local_658;
      local_528 = local_6e0;
      local_520 = local_6e0;
      local_518 = local_6e0;
      local_510 = local_6d0;
      local_508 = local_6d8;
      local_500 = local_6e0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((int)local_6b0[1] == *(int *)((longlong)local_6b0 + 0xc)) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,(ForAnyElementType *)local_6b0,(int *)((longlong)local_6b0 + 0xc));
      *(int *)(local_6b0 + 1) = iVar4;
    }
    local_68c = (int)local_6b0[1];
    *(int *)(local_6b0 + 1) = (int)local_6b0[1] + 1;
    local_4f8 = *local_6b0;
    local_4f0 = (void *)(local_4f8 + (longlong)local_68c * 0x30);
    local_4e8 = ::operator_new(0x30,local_4f0);
    TFunction<bool___cdecl(FMassExecutionContext_&)>::
    TFunction<bool___cdecl(FMassExecutionContext_&)>
              (local_4e8,(TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_e8);
    local_32c = local_68c;
    Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
    ::
    ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
              (&local_e8);
    local_6a8 = &this->_padding_;
    local_4d8 = &local_4e0;
    local_4e0.__this = this;
    TFunction<bool___cdecl(FMassExecutionContext_&)>::
    TFunction<bool___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp_::__l2::<lambda_3>_>
              ((TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_b8,local_4d8);
    local_650 = &local_b8;
    local_4d0 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
                 *)*local_6a8;
    local_4c8 = local_4d0;
    local_4c0 = local_4d0;
    if ((local_4d0 <= local_650) &&
       (local_4b8 = *local_6a8, local_4b0 = local_4b8, local_4a8 = local_4b8,
       local_650 <
       (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
        *)(local_4b8 + (longlong)*(int *)((longlong)local_6a8 + 0xc) * 0x30))) {
      local_4a0 = 0;
      local_49c = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_6d0 = (longlong)(int)local_6a8[1];
      local_6d8 = (longlong)*(int *)((longlong)local_6a8 + 0xc);
      local_6e0 = *local_6a8;
      local_6c8 = 0x30;
      local_6e8 = local_650;
      local_498 = local_6e0;
      local_490 = local_6e0;
      local_488 = local_6e0;
      local_480 = local_6d0;
      local_478 = local_6d8;
      local_470 = local_6e0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((int)local_6a8[1] == *(int *)((longlong)local_6a8 + 0xc)) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,(ForAnyElementType *)local_6a8,(int *)((longlong)local_6a8 + 0xc));
      *(int *)(local_6a8 + 1) = iVar4;
    }
    local_688 = (int)local_6a8[1];
    *(int *)(local_6a8 + 1) = (int)local_6a8[1] + 1;
    local_468 = *local_6a8;
    local_460 = (void *)(local_468 + (longlong)local_688 * 0x30);
    local_458 = ::operator_new(0x30,local_460);
    TFunction<bool___cdecl(FMassExecutionContext_&)>::
    TFunction<bool___cdecl(FMassExecutionContext_&)>
              (local_458,(TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_b8);
    local_618 = local_688;
    Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
    ::
    ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
              (&local_b8);
    local_6a0 = &this->_padding_;
    local_448 = &local_450;
    local_450.__this = this;
    TFunction<bool___cdecl(FMassExecutionContext_&)>::
    TFunction<bool___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp_::__l2::<lambda_4>_>
              ((TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_88,local_448);
    local_648 = &local_88;
    local_440 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
                 *)*local_6a0;
    local_438 = local_440;
    local_430 = local_440;
    if ((local_440 <= local_648) &&
       (local_428 = *local_6a0, local_420 = local_428, local_418 = local_428,
       local_648 <
       (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
        *)(local_428 + (longlong)*(int *)((longlong)local_6a0 + 0xc) * 0x30))) {
      local_410 = 0;
      local_40c = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_6d0 = (longlong)(int)local_6a0[1];
      local_6d8 = (longlong)*(int *)((longlong)local_6a0 + 0xc);
      local_6e0 = *local_6a0;
      local_6c8 = 0x30;
      local_6e8 = local_648;
      local_408 = local_6e0;
      local_400 = local_6e0;
      local_3f8 = local_6e0;
      local_3f0 = local_6d0;
      local_3e8 = local_6d8;
      local_3e0 = local_6e0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((int)local_6a0[1] == *(int *)((longlong)local_6a0 + 0xc)) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,(ForAnyElementType *)local_6a0,(int *)((longlong)local_6a0 + 0xc));
      *(int *)(local_6a0 + 1) = iVar4;
    }
    local_684 = (int)local_6a0[1];
    *(int *)(local_6a0 + 1) = (int)local_6a0[1] + 1;
    local_3d8 = *local_6a0;
    local_3d0 = (void *)(local_3d8 + (longlong)local_684 * 0x30);
    local_3c8 = ::operator_new(0x30,local_3d0);
    TFunction<bool___cdecl(FMassExecutionContext_&)>::
    TFunction<bool___cdecl(FMassExecutionContext_&)>
              (local_3c8,(TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_88);
    local_614 = local_684;
    Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
    ::
    ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
              (&local_88);
    local_698 = &this->_padding_;
    local_3b8 = &local_3c0;
    local_3c0.__this = this;
    TFunction<bool___cdecl(FMassExecutionContext_&)>::
    TFunction<bool___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp_::__l2::<lambda_5>_>
              ((TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_58,local_3b8);
    local_640 = &local_58;
    local_3b0 = (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
                 *)*local_698;
    local_3a8 = local_3b0;
    local_3a0 = local_3b0;
    if ((local_3b0 <= local_640) &&
       (local_398 = *local_698, local_390 = local_398, local_388 = local_398,
       local_640 <
       (TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
        *)(local_398 + (longlong)*(int *)((longlong)local_698 + 0xc) * 0x30))) {
      local_380 = 0;
      local_37c = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_6d0 = (longlong)(int)local_698[1];
      local_6d8 = (longlong)*(int *)((longlong)local_698 + 0xc);
      local_6e0 = *local_698;
      local_6c8 = 0x30;
      local_6e8 = local_640;
      local_378 = local_6e0;
      local_370 = local_6e0;
      local_368 = local_6e0;
      local_360 = local_6d0;
      local_358 = local_6d8;
      local_350 = local_6e0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((int)local_698[1] == *(int *)((longlong)local_698 + 0xc)) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,(ForAnyElementType *)local_698,(int *)((longlong)local_698 + 0xc));
      *(int *)(local_698 + 1) = iVar4;
    }
    local_680 = (int)local_698[1];
    *(int *)(local_698 + 1) = (int)local_698[1] + 1;
    local_348 = *local_698;
    local_340 = (void *)(local_348 + (longlong)local_680 * 0x30);
    local_338 = ::operator_new(0x30,local_340);
    TFunction<bool___cdecl(FMassExecutionContext_&)>::
    TFunction<bool___cdecl(FMassExecutionContext_&)>
              (local_338,(TFunction<bool___cdecl(FMassExecutionContext_&)> *)&local_58);
    local_610 = local_680;
    Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
    ::
    ~TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FMassExecutionContext_&)>
              (&local_58);
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

