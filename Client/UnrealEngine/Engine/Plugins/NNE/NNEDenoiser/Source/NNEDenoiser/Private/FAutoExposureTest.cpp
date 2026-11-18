// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 9

// GetTestFlags @ 14eada7f0

EAutomationTestFlags __thiscall
UE::NNEDenoiser::Private::FAutoExposureTest::GetTestFlags(FAutoExposureTest *this)

{
  return EngineFilter|RequiresUser|NonNullRHI|ProgramContext|CommandletContext|ServerContext|
         ClientContext|EditorContext;
}

// IsStressTest @ 14eada800

bool __thiscall UE::NNEDenoiser::Private::FAutoExposureTest::IsStressTest(FAutoExposureTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14eada810

uint __thiscall
UE::NNEDenoiser::Private::FAutoExposureTest::GetRequiredDeviceNum(FAutoExposureTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14eada820

FString * __thiscall
UE::NNEDenoiser::Private::FAutoExposureTest::GetTestSourceFileName
          (FAutoExposureTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUnitTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14eada850

int __thiscall
UE::NNEDenoiser::Private::FAutoExposureTest::GetTestSourceFileLine(FAutoExposureTest *this)

{
  return 0x1b;
}

// GetTests @ 14eada860

/* WARNING: Removing unreachable block (ram,0x00014eada94d) */
/* WARNING: Removing unreachable block (ram,0x00014eadaa18) */

void __thiscall
UE::NNEDenoiser::Private::FAutoExposureTest::GetTests
          (FAutoExposureTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"NNEDenoiser.UnitTests.AutoExposure");
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

// RunTest @ 14eadaa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::NNEDenoiser::Private::FAutoExposureTest::RunTest(FAutoExposureTest *this,FString *param_1)

{
  code *pcVar1;
  TIntPoint<int> TVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FEvent *pFVar11;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar12;
  code **ppcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStackY_168 [32];
  ForAnyElementType local_138;
  int local_130 [2];
  float local_128 [2];
  ForAnyElementType local_120;
  int local_118 [4];
  FAutoExposure local_108 [2];
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TArrayView<FLinearColor_const_,int> local_e8;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  undefined1 local_a8 [40];
  code **local_80;
  byte local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar14 = 0;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130[0] = 0;
  local_130[1] = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,0x1fe000,&local_138,local_130,local_130 + 1);
  fVar3 = __real_38000100;
  uVar15 = uVar14;
  iVar10 = local_130[0];
  if (0 < local_130[0]) {
    do {
      uVar6 = rand();
      uVar7 = rand();
      uVar8 = rand();
      uVar16 = (uint)uVar15;
      uVar9 = 0;
      if ((int)uVar16 < local_130[0]) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      *(float *)(local_138.Data + uVar14) = (float)(uVar8 & 0x7fff) * fVar3;
      *(float *)(local_138.Data + uVar14 + 4) = (float)(uVar7 & 0x7fff) * fVar3;
      *(float *)(local_138.Data + uVar14 + 8) = (float)(uVar6 & 0x7fff) * fVar3;
      *(undefined4 *)(local_138.Data + uVar14 + 0xc) = 0x3f800000;
      uVar14 = uVar14 + 0x10;
      uVar15 = (ulonglong)(uVar16 + 1);
      iVar10 = local_130[0];
    } while ((int)(uVar16 + 1) < local_130[0]);
  }
  local_108[0] = (FAutoExposure)&___7FAutoExposure_Private_NNEDenoiser_UE__6B_;
  local_f8 = local_138.Data;
  local_128[0] = 0.0;
  local_118[2] = 0x780;
  local_118[3] = 0x440;
  if ((iVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  TVar2.field0_0x0._s_0.Y = local_118[3];
  TVar2.field0_0x0._s_0.X = local_118[2];
  local_e8._12_4_ = uStack_ec;
  local_e8.ArrayNum = iVar10;
  local_e8.DataPtr = (FLinearColor *)local_f8;
  iStack_f0 = iVar10;
  FAutoExposure::Run(local_108,&local_e8,TVar2,local_128);
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118[0] = 0;
  local_118[1] = 0;
  iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,2,&local_120,local_118,local_118 + 1);
  *(undefined8 *)(local_120.Data + (longlong)iVar10 * 4) = 0;
  pFVar11 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  local_d8[0] = (code *)0x0;
  local_b0 = FMemory::Malloc(0x28,8);
  local_b0[3] = (code *)&___7FAutoExposure_Private_NNEDenoiser_UE__6B_;
  local_b0[4] = (code *)pFVar11;
  *local_b0 = (code *)&Core::Private::Function::
                       TFunction_OwnedObject<`UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_b0[1] = (code *)&local_138;
  local_b0[2] = (code *)&local_120;
  if (local_b0 + 1 != (code **)0x0) {
    local_d8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UE::NNEDenoiser::Private::FAutoExposureTest::RunTest_::__l2::TSTR_NNEAutoExposureTest51>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_a8._0_8_ = local_d8[0];
    local_80 = local_b0;
    local_b0 = (code **)0x0;
    local_a8._16_8_ = local_c8[0];
    local_a8._24_8_ = local_c8[1];
    local_a8._32_8_ = local_c8[2];
    local_d8[0] = (code *)0x0;
    local_78 = 2;
    pFVar12 = (FRenderCommandTag *)
              TRenderCommandTag<`UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::TSTR_NNEAutoExposureTest51>
              ::Get();
    RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_a8,pFVar12);
    uVar15 = (ulonglong)local_78;
    if ((2 < uVar15) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15] ==
        Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
        ::Destruct) {
      if ((code *)local_a8._0_8_ != (code *)0x0) {
        ppcVar13 = (code **)(local_a8 + 0x10);
        if (local_80 != (code **)0x0) {
          ppcVar13 = local_80;
        }
        (**(code **)(*ppcVar13 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(local_a8);
    }
  }
  if (local_d8[0] != (code *)0x0) {
    ppcVar13 = local_d8 + 2;
    if (local_b0 != (code **)0x0) {
      ppcVar13 = local_b0;
    }
    (**(code **)(*ppcVar13 + 0x10))();
  }
  (**(code **)(pFVar11->_padding_ + 0x20))(pFVar11,0xffffffff,0);
  fVar3 = local_128[0];
  if ((local_118[0] < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  bVar4 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,L"AutoExposure",*(float *)local_120.Data,fVar3,
                     __real_38d1b717);
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  return bVar4;
}

// GetBeautifiedTestName @ 14eadaeb0

FString * __thiscall
UE::NNEDenoiser::Private::FAutoExposureTest::GetBeautifiedTestName
          (FAutoExposureTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"NNEDenoiser.UnitTests.AutoExposure");
  return __return_storage_ptr__;
}

// operator() @ 14eae8870

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
`UE::NNEDenoiser::Private::FAutoExposureTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FRDGTexture *pFVar4;
  undefined8 *puVar5;
  FRDGEventName *pFVar6;
  FRDGBuffer *pFVar7;
  FAutoExposureTestUploadParameters *pFVar8;
  undefined8 *puVar9;
  FAutoExposureTestDownloadParameters *pFVar10;
  undefined1 auStackY_988 [32];
  undefined8 *local_938;
  undefined8 *local_930;
  undefined4 local_928;
  undefined4 uStack_924;
  undefined4 local_920;
  undefined4 uStack_91c;
  <lambda_1> local_918;
  FRDGBufferDesc local_908;
  undefined4 local_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined8 local_8e0;
  FRDGEventName local_8d8;
  <lambda_2> local_8c0;
  FRDGTextureAccess local_8b0;
  FRDGEventName local_898;
  FRDGEventName local_880;
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
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_988;
  bVar1 = param_1->field_0x6a;
  puVar9 = (undefined8 *)0x0;
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
  local_8d8.EventFormat = L"";
  local_8d8.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8d8.FormattedEventName.Data.ArrayNum = 0;
  local_8d8.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder((FRDGBuilder *)local_818,param_1,&local_8d8,None,GMaxRHIShaderPlatform);
  local_928 = 0x780;
  uStack_924 = 0x440;
  uStack_91c = 0x440;
  local_850 = FClearValueBinding::Black.Value.Color[3];
  local_84c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_920 = 0x780;
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
  pFVar4 = FRDGBuilder::CreateTexture
                     ((FRDGBuilder *)local_818,(FRDGTextureDesc *)local_868,
                      L"AutoExposureInputTexture",None);
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x30,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    puVar5 = puVar9;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &
              ___7__TObject_VFAutoExposureTestUploadParameters_Private_NNEDenoiser_UE___FRDGAllocator__6B_
    ;
    *(undefined4 *)(puVar5 + 3) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x1c) = 0;
  }
  local_938 = puVar5;
  if ((local_7d8.Data <= (FScriptContainerElement *)&local_938) &&
     ((FScriptContainerElement *)&local_938 < local_7d8.Data + (longlong)local_7cc[0] * 8)) {
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
  pFVar8 = (FAutoExposureTestUploadParameters *)(puVar5 + 2);
  *(undefined8 **)(local_7d8.Data + (longlong)local_7d0 * 8) = local_938;
  local_7d0 = local_7d0 + 1;
  FRDGTextureAccess::FRDGTextureAccess(&local_8b0,pFVar4,CopyDest);
  *(FRDGTexture **)&pFVar8->InputTexture = local_8b0.Texture;
  *(FRDGTextureSubresourceRange *)(puVar5 + 3) = local_8b0.SubresourceRange;
  puVar5[4] = local_8b0._16_8_;
  local_918.TestData = *(TArray<FLinearColor,TSizedDefaultAllocator<32>_> **)this;
  local_918.Parameters = pFVar8;
  pFVar6 = FRDGEventName::FRDGEventName(&local_880,1,L"NNEDenoiser.AutoExposureTest.Upload");
  FRDGBuilder::
  AddPass<UE::NNEDenoiser::Private::FAutoExposureTestUploadParameters,__UE::NNEDenoiser::Private::FAutoExposureTest::RunTest_::__l2::<lambda_1>::operator()_::__l6::<lambda_1>_>
            ((FRDGBuilder *)local_818,pFVar6,pFVar8,Readback,&local_918);
  if (local_880.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_880.FormattedEventName.Data.AllocatorInstance.Data);
  }
  uStack_8e4 = local_898.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
  local_8f0 = 4;
  uStack_8ec = 2;
  uStack_8e8 = 0x4109;
  local_908.BytesPerElement = 4;
  local_908.NumElements = 2;
  local_908._12_4_ = local_898.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
  local_908.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  local_8e0 = 0;
  local_908.Metadata = (FShaderParametersMetadata *)0x0;
  FRDGUserValidation::ValidateCreateBuffer(&local_118,&local_908,L"AutoExposureOutputBuffer",None);
  if (local_908.BytesPerElement == 0) {
    local_908.BytesPerElement = 1;
  }
  if (local_908.NumElements == 0) {
    local_908.NumElements = 1;
  }
  pFVar7 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x130,8);
  pFVar7 = FRDGBuffer::FRDGBuffer(pFVar7,L"AutoExposureOutputBuffer",&local_908,None);
  if (local_648 == local_644[0]) {
    local_648 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                          (0x808,&local_650,(int *)local_644);
  }
  local_650.Data[(int)local_648] = pFVar7;
  (pFVar7->Handle).Index = local_648;
  local_648 = local_648 + 1;
  FRDGUserValidation::ValidateCreateBuffer(&local_118,pFVar7);
  FRDGTrace::AddResource(&local_188,(FRDGViewableResource *)pFVar7);
  (**(code **)(*(longlong *)((longlong)this + 0x10) + 0x10))
            ((longlong)this + 0x10,local_818,pFVar4,pFVar7);
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x20,0x10);
  if (puVar5 == (undefined8 *)0x0) {
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
    puVar5[2] = 0;
    *puVar5 = &
              ___7__TObject_VFAutoExposureTestDownloadParameters_Private_NNEDenoiser_UE___FRDGAllocator__6B_
    ;
    *(undefined4 *)(puVar5 + 3) = 0x80;
    puVar9 = puVar5;
  }
  local_930 = puVar9;
  if ((local_7d8.Data <= (FScriptContainerElement *)&local_930) &&
     ((FScriptContainerElement *)&local_930 < local_7d8.Data + (longlong)local_7cc[0] * 8)) {
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
  pFVar10 = (FAutoExposureTestDownloadParameters *)(puVar9 + 2);
  *(undefined8 **)(local_7d8.Data + (longlong)local_7d0 * 8) = local_930;
  local_918.Parameters =
       (FAutoExposureTestUploadParameters *)CONCAT44(local_918.Parameters._4_4_,0x80);
  *(FRDGBuffer **)&pFVar10->OutputBuffer = pFVar7;
  puVar9[3] = local_918.Parameters;
  local_8c0.ResultRDG = *(TArray<float,TSizedDefaultAllocator<32>_> **)((longlong)this + 8);
  local_918.TestData = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)pFVar7;
  local_8c0.Parameters = pFVar10;
  local_7d0 = local_7d0 + 1;
  pFVar6 = FRDGEventName::FRDGEventName(&local_898,1,L"NNEDenoiser.AutoExposureTest.Download");
  FRDGBuilder::
  AddPass<UE::NNEDenoiser::Private::FAutoExposureTestDownloadParameters,__UE::NNEDenoiser::Private::FAutoExposureTest::RunTest_::__l2::<lambda_1>::operator()_::__l7::<lambda_2>_>
            ((FRDGBuilder *)local_818,pFVar6,pFVar10,Readback,&local_8c0);
  if ((void *)CONCAT44(local_898.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                       local_898.FormattedEventName.Data.AllocatorInstance.Data._0_4_) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_898.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                                   local_898.FormattedEventName.Data.AllocatorInstance.Data._0_4_));
  }
  FRDGBuilder::Execute((FRDGBuilder *)local_818);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x10))();
  if (local_828 != (void *)0x0) {
    FMemory::Free(local_828);
  }
  FRDGBuilder::~FRDGBuilder((FRDGBuilder *)local_818);
  return;
}

