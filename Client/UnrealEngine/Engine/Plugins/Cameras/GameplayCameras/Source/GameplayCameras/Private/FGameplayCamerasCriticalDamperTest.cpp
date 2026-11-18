// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// GetTestFlags @ 14d648f80

EAutomationTestFlags __thiscall
FGameplayCamerasCriticalDamperTest::GetTestFlags(FGameplayCamerasCriticalDamperTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14d648f90

bool __thiscall
FGameplayCamerasCriticalDamperTest::IsStressTest(FGameplayCamerasCriticalDamperTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14d648fa0

uint __thiscall
FGameplayCamerasCriticalDamperTest::GetRequiredDeviceNum(FGameplayCamerasCriticalDamperTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14d648fb0

FString * __thiscall
FGameplayCamerasCriticalDamperTest::GetTestSourceFileName
          (FGameplayCamerasCriticalDamperTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\CriticalDamperTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d648fe0

int __thiscall
FGameplayCamerasCriticalDamperTest::GetTestSourceFileLine(FGameplayCamerasCriticalDamperTest *this)

{
  return 9;
}

// GetTests @ 14d648ff0

/* WARNING: Removing unreachable block (ram,0x00014d6490dd) */
/* WARNING: Removing unreachable block (ram,0x00014d6491a8) */

void __thiscall
FGameplayCamerasCriticalDamperTest::GetTests
          (FGameplayCamerasCriticalDamperTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.GameplayCameras.CriticalDamper");
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
    iVar3 = UE::Core::Private::
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
    iVar3 = UE::Core::Private::
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

// RunTest @ 14d6491d0

bool __thiscall
FGameplayCamerasCriticalDamperTest::RunTest
          (FGameplayCamerasCriticalDamperTest *this,FString *param_1)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_a8 [8];
  float local_a0;
  FCriticalDamper local_98;
  FString local_88 [8];
  
  fVar13 = __real_41200000;
  UE::Cameras::FCriticalDamper::FCriticalDamper(&local_98,__real_41200000);
  fVar14 = __real_3f800000;
  fVar8 = UE::Cameras::FCriticalDamper::Update(&local_98,0.0,__real_3f800000);
  ::FString::FString((FString *)local_a8,"Dampen 0");
  fVar1 = __real_38d1b717;
  pwVar4 = L"";
  if (local_a0 != 0.0) {
    pwVar4 = (wchar_t *)CONCAT44(local_a8._4_4_,local_a8._0_4_);
  }
  bVar3 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,pwVar4,fVar8,0.0,__real_38d1b717);
  if ((void *)CONCAT44(local_a8._4_4_,local_a8._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_a8._4_4_,local_a8._0_4_));
  }
  if (bVar3) {
    UE::Cameras::FCriticalDamper::FCriticalDamper(&local_98,fVar13);
    UE::Cameras::FCriticalDamper::Reset(&local_98,fVar14,0.0);
    fVar8 = __real_3eae147b;
    lVar6 = 0x1e;
    lVar7 = 0x1e;
    do {
      UE::Cameras::FCriticalDamper::Update(&local_98,fVar8);
      fVar9 = local_98.X0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    ::FString::FString((FString *)local_a8,"Dampen 1");
    pwVar4 = L"";
    if (local_a0 != 0.0) {
      pwVar4 = (wchar_t *)CONCAT44(local_a8._4_4_,local_a8._0_4_);
    }
    bVar3 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar4,fVar9,0.0,fVar1);
    if ((void *)CONCAT44(local_a8._4_4_,local_a8._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_a8._4_4_,local_a8._0_4_));
    }
    if (bVar3) {
      UE::Cameras::FCriticalDamper::FCriticalDamper(&local_98,fVar13);
      lVar7 = 0x1e;
      fVar9 = fVar14;
      do {
        fVar9 = UE::Cameras::FCriticalDamper::Update(&local_98,fVar9,fVar8);
        fVar10 = local_98.X0;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      ::FString::FString((FString *)local_a8,"Dampen 1 with value passing");
      pwVar4 = L"";
      if (local_a0 != 0.0) {
        pwVar4 = (wchar_t *)CONCAT44(local_a8._4_4_,local_a8._0_4_);
      }
      bVar3 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar4,fVar10,0.0,fVar1);
      if ((void *)CONCAT44(local_a8._4_4_,local_a8._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_a8._4_4_,local_a8._0_4_));
      }
      if (bVar3) {
        UE::Cameras::FCriticalDamper::FCriticalDamper(&local_98,fVar13);
        lVar7 = 0x1e;
        fVar9 = fVar14;
        do {
          fVar9 = UE::Cameras::FCriticalDamper::Update(&local_98,fVar9,0.0,fVar8);
          fVar10 = local_98.X0;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        ::FString::FString((FString *)local_a8,"Dampen 1 with state passing");
        pwVar4 = L"";
        if (local_a0 != 0.0) {
          pwVar4 = (wchar_t *)CONCAT44(local_a8._4_4_,local_a8._0_4_);
        }
        bVar3 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar4,fVar10,0.0,fVar1);
        if ((void *)CONCAT44(local_a8._4_4_,local_a8._0_4_) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_a8._4_4_,local_a8._0_4_));
        }
        if (bVar3) {
          UE::Cameras::FCriticalDamper::FCriticalDamper(&local_98,fVar13);
          fVar9 = __real_bf800000;
          do {
            fVar9 = UE::Cameras::FCriticalDamper::Update(&local_98,fVar9,fVar8);
            fVar10 = local_98.X0;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          ::FString::FString((FString *)local_a8,"Dampen -1");
          pwVar4 = L"";
          if (local_a0 != 0.0) {
            pwVar4 = (wchar_t *)CONCAT44(local_a8._4_4_,local_a8._0_4_);
          }
          bVar3 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,pwVar4,fVar10,0.0,fVar1);
          if ((void *)CONCAT44(local_a8._4_4_,local_a8._0_4_) != (void *)0x0) {
            FMemory::Free((void *)CONCAT44(local_a8._4_4_,local_a8._0_4_));
          }
          if (bVar3) {
            UE::Cameras::FCriticalDamper::FCriticalDamper(&local_98,fVar13);
            fVar9 = __real_40000000;
            lVar6 = 0x28;
            fVar10 = __real_40a00000;
            do {
              fVar10 = UE::Cameras::FCriticalDamper::Update(&local_98,fVar10,fVar9,fVar8);
              fVar11 = local_98.X0;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
            ::FString::FString((FString *)local_a8,"Dampen 5->2 (X0)");
            pwVar4 = L"";
            if (local_a0 != 0.0) {
              pwVar4 = (wchar_t *)CONCAT44(local_a8._4_4_,local_a8._0_4_);
            }
            bVar3 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,pwVar4,fVar11,0.0,fVar1);
            if ((void *)CONCAT44(local_a8._4_4_,local_a8._0_4_) != (void *)0x0) {
              FMemory::Free((void *)CONCAT44(local_a8._4_4_,local_a8._0_4_));
            }
            if (bVar3) {
              ::FString::FString((FString *)local_a8,"Dampen 5->2");
              pwVar4 = L"";
              if (local_a0 != 0.0) {
                pwVar4 = (wchar_t *)CONCAT44(local_a8._4_4_,local_a8._0_4_);
              }
              bVar3 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,pwVar4,fVar10,fVar9,__real_3727c5ac);
              if ((void *)CONCAT44(local_a8._4_4_,local_a8._0_4_) != (void *)0x0) {
                FMemory::Free((void *)CONCAT44(local_a8._4_4_,local_a8._0_4_));
              }
              if (bVar3) {
                UE::Cameras::FCriticalDamper::FCriticalDamper((FCriticalDamper *)local_a8,fVar13);
                UE::Cameras::FCriticalDamper::Reset((FCriticalDamper *)local_a8,fVar14,0.0);
                UE::Cameras::FCriticalDamper::Update((FCriticalDamper *)local_a8,fVar8);
                UE::Cameras::FCriticalDamper::Update((FCriticalDamper *)local_a8,fVar8);
                UE::Cameras::FCriticalDamper::FCriticalDamper(&local_98,fVar13);
                UE::Cameras::FCriticalDamper::Reset(&local_98,(float)local_a8._4_4_,local_a0);
                fVar14 = local_98.X0;
                uVar2 = local_a8._4_4_;
                ::FString::FString(local_88,"Framerate equivalence");
                FVar5.Data = (FScriptContainerElement *)L"";
                if (local_88[0].Data.ArrayNum != 0) {
                  FVar5.Data = local_88[0].Data.AllocatorInstance.Data;
                }
                bVar3 = FAutomationTestBase::TestEqual
                                  ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,fVar14,
                                   (float)uVar2,fVar1);
                if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
                }
                fVar9 = local_98.X0Derivative;
                fVar14 = local_a0;
                if (bVar3) {
                  ::FString::FString(local_88,"Framerate equivalence");
                  FVar5.Data = (FScriptContainerElement *)L"";
                  if (local_88[0].Data.ArrayNum != 0) {
                    FVar5.Data = local_88[0].Data.AllocatorInstance.Data;
                  }
                  bVar3 = FAutomationTestBase::TestEqual
                                    ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,fVar9,fVar14,
                                     fVar1);
                  if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
                  }
                  if (bVar3) {
                    ::FString::FString(local_88,"Framerate equivalence");
                    FVar5.Data = (FScriptContainerElement *)L"";
                    if (local_88[0].Data.ArrayNum != 0) {
                      FVar5.Data = local_88[0].Data.AllocatorInstance.Data;
                    }
                    bVar3 = FAutomationTestBase::TestEqual
                                      ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,local_98.W0
                                       ,(float)local_a8._0_4_,fVar1);
                    if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
                    }
                    if (bVar3) {
                      UE::Cameras::FCriticalDamper::Update((FCriticalDamper *)local_a8,fVar8);
                      UE::Cameras::FCriticalDamper::Update((FCriticalDamper *)local_a8,fVar8);
                      fVar14 = __real_3f2e147b;
                      UE::Cameras::FCriticalDamper::Update(&local_98,__real_3f2e147b);
                      fVar9 = local_98.X0;
                      uVar2 = local_a8._4_4_;
                      ::FString::FString(local_88,"Framerate equivalence");
                      fVar1 = __real_3a83126f;
                      FVar5.Data = (FScriptContainerElement *)L"";
                      if (local_88[0].Data.ArrayNum != 0) {
                        FVar5.Data = local_88[0].Data.AllocatorInstance.Data;
                      }
                      bVar3 = FAutomationTestBase::TestEqual
                                        ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,fVar9,
                                         (float)uVar2,__real_3a83126f);
                      if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
                      }
                      fVar10 = local_98.X0Derivative;
                      fVar9 = local_a0;
                      if (bVar3) {
                        ::FString::FString(local_88,"Framerate equivalence");
                        FVar5.Data = (FScriptContainerElement *)L"";
                        if (local_88[0].Data.ArrayNum != 0) {
                          FVar5.Data = local_88[0].Data.AllocatorInstance.Data;
                        }
                        bVar3 = FAutomationTestBase::TestEqual
                                          ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,fVar10,
                                           fVar9,fVar1);
                        if (local_88[0].Data.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
                        }
                        if (bVar3) {
                          UE::Cameras::FCriticalDamper::FCriticalDamper
                                    ((FCriticalDamper *)local_a8,fVar13);
                          UE::Cameras::FCriticalDamper::Reset((FCriticalDamper *)local_a8,0.0,0.0);
                          fVar10 = UE::Cameras::FCriticalDamper::Update
                                             ((FCriticalDamper *)local_a8,__real_40a00000,
                                              __real_40c00000,fVar8);
                          fVar9 = __real_40e00000;
                          fVar10 = UE::Cameras::FCriticalDamper::Update
                                             ((FCriticalDamper *)local_a8,fVar10,__real_40e00000,
                                              fVar8);
                          fVar11 = UE::Cameras::FCriticalDamper::Update
                                             ((FCriticalDamper *)local_a8,fVar10,__real_41000000,
                                              fVar8);
                          fVar10 = __real_41100000;
                          fVar11 = UE::Cameras::FCriticalDamper::Update
                                             ((FCriticalDamper *)local_a8,fVar11,__real_41100000,
                                              fVar8);
                          fVar12 = UE::Cameras::FCriticalDamper::Update
                                             ((FCriticalDamper *)local_a8,fVar11,fVar13,fVar8);
                          fVar11 = __real_41300000;
                          fVar8 = UE::Cameras::FCriticalDamper::Update
                                            ((FCriticalDamper *)local_a8,fVar12,__real_41300000,
                                             fVar8);
                          UE::Cameras::FCriticalDamper::FCriticalDamper(&local_98,fVar13);
                          UE::Cameras::FCriticalDamper::Reset(&local_98,0.0,0.0);
                          fVar13 = UE::Cameras::FCriticalDamper::Update
                                             (&local_98,__real_40a00000,fVar9,fVar14);
                          fVar13 = UE::Cameras::FCriticalDamper::Update
                                             (&local_98,fVar13,fVar10,fVar14);
                          fVar14 = UE::Cameras::FCriticalDamper::Update
                                             (&local_98,fVar13,fVar11,fVar14);
                          ::FString::FString(local_88,"Framerate equivalence");
                          FVar5.Data = (FScriptContainerElement *)L"";
                          if (local_88[0].Data.ArrayNum != 0) {
                            FVar5.Data = local_88[0].Data.AllocatorInstance.Data;
                          }
                          bVar3 = FAutomationTestBase::TestEqual
                                            ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,
                                             fVar14,fVar8,fVar1);
                          if (local_88[0].Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
                          }
                          if (bVar3) {
                            ::FString::FString(local_88,"Framerate equivalence");
                            FVar5.Data = (FScriptContainerElement *)L"";
                            if (local_88[0].Data.ArrayNum != 0) {
                              FVar5.Data = local_88[0].Data.AllocatorInstance.Data;
                            }
                            bVar3 = FAutomationTestBase::TestEqual
                                              ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,
                                               local_98.X0,(float)local_a8._4_4_,fVar1);
                            if (local_88[0].Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
                            }
                            if (bVar3) {
                              ::FString::FString(local_88,"Framerate equivalence");
                              FVar5.Data = (FScriptContainerElement *)L"";
                              if (local_88[0].Data.ArrayNum != 0) {
                                FVar5.Data = local_88[0].Data.AllocatorInstance.Data;
                              }
                              bVar3 = FAutomationTestBase::TestEqual
                                                ((FAutomationTestBase *)this,(wchar_t *)FVar5.Data,
                                                 local_98.X0Derivative,local_a0,fVar1);
                              if (local_88[0].Data.AllocatorInstance.Data ==
                                  (FScriptContainerElement *)0x0) {
                                return bVar3;
                              }
                              FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
                              return bVar3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// GetBeautifiedTestName @ 14d649a50

FString * __thiscall
FGameplayCamerasCriticalDamperTest::GetBeautifiedTestName
          (FGameplayCamerasCriticalDamperTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.GameplayCameras.CriticalDamper");
  return __return_storage_ptr__;
}

