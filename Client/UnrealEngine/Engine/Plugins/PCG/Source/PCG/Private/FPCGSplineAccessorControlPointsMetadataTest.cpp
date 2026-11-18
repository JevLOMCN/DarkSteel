// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f88d00

EAutomationTestFlags __thiscall
FPCGSplineAccessorControlPointsMetadataTest::GetTestFlags
          (FPCGSplineAccessorControlPointsMetadataTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f88d10

bool __thiscall
FPCGSplineAccessorControlPointsMetadataTest::IsStressTest
          (FPCGSplineAccessorControlPointsMetadataTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f88d20

uint __thiscall
FPCGSplineAccessorControlPointsMetadataTest::GetRequiredDeviceNum
          (FPCGSplineAccessorControlPointsMetadataTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f88d30

FString * __thiscall
FPCGSplineAccessorControlPointsMetadataTest::GetTestSourceFileName
          (FPCGSplineAccessorControlPointsMetadataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Accessors\\PCGSplineAccessorTests.cpp.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f88d60

int __thiscall
FPCGSplineAccessorControlPointsMetadataTest::GetTestSourceFileLine
          (FPCGSplineAccessorControlPointsMetadataTest *this)

{
  return 0xf;
}

// GetTests @ 149f88d70

/* WARNING: Removing unreachable block (ram,0x000149f88e5d) */
/* WARNING: Removing unreachable block (ram,0x000149f88f28) */

void __thiscall
FPCGSplineAccessorControlPointsMetadataTest::GetTests
          (FPCGSplineAccessorControlPointsMetadataTest *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.Accessor.Splines.ControlPointMetadata");
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

// RunTest @ 149f88f50

bool __thiscall
FPCGSplineAccessorControlPointsMetadataTest::RunTest
          (FPCGSplineAccessorControlPointsMetadataTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  double *pdVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UObject *pUVar10;
  UPCGSplineData *this_00;
  UPCGMetadata *this_01;
  FPCGMetadataDomain *pFVar11;
  FPCGMetadataAttribute<int> *pFVar12;
  FName *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  FPCGMetadataDomain *pFVar19;
  FPCGMetadataDomain *pFVar20;
  undefined1 local_res18 [8];
  int local_res20 [2];
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [16];
  int local_1d8;
  int iStack_1d4;
  undefined1 local_1d0 [32];
  TObjectPtr<UPCGMetadata>_u_0 local_1b0;
  ulong64 local_1a8;
  FPCGCrc local_1a0;
  TObjectPtr<UPCGMetadata>_u_0 local_198;
  ForAnyElementType local_190;
  undefined8 local_188;
  undefined1 local_180;
  FName local_178;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  int *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FName local_68 [2];
  TArrayView<int,int> local_58;
  TArrayView<int_const_,int> local_48;
  TArrayView<int,int> local_38;
  
  pUVar10 = GetTransientPackageAsObject();
  this_00 = NewObject<UPCGSplineData>(pUVar10);
  pFVar20 = (FPCGMetadataDomain *)0x0;
  local_1e8._8_8_ = (void *)0x0;
  local_1d8 = 0;
  iStack_1d4 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x88,8,10,(ForAnyElementType *)(local_1e8 + 8),0,&iStack_1d4);
  pFVar11 = pFVar20;
  do {
    if (local_1d8 == iStack_1d4) {
      local_1d8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x888,(ForAnyElementType *)(local_1e8 + 8),&iStack_1d4);
    }
    iVar9 = local_1d8 + 1;
    iVar16 = (int)pFVar11;
    uVar17 = iVar16 + 1;
    pFVar11 = (FPCGMetadataDomain *)(ulonglong)uVar17;
    lVar14 = (longlong)local_1d8 * 0x88;
    *(float *)(local_1e8._8_8_ + lVar14) = (float)iVar16;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pdVar3 = (double *)(local_1e8._8_8_ + lVar14 + 8);
    *pdVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    pdVar3[1] = (double)uVar5;
    *(double *)(local_1e8._8_8_ + lVar14 + 0x18) =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(local_1e8._8_8_ + lVar14 + 0x20) = 0;
    *(undefined8 *)(local_1e8._8_8_ + lVar14 + 0x28) = 0;
    *(undefined8 *)(local_1e8._8_8_ + lVar14 + 0x30) = 0;
    *(undefined8 *)(local_1e8._8_8_ + lVar14 + 0x38) = 0;
    *(undefined8 *)(local_1e8._8_8_ + lVar14 + 0x40) = 0;
    *(undefined8 *)(local_1e8._8_8_ + lVar14 + 0x48) = 0;
    *(undefined8 *)(local_1e8._8_8_ + lVar14 + 0x50) = 0;
    *(undefined8 *)(local_1e8._8_8_ + lVar14 + 0x58) = 0;
    *(undefined8 *)(local_1e8._8_8_ + lVar14 + 0x60) = 0;
    *(undefined8 *)(local_1e8._8_8_ + lVar14 + 0x68) = 0x3ff0000000000000;
    *(undefined8 *)(local_1e8._8_8_ + lVar14 + 0x70) = 0x3ff0000000000000;
    *(undefined8 *)(local_1e8._8_8_ + lVar14 + 0x78) = 0x3ff0000000000000;
    *(undefined1 *)(local_1e8._8_8_ + lVar14 + 0x80) = 1;
    local_1d8 = iVar9;
  } while ((int)uVar17 < 10);
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  UPCGSplineData::Initialize
            (this_00,(TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *)(local_1e8 + 8),false,
             &UE::Math::TTransform<double>::Identity,&local_170);
  this_01 = (UPCGMetadata *)(**(code **)(*(longlong *)this_00 + 0x328))(this_00);
  pFVar11 = pFVar20;
  if (this_01 != (UPCGMetadata *)0x0) {
    pFVar11 = UPCGMetadata::GetMetadataDomain(this_01,&PCGMetadataDomainID::Elements);
  }
  ::FString::FString(&local_160,"Metadata domain for control points exist");
  if (pFVar11 == (FPCGMetadataDomain *)0x0) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_c0,L"Expected \'%s\' to be not null.");
    (*pcVar4)(this,&local_c0,0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (!bVar7) {
    if ((pFVar11 == (FPCGMetadataDomain *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MetadataDomain",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Accessors\\PCGSplineAccessorTests.cpp.cpp"
                           ,0x86,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    ::FName::FName(&local_178,L"Int");
    local_res20[0] = -1;
    pFVar12 = FPCGMetadataDomain::CreateAttribute<int>(pFVar11,local_178,local_res20,false,false);
    ::FString::FString(&local_150,"Attribute was successfully created");
    if (pFVar12 == (FPCGMetadataAttribute<int> *)0x0) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_b0,L"Expected \'%s\' to be not null.");
      (*pcVar4)(this,&local_b0,0);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (!bVar7) {
      pFVar13 = ::FName::FName(local_68,L"ControlPoints");
      local_1d0._24_8_ = &___7FPCGAttributePropertySelector__6B_;
      local_1b0.DebugPtr = (UPCGMetadata *)0x0;
      local_1a8 = 0;
      local_1a0.Value = 0;
      local_1a0.bValid = false;
      local_1a0._5_3_ = 0;
      local_198._0_4_ = 0;
      local_190.Data = (FScriptContainerElement *)0x0;
      local_188 = 0;
      local_180 = 0;
      FPCGAttributePropertySelector::SetDomainName
                ((FPCGAttributePropertySelector *)(local_1d0 + 0x18),*pFVar13,true);
      FPCGAttributePropertySelector::SetAttributeName
                ((FPCGAttributePropertySelector *)(local_1d0 + 0x18),local_178,true);
      DestructItems<FString,int>((FString *)local_190.Data,(int)local_188);
      uVar17 = local_188._4_4_;
      local_188 = (ulonglong)local_188._4_4_ << 0x20;
      if (uVar17 == 0) {
        local_188 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,uVar17,&local_190,0,(int *)((longlong)&local_188 + 4));
        ConstructItems<FString,FString,int>(local_190.Data,(FString *)0x0,0);
      }
      PCGAttributeAccessorHelpers::CreateAccessor
                ((UPCGData *)local_1d0,(FPCGAttributePropertySelector *)this_00,
                 (bool)((char)local_1d0 + '\x18'));
      PCGAttributeAccessorHelpers::CreateKeys
                ((UPCGData *)local_1e8,(FPCGAttributePropertySelector *)this_00);
      bVar7 = (IPCGAttributeAccessor *)local_1d0._0_8_ != (IPCGAttributeAccessor *)0x0;
      ::FString::FString(&local_140,"Int accessor is valid");
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_140.Data.ArrayNum != 0) {
        FVar18.Data = local_140.Data.AllocatorInstance.Data;
      }
      bVar7 = FAutomationTestBase::TestTrue
                        ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,bVar7);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        bVar7 = (IPCGAttributeAccessorKeys *)local_1e8._0_8_ != (IPCGAttributeAccessorKeys *)0x0;
        ::FString::FString(&local_130,"Keys are valid");
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_130.Data.ArrayNum != 0) {
          FVar18.Data = local_130.Data.AllocatorInstance.Data;
        }
        bVar7 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,bVar7);
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (!bVar7) goto LAB_149f89852;
        iVar9 = (**(code **)(*(longlong *)local_1e8._0_8_ + 0x10))();
        ::FString::FString(&local_120,"Number of keys");
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_120.Data.ArrayNum != 0) {
          FVar18.Data = local_120.Data.AllocatorInstance.Data;
        }
        bVar7 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,iVar9,10);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (!bVar7) goto LAB_149f89852;
        local_1f8.Data = (FScriptContainerElement *)0x0;
        local_1f0 = 0;
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,10,&local_1f8,(int *)&local_1f0,(int *)((longlong)&local_1f0 + 4));
        uVar6 = local_1d0._0_8_;
        uVar5 = local_1e8._0_8_;
        lVar14 = (longlong)iVar9;
        *(undefined8 *)(local_1f8.Data + lVar14 * 4) = 0;
        *(undefined8 *)(local_1f8.Data + lVar14 * 4 + 8) = 0;
        *(undefined8 *)(local_1f8.Data + lVar14 * 4 + 0x10) = 0;
        *(undefined8 *)(local_1f8.Data + lVar14 * 4 + 0x10 + 8) = 0;
        *(undefined8 *)(local_1f8.Data + lVar14 * 4 + 0x20) = 0;
        iStack_90 = (int)local_1f0;
        local_98 = local_1f8.Data;
        if (((int)local_1f0 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        local_58._12_4_ = uStack_8c;
        local_58.ArrayNum = iStack_90;
        local_58.DataPtr = (int *)local_98;
        bVar7 = IPCGAttributeAccessor::GetRange<int>
                          ((IPCGAttributeAccessor *)uVar6,&local_58,0,
                           (IPCGAttributeAccessorKeys *)uVar5,StrictType);
        ::FString::FString(&local_110,"GetRange succeeded.");
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_110.Data.ArrayNum != 0) {
          FVar18.Data = local_110.Data.AllocatorInstance.Data;
        }
        bVar7 = FAutomationTestBase::TestTrue
                          ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,bVar7);
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          iVar9 = (int)local_1f0;
          uVar15 = (ulonglong)(int)local_1f0;
          pFVar1 = local_1f8.Data + uVar15 * 4;
          FVar18.Data = local_1f8.Data;
          while( true ) {
            if ((int)uVar15 != iVar9) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res18);
              uVar15 = local_1f0 & 0xffffffff;
            }
            if (FVar18.Data == pFVar1) {
              bVar7 = true;
              goto LAB_149f89521;
            }
            if (*(int *)FVar18.Data != -1) break;
            FVar18.Data = FVar18.Data + 4;
          }
          bVar7 = false;
