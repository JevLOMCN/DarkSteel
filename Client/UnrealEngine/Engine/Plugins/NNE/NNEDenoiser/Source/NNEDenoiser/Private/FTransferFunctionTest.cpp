// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 9

// GetTestFlags @ 14ead9bd0

EAutomationTestFlags __thiscall
UE::NNEDenoiser::Private::FTransferFunctionTest::GetTestFlags(FTransferFunctionTest *this)

{
  return EngineFilter|RequiresUser|NonNullRHI|ProgramContext|CommandletContext|ServerContext|
         ClientContext|EditorContext;
}

// IsStressTest @ 14ead9be0

bool __thiscall
UE::NNEDenoiser::Private::FTransferFunctionTest::IsStressTest(FTransferFunctionTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14ead9c30

uint __thiscall
UE::NNEDenoiser::Private::FTransferFunctionTest::GetRequiredDeviceNum(FTransferFunctionTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14ead9c40

FString * __thiscall
UE::NNEDenoiser::Private::FTransferFunctionTest::GetTestSourceFileName
          (FTransferFunctionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUnitTestOidn.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14ead9c70

int __thiscall
UE::NNEDenoiser::Private::FTransferFunctionTest::GetTestSourceFileLine(FTransferFunctionTest *this)

{
  return 0x1f;
}

// GetTests @ 14ead9c80

/* WARNING: Removing unreachable block (ram,0x00014ead9d6d) */
/* WARNING: Removing unreachable block (ram,0x00014ead9e38) */

void __thiscall
UE::NNEDenoiser::Private::FTransferFunctionTest::GetTests
          (FTransferFunctionTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"NNEDenoiser.UnitTests.OIDN.TransferFunction.Forward");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 14ead9e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest
          (FTransferFunctionTest *this,FString *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FEvent *pFVar13;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar14;
  code **ppcVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  float fVar23;
  float fVar24;
  undefined1 auStackY_198 [32];
  ForAnyElementType local_148;
  int local_140;
  int iStack_13c;
  ForAnyElementType local_138;
  int local_130 [2];
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_128;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  code *local_e8 [2];
  code *local_d8 [3];
  code **local_c0;
  undefined1 local_b8 [40];
  code **local_90;
  byte local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_f8 = 0x3f000000;
  uVar18 = 0;
  uStack_f4 = 0x40000000;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 2;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,2,0,&local_118,2,&local_10c);
  *(ulonglong *)local_118.Data = CONCAT44(uStack_f4,local_f8);
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_128,0x1fe000,Default)
  ;
  fVar4 = __real_38000100;
  uVar17 = uVar18;
  uVar20 = uVar18;
  if (0 < local_128.ArrayNum) {
    do {
      uVar8 = rand();
      uVar9 = rand();
      uVar10 = rand();
      uVar19 = (uint)uVar20;
      uVar11 = 0;
      if ((int)uVar19 < local_128.ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      *(float *)(local_128.AllocatorInstance.Data + uVar17) = (float)(uVar10 & 0x7fff) * fVar4;
      *(float *)(local_128.AllocatorInstance.Data + uVar17 + 4) = (float)(uVar9 & 0x7fff) * fVar4;
      *(float *)(local_128.AllocatorInstance.Data + uVar17 + 8) = (float)(uVar8 & 0x7fff) * fVar4;
      *(undefined4 *)(local_128.AllocatorInstance.Data + uVar17 + 0xc) = 0x3f800000;
      uVar17 = uVar17 + 0x10;
      uVar20 = (ulonglong)(uVar19 + 1);
    } while ((int)(uVar19 + 1) < local_128.ArrayNum);
  }
  uVar5 = __real_4048a5ca;
  fVar4 = __real_3ea34faa;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  iStack_13c = 0;
  if ((local_110 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  FVar16.Data = local_128.AllocatorInstance.Data;
  lVar21 = (longlong)local_128.ArrayNum;
  fVar1 = *(float *)local_118.Data;
  if ((local_128.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  fVar2 = __real_7f7fffff;
  pFVar22 = FVar16.Data + lVar21 * 0x10;
  for (; FVar16.Data != pFVar22; FVar16.Data = FVar16.Data + 0x10) {
    fVar23 = fVar1 * *(float *)FVar16.Data;
    if (fVar2 <= fVar1 * *(float *)FVar16.Data) {
      fVar23 = fVar2;
    }
    fVar24 = 0.0;
    if (fVar23 <= 0.0) {
      fVar23 = fVar24;
    }
    local_108 = Oidn::Helper::FPU::Forward(fVar23);
    local_108 = local_108 * fVar4;
    fVar23 = fVar1 * *(float *)(FVar16.Data + 4);
    if (fVar2 <= fVar1 * *(float *)(FVar16.Data + 4)) {
      fVar23 = fVar2;
    }
    if (fVar23 <= 0.0) {
      fVar23 = fVar24;
    }
    fStack_104 = Oidn::Helper::FPU::Forward(fVar23);
    fStack_104 = fStack_104 * fVar4;
    fVar23 = fVar1 * *(float *)(FVar16.Data + 8);
    if (fVar2 <= fVar1 * *(float *)(FVar16.Data + 8)) {
      fVar23 = fVar2;
    }
    if (fVar23 <= 0.0) {
      fVar23 = fVar24;
    }
    fStack_100 = Oidn::Helper::FPU::Forward(fVar23);
    fStack_100 = fStack_100 * fVar4;
    fStack_fc = *(float *)(FVar16.Data + 0xc);
    if (((local_148.Data <= (FScriptContainerElement *)&local_108) &&
        ((FScriptContainerElement *)&local_108 < local_148.Data + (longlong)iStack_13c * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    if (local_140 == iStack_13c) {
      local_140 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&local_148,&iStack_13c);
    }
    lVar21 = (longlong)local_140;
    local_140 = local_140 + 1;
    *(ulonglong *)(local_148.Data + lVar21 * 0x10) = CONCAT44(fStack_104,local_108);
    *(ulonglong *)(local_148.Data + lVar21 * 0x10 + 8) = CONCAT44(fStack_fc,fStack_100);
  }
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130[0] = 0;
  local_130[1] = 0;
  iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,4,0x1fe000,&local_138,local_130,local_130 + 1);
  memset(local_138.Data + (longlong)iVar12 * 0x10,0,0x1fe0000);
  pFVar13 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  local_e8[0] = (code *)0x0;
  local_c0 = FMemory::Malloc(0x48,8);
  *(float *)(local_c0 + 5) = fVar4;
  *(undefined4 *)((longlong)local_c0 + 0x2c) = uVar5;
  *local_c0 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_c0[6] = (code *)0x0;
  local_c0[1] = (code *)&local_128;
  *(undefined4 *)(local_c0 + 7) = 0x1fe000;
  local_c0[2] = (code *)&local_138;
  local_c0[3] = (code *)&local_118;
  local_c0[4] = (code *)&___7FTransferFunction_Oidn_Private_NNEDenoiser_UE__6B_;
  local_c0[8] = (code *)pFVar13;
  if (local_c0 + 1 != (code **)0x0) {
    local_e8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest_::__l2::TSTR_NNETransferFunctionTest58>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_b8._0_8_ = local_e8[0];
    local_90 = local_c0;
    local_c0 = (code **)0x0;
    local_b8._16_8_ = local_d8[0];
    local_b8._24_8_ = local_d8[1];
    local_b8._32_8_ = local_d8[2];
    local_e8[0] = (code *)0x0;
    local_88 = 2;
    pFVar14 = (FRenderCommandTag *)
              TRenderCommandTag<`UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::TSTR_NNETransferFunctionTest58>
              ::Get();
    RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_b8,pFVar14);
    uVar17 = (ulonglong)local_88;
    if ((2 < uVar17) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17] ==
        Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
        ::Destruct) {
      if ((code *)local_b8._0_8_ != (code *)0x0) {
        ppcVar15 = (code **)(local_b8 + 0x10);
        if (local_90 != (code **)0x0) {
          ppcVar15 = local_90;
        }
        (**(code **)(*ppcVar15 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17])(local_b8);
    }
  }
  if (local_e8[0] != (code *)0x0) {
    ppcVar15 = local_e8 + 2;
    if (local_c0 != (code **)0x0) {
      ppcVar15 = local_c0;
    }
    (**(code **)(*ppcVar15 + 0x10))();
  }
  (**(code **)(pFVar13->_padding_ + 0x20))(pFVar13,0xffffffff,0);
  fVar1 = __real_358637bd;
  fVar4 = __real_38d1b717;
  uVar17 = uVar18;
  do {
    iVar12 = (int)uVar17;
    if ((local_140 <= iVar12) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    fVar2 = *(float *)(local_148.Data + uVar18);
    if ((local_130[0] <= iVar12) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    bVar6 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,L"TransferFunction",
                       *(float *)(local_138.Data + uVar18),fVar2,fVar1);
    if (!bVar6) {
LAB_14eada671:
      bVar6 = false;
      goto LAB_14eada673;
    }
    if ((local_140 <= iVar12) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    fVar2 = *(float *)(local_148.Data + uVar18 + 4);
    if ((local_130[0] <= iVar12) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    bVar6 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,L"TransferFunction",
                       *(float *)(local_138.Data + uVar18 + 4),fVar2,fVar1);
    if (!bVar6) goto LAB_14eada671;
    if ((local_140 <= iVar12) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    fVar2 = *(float *)(local_148.Data + uVar18 + 8);
    if ((local_130[0] <= iVar12) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    bVar6 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,L"TransferFunction",
                       *(float *)(local_138.Data + uVar18 + 8),fVar2,fVar1);
    if (!bVar6) goto LAB_14eada671;
    if ((local_140 <= iVar12) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    fVar2 = *(float *)(local_148.Data + uVar18 + 0xc);
    if ((local_130[0] <= iVar12) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    bVar6 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,L"TransferFunction",
                       *(float *)(local_138.Data + uVar18 + 0xc),fVar2,fVar4);
    if (!bVar6) goto LAB_14eada671;
    uVar17 = (ulonglong)(iVar12 + 1U);
    uVar18 = uVar18 + 0x10;
  } while ((int)(iVar12 + 1U) < 0x1fe000);
  bVar6 = true;
LAB_14eada673:
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  return bVar6;
}

// GetBeautifiedTestName @ 14eada700

FString * __thiscall
UE::NNEDenoiser::Private::FTransferFunctionTest::GetBeautifiedTestName
          (FTransferFunctionTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"NNEDenoiser.UnitTests.OIDN.TransferFunction.Forward");
  return __return_storage_ptr__;
}

// operator() @ 14eae8e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
`UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRDGTexture *pFVar5;
  undefined8 *puVar6;
  FRDGEventName *pFVar7;
  FRDGBuffer *pFVar8;
  FRDGTexture *pFVar9;
  FTransferFunctionTestUploadTextureParameters *pFVar10;
  FTransferFunctionTestUploadBufferParameters *pFVar11;
  undefined8 *puVar12;
  FTransferFunctionTestDownloadParameters *pFVar13;
  undefined1 auStackY_a38 [32];
  undefined8 *local_9e8;
  undefined8 *local_9e0;
  undefined8 *local_9d8;
  undefined4 local_9d0;
  undefined4 uStack_9cc;
  FRDGBuffer *local_9c8;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined8 local_9b8;
  undefined4 local_9b0;
  undefined4 uStack_9ac;
  undefined4 local_9a8;
  undefined4 uStack_9a4;
  undefined4 local_9a0;
  undefined4 uStack_99c;
  FRDGBufferDesc local_998;
  FRDGEventName local_980;
  <lambda_1> local_968;
  <lambda_2> local_958;
  <lambda_3> local_948;
  FRDGTextureAccess local_930;
  FRDGTextureAccess local_918;
  FRDGEventName local_900;
  FRDGEventName local_8e8;
  FRDGEventName local_8d0;
  undefined1 local_8b8 [24];
  float local_8a0;
  int local_89c;
  undefined4 local_898;
  undefined8 local_894;
  undefined4 local_88c;
  undefined4 local_888;
  undefined2 local_884;
  void *local_878;
  undefined4 local_870;
  undefined4 local_86c;
  undefined1 local_868 [24];
  float local_850;
  int local_84c;
  undefined4 local_848;
  undefined8 local_844;
  undefined4 local_83c;
  undefined4 local_838;
  undefined2 local_834;
  void *local_828;
  undefined4 local_820;
  undefined4 local_81c;
  undefined1 local_818 [64];
  ForAnyElementType local_7d8;
  int local_7d0;
  int local_7cc [95];
  ForElementType<FRDGBuffer_*> local_650;
  uint local_648;
  uint local_644 [303];
  FRDGTrace local_188;
  FRDGUserValidation local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a38;
  bVar1 = param_1->field_0x6a;
  puVar12 = (undefined8 *)0x0;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->field_0x6a == '\0') {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,Graphics);
  }
  local_980.EventFormat = L"";
  local_980.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_980.FormattedEventName.Data.ArrayNum = 0;
  local_980.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder((FRDGBuilder *)local_818,param_1,&local_980,None,GMaxRHIShaderPlatform);
  local_9d0 = 0x780;
  uStack_9cc = 0x440;
  uStack_9ac = 0x440;
  local_850 = FClearValueBinding::Black.Value.Color[3];
  local_84c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_9b0 = 0x780;
  local_844 = 0x44000000780;
  local_868._0_8_ = 0;
  local_868._8_8_ = FClearValueBinding::Black._0_8_;
  local_868._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_848 = 0;
  local_83c = 0x10001;
  local_838 = 0x1000101;
  local_834 = 0xff00;
  local_828 = (void *)0x0;
  local_820 = 0;
  local_81c = 1;
  pFVar5 = FRDGBuilder::CreateTexture
                     ((FRDGBuilder *)local_818,(FRDGTextureDesc *)local_868,
                      L"TransferFunctionInputTexture",None);
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x30,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    puVar6 = puVar12;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &
              ___7__TObject_VFTransferFunctionTestUploadTextureParameters_Private_NNEDenoiser_UE___FRDGAllocator__6B_
    ;
    *(undefined4 *)(puVar6 + 3) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
  }
  local_9e8 = puVar6;
  if ((local_7d8.Data <= (FScriptContainerElement *)&local_9e8) &&
     ((FScriptContainerElement *)&local_9e8 < local_7d8.Data + (longlong)local_7cc[0] * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_7d0 == local_7cc[0]) {
    local_7d0 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_7d8,local_7cc);
  }
  pFVar10 = (FTransferFunctionTestUploadTextureParameters *)(puVar6 + 2);
  *(undefined8 **)(local_7d8.Data + (longlong)local_7d0 * 8) = local_9e8;
  local_7d0 = local_7d0 + 1;
  FRDGTextureAccess::FRDGTextureAccess(&local_930,pFVar5,CopyDest);
  *(FRDGTexture **)&pFVar10->InputTexture = local_930.Texture;
  *(FRDGTextureSubresourceRange *)(puVar6 + 3) = local_930.SubresourceRange;
  puVar6[4] = local_930._16_8_;
  local_968.TestData = *(TArray<FLinearColor,TSizedDefaultAllocator<32>_> **)this;
  local_968.Parameters = pFVar10;
  pFVar7 = FRDGEventName::FRDGEventName
                     (&local_8e8,1,L"NNEDenoiser.TransferFunctionTest.UploadInput");
  FRDGBuilder::
  AddPass<UE::NNEDenoiser::Private::FTransferFunctionTestUploadTextureParameters,__UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
            ((FRDGBuilder *)local_818,pFVar7,pFVar10,Readback,&local_968);
  if (local_8e8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  uStack_9bc = local_900.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
  local_9c8 = (FRDGBuffer *)0x200000004;
  uStack_9c0 = 0x4109;
  local_998._12_4_ = local_900.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
  local_998.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  local_9b8 = 0;
  local_998.BytesPerElement = 4;
  local_998.NumElements = 2;
  local_998.Metadata = (FShaderParametersMetadata *)0x0;
  FRDGUserValidation::ValidateCreateBuffer
            (&local_118,&local_998,L"TransferFunctionInputScaleBuffer",None);
  uVar4 = local_998.BytesPerElement;
  if (local_998.BytesPerElement == 0) {
    uVar4 = 1;
  }
  if (local_998.NumElements == 0) {
    local_998.NumElements = 1;
  }
  local_998.BytesPerElement = uVar4;
  pFVar8 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x130,8);
  pFVar8 = FRDGBuffer::FRDGBuffer(pFVar8,L"TransferFunctionInputScaleBuffer",&local_998,None);
  if (local_648 == local_644[0]) {
    local_648 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                          (0x808,&local_650,(int *)local_644);
  }
  local_650.Data[(int)local_648] = pFVar8;
  (pFVar8->Handle).Index = local_648;
  local_648 = local_648 + 1;
  FRDGUserValidation::ValidateCreateBuffer(&local_118,pFVar8);
  FRDGTrace::AddResource(&local_188,(FRDGViewableResource *)pFVar8);
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x20,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    puVar6 = puVar12;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &
              ___7__TObject_VFTransferFunctionTestUploadBufferParameters_Private_NNEDenoiser_UE___FRDGAllocator__6B_
    ;
    *(undefined4 *)(puVar6 + 3) = 0x2000;
  }
  local_9e0 = puVar6;
  if ((local_7d8.Data <= (FScriptContainerElement *)&local_9e0) &&
     ((FScriptContainerElement *)&local_9e0 < local_7d8.Data + (longlong)local_7cc[0] * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_7d0 == local_7cc[0]) {
    local_7d0 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_7d8,local_7cc);
  }
  pFVar11 = (FTransferFunctionTestUploadBufferParameters *)(puVar6 + 2);
  *(undefined8 **)(local_7d8.Data + (longlong)local_7d0 * 8) = local_9e0;
  uStack_9c0 = 0x2000;
  *(FRDGBuffer **)&pFVar11->InputBuffer = pFVar8;
  puVar6[3] = CONCAT44(uStack_9bc,0x2000);
  local_958.InputScale = *(TArray<float,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10);
  local_9c8 = pFVar8;
  local_958.Parameters = pFVar11;
  local_7d0 = local_7d0 + 1;
  pFVar7 = FRDGEventName::FRDGEventName
                     (&local_8d0,1,L"NNEDenoiser.TransferFunctionTest.UploadScale");
  FRDGBuilder::
  AddPass<UE::NNEDenoiser::Private::FTransferFunctionTestUploadBufferParameters,__UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest_::__l2::<lambda_1>::operator()_::__l7::<lambda_2>_>
            ((FRDGBuilder *)local_818,pFVar7,pFVar11,Readback,&local_958);
  if (local_8d0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  local_9a8 = 0x780;
  uStack_9a4 = 0x440;
  uStack_99c = 0x440;
  local_8a0 = FClearValueBinding::Black.Value.Color[3];
  local_89c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_9a0 = 0x780;
  local_894 = 0x44000000780;
  local_8b8._0_8_ = 0x20000;
  local_8b8._8_8_ = FClearValueBinding::Black._0_8_;
  local_8b8._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_898 = 0;
  local_88c = 0x10001;
  local_888 = 0x1000101;
  local_884 = 0xff00;
  local_878 = (void *)0x0;
  local_870 = 0;
  local_86c = 1;
  pFVar9 = FRDGBuilder::CreateTexture
                     ((FRDGBuilder *)local_818,(FRDGTextureDesc *)local_8b8,
                      L"TransferFunctionOutputTexture",None);
  (**(code **)(*(longlong *)((longlong)this + 0x18) + 0x18))((longlong)this + 0x18,pFVar8);
  (**(code **)(*(longlong *)((longlong)this + 0x18) + 0x20))
            ((longlong)this + 0x18,local_818,pFVar5,pFVar9);
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x30,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &
              ___7__TObject_VFTransferFunctionTestDownloadParameters_Private_NNEDenoiser_UE___FRDGAllocator__6B_
    ;
    *(undefined4 *)(puVar6 + 3) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
    puVar12 = puVar6;
  }
  local_9d8 = puVar12;
  if ((local_7d8.Data <= (FScriptContainerElement *)&local_9d8) &&
     ((FScriptContainerElement *)&local_9d8 < local_7d8.Data + (longlong)local_7cc[0] * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_7d0 == local_7cc[0]) {
    local_7d0 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_7d8,local_7cc);
  }
  pFVar13 = (FTransferFunctionTestDownloadParameters *)(puVar12 + 2);
  *(undefined8 **)(local_7d8.Data + (longlong)local_7d0 * 8) = local_9d8;
  local_7d0 = local_7d0 + 1;
  FRDGTextureAccess::FRDGTextureAccess(&local_918,pFVar9,CopySrc);
  *(FRDGTexture **)&pFVar13->OutputTexture = local_918.Texture;
  *(FRDGTextureSubresourceRange *)(puVar12 + 3) = local_918.SubresourceRange;
  puVar12[4] = local_918._16_8_;
  local_948.ResultRDG = *(TArray<FLinearColor,TSizedDefaultAllocator<32>_> **)((longlong)this + 8);
  local_948.Num = *(int *)((longlong)this + 0x30);
  local_948.Parameters = pFVar13;
  pFVar7 = FRDGEventName::FRDGEventName(&local_900,1,L"NNEDenoiser.TransferFunctionTest.Download");
  FRDGBuilder::
  AddPass<UE::NNEDenoiser::Private::FTransferFunctionTestDownloadParameters,__UE::NNEDenoiser::Private::FTransferFunctionTest::RunTest_::__l2::<lambda_1>::operator()_::__l8::<lambda_3>_>
            ((FRDGBuilder *)local_818,pFVar7,pFVar13,Readback,&local_948);
  if ((void *)CONCAT44(local_900.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                       local_900.FormattedEventName.Data.AllocatorInstance.Data._0_4_) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_900.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                                   local_900.FormattedEventName.Data.AllocatorInstance.Data._0_4_));
  }
  FRDGBuilder::Execute((FRDGBuilder *)local_818);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  (**(code **)(**(longlong **)((longlong)this + 0x38) + 0x10))();
  if (local_878 != (void *)0x0) {
    FMemory::Free(local_878);
  }
  if (local_828 != (void *)0x0) {
    FMemory::Free(local_828);
  }
  FRDGBuilder::~FRDGBuilder((FRDGBuilder *)local_818);
  return;
}

