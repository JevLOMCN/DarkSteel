// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetTestFlags @ 141bbe010

EAutomationTestFlags __thiscall
UE::MathTest::FGenericOctreeTest::GetTestFlags(FGenericOctreeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141bbe020

bool __thiscall UE::MathTest::FGenericOctreeTest::IsStressTest(FGenericOctreeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141bbe030

uint __thiscall UE::MathTest::FGenericOctreeTest::GetRequiredDeviceNum(FGenericOctreeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141bbe040

FString * __thiscall
UE::MathTest::FGenericOctreeTest::GetTestSourceFileName
          (FGenericOctreeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Math\\GenericOctreeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141bbe070

int __thiscall UE::MathTest::FGenericOctreeTest::GetTestSourceFileLine(FGenericOctreeTest *this)

{
  return 0x35;
}

// GetTests @ 141bbe080

/* WARNING: Removing unreachable block (ram,0x000141bbe1fe) */

void __thiscall
UE::MathTest::FGenericOctreeTest::GetTests
          (FGenericOctreeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141bbe220

bool __thiscall UE::MathTest::FGenericOctreeTest::RunTest(FGenericOctreeTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141bbe250

FString * __thiscall
UE::MathTest::FGenericOctreeTest::GetBeautifiedTestName
          (FGenericOctreeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FGenericOctreeTest @ 141be2b90

FGenericOctreeTest * __thiscall
UE::MathTest::FGenericOctreeTest::FGenericOctreeTest(FGenericOctreeTest *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FGenericOctreeTest_MathTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Math::GenericOctree::ApplyOffset");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[ApplicationContextMask][EngineFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// TestBody @ 141c13dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::MathTest::FGenericOctreeTest::TestBody(FGenericOctreeTest *this,FString *param_1)

{
  double dVar1;
  int iVar2;
  undefined1 auStackY_278 [32];
  TVector4<double>_u_0 local_248;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  void *local_1b8;
  undefined8 local_1b0;
  TVector<double>_u_0 local_198;
  FTestOctreeElement local_178;
  TVector4<double>_u_0 local_128;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_248._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_248._s_0.W = _UNK_15061cbc8;
  local_218 = ___xmm_3ff00000000000000000000000000000;
  dStack_210 = _UNK_15061cbc8;
  local_248._s_0.X = 0.0;
  local_248._s_0.Y = 0.0;
  local_228 = 0;
  uStack_220 = 0;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  local_1d8 = (void *)0x0;
  local_1d0 = 0;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  local_1b8 = (void *)0x0;
  local_1b0 = 0;
  iVar2 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&local_1e8,(int *)((longlong)&local_1e0 + 4));
  local_1e0 = CONCAT44(local_1e0._4_4_,iVar2 + 1);
  DefaultConstructItems<TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics>::FNode,int>
            (local_1e8.Data + (longlong)iVar2 * 8,1);
  iVar2 = (int)local_1c0;
  if ((int)local_1c0 == local_1c0._4_4_) {
    iVar2 = Core::Private::ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (0x10c0,&local_1c8,(int *)((longlong)&local_1c0 + 4));
  }
  local_1c0 = CONCAT44(local_1c0._4_4_,iVar2 + 1);
  DefaultConstructItems<TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,int>
            (local_1c8.Data + (longlong)iVar2 * 0xc0,1);
  dVar1 = __real_3ff0000000000000;
  iVar2 = 0x14;
  do {
    local_178.Value = 5;
    local_e8.AllocatorInstance.SecondaryData = (ForElementType<UE::MathTest::FTestOctreeElement>)0x0
    ;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 2;
    local_178.Bounds.Center.field0_0x0._s_0.X = (double)iVar2;
    local_178.Bounds.Extent.field0_0x0._s_0.X = local_178.Bounds.Center.field0_0x0._s_0.X + dVar1;
    local_178.Bounds.Center.field0_0x0._s_0.W = 0.0;
    local_178.Bounds.Extent.field0_0x0._s_0.W = 0.0;
    local_178.Bounds.Center.field0_0x0._s_0.Y = local_178.Bounds.Center.field0_0x0._s_0.X;
    local_178.Bounds.Center.field0_0x0._s_0.Z = local_178.Bounds.Center.field0_0x0._s_0.X;
    local_178.Bounds.Extent.field0_0x0._s_0.Y = local_178.Bounds.Extent.field0_0x0._s_0.X;
    local_178.Bounds.Extent.field0_0x0._s_0.Z = local_178.Bounds.Extent.field0_0x0._s_0.X;
    local_128._s_0.X = local_178.Bounds.Center.field0_0x0._s_0.X;
    local_128._s_0.Y = local_178.Bounds.Center.field0_0x0._s_0.X;
    local_128._s_0.Z = local_178.Bounds.Center.field0_0x0._s_0.X;
    local_128._s_0.W = local_178.Bounds.Center.field0_0x0._s_0.W;
    local_108 = local_178.Bounds.Extent.field0_0x0._s_0.X;
    dStack_100 = local_178.Bounds.Extent.field0_0x0._s_0.X;
    local_f8 = local_178.Bounds.Extent.field0_0x0._s_0.X;
    dStack_f0 = local_178.Bounds.Extent.field0_0x0._s_0.W;
    TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics>::
    AddElementInternal((TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics>
                        *)&local_248._s_0,0,(FOctreeNodeContext *)&local_248._s_0,
                       (FBoxCenterAndExtent *)&local_128._s_0,&local_178,&local_e8);
    if (local_e8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MathTest::FTestOctreeElement>)0x0) {
      FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_198._s_0.Z = 0.0;
  local_198._s_0.X = 0.0;
  local_198._s_0.Y = 0.0;
  TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics>::ApplyOffset
            ((TOctree2<UE::MathTest::FTestOctreeElement,UE::MathTest::TTestOctreeSemantics> *)
             &local_248._s_0,(TVector<double> *)&local_198._s_0,false);
  if (local_1b8 != (void *)0x0) {
    FMemory::Free(local_1b8);
  }
  DestructItems<TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
              *)local_1c8.Data,(int)local_1c0);
  if ((TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
       *)local_1c8.Data !=
      (TArray<UE::MathTest::FTestOctreeElement,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    FMemory::Free(local_1c8.Data);
  }
  if (local_1d8 != (void *)0x0) {
    FMemory::Free(local_1d8);
  }
  if (local_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data);
  }
  return;
}