LAB_149f89521:
          ::FString::FString(&local_100,"All have the default value");
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_100.Data.ArrayNum != 0) {
            FVar18.Data = local_100.Data.AllocatorInstance.Data;
          }
          bVar7 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,bVar7);
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          pFVar11 = pFVar20;
          pFVar19 = pFVar20;
          if (!bVar7) goto LAB_149f8983f;
          do {
            iVar9 = (int)pFVar11;
            if (((int)local_1f0 <= iVar9) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            uVar6 = local_1d0._0_8_;
            uVar5 = local_1e8._0_8_;
            *(int *)(local_1f8.Data + (longlong)&pFVar19->_padding_) = iVar9;
            pFVar11 = (FPCGMetadataDomain *)(ulonglong)(iVar9 + 1U);
            pFVar19 = (FPCGMetadataDomain *)((longlong)&pFVar19->_padding_ + 4);
          } while ((int)(iVar9 + 1U) < 10);
          iVar9 = (int)local_1f0;
          local_88 = local_1f8.Data;
          if (((int)local_1f0 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iStack_80 = iVar9;
          local_48._12_4_ = uStack_7c;
          local_48.ArrayNum = iVar9;
          local_48.DataPtr = (int *)local_88;
          bVar7 = IPCGAttributeAccessor::SetRange<int>
                            ((IPCGAttributeAccessor *)uVar6,&local_48,0,
                             (IPCGAttributeAccessorKeys *)uVar5,StrictType);
          ::FString::FString(&local_f0,"SetRange succeeded.");
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_f0.Data.ArrayNum != 0) {
            FVar18.Data = local_f0.Data.AllocatorInstance.Data;
          }
          bVar7 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,bVar7);
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          if (!bVar7) goto LAB_149f8983f;
          local_1d0._8_8_ = (int *)0x0;
          local_1d0._16_8_ = 0;
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,10,(ForAnyElementType *)(local_1d0 + 8),(int *)(local_1d0 + 0x10),
                             (int *)(local_1d0 + 0x14));
          uVar6 = local_1d0._0_8_;
          uVar5 = local_1e8._0_8_;
          lVar14 = (longlong)iVar9;
          piVar2 = (int *)(local_1d0._8_8_ + lVar14 * 4);
          piVar2[0] = 0;
          piVar2[1] = 0;
          piVar2[2] = 0;
          piVar2[3] = 0;
          piVar2 = (int *)(local_1d0._8_8_ + (lVar14 + 4) * 4);
          piVar2[0] = 0;
          piVar2[1] = 0;
          piVar2[2] = 0;
          piVar2[3] = 0;
          ((int *)(local_1d0._8_8_ + (lVar14 + 8) * 4))[0] = 0;
          ((int *)(local_1d0._8_8_ + (lVar14 + 8) * 4))[1] = 0;
          iStack_70 = local_1d0._16_4_;
          local_78 = (int *)local_1d0._8_8_;
          if (((int)local_1d0._16_4_ < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          local_38._12_4_ = uStack_6c;
          local_38.ArrayNum = iStack_70;
          local_38.DataPtr = local_78;
          bVar7 = IPCGAttributeAccessor::GetRange<int>
                            ((IPCGAttributeAccessor *)uVar6,&local_38,0,
                             (IPCGAttributeAccessorKeys *)uVar5,StrictType);
          ::FString::FString(&local_e0,"Second GetRange succeeded.");
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_e0.Data.ArrayNum != 0) {
            FVar18.Data = local_e0.Data.AllocatorInstance.Data;
          }
          bVar7 = FAutomationTestBase::TestTrue
                            ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,bVar7);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          pFVar11 = pFVar20;
          if (bVar7) {
            do {
              iVar9 = (int)pFVar11;
              if (((int)local_1d0._16_4_ <= iVar9) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              iVar16 = *(int *)(local_1d0._8_8_ + (longlong)&pFVar20->_padding_);
              ::FString::PrintfImpl(&local_d0,L"Value at index \'%d\' was set correctly");
              FVar18.Data = (FScriptContainerElement *)L"";
              if (local_d0.Data.ArrayNum != 0) {
                FVar18.Data = local_d0.Data.AllocatorInstance.Data;
              }
              bVar7 = FAutomationTestBase::TestEqual
                                ((FAutomationTestBase *)this,(wchar_t *)FVar18.Data,iVar16,iVar9);
              if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d0.Data.AllocatorInstance.Data);
              }
              if (!bVar7) goto LAB_149f8982c;
              pFVar20 = (FPCGMetadataDomain *)((longlong)&pFVar20->_padding_ + 4);
              pFVar11 = (FPCGMetadataDomain *)(ulonglong)(iVar9 + 1U);
            } while ((int)(iVar9 + 1U) < 10);
            bVar7 = true;
          }
          else {
LAB_149f8982c:
            bVar7 = false;
          }
          if ((int *)local_1d0._8_8_ != (int *)0x0) {
            FMemory::Free((void *)local_1d0._8_8_);
          }
        }
        else {
LAB_149f8983f:
          bVar7 = false;
        }
        if (local_1f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data);
        }
      }
      else {
LAB_149f89852:
        bVar7 = false;
      }
      if ((IPCGAttributeAccessorKeys *)local_1e8._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
        (**(code **)*(longlong *)local_1e8._0_8_)(local_1e8._0_8_,1);
      }
      if ((IPCGAttributeAccessor *)local_1d0._0_8_ != (IPCGAttributeAccessor *)0x0) {
        (**(code **)*(longlong *)local_1d0._0_8_)(local_1d0._0_8_,1);
      }
      DestructItems<FString,int>((FString *)local_190.Data,(int)local_188);
      if (local_190.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data);
      }
      goto LAB_149f8989a;
    }
  }
  bVar7 = false;
LAB_149f8989a:
  if ((void *)local_1e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1e8._8_8_);
  }
  return bVar7;
}

// GetBeautifiedTestName @ 149f898d0

FString * __thiscall
FPCGSplineAccessorControlPointsMetadataTest::GetBeautifiedTestName
          (FPCGSplineAccessorControlPointsMetadataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Accessor.Splines.ControlPointMetadata");
  return __return_storage_ptr__;
}

