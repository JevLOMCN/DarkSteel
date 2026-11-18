// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// Exec @ 1492e4cb0

void __cdecl FVectorKernelFastDot4::Exec(FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  int iVar38;
  int iVar39;
  longlong lVar40;
  int local_e0 [2];
  float *local_d8;
  int local_c8 [2];
  float *local_c0;
  int local_b0 [2];
  float *local_a8;
  int local_98 [6];
  int local_80 [2];
  float *local_78;
  int local_68 [2];
  float *local_60;
  int local_50 [2];
  float *local_48;
  int local_38 [6];
  int local_20 [2];
  
  local_68[0] = 0;
  local_78 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  local_50[0] = 0;
  local_78 = local_78 + local_68[0] * param_1->PerInstanceFnInstanceIdx;
  local_60 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  local_38[0] = 0;
  local_60 = local_60 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
  local_48 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  local_20[0] = 0;
  local_48 = local_48 + local_38[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar34 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar38 = local_20[0] * param_1->PerInstanceFnInstanceIdx;
  local_c8[0] = 0;
  local_d8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c8);
  local_b0[0] = 0;
  local_d8 = local_d8 + local_c8[0] * param_1->PerInstanceFnInstanceIdx;
  local_c0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  local_98[0] = 0;
  local_c0 = local_c0 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_a8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_98);
  local_80[0] = 0;
  local_a8 = local_a8 + local_98[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar35 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  iVar39 = local_80[0] * param_1->PerInstanceFnInstanceIdx;
  local_e0[0] = 0;
  pfVar36 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e0);
  iVar9 = param_1->PerInstanceFnInstanceIdx;
  lVar40 = (longlong)param_1->NumLoops;
  if (0 < lVar40) {
    pfVar37 = local_60;
    do {
      pfVar1 = (float *)((longlong)pfVar37 + ((longlong)local_d8 - (longlong)local_60));
      fVar10 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar12 = pfVar1[3];
      pfVar2 = (float *)((longlong)pfVar37 + ((longlong)local_78 - (longlong)local_60));
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      pfVar3 = (float *)((longlong)pfVar37 + ((longlong)local_c0 - (longlong)local_60));
      fVar16 = pfVar3[1];
      fVar17 = pfVar3[2];
      fVar18 = pfVar3[3];
      fVar19 = pfVar37[1];
      fVar20 = pfVar37[2];
      fVar21 = pfVar37[3];
      pfVar4 = (float *)((longlong)pfVar37 + ((longlong)local_a8 - (longlong)local_60));
      fVar22 = pfVar4[1];
      fVar23 = pfVar4[2];
      fVar24 = pfVar4[3];
      pfVar5 = (float *)((longlong)pfVar37 + ((longlong)local_48 - (longlong)local_60));
      fVar25 = pfVar5[1];
      fVar26 = pfVar5[2];
      fVar27 = pfVar5[3];
      pfVar6 = (float *)((longlong)pfVar34 +
                        (longlong)pfVar37 + ((longlong)iVar38 * 4 - (longlong)local_60));
      fVar28 = pfVar6[1];
      fVar29 = pfVar6[2];
      fVar30 = pfVar6[3];
      pfVar7 = (float *)((longlong)pfVar35 +
                        (longlong)pfVar37 + ((longlong)iVar39 * 4 - (longlong)local_60));
      fVar31 = pfVar7[1];
      fVar32 = pfVar7[2];
      fVar33 = pfVar7[3];
      pfVar8 = (float *)((longlong)pfVar37 +
                        (longlong)pfVar36 +
                        ((longlong)(local_e0[0] * iVar9) * 4 - (longlong)local_60));
      *pfVar8 = *pfVar1 * *pfVar2 + *pfVar3 * *pfVar37 + *pfVar4 * *pfVar5 + *pfVar6 * *pfVar7;
      pfVar8[1] = fVar10 * fVar13 + fVar16 * fVar19 + fVar22 * fVar25 + fVar28 * fVar31;
      pfVar8[2] = fVar11 * fVar14 + fVar17 * fVar20 + fVar23 * fVar26 + fVar29 * fVar32;
      pfVar8[3] = fVar12 * fVar15 + fVar18 * fVar21 + fVar24 * fVar27 + fVar30 * fVar33;
      pfVar37 = pfVar37 + 4;
      lVar40 = lVar40 + -1;
    } while (lVar40 != 0);
  }
  return;
}

// GetFunctionSignature @ 1492eeb40

/* WARNING: Removing unreachable block (ram,0x0001492eed28) */
/* WARNING: Removing unreachable block (ram,0x0001492eee44) */

FNiagaraFunctionSignature * __cdecl
FVectorKernelFastDot4::GetFunctionSignature(FNiagaraFunctionSignature *__return_storage_ptr__)

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
  FName local_res18;
  FText local_a8;
  FName local_98;
  uint local_90;
  FName local_88;
  undefined8 local_80;
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
  __return_storage_ptr__->Name = FastPathDot4Name;
  FVar5 = FastPathLibraryName;
  __return_storage_ptr__->bRequiresContext = 0;
  __return_storage_ptr__->bMemberFunction = 0;
  __return_storage_ptr__->OwnerName = FVar5;
  FText::AsLocalizable_Advanced_LocText
            (&local_a8,L"NiagaraFunctionLibrary",L"FastPathDot4Desc",
             L"Fast path for Vector4 dot product.");
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  ::FName::FName(&local_res8,L"A");
  local_98 = local_res8;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0) {
    pFVar11 = FNiagaraTypeRegistry::Get();
    uVar7 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar11,&FNiagaraTypeDefinition::Vec4Def);
  }
  pFVar12 = (FName *)(__return_storage_ptr__->Inputs).AllocatorInstance.Data;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  local_80 = 0;
  local_90 = uVar7;
  if (((pFVar12 <= &local_98) &&
      (&local_98 < pFVar12 + (longlong)(__return_storage_ptr__->Inputs).ArrayMax * 4)) &&
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
  *pFVar12 = local_98;
  pFVar12[1].ComparisonIndex.Value = local_90;
  pFVar12[2].ComparisonIndex = 0;
  pFVar12[2].Number = 0;
  pFVar12[2] = local_88;
  pFVar12[3].ComparisonIndex.Value = (uint)local_80;
  pFVar12[3].Number = local_80._4_4_;
  local_80 = 0;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  ::FName::FName(&local_res10,L"B");
  local_78 = local_res10;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_70 = 0xffffffff;
  }
  else {
    pFVar11 = FNiagaraTypeRegistry::Get();
    local_70 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar11,&FNiagaraTypeDefinition::Vec4Def);
  }
  pFVar12 = (FName *)(__return_storage_ptr__->Inputs).AllocatorInstance.Data;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  local_60 = 0;
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
  ::FName::FName(&local_res18,L"Value");
  local_58 = local_res18;
  if (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0) {
    pFVar11 = FNiagaraTypeRegistry::Get();
    iVar9 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar11,&FNiagaraTypeDefinition::FloatDef);
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

