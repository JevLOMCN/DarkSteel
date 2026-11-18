// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// Exec @ 1492e55f0

void __cdecl FVectorKernelFastTransformPosition::Exec(FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetFunctionSignature @ 1492ef280

/* WARNING: Removing unreachable block (ram,0x0001492ef468) */
/* WARNING: Removing unreachable block (ram,0x0001492ef584) */

FNiagaraFunctionSignature * __cdecl
FVectorKernelFastTransformPosition::GetFunctionSignature
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
  __return_storage_ptr__->Name = FastPathTransformPositionName;
  FVar5 = FastPathLibraryName;
  __return_storage_ptr__->bRequiresContext = 0;
  __return_storage_ptr__->bMemberFunction = 0;
  __return_storage_ptr__->OwnerName = FVar5;
  FText::AsLocalizable_Advanced_LocText
            (&local_a8,L"NiagaraFunctionLibrary",L"FastPathTransformPositionDesc",
             L"Fast path for Matrix4 transforming a Vector3 position");
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  ::FName::FName(&local_res8,L"Mat");
  local_98 = local_res8;
  if (FNiagaraTypeDefinition::Matrix4Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0) {
    pFVar11 = FNiagaraTypeRegistry::Get();
    uVar7 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar11,&FNiagaraTypeDefinition::Matrix4Def);
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
  ::FName::FName(&local_res10,L"Position");
  local_78 = local_res10;
  if (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_70 = 0xffffffff;
  }
  else {
    pFVar11 = FNiagaraTypeRegistry::Get();
    local_70 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar11,&FNiagaraTypeDefinition::Vec3Def);
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
  ::FName::FName(&local_res18,L"PositionTransformed");
  local_58 = local_res18;
  if (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0) {
    pFVar11 = FNiagaraTypeRegistry::Get();
    iVar9 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar11,&FNiagaraTypeDefinition::Vec3Def);
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

