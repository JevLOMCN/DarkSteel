// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// Exec @ 1492e5600

void __cdecl FVectorKernelFastUniqueRandom::Exec(FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  ulonglong uVar13;
  float *local_res8;
  int local_40 [2];
  int local_38 [4];
  
  iVar9 = 0;
  local_38[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  iVar2 = local_38[0];
  lVar8 = (longlong)local_38[0];
  local_38[0] = 0;
  pfVar5 = pfVar5 + iVar2 * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  iVar2 = local_38[0];
  lVar11 = (longlong)local_38[0];
  local_38[0] = 0;
  pfVar6 = pfVar6 + iVar2 * param_1->PerInstanceFnInstanceIdx;
  local_res8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  lVar10 = (longlong)local_38[0];
  local_40[0] = 0;
  local_res8 = local_res8 + local_38[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  pfVar7 = pfVar7 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *local_res8;
      uVar13 = (ulonglong)(uint)fVar1;
      local_res8 = local_res8 + lVar10;
      fVar12 = *pfVar6;
      if ((int)fVar12 < 2) {
        fVar12 = 2.8026e-45;
        uVar3 = (uint)*pfVar5 & 0x80000001;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
        }
        uVar3 = uVar3 + 1;
LAB_1492e571d:
        fVar4 = (float)(uVar3 & 0xf);
        if (0 < (int)fVar1) {
          do {
            do {
              fVar4 = (float)(((uint)fVar4 >> 1 ^ (uint)fVar4) >> 2 & 1 | ((uint)fVar4 & 7) * 2);
            } while ((uint)fVar12 < (uint)fVar4);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
LAB_1492e58c1:
        fVar4 = (float)((int)fVar4 - 1);
      }
      else {
        uVar3 = (int)*pfVar5 % (int)fVar12 + 1;
        if ((int)fVar12 < 0x10) goto LAB_1492e571d;
        if (0xff < (int)fVar12) {
          if ((int)fVar12 < 0x1000) {
            fVar4 = (float)(uVar3 & 0xfff);
            if (0 < (int)fVar1) {
              do {
                do {
                  fVar4 = (float)(((((uint)fVar4 >> 1 ^ (uint)fVar4) >> 3 ^ (uint)fVar4) >> 2 ^
                                  (uint)fVar4) >> 5 & 1 | ((uint)fVar4 & 0x7ff) * 2);
                } while ((uint)fVar12 < (uint)fVar4);
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
          }
          else {
            if ((int)fVar12 < 0x10000) {
              fVar4 = (float)(uVar3 & 0xffff);
              if ((int)fVar1 < 1) goto LAB_1492e579b;
              do {
                do {
                  fVar4 = (float)(((((uint)fVar4 >> 2 ^ (uint)fVar4) >> 1 ^ (uint)fVar4) >> 2 ^
                                  (uint)fVar4) >> 10 & 1 | ((uint)fVar4 & 0x7fff) * 2);
                } while ((uint)fVar12 < (uint)fVar4);
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
              fVar4 = (float)((int)fVar4 + -1);
              goto LAB_1492e58c4;
            }
            if ((int)fVar12 < 0x100000) {
              fVar4 = (float)(uVar3 & 0xfffff);
              if (0 < (int)fVar1) {
                do {
                  do {
                    fVar4 = (float)(((uint)fVar4 >> 3 ^ (uint)fVar4) >> 0x10 & 1 |
                                   ((uint)fVar4 & 0x7ffff) * 2);
                  } while ((uint)fVar12 < (uint)fVar4);
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
            }
            else {
              fVar4 = (float)(uVar3 & 0xffffff);
              if (0 < (int)fVar1) {
                do {
                  do {
                    fVar4 = (float)(((((uint)fVar4 >> 1 ^ (uint)fVar4) >> 2 ^ (uint)fVar4) >> 1 ^
                                    (uint)fVar4) >> 0x13 & 1 | ((uint)fVar4 & 0x7fffff) * 2);
                  } while ((uint)fVar12 < (uint)fVar4);
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
            }
          }
          goto LAB_1492e58c1;
        }
        fVar4 = (float)(uVar3 & 0xff);
        if (0 < (int)fVar1) {
          do {
            do {
              fVar4 = (float)(((((uint)fVar4 >> 2 ^ (uint)fVar4) >> 1 ^ (uint)fVar4) >> 1 ^
                              (uint)fVar4) >> 3 & 1 | ((uint)fVar4 & 0x7f) * 2);
            } while ((uint)fVar12 < (uint)fVar4);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
LAB_1492e579b:
        fVar4 = (float)((int)fVar4 + -1);
      }
LAB_1492e58c4:
      iVar9 = iVar9 + 1;
      *pfVar7 = fVar4;
      pfVar7 = pfVar7 + local_40[0];
      pfVar5 = pfVar5 + lVar8;
      pfVar6 = pfVar6 + lVar11;
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// GetFunctionSignature @ 1492ef6b0

FNiagaraFunctionSignature * __cdecl
FVectorKernelFastUniqueRandom::GetFunctionSignature
          (FNiagaraFunctionSignature *__return_storage_ptr__)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FText *pFVar10;
  FNiagaraTypeRegistry *pFVar11;
  FNiagaraTypeDefinition *this;
  FNiagaraFunctionSignature *pFVar12;
  undefined4 local_res8 [2];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_108;
  int local_100;
  void *local_f8;
  undefined8 local_f0;
  FNiagaraVariable local_e8;
  FName local_c8;
  FNiagaraVariable local_c0;
  FNiagaraVariable local_a0;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  
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
  iVar8 = -1;
  *(undefined4 *)&(__return_storage_ptr__->FunctionSpecifiers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->FunctionSpecifiers).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->FunctionSpecifiers).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->FunctionSpecifiers).field_0x48 = 0;
  __return_storage_ptr__->Name = FastUniqueRandomName;
  FVar6 = FastPathLibraryName;
  __return_storage_ptr__->bRequiresContext = 0;
  __return_storage_ptr__->bMemberFunction = 0;
  __return_storage_ptr__->OwnerName = FVar6;
  FText::AsLocalizable_Advanced_LocText
            (&local_80,L"NiagaraFunctionLibrary",L"FastUniqueRandomDesc",
             L"Fast path for GetUniqueRandom function.");
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  pFVar10 = FText::FText(&local_70);
  ::FName::FName(&local_res10,L"Seed");
  local_c0._padding_._0_4_ = local_res10.ComparisonIndex.Value;
  local_c0._padding_._4_4_ = local_res10.Number;
  if (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0) {
    pFVar11 = FNiagaraTypeRegistry::Get();
    iVar8 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar11,&FNiagaraTypeDefinition::IntDef);
  }
  local_c0.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.VarData.ArrayNum = 0;
  local_c0.VarData.ArrayMax = 0;
  local_c0._padding_._0_4_ = iVar8;
  FNiagaraFunctionSignature::AddInput(__return_storage_ptr__,&local_c0,pFVar10);
  if (local_c0.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.VarData.AllocatorInstance.Data);
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_60,L"NiagaraFunctionLibrary",L"UniqueValuesTooltip",
                       L"The number of unique values to draw from. Example: a value of 20 will generate numbers between [0..19]."
                      );
  ::FName::FName(&local_res18,L"NumUniqueValues");
  local_a0._padding_._0_4_ = local_res18.ComparisonIndex.Value;
  local_a0._padding_._4_4_ = local_res18.Number;
  if (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_a0._padding_._0_4_ = -1;
  }
  else {
    pFVar11 = FNiagaraTypeRegistry::Get();
    local_a0._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar11,&FNiagaraTypeDefinition::IntDef);
  }
  local_a0.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.VarData.ArrayNum = 0;
  local_a0.VarData.ArrayMax = 0;
  FNiagaraFunctionSignature::AddInput(__return_storage_ptr__,&local_a0,pFVar10);
  if (local_a0.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.VarData.AllocatorInstance.Data);
  }
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  ::FName::FName(&local_res20,L"Iterations");
  local_e8._padding_._0_4_ = local_res20.ComparisonIndex.Value;
  local_e8._padding_._4_4_ = local_res20.Number;
  if (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_e8._padding_._0_4_ = -1;
  }
  else {
    pFVar11 = FNiagaraTypeRegistry::Get();
    local_e8._padding_._0_4_ =
         FNiagaraTypeRegistry::RegisterTypeInternal(pFVar11,&FNiagaraTypeDefinition::IntDef);
  }
  local_e8.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.VarData.ArrayNum = 0;
  local_e8.VarData.ArrayMax = 0;
  local_res8[0] = 3;
  pFVar11 = FNiagaraTypeRegistry::Get();
  this = FNiagaraTypeRegistry::GetRegisteredType(pFVar11,(int)local_e8._padding_);
  iVar8 = FNiagaraTypeDefinition::GetSize(this);
  if ((iVar8 != 4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("sizeof(T) == TypeDefHandle->GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                         ,0x5db,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FNiagaraFunctionSignature *)(*pcVar5)();
    return pFVar12;
  }
  FNiagaraVariable::AllocateData(&local_e8);
  memcpy(local_e8.VarData.AllocatorInstance.Data,local_res8,(longlong)local_e8.VarData.ArrayNum);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_50,L"NiagaraFunctionLibrary",L"IterationTooltip",
                       L"More iterations increase entropy at the cost of performance");
  FNiagaraFunctionSignature::AddInput(__return_storage_ptr__,&local_e8,pFVar10);
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  ::FName::FName(&local_c8,L"Value");
  local_108 = local_c8;
  if (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0) {
    pFVar11 = FNiagaraTypeRegistry::Get();
    iVar9 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar11,&FNiagaraTypeDefinition::IntDef);
  }
  pFVar3 = (FName *)(__return_storage_ptr__->Outputs).AllocatorInstance.Data;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_100 = iVar9;
  if (((pFVar3 <= &local_108) &&
      (&local_108 <
       (FName *)((longlong)pFVar3 + (longlong)(__return_storage_ptr__->Outputs).ArrayMax * 0xc))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FNiagaraFunctionSignature *)(*pcVar5)();
    return pFVar12;
  }
  iVar8 = (__return_storage_ptr__->Outputs).ArrayNum;
  if (iVar8 == (__return_storage_ptr__->Outputs).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(__return_storage_ptr__->Outputs).AllocatorInstance,
                       &(__return_storage_ptr__->Outputs).ArrayMax);
  }
  (__return_storage_ptr__->Outputs).ArrayNum = iVar8 + 1;
  pFVar4 = (__return_storage_ptr__->Outputs).AllocatorInstance.Data;
  *(FName *)(pFVar4 + (longlong)iVar8 * 0xc) = local_108;
  *(int *)(pFVar4 + (longlong)iVar8 * 0xc + 8) = local_100;
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.VarData.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

