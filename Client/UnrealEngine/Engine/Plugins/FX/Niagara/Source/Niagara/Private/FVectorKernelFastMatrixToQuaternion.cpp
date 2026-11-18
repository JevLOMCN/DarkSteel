// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// Exec @ 1492e4ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FVectorKernelFastMatrixToQuaternion::Exec(FVectorVMExternalFunctionContext *param_1)

{
  longlong *plVar1;
  uchar *puVar2;
  int iVar3;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ForElementType<VectorVM::FExternalFuncInputHandler<float>_> FVar14;
  ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_> FVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_318 [32];
  ulonglong local_2f8;
  longlong local_2f0;
  float local_2e8 [16];
  ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_> local_2a8;
  int local_260;
  int local_25c;
  ForElementType<VectorVM::FExternalFuncInputHandler<float>_> local_258;
  uint local_d0;
  int local_cc;
  float local_c8 [4];
  ulonglong local_b8;
  ulonglong uVar18;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_318;
  uVar20 = 0;
  local_258.SecondaryData = (ForElementType<VectorVM::FExternalFuncInputHandler<float>_>)0x0;
  local_d0 = 0;
  lVar21 = 0x10;
  local_cc = 0x10;
  uVar12 = uVar20;
  while( true ) {
    iVar9 = (int)uVar12;
    if (iVar9 == local_cc) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorVM::FExternalFuncInputHandler<float>_>_>
                        (0x818,&local_258,&local_cc);
    }
    local_d0 = iVar9 + 1;
    FVar14 = (ForElementType<VectorVM::FExternalFuncInputHandler<float>_>)&local_258;
    if (local_258.SecondaryData != (ForElementType<VectorVM::FExternalFuncInputHandler<float>_>)0x0)
    {
      FVar14 = local_258.SecondaryData;
    }
    lVar10 = (longlong)iVar9;
    lVar19 = (longlong)FVar14 + lVar10 * 0x18;
    *(undefined8 *)((longlong)FVar14 + lVar10 * 0x18) = 0;
    puVar2 = (uchar *)((longlong)FVar14 + 8) + lVar10 * 0x18;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    *(undefined4 *)(lVar19 + 0x10) = 0;
    pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)(lVar19 + 0x10));
    iVar9 = *(int *)(lVar19 + 0x10);
    *(float **)((longlong)FVar14 + lVar10 * 0x18) = pfVar11;
    iVar3 = param_1->PerInstanceFnInstanceIdx;
    *(float **)((longlong)FVar14 + lVar10 * 0x18) = pfVar11 + iVar9 * iVar3;
    *(float **)((uchar *)((longlong)FVar14 + 8) + lVar10 * 0x18) = pfVar11 + iVar9 * iVar3;
    lVar21 = lVar21 + -1;
    if (lVar21 == 0) break;
    uVar12 = (ulonglong)local_d0;
  }
  local_2a8.SecondaryData = (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0;
  local_25c = 4;
  local_260 = 1;
  local_2a8.InlineData[0] = '\0';
  local_2a8.InlineData[1] = '\0';
  local_2a8.InlineData[2] = '\0';
  local_2a8.InlineData[3] = '\0';
  local_2a8.InlineData[4] = '\0';
  local_2a8.InlineData[5] = '\0';
  local_2a8.InlineData[6] = '\0';
  local_2a8.InlineData[7] = '\0';
  local_2a8.InlineData[8] = '\0';
  local_2a8.InlineData[9] = '\0';
  local_2a8.InlineData[10] = '\0';
  local_2a8.InlineData[0xb] = '\0';
  local_2a8.InlineData._0_8_ =
       FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)(local_2a8.InlineData + 8));
  local_2a8.InlineData._0_8_ =
       local_2a8.InlineData._0_8_ +
       (longlong)(local_2a8.InlineData._8_4_ * param_1->PerInstanceFnInstanceIdx) * 4;
  if (local_260 == local_25c) {
    local_260 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>_>
                          (0x810,&local_2a8,&local_25c);
  }
  lVar21 = (longlong)local_260;
  FVar15 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)&local_2a8;
  if (local_2a8.SecondaryData != (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0
     ) {
    FVar15 = local_2a8.SecondaryData;
  }
  plVar1 = (longlong *)((longlong)FVar15 + lVar21 * 0x10);
  local_260 = local_260 + 1;
  *(longlong *)((longlong)FVar15 + lVar21 * 0x10) = 0;
  *(undefined4 *)(plVar1 + 1) = 0;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)(plVar1 + 1));
  *(float **)((longlong)FVar15 + lVar21 * 0x10) = pfVar11;
  *(float **)((longlong)FVar15 + lVar21 * 0x10) =
       pfVar11 + (int)plVar1[1] * param_1->PerInstanceFnInstanceIdx;
  if (local_260 == local_25c) {
    local_260 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>_>
                          (0x810,&local_2a8,&local_25c);
  }
  lVar21 = (longlong)local_260;
  FVar15 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)&local_2a8;
  if (local_2a8.SecondaryData != (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0
     ) {
    FVar15 = local_2a8.SecondaryData;
  }
  plVar1 = (longlong *)((longlong)FVar15 + lVar21 * 0x10);
  local_260 = local_260 + 1;
  *(longlong *)((longlong)FVar15 + lVar21 * 0x10) = 0;
  *(undefined4 *)(plVar1 + 1) = 0;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)(plVar1 + 1));
  *(float **)((longlong)FVar15 + lVar21 * 0x10) = pfVar11;
  *(float **)((longlong)FVar15 + lVar21 * 0x10) =
       pfVar11 + (int)plVar1[1] * param_1->PerInstanceFnInstanceIdx;
  if (local_260 == local_25c) {
    local_260 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>_>
                          (0x810,&local_2a8,&local_25c);
  }
  lVar21 = (longlong)local_260;
  FVar15 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)&local_2a8;
  if (local_2a8.SecondaryData != (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0
     ) {
    FVar15 = local_2a8.SecondaryData;
  }
  plVar1 = (longlong *)((longlong)FVar15 + lVar21 * 0x10);
  local_260 = local_260 + 1;
  *(longlong *)((longlong)FVar15 + lVar21 * 0x10) = 0;
  *(undefined4 *)(plVar1 + 1) = 0;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)(plVar1 + 1));
  fVar7 = __real_3f000000;
  fVar6 = __real_3f800000;
  *(float **)((longlong)FVar15 + lVar21 * 0x10) = pfVar11;
  *(float **)((longlong)FVar15 + lVar21 * 0x10) =
       pfVar11 + (int)plVar1[1] * param_1->PerInstanceFnInstanceIdx;
  uVar12 = uVar20;
  if (0 < param_1->NumInstances) {
    do {
      pfVar11 = local_2e8;
      uVar13 = uVar20;
      uVar16 = uVar20;
      uVar18 = uVar20;
      do {
        if (((int)local_d0 <= (int)uVar18) &&
           (local_2f8 = uVar16, local_2f0 = (longlong)(int)local_d0,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar14 = (ForElementType<VectorVM::FExternalFuncInputHandler<float>_>)&local_258;
        if (local_258.SecondaryData !=
            (ForElementType<VectorVM::FExternalFuncInputHandler<float>_>)0x0) {
          FVar14 = local_258.SecondaryData;
        }
        uVar17 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar17;
        uVar16 = uVar16 + 1;
        pfVar4 = *(float **)(uVar13 + (longlong)FVar14);
        *(float **)(uVar13 + (longlong)FVar14) = pfVar4 + *(int *)(uVar13 + 0x10 + (longlong)FVar14)
        ;
        uVar13 = uVar13 + 0x18;
        *pfVar11 = *pfVar4;
        pfVar11 = pfVar11 + 1;
      } while ((int)uVar17 < 0x10);
      fVar22 = local_2e8[0] + local_2e8[5] + local_2e8[10];
      if (fVar22 <= 0.0) {
        uVar17 = (uint)(local_2e8[0] < local_2e8[5]);
        uVar13 = (ulonglong)(local_2e8[0] < local_2e8[5]);
        if (local_2e8[uVar13 * 5] <= local_2e8[10] && local_2e8[10] != local_2e8[uVar13 * 5]) {
          uVar17 = 2;
          uVar13 = 2;
        }
        uVar17 = (uVar17 + 1) % 3;
        lVar19 = (longlong)(int)uVar17;
        lVar21 = (longlong)(int)((uVar17 + 1) % 3);
        fVar24 = fVar6 / SQRT(((local_2e8[uVar13 * 5] - local_2e8[lVar19 * 5]) -
                              local_2e8[lVar21 * 5]) + fVar6);
        local_c8[0] = 0.0;
        local_c8[1] = 0.0;
        local_c8[2] = 0.0;
        local_c8[3] = 0.0;
        fVar22 = local_2e8[lVar21 + lVar19 * 4];
        fVar25 = local_2e8[lVar19 + lVar21 * 4];
        fVar23 = fVar24 * fVar7;
        local_c8[uVar13] = fVar7 / fVar24;
        local_c8[3] = (fVar22 - fVar25) * fVar23;
        local_c8[lVar19] =
             (local_2e8[uVar13 + lVar19 * 4] + local_2e8[lVar19 + uVar13 * 4]) * fVar23;
        local_c8[lVar21] =
             (local_2e8[uVar13 + lVar21 * 4] + local_2e8[lVar21 + uVar13 * 4]) * fVar23;
        fVar22 = local_c8[0];
        fVar25 = local_c8[1];
        fVar24 = local_c8[2];
        fVar23 = local_c8[3];
      }
      else {
        fVar23 = fVar6 / SQRT(fVar22 + fVar6);
        fVar24 = fVar23 * fVar7;
        fVar22 = (local_2e8[6] - local_2e8[9]) * fVar24;
        fVar25 = (local_2e8[8] - local_2e8[2]) * fVar24;
        fVar24 = (local_2e8[1] - local_2e8[4]) * fVar24;
        fVar23 = fVar7 / fVar23;
      }
      if (local_260 < 1) {
        local_2f8 = 0;
        local_2f0 = (longlong)local_260;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar15 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)&local_2a8;
      if (local_2a8.SecondaryData !=
          (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      pfVar11 = *(float **)FVar15;
      *(float **)FVar15 = pfVar11 + *(int *)((longlong)FVar15 + 8);
      *pfVar11 = fVar22;
      if (local_260 < 2) {
        local_2f8 = 1;
        local_2f0 = (longlong)local_260;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar15 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)&local_2a8;
      if (local_2a8.SecondaryData !=
          (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      pfVar11 = *(float **)((longlong)FVar15 + 0x10);
      *(float **)((longlong)FVar15 + 0x10) = pfVar11 + *(int *)((longlong)FVar15 + 0x18);
      *pfVar11 = fVar25;
      if (local_260 < 3) {
        local_2f8 = 2;
        local_2f0 = (longlong)local_260;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar15 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)&local_2a8;
      if (local_2a8.SecondaryData !=
          (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      pfVar11 = *(float **)((longlong)FVar15 + 0x20);
      *(float **)((longlong)FVar15 + 0x20) = pfVar11 + *(int *)((longlong)FVar15 + 0x28);
      *pfVar11 = fVar24;
      if (local_260 < 4) {
        local_2f8 = 3;
        local_2f0 = (longlong)local_260;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar15 = (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)&local_2a8;
      if (local_2a8.SecondaryData !=
          (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0) {
        FVar15 = local_2a8.SecondaryData;
      }
      uVar17 = (int)uVar12 + 1;
      pfVar11 = *(float **)((longlong)FVar15 + 0x30);
      *(float **)((longlong)FVar15 + 0x30) = pfVar11 + *(int *)((longlong)FVar15 + 0x38);
      *pfVar11 = fVar23;
      uVar12 = (ulonglong)uVar17;
    } while ((int)uVar17 < param_1->NumInstances);
  }
  if (local_2a8.SecondaryData != (ForElementType<VectorVM::FExternalFuncRegisterHandler<float>_>)0x0
     ) {
    FMemory::Free((void *)local_2a8.SecondaryData);
  }
  if (local_258.SecondaryData != (ForElementType<VectorVM::FExternalFuncInputHandler<float>_>)0x0) {
    FMemory::Free((void *)local_258.SecondaryData);
  }
  return;
}

// GetFunctionSignature @ 1492eef70

/* WARNING: Removing unreachable block (ram,0x0001492ef158) */

FNiagaraFunctionSignature * __cdecl
FVectorKernelFastMatrixToQuaternion::GetFunctionSignature
          (FNiagaraFunctionSignature *__return_storage_ptr__)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FNiagaraFunctionSignature *pFVar10;
  FNiagaraTypeRegistry *pFVar11;
  FName *pFVar12;
  FName local_res8;
  FName local_res10;
  FText local_88;
  FName local_78;
  uint local_70;
  FName local_68;
  undefined8 local_60;
  FName local_58;
  int local_50;
  void *local_48;
  undefined8 local_40;
  
  __return_storage_ptr__->ContextStageIndex = -1;
  __return_storage_ptr__->RequiredInputs = -1;
  __return_storage_ptr__->RequiredOutputs = -1;
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  (__return_storage_ptr__->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Inputs).ArrayNum = 0;
  (__return_storage_ptr__->Inputs).ArrayMax = 0;
  (__return_storage_ptr__->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Outputs).ArrayNum = 0;
  (__return_storage_ptr__->Outputs).ArrayMax = 0;
  iVar9 = -1;
  (__return_storage_ptr__->OwnerName).ComparisonIndex = 0;
  (__return_storage_ptr__->OwnerName).Number = 0;
  __return_storage_ptr__->ModuleUsageBitmask = 0;
  __return_storage_ptr__->MiscUsageBitMask = 0;
  puVar2 = &__return_storage_ptr__->field_0x30;
  __return_storage_ptr__->bRequiresContext = 0;
  __return_storage_ptr__->bHidden = 0;
  __return_storage_ptr__->bIsCompileTagGenerator = 0;
  __return_storage_ptr__->bSoftDeprecatedFunction = 0;
  __return_storage_ptr__->bReadFunction = 0;
  __return_storage_ptr__->bWriteFunction = 0;
  __return_storage_ptr__->bSupportsGPU = 1;
  __return_storage_ptr__->bSupportsCPU = 1;
  __return_storage_ptr__->bExperimental = 0;
  __return_storage_ptr__->bMemberFunction = 0;
  __return_storage_ptr__->bRequiresExecPin = 0;
  *(undefined8 *)&__return_storage_ptr__->FunctionSpecifiers = 0;
  *(undefined8 *)&(__return_storage_ptr__->FunctionSpecifiers).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->FunctionSpecifiers).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->FunctionSpecifiers).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->FunctionSpecifiers).field_0x2c = 0x80;
  uVar7 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->FunctionSpecifiers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->FunctionSpecifiers).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->FunctionSpecifiers).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->FunctionSpecifiers).field_0x48 = 0;
  __return_storage_ptr__->Name = FastMatrixToQuaternionName;
  FVar5 = FastPathLibraryName;
  __return_storage_ptr__->bRequiresContext = 0;
  __return_storage_ptr__->bMemberFunction = 0;
  __return_storage_ptr__->OwnerName = FVar5;
  FText::AsLocalizable_Advanced_LocText
            (&local_88,L"NiagaraFunctionLibrary",L"FastMatrixToQuaternionDesc",
             L"Fast path for Matrix4 to Quaternion");
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  ::FName::FName(&local_res8,L"Mat");
  local_78 = local_res8;
  if (FNiagaraTypeDefinition::Matrix4Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0) {
    pFVar11 = FNiagaraTypeRegistry::Get();
    uVar7 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar11,&FNiagaraTypeDefinition::Matrix4Def);
  }
  pFVar12 = (FName *)(__return_storage_ptr__->Inputs).AllocatorInstance.Data;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  local_60 = 0;
  local_70 = uVar7;
  if (((pFVar12 <= &local_78) &&
      (&local_78 < pFVar12 + (longlong)(__return_storage_ptr__->Inputs).ArrayMax * 4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FNiagaraFunctionSignature *)(*pcVar4)();
    return pFVar10;
  }
  iVar8 = (__return_storage_ptr__->Inputs).ArrayNum;
  if (iVar8 == (__return_storage_ptr__->Inputs).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(__return_storage_ptr__->Inputs).AllocatorInstance,
                       &(__return_storage_ptr__->Inputs).ArrayMax);
  }
  (__return_storage_ptr__->Inputs).ArrayNum = iVar8 + 1;
  pFVar12 = (FName *)((__return_storage_ptr__->Inputs).AllocatorInstance.Data +
                     (longlong)iVar8 * 0x20);
  *pFVar12 = local_78;
  pFVar12[1].ComparisonIndex.Value = local_70;
  pFVar12[2].ComparisonIndex = 0;
  pFVar12[2].Number = 0;
  pFVar12[2] = local_68;
  pFVar12[3].ComparisonIndex.Value = (uint)local_60;
  pFVar12[3].Number = local_60._4_4_;
  local_60 = 0;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  ::FName::FName(&local_res10,L"Quat");
  local_58 = local_res10;
  if (FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0) {
    pFVar11 = FNiagaraTypeRegistry::Get();
    iVar9 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar11,&FNiagaraTypeDefinition::QuatDef);
  }
  pFVar12 = (FName *)(__return_storage_ptr__->Outputs).AllocatorInstance.Data;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_50 = iVar9;
  if (((pFVar12 <= &local_58) &&
      (&local_58 <
       (FName *)((longlong)pFVar12 + (longlong)(__return_storage_ptr__->Outputs).ArrayMax * 0xc)))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FNiagaraFunctionSignature *)(*pcVar4)();
    return pFVar10;
  }
  iVar9 = (__return_storage_ptr__->Outputs).ArrayNum;
  if (iVar9 == (__return_storage_ptr__->Outputs).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(__return_storage_ptr__->Outputs).AllocatorInstance,
                       &(__return_storage_ptr__->Outputs).ArrayMax);
  }
  (__return_storage_ptr__->Outputs).ArrayNum = iVar9 + 1;
  pFVar3 = (__return_storage_ptr__->Outputs).AllocatorInstance.Data;
  *(FName *)(pFVar3 + (longlong)iVar9 * 0xc) = local_58;
  *(int *)(pFVar3 + (longlong)iVar9 * 0xc + 8) = local_50;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return __return_storage_ptr__;
}

