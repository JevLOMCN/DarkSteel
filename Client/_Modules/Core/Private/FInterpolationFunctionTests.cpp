// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 20

// GetTestFlags @ 141c5cbc0

EAutomationTestFlags __thiscall
FInterpolationFunctionTests::GetTestFlags(FInterpolationFunctionTests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141c5cbd0

bool __thiscall FInterpolationFunctionTests::IsStressTest(FInterpolationFunctionTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141c5cbe0

uint __thiscall FInterpolationFunctionTests::GetRequiredDeviceNum(FInterpolationFunctionTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 141c5cbf0

FString * __thiscall
FInterpolationFunctionTests::GetTestSourceFileName
          (FInterpolationFunctionTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Math\\UnrealMathTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141c5cc20

int __thiscall FInterpolationFunctionTests::GetTestSourceFileLine(FInterpolationFunctionTests *this)

{
  return 0xf75;
}

// GetTests @ 141c5cc30

/* WARNING: Removing unreachable block (ram,0x000141c5cdae) */

void __thiscall
FInterpolationFunctionTests::GetTests
          (FInterpolationFunctionTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = UE::Core::Private::
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
    iVar4 = UE::Core::Private::
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

// RunTest @ 141c5cdd0

bool __thiscall
FInterpolationFunctionTests::RunTest(FInterpolationFunctionTests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141c5ce00

FString * __thiscall
FInterpolationFunctionTests::GetBeautifiedTestName
          (FInterpolationFunctionTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 141c61380

float __cdecl
`FInterpolationFunctionTests::TestBody'::__l5::<lambda_10>::<lambda_invoker_cdecl>(float param_1)

{
  float fVar1;
  
  if (param_1 < __real_3f000000) {
    fVar1 = cosf((param_1 + param_1) * __real_3fc90fdb);
    return (__real_3f800000 - fVar1) * __real_3f000000;
  }
  fVar1 = sinf(((param_1 + param_1) - __real_3f800000) * __real_3fc90fdb);
  return (fVar1 + __real_3f800000) * __real_3f000000;
}

// <lambda_invoker_cdecl> @ 141c61700

float __cdecl
`FInterpolationFunctionTests::TestBody'::__l3::<lambda_2>::<lambda_invoker_cdecl>(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = __real_3f800000;
  fVar2 = param_1 + param_1;
  if (__real_3f000000 <= param_1) {
    fVar3 = __real_3f800000;
    if (fVar2 - __real_3f800000 != __real_3f800000) {
      fVar2 = powf(__real_40000000,(fVar2 - __real_3f800000) * __real_c1200000);
      fVar3 = fVar1 - fVar2;
    }
    return (fVar3 + fVar1) * __real_3f000000;
  }
  fVar1 = 0.0;
  if (fVar2 != 0.0) {
    fVar1 = powf(__real_40000000,(fVar2 - __real_3f800000) * __real_41200000);
  }
  return fVar1 * __real_3f000000;
}

// <lambda_invoker_cdecl> @ 141c617c0

float __cdecl
`FInterpolationFunctionTests::TestBody'::__l3::<lambda_3>::<lambda_invoker_cdecl>(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = __real_3f800000;
  fVar2 = param_1 + param_1;
  if (__real_3f000000 <= param_1) {
    fVar3 = __real_3f800000;
    if (fVar2 - __real_3f800000 != __real_3f800000) {
      fVar2 = powf(__real_40000000,(fVar2 - __real_3f800000) * __real_c1200000);
      fVar3 = fVar1 - fVar2;
    }
    return (fVar3 + fVar1) * __real_3f000000;
  }
  fVar1 = 0.0;
  if (fVar2 != 0.0) {
    fVar1 = powf(__real_40000000,(fVar2 - __real_3f800000) * __real_41200000);
  }
  return fVar1 * __real_3f000000;
}

// <lambda_invoker_cdecl> @ 141c61880

float __cdecl
`FInterpolationFunctionTests::TestBody'::__l3::<lambda_4>::<lambda_invoker_cdecl>(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = __real_3f800000;
  fVar2 = param_1 + param_1;
  if (__real_3f000000 <= param_1) {
    fVar3 = __real_3f800000;
    if (fVar2 - __real_3f800000 != __real_3f800000) {
      fVar2 = powf(__real_40000000,(fVar2 - __real_3f800000) * __real_c1200000);
      fVar3 = fVar1 - fVar2;
    }
    return (fVar3 + fVar1) * __real_3effffff;
  }
  fVar1 = 0.0;
  if (fVar2 != 0.0) {
    fVar1 = powf(__real_40000000,(fVar2 - __real_3f800000) * __real_41200000);
  }
  return fVar1 * __real_3effffff;
}

// <lambda_invoker_cdecl> @ 141c61950

float __cdecl
`FInterpolationFunctionTests::TestBody'::__l4::<lambda_5>::<lambda_invoker_cdecl>(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + param_1;
  if (param_1 < __real_3f000000) {
    return (__real_3f800000 - SQRT(__real_3f800000 - fVar1 * fVar1)) * __real_3f000000;
  }
  return (SQRT(__real_3f800000 - (fVar1 - __real_40000000) * (fVar1 - __real_40000000)) +
         __real_3f800000) * __real_3f000000;
}

// <lambda_invoker_cdecl> @ 141c619f0

float __cdecl
`FInterpolationFunctionTests::TestBody'::__l4::<lambda_6>::<lambda_invoker_cdecl>(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + param_1;
  if (param_1 < __real_3f000000) {
    return (__real_3f800000 - SQRT(__real_3f800000 - fVar1 * fVar1)) * __real_3f000000;
  }
  return (SQRT(__real_3f800000 - (fVar1 - __real_40000000) * (fVar1 - __real_40000000)) +
         __real_3f800000) * __real_3f000000;
}

// <lambda_invoker_cdecl> @ 141c61a80

float __cdecl
`FInterpolationFunctionTests::TestBody'::__l4::<lambda_7>::<lambda_invoker_cdecl>(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + param_1;
  if (param_1 < __real_3f000000) {
    return (__real_3f800000 - SQRT(__real_3f800000 - fVar1 * fVar1)) * __real_3f000000;
  }
  return (SQRT(__real_3f800000 - (fVar1 - __real_40000000) * (fVar1 - __real_40000000)) +
         __real_3f800000) * __real_3f000000;
}

// <lambda_invoker_cdecl> @ 141c61b20

float __cdecl
`FInterpolationFunctionTests::TestBody'::__l5::<lambda_8>::<lambda_invoker_cdecl>(float param_1)

{
  float fVar1;
  
  if (param_1 < __real_3f000000) {
    fVar1 = cosf((param_1 + param_1) * __real_3fc90fdb);
    return (__real_3f800000 - fVar1) * __real_3f000000;
  }
  fVar1 = sinf(((param_1 + param_1) - __real_3f800000) * __real_3fc90fdb);
  return (fVar1 + __real_3f800000) * __real_3f000000;
}

// <lambda_invoker_cdecl> @ 141c61bc0

float __cdecl
`FInterpolationFunctionTests::TestBody'::__l5::<lambda_9>::<lambda_invoker_cdecl>(float param_1)

{
  float fVar1;
  
  if (param_1 < __real_3f000000) {
    fVar1 = cosf((param_1 + param_1) * __real_3fc90fdb);
    return (__real_3f800000 - fVar1) * __real_3f000000;
  }
  fVar1 = sinf(((param_1 + param_1) - __real_3f800000) * __real_3fc90fdb);
  return (fVar1 + __real_3f800000) * __real_3f000000;
}

// FInterpolationFunctionTests @ 141c8bd40

FInterpolationFunctionTests * __thiscall
FInterpolationFunctionTests::FInterpolationFunctionTests
          (FInterpolationFunctionTests *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FInterpolationFunctionTests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Math::Interpolation Function Test");
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
  ::FString::FString(&local_18,"[ApplicationContextMask][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// operator() @ 141c8f5c0

void __thiscall
`FInterpolationFunctionTests::TestBody'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<TTuple<float_(__cdecl*)(float),FString>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FAutomationTestFramework *pFVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  float fVar17;
  undefined1 local_res18 [8];
  int local_res20;
  float local_b8 [2];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  FString local_a0;
  FString local_90 [5];
  
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_3c23d70a;
  fVar5 = __real_38d1b717;
  uVar14 = 0;
  local_res20 = 0;
  do {
    iVar7 = local_res20;
    iVar2 = param_1->ArrayNum;
    pFVar15 = (param_1->AllocatorInstance).Data;
    fVar17 = (float)local_res20;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = 0;
    pFVar1 = pFVar15 + (longlong)iVar2 * 0x18;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TTuple<float_(__cdecl*)(float),FString>_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar15 == pFVar1) break;
      local_b8[0] = (float)(**(code **)pFVar15)(fVar17 * fVar6);
      if (((local_b0.Data <= (FScriptContainerElement *)local_b8) &&
          ((FScriptContainerElement *)local_b8 < local_b0.Data + (longlong)local_a8._4_4_ * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (int)local_a8;
      if ((int)local_a8 == local_a8._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_b0,(int *)((longlong)&local_a8 + 4));
      }
      pFVar15 = pFVar15 + 0x18;
      local_a8 = CONCAT44(local_a8._4_4_,iVar9 + 1);
      *(float *)(local_b0.Data + (longlong)iVar9 * 4) = local_b8[0];
    }
    uVar13 = 1;
    if (1 < param_1->ArrayNum) {
      lVar16 = 4;
      do {
        uVar10 = 0;
        if ((int)uVar13 < (int)local_a8) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar17 = *(float *)(local_b0.Data + lVar16);
        if (((int)local_a8 < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (fVar5 < (float)((uint)(*(float *)local_b0.Data - fVar17) & uVar11)) {
          if (0 < (int)local_a8) {
            do {
              pFVar12 = FAutomationTestFramework::Get();
              pFVar3 = pFVar12->CurrentTest;
              pcVar4 = *(code **)(pFVar3->_padding_ + 0x50);
              uVar11 = 0;
              if ((int)uVar14 < (int)local_a8) {
                uVar11 = ~uVar14 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar11 = 0;
              if ((int)uVar14 < param_1->ArrayNum) {
                uVar11 = ~uVar14 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              ::FString::PrintfImpl(&local_a0,L"%s: %f");
              (*pcVar4)(pFVar3,&local_a0,0,0);
              if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < (int)local_a8);
          }
          pFVar12 = FAutomationTestFramework::Get();
          pFVar3 = pFVar12->CurrentTest;
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
          ::FString::PrintfImpl(local_90,L"Easing Function tests failed at index %d!");
          (*pcVar4)(pFVar3,local_90,0);
          if (local_90[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90[0].Data.AllocatorInstance.Data);
          }
          if (local_b0.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_b0.Data);
          return;
        }
        uVar13 = uVar13 + 1;
        lVar16 = lVar16 + 4;
      } while ((int)uVar13 < param_1->ArrayNum);
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    local_res20 = iVar7 + 1;
    if (99 < local_res20) {
      return;
    }
  } while( true );
}

// TestBody @ 141ca0a40

void __thiscall
FInterpolationFunctionTests::TestBody(FInterpolationFunctionTests *this,FString *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res18 [16];
  TArray<TTuple<float_(__cdecl*)(float),FString>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x818,&local_18.AllocatorInstance,&local_18.ArrayMax);
  lVar2 = (longlong)iVar1 * 3 + 1;
  *(code **)(local_18.AllocatorInstance.Data + lVar2 * 8 + -8) =
       `FInterpolationFunctionTests::TestBody'::__l3::<lambda_2>::<lambda_invoker_cdecl>;
  local_18.ArrayNum = iVar1 + 1;
  ::FString::FString((FString *)(local_18.AllocatorInstance.Data + lVar2 * 8),L"InterpExpoInOutA");
  if (local_18.ArrayNum == local_18.ArrayMax) {
    local_18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  lVar2 = (longlong)local_18.ArrayNum * 3 + 1;
  *(code **)(local_18.AllocatorInstance.Data + lVar2 * 8 + -8) =
       `FInterpolationFunctionTests::TestBody'::__l3::<lambda_3>::<lambda_invoker_cdecl>;
  local_18.ArrayNum = local_18.ArrayNum + 1;
  ::FString::FString((FString *)(local_18.AllocatorInstance.Data + lVar2 * 8),L"InterpExpoInOutB");
  if (local_18.ArrayNum == local_18.ArrayMax) {
    local_18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  lVar2 = (longlong)local_18.ArrayNum;
  local_18.ArrayNum = local_18.ArrayNum + 1;
  lVar2 = lVar2 * 3 + 1;
  *(code **)(local_18.AllocatorInstance.Data + lVar2 * 8 + -8) =
       `FInterpolationFunctionTests::TestBody'::__l3::<lambda_4>::<lambda_invoker_cdecl>;
  ::FString::FString((FString *)(local_18.AllocatorInstance.Data + lVar2 * 8),L"InterpExpoInOutC");
  `FInterpolationFunctionTests::TestBody'::__l2::<lambda_1>::operator()(local_res18,&local_18);
  DestructItems<TTuple<float_(__cdecl*)(float),FString>,int>
            ((TTuple<float_(__cdecl*)(float),FString> *)local_18.AllocatorInstance.Data,
             local_18.ArrayNum);
  if ((TTuple<float_(__cdecl*)(float),FString> *)local_18.AllocatorInstance.Data !=
      (TTuple<float_(__cdecl*)(float),FString> *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x818,&local_18.AllocatorInstance,&local_18.ArrayMax);
  lVar2 = (longlong)iVar1 * 3 + 1;
  *(code **)(local_18.AllocatorInstance.Data + lVar2 * 8 + -8) =
       `FInterpolationFunctionTests::TestBody'::__l4::<lambda_5>::<lambda_invoker_cdecl>;
  local_18.ArrayNum = iVar1 + 1;
  ::FString::FString((FString *)(local_18.AllocatorInstance.Data + lVar2 * 8),
                     L"InterpCircularInOutA");
  if (local_18.ArrayNum == local_18.ArrayMax) {
    local_18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  lVar2 = (longlong)local_18.ArrayNum * 3 + 1;
  *(code **)(local_18.AllocatorInstance.Data + lVar2 * 8 + -8) =
       `FInterpolationFunctionTests::TestBody'::__l4::<lambda_6>::<lambda_invoker_cdecl>;
  local_18.ArrayNum = local_18.ArrayNum + 1;
  ::FString::FString((FString *)(local_18.AllocatorInstance.Data + lVar2 * 8),
                     L"InterpCircularInOutB");
  if (local_18.ArrayNum == local_18.ArrayMax) {
    local_18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  lVar2 = (longlong)local_18.ArrayNum;
  local_18.ArrayNum = local_18.ArrayNum + 1;
  lVar2 = lVar2 * 3 + 1;
  *(code **)(local_18.AllocatorInstance.Data + lVar2 * 8 + -8) =
       `FInterpolationFunctionTests::TestBody'::__l4::<lambda_7>::<lambda_invoker_cdecl>;
  ::FString::FString((FString *)(local_18.AllocatorInstance.Data + lVar2 * 8),
                     L"InterpCircularInOutC");
  `FInterpolationFunctionTests::TestBody'::__l2::<lambda_1>::operator()(local_res18,&local_18);
  DestructItems<TTuple<float_(__cdecl*)(float),FString>,int>
            ((TTuple<float_(__cdecl*)(float),FString> *)local_18.AllocatorInstance.Data,
             local_18.ArrayNum);
  if ((TTuple<float_(__cdecl*)(float),FString> *)local_18.AllocatorInstance.Data !=
      (TTuple<float_(__cdecl*)(float),FString> *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x818,&local_18.AllocatorInstance,&local_18.ArrayMax);
  lVar2 = (longlong)iVar1 * 3 + 1;
  *(code **)(local_18.AllocatorInstance.Data + lVar2 * 8 + -8) =
       `FInterpolationFunctionTests::TestBody'::__l5::<lambda_8>::<lambda_invoker_cdecl>;
  local_18.ArrayNum = iVar1 + 1;
  ::FString::FString((FString *)(local_18.AllocatorInstance.Data + lVar2 * 8),L"InterpSinInOutA");
  if (local_18.ArrayNum == local_18.ArrayMax) {
    local_18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  lVar2 = (longlong)local_18.ArrayNum * 3 + 1;
  *(code **)(local_18.AllocatorInstance.Data + lVar2 * 8 + -8) =
       `FInterpolationFunctionTests::TestBody'::__l5::<lambda_9>::<lambda_invoker_cdecl>;
  local_18.ArrayNum = local_18.ArrayNum + 1;
  ::FString::FString((FString *)(local_18.AllocatorInstance.Data + lVar2 * 8),L"InterpSinInOutB");
  if (local_18.ArrayNum == local_18.ArrayMax) {
    local_18.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_18.AllocatorInstance,&local_18.ArrayMax);
  }
  lVar2 = (longlong)local_18.ArrayNum;
  local_18.ArrayNum = local_18.ArrayNum + 1;
  lVar2 = lVar2 * 3 + 1;
  *(code **)(local_18.AllocatorInstance.Data + lVar2 * 8 + -8) =
       `FInterpolationFunctionTests::TestBody'::__l5::<lambda_10>::<lambda_invoker_cdecl>;
  ::FString::FString((FString *)(local_18.AllocatorInstance.Data + lVar2 * 8),L"InterpSinInOutC");
  `FInterpolationFunctionTests::TestBody'::__l2::<lambda_1>::operator()(local_res18,&local_18);
  DestructItems<TTuple<float_(__cdecl*)(float),FString>,int>
            ((TTuple<float_(__cdecl*)(float),FString> *)local_18.AllocatorInstance.Data,
             local_18.ArrayNum);
  if ((TTuple<float_(__cdecl*)(float),FString> *)local_18.AllocatorInstance.Data !=
      (TTuple<float_(__cdecl*)(float),FString> *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

