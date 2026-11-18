// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 73

// FRigVMTemplate @ 14a0bfa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a0bfc90) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff78 : 0x00014a0bfc94 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FRigVMTemplate * __thiscall
FRigVMTemplate::FRigVMTemplate
          (FRigVMTemplate *this,FName *param_1,
          TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *param_2,
          FRigVMRegistryHandle *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FName FVar4;
  ulonglong uVar5;
  longlong lVar6;
  FRigVMTemplateArgumentInfo *this_00;
  FRigVMTemplateArgumentInfo *pFVar7;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [4];
  uint local_e4;
  FName *local_e0;
  FRigVMTemplateArgument local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  this->Index = -1;
  (this->Notation).ComparisonIndex = 0;
  (this->Notation).Number = 0;
  (this->Arguments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Arguments).ArrayNum = 0;
  (this->Arguments).ArrayMax = 0;
  (this->ExecuteArguments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecuteArguments).ArrayNum = 0;
  (this->ExecuteArguments).ArrayMax = 0;
  (this->Permutations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Permutations).ArrayNum = 0;
  (this->Permutations).ArrayMax = 0;
  *(undefined8 *)&this->TypesHashToPermutation = 0;
  *(undefined8 *)&(this->TypesHashToPermutation).field_0x8 = 0;
  *(undefined8 *)&(this->TypesHashToPermutation).field_0x20 = 0;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x28 = 0;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x2c = 0x80;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x34 = 0;
  *(undefined8 *)&(this->TypesHashToPermutation).field_0x40 = 0;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x48 = 0;
  *(undefined8 *)&this->TypesIndicesToPermutationIndices = 0;
  *(undefined8 *)&(this->TypesIndicesToPermutationIndices).field_0x8 = 0;
  *(undefined8 *)&(this->TypesIndicesToPermutationIndices).field_0x20 = 0;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x28 = 0;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x34 = 0;
  *(undefined8 *)&(this->TypesIndicesToPermutationIndices).field_0x40 = 0;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x48 = 0;
  (this->RemovedPermutationIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemovedPermutationIndices).ArrayNum = 0;
  (this->RemovedPermutationIndices).ArrayMax = 0;
  this->Hash = 0xffffffff;
  this->OwnerRegistry = param_3->Registry;
  *(undefined8 *)&(this->Delegates).NewArgumentTypeDelegate = 0;
  *(undefined8 *)&(this->Delegates).NewArgumentTypeDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Delegates).NewArgumentTypeDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->Delegates).GetDispatchFactoryDelegate = 0;
  *(undefined8 *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x10 = 0;
  (this->TypeIndicesToIgnore).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeIndicesToIgnore).ArrayNum = 0;
  (this->TypeIndicesToIgnore).ArrayMax = 0;
  (this->TypeNamesToIgnore).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeNamesToIgnore).ArrayNum = 0;
  (this->TypeNamesToIgnore).ArrayMax = 0;
  local_e4 = param_2->ArrayNum;
  uVar5 = (ulonglong)(int)local_e4;
  this_00 = (FRigVMTemplateArgumentInfo *)(param_2->AllocatorInstance).Data;
  pFVar7 = this_00 + uVar5;
  local_e0 = param_1;
  while( true ) {
    if (param_2->ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<FRigVMTemplateArgumentInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_e8);
    }
    if (this_00 == pFVar7) break;
    if (this_00->Direction != Invalid) {
      FRigVMTemplateArgumentInfo::GetArgument_NoLock(this_00,&local_d8,param_3);
      iVar3 = (this->Arguments).ArrayNum;
      local_d8.Index = iVar3;
      if (iVar3 == (this->Arguments).ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1080,&(this->Arguments).AllocatorInstance,&(this->Arguments).ArrayMax);
      }
      (this->Arguments).ArrayNum = iVar3 + 1;
      pFVar2 = (this->Arguments).AllocatorInstance.Data;
      lVar6 = (longlong)iVar3 * 0x80;
      *(int *)(pFVar2 + lVar6) = local_d8.Index;
      *(FName *)(pFVar2 + lVar6 + 4) = local_d8.Name;
      *(undefined8 *)(pFVar2 + lVar6 + 0x10) = 0;
      pFVar2[lVar6 + 0xc] = (FScriptContainerElement)local_d8.Direction;
      *(FScriptContainerElement **)(pFVar2 + lVar6 + 0x10) =
           local_d8.TypeIndices.AllocatorInstance.Data;
      local_d8.TypeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar2 + lVar6 + 0x18) = local_d8.TypeIndices.ArrayNum;
      *(int *)(pFVar2 + lVar6 + 0x1c) = local_d8.TypeIndices.ArrayMax;
      local_d8.TypeIndices.ArrayNum = 0;
      local_d8.TypeIndices.ArrayMax = 0;
      *(undefined8 *)(pFVar2 + lVar6 + 0x28) = 0;
      pFVar2[lVar6 + 0x20] = (FScriptContainerElement)local_d8.bUseCategories;
      *(FScriptContainerElement **)(pFVar2 + lVar6 + 0x28) =
           local_d8.TypeCategories.AllocatorInstance.Data;
      local_d8.TypeCategories.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar2 + lVar6 + 0x30) = local_d8.TypeCategories.ArrayNum;
      *(int *)(pFVar2 + lVar6 + 0x34) = local_d8.TypeCategories.ArrayMax;
      local_d8.TypeCategories.ArrayNum = 0;
      local_d8.TypeCategories.ArrayMax = 0;
      *(undefined8 *)(pFVar2 + lVar6 + 0x40) = local_d8.FilterType._0_8_;
      *(undefined8 *)(pFVar2 + lVar6 + 0x68) = local_d8.FilterType._40_8_;
      local_d8.FilterType._40_8_ = 0;
      pFVar1 = pFVar2 + lVar6 + 0x50;
      *(undefined4 *)pFVar1 = local_d8.FilterType._16_4_;
      *(undefined4 *)(pFVar1 + 4) = local_d8.FilterType._20_4_;
      *(undefined4 *)(pFVar1 + 8) = local_d8.FilterType._24_4_;
      *(undefined4 *)(pFVar1 + 0xc) = local_d8.FilterType._28_4_;
      *(undefined8 *)(pFVar2 + lVar6 + 0x60) = local_d8.FilterType._32_8_;
      if (*(longlong *)(pFVar2 + lVar6 + 0x40) != 0) {
        local_d8.FilterType._0_8_ = 0;
      }
      pFVar2[lVar6 + 0x74] = (FScriptContainerElement)0x0;
      pFVar2[lVar6 + 0x74] = (FScriptContainerElement)local_d8.CachedArrayType.bIsSet;
      if ((FScriptContainerElement)local_d8.CachedArrayType.bIsSet != (FScriptContainerElement)0x0)
      {
        *(EArrayType *)(pFVar2 + lVar6 + 0x70) = local_d8.CachedArrayType.TypedValue;
      }
      if (local_d8.FilterType._0_8_ != 0) {
        (**(code **)(CONCAT44(local_d8.FilterType._20_4_,local_d8.FilterType._16_4_) + 0x10))();
      }
      if (local_d8.TypeCategories.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.TypeCategories.AllocatorInstance.Data);
      }
      if (local_d8.TypeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.TypeIndices.AllocatorInstance.Data);
      }
    }
    uVar5 = (ulonglong)local_e4;
    this_00 = this_00 + 1;
  }
  FVar4 = FRigVMTemplateArgumentInfo::ComputeTemplateNotation
                    ((FName)&local_e0,
                     (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)*local_e0);
  iVar3 = (this->Permutations).ArrayNum;
  this->Notation = *(FName *)FVar4;
  UpdateTypesHashToPermutation(this,iVar3 + -1,param_3);
  return this;
}

// FRigVMTemplate @ 14a0bfd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMTemplate * __thiscall
FRigVMTemplate::FRigVMTemplate
          (FRigVMTemplate *this,UScriptStruct *param_1,FString *param_2,int param_3,
          FRigVMRegistryHandle *param_4)

{
  FRigVMRegistry_NoLock *pFVar1;
  code *pcVar2;
  FField *pFVar3;
  FProperty *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FRigVMTemplate *pFVar8;
  FRigVMTemplateArgument *pFVar9;
  ulonglong uVar10;
  longlong *plVar11;
  FRigVMTemplateArgument *pFVar12;
  longlong lVar13;
  int *piVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  undefined1 auStack_1c8 [32];
  FRigVMTemplateArgument *local_1a8;
  FRigVMTemplateArgument *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  undefined1 local_178;
  undefined1 local_177 [7];
  undefined1 local_170 [16];
  ForAnyElementType local_160;
  TFieldIterator<FProperty> local_158;
  TFieldIterator<FProperty> local_140;
  FName local_128;
  TArray<UStruct_*,TSizedDefaultAllocator<32>_> local_120;
  FScriptContainerElement *local_110;
  UScriptStruct *local_108;
  TOptional<FRigVMTemplateArgument::EArrayType> local_100;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this->Index = -1;
  local_170._8_8_ = (FRigVMTemplateArgument *)0x0;
  (this->Notation).ComparisonIndex = 0;
  (this->Notation).Number = 0;
  (this->Arguments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Arguments).ArrayNum = 0;
  (this->Arguments).ArrayMax = 0;
  (this->ExecuteArguments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecuteArguments).ArrayNum = 0;
  (this->ExecuteArguments).ArrayMax = 0;
  (this->Permutations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Permutations).ArrayNum = 0;
  (this->Permutations).ArrayMax = 0;
  *(undefined8 *)&this->TypesHashToPermutation = 0;
  *(undefined8 *)&(this->TypesHashToPermutation).field_0x8 = 0;
  *(undefined8 *)&(this->TypesHashToPermutation).field_0x20 = 0;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x28 = 0;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x2c = 0x80;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x34 = 0;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TypesHashToPermutation).field_0x40 = 0;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x48 = 0;
  *(undefined8 *)&this->TypesIndicesToPermutationIndices = 0;
  *(undefined8 *)&(this->TypesIndicesToPermutationIndices).field_0x8 = 0;
  *(undefined8 *)&(this->TypesIndicesToPermutationIndices).field_0x20 = 0;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x28 = 0;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x34 = 0;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TypesIndicesToPermutationIndices).field_0x40 = 0;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x48 = 0;
  (this->RemovedPermutationIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemovedPermutationIndices).ArrayNum = 0;
  (this->RemovedPermutationIndices).ArrayMax = 0;
  this->Hash = 0xffffffff;
  pFVar1 = param_4->Registry;
  *(undefined8 *)&(this->Delegates).NewArgumentTypeDelegate = 0;
  *(undefined8 *)&(this->Delegates).NewArgumentTypeDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Delegates).NewArgumentTypeDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->Delegates).GetDispatchFactoryDelegate = 0;
  *(undefined8 *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x10 = 0;
  (this->TypeIndicesToIgnore).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeIndicesToIgnore).ArrayNum = 0;
  (this->TypeIndicesToIgnore).ArrayMax = 0;
  (this->TypeNamesToIgnore).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeNamesToIgnore).ArrayNum = 0;
  (this->TypeNamesToIgnore).ArrayMax = 0;
  local_160.Data = (FScriptContainerElement *)0x0;
  this->OwnerRegistry = pFVar1;
  local_170._0_4_ = param_3;
  local_108 = param_1;
  local_100 = (TOptional<FRigVMTemplateArgument::EArrayType>)param_2;
  GetSuperStructs(&local_120,(UStruct *)param_1,true);
  iVar7 = local_120.ArrayNum;
  uVar10 = (ulonglong)local_120.ArrayNum;
  local_110 = local_120.AllocatorInstance.Data + uVar10 * 8;
  FVar17.Data = local_120.AllocatorInstance.Data;
  while( true ) {
    pFVar15 = local_110;
    if ((uint)uVar10 != iVar7) {
      local_178 = 0;
      `TCheckedPointerIterator<UStruct_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_178);
    }
    if (FVar17.Data == pFVar15) break;
    local_158.Struct = *(UStruct **)FVar17.Data;
    if (local_158.Struct == (UStruct *)0x0) {
      local_158.Field = (FField *)0x0;
    }
    else {
      local_158.Field = (local_158.Struct)->ChildProperties;
    }
    local_158.InterfaceIndex = -1;
    local_158.bIncludeSuper = false;
    local_158.bIncludeDeprecated = false;
    local_158.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&local_158);
    pFVar4 = (FProperty *)local_158.Field;
    while (pFVar4 != (FProperty *)0x0) {
      local_158.Field = (FField *)pFVar4;
      FRigVMTemplateArgument::FRigVMTemplateArgument
                ((FRigVMTemplateArgument *)local_c8,pFVar4,param_4);
      local_c8._0_4_ = (this->Arguments).ArrayNum;
      iVar6 = FRigVMTemplateArgument::
              IndexOfByPredicate<_FRigVMTemplateArgument::IsExecute_NoLock_::__l2::<lambda_1>_>
                        ((FRigVMTemplateArgument *)local_c8,(<lambda_1>)param_4,param_4);
      if ((iVar6 != -1) && (1 < (byte)(local_c8[0xc] - Hidden))) {
        pFVar9 = (FRigVMTemplateArgument *)(this->Arguments).AllocatorInstance.Data;
        if ((pFVar9 <= (FRigVMTemplateArgument *)local_c8) &&
           (lVar13 = (longlong)(this->Arguments).ArrayMax,
           (FRigVMTemplateArgument *)local_c8 < pFVar9 + lVar13)) {
          local_190 = (longlong)(this->Arguments).ArrayNum;
          local_188 = 0x80;
          local_1a8 = (FRigVMTemplateArgument *)local_c8;
          local_1a0 = pFVar9;
          local_198 = lVar13;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FRigVMTemplate *)(*pcVar2)();
            return pFVar8;
          }
        }
        iVar6 = (this->Arguments).ArrayNum;
        if (iVar6 == (this->Arguments).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1080,&(this->Arguments).AllocatorInstance,&(this->Arguments).ArrayMax
                            );
        }
        (this->Arguments).ArrayNum = iVar6 + 1;
        FRigVMTemplateArgument::FRigVMTemplateArgument
                  ((FRigVMTemplateArgument *)
                   ((this->Arguments).AllocatorInstance.Data + (longlong)iVar6 * 0x80),
                   (FRigVMTemplateArgument *)local_c8);
      }
      if (local_c8._64_8_ != 0) {
        plVar11 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if ((FScriptContainerElement *)local_c8._40_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_c8._40_8_);
      }
      if ((FScriptContainerElement *)local_c8._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_c8._16_8_);
      }
      local_158.Field = (FField *)pFVar4->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_158);
      pFVar4 = (FProperty *)local_158.Field;
    }
    uVar10 = (ulonglong)(uint)local_120.ArrayNum;
    FVar17.Data = FVar17.Data + 8;
    local_158.Field = (FField *)0x0;
  }
  local_140.Struct = (UStruct *)local_108;
  if (local_108 == (UScriptStruct *)0x0) {
    local_140.Field = (FField *)0x0;
  }
  else {
    local_140.Field = (FField *)local_108->_padding_;
  }
  local_140.InterfaceIndex = -1;
  local_140.bIncludeSuper = true;
  local_140.bIncludeDeprecated = true;
  local_140.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_140);
  pFVar3 = local_140.Field;
  do {
    local_140.Field = pFVar3;
    if (pFVar3 == (FField *)0x0) {
      if (0 < (int)local_160.Data) {
        RigVMStringUtils::MakeTemplateNotation
                  (&local_f0,(FString *)local_100,
                   (TArray<FString,TSizedDefaultAllocator<32>_> *)(local_170 + 8));
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_f0.Data.ArrayNum != 0) {
          FVar17.Data = local_f0.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_f8,(wchar_t *)FVar17.Data);
        this->Notation = local_f8;
        if (local_170._0_4_ != -1) {
          pFVar9 = (FRigVMTemplateArgument *)(this->Permutations).AllocatorInstance.Data;
          piVar14 = &(this->Permutations).ArrayMax;
          if ((pFVar9 <= (FRigVMTemplateArgument *)local_170) &&
             (local_170 < &pFVar9->Index + *piVar14)) {
            local_190 = (longlong)(this->Permutations).ArrayNum;
            local_188 = 4;
            local_1a8 = (FRigVMTemplateArgument *)local_170;
            local_1a0 = pFVar9;
            local_198 = (longlong)*piVar14;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              pFVar8 = (FRigVMTemplate *)(*pcVar2)();
              return pFVar8;
            }
          }
          iVar7 = (this->Permutations).ArrayNum;
          if (iVar7 == *piVar14) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&(this->Permutations).AllocatorInstance,piVar14);
          }
          (this->Permutations).ArrayNum = iVar7 + 1;
          *(undefined4 *)((this->Permutations).AllocatorInstance.Data + (longlong)iVar7 * 4) =
               local_170._0_4_;
          iVar7 = (this->Arguments).ArrayNum;
          pFVar15 = (this->Arguments).AllocatorInstance.Data;
          pFVar16 = pFVar15 + (longlong)iVar7 * 0x80;
          while( true ) {
            if ((this->Arguments).ArrayNum != iVar7) {
              local_177[0] = 0;
              `TCheckedPointerIterator<FRigVMTemplateArgument,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_177);
            }
            if (pFVar15 == pFVar16) break;
            if ((*(int *)(pFVar15 + 0x18) != 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Argument.TypeIndices.Num() == 1",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                                   ,0x3d6,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              pFVar8 = (FRigVMTemplate *)(*pcVar2)();
              return pFVar8;
            }
            pFVar15 = pFVar15 + 0x80;
          }
        }
        UpdateTypesHashToPermutation(this,(this->Permutations).ArrayNum + -1,param_4);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_170._8_8_,(int)local_160.Data);
      if ((FRigVMTemplateArgument *)local_170._8_8_ != (FRigVMTemplateArgument *)0x0) {
        FMemory::Free((void *)local_170._8_8_);
      }
      return this;
    }
    bVar5 = IsThisNotNull(pFVar3,"FField::GetFName");
    if (bVar5) {
      local_128 = pFVar3->NamePrivate;
    }
    else {
      local_128.ComparisonIndex.Value = 0;
      local_128.Number = 0;
    }
    pFVar9 = (FRigVMTemplateArgument *)(this->Arguments).AllocatorInstance.Data;
    pFVar12 = pFVar9 + (this->Arguments).ArrayNum;
    for (; pFVar9 != pFVar12; pFVar9 = pFVar9 + 1) {
      if (pFVar9->Name == local_128) {
        if (((pFVar9 != (FRigVMTemplateArgument *)0x0) &&
            (iVar7 = FRigVMTemplateArgument::
                     IndexOfByPredicate<_FRigVMTemplateArgument::IsExecute_NoLock_::__l2::<lambda_1>_>
                               (pFVar9,(<lambda_1>)param_4,param_4), iVar7 != -1)) &&
           (pFVar9->Direction != Hidden)) {
          pFVar9 = (FRigVMTemplateArgument *)
                   GetArgumentNotation(&local_e0,pFVar9->Name,pFVar9->Direction);
          if ((ulonglong)local_170._8_8_ <= pFVar9) {
            if (pFVar9 < (FRigVMTemplateArgument *)
                         ((int *)local_170._8_8_ + (longlong)local_160.Data._4_4_ * 4)) {
              local_190 = (longlong)(int)local_160.Data;
              local_188 = 0x10;
              local_1a0 = (FRigVMTemplateArgument *)local_170._8_8_;
              local_1a8 = pFVar9;
              local_198 = (longlong)local_160.Data._4_4_;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                pFVar8 = (FRigVMTemplate *)(*pcVar2)();
                return pFVar8;
              }
            }
          }
          lVar13 = (longlong)(int)local_160.Data;
          if ((int)local_160.Data == local_160.Data._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)(local_170 + 8),
                               (int *)((longlong)&local_160.Data + 4));
            piVar14 = (int *)local_170._8_8_ + (longlong)iVar7 * 4;
            local_160.Data._0_4_ = iVar7 + 1;
          }
          else {
            local_160.Data._0_4_ = (int)local_160.Data + 1;
            piVar14 = (int *)local_170._8_8_ + lVar13 * 4;
          }
          *(undefined8 *)piVar14 = 0;
          *(undefined8 *)piVar14 = *(undefined8 *)pFVar9;
          pFVar9->Index = 0;
          (pFVar9->Name).ComparisonIndex = 0;
          piVar14[2] = (pFVar9->Name).Number;
          piVar14[3] = *(undefined4 *)&pFVar9->Direction;
          *(undefined8 *)&(pFVar9->Name).Number = 0;
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
    }
    local_140.Field = pFVar3->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_140);
    pFVar3 = local_140.Field;
  } while( true );
}

// FRigVMTemplate @ 14a0c0440

FRigVMTemplate * __thiscall
FRigVMTemplate::FRigVMTemplate(FRigVMTemplate *this,FRigVMTemplate *param_1)

{
  TArray<FRigVMTemplateArgument,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 *puVar5;
  TMap<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TDelegate<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
  *this_01;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FRigVMTemplateArgument *pFVar9;
  FScriptContainerElement *pFVar10;
  
  pTVar1 = &this->Arguments;
  this->Index = param_1->Index;
  this->Notation = param_1->Notation;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Arguments).ArrayMax;
  iVar8 = (param_1->Arguments).ArrayNum;
  pFVar9 = (FRigVMTemplateArgument *)(param_1->Arguments).AllocatorInstance.Data;
  (this->Arguments).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,iVar8,0,&pTVar1->AllocatorInstance,iVar8,piVar2);
    ConstructItems<FRigVMTemplateArgument,FRigVMTemplateArgument,int>
              ((pTVar1->AllocatorInstance).Data,pFVar9,iVar8);
  }
  pTVar3 = &this->ExecuteArguments;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ExecuteArguments).ArrayMax;
  iVar8 = (param_1->ExecuteArguments).ArrayNum;
  pFVar10 = (param_1->ExecuteArguments).AllocatorInstance.Data;
  (this->ExecuteArguments).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar8,0,&pTVar3->AllocatorInstance,iVar8,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar10,(longlong)iVar8 * 0x18);
  }
  pTVar4 = &this->Permutations;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Permutations).ArrayMax;
  iVar8 = (param_1->Permutations).ArrayNum;
  pFVar10 = (param_1->Permutations).AllocatorInstance.Data;
  (this->Permutations).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar4->AllocatorInstance,iVar8,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar10,(longlong)iVar8 << 2);
  }
  *(undefined8 *)&(this->TypesHashToPermutation).field_0x0 = 0;
  *(undefined8 *)&(this->TypesHashToPermutation).field_0x8 = 0;
  *(undefined8 *)&(this->TypesHashToPermutation).field_0x20 = 0;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x28 = 0;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x2c = 0x80;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x34 = 0;
  *(undefined8 *)&(this->TypesHashToPermutation).field_0x40 = 0;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x48 = 0;
  TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
               *)&this->TypesHashToPermutation,
              (TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
               *)&param_1->TypesHashToPermutation);
  this_00 = &this->TypesIndicesToPermutationIndices;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->TypesIndicesToPermutationIndices).field_0x8 = 0;
  *(undefined8 *)&(this->TypesIndicesToPermutationIndices).field_0x20 = 0;
  puVar5 = &(this->TypesIndicesToPermutationIndices).field_0x48;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x28 = 0;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x34 = 0;
  *(undefined8 *)&(this->TypesIndicesToPermutationIndices).field_0x40 = 0;
  *(undefined4 *)puVar5 = 0;
  if (this_00 != &param_1->TypesIndicesToPermutationIndices) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->TypesIndicesToPermutationIndices).field_0x38
               ,(int *)puVar5,
               (ForElementType<FSetElementId> *)
               &(param_1->TypesIndicesToPermutationIndices).field_0x38,
               *(int *)&(param_1->TypesIndicesToPermutationIndices).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->TypesIndicesToPermutationIndices);
  }
  pTVar4 = &this->RemovedPermutationIndices;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RemovedPermutationIndices).ArrayMax;
  iVar8 = (param_1->RemovedPermutationIndices).ArrayNum;
  pFVar10 = (param_1->RemovedPermutationIndices).AllocatorInstance.Data;
  (this->RemovedPermutationIndices).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar4->AllocatorInstance,iVar8,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar10,(longlong)iVar8 << 2);
  }
  this->Hash = param_1->Hash;
  this->OwnerRegistry = param_1->OwnerRegistry;
  *(undefined8 *)&(this->Delegates).NewArgumentTypeDelegate = 0;
  *(undefined8 *)&(this->Delegates).NewArgumentTypeDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Delegates).NewArgumentTypeDelegate.field_0x10 = 0;
  TDelegate<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>___cdecl(FName_const_&,TRigVMTypeIndex,FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Delegates).NewArgumentTypeDelegate,
             &(param_1->Delegates).NewArgumentTypeDelegate);
  this_01 = &(this->Delegates).GetDispatchFactoryDelegate;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x10 = 0;
  TDelegate<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(this_01,&(param_1->Delegates).GetDispatchFactoryDelegate);
  pTVar6 = &this->TypeIndicesToIgnore;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TypeIndicesToIgnore).ArrayMax;
  iVar8 = (param_1->TypeIndicesToIgnore).ArrayNum;
  pFVar10 = (param_1->TypeIndicesToIgnore).AllocatorInstance.Data;
  (this->TypeIndicesToIgnore).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar8,0,&pTVar6->AllocatorInstance,iVar8,piVar2);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar10,(longlong)iVar8 * 0xc);
  }
  pTVar7 = &this->TypeNamesToIgnore;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TypeNamesToIgnore).ArrayMax;
  iVar8 = (param_1->TypeNamesToIgnore).ArrayNum;
  pFVar10 = (param_1->TypeNamesToIgnore).AllocatorInstance.Data;
  (this->TypeNamesToIgnore).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar8,0,&pTVar7->AllocatorInstance,iVar8,piVar2);
    memcpy((pTVar7->AllocatorInstance).Data,pFVar10,(longlong)iVar8 << 3);
  }
  return this;
}

// FRigVMTemplate @ 14a0c0790

FRigVMTemplate * __thiscall FRigVMTemplate::FRigVMTemplate(FRigVMTemplate *this)

{
  this->Index = -1;
  (this->Notation).ComparisonIndex = 0;
  (this->Notation).Number = 0;
  (this->Arguments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Arguments).ArrayNum = 0;
  (this->Arguments).ArrayMax = 0;
  (this->ExecuteArguments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecuteArguments).ArrayNum = 0;
  (this->ExecuteArguments).ArrayMax = 0;
  (this->Permutations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Permutations).ArrayNum = 0;
  (this->Permutations).ArrayMax = 0;
  *(undefined8 *)&this->TypesHashToPermutation = 0;
  *(undefined8 *)&(this->TypesHashToPermutation).field_0x8 = 0;
  *(undefined8 *)&(this->TypesHashToPermutation).field_0x20 = 0;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x28 = 0;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x2c = 0x80;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x34 = 0;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TypesHashToPermutation).field_0x40 = 0;
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x48 = 0;
  *(undefined8 *)&this->TypesIndicesToPermutationIndices = 0;
  *(undefined8 *)&(this->TypesIndicesToPermutationIndices).field_0x8 = 0;
  *(undefined8 *)&(this->TypesIndicesToPermutationIndices).field_0x20 = 0;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x28 = 0;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x34 = 0;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TypesIndicesToPermutationIndices).field_0x40 = 0;
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x48 = 0;
  (this->RemovedPermutationIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemovedPermutationIndices).ArrayNum = 0;
  (this->RemovedPermutationIndices).ArrayMax = 0;
  this->OwnerRegistry = (FRigVMRegistry_NoLock *)0x0;
  *(undefined8 *)&(this->Delegates).NewArgumentTypeDelegate = 0;
  *(undefined8 *)&(this->Delegates).NewArgumentTypeDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Delegates).NewArgumentTypeDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->Delegates).GetDispatchFactoryDelegate = 0;
  *(undefined8 *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x10 = 0;
  (this->TypeIndicesToIgnore).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeIndicesToIgnore).ArrayNum = 0;
  (this->TypeIndicesToIgnore).ArrayMax = 0;
  (this->TypeNamesToIgnore).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TypeNamesToIgnore).ArrayNum = 0;
  (this->TypeNamesToIgnore).ArrayMax = 0;
  this->Hash = 0xffffffff;
  return this;
}

// ~FRigVMTemplate @ 14a0c32f0

void __thiscall FRigVMTemplate::~FRigVMTemplate(FRigVMTemplate *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->TypeNamesToIgnore).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TypeIndicesToIgnore).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->Delegates).GetDispatchFactoryDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegates);
  pFVar1 = (this->RemovedPermutationIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TypesIndicesToPermutationIndices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TypesIndicesToPermutationIndices);
  *(undefined4 *)&(this->TypesHashToPermutation).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TypesHashToPermutation).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TypesHashToPermutation);
  pFVar1 = (this->Permutations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExecuteArguments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigVMTemplateArgument,int>
            ((FRigVMTemplateArgument *)(this->Arguments).AllocatorInstance.Data,
             (this->Arguments).ArrayNum);
  pFVar1 = (this->Arguments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 14a0c56e0

FRigVMTemplate * __thiscall FRigVMTemplate::operator=(FRigVMTemplate *this,FRigVMTemplate *param_1)

{
  TArray<FRigVMTemplateArgument,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRigVMTemplateArgument,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
  *pTVar7;
  TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
  *pTVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  TMap<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar11;
  TMap<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  void *pvVar17;
  
  pTVar1 = &param_1->Arguments;
  this->Index = param_1->Index;
  pTVar2 = &this->Arguments;
  this->Notation = param_1->Notation;
  if (pTVar2 != pTVar1) {
    DestructItems<FRigVMTemplateArgument,int>
              ((FRigVMTemplateArgument *)(pTVar2->AllocatorInstance).Data,(this->Arguments).ArrayNum
              );
    pFVar16 = (pTVar2->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Arguments).ArrayNum = (param_1->Arguments).ArrayNum;
    (this->Arguments).ArrayMax = (param_1->Arguments).ArrayMax;
    (param_1->Arguments).ArrayNum = 0;
    (param_1->Arguments).ArrayMax = 0;
  }
  pTVar3 = &param_1->ExecuteArguments;
  pTVar4 = &this->ExecuteArguments;
  if (pTVar4 != pTVar3) {
    pFVar16 = (pTVar4->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ExecuteArguments).ArrayNum = (param_1->ExecuteArguments).ArrayNum;
    (this->ExecuteArguments).ArrayMax = (param_1->ExecuteArguments).ArrayMax;
    (param_1->ExecuteArguments).ArrayNum = 0;
    (param_1->ExecuteArguments).ArrayMax = 0;
  }
  pTVar5 = &param_1->Permutations;
  pTVar6 = &this->Permutations;
  if (pTVar6 != pTVar5) {
    pFVar16 = (pTVar6->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Permutations).ArrayNum = (param_1->Permutations).ArrayNum;
    (this->Permutations).ArrayMax = (param_1->Permutations).ArrayMax;
    (param_1->Permutations).ArrayNum = 0;
    (param_1->Permutations).ArrayMax = 0;
  }
  pTVar7 = &param_1->TypesHashToPermutation;
  pTVar8 = &this->TypesHashToPermutation;
  if (pTVar8 != pTVar7) {
    if (*(void **)pTVar8 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar8);
    }
    puVar9 = &(param_1->TypesHashToPermutation).field_0x10;
    *(undefined8 *)pTVar8 = *(undefined8 *)pTVar7;
    puVar10 = &(this->TypesHashToPermutation).field_0x10;
    *(undefined8 *)pTVar7 = 0;
    *(undefined4 *)&(this->TypesHashToPermutation).field_0x8 =
         *(undefined4 *)&(param_1->TypesHashToPermutation).field_0x8;
    *(undefined4 *)&(this->TypesHashToPermutation).field_0xc =
         *(undefined4 *)&(param_1->TypesHashToPermutation).field_0xc;
    *(undefined8 *)&(param_1->TypesHashToPermutation).field_0x8 = 0;
    if (puVar10 != puVar9) {
      if (*(longlong *)&(param_1->TypesHashToPermutation).field_0x20 == 0) {
        memmove(puVar10,puVar9,0x10);
      }
      pvVar17 = *(void **)&(this->TypesHashToPermutation).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->TypesHashToPermutation).field_0x20 =
           *(undefined8 *)&(param_1->TypesHashToPermutation).field_0x20;
      *(undefined8 *)&(param_1->TypesHashToPermutation).field_0x20 = 0;
      *(undefined4 *)&(this->TypesHashToPermutation).field_0x28 =
           *(undefined4 *)&(param_1->TypesHashToPermutation).field_0x28;
      *(undefined4 *)&(this->TypesHashToPermutation).field_0x2c =
           *(undefined4 *)&(param_1->TypesHashToPermutation).field_0x2c;
      *(undefined8 *)&(param_1->TypesHashToPermutation).field_0x28 = 0;
    }
    *(undefined4 *)&(this->TypesHashToPermutation).field_0x30 =
         *(undefined4 *)&(param_1->TypesHashToPermutation).field_0x30;
    *(undefined4 *)&(this->TypesHashToPermutation).field_0x34 =
         *(undefined4 *)&(param_1->TypesHashToPermutation).field_0x34;
    *(undefined4 *)&(param_1->TypesHashToPermutation).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->TypesHashToPermutation).field_0x34 = 0;
    if (*(longlong *)&(param_1->TypesHashToPermutation).field_0x40 == 0) {
      *(undefined4 *)&(this->TypesHashToPermutation).field_0x38 =
           *(undefined4 *)&(param_1->TypesHashToPermutation).field_0x38;
    }
    pvVar17 = *(void **)&(this->TypesHashToPermutation).field_0x40;
    if (pvVar17 != (void *)0x0) {
      FMemory::Free(pvVar17);
    }
    *(undefined8 *)&(this->TypesHashToPermutation).field_0x40 =
         *(undefined8 *)&(param_1->TypesHashToPermutation).field_0x40;
    *(undefined8 *)&(param_1->TypesHashToPermutation).field_0x40 = 0;
    *(undefined4 *)&(this->TypesHashToPermutation).field_0x48 =
         *(undefined4 *)&(param_1->TypesHashToPermutation).field_0x48;
    *(undefined4 *)&(param_1->TypesHashToPermutation).field_0x48 = 0;
  }
  pTVar11 = &param_1->TypesIndicesToPermutationIndices;
  this_00 = &this->TypesIndicesToPermutationIndices;
  if (this_00 != pTVar11) {
    TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->TypesIndicesToPermutationIndices).field_0x8);
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    puVar9 = &(param_1->TypesIndicesToPermutationIndices).field_0x10;
    *(undefined8 *)this_00 = *(undefined8 *)pTVar11;
    puVar10 = &(this->TypesIndicesToPermutationIndices).field_0x10;
    *(undefined8 *)pTVar11 = 0;
    *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x8 =
         *(undefined4 *)&(param_1->TypesIndicesToPermutationIndices).field_0x8;
    *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0xc =
         *(undefined4 *)&(param_1->TypesIndicesToPermutationIndices).field_0xc;
    *(undefined8 *)&(param_1->TypesIndicesToPermutationIndices).field_0x8 = 0;
    if (puVar10 != puVar9) {
      if (*(longlong *)&(param_1->TypesIndicesToPermutationIndices).field_0x20 == 0) {
        memmove(puVar10,puVar9,0x10);
      }
      pvVar17 = *(void **)&(this->TypesIndicesToPermutationIndices).field_0x20;
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      *(undefined8 *)&(this->TypesIndicesToPermutationIndices).field_0x20 =
           *(undefined8 *)&(param_1->TypesIndicesToPermutationIndices).field_0x20;
      *(undefined8 *)&(param_1->TypesIndicesToPermutationIndices).field_0x20 = 0;
      *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x28 =
           *(undefined4 *)&(param_1->TypesIndicesToPermutationIndices).field_0x28;
      *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x2c =
           *(undefined4 *)&(param_1->TypesIndicesToPermutationIndices).field_0x2c;
      *(undefined8 *)&(param_1->TypesIndicesToPermutationIndices).field_0x28 = 0;
    }
    *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x30 =
         *(undefined4 *)&(param_1->TypesIndicesToPermutationIndices).field_0x30;
    *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x34 =
         *(undefined4 *)&(param_1->TypesIndicesToPermutationIndices).field_0x34;
    *(undefined4 *)&(param_1->TypesIndicesToPermutationIndices).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->TypesIndicesToPermutationIndices).field_0x34 = 0;
    if (*(longlong *)&(param_1->TypesIndicesToPermutationIndices).field_0x40 == 0) {
      *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x38 =
           *(undefined4 *)&(param_1->TypesIndicesToPermutationIndices).field_0x38;
    }
    pvVar17 = *(void **)&(this->TypesIndicesToPermutationIndices).field_0x40;
    if (pvVar17 != (void *)0x0) {
      FMemory::Free(pvVar17);
    }
    *(undefined8 *)&(this->TypesIndicesToPermutationIndices).field_0x40 =
         *(undefined8 *)&(param_1->TypesIndicesToPermutationIndices).field_0x40;
    *(undefined8 *)&(param_1->TypesIndicesToPermutationIndices).field_0x40 = 0;
    *(undefined4 *)&(this->TypesIndicesToPermutationIndices).field_0x48 =
         *(undefined4 *)&(param_1->TypesIndicesToPermutationIndices).field_0x48;
    *(undefined4 *)&(param_1->TypesIndicesToPermutationIndices).field_0x48 = 0;
  }
  pTVar5 = &param_1->RemovedPermutationIndices;
  pTVar6 = &this->RemovedPermutationIndices;
  if (pTVar6 != pTVar5) {
    pFVar16 = (pTVar6->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RemovedPermutationIndices).ArrayNum = (param_1->RemovedPermutationIndices).ArrayNum;
    (this->RemovedPermutationIndices).ArrayMax = (param_1->RemovedPermutationIndices).ArrayMax;
    (param_1->RemovedPermutationIndices).ArrayNum = 0;
    (param_1->RemovedPermutationIndices).ArrayMax = 0;
  }
  this->Hash = param_1->Hash;
  this->OwnerRegistry = param_1->OwnerRegistry;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegates,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Delegates);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->Delegates).GetDispatchFactoryDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(param_1->Delegates).GetDispatchFactoryDelegate);
  pTVar12 = &param_1->TypeIndicesToIgnore;
  pTVar13 = &this->TypeIndicesToIgnore;
  if (pTVar13 != pTVar12) {
    pFVar16 = (pTVar13->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar13->AllocatorInstance).Data = (pTVar12->AllocatorInstance).Data;
    (pTVar12->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TypeIndicesToIgnore).ArrayNum = (param_1->TypeIndicesToIgnore).ArrayNum;
    (this->TypeIndicesToIgnore).ArrayMax = (param_1->TypeIndicesToIgnore).ArrayMax;
    (param_1->TypeIndicesToIgnore).ArrayNum = 0;
    (param_1->TypeIndicesToIgnore).ArrayMax = 0;
  }
  pTVar14 = &param_1->TypeNamesToIgnore;
  pTVar15 = &this->TypeNamesToIgnore;
  if (pTVar15 != pTVar14) {
    pFVar16 = (pTVar15->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar15->AllocatorInstance).Data = (pTVar14->AllocatorInstance).Data;
    (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TypeNamesToIgnore).ArrayNum = (param_1->TypeNamesToIgnore).ArrayNum;
    (this->TypeNamesToIgnore).ArrayMax = (param_1->TypeNamesToIgnore).ArrayMax;
    (param_1->TypeNamesToIgnore).ArrayNum = 0;
    (param_1->TypeNamesToIgnore).ArrayMax = 0;
  }
  return this;
}

// operator= @ 14a0c5a80

FRigVMTemplate * __thiscall FRigVMTemplate::operator=(FRigVMTemplate *this,FRigVMTemplate *param_1)

{
  TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  this->Index = param_1->Index;
  this->Notation = param_1->Notation;
  TArray<FRigVMTemplateArgument,TSizedDefaultAllocator<32>_>::operator=
            (&this->Arguments,&param_1->Arguments);
  pTVar1 = &this->ExecuteArguments;
  if (pTVar1 != &param_1->ExecuteArguments) {
    iVar3 = (param_1->ExecuteArguments).ArrayNum;
    piVar2 = &(this->ExecuteArguments).ArrayMax;
    _Src = (param_1->ExecuteArguments).AllocatorInstance.Data;
    (this->ExecuteArguments).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x18);
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->Permutations,&param_1->Permutations);
  TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
               *)&this->TypesHashToPermutation,
              (TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
               *)&param_1->TypesHashToPermutation);
  if (&this->TypesIndicesToPermutationIndices != &param_1->TypesIndicesToPermutationIndices) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->TypesIndicesToPermutationIndices).field_0x38
               ,(int *)&(this->TypesIndicesToPermutationIndices).field_0x48,
               (ForElementType<FSetElementId> *)
               &(param_1->TypesIndicesToPermutationIndices).field_0x38,
               *(int *)&(param_1->TypesIndicesToPermutationIndices).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->TypesIndicesToPermutationIndices,
                (TSparseArray<TSparseSetElement<TTuple<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->TypesIndicesToPermutationIndices);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->RemovedPermutationIndices,&param_1->RemovedPermutationIndices);
  this->Hash = param_1->Hash;
  this->OwnerRegistry = param_1->OwnerRegistry;
  TDelegate<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>___cdecl(FName_const_&,TRigVMTypeIndex,FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Delegates).NewArgumentTypeDelegate,
             &(param_1->Delegates).NewArgumentTypeDelegate);
  TDelegate<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Delegates).GetDispatchFactoryDelegate,
             &(param_1->Delegates).GetDispatchFactoryDelegate);
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::operator=
            (&this->TypeIndicesToIgnore,&param_1->TypeIndicesToIgnore);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->TypeNamesToIgnore,&param_1->TypeNamesToIgnore);
  return this;
}

// operator() @ 14a0c8c50

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
`FRigVMTemplate::ResolveArgument_NoLock'::__l2::<lambda_1>::operator()
          (void *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  longlong local_b0;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &param_1->field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uStack_9c = 1;
  iStack_a0 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  local_88 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar3 = *(int *)&param_1->field_0x28;
  iStack_8c = iStack_a0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14a0c8d1d;
      uVar11 = puVar13[lVar9 + 1];
    }
    uStack_9c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iStack_8c = local_res18 + -1 + local_88;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_14a0c8d1d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar11 & 0xffffffe0;
  iStack_80 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = param_1;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)(*pcVar5)();
    return pTVar8;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14a0c8e20;
      uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14a0c8e20:
  while( true ) {
    pTVar8 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == uVar11) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == param_1))
    break;
    lVar9 = (longlong)TStack_70.CurrentBitIndex * 0x1c + *(longlong *)pTVar8;
    local_c8 = *(undefined8 *)(lVar9 + 8);
    local_c0 = *(undefined4 *)(lVar9 + 0x10);
    cVar7 = (**(code **)(*(longlong *)**(undefined8 **)this + 0x128))
                      ((longlong *)**(undefined8 **)this,&local_c8);
    if (cVar7 == '\0') {
      local_b8 = lVar9;
      local_b0 = lVar9 + 8;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,
                 (TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)&stack0x00000020,
                 (bool *)&local_b8);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// operator() @ 14a0c9910

void __thiscall
`FRigVMTemplate::ResolveArgument_NoLock'::__l12::<lambda_2>::operator()
          (void *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                   *param_2,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  FName FVar3;
  code *pcVar4;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  FName *pFVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  int local_res18;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  *local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  local_res20 = (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                 *)param_3;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
               *)param_3,
              (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
               *)param_1);
  iVar8 = *(int *)&param_1->field_0x28;
  puVar2 = &param_1->field_0x10;
  iVar15 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar8 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar15;
      iVar13 = iVar13 + 0x20;
      iVar15 = iVar15 + 1;
      iVar7 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a0c99bd;
      uVar11 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_14a0c99bd:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar15);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = local_res20;
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar6) {
    puVar10 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar10 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar15 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a0c9ac0;
      uVar11 = *(uint *)(puVar10 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14a0c9ac0:
  do {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) {
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                   *)param_1,
                  (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                   *)param_2);
      return;
    }
    pFVar12 = (FName *)((longlong)TStack_60.CurrentBitIndex * 0x1c + *(longlong *)param_1);
    FVar3 = *pFVar12;
    uVar6 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
      puVar10 = &param_2->field_0x38;
      if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
        puVar10 = *(undefined1 **)&param_2->field_0x40;
      }
      iVar8 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&param_2->field_0x48 - 1U & FVar3.Number + uVar6) * 4);
      if (iVar8 != -1) {
        do {
          if (*(FName *)((longlong)iVar8 * 0x1c + *(longlong *)param_2) == FVar3) {
            TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
            ::Remove(this_00,*pFVar12);
            break;
          }
          iVar8 = *(int *)((longlong)iVar8 * 0x1c + 0x14 + *(longlong *)param_2);
        } while (iVar8 != -1);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// ComputeNotationFromArguments @ 14a0d00f0

void __thiscall FRigVMTemplate::ComputeNotationFromArguments(FRigVMTemplate *this,FString *param_1)

{
  ERigVMPinDirection EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FName local_res18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  
  pFVar9 = (this->Arguments).AllocatorInstance.Data;
  iVar2 = (this->Arguments).ArrayNum;
  pFVar10 = (FName *)(pFVar9 + 4);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar11 = pFVar9 + (longlong)iVar2 * 0x80;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  while( true ) {
    if ((this->Arguments).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRigVMTemplateArgument,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar11) break;
    EVar1 = (ERigVMPinDirection)pFVar10[1].ComparisonIndex.Value;
    if (EVar1 != Invalid) {
      pFVar6 = (FScriptContainerElement *)GetArgumentNotation(&local_48,*pFVar10,EVar1);
      if (((local_68.AllocatorInstance.Data <= pFVar6) &&
          (pFVar6 < local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = local_68.ArrayNum;
      if (local_68.ArrayNum == local_68.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
      }
      local_68.ArrayNum = iVar5 + 1;
      pFVar7 = local_68.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)pFVar7 = *(undefined8 *)pFVar6;
      *(undefined8 *)pFVar6 = 0;
      *(int *)(pFVar7 + 8) = *(int *)(pFVar6 + 8);
      *(int *)(pFVar7 + 0xc) = *(int *)(pFVar6 + 0xc);
      *(undefined8 *)(pFVar6 + 8) = 0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    pFVar9 = pFVar9 + 0x80;
    pFVar10 = pFVar10 + 0x10;
  }
  RigVMStringUtils::MakeTemplateNotation(&local_58,param_1,&local_68);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar8.Data = local_58.Data.AllocatorInstance.Data;
  }
  ::FName::FName(local_res18,(wchar_t *)FVar8.Data);
  this->Notation = local_res18[0];
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// ComputeTypeHash @ 14a0d0500

uint __thiscall FRigVMTemplate::ComputeTypeHash(FRigVMTemplate *this,FRigVMRegistryHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1->Registry != this->OwnerRegistry) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0xb7c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = GetTypeHash_NoLock(this,param_1);
  return uVar3;
}

// ContainsPermutation @ 14a0d1290

bool __thiscall
FRigVMTemplate::ContainsPermutation
          (FRigVMTemplate *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<unsigned_int> aVar8;
  FRigVMRegistry_RWLock *pFVar9;
  FRigVMRegistryHandle local_28;
  undefined1 local_20;
  FRigVMRegistry_RWLock *local_18;
  undefined1 local_10;
  
  pFVar9 = FRigVMRegistry_RWLock::Get();
  local_20 = 1;
  aVar3 = pFVar9->WriteLockOwnerThread;
  local_10 = 0;
  local_28.Registry = (FRigVMRegistry_NoLock *)pFVar9;
  local_18 = pFVar9;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar8) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar9->Lock);
  }
  LOCK();
  paVar1 = &pFVar9->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    pFVar9->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
    UNLOCK();
  }
  bVar5 = ContainsPermutation_NoLock(this,param_1,&local_28);
  LOCK();
  paVar1 = &pFVar9->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    pFVar9->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else if ((int)aVar2 + -1 < 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538070>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x26a,"CurrentLockCount >= 0");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  aVar3 = pFVar9->WriteLockOwnerThread;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar8) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar9->Lock);
  }
  return bVar5;
}

// ContainsPermutation @ 14a0d13b0

/* WARNING: Removing unreachable block (ram,0x00014a0d1503) */
/* WARNING: Removing unreachable block (ram,0x00014a0d1509) */
/* WARNING: Removing unreachable block (ram,0x00014a0d150d) */
/* WARNING: Removing unreachable block (ram,0x00014a0d1539) */
/* WARNING: Removing unreachable block (ram,0x00014a0d153f) */

bool __thiscall FRigVMTemplate::ContainsPermutation(FRigVMTemplate *this,FRigVMFunction *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  atomic<unsigned_int> aVar7;
  int iVar8;
  FRigVMRegistry_RWLock *pFVar9;
  FRigVMRegistryHandle local_38;
  undefined1 local_30;
  FRigVMRegistry_RWLock *local_28;
  undefined1 local_20;
  
  pFVar9 = FRigVMRegistry_RWLock::Get();
  local_30 = 1;
  aVar3 = pFVar9->WriteLockOwnerThread;
  local_20 = 0;
  local_38.Registry = (FRigVMRegistry_NoLock *)pFVar9;
  local_28 = pFVar9;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar7) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar9->Lock);
  }
  LOCK();
  paVar1 = &pFVar9->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    pFVar9->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
    UNLOCK();
  }
  if ((pFVar9 != (FRigVMRegistry_RWLock *)this->OwnerRegistry) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0x73b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar8 = FindPermutation_NoLock(this,param_1,&local_38);
  LOCK();
  paVar1 = &pFVar9->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    pFVar9->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  if (((int)aVar2 + -1 < 0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4767296351463538070>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                         ,0x26a,"CurrentLockCount >= 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  aVar3 = pFVar9->WriteLockOwnerThread;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar7) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar9->Lock);
  }
  return iVar8 != -1;
}

// ContainsPermutation_NoLock @ 14a0d1580

bool __thiscall
FRigVMTemplate::ContainsPermutation_NoLock
          (FRigVMTemplate *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  
  if (param_2->Registry != this->OwnerRegistry) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x829,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar4 = GetTypesHashFromTypes(this,param_1,param_2);
  if (uVar4 == 0) {
    return false;
  }
  if (*(int *)&(this->TypesHashToPermutation).field_0x8 !=
      *(int *)&(this->TypesHashToPermutation).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TypesHashToPermutation).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TypesHashToPermutation).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->TypesHashToPermutation).field_0x48 - 1U & uVar4) * 4)
    ;
    if (iVar5 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->TypesHashToPermutation + (longlong)iVar5 * 0x10) == uVar4)
        goto LAB_14a0d162a;
        iVar5 = *(int *)(*(longlong *)&this->TypesHashToPermutation + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_14a0d162a:
  return iVar5 != -1;
}

// ContainsPermutation_NoLock @ 14a0d1660

bool __thiscall
FRigVMTemplate::ContainsPermutation_NoLock
          (FRigVMTemplate *this,FRigVMFunction *param_1,FRigVMRegistryHandle *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (param_2->Registry != this->OwnerRegistry) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x73b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar4 = FindPermutation_NoLock(this,param_1,param_2);
  return iVar4 != -1;
}

// FindArgument @ 14a0d8580

FRigVMTemplateArgument * __thiscall
FRigVMTemplate::FindArgument(FRigVMTemplate *this,FName *param_1)

{
  FRigVMTemplateArgument *pFVar1;
  FRigVMTemplateArgument *pFVar2;
  
  pFVar1 = (FRigVMTemplateArgument *)(this->Arguments).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->Arguments).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FRigVMTemplateArgument *)0x0;
    }
    if (pFVar1->Name == *param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FindExecuteArgument @ 14a0d8af0

FRigVMExecuteArgument * __thiscall
FRigVMTemplate::FindExecuteArgument
          (FRigVMTemplate *this,FName *param_1,FRigVMDispatchContext *param_2)

{
  FRigVMExecuteArgument *pFVar1;
  TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *pTVar2;
  FRigVMExecuteArgument *pFVar3;
  
  pTVar2 = GetExecuteArguments(this,param_2);
  pFVar3 = (FRigVMExecuteArgument *)(pTVar2->AllocatorInstance).Data;
  pFVar1 = pFVar3 + pTVar2->ArrayNum;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return (FRigVMExecuteArgument *)0x0;
    }
    if (pFVar3->Name == *param_1) break;
    pFVar3 = pFVar3 + 1;
  }
  return pFVar3;
}

// FindPermutation @ 14a0dd450

int __thiscall
FRigVMTemplate::FindPermutation
          (FRigVMTemplate *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  iVar7 = FindPermutation_NoLock(this,param_1,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return iVar7;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return iVar7;
}

// FindPermutation @ 14a0dd630

int __thiscall FRigVMTemplate::FindPermutation(FRigVMTemplate *this,FRigVMFunction *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  FRigVMRegistry_RWLock *pFVar8;
  FRigVMRegistryHandle local_28;
  undefined1 local_20;
  FRigVMRegistry_RWLock *local_18;
  undefined1 local_10;
  
  pFVar8 = FRigVMRegistry_RWLock::Get();
  local_20 = 1;
  aVar3 = pFVar8->WriteLockOwnerThread;
  local_10 = 0;
  local_28.Registry = (FRigVMRegistry_NoLock *)pFVar8;
  local_18 = pFVar8;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->Lock);
  }
  LOCK();
  paVar1 = &pFVar8->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    pFVar8->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
    UNLOCK();
  }
  iVar7 = FindPermutation_NoLock(this,param_1,&local_28);
  LOCK();
  paVar1 = &pFVar8->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    pFVar8->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else if ((int)aVar2 + -1 < 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538070>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x26a,"CurrentLockCount >= 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  aVar3 = pFVar8->WriteLockOwnerThread;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar8->Lock);
  }
  return iVar7;
}

// FindPermutation_NoLock @ 14a0dd750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FRigVMTemplate::FindPermutation_NoLock
          (FRigVMTemplate *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 auStackY_c8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (param_2->Registry != this->OwnerRegistry) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x755,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
               *)local_88,
              (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
               *)param_1);
  if (param_2->Registry != this->OwnerRegistry) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x767,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  Resolve_NoLock(this,(TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                       *)local_88,&local_98,false,param_2);
  if (local_98.ArrayNum == 1) {
    iVar3 = *(int *)local_98.AllocatorInstance.Data;
  }
  else {
    iVar3 = -1;
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  local_40 = 0;
  iVar4 = -1;
  if (iVar3 != -1) {
    iVar4 = iVar3;
  }
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar3 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return iVar4;
}

// FindPermutation_NoLock @ 14a0dd910

int __thiscall
FRigVMTemplate::FindPermutation_NoLock
          (FRigVMTemplate *this,FRigVMFunction *param_1,FRigVMRegistryHandle *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if (param_1 == (FRigVMFunction *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPermutation",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x747,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  if (param_1->TemplateIndex != this->Index) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPermutation->TemplateIndex == Index",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x748,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  if (param_2->Registry != this->OwnerRegistry) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x749,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pFVar1 = (this->Permutations).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->Permutations).ArrayNum * 4) {
    pFVar5 = pFVar1;
    do {
      if (*(int *)pFVar5 == param_1->Index) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 2);
        goto LAB_14a0dd9e2;
      }
      pFVar5 = pFVar5 + 4;
    } while (pFVar5 != pFVar1 + (longlong)(this->Permutations).ArrayNum * 4);
  }
  iVar4 = -1;
LAB_14a0dd9e2:
  if (iVar4 != param_1->PermutationIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Permutations.Find(InPermutation->Index) == InPermutation->PermutationIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x74a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return param_1->PermutationIndex;
}

// FullyResolve @ 14a0debe0

bool __thiscall
FRigVMTemplate::FullyResolve
          (FRigVMTemplate *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,int *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<unsigned_int> aVar8;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar8) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  bVar5 = FullyResolve_NoLock(this,param_1,param_2,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar8) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return bVar5;
}

// FullyResolve_NoLock @ 14a0dedc0

bool __thiscall
FRigVMTemplate::FullyResolve_NoLock
          (FRigVMTemplate *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,int *param_2,FRigVMRegistryHandle *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_3->Registry != this->OwnerRegistry) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x767,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  Resolve_NoLock(this,param_1,&local_18,false,param_3);
  if (local_18.ArrayNum == 1) {
    iVar4 = *(int *)local_18.AllocatorInstance.Data;
  }
  else {
    iVar4 = -1;
  }
  *param_2 = iVar4;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return iVar4 != -1;
}

// GetArgumentNotation @ 14a0dfd30

FString * __cdecl
FRigVMTemplate::GetArgumentNotation
          (FString *__return_storage_ptr__,FName param_1,ERigVMPinDirection param_2)

{
  FString *pFVar1;
  FString *pFVar2;
  int *piVar3;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  pFVar1 = ::FName::ToString(&local_res10,&local_28);
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FRigVMTemplate::GetDirectionPrefix'::__l2::
             _dynamic_atexit_destructor_for__EmptyPrefix__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FString::FString(&InPrefix,L"in ");
      atexit(`FRigVMTemplate::GetDirectionPrefix'::__l2::_dynamic_atexit_destructor_for__InPrefix__)
      ;
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (*piVar3 < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      ::FString::FString(&OutPrefix,L"out ");
      atexit(`FRigVMTemplate::GetDirectionPrefix'::__l2::_dynamic_atexit_destructor_for__OutPrefix__
            );
      _Init_thread_footer(&::_TSS2);
    }
  }
  pFVar2 = &IOPrefix;
  if (*piVar3 < ::_TSS3) {
    _Init_thread_header(&::_TSS3);
    if (::_TSS3 == -1) {
      ::FString::FString(&IOPrefix,L"io ");
      atexit(`FRigVMTemplate::GetDirectionPrefix'::__l2::_dynamic_atexit_destructor_for__IOPrefix__)
      ;
      _Init_thread_footer(&::_TSS3);
    }
  }
  if (param_2 != Input) {
    if (param_2 == Output) {
      pFVar2 = &OutPrefix;
      goto LAB_14a0dfde6;
    }
    if (param_2 == IO) goto LAB_14a0dfde6;
    if (param_2 != Visible) {
      pFVar2 = &EmptyPrefix;
      goto LAB_14a0dfde6;
    }
  }
  pFVar2 = &InPrefix;
LAB_14a0dfde6:
  ::FString::ConcatFF(__return_storage_ptr__,pFVar2,pFVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetArgumentTypesFromString @ 14a0e0b90

/* WARNING: Removing unreachable block (ram,0x00014a0e0c92) */
/* WARNING: Removing unreachable block (ram,0x00014a0e0c96) */
/* WARNING: Removing unreachable block (ram,0x00014a0e0cc2) */
/* WARNING: Removing unreachable block (ram,0x00014a0e0cc8) */
/* WARNING: Removing unreachable block (ram,0x00014a0e0cd9) */

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMTemplate::GetArgumentTypesFromString
          (FRigVMTemplate *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FString *param_1,FRigVMUserDefinedTypeResolver *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  FRigVMRegistry_RWLock *pFVar6;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar7;
  FRigVMRegistryHandle local_38;
  undefined1 local_30;
  FRigVMRegistry_RWLock *local_28;
  undefined1 local_20;
  
  pFVar6 = FRigVMRegistry_RWLock::Get();
  local_30 = 1;
  local_20 = 1;
  local_38.Registry = (FRigVMRegistry_NoLock *)pFVar6;
  local_28 = pFVar6;
  AcquireSRWLockExclusive((PSRWLOCK)&pFVar6->Lock);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  pFVar6->WriteLockOwnerThread = aVar5;
  UNLOCK();
  LOCK();
  paVar1 = &pFVar6->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    pFVar6->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
    UNLOCK();
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)(*pcVar3)();
      return pTVar7;
    }
  }
  GetArgumentTypesFromString_NoLock(this,__return_storage_ptr__,param_1,param_2,&local_38);
  LOCK();
  paVar1 = &pFVar6->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    pFVar6->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538060>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x274,"CurrentLockCount == 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)(*pcVar3)();
      return pTVar7;
    }
  }
  LOCK();
  pFVar6->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)&pFVar6->Lock);
  return __return_storage_ptr__;
}

// GetArgumentTypesFromString_NoLock @ 14a0e0d60

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMTemplate::GetArgumentTypesFromString_NoLock
          (FRigVMTemplate *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FString *param_1,FRigVMUserDefinedTypeResolver *param_2,
          FRigVMRegistryHandle *param_3)

{
  FName *pFVar1;
  FRigVMRegistry_NoLock *pFVar2;
  code *pcVar3;
  FRigVMRegistryHandle *pFVar4;
  bool bVar5;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar6;
  FString *pFVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  FName *pFVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  int iVar15;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FString local_f8;
  FString local_e8;
  undefined8 local_d8;
  int local_d0;
  FString local_c8;
  FString local_b8;
  FName local_a8;
  UObject *local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FScriptContainerElement *local_68;
  undefined8 *local_60;
  FString local_58;
  undefined1 local_48 [16];
  
  pFVar4 = param_3;
  if ((param_3->Registry != this->OwnerRegistry) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0x466,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)(*pcVar3)();
    return pTVar6;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_f8.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar14 = (longlong)local_f8.Data.ArrayNum;
  if (1 < local_f8.Data.ArrayNum) {
    pFVar13 = (param_1->Data).AllocatorInstance.Data;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_f8,local_f8.Data.ArrayNum,
               &local_f8.Data.ArrayMax);
    memcpy(local_f8.Data.AllocatorInstance.Data,pFVar13,lVar14 * 2);
    if (1 < local_f8.Data.ArrayNum) {
LAB_14a0e0e60:
      ::FString::FString(&local_98,L",");
      bVar5 = ::FString::Split(&local_f8,&local_98,&local_b8,&local_f8);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        iVar15 = local_f8.Data.ArrayNum + -1;
        if (local_f8.Data.ArrayNum == 0) {
          iVar15 = 0;
        }
        ::FString::AssignRange(&local_b8,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar15);
        ::FString::Reset(&local_f8,0);
      }
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      ::FString::FString(&local_88,L":");
      bVar5 = ::FString::Split(&local_b8,&local_88,&local_c8,&local_e8);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_c8.Data.ArrayNum != 0) {
          FVar11.Data = local_c8.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_res10,(wchar_t *)FVar11.Data);
        pFVar13 = (this->Arguments).AllocatorInstance.Data;
        pFVar9 = pFVar13 + (longlong)(this->Arguments).ArrayNum * 0x80;
        for (; pFVar13 != pFVar9; pFVar13 = pFVar13 + 0x80) {
          if (*(FName *)(pFVar13 + 4) == local_res10) {
            if (pFVar13 != (FScriptContainerElement *)0x0) {
              FVar11.Data = (FScriptContainerElement *)L"";
              if (local_e8.Data.ArrayNum != 0) {
                FVar11.Data = local_e8.Data.AllocatorInstance.Data;
              }
              ::FName::FName(&local_res8,(wchar_t *)FVar11.Data);
              pFVar10 = (FName *)(this->TypeNamesToIgnore).AllocatorInstance.Data;
              pFVar1 = pFVar10 + (this->TypeNamesToIgnore).ArrayNum;
              if (pFVar10 == pFVar1) goto LAB_14a0e0fb4;
              goto LAB_14a0e0fa2;
            }
            break;
          }
        }
      }
      goto LAB_14a0e10cb;
    }
LAB_14a0e1158:
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
  while (pFVar10 = pFVar10 + 1, pFVar10 != pFVar1) {
LAB_14a0e0fa2:
    if (*pFVar10 == local_res8) {
      if (*(int *)&__return_storage_ptr__->field_0x8 != *(int *)&__return_storage_ptr__->field_0x34)
      {
        TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                          *)__return_storage_ptr__);
        *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
        if (*(int *)&__return_storage_ptr__->field_0xc < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,0,(ForAnyElementType *)__return_storage_ptr__,0,
                     (int *)&__return_storage_ptr__->field_0xc);
        }
        *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
        *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      goto LAB_14a0e1158;
    }
  }
LAB_14a0e0fb4:
  pFVar2 = pFVar4->Registry;
  (**(code **)(pFVar2->_padding_ + 0x100))(pFVar2,&local_d8,&local_e8);
  if (local_d0 == -1) {
    bVar5 = RigVMTypeUtils::RequiresCPPTypeObject(&local_e8);
    if (bVar5) {
      local_a0 = RigVMTypeUtils::ObjectFromCPPType(&local_e8,true,param_2);
      local_a8 = local_res8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_a0);
      }
      ::FName::ToString(&local_a8,&local_78);
      pFVar7 = RigVMTypeUtils::PostProcessCPPType
                         (&local_58,&local_78,local_a0,(FRigVMUserDefinedTypeResolver *)0x0);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_res18,pwVar12);
      local_a8 = local_res18;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      pFVar2 = pFVar4->Registry;
      puVar8 = (undefined8 *)(**(code **)(pFVar2->_padding_ + 0xc0))(pFVar2,local_48,&local_a8,0);
      local_d8 = *puVar8;
      local_d0 = *(int *)(puVar8 + 1);
    }
    if (local_d0 == -1) goto LAB_14a0e10cb;
  }
  local_68 = pFVar13 + 4;
  local_60 = &local_d8;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_>
            ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,
             (TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)&param_3,(bool *)&local_68);
LAB_14a0e10cb:
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.ArrayNum < 2) goto LAB_14a0e1158;
  goto LAB_14a0e0e60;
}

// GetColorFromMetadata @ 14a0e2640

FLinearColor * __cdecl
FRigVMTemplate::GetColorFromMetadata(FLinearColor *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [3];
  
  local_88.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar4 = (longlong)local_88.Data.ArrayNum;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black;
  if (local_88.Data.ArrayNum == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_88.Data.ArrayNum,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,pFVar1,lVar4 * 2);
  }
  ::FString::TrimStartAndEndInline(&local_88);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&SplitString,L" ");
      atexit(`FRigVMTemplate::GetColorFromMetadata'::__l2::
             _dynamic_atexit_destructor_for__SplitString__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_48[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].Data.ArrayNum = 0;
  local_48[0].Data.ArrayMax = 0;
  bVar2 = ::FString::Split(&local_88,&SplitString,&local_58,local_48);
  if (bVar2) {
    ::FString::TrimEndInline(&local_58);
    ::FString::TrimStartInline(local_48);
    bVar2 = ::FString::Split(local_48,&SplitString,&local_68,&local_78);
    if (bVar2) {
      ::FString::TrimEndInline(&local_68);
      ::FString::TrimStartInline(&local_78);
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar3.Data = local_58.Data.AllocatorInstance.Data;
      }
      dVar5 = _wtof((wchar_t *)FVar3.Data);
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar3.Data = local_68.Data.AllocatorInstance.Data;
      }
      dVar6 = _wtof((wchar_t *)FVar3.Data);
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar3.Data = local_78.Data.AllocatorInstance.Data;
      }
      dVar7 = _wtof((wchar_t *)FVar3.Data);
      (__return_storage_ptr__->field0_0x0)._s_0.R = (float)dVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.G = (float)dVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.B = (float)dVar7;
      (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
    }
  }
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GetDirectionPrefix @ 14a0e3e40

FString * __cdecl FRigVMTemplate::GetDirectionPrefix(ERigVMPinDirection param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FRigVMTemplate::GetDirectionPrefix'::__l2::
             _dynamic_atexit_destructor_for__EmptyPrefix__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar1 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FString::FString(&InPrefix,L"in ");
      atexit(`FRigVMTemplate::GetDirectionPrefix'::__l2::_dynamic_atexit_destructor_for__InPrefix__)
      ;
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (*piVar1 < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      ::FString::FString(&OutPrefix,L"out ");
      atexit(`FRigVMTemplate::GetDirectionPrefix'::__l2::_dynamic_atexit_destructor_for__OutPrefix__
            );
      _Init_thread_footer(&::_TSS2);
    }
  }
  if (*piVar1 < ::_TSS3) {
    _Init_thread_header(&::_TSS3);
    if (::_TSS3 == -1) {
      ::FString::FString(&IOPrefix,L"io ");
      atexit(`FRigVMTemplate::GetDirectionPrefix'::__l2::_dynamic_atexit_destructor_for__IOPrefix__)
      ;
      _Init_thread_footer(&::_TSS3);
    }
  }
  if (param_1 != Input) {
    if (param_1 == Output) {
      return &OutPrefix;
    }
    if (param_1 == IO) {
      return &IOPrefix;
    }
    if (param_1 != Visible) {
      return &EmptyPrefix;
    }
  }
  return &InPrefix;
}

// GetDispatchFactory @ 14a0e4020

FRigVMDispatchFactory * __thiscall FRigVMTemplate::GetDispatchFactory(FRigVMTemplate *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  FRigVMDispatchFactory *pFVar7;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FRigVMDispatchFactory *)(*pcVar4)();
    return pFVar7;
  }
  pFVar7 = GetDispatchFactory_NoLock(this,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRigVMDispatchFactory *)(*pcVar4)();
        return pFVar7;
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return pFVar7;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRigVMDispatchFactory *)(*pcVar4)();
        return pFVar7;
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return pFVar7;
}

// GetDispatchFactory_NoLock @ 14a0e41f0

FRigVMDispatchFactory * __thiscall
FRigVMTemplate::GetDispatchFactory_NoLock(FRigVMTemplate *this,FRigVMRegistryHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FRigVMDispatchFactory *pFVar4;
  longlong *plVar5;
  TDelegate<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if (param_1->Registry != this->OwnerRegistry) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0xaa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRigVMDispatchFactory *)(*pcVar1)();
      return pFVar4;
    }
  }
  this_00 = &(this->Delegates).GetDispatchFactoryDelegate;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
  if ((*(int *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->Delegates).GetDispatchFactoryDelegate.field_0x8,
     plVar5 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar5 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_20);
      if (*(int *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x10 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)&(this->Delegates).GetDispatchFactoryDelegate.field_0x8;
      }
      pFVar4 = (FRigVMDispatchFactory *)(**(code **)(*plVar5 + 0x60))(plVar5,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      return pFVar4;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  return (FRigVMDispatchFactory *)0x0;
}

// GetExecuteArgument @ 14a0e4350

FRigVMExecuteArgument * __thiscall
FRigVMTemplate::GetExecuteArgument(FRigVMTemplate *this,int param_1,FRigVMDispatchContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *pTVar3;
  FRigVMExecuteArgument *pFVar4;
  
  pTVar3 = GetExecuteArguments(this,param_2);
  if ((-1 < param_1) && (param_1 < pTVar3->ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FRigVMExecuteArgument *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FRigVMExecuteArgument *)((pTVar3->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  }
  return (FRigVMExecuteArgument *)0x0;
}

// GetExecuteArguments @ 14a0e43e0

TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMTemplate::GetExecuteArguments(FRigVMTemplate *this,FRigVMDispatchContext *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *pTVar7;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar7;
  }
  pTVar7 = GetExecuteArguments_NoLock(this,param_1,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return pTVar7;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return pTVar7;
}

// GetExecuteArguments_NoLock @ 14a0e45c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMTemplate::GetExecuteArguments_NoLock
          (FRigVMTemplate *this,FRigVMDispatchContext *param_1,FRigVMRegistryHandle *param_2)

{
  int *piVar1;
  atomic<int> *paVar2;
  FName *pFVar3;
  atomic<int> aVar4;
  atomic<unsigned_int> aVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FProperty *pFVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  atomic<unsigned_int> aVar11;
  int iVar12;
  TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *pTVar13;
  FRigVMDispatchFactory *this_00;
  TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *pTVar14;
  FRigVMRegistry_RWLock *pFVar15;
  FRigVMFunction *pFVar16;
  TRigVMTypeIndex *pTVar17;
  ulonglong uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [4];
  uint local_154;
  TFieldIterator<FProperty> local_150;
  TArray<UStruct_*,TSizedDefaultAllocator<32>_> local_138;
  TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> local_128;
  FRigVMRegistryHandle local_118;
  undefined1 local_110;
  FRigVMRegistry_RWLock *local_108;
  undefined1 local_100;
  TRigVMTypeIndex local_f8;
  FReadAccessScope local_e8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((param_2->Registry != this->OwnerRegistry) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InRegistry.GetRegistry() == OwnerRegistry",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                          ,0x662,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
    return pTVar13;
  }
  if ((this->ExecuteArguments).ArrayNum == 0) {
    bVar10 = UsesDispatch(this);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->Delegates).GetDispatchFactoryDelegate,&local_e8);
      plVar19 = (longlong *)0x0;
      if (*(int *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x10 != 0) {
        plVar19 = *(longlong **)&(this->Delegates).GetDispatchFactoryDelegate.field_0x8;
      }
      this_00 = (FRigVMDispatchFactory *)(**(code **)(*plVar19 + 0x60))(plVar19,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e8);
      if ((this_00 == (FRigVMDispatchFactory *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Factory",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                              ,0x669,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar13;
      }
      pTVar14 = FRigVMDispatchFactory::GetExecuteArguments_NoLock
                          (this_00,&local_128,param_1,param_2);
      pTVar13 = &this->ExecuteArguments;
      if (pTVar13 != pTVar14) {
        pFVar6 = (pTVar13->AllocatorInstance).Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        (pTVar13->AllocatorInstance).Data = (pTVar14->AllocatorInstance).Data;
        (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->ExecuteArguments).ArrayNum = pTVar14->ArrayNum;
        (this->ExecuteArguments).ArrayMax = pTVar14->ArrayMax;
        pTVar14->ArrayNum = 0;
        pTVar14->ArrayMax = 0;
      }
      if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
      }
    }
    else {
      pFVar15 = FRigVMRegistry_RWLock::Get();
      local_110 = 1;
      aVar5 = pFVar15->WriteLockOwnerThread;
      local_100 = 0;
      local_118.Registry = (FRigVMRegistry_NoLock *)pFVar15;
      local_108 = pFVar15;
      aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar5 != aVar11) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar15->Lock);
      }
      LOCK();
      paVar2 = &pFVar15->LockCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + 1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x0) {
        LOCK();
        pFVar15->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
        UNLOCK();
      }
      pFVar16 = GetPrimaryPermutation_NoLock(this,&local_118);
      LOCK();
      paVar2 = &pFVar15->LockCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        LOCK();
        pFVar15->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
        UNLOCK();
      }
      else if (((int)aVar4 + -1 < 0) &&
              (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_4767296351463538070>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                                   ,0x26a,"CurrentLockCount >= 0"), bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar13;
      }
      aVar5 = pFVar15->WriteLockOwnerThread;
      aVar11 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar5 != aVar11) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar15->Lock);
      }
      if ((pFVar16 != (FRigVMFunction *)0x0) && (pFVar16->Struct != (UScriptStruct *)0x0)) {
        GetSuperStructs(&local_138,(UStruct *)pFVar16->Struct,true);
        uVar18 = (ulonglong)local_138.ArrayNum;
        local_154 = local_138.ArrayNum;
        local_128.AllocatorInstance.Data = local_138.AllocatorInstance.Data + uVar18 * 8;
        uVar20 = uVar18;
        FVar21.Data = local_138.AllocatorInstance.Data;
        while( true ) {
          FVar9.Data = local_128.AllocatorInstance.Data;
          if ((int)uVar18 != (int)uVar20) {
            `TCheckedPointerIterator<UStruct_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_158);
          }
          if (FVar21.Data == FVar9.Data) break;
          local_150.Struct = *(UStruct **)FVar21.Data;
          if (local_150.Struct == (UStruct *)0x0) {
            local_150.Field = (FField *)0x0;
          }
          else {
            local_150.Field = (local_150.Struct)->ChildProperties;
          }
          local_150.InterfaceIndex = -1;
          local_150.bIncludeSuper = false;
          local_150.bIncludeDeprecated = false;
          local_150.bIncludeInterface = false;
          TFieldIterator<FProperty>::IterateToNext(&local_150);
          pFVar8 = (FProperty *)local_150.Field;
          while (pFVar8 != (FProperty *)0x0) {
            local_150.Field = (FField *)pFVar8;
            FRigVMTemplateArgument::FRigVMTemplateArgument
                      ((FRigVMTemplateArgument *)local_c8,pFVar8,param_2);
            bVar10 = FRigVMTemplateArgument::IsExecute((FRigVMTemplateArgument *)local_c8);
            if (bVar10) {
              pTVar17 = FRigVMTemplateArgument::GetTypeIndex_NoLock
                                  ((FRigVMTemplateArgument *)local_c8,&local_f8,0,param_2);
              piVar1 = &(this->ExecuteArguments).ArrayMax;
              iVar12 = (this->ExecuteArguments).ArrayNum;
              if (iVar12 == *piVar1) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x418,&(this->ExecuteArguments).AllocatorInstance,piVar1);
              }
              (this->ExecuteArguments).ArrayNum = iVar12 + 1;
              pFVar3 = (FName *)((this->ExecuteArguments).AllocatorInstance.Data +
                                (longlong)iVar12 * 0x18);
              pFVar3->ComparisonIndex = (FNameEntryId)local_c8._4_4_;
              pFVar3->Number = local_c8._8_4_;
              *(ERigVMPinDirection *)&pFVar3[1].ComparisonIndex.Value = local_c8[0xc];
              *(FName *)&pFVar3[1].Number = pTVar17->Name;
              pFVar3[2].Number = pTVar17->Index;
            }
            if (local_c8._64_8_ != 0) {
              plVar19 = (longlong *)(local_c8 + 0x50);
              if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
                plVar19 = (longlong *)local_c8._104_8_;
              }
              (**(code **)(*plVar19 + 0x10))();
            }
            if ((FScriptContainerElement *)local_c8._40_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_c8._40_8_);
            }
            if ((FScriptContainerElement *)local_c8._16_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_c8._16_8_);
            }
            local_150.Field = (FField *)pFVar8->_padding_;
            TFieldIterator<FProperty>::IterateToNext(&local_150);
            pFVar8 = (FProperty *)local_150.Field;
          }
          uVar18 = (ulonglong)(uint)local_138.ArrayNum;
          FVar21.Data = FVar21.Data + 8;
          uVar20 = (ulonglong)local_154;
          local_150.Field = (FField *)0x0;
        }
        if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.AllocatorInstance.Data);
        }
      }
    }
  }
  return &this->ExecuteArguments;
}

// GetExecuteContextStruct @ 14a0e4af0

UScriptStruct * __thiscall FRigVMTemplate::GetExecuteContextStruct(FRigVMTemplate *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  UScriptStruct *pUVar7;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar7 = (UScriptStruct *)(*pcVar4)();
    return pUVar7;
  }
  pUVar7 = GetExecuteContextStruct_NoLock(this,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UScriptStruct *)(*pcVar4)();
        return pUVar7;
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return pUVar7;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (UScriptStruct *)(*pcVar4)();
        return pUVar7;
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return pUVar7;
}

// GetExecuteContextStruct_NoLock @ 14a0e4dc0

UScriptStruct * __thiscall
FRigVMTemplate::GetExecuteContextStruct_NoLock(FRigVMTemplate *this,FRigVMRegistryHandle *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  UScriptStruct *pUVar2;
  FRigVMDispatchFactory *pFVar3;
  FRigVMFunction *this_00;
  
  if (param_1->Registry != this->OwnerRegistry) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x68c,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pUVar2 = (UScriptStruct *)(*UNRECOVERED_JUMPTABLE)();
      return pUVar2;
    }
  }
  pFVar3 = GetDispatchFactory_NoLock(this,param_1);
  if (pFVar3 != (FRigVMDispatchFactory *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar3->_padding_ + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014a0e4e26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UScriptStruct *)(*UNRECOVERED_JUMPTABLE)(pFVar3,UNRECOVERED_JUMPTABLE);
    return pUVar2;
  }
  if ((this->Permutations).ArrayNum == 0) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Permutations.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x692,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      pUVar2 = (UScriptStruct *)(*UNRECOVERED_JUMPTABLE)();
      return pUVar2;
    }
  }
  this_00 = GetPrimaryPermutation_NoLock(this,param_1);
  pUVar2 = FRigVMFunction::GetExecuteContextStruct_NoLock(this_00,param_1);
  return pUVar2;
}

// GetFlattenedArgumentInfosForFunctions_NoLock @ 14a0e5060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a0e5a4d) */
/* WARNING: Removing unreachable block (ram,0x00014a0e57ce) */
/* WARNING: Removing unreachable block (ram,0x00014a0e5a64) */
/* WARNING: Removing unreachable block (ram,0x00014a0e57e5) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffee8 : 0x00014a0e5a68 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMTemplate::GetFlattenedArgumentInfosForFunctions_NoLock
          (FRigVMTemplate *this,
          TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FRigVMRegistryHandle *param_2)

{
  FName *pFVar1;
  int *piVar2;
  uint uVar3;
  FRigVMFunction *this_00;
  FName FVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  FName *pFVar11;
  ForElementType<FSetElementId> FVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  FName FVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  undefined1 auStackY_218 [32];
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined1 local_1c6 [2];
  uint local_1c4;
  ForAnyElementType local_1c0;
  uint local_1b8;
  int local_1b4;
  int local_1b0;
  FName local_1ac;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *local_1a0;
  FScriptContainerElement *local_198;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> local_190;
  ForAnyElementType local_180;
  uint local_178;
  int local_174;
  FScriptContainerElement *local_170;
  FRigVMTemplate *local_160;
  FName *local_158;
  TArray<FRigVMFunction_const_*,TSizedDefaultAllocator<32>_> *local_150;
  FScriptContainerElement *local_148;
  undefined4 local_140;
  undefined8 local_138;
  FScriptContainerElement local_130;
  code *local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FScriptContainerElement local_e0;
  code *local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  TSet<TTuple<FName,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1a0 = __return_storage_ptr__;
  local_198 = (FScriptContainerElement *)param_2;
  local_160 = this;
  local_150 = param_1;
  if ((param_2->Registry != this->OwnerRegistry) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0xaf9,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar9;
  }
  local_1c4 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)local_1c4;
  pFVar20 = (param_1->AllocatorInstance).Data;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_170 = pFVar20 + uVar10 * 8;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  while( true ) {
    pFVar13 = local_170;
    uVar16 = 0;
    if (param_1->ArrayNum != (int)uVar10) {
      local_1c8 = 0;
      `TCheckedPointerIterator<FRigVMFunction_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1c8);
    }
    if (pFVar20 == pFVar13) break;
    this_00 = *(FRigVMFunction **)pFVar20;
    if ((this_00->OwnerRegistry != this->OwnerRegistry) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Function->OwnerRegistry == this->OwnerRegistry",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                           ,0xaff,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    if ((this_00->TemplateIndex != this->Index) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Function->TemplateIndex == this->Index",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                           ,0xb00,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.ArrayNum = 0;
    local_190.ArrayMax = 0;
    FRigVMFunction::GetArgumentTypeIndices_NoLock(this_00,param_2,&local_190);
    if ((local_190.ArrayNum != (this_00->Arguments).ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndicesForFunction.Num() == Function->Arguments.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                           ,0xb04,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    uVar10 = uVar16;
    uVar21 = uVar16;
    if (0 < (this_00->Arguments).ArrayNum) {
      do {
        uVar15 = (uint)uVar16;
        uVar7 = 0;
        if ((int)uVar15 < (this_00->Arguments).ArrayNum) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        ::FName::FName(&local_1ac,
                       *(wchar_t **)((this_00->Arguments).AllocatorInstance.Data + uVar10));
        FVar17 = local_1ac;
        uVar7 = ::GetTypeHash(local_1ac.ComparisonIndex.Value);
        uVar7 = uVar7 + FVar17.Number;
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar12 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar12 = local_98.Hash.SecondaryData;
          }
          uVar3 = *(uint *)((longlong)FVar12 + (ulonglong)(local_98.HashSize - 1U & uVar7) * 4);
          while (uVar3 != 0xffffffff) {
            pFVar11 = (FName *)((longlong)(int)uVar3 * 0x20 + local_98.Elements._0_8_);
            if (*pFVar11 == local_1ac) {
              if (pFVar11 != (FName *)0x0) goto LAB_14a0e533a;
              break;
            }
            uVar3 = pFVar11[3].ComparisonIndex.Value;
          }
        }
        local_158 = &local_1ac;
        TSet<TTuple<FName,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FName_&&>_>
                  (&local_98,(uint)&local_1b0,(TKeyInitializer<FName_&&> *)(ulonglong)uVar7,
                   (bool *)&local_158);
        pFVar11 = (FName *)((longlong)local_1b0 * 0x20 + local_98.Elements._0_8_);
LAB_14a0e533a:
        pFVar1 = pFVar11 + 1;
        uVar7 = 0;
        if ((int)uVar15 < local_190.ArrayNum) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        FVar17 = (FName)((longlong)local_190.AllocatorInstance.Data + uVar21);
        if ((((ulonglong)*pFVar1 <= (ulonglong)FVar17) &&
            ((ulonglong)FVar17 <
             (ulonglong)((longlong)*pFVar1 + (longlong)(int)pFVar11[2].Number * 0xc))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        uVar7 = pFVar11[2].ComparisonIndex.Value;
        if (uVar7 == pFVar11[2].Number) {
          uVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,(ForAnyElementType *)pFVar1,(int *)&pFVar11[2].Number);
        }
        uVar16 = (ulonglong)(uVar15 + 1);
        pFVar11[2].ComparisonIndex.Value = uVar7 + 1;
        FVar4 = *pFVar1;
        *(undefined8 *)((longlong)FVar4 + (longlong)(int)uVar7 * 0xc) = *(undefined8 *)FVar17;
        *(undefined4 *)
         ((FScriptContainerElement *)((longlong)FVar4 + (longlong)(int)uVar7 * 0xc) + 8) =
             *(undefined4 *)((longlong)FVar17 + 8);
        param_1 = local_150;
        param_2 = (FRigVMRegistryHandle *)local_198;
        uVar10 = uVar10 + 0x38;
        this = local_160;
        uVar21 = uVar21 + 0xc;
      } while ((int)(uVar15 + 1) < (this_00->Arguments).ArrayNum);
    }
    if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.AllocatorInstance.Data);
    }
    uVar10 = (ulonglong)local_1c4;
    pFVar20 = pFVar20 + 8;
  }
  piVar2 = &local_1a0->ArrayMax;
  (local_1a0->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  local_1a0->ArrayNum = 0;
  local_1c4 = (this->Arguments).ArrayNum;
  uVar10 = (ulonglong)(int)local_1c4;
  pFVar20 = (this->Arguments).AllocatorInstance.Data;
  local_198 = pFVar20 + uVar10 * 0x80;
  pTVar9 = local_1a0;
  do {
    pFVar13 = local_198;
    if ((this->Arguments).ArrayNum != (int)uVar10) {
      local_1c7 = 0;
      `TCheckedPointerIterator<FRigVMTemplateArgument_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1c7);
    }
    if (pFVar20 == pFVar13) {
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return pTVar9;
    }
    lVar14 = *(longlong *)(pFVar20 + 4);
    uVar7 = ::GetTypeHash((FNameEntryId)(uint)lVar14);
    plVar18 = (longlong *)0x0;
    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
      FVar12 = (ForElementType<FSetElementId>)&local_98.Hash;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar12 = local_98.Hash.SecondaryData;
      }
      iVar8 = *(int *)((longlong)FVar12 +
                      (ulonglong)(local_98.HashSize - 1U & (int)((ulonglong)lVar14 >> 0x20) + uVar7)
                      * 4);
      while (plVar18 = (longlong *)0x0, iVar8 != -1) {
        plVar18 = (longlong *)((longlong)iVar8 * 0x20 + local_98.Elements._0_8_);
        if (*plVar18 == lVar14) {
          if (plVar18 != (longlong *)0x0) goto LAB_14a0e5550;
          break;
        }
        iVar8 = (int)plVar18[3];
      }
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
LAB_14a0e5550:
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b8 = *(uint *)(plVar18 + 2);
    lVar14 = (longlong)(int)local_1b8;
    _Src = (void *)plVar18[1];
    if (local_1b8 == 0) {
      local_1b4 = 0;
      uVar7 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,local_1b8,0,&local_1c0,local_1b8,&local_1b4);
      memcpy(local_1c0.Data,_Src,lVar14 * 0xc);
      uVar7 = local_1b8;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ArgumentTypeIndices.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                           ,0xb10,L""), uVar7 = local_1b8, bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    uVar15 = uVar7;
    if (1 < (int)uVar7) {
                    /* WARNING: Load size is inaccurate */
      local_170 = *local_1c0.Data;
      iVar8 = *(int *)(local_1c0.Data + 8);
      pFVar13 = local_1c0.Data + (longlong)(int)uVar7 * 0xc;
      FVar19.Data = local_1c0.Data;
      while( true ) {
        if (uVar15 != uVar7) {
          local_1c6[0] = 0;
          `TCheckedPointerIterator<TRigVMTypeIndex,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1c6);
          uVar15 = local_1b8;
        }
        if (FVar19.Data == pFVar13) {
          if (((int)uVar15 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar9;
          }
                    /* WARNING: Load size is inaccurate */
          local_170 = *local_1c0.Data;
          local_140 = *(undefined4 *)(local_1c0.Data + 8);
          local_180.Data = (FScriptContainerElement *)0x0;
          local_178 = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,1,0,&local_180,1,&local_174);
          FVar19.Data = local_180.Data;
          local_148 = local_170;
          *(FScriptContainerElement **)local_180.Data = local_170;
          *(undefined4 *)(local_180.Data + 8) = local_140;
          local_138 = *(undefined8 *)(pFVar20 + 4);
          lVar14 = (longlong)(int)local_178;
          local_130 = pFVar20[0xc];
          local_118 = &
                      ___7__TFunction_OwnedObject_P6A_AUFRigVMTemplateArgument__VFName__W4ERigVMPinDirection__AEBUFRigVMRegistryHandle___Z_0A__0A__Function_Private_Core_UE__6B_
          ;
          uStack_110 = FRigVMTemplateArgumentInfo::<lambda_24_>::<lambda_invoker_cdecl>;
          local_128 = UE::Core::Private::Function::
                      TFunctionRefCaller<FRigVMTemplateArgument_(__cdecl*)(FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&),FRigVMTemplateArgument,FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&>
                      ::Call;
          local_100 = 0;
          local_f8.Data = (FScriptContainerElement *)0x0;
          local_f0 = (ulonglong)local_178;
          if (local_178 != 0) {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,local_178,0,&local_f8,local_178,(int *)((longlong)&local_f0 + 4));
            memcpy(local_f8.Data,FVar19.Data,lVar14 * 0xc);
          }
          pTVar9 = local_1a0;
          pFVar13 = (local_1a0->AllocatorInstance).Data;
          if (((pFVar13 <= (FScriptContainerElement *)&local_138) &&
              ((FScriptContainerElement *)&local_138 < pFVar13 + (longlong)*piVar2 * 0x50)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar9;
          }
          iVar8 = pTVar9->ArrayNum;
          if (iVar8 == *piVar2) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x1050,&pTVar9->AllocatorInstance,piVar2);
          }
          pTVar9->ArrayNum = iVar8 + 1;
          pFVar13 = (pTVar9->AllocatorInstance).Data + (longlong)iVar8 * 0x50;
          *(undefined8 *)pFVar13 = local_138;
          pFVar13[8] = local_130;
          *(code **)(pFVar13 + 0x10) = local_128;
          *(undefined8 *)(pFVar13 + 0x38) = local_100;
          local_100 = 0;
          *(undefined4 *)(pFVar13 + 0x20) = (undefined4)local_118;
          *(undefined4 *)(pFVar13 + 0x24) = local_118._4_4_;
          *(undefined4 *)(pFVar13 + 0x28) = (undefined4)uStack_110;
          *(undefined4 *)(pFVar13 + 0x2c) = uStack_110._4_4_;
          *(undefined8 *)(pFVar13 + 0x30) = local_108;
          if (*(longlong *)(pFVar13 + 0x10) != 0) {
            local_128 = (code *)0x0;
          }
          *(undefined8 *)(pFVar13 + 0x40) = 0;
          *(FScriptContainerElement **)(pFVar13 + 0x40) = local_f8.Data;
          local_f8.Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)(pFVar13 + 0x48) = (undefined4)local_f0;
          *(undefined4 *)(pFVar13 + 0x4c) = local_f0._4_4_;
          local_f0 = 0;
          local_f0 = 0;
          local_f8.Data = (FScriptContainerElement *)0x0;
          local_100 = 0;
          if (local_128 != (code *)0x0) {
            (*(code *)local_118[2])();
          }
          if (local_180.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data);
          }
          goto LAB_14a0e57ef;
        }
        pTVar9 = local_1a0;
        if (iVar8 != *(int *)(FVar19.Data + 8)) break;
        FVar19.Data = FVar19.Data + 0xc;
      }
    }
    FVar19.Data = local_1c0.Data;
    local_e8 = *(undefined8 *)(pFVar20 + 4);
    local_e0 = pFVar20[0xc];
    local_c8 = &
               ___7__TFunction_OwnedObject_P6A_AUFRigVMTemplateArgument__VFName__W4ERigVMPinDirection__AEBUFRigVMRegistryHandle___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    uStack_c0 = FRigVMTemplateArgumentInfo::<lambda_24_>::<lambda_invoker_cdecl>;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<FRigVMTemplateArgument_(__cdecl*)(FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&),FRigVMTemplateArgument,FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&>
               ::Call;
    local_b0 = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = (ulonglong)uVar15;
    if (uVar15 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar15,0,&local_a8,uVar15,(int *)((longlong)&local_a0 + 4));
      memcpy(local_a8.Data,FVar19.Data,(longlong)(int)uVar15 * 0xc);
    }
    pFVar13 = (pTVar9->AllocatorInstance).Data;
    if (((pFVar13 <= (FScriptContainerElement *)&local_e8) &&
        ((FScriptContainerElement *)&local_e8 < pFVar13 + (longlong)*piVar2 * 0x50)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar8 = pTVar9->ArrayNum;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1050,&pTVar9->AllocatorInstance,piVar2);
    }
    pTVar9->ArrayNum = iVar8 + 1;
    pFVar13 = (pTVar9->AllocatorInstance).Data + (longlong)iVar8 * 0x50;
    *(undefined8 *)pFVar13 = local_e8;
    pFVar13[8] = local_e0;
    *(code **)(pFVar13 + 0x10) = local_d8;
    *(undefined8 *)(pFVar13 + 0x38) = local_b0;
    local_b0 = 0;
    *(undefined4 *)(pFVar13 + 0x20) = (undefined4)local_c8;
    *(undefined4 *)(pFVar13 + 0x24) = local_c8._4_4_;
    *(undefined4 *)(pFVar13 + 0x28) = (undefined4)uStack_c0;
    *(undefined4 *)(pFVar13 + 0x2c) = uStack_c0._4_4_;
    *(undefined8 *)(pFVar13 + 0x30) = local_b8;
    if (*(longlong *)(pFVar13 + 0x10) != 0) {
      local_d8 = (code *)0x0;
    }
    *(undefined8 *)(pFVar13 + 0x40) = 0;
    *(FScriptContainerElement **)(pFVar13 + 0x40) = local_a8.Data;
    local_a8.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar13 + 0x48) = (undefined4)local_a0;
    *(undefined4 *)(pFVar13 + 0x4c) = local_a0._4_4_;
    local_a0 = 0;
    local_a0 = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 0;
    if (local_d8 != (code *)0x0) {
      (*(code *)local_c8[2])();
    }
LAB_14a0e57ef:
    if (local_1c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data);
    }
    pFVar20 = pFVar20 + 0x80;
    uVar10 = (ulonglong)local_1c4;
    this = local_160;
  } while( true );
}

// GetFlattenedArgumentInfos_NoLock @ 14a0e5ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a0e5ff3) */
/* WARNING: Removing unreachable block (ram,0x00014a0e5e2b) */
/* WARNING: Removing unreachable block (ram,0x00014a0e6009) */
/* WARNING: Removing unreachable block (ram,0x00014a0e5e41) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff38 : 0x00014a0e5e45 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMTemplate::GetFlattenedArgumentInfos_NoLock
          (FRigVMTemplate *this,
          TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRigVMRegistryHandle *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  FRigVMTemplateArgument *pFVar3;
  bool bVar4;
  int iVar5;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  FName *pFVar8;
  longlong lVar9;
  FRigVMTemplateArgument *this_00;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [8];
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> local_140;
  uint local_130;
  ForAnyElementType local_128;
  uint local_120;
  int local_11c;
  undefined8 local_118;
  FRigVMTemplateArgument *local_110;
  undefined8 local_108;
  undefined4 local_100;
  TArray<int,TSizedDefaultAllocator<32>_> local_f8;
  FName local_e8;
  ERigVMPinDirection local_e0;
  FName local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  undefined8 local_a0;
  FName local_98;
  ERigVMPinDirection local_90;
  FName local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  FName local_68;
  FName local_60;
  FName local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->Registry != this->OwnerRegistry) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0xae2,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar6;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_130 = (this->Arguments).ArrayNum;
  uVar7 = (ulonglong)(int)local_130;
  this_00 = (FRigVMTemplateArgument *)(this->Arguments).AllocatorInstance.Data;
  local_110 = this_00 + uVar7;
  do {
    pFVar3 = local_110;
    if ((this->Arguments).ArrayNum != (int)uVar7) {
      local_148[0] = 0;
      `TCheckedPointerIterator<FRigVMTemplateArgument_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_148);
    }
    if (this_00 == pFVar3) {
      return __return_storage_ptr__;
    }
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    FRigVMTemplateArgument::GetAllTypes_NoLock(this_00,&local_140,param_1);
    if ((local_140.ArrayNum == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!TypeIndices.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                           ,0xae9,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    bVar4 = FRigVMTemplateArgument::IsSingleton_NoLock(this_00,&local_f8,param_1);
    FVar2.Data = local_140.AllocatorInstance.Data;
    if (bVar4) {
      if ((local_140.ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
      local_118 = *(undefined8 *)local_140.AllocatorInstance.Data;
      local_100 = *(undefined4 *)(local_140.AllocatorInstance.Data + 8);
      local_128.Data = (FScriptContainerElement *)0x0;
      local_120 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,1,0,&local_128,1,&local_11c);
      FVar2.Data = local_128.Data;
      local_108 = local_118;
      *(undefined8 *)local_128.Data = local_118;
      *(undefined4 *)(local_128.Data + 8) = local_100;
      local_e8 = this_00->Name;
      lVar9 = (longlong)(int)local_120;
      local_e0 = this_00->Direction;
      local_c8 = &
                 ___7__TFunction_OwnedObject_P6A_AUFRigVMTemplateArgument__VFName__W4ERigVMPinDirection__AEBUFRigVMRegistryHandle___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      uStack_c0 = FRigVMTemplateArgumentInfo::<lambda_24_>::<lambda_invoker_cdecl>;
      local_b0.ComparisonIndex.Value = 0;
      local_b0.Number = 0;
      local_a8.ComparisonIndex.Value = 0;
      local_a8.Number = 0;
      local_d8 = (FName)UE::Core::Private::Function::
                        TFunctionRefCaller<FRigVMTemplateArgument_(__cdecl*)(FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&),FRigVMTemplateArgument,FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&>
                        ::Call;
      local_a0 = (ulonglong)local_120;
      if (local_120 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,local_120,0,(ForAnyElementType *)&local_a8,local_120,
                   (int *)((longlong)&local_a0 + 4));
        memcpy((void *)local_a8,FVar2.Data,lVar9 * 0xc);
      }
      pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar8 <= &local_e8) &&
          (&local_e8 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1050,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x50);
      *pFVar8 = local_e8;
      *(ERigVMPinDirection *)&pFVar8[1].ComparisonIndex.Value = local_e0;
      pFVar8[2] = local_d8;
      pFVar8[7] = local_b0;
      local_b0.ComparisonIndex.Value = 0;
      local_b0.Number = 0;
      pFVar8[4].ComparisonIndex.Value = (uint)local_c8;
      pFVar8[4].Number = local_c8._4_4_;
      pFVar8[5].ComparisonIndex.Value = (uint)uStack_c0;
      pFVar8[5].Number = uStack_c0._4_4_;
      pFVar8[6] = local_b8;
      if (pFVar8[2] != (FName)0x0) {
        local_d8.ComparisonIndex.Value = 0;
        local_d8.Number = 0;
      }
      pFVar8[8].ComparisonIndex = 0;
      pFVar8[8].Number = 0;
      pFVar8[8] = local_a8;
      local_a8.ComparisonIndex.Value = 0;
      local_a8.Number = 0;
      pFVar8[9].ComparisonIndex.Value = (uint)local_a0;
      pFVar8[9].Number = local_a0._4_4_;
      local_a0 = 0;
      local_a0 = 0;
      local_a8.ComparisonIndex.Value = 0;
      local_a8.Number = 0;
      local_b0.ComparisonIndex.Value = 0;
      local_b0.Number = 0;
      if (local_d8 != (FName)0x0) {
        (*(code *)local_c8[2])();
      }
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
      }
    }
    else {
      lVar9 = (longlong)local_140.ArrayNum;
      local_98 = this_00->Name;
      local_90 = this_00->Direction;
      local_78 = &
                 ___7__TFunction_OwnedObject_P6A_AUFRigVMTemplateArgument__VFName__W4ERigVMPinDirection__AEBUFRigVMRegistryHandle___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      uStack_70 = FRigVMTemplateArgumentInfo::<lambda_24_>::<lambda_invoker_cdecl>;
      local_60.ComparisonIndex.Value = 0;
      local_60.Number = 0;
      local_58.ComparisonIndex.Value = 0;
      local_58.Number = 0;
      local_88 = (FName)UE::Core::Private::Function::
                        TFunctionRefCaller<FRigVMTemplateArgument_(__cdecl*)(FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&),FRigVMTemplateArgument,FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&>
                        ::Call;
      local_50 = local_140._8_8_ & 0xffffffff;
      if (local_140.ArrayNum != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,local_140.ArrayNum,0,(ForAnyElementType *)&local_58,local_140.ArrayNum,
                   (int *)((longlong)&local_50 + 4));
        memcpy((void *)local_58,FVar2.Data,lVar9 * 0xc);
      }
      pFVar8 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar8 <= &local_98) &&
          (&local_98 < pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1050,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x50);
      *pFVar8 = local_98;
      *(ERigVMPinDirection *)&pFVar8[1].ComparisonIndex.Value = local_90;
      pFVar8[2] = local_88;
      pFVar8[7] = local_60;
      local_60.ComparisonIndex.Value = 0;
      local_60.Number = 0;
      pFVar8[4].ComparisonIndex.Value = (uint)local_78;
      pFVar8[4].Number = local_78._4_4_;
      pFVar8[5].ComparisonIndex.Value = (uint)uStack_70;
      pFVar8[5].Number = uStack_70._4_4_;
      pFVar8[6] = local_68;
      if (pFVar8[2] != (FName)0x0) {
        local_88.ComparisonIndex.Value = 0;
        local_88.Number = 0;
      }
      pFVar8[8].ComparisonIndex = 0;
      pFVar8[8].Number = 0;
      pFVar8[8] = local_58;
      local_58.ComparisonIndex.Value = 0;
      local_58.Number = 0;
      pFVar8[9].ComparisonIndex.Value = (uint)local_50;
      pFVar8[9].Number = local_50._4_4_;
      local_50 = 0;
      local_50 = 0;
      local_58.ComparisonIndex.Value = 0;
      local_58.Number = 0;
      local_60.ComparisonIndex.Value = 0;
      local_60.Number = 0;
      if (local_88 != (FName)0x0) {
        (*(code *)local_78[2])();
      }
    }
    if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    this_00 = this_00 + 1;
    uVar7 = (ulonglong)local_130;
  } while( true );
}

// GetName @ 14a0e8300

FName __thiscall FRigVMTemplate::GetName(FRigVMTemplate *this)

{
  bool bVar1;
  FString *pFVar2;
  FName in_RDX;
  ForAnyElementType FVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar2 = ::FName::ToString(&this->Notation,&local_18);
  ::FString::FString(&local_28,L"::");
  bVar1 = ::FString::Split(pFVar2,&local_28,&local_38,(FString *)0x0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar1) {
    pFVar2 = ::FName::ToString(&this->Notation,&local_18);
    ::FString::FString(&local_28,L"(");
    bVar1 = ::FString::Split(pFVar2,&local_28,&local_38,(FString *)0x0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (!bVar1) {
      *(undefined8 *)in_RDX = 0;
      goto LAB_14a0e83fb;
    }
  }
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)in_RDX,(wchar_t *)FVar3.Data);
LAB_14a0e83fb:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return in_RDX;
}

// GetNodeName @ 14a0e8490

FName __thiscall FRigVMTemplate::GetNodeName(FRigVMTemplate *this)

{
  bool bVar1;
  FString *pFVar2;
  FName in_RDX;
  ForAnyElementType FVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar2 = ::FName::ToString(&this->Notation,&local_18);
  ::FString::FString(&local_28,L"::");
  bVar1 = ::FString::Split(pFVar2,&local_28,&local_38,(FString *)0x0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar1) {
    pFVar2 = ::FName::ToString(&this->Notation,&local_18);
    ::FString::FString(&local_28,L"(");
    bVar1 = ::FString::Split(pFVar2,&local_28,&local_38,(FString *)0x0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (!bVar1) {
      *(undefined8 *)in_RDX = 0;
      goto LAB_14a0e858b;
    }
  }
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)in_RDX,(wchar_t *)FVar3.Data);
LAB_14a0e858b:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return in_RDX;
}

// GetNotation @ 14a0e85c0

FName * __thiscall FRigVMTemplate::GetNotation(FRigVMTemplate *this)

{
  return &this->Notation;
}

// GetOrCreatePermutation @ 14a0e9720

FRigVMFunction * __thiscall FRigVMTemplate::GetOrCreatePermutation(FRigVMTemplate *this,int param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  FRigVMFunction *pFVar7;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  AcquireSRWLockExclusive((PSRWLOCK)&((FRigVMRegistry_RWLock *)local_28.Registry)->Lock);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  local_18->WriteLockOwnerThread = aVar5;
  UNLOCK();
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FRigVMFunction *)(*pcVar3)();
    return pFVar7;
  }
  pFVar7 = GetOrCreatePermutation_NoLock(this,param_1,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FRigVMFunction *)(*pcVar3)();
        return pFVar7;
      }
      aVar5 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar5 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return pFVar7;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FRigVMFunction *)(*pcVar3)();
        return pFVar7;
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return pFVar7;
}

// GetOrCreatePermutation_NoLock @ 14a0e98f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FRigVMFunction * __thiscall
FRigVMTemplate::GetOrCreatePermutation_NoLock
          (FRigVMTemplate *this,int param_1,FRigVMRegistryHandle *param_2)

{
  FScriptContainerElement *pFVar1;
  FRigVMRegistry_NoLock *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FRigVMFunction *pFVar8;
  FScriptContainerElement *pFVar9;
  FRigVMDispatchFactory *this_00;
  ulonglong uVar10;
  TRigVMTypeIndex *pTVar11;
  FName *pFVar12;
  FString *pFVar13;
  FString *pFVar14;
  FString *pFVar15;
  TTuple<FName,int> *pTVar16;
  longlong *plVar17;
  longlong lVar18;
  ForAnyElementType FVar19;
  FRigVMTemplateArgument *pFVar20;
  int *piVar21;
  FRigVMTemplateArgument *pFVar22;
  undefined1 auStackY_318 [32];
  int local_2c8;
  undefined1 local_2c4;
  undefined1 local_2c3 [3];
  ForAnyElementType local_2c0;
  undefined8 local_2b8;
  FString local_2b0;
  FRigVMDispatchFactory *local_2a0;
  uint local_298;
  uint local_294;
  int local_290;
  FRigVMFunctionArgument local_288;
  _func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
  *local_250;
  TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> local_248;
  FRigVMFunction local_238;
  FRigVMFunction local_1c8;
  undefined1 local_158 [8];
  TRawPtrProxy<FString> local_150;
  TRawPtrProxy<FString> local_148;
  FRigVMTemplateArgument *local_140;
  FName local_138;
  FName local_130;
  TRigVMTypeIndex local_128;
  FName local_118;
  int local_110;
  FName *local_108;
  TRigVMTypeIndex *local_100;
  FName *local_f8;
  int *local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  TRigVMTypeIndex local_c0;
  FReadAccessScope local_b0;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_290 = param_1;
  if ((param_2->Registry != this->OwnerRegistry) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0x6e2,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FRigVMFunction *)(*pcVar3)();
    return pFVar8;
  }
  pFVar8 = GetPermutation_NoLock(this,param_1,param_2);
  if (pFVar8 == (FRigVMFunction *)0x0) {
    local_294 = (uint)~param_1 >> 0x1f;
    uVar6 = 0;
    if (param_1 < (this->Permutations).ArrayNum) {
      uVar6 = local_294;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FRigVMFunction *)(*pcVar3)();
      return pFVar8;
    }
    if ((*(int *)((this->Permutations).AllocatorInstance.Data + (longlong)param_1 * 4) == -1) &&
       (bVar5 = UsesDispatch(this), bVar5)) {
      iVar7 = (this->Arguments).ArrayNum;
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      pFVar20 = (FRigVMTemplateArgument *)(this->Arguments).AllocatorInstance.Data;
      pFVar22 = pFVar20 + iVar7;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._48_4_ = 0xffffffff;
      while( true ) {
        if ((this->Arguments).ArrayNum != iVar7) {
          local_2c4 = 0;
          `TCheckedPointerIterator<FRigVMTemplateArgument,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_2c4);
        }
        if (pFVar20 == pFVar22) break;
        FRigVMTemplateArgument::GetTypeIndex_NoLock(pFVar20,&local_128,param_1,param_2);
        pFVar9 = (this->TypeIndicesToIgnore).AllocatorInstance.Data;
        pFVar1 = pFVar9 + (longlong)(this->TypeIndicesToIgnore).ArrayNum * 0xc;
        for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 0xc) {
          if (*(int *)(pFVar9 + 8) == local_128.Index) {
            pFVar8 = (FRigVMFunction *)0x0;
            goto LAB_14a0ea3bc;
          }
        }
        local_108 = &pFVar20->Name;
        local_100 = &local_128;
        TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_>
                  (&local_98,(TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)local_158,
                   (bool *)&local_108);
        pFVar20 = pFVar20 + 1;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->Delegates).GetDispatchFactoryDelegate,&local_b0);
      plVar17 = (longlong *)0x0;
      if (*(int *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x10 != 0) {
        plVar17 = *(longlong **)&(this->Delegates).GetDispatchFactoryDelegate.field_0x8;
      }
      this_00 = (FRigVMDispatchFactory *)(**(code **)(*plVar17 + 0x60))();
      local_2a0 = this_00;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_b0);
      if (this_00 != (FRigVMDispatchFactory *)0x0) {
        local_250 = FRigVMDispatchFactory::CreateDispatchFunction_NoLock
                              (this_00,(TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                                        *)&local_98,param_2);
        pFVar20 = (FRigVMTemplateArgument *)(this->Arguments).AllocatorInstance.Data;
        local_2c0.Data = (FScriptContainerElement *)0x0;
        local_298 = (this->Arguments).ArrayNum;
        uVar10 = (ulonglong)(int)local_298;
        local_2b8 = 0;
        local_140 = pFVar20 + uVar10;
        while( true ) {
          pFVar22 = local_140;
          if ((this->Arguments).ArrayNum != (int)uVar10) {
            local_2c3[0] = 0;
            `TCheckedPointerIterator<FRigVMTemplateArgument,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_2c3);
          }
          if (pFVar20 == pFVar22) break;
          pFVar2 = param_2->Registry;
          pcVar3 = *(code **)(pFVar2->_padding_ + 0xe8);
          pTVar11 = FRigVMTemplateArgument::GetTypeIndex_NoLock(pFVar20,&local_c0,param_1,param_2);
          local_118 = pTVar11->Name;
          local_110 = pTVar11->Index;
          pFVar12 = (FName *)(*pcVar3)(pFVar2,&local_118);
          pFVar13 = ::FName::ToString(pFVar12,&local_d0);
          pFVar14 = ::FName::ToString(&pFVar20->Name,&local_e0);
          local_288._padding_._0_1_ = 0;
          local_288._padding_ = 0;
          local_288._padding_ = 0;
          local_288.NameString.Object = (FString *)0x0;
          local_288.NameString.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_288.TypeString.Object = (FString *)0x0;
          local_288.TypeString.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          pFVar15 = ::operator_new(0x10);
          if (pFVar15 == (FString *)0x0) {
            local_150.Object = (FString *)0x0;
          }
          else {
            local_150.Object = ::FString::FString(pFVar15,pFVar14);
          }
          pFVar15 = (FString *)0x0;
          TSharedPtr<FString,1>::operator=<FString>(&local_288.NameString,&local_150);
          pFVar14 = ::operator_new(0x10);
          if (pFVar14 != (FString *)0x0) {
            pFVar15 = ::FString::FString(pFVar14,pFVar13);
          }
          local_148.Object = pFVar15;
          TSharedPtr<FString,1>::operator=<FString>(&local_288.TypeString,&local_148);
          if ((local_288.NameString.Object == (FString *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FRigVMFunction *)(*pcVar3)();
            return pFVar8;
          }
          if (((local_288.NameString.Object)->Data).ArrayNum == 0) {
            local_288._padding_ = 0x15060d16c;
          }
          else {
            local_288._padding_ =
                 (longlong)((local_288.NameString.Object)->Data).AllocatorInstance.Data;
          }
          if ((local_288.TypeString.Object == (FString *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FRigVMFunction *)(*pcVar3)();
            return pFVar8;
          }
          if (((local_288.TypeString.Object)->Data).ArrayNum == 0) {
            local_288._padding_ = 0x15060d16c;
          }
          else {
            local_288._padding_ =
                 (longlong)((local_288.TypeString.Object)->Data).AllocatorInstance.Data;
          }
          if (((local_2c0.Data <= &local_288) &&
              (&local_288 <
               (FRigVMFunctionArgument *)(local_2c0.Data + (longlong)local_2b8._4_4_ * 0x38))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar8 = (FRigVMFunction *)(*pcVar3)();
            return pFVar8;
          }
          iVar7 = (int)local_2b8;
          if ((int)local_2b8 == local_2b8._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x838,&local_2c0,(int *)((longlong)&local_2b8 + 4));
          }
          local_2b8 = CONCAT44(local_2b8._4_4_,iVar7 + 1);
          lVar18 = (longlong)iVar7 * 0x38;
          *(longlong *)&local_2c0.Data[lVar18].field_0x0 = local_288._padding_;
          *(longlong *)(local_2c0.Data + lVar18 + 8) = local_288._padding_;
          *(ulonglong *)(local_2c0.Data + lVar18 + 0x10) =
               CONCAT71(local_288._padding_._1_7_,(undefined1)local_288._padding_);
          *(FString **)(local_2c0.Data + lVar18 + 0x18) = local_288.NameString.Object;
          *(TReferenceControllerBase<1> **)(local_2c0.Data + lVar18 + 0x20) =
               local_288.NameString.SharedReferenceCount.ReferenceController;
          local_288.NameString.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_288.NameString.Object = (FString *)0x0;
          *(FString **)(local_2c0.Data + lVar18 + 0x28) = local_288.TypeString.Object;
          *(TReferenceControllerBase<1> **)(local_2c0.Data + lVar18 + 0x30) =
               local_288.TypeString.SharedReferenceCount.ReferenceController;
          local_288.TypeString.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_288.TypeString.Object = (FString *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_288.NameString.SharedReferenceCount.ReferenceController);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          pFVar20 = pFVar20 + 1;
          uVar10 = (ulonglong)local_298;
        }
        FRigVMDispatchFactory::GetPermutationNameImpl
                  (local_2a0,&local_2b0,
                   (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                    *)&local_98,param_2);
        pFVar2 = param_2->Registry;
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_2b0.Data.ArrayNum != 0) {
          FVar19.Data = local_2b0.Data.AllocatorInstance.Data;
        }
        local_2c8 = (pFVar2->Functions).NumElements;
        pFVar12 = ::FName::FName(&local_e8,(wchar_t *)FVar19.Data);
        pTVar16 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                          *)&pFVar2->PreviousFunctionNameToIndex,*pFVar12);
        piVar21 = (int *)&pTVar16->field_0x8;
        if (pTVar16 == (TTuple<FName,int> *)0x0) {
          piVar21 = (int *)0x0;
        }
        if (piVar21 != (int *)0x0) {
          local_2c8 = *piVar21;
        }
        iVar7 = local_2c8;
        uVar6 = 0;
        if (param_1 < (this->Permutations).ArrayNum) {
          uVar6 = local_294;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FRigVMFunction *)(*pcVar3)();
          return pFVar8;
        }
        *(int *)((this->Permutations).AllocatorInstance.Data + (longlong)param_1 * 4) = iVar7;
        UpdateTypesIndicesToPermutationIndices(this,param_1,param_2);
        iVar4 = local_2b0.Data.ArrayNum;
        FVar19.Data = local_2b0.Data.AllocatorInstance.Data;
        iVar7 = local_2c8;
        pFVar2 = param_2->Registry;
        if (local_2c8 == (pFVar2->Functions).NumElements) {
          local_238.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_238.Name.Data.ArrayNum = local_2b0.Data.ArrayNum;
          if (local_2b0.Data.ArrayNum == 0) {
            local_238.Name.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_2b0.Data.ArrayNum,0,(ForAnyElementType *)&local_238,
                       local_2b0.Data.ArrayNum,&local_238.Name.Data.ArrayMax);
            memcpy(local_238.Name.Data.AllocatorInstance.Data,FVar19.Data,(longlong)iVar4 * 2);
          }
          FVar19.Data = local_2c0.Data;
          local_238.Factory = local_2a0;
          local_238.Index = iVar7;
          iVar7 = (int)local_2b8;
          local_238.FunctionPtr = local_250;
          local_238.Struct = (UScriptStruct *)0x0;
          local_238.OwnerRegistry = (FRigVMRegistry_NoLock *)0x0;
          local_238.TemplateIndex = -1;
          local_238.PermutationIndex = -1;
          local_238.Arguments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_238.Arguments.ArrayNum = (int)local_2b8;
          if ((int)local_2b8 == 0) {
            local_238.Arguments.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,(int)local_2b8,0,&local_238.Arguments.AllocatorInstance,(int)local_2b8
                       ,&local_238.Arguments.ArrayMax);
            ConstructItems<FRigVMFunctionArgument,FRigVMFunctionArgument,int>
                      (local_238.Arguments.AllocatorInstance.Data,
                       (FRigVMFunctionArgument *)FVar19.Data,iVar7);
          }
          local_238.ArgumentTypeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_238.ArgumentTypeIndices.ArrayNum = 0;
          local_238.ArgumentTypeIndices.ArrayMax = 0;
          local_238.ArgumentNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_238.ArgumentNames.ArrayNum = 0;
          local_238.ArgumentNames.ArrayMax = 0;
          TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::AddElement
                    (&pFVar2->Functions,&local_238);
          if (local_238.ArgumentNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.ArgumentNames.AllocatorInstance.Data);
          }
          if (local_238.ArgumentTypeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             ) {
            FMemory::Free(local_238.ArgumentTypeIndices.AllocatorInstance.Data);
          }
          DestructItems<FRigVMFunctionArgument,int>
                    ((FRigVMFunctionArgument *)local_238.Arguments.AllocatorInstance.Data,
                     local_238.Arguments.ArrayNum);
          FVar19.Data = local_238.Name.Data.AllocatorInstance.Data;
          if ((FRigVMFunctionArgument *)local_238.Arguments.AllocatorInstance.Data !=
              (FRigVMFunctionArgument *)0x0) {
            FMemory::Free(local_238.Arguments.AllocatorInstance.Data);
            FVar19.Data = local_238.Name.Data.AllocatorInstance.Data;
          }
        }
        else {
          local_1c8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c8.Name.Data.ArrayNum = local_2b0.Data.ArrayNum;
          if (local_2b0.Data.ArrayNum == 0) {
            local_1c8.Name.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_2b0.Data.ArrayNum,0,(ForAnyElementType *)&local_1c8,
                       local_2b0.Data.ArrayNum,&local_1c8.Name.Data.ArrayMax);
            memcpy(local_1c8.Name.Data.AllocatorInstance.Data,FVar19.Data,(longlong)iVar4 * 2);
          }
          FVar19.Data = local_2c0.Data;
          iVar4 = (int)local_2b8;
          local_1c8.Factory = local_2a0;
          local_1c8.Index = iVar7;
          local_1c8.FunctionPtr = local_250;
          local_1c8.Struct = (UScriptStruct *)0x0;
          local_1c8.OwnerRegistry = (FRigVMRegistry_NoLock *)0x0;
          local_1c8.TemplateIndex = -1;
          local_1c8.PermutationIndex = -1;
          local_1c8.Arguments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c8.Arguments.ArrayNum = (int)local_2b8;
          if ((int)local_2b8 == 0) {
            local_1c8.Arguments.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,(int)local_2b8,0,&local_1c8.Arguments.AllocatorInstance,(int)local_2b8
                       ,&local_1c8.Arguments.ArrayMax);
            ConstructItems<FRigVMFunctionArgument,FRigVMFunctionArgument,int>
                      (local_1c8.Arguments.AllocatorInstance.Data,
                       (FRigVMFunctionArgument *)FVar19.Data,iVar4);
          }
          local_1c8.ArgumentTypeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c8.ArgumentTypeIndices.ArrayNum = 0;
          local_1c8.ArgumentTypeIndices.ArrayMax = 0;
          local_1c8.ArgumentNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c8.ArgumentNames.ArrayNum = 0;
          local_1c8.ArgumentNames.ArrayMax = 0;
          pFVar8 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                             (&param_2->Registry->Functions,local_2c8);
          FRigVMFunction::operator=(pFVar8,&local_1c8);
          if (local_1c8.ArgumentNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.ArgumentNames.AllocatorInstance.Data);
          }
          if (local_1c8.ArgumentTypeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             ) {
            FMemory::Free(local_1c8.ArgumentTypeIndices.AllocatorInstance.Data);
          }
          DestructItems<FRigVMFunctionArgument,int>
                    ((FRigVMFunctionArgument *)local_1c8.Arguments.AllocatorInstance.Data,
                     local_1c8.Arguments.ArrayNum);
          FVar19.Data = local_1c8.Name.Data.AllocatorInstance.Data;
          if ((FRigVMFunctionArgument *)local_1c8.Arguments.AllocatorInstance.Data !=
              (FRigVMFunctionArgument *)0x0) {
            FMemory::Free(local_1c8.Arguments.AllocatorInstance.Data);
            FVar19.Data = local_1c8.Name.Data.AllocatorInstance.Data;
          }
        }
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar19.Data);
        }
        iVar7 = this->Index;
        pFVar8 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                           (&param_2->Registry->Functions,local_2c8);
        pFVar8->TemplateIndex = iVar7;
        pFVar8 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                           (&param_2->Registry->Functions,local_2c8);
        pFVar8->PermutationIndex = local_290;
        pFVar2 = param_2->Registry;
        pFVar8 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                           (&pFVar2->Functions,local_2c8);
        pFVar8->OwnerRegistry = pFVar2;
        pFVar2 = param_2->Registry;
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_2b0.Data.ArrayNum != 0) {
          FVar19.Data = local_2b0.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_138,(wchar_t *)FVar19.Data);
        local_f8 = &local_138;
        local_f0 = &local_2c8;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_&&,int_const_&>_>
                  ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)&pFVar2->FunctionNameToIndex,
                   (TPairInitializer<FName_&&,int_const_&> *)(local_158 + 4),(bool *)&local_f8);
        FRigVMDispatchFactory::CreateDispatchPredicates_NoLock
                  (local_2a0,&local_248,
                   (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                    *)&local_98,param_2);
        pFVar2 = param_2->Registry;
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_2b0.Data.ArrayNum != 0) {
          FVar19.Data = local_2b0.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_130,(wchar_t *)FVar19.Data);
        TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
        ::Emplace<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>
                  ((TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
                    *)&pFVar2->StructNameToPredicates,&local_130,&local_248);
        pFVar8 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                           (&param_2->Registry->Functions,local_2c8);
        DestructItems<FRigVMFunction,int>
                  ((FRigVMFunction *)local_248.AllocatorInstance.Data,local_248.ArrayNum);
        if ((FRigVMFunction *)local_248.AllocatorInstance.Data != (FRigVMFunction *)0x0) {
          FMemory::Free(local_248.AllocatorInstance.Data);
        }
        if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
        }
        DestructItems<FRigVMFunctionArgument,int>
                  ((FRigVMFunctionArgument *)local_2c0.Data,(int)local_2b8);
        if ((FRigVMFunctionArgument *)local_2c0.Data != (FRigVMFunctionArgument *)0x0) {
          FMemory::Free(local_2c0.Data);
        }
LAB_14a0ea3bc:
        local_98.HashSize = 0;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
        return pFVar8;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5992154289080895223>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0x6f7,"Factory");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FRigVMFunction *)(*pcVar3)();
        return pFVar8;
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
    }
    pFVar8 = (FRigVMFunction *)0x0;
  }
  return pFVar8;
}

// GetPermutation @ 14a0ea3f0

FRigVMFunction * __thiscall FRigVMTemplate::GetPermutation(FRigVMTemplate *this,int param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  FRigVMRegistry_RWLock *pFVar7;
  FRigVMFunction *pFVar8;
  FRigVMRegistryHandle local_28;
  undefined1 local_20;
  FRigVMRegistry_RWLock *local_18;
  undefined1 local_10;
  
  pFVar7 = FRigVMRegistry_RWLock::Get();
  local_20 = 1;
  aVar3 = pFVar7->WriteLockOwnerThread;
  local_10 = 0;
  local_28.Registry = (FRigVMRegistry_NoLock *)pFVar7;
  local_18 = pFVar7;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar7->Lock);
  }
  LOCK();
  paVar1 = &pFVar7->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    pFVar7->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
    UNLOCK();
  }
  pFVar8 = GetPermutation_NoLock(this,param_1,&local_28);
  LOCK();
  paVar1 = &pFVar7->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    pFVar7->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else if ((int)aVar2 + -1 < 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538070>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x26a,"CurrentLockCount >= 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FRigVMFunction *)(*pcVar4)();
      return pFVar8;
    }
  }
  aVar3 = pFVar7->WriteLockOwnerThread;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar7->Lock);
  }
  return pFVar8;
}

// GetPermutation_NoLock @ 14a0ea510

FRigVMFunction * __thiscall
FRigVMTemplate::GetPermutation_NoLock
          (FRigVMTemplate *this,int param_1,FRigVMRegistryHandle *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRigVMFunction *pFVar5;
  longlong lVar6;
  TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *this_00;
  
  if ((param_2->Registry != this->OwnerRegistry) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0x6cb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRigVMFunction *)(*pcVar2)();
    return pFVar5;
  }
  uVar4 = 0;
  if (param_1 < (this->Permutations).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FRigVMFunction *)(*pcVar2)();
    return pFVar5;
  }
  iVar1 = *(int *)((this->Permutations).AllocatorInstance.Data + (longlong)param_1 * 4);
  lVar6 = (**(code **)(param_2->Registry->_padding_ + 0x168))();
  if ((iVar1 < 0) || (*(int *)(lVar6 + 0x10) <= iVar1)) {
    pFVar5 = (FRigVMFunction *)0x0;
  }
  else {
    this_00 = (TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *)
              (**(code **)(param_2->Registry->_padding_ + 0x168))();
    uVar4 = 0;
    if (param_1 < (this->Permutations).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRigVMFunction *)(*pcVar2)();
      return pFVar5;
    }
    pFVar5 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                       (this_00,*(int *)((this->Permutations).AllocatorInstance.Data +
                                        (longlong)param_1 * 4));
    if (((pFVar5 != (FRigVMFunction *)0x0) && (pFVar5->PermutationIndex != param_1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Function->PermutationIndex == InIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                           ,0x6d3,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRigVMFunction *)(*pcVar2)();
      return pFVar5;
    }
  }
  return pFVar5;
}

// GetPrimaryPermutation @ 14a0ea930

FRigVMFunction * __thiscall FRigVMTemplate::GetPrimaryPermutation(FRigVMTemplate *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  FRigVMRegistry_RWLock *pFVar7;
  FRigVMFunction *pFVar8;
  FRigVMRegistryHandle local_28;
  undefined1 local_20;
  FRigVMRegistry_RWLock *local_18;
  undefined1 local_10;
  
  pFVar7 = FRigVMRegistry_RWLock::Get();
  local_20 = 1;
  aVar3 = pFVar7->WriteLockOwnerThread;
  local_10 = 0;
  local_28.Registry = (FRigVMRegistry_NoLock *)pFVar7;
  local_18 = pFVar7;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar7->Lock);
  }
  LOCK();
  paVar1 = &pFVar7->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    pFVar7->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
    UNLOCK();
  }
  pFVar8 = GetPrimaryPermutation_NoLock(this,&local_28);
  LOCK();
  paVar1 = &pFVar7->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    pFVar7->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else if ((int)aVar2 + -1 < 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538070>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x26a,"CurrentLockCount >= 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FRigVMFunction *)(*pcVar4)();
      return pFVar8;
    }
  }
  aVar3 = pFVar7->WriteLockOwnerThread;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar7->Lock);
  }
  return pFVar8;
}

// GetPrimaryPermutation_NoLock @ 14a0eaa40

FRigVMFunction * __thiscall
FRigVMTemplate::GetPrimaryPermutation_NoLock(FRigVMTemplate *this,FRigVMRegistryHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRigVMFunction *pFVar3;
  
  if (param_1->Registry != this->OwnerRegistry) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x6bb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRigVMFunction *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (0 < (this->Permutations).ArrayNum) {
    pFVar3 = GetPermutation_NoLock(this,0,param_1);
    return pFVar3;
  }
  return (FRigVMFunction *)0x0;
}

// GetStringFromArgumentTypes @ 14a0ebc80

FString * __cdecl
FRigVMTemplate::GetStringFromArgumentTypes
          (FString *__return_storage_ptr__,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  FRigVMRegistryHandle *pFVar5;
  ForAnyElementType _Src;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar6;
  bool bVar7;
  FString *pFVar8;
  FName *this;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  FName *this_00;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res10 [8];
  FRigVMRegistryHandle *local_res18;
  int local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  FName local_88;
  uint local_80;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &param_1->field_0x10;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  iStack_c0 = 0;
  iVar14 = *(int *)&param_1->field_0x28;
  uStack_bc = 1;
  local_a8 = 0;
  iStack_ac = iStack_c0;
  if (iVar14 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    local_a8 = 0;
    iStack_c0 = 0;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14a0ebd2d;
      uVar13 = puVar16[lVar9 + 1];
    }
    uStack_bc = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_bc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_ac = local_a8 + -1 + local_res20;
    if (iVar14 < iStack_ac) {
      iStack_ac = iVar14;
    }
  }
LAB_14a0ebd2d:
  uVar13 = *(uint *)&param_1->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_a0 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_b0 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_bc,iStack_c0);
  TStack_70.CurrentBitIndex = iStack_ac;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iStack_ac;
  TStack_70.BaseBitIndex = local_a8;
  uStack_50 = CONCAT44(uStack_9c,iStack_a0);
  local_res18 = param_2;
  local_c8 = param_1;
  local_b8 = puVar1;
  iStack_a4 = iStack_ac;
  local_78 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar14 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar4)();
    return pFVar8;
  }
  pFVar5 = local_res18;
  uVar3 = *(uint *)&param_1->field_0x28;
  if (uVar13 != uVar3) {
    puVar15 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14a0ebe31;
      uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_98 = (int)lVar9;
    uVar13 = local_98 + -1 + uVar12;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_14a0ebe31:
  while( true ) {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    {
      RigVMStringUtils::JoinStrings
                (__return_storage_ptr__,&local_108,L",",(wchar_t *)0x0,(wchar_t *)0x0);
      DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    this_00 = (FName *)((longlong)TStack_70.CurrentBitIndex * 0x1c + *(longlong *)pTVar6);
    local_80 = this_00[2].ComparisonIndex.Value;
    local_88 = this_00[1];
    this = (FName *)(**(code **)(pFVar5->Registry->_padding_ + 0xe8))(pFVar5->Registry,&local_88);
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    ::FName::ToString(this_00,&local_d8);
    ::FName::ToString(this,&local_e8);
    iVar14 = local_e8.Data.ArrayNum + -1;
    if (local_e8.Data.ArrayNum == 0) {
      iVar14 = 0;
    }
    iVar10 = local_d8.Data.ArrayNum;
    if (iVar10 == 0) {
      iVar10 = 1;
    }
    ::FString::Reserve(&local_f8,iVar14 + iVar10);
    iVar14 = local_d8.Data.ArrayNum + -1;
    if (local_d8.Data.ArrayNum == 0) {
      iVar14 = 0;
    }
    ::FString::AppendChars(&local_f8,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar14);
    ::FString::AppendChar(&local_f8,L':');
    iVar14 = local_e8.Data.ArrayNum + -1;
    if (local_e8.Data.ArrayNum == 0) {
      iVar14 = 0;
    }
    ::FString::AppendChars(&local_f8,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar14);
    if (((local_108.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8) &&
        ((FScriptContainerElement *)&local_f8 <
         local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar14 = local_108.ArrayNum;
    if (local_108.ArrayNum == local_108.ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
    }
    _Src.Data = local_f8.Data.AllocatorInstance.Data;
    pFVar11 = local_108.AllocatorInstance.Data + (longlong)iVar14 * 0x10;
    local_108.ArrayNum = iVar14 + 1;
    *(FScriptContainerElement **)pFVar11 = (FScriptContainerElement *)0x0;
    lVar9 = (longlong)local_f8.Data.ArrayNum;
    *(int *)(pFVar11 + 8) = local_f8.Data.ArrayNum;
    if (local_f8.Data.ArrayNum == 0) {
      *(int *)(pFVar11 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,local_f8.Data.ArrayNum,
                 (int *)(pFVar11 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar11,_Src.Data,lVar9 * 2);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  pcVar4 = (code *)swi(3);
  pFVar8 = (FString *)(*pcVar4)();
  return pFVar8;
}

// GetSuperStructs @ 14a0ec0c0

TArray<UStruct_*,TSizedDefaultAllocator<32>_> * __cdecl
FRigVMTemplate::GetSuperStructs
          (TArray<UStruct_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UStruct *param_1,
          bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArray<UStruct_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong local_48 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&__return_storage_ptr__->AllocatorInstance,1,piVar1);
  *(UStruct **)(__return_storage_ptr__->AllocatorInstance).Data = param_1;
  while( true ) {
    if (__return_storage_ptr__->ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<UStruct_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_48[0] = *(longlong *)(*(longlong *)pFVar2 + 0x40);
    if (local_48[0] == 0) break;
    if ((pFVar2 <= (FScriptContainerElement *)local_48) &&
       ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<UStruct_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    memmove(pFVar2 + 8,pFVar2,(longlong)iVar6 << 3);
    *(longlong *)(__return_storage_ptr__->AllocatorInstance).Data = local_48[0];
  }
  if (!param_2) {
    uVar12 = __return_storage_ptr__->ArrayNum - 1;
    uVar7 = 0;
    if ((int)uVar12 < __return_storage_ptr__->ArrayNum) {
      uVar7 = ~uVar12 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<UStruct_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar2 = pFVar3 + ((longlong)__return_storage_ptr__->ArrayNum + -1) * 8;
    if ((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<UStruct_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    lVar9 = (longlong)__return_storage_ptr__->ArrayNum;
    if (__return_storage_ptr__->ArrayNum != 0) {
      iVar13 = 0;
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      bVar5 = *(longlong *)pFVar3 != *(longlong *)pFVar2;
      lVar10 = 0;
      iVar6 = 0;
      do {
        lVar10 = lVar10 + 1;
        iVar11 = iVar6 + 1;
        if (lVar10 < lVar9) {
          do {
            if (bVar5 != (*(longlong *)(pFVar3 + lVar10 * 8) != *(longlong *)pFVar2)) break;
            iVar11 = iVar11 + 1;
            lVar10 = lVar10 + 1;
          } while (lVar10 < lVar9);
        }
        if (bVar5 != false) {
          if (iVar13 != iVar6) {
            memmove(pFVar3 + (longlong)iVar13 * 8,pFVar3 + (longlong)iVar6 * 8,
                    (longlong)(iVar11 - iVar6) << 3);
          }
          iVar13 = iVar13 + (iVar11 - iVar6);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar6 = iVar11;
      } while (lVar10 < lVar9);
      __return_storage_ptr__->ArrayNum = iVar13;
    }
  }
  return __return_storage_ptr__;
}

// GetTypesForPermutation @ 14a0f1590

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMTemplate::GetTypesForPermutation
          (FRigVMTemplate *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,int param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar7;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)(*pcVar4)();
      return pTVar7;
    }
  }
  GetTypesForPermutation_NoLock(this,__return_storage_ptr__,param_1,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if ((int)aVar2 + -1 < 0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538070>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x26a,"CurrentLockCount >= 0");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if (aVar2 != (atomic<int>)0x1) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return __return_storage_ptr__;
}

// GetTypesForPermutation_NoLock @ 14a0f1770

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMTemplate::GetTypesForPermutation_NoLock
          (FRigVMTemplate *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,int param_1,FRigVMRegistryHandle *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar5;
  TRigVMTypeIndex *pTVar6;
  FScriptContainerElement *pFVar7;
  FRigVMTemplateArgument *this_00;
  uint uVar8;
  TRigVMTypeIndex local_78;
  TRigVMTypeIndex local_68;
  FName local_58;
  int local_50;
  undefined1 local_4c;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  FName *local_38;
  FName *local_30;
  
  uVar8 = 0;
  if ((param_2->Registry != this->OwnerRegistry) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0x8c7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)(*pcVar2)();
    return pTVar5;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  if (0 < (this->Arguments).ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar8 < (this->Arguments).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                  *)(*pcVar2)();
        return pTVar5;
      }
      this_00 = (FRigVMTemplateArgument *)
                ((this->Arguments).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x80);
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      bVar3 = FRigVMTemplateArgument::IsSingleton_NoLock(this_00,&local_48,param_2);
      if (bVar3) {
        pTVar6 = FRigVMTemplateArgument::GetTypeIndex_NoLock(this_00,&local_68,0,param_2);
        local_58 = pTVar6->Name;
        local_50 = pTVar6->Index;
      }
      else {
        FRigVMTemplateArgument::GetTypeIndex_NoLock(this_00,&local_78,param_1,param_2);
        if (local_78.Index == -1) {
          local_4c = 0;
LAB_14a0f193c:
          TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
          ::Reset((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                   *)__return_storage_ptr__);
          return __return_storage_ptr__;
        }
        local_58 = local_78.Name;
        local_50 = local_78.Index;
      }
      pFVar7 = (this->TypeIndicesToIgnore).AllocatorInstance.Data;
      local_4c = 1;
      pFVar1 = pFVar7 + (longlong)(this->TypeIndicesToIgnore).ArrayNum * 0xc;
      for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 0xc) {
        if (*(int *)(pFVar7 + 8) == local_50) goto LAB_14a0f193c;
      }
      local_38 = &this_00->Name;
      local_30 = &local_58;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,
                 (TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)&stack0x00000008,
                 (bool *)&local_38);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (this->Arguments).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetTypesHashFromTypes @ 14a0f2630

uint __thiscall
FRigVMTemplate::GetTypesHashFromTypes
          (FRigVMTemplate *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  FRigVMRegistryHandle *pFVar4;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  TTuple<FName,TRigVMTypeIndex> *pTVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 local_res10 [8];
  FRigVMRegistryHandle *local_res18;
  undefined1 local_res20 [8];
  undefined8 local_b8;
  undefined4 local_b0;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  uint local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  uVar8 = 0;
  iStack_80 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  if (iStack_80 != (this->Arguments).ArrayNum) {
    return 0;
  }
  iVar2 = *(int *)&param_1->field_0x28;
  puVar12 = &param_1->field_0x10;
  uStack_a0 = 0;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar2 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar12;
    }
    uVar15 = *puVar17;
    local_88 = uVar8;
    uStack_a0 = uVar8;
    while (uVar15 == 0) {
      lVar9 = (longlong)(int)uStack_a0;
      local_88 = local_88 + 0x20;
      uStack_a0 = uStack_a0 + 1;
      iStack_8c = iVar2;
      if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < (int)uStack_a0)
      goto LAB_14a0f26ee;
      uVar15 = puVar17[lVar9 + 1];
    }
    uStack_9c = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_8c = (local_88 - 1) + (int)lVar9;
    if (iVar2 < iStack_8c) {
      iStack_8c = iVar2;
    }
  }
LAB_14a0f26ee:
  uVar15 = *(uint *)&param_1->field_0x28;
  uVar19 = uVar15 & 0xffffffe0;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,uStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  iVar13 = (int)uVar15 >> 5;
  local_res18 = param_2;
  local_a8 = param_1;
  local_98 = puVar12;
  iStack_84 = iStack_8c;
  local_78 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar12;
  if ((((int)uVar15 < 0) || (iVar2 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  pFVar4 = local_res18;
  uVar18 = *(uint *)&param_1->field_0x28;
  if (uVar15 != uVar18) {
    puVar11 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar11 = puVar12;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar9 = (longlong)iVar13;
      uVar19 = uVar19 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar18;
      if ((int)(((int)(uVar18 - 1) >> 0x1f & 0x1fU) + (uVar18 - 1)) >> 5 < iVar13)
      goto LAB_14a0f27e0;
      uVar15 = *(uint *)(puVar11 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar15 = (int)lVar9 + -1 + uVar19;
    if ((int)uVar18 < (int)uVar15) {
      uVar15 = uVar18;
    }
  }
LAB_14a0f27e0:
  while( true ) {
    pTVar5 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == uVar15) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar12)) && (pTVar5 == param_1)
       ) break;
    lVar9 = *(longlong *)pTVar5;
    local_b8 = *(undefined8 *)((longlong)TStack_70.CurrentBitIndex * 0x1c + 8 + lVar9);
    local_b0 = *(undefined4 *)((longlong)TStack_70.CurrentBitIndex * 0x1c + 0x10 + lVar9);
    cVar7 = (**(code **)(pFVar4->Registry->_padding_ + 0x128))(pFVar4->Registry,&local_b8);
    if (cVar7 != '\0') {
      return 0;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  iVar2 = (this->Arguments).ArrayNum;
  pFVar14 = (this->Arguments).AllocatorInstance.Data;
  pFVar16 = pFVar14 + (longlong)iVar2 * 0x80;
  while( true ) {
    if ((this->Arguments).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigVMTemplateArgument_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar14 == pFVar16) {
      return uVar8;
    }
    pTVar10 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                      *)param_1,*(FName *)(pFVar14 + 4));
    puVar12 = &pTVar10->field_0x8;
    if (pTVar10 == (TTuple<FName,TRigVMTypeIndex> *)0x0) {
      puVar12 = (undefined1 *)0x0;
    }
    if (puVar12 == (undefined1 *)0x0) break;
    uVar15 = *(uint *)(puVar12 + 8);
    uVar8 = uVar8 - uVar15 ^ uVar15 >> 0xd;
    uVar19 = (-0x61c88647 - uVar8) - uVar15 ^ uVar8 << 8;
    uVar18 = (uVar15 - uVar19) - uVar8 ^ uVar19 >> 0xd;
    uVar8 = (uVar8 - uVar18) - uVar19 ^ uVar18 >> 0xc;
    uVar15 = (uVar19 - uVar18) - uVar8 ^ uVar8 << 0x10;
    uVar19 = (uVar18 - uVar15) - uVar8 ^ uVar15 >> 5;
    uVar8 = (uVar8 - uVar19) - uVar15 ^ uVar19 >> 3;
    uVar15 = (uVar15 - uVar8) - uVar19 ^ uVar8 << 10;
    uVar8 = (uVar19 - uVar15) - uVar8 ^ uVar15 >> 0xf;
    pFVar14 = pFVar14 + 0x80;
  }
  return 0;
}

// HandlePropagatedArgumentType @ 14a0f3710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FRigVMTemplate::HandlePropagatedArgumentType
          (FRigVMTemplate *this,TRigVMTypeIndex *param_1,FRigVMRegistryHandle *param_2)

{
  TDelegate<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  TRigVMTypeIndex *pTVar1;
  FRigVMRegistry_NoLock *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  FVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  FRigVMTemplate *pFVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  FRigVMDispatchFactory *pFVar24;
  int iVar25;
  int iVar26;
  longlong *plVar27;
  undefined8 *puVar28;
  ForAnyElementType FVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong *plVar32;
  ulonglong uVar33;
  FScriptContainerElement *pFVar34;
  ForElementType<unsigned_int> FVar35;
  undefined8 *puVar36;
  int iVar37;
  undefined1 auStackY_278 [32];
  bool local_228;
  uint local_224;
  undefined1 local_220;
  undefined1 local_21f [7];
  FScriptContainerElement *local_218;
  ForAnyElementType local_210;
  undefined8 local_208;
  FRigVMRegistryHandle *local_200;
  FRigVMTemplate *local_1f8;
  TRigVMTypeIndex *local_1f0;
  uint local_1e8;
  uint uStack_1e4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e0;
  undefined4 local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  int local_1c4;
  TPairInitializer<FName_&&,TRigVMTypeIndex_const_&> local_1c0;
  FName local_1a8;
  int local_1a0;
  TRigVMTypeIndex local_198;
  undefined1 local_188 [8];
  int local_180;
  longlong *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_170;
  FString local_150;
  undefined1 *local_140;
  undefined1 *local_138;
  FReadAccessScope local_130;
  FReadAccessScope local_118;
  undefined1 local_f8 [32];
  ForElementType<unsigned_int> local_d8;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  FScriptContainerElement local_c0 [8];
  ForAnyElementType local_b8;
  uint local_b0;
  TArray<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_200 = param_2;
  local_1f8 = this;
  local_1f0 = param_1;
  if ((param_2->Registry != this->OwnerRegistry) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0x9c4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar23 = (this->Arguments).AllocatorInstance.Data;
  pFVar22 = pFVar23;
  while( true ) {
    if (pFVar22 == pFVar23 + (longlong)(this->Arguments).ArrayNum * 0x80) {
      return true;
    }
    if (pFVar22[0x20] != (FScriptContainerElement)0x0) break;
    pFVar22 = pFVar22 + 0x80;
  }
  pFVar23 = (FScriptContainerElement *)((longlong)pFVar22 - (longlong)pFVar23 >> 7);
  if ((int)pFVar23 == -1) {
    return true;
  }
  pTVar1 = (TRigVMTypeIndex *)(this->TypeIndicesToIgnore).AllocatorInstance.Data;
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + (this->TypeIndicesToIgnore).ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pTVar1 = local_1f0;
  iVar11 = (this->TypeIndicesToIgnore).ArrayNum;
  lVar13 = (longlong)iVar11;
  iVar37 = 0;
  if (iVar11 != 0) {
    pFVar22 = (this->TypeIndicesToIgnore).AllocatorInstance.Data;
    local_228 = *(int *)(pFVar22 + 8) != param_1->Index;
    lVar20 = 0;
    iVar26 = 0;
    local_218 = pFVar23;
    do {
      lVar19 = lVar20 + 1;
      iVar25 = iVar26 + 1;
      if (lVar19 < lVar13) {
        pFVar23 = pFVar22 + (lVar19 + (lVar20 + 2) * 2) * 4;
        do {
          if (local_228 != (*(int *)pFVar23 != pTVar1->Index)) break;
          iVar25 = iVar25 + 1;
          lVar19 = lVar19 + 1;
          pFVar23 = pFVar23 + 0xc;
        } while (lVar19 < lVar13);
      }
      if (local_228 != false) {
        if (iVar37 != iVar26) {
          memmove(pFVar22 + (longlong)iVar37 * 0xc,pFVar22 + (longlong)iVar26 * 0xc,
                  (longlong)(iVar25 - iVar26) * 0xc);
        }
        iVar37 = iVar37 + (iVar25 - iVar26);
      }
      param_1 = local_1f0;
      this = local_1f8;
      param_2 = local_200;
      pFVar23 = local_218;
      local_228 = (bool)(local_228 ^ 1);
      lVar20 = lVar19;
      iVar26 = iVar25;
    } while (lVar19 < lVar13);
    (local_1f8->TypeIndicesToIgnore).ArrayNum = iVar37;
    if (0 < iVar11 - iVar37) {
      local_1a0 = local_1f0->Index;
      local_1a8 = local_1f0->Name;
      local_218 = (FScriptContainerElement *)
                  (**(code **)(local_200->Registry->_padding_ + 0xe8))
                            (local_200->Registry,&local_1a8);
      pFVar22 = (this->TypeNamesToIgnore).AllocatorInstance.Data;
      if (((pFVar22 <= local_218) &&
          (local_218 < pFVar22 + (longlong)(this->TypeNamesToIgnore).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      iVar11 = (this->TypeNamesToIgnore).ArrayNum;
      lVar13 = (longlong)iVar11;
      if (iVar11 != 0) {
        pFVar22 = (this->TypeNamesToIgnore).AllocatorInstance.Data;
        iVar37 = 0;
        bVar6 = *(longlong *)pFVar22 != *(longlong *)local_218;
        lVar20 = 0;
        pFVar34 = local_218;
        iVar11 = 0;
        do {
          lVar20 = lVar20 + 1;
          iVar26 = iVar11 + 1;
          if (lVar20 < lVar13) {
            do {
              if (bVar6 != (*(longlong *)(pFVar22 + lVar20 * 8) != *(longlong *)pFVar34)) break;
              iVar26 = iVar26 + 1;
              lVar20 = lVar20 + 1;
            } while (lVar20 < lVar13);
          }
          if (bVar6 != false) {
            if (iVar37 != iVar11) {
              memmove(pFVar22 + (longlong)iVar37 * 8,pFVar22 + (longlong)iVar11 * 8,
                      (longlong)(iVar26 - iVar11) << 3);
              pFVar34 = local_218;
            }
            iVar37 = iVar37 + (iVar26 - iVar11);
          }
          bVar6 = (bool)(bVar6 ^ 1);
          iVar11 = iVar26;
        } while (lVar20 < lVar13);
        (local_1f8->TypeNamesToIgnore).ArrayNum = iVar37;
        param_2 = local_200;
        this = local_1f8;
        param_1 = local_1f0;
      }
    }
  }
  plVar32 = (longlong *)0x0;
  uVar17 = (uint)pFVar23;
  this->Hash = 0xffffffff;
  uVar18 = 0;
  if ((int)uVar17 < (this->Arguments).ArrayNum) {
    uVar18 = ~uVar17 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  this_00 = &(this->Delegates).GetDispatchFactoryDelegate;
  pFVar23 = (this->Arguments).AllocatorInstance.Data;
  local_a8.AllocatorInstance.SecondaryData =
       (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
        )0x0;
  pFVar24 = (FRigVMDispatchFactory *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_130);
  if (((*(int *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x10 == 0) ||
      (plVar14 = *(longlong **)&(this->Delegates).GetDispatchFactoryDelegate.field_0x8,
      plVar14 == (longlong *)0x0)) || (cVar8 = (**(code **)(*plVar14 + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_130);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_130);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_118);
    plVar14 = plVar32;
    if (*(int *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x10 != 0) {
      plVar14 = *(longlong **)&(this->Delegates).GetDispatchFactoryDelegate.field_0x8;
    }
    pFVar24 = (FRigVMDispatchFactory *)(**(code **)(*plVar14 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_118);
    if ((pFVar24 == (FRigVMDispatchFactory *)0x0) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5992154289080895968>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                           ,0x9e0,"Factory"), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  local_198.Index = param_1->Index;
  local_198.Name = param_1->Name;
  bVar6 = UpdateArgumentTypes_Impl
                    (this,(FRigVMTemplateArgument *)(pFVar23 + (longlong)(int)uVar17 * 0x80),
                     &local_198,param_2,pFVar24,&local_a8);
  plVar14 = plVar32;
  plVar27 = plVar32;
  if (0 < (this->Arguments).ArrayNum) {
    do {
      uVar17 = (uint)plVar14;
      uVar18 = 0;
      if ((int)uVar17 < (this->Arguments).ArrayNum) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar23 = (this->Arguments).AllocatorInstance.Data;
      if ((*(FScriptContainerElement *)((longlong)plVar27 + (longlong)(pFVar23 + 0x20)) !=
           (FScriptContainerElement)0x0) &&
         (1 < *(int *)((longlong)plVar27 + (longlong)(pFVar23 + 0x30)))) {
        bVar9 = false;
        local_210.Data = (FScriptContainerElement *)0x0;
        local_208 = 0;
        bVar5 = false;
        local_224 = 0;
        if ((this->Permutations).ArrayNum < 1) goto LAB_14a0f4510;
        local_1f8 = (FRigVMTemplate *)0x0;
        goto LAB_14a0f3cb0;
      }
      plVar14 = (longlong *)(ulonglong)(uVar17 + 1);
      plVar27 = plVar27 + 0x10;
    } while ((int)(uVar17 + 1) < (this->Arguments).ArrayNum);
  }
  goto LAB_14a0f4524;
LAB_14a0f3cb0:
  do {
    pFVar21 = local_1f8;
    uVar15 = 0;
    uVar30 = (uint)plVar32;
    uVar17 = 0;
    uVar18 = uVar17;
    if ((int)uVar30 < (this->Permutations).ArrayNum) {
      uVar18 = ~uVar30 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar30 = local_224, bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pFVar23 = (this->Permutations).AllocatorInstance.Data + (longlong)pFVar21;
    local_218 = pFVar23;
    if (*(int *)pFVar23 != -1) {
      if (((local_210.Data <= pFVar23) && (pFVar23 < local_210.Data + (longlong)local_208._4_4_ * 4)
          ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if ((int)local_208 == local_208._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_210,(int *)((longlong)&local_208 + 4));
        local_208 = CONCAT44(local_208._4_4_,iVar11);
      }
      lVar13 = (longlong)(int)local_208;
      local_208 = CONCAT44(local_208._4_4_,(int)local_208 + 1);
      *(int *)(local_210.Data + lVar13 * 4) = *(int *)pFVar23;
      pFVar2 = this->OwnerRegistry;
      local_f8._0_8_ = (FScriptContainerElement *)0x0;
      local_f8._8_8_ = 0;
      local_d8 = (ForElementType<unsigned_int>)0x0;
      local_d0 = 0;
      local_cc = 0x80;
      local_c8 = -1;
      local_c4 = 0;
      local_b8.Data = (FScriptContainerElement *)0x0;
      local_b0 = 0;
      iVar11 = *(int *)pFVar23;
      uVar18 = iVar11 / 0x92;
      uVar30 = uVar17;
      if ((int)uVar18 < (pFVar2->Functions).Chunks.Array.ArrayNum) {
        uVar30 = ~uVar18 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar18 = *(uint *)((ulonglong)(uint)(iVar11 % 0x92) * 0x70 + 0x48 +
                        *(longlong *)
                         ((pFVar2->Functions).Chunks.Array.AllocatorInstance.Data +
                         (longlong)(int)uVar18 * 8));
      if ((uint)(local_f8._8_4_ - local_c4) < uVar18) {
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
        }
        TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_f8,uVar18);
        if (uVar18 < 4) {
          uVar18 = 1;
        }
        else {
          uVar31 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar31 != 0) {
            for (; uVar31 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_1c8 = (undefined4)lVar13;
          uVar18 = 1 << ((byte)lVar13 & 0x1f);
        }
        if ((local_b0 == 0) || ((int)local_b0 < (int)uVar18)) {
          local_b0 = uVar18;
          if (local_b8.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,0,4);
          }
          if (uVar18 != 0) {
            uVar30 = uVar18;
            if (uVar18 < 2) {
              if (local_b8.Data != (FScriptContainerElement *)0x0) {
                uVar30 = 0;
                goto LAB_14a0f3f31;
              }
            }
            else {
LAB_14a0f3f31:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_b8,0,uVar30,4);
            }
            if (0 < (int)uVar18) {
              uVar33 = (ulonglong)uVar18;
              uVar31 = uVar15;
              do {
                FVar29.Data = local_c0;
                if (local_b8.Data != (FScriptContainerElement *)0x0) {
                  FVar29.Data = local_b8.Data;
                }
                uVar12 = uVar31 & (longlong)(int)uVar18 - 1U;
                uVar31 = uVar31 + 1;
                *(undefined4 *)(FVar29.Data + uVar12 * 4) = 0xffffffff;
                uVar33 = uVar33 - 1;
              } while (uVar33 != 0);
            }
          }
          if (local_b0 != 0) {
            pTStack_1e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
            local_1e8 = 0;
            uStack_1e4 = 1;
            uStack_1d4 = 0;
            uStack_1d0 = 0;
            if (local_d0 != 0) {
              FVar35 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
              if (local_d8 != (ForElementType<unsigned_int>)0x0) {
                FVar35 = local_d8;
              }
              uVar18 = *(uint *)FVar35;
              uVar31 = uVar15;
              while (uVar18 == 0) {
                uStack_1d0 = (int)uVar31 + 0x20;
                uVar31 = (ulonglong)uStack_1d0;
                iVar11 = (int)uVar15;
                local_1e8 = iVar11 + 1;
                uVar15 = (ulonglong)local_1e8;
                if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_1e8) goto LAB_14a0f404b;
                uVar18 = ((uint *)((longlong)FVar35 + 4))[iVar11];
              }
              uStack_1e4 = -uVar18 & uVar18;
              uVar15 = (ulonglong)uStack_1e4 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              local_1c4 = (int)lVar13;
              uStack_1d4 = (uStack_1d0 - 1) + local_1c4;
              uVar15 = (ulonglong)uStack_1d4;
              if ((int)local_d0 < (int)uStack_1d4) {
LAB_14a0f404b:
                uVar15 = (ulonglong)local_d0;
                uStack_1d4 = local_d0;
              }
            }
            local_1d8 = 0xffffffff;
            local_178 = (longlong *)local_f8;
            local_170._padding_ = CONCAT44(uStack_1e4,local_1e8);
            local_170.CurrentBitIndex = uStack_1d4;
            local_170.UnvisitedBitMask = 0xffffffff;
            local_170._28_4_ = uStack_1cc;
            local_170.BaseBitIndex = uStack_1d0;
            local_170.Array = pTStack_1e0;
            if ((int)uVar15 < (int)local_d0) {
              do {
                puVar28 = (undefined8 *)((longlong)(int)uVar15 * 0x1c + *local_178);
                uVar3 = *puVar28;
                uVar18 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
                uVar18 = local_b0 - 1 & uVar18 + (int)((ulonglong)uVar3 >> 0x20);
                *(uint *)(puVar28 + 3) = uVar18;
                FVar29.Data = local_c0;
                if (local_b8.Data != (FScriptContainerElement *)0x0) {
                  FVar29.Data = local_b8.Data;
                }
                uVar31 = (longlong)(int)local_b0 - 1U & (longlong)(int)uVar18;
                *(undefined4 *)((longlong)puVar28 + 0x14) =
                     *(undefined4 *)(FVar29.Data + uVar31 * 4);
                *(int *)(FVar29.Data + uVar31 * 4) = (int)uVar15;
                local_170.UnvisitedBitMask = local_170.UnvisitedBitMask & ~local_170._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_170);
                uVar15 = (ulonglong)(uint)local_170.CurrentBitIndex;
              } while (local_170.CurrentBitIndex < (local_170.Array)->NumBits);
            }
          }
        }
      }
      iVar11 = *(int *)pFVar23;
      pFVar2 = this->OwnerRegistry;
      uVar18 = iVar11 / 0x92;
      if ((int)uVar18 < (pFVar2->Functions).Chunks.Array.ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      lVar13 = (ulonglong)(uint)(iVar11 % 0x92) * 0x70 +
               *(longlong *)
                ((pFVar2->Functions).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar18 * 8
                );
      iVar11 = *(int *)(lVar13 + 0x48);
      puVar28 = *(undefined8 **)(lVar13 + 0x40);
      puVar36 = puVar28 + (longlong)iVar11 * 7;
      while( true ) {
        if (*(int *)(lVar13 + 0x48) != iVar11) {
          local_220 = 0;
          `TCheckedPointerIterator<FRigVMFunctionArgument,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_220);
        }
        param_2 = local_200;
        if (puVar28 == puVar36) break;
        pFVar2 = this->OwnerRegistry;
        pcVar4 = *(code **)(pFVar2->_padding_ + 0x100);
        ::FString::FString(&local_150,(wchar_t *)puVar28[1]);
        (*pcVar4)(pFVar2,local_188,&local_150);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        if ((local_180 == -1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                               ,0xa11,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        ::FName::FName((FName *)((longlong)&local_1c0.Key + 4),(wchar_t *)*puVar28);
        local_140 = (undefined1 *)((longlong)&local_1c0.Key + 4);
        local_138 = local_188;
        TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_&&,TRigVMTypeIndex_const_&>_>
                  ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                    *)local_f8,&local_1c0,(bool *)&local_140);
        puVar28 = puVar28 + 7;
      }
      uVar18 = FindPermutation_NoLock
                         (this,(TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                                *)local_f8,local_200);
      bVar9 = bVar5;
      if (uVar18 != local_224) {
        pFVar2 = this->OwnerRegistry;
        iVar11 = *(int *)local_218;
        uVar17 = iVar11 / 0x92;
        uVar30 = 0;
        if ((int)uVar17 < (pFVar2->Functions).Chunks.Array.ArrayNum) {
          uVar30 = ~uVar17 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        *(uint *)((ulonglong)(uint)(iVar11 % 0x92) * 0x70 + 0x38 +
                 *(longlong *)
                  ((pFVar2->Functions).Chunks.Array.AllocatorInstance.Data +
                  (longlong)(int)uVar17 * 8)) = uVar18;
        bVar9 = true;
      }
      local_b0 = 0;
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_f8);
      pFVar21 = local_1f8;
      uVar30 = local_224;
      bVar5 = bVar9;
    }
    uVar15 = 0;
    iVar11 = (this->Permutations).ArrayNum;
    local_224 = uVar30 + 1;
    plVar32 = (longlong *)(ulonglong)local_224;
    local_1f8 = (FRigVMTemplate *)((longlong)pFVar21 + 4);
  } while ((int)local_224 < iVar11);
  if (bVar9) {
    uVar31 = uVar15;
    if (0 < iVar11) {
      do {
        uVar17 = (uint)uVar15;
        uVar18 = 0;
        if ((int)uVar17 < (this->Permutations).ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        *(undefined4 *)((this->Permutations).AllocatorInstance.Data + uVar31) = 0xffffffff;
        UpdateTypesIndicesToPermutationIndices(this,uVar17,param_2);
        uVar15 = (ulonglong)(uVar17 + 1);
        uVar31 = uVar31 + 4;
      } while ((int)(uVar17 + 1) < (this->Permutations).ArrayNum);
    }
    iVar11 = (int)local_208;
    pFVar23 = local_210.Data + (longlong)(int)local_208 * 4;
    FVar29.Data = local_210.Data;
    while( true ) {
      if ((int)local_208 != iVar11) {
        local_21f[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_21f);
      }
      if (FVar29.Data == pFVar23) break;
      iVar37 = *(int *)FVar29.Data;
      pFVar2 = this->OwnerRegistry;
      uVar18 = iVar37 / 0x92;
      uVar17 = 0;
      if ((int)uVar18 < (pFVar2->Functions).Chunks.Array.ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      uVar18 = *(uint *)((ulonglong)(uint)(iVar37 % 0x92) * 0x70 + 0x38 +
                        *(longlong *)
                         ((pFVar2->Functions).Chunks.Array.AllocatorInstance.Data +
                         (longlong)(int)uVar18 * 8));
      uVar17 = 0;
      if ((int)uVar18 < (this->Permutations).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      *(int *)((this->Permutations).AllocatorInstance.Data + (longlong)(int)uVar18 * 4) = iVar37;
      UpdateTypesIndicesToPermutationIndices(this,uVar18,local_200);
      FVar29.Data = FVar29.Data + 4;
    }
  }
LAB_14a0f4510:
  if (local_210.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data);
  }
LAB_14a0f4524:
  FVar16 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
            )&local_a8;
  if (local_a8.AllocatorInstance.SecondaryData !=
      (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
       )0x0) {
    FVar16 = local_a8.AllocatorInstance.SecondaryData;
  }
  DestructItems<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,int>
            ((TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)FVar16,local_a8.ArrayNum);
  if (local_a8.AllocatorInstance.SecondaryData !=
      (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
       )0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
    return bVar6;
  }
  return bVar6;
}

// HandleTypeRemoval @ 14a0f45a0

void __thiscall
FRigVMTemplate::HandleTypeRemoval
          (FRigVMTemplate *this,TRigVMTypeIndex *param_1,FRigVMRegistryHandle *param_2)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  uint *puVar5;
  FName FVar6;
  FRigVMRegistry_NoLock *pFVar7;
  TRigVMTypeIndex *pTVar8;
  code *pcVar9;
  TRigVMTypeIndex *pTVar10;
  FRigVMRegistryHandle *pFVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  FRigVMFunction *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 *puVar18;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar19;
  longlong lVar20;
  uint *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ForAnyElementType FVar25;
  bool bVar26;
  undefined1 local_res8 [8];
  TRigVMTypeIndex *local_res10;
  FRigVMRegistryHandle *local_res18;
  undefined1 local_res20 [8];
  uint local_78;
  uint local_74 [3];
  FName local_68;
  int local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  
  bVar26 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  local_res18 = param_2;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2623,"FRigVMTemplate::HandleTypeRemoval",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
               ,0xa3f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2623);
  }
  if ((param_2->Registry != this->OwnerRegistry) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InRegistry.GetRegistry() == OwnerRegistry",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                          ,0xa41,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar17 = (this->TypeIndicesToIgnore).AllocatorInstance.Data;
  pFVar4 = pFVar17 + (longlong)(this->TypeIndicesToIgnore).ArrayNum * 0xc;
  if (pFVar17 != pFVar4) {
    do {
      if (*(int *)(pFVar17 + 8) == param_1->Index) goto LAB_14a0f4b03;
      pFVar17 = pFVar17 + 0xc;
    } while (pFVar17 != pFVar4);
  }
  uVar13 = param_1->Index;
  puVar24 = (undefined8 *)0x0;
  this->Hash = 0xffffffff;
  puVar22 = (undefined8 *)0x0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  puVar23 = puVar24;
  if (*(int *)&(this->TypesIndicesToPermutationIndices).field_0x8 !=
      *(int *)&(this->TypesIndicesToPermutationIndices).field_0x34) {
    puVar18 = *(undefined1 **)&(this->TypesIndicesToPermutationIndices).field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->TypesIndicesToPermutationIndices).field_0x38;
    }
    iVar15 = *(int *)(puVar18 +
                     (ulonglong)
                     (*(int *)&(this->TypesIndicesToPermutationIndices).field_0x48 - 1U & uVar13) *
                     4);
    puVar23 = puVar22;
    if (iVar15 != -1) {
      do {
        lVar20 = *(longlong *)&this->TypesIndicesToPermutationIndices + (longlong)iVar15 * 0x28;
        if (*(uint *)(*(longlong *)&this->TypesIndicesToPermutationIndices + 8 +
                     (longlong)iVar15 * 0x28) == uVar13) {
          puVar22 = (undefined8 *)(lVar20 + 0x10);
          if (lVar20 == 0) {
            puVar22 = puVar24;
          }
          if (puVar22 != (undefined8 *)0x0) {
            puVar21 = (uint *)*puVar22;
            iVar15 = *(int *)(puVar22 + 1);
            puVar5 = puVar21 + iVar15;
            while( true ) {
              if (*(int *)(puVar22 + 1) != iVar15) {
                local_res8[0] = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res8);
                puVar24 = (undefined8 *)(local_50 & 0xffffffff);
              }
              puVar23 = puVar24;
              if (puVar21 == puVar5) break;
              pFVar17 = (this->RemovedPermutationIndices).AllocatorInstance.Data;
              local_78 = *puVar21;
              pFVar4 = pFVar17 + (longlong)(this->RemovedPermutationIndices).ArrayNum * 4;
              for (; pFVar17 != pFVar4; pFVar17 = pFVar17 + 4) {
                if (*(uint *)pFVar17 == local_78) goto LAB_14a0f4973;
              }
              iVar14 = (int)puVar24;
              if ((local_58.Data <= (FScriptContainerElement *)&local_78) &&
                 ((FScriptContainerElement *)&local_78 <
                  local_58.Data + (longlong)local_50._4_4_ * 4)) {
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar12) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar14 = (int)local_50;
              }
              if (iVar14 == local_50._4_4_) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_58,(int *)((longlong)&local_50 + 4));
              }
              local_50 = CONCAT44(local_50._4_4_,iVar14 + 1U);
              *(uint *)(local_58.Data + (longlong)iVar14 * 4) = local_78;
              puVar24 = (undefined8 *)(ulonglong)(iVar14 + 1U);
LAB_14a0f4973:
              puVar21 = puVar21 + 1;
            }
          }
          break;
        }
        iVar15 = *(int *)(lVar20 + 0x20);
      } while (iVar15 != -1);
    }
  }
  pFVar11 = local_res18;
  iVar15 = (int)puVar23;
  pFVar4 = local_58.Data + (longlong)iVar15 * 4;
  FVar25.Data = local_58.Data;
  while( true ) {
    if ((int)puVar23 != iVar15) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    pTVar10 = local_res10;
    if (FVar25.Data == pFVar4) break;
    local_74[0] = *(uint *)FVar25.Data;
    pFVar16 = GetPermutation_NoLock(this,local_74[0],pFVar11);
    if (pFVar16 != (FRigVMFunction *)0x0) {
      pFVar7 = pFVar11->Registry;
      (**(code **)(pFVar7->_padding_ + 0x30))(pFVar7,pFVar16->Index);
      lVar20 = (longlong)(int)local_74[0];
      uVar13 = 0;
      if ((int)local_74[0] < (this->Permutations).ArrayNum) {
        uVar13 = ~local_74[0] >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(undefined4 *)((this->Permutations).AllocatorInstance.Data + lVar20 * 4) = 0xffffffff;
    }
    pTVar2 = &this->RemovedPermutationIndices;
    pFVar17 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar17 <= (FScriptContainerElement *)local_74) &&
        ((FScriptContainerElement *)local_74 <
         pFVar17 + (longlong)(this->RemovedPermutationIndices).ArrayMax * 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = (this->RemovedPermutationIndices).ArrayNum;
    piVar1 = &(this->RemovedPermutationIndices).ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    FVar25.Data = FVar25.Data + 4;
    (this->RemovedPermutationIndices).ArrayNum = iVar14 + 1;
    *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_74[0];
    puVar23 = (undefined8 *)(local_50 & 0xffffffff);
  }
  pTVar3 = &this->TypeIndicesToIgnore;
  pTVar8 = (TRigVMTypeIndex *)(pTVar3->AllocatorInstance).Data;
  if (((pTVar8 <= local_res10) && (local_res10 < pTVar8 + (this->TypeIndicesToIgnore).ArrayMax)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar15 = (this->TypeIndicesToIgnore).ArrayNum;
  piVar1 = &(this->TypeIndicesToIgnore).ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&pTVar3->AllocatorInstance,piVar1);
  }
  FVar6 = pTVar10->Name;
  (this->TypeIndicesToIgnore).ArrayNum = iVar15 + 1;
  pTVar19 = &this->TypeNamesToIgnore;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  *(FName *)(pFVar4 + (longlong)iVar15 * 0xc) = FVar6;
  *(int *)(pFVar4 + (longlong)iVar15 * 0xc + 8) = pTVar10->Index;
  local_60 = pTVar10->Index;
  local_68 = pTVar10->Name;
  pFVar17 = (FScriptContainerElement *)
            (**(code **)(local_res18->Registry->_padding_ + 0xe8))(local_res18->Registry,&local_68);
  pFVar4 = (pTVar19->AllocatorInstance).Data;
  if (((pFVar4 <= pFVar17) && (pFVar17 < pFVar4 + (longlong)(this->TypeNamesToIgnore).ArrayMax * 8))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar15 = (this->TypeNamesToIgnore).ArrayNum;
  piVar1 = &(this->TypeNamesToIgnore).ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar19->AllocatorInstance,piVar1);
  }
  (this->TypeNamesToIgnore).ArrayNum = iVar15 + 1;
  *(undefined8 *)((pTVar19->AllocatorInstance).Data + (longlong)iVar15 * 8) = *(undefined8 *)pFVar17
  ;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
LAB_14a0f4b03:
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsIgnoredType @ 14a0f97b0

bool __thiscall FRigVMTemplate::IsIgnoredType(FRigVMTemplate *this,FName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->TypeNamesToIgnore).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->TypeNamesToIgnore).ArrayNum;
  if (pFVar2 != pFVar1) {
    do {
      if (*pFVar2 == *param_1) {
        return true;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1);
  }
  return false;
}

// IsIgnoredType @ 14a0f97f0

bool __thiscall FRigVMTemplate::IsIgnoredType(FRigVMTemplate *this,TRigVMTypeIndex *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->TypeIndicesToIgnore).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->TypeIndicesToIgnore).ArrayNum * 0xc;
  if (pFVar2 != pFVar1) {
    do {
      if (*(int *)(pFVar2 + 8) == param_1->Index) {
        return true;
      }
      pFVar2 = pFVar2 + 0xc;
    } while (pFVar2 != pFVar1);
  }
  return false;
}

// IsValid @ 14a0fa000

bool __thiscall FRigVMTemplate::IsValid(FRigVMTemplate *this)

{
  return this->Notation != (FName)0x0;
}

// IsValidArgumentForTemplate @ 14a0fa0f0

bool __cdecl FRigVMTemplate::IsValidArgumentForTemplate(ERigVMPinDirection param_1)

{
  return param_1 != Invalid;
}

// Merge @ 14a0fd6b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRigVMTemplate::Merge(FRigVMTemplate *this,FRigVMTemplate *param_1,FRigVMRegistryHandle *param_2)

{
  int *piVar1;
  TArray<FRigVMTemplateArgument,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  UScriptStruct *pUVar11;
  UScriptStruct *pUVar12;
  TRigVMTypeIndex *pTVar13;
  TRigVMTypeIndex *pTVar14;
  uint uVar15;
  FRigVMTemplateArgument *pFVar16;
  FRigVMTemplateArgument *this_00;
  int iVar17;
  int local_res8;
  TRigVMTypeIndex local_c8;
  TRigVMTypeIndex local_b8;
  TRigVMTypeIndex local_ac;
  ForAnyElementType local_a0;
  undefined8 local_98;
  FString local_90;
  void *local_80 [2];
  FScriptContainerElement *local_70 [2];
  FString local_60 [2];
  
  if ((param_2->Registry != this->OwnerRegistry) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0x5df,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (((this->Notation != (FName)0x0) && (param_1->Notation != (FName)0x0)) &&
     (this->Notation == param_1->Notation)) {
    if ((this->OwnerRegistry != param_1->OwnerRegistry) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwnerRegistry == InOther.OwnerRegistry",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                           ,0x5eb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pUVar11 = GetExecuteContextStruct_NoLock(param_1,param_2);
    pUVar12 = GetExecuteContextStruct_NoLock(this,param_2);
    if (pUVar11 == pUVar12) {
      if ((param_1->Permutations).ArrayNum == 1) {
        local_res8 = 0;
        if (0 < (this->Permutations).ArrayNum) {
          do {
            iVar10 = (this->Arguments).ArrayNum;
            iVar17 = 0;
            uVar15 = 0;
            if (0 < iVar10) {
              do {
                uVar9 = 0;
                if ((int)uVar15 < (this->Arguments).ArrayNum) {
                  uVar9 = ~uVar15 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  uVar8 = (*pcVar5)();
                  return (bool)uVar8;
                }
                pTVar13 = FRigVMTemplateArgument::GetTypeIndex_NoLock
                                    ((FRigVMTemplateArgument *)
                                     ((this->Arguments).AllocatorInstance.Data +
                                     (longlong)(int)uVar15 * 0x80),&local_b8,local_res8,param_2);
                uVar9 = 0;
                if ((int)uVar15 < (param_1->Arguments).ArrayNum) {
                  uVar9 = ~uVar15 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  uVar8 = (*pcVar5)();
                  return (bool)uVar8;
                }
                pTVar14 = FRigVMTemplateArgument::GetTypeIndex_NoLock
                                    ((FRigVMTemplateArgument *)
                                     ((param_1->Arguments).AllocatorInstance.Data +
                                     (longlong)(int)uVar15 * 0x80),&local_ac,0,param_2);
                if (pTVar13->Index == pTVar14->Index) {
                  iVar17 = iVar17 + 1;
                }
                iVar10 = (this->Arguments).ArrayNum;
                uVar15 = uVar15 + 1;
              } while ((int)uVar15 < iVar10);
            }
            if (iVar17 == iVar10) {
              if ((byte)LogRigVM._0_1_ < 4) {
                return false;
              }
              GetPermutation_NoLock(this,local_res8,param_2);
              ::FName::ToString(&this->Notation,local_60);
              GetPrimaryPermutation_NoLock(param_1,param_2);
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
              goto LAB_14a0fd8a2;
            }
            local_res8 = local_res8 + 1;
          } while (local_res8 < (this->Permutations).ArrayNum);
        }
        uVar15 = 0;
        local_a0.Data = (FScriptContainerElement *)0x0;
        local_98 = 0;
        if (0 < (this->Arguments).ArrayNum) {
          do {
            uVar9 = 0;
            if ((int)uVar15 < (param_1->Arguments).ArrayNum) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            this_00 = (FRigVMTemplateArgument *)
                      ((param_1->Arguments).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x80);
            iVar10 = FRigVMTemplateArgument::GetNumTypes_NoLock(this_00,param_2);
            if (iVar10 != 1) {
              bVar7 = false;
              goto LAB_14a0fde45;
            }
            uVar9 = 0;
            if ((int)uVar15 < (this->Arguments).ArrayNum) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            pFVar16 = (FRigVMTemplateArgument *)
                      ((this->Arguments).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x80);
            if (((local_a0.Data <= pFVar16) &&
                (pFVar16 < (FRigVMTemplateArgument *)
                           (local_a0.Data + (longlong)local_98._4_4_ * 0x80))) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            iVar10 = (int)local_98;
            if ((int)local_98 == local_98._4_4_) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1080,&local_a0,(int *)((longlong)&local_98 + 4));
            }
            local_98 = CONCAT44(local_98._4_4_,iVar10 + 1);
            pFVar16 = FRigVMTemplateArgument::FRigVMTemplateArgument
                                ((FRigVMTemplateArgument *)(local_a0.Data + (longlong)iVar10 * 0x80)
                                 ,pFVar16);
            FRigVMTemplateArgument::GetTypeIndex_NoLock(this_00,&local_c8,0,param_2);
            pTVar13 = (TRigVMTypeIndex *)(pFVar16->TypeIndices).AllocatorInstance.Data;
            if (((pTVar13 <= &local_c8) && (&local_c8 < pTVar13 + (pFVar16->TypeIndices).ArrayMax))
               && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            iVar10 = (pFVar16->TypeIndices).ArrayNum;
            piVar1 = &(pFVar16->TypeIndices).ArrayMax;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,&(pFVar16->TypeIndices).AllocatorInstance,piVar1);
            }
            uVar15 = uVar15 + 1;
            (pFVar16->TypeIndices).ArrayNum = iVar10 + 1;
            pFVar3 = (pFVar16->TypeIndices).AllocatorInstance.Data;
            *(FName *)(pFVar3 + (longlong)iVar10 * 0xc) = local_c8.Name;
            *(int *)(pFVar3 + (longlong)iVar10 * 0xc + 8) = local_c8.Index;
          } while ((int)uVar15 < (this->Arguments).ArrayNum);
        }
        pTVar2 = &this->Arguments;
        if (pTVar2 != (TArray<FRigVMTemplateArgument,TSizedDefaultAllocator<32>_> *)&local_a0) {
          DestructItems<FRigVMTemplateArgument,int>
                    ((FRigVMTemplateArgument *)(pTVar2->AllocatorInstance).Data,
                     (this->Arguments).ArrayNum);
          FVar6.Data = local_a0.Data;
          iVar10 = (int)local_98;
          piVar1 = &(this->Arguments).ArrayMax;
          (this->Arguments).ArrayNum = (int)local_98;
          if (((int)local_98 == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x80,0x10,(int)local_98,*piVar1,&pTVar2->AllocatorInstance,(int)local_98,
                       piVar1);
            ConstructItems<FRigVMTemplateArgument,FRigVMTemplateArgument,int>
                      ((pTVar2->AllocatorInstance).Data,(FRigVMTemplateArgument *)FVar6.Data,iVar10)
            ;
          }
        }
        if (((param_1->Permutations).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar3 = (param_1->Permutations).AllocatorInstance.Data;
        pFVar4 = (this->Permutations).AllocatorInstance.Data;
        if (((pFVar4 <= pFVar3) && (pFVar3 < pFVar4 + (longlong)(this->Permutations).ArrayMax * 4))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        iVar10 = (this->Permutations).ArrayNum;
        piVar1 = &(this->Permutations).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->Permutations).AllocatorInstance,piVar1);
        }
        (this->Permutations).ArrayNum = iVar10 + 1;
        *(undefined4 *)((this->Permutations).AllocatorInstance.Data + (longlong)iVar10 * 4) =
             *(undefined4 *)pFVar3;
        UpdateTypesIndicesToPermutationIndices(this,(this->Permutations).ArrayNum + -1,param_2);
        UpdateTypesHashToPermutation(this,(this->Permutations).ArrayNum + -1,param_2);
        bVar7 = true;
LAB_14a0fde45:
        DestructItems<FRigVMTemplateArgument,int>
                  ((FRigVMTemplateArgument *)local_a0.Data,(int)local_98);
        if ((FRigVMTemplateArgument *)local_a0.Data != (FRigVMTemplateArgument *)0x0) {
          FMemory::Free(local_a0.Data);
          return bVar7;
        }
        return bVar7;
      }
    }
    else if (3 < (byte)LogRigVM._0_1_) {
      GetPrimaryPermutation_NoLock(this,param_2);
      pUVar11 = GetExecuteContextStruct_NoLock(this,param_2);
      (**(code **)(pUVar11->_padding_ + 0x388))(pUVar11,local_70,0);
      pUVar11 = GetExecuteContextStruct_NoLock(param_1,param_2);
      (**(code **)(pUVar11->_padding_ + 0x388))(pUVar11,local_80,0);
      ::FName::ToString(&this->Notation,&local_90);
      GetPrimaryPermutation_NoLock(param_1,param_2);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      local_60[0].Data.AllocatorInstance.Data = local_70[0];
      if (local_80[0] != (void *)0x0) {
        FMemory::Free(local_80[0]);
        local_60[0].Data.AllocatorInstance.Data = local_70[0];
      }
LAB_14a0fd8a2:
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// NumExecuteArguments @ 14a0fde70

int __thiscall
FRigVMTemplate::NumExecuteArguments(FRigVMTemplate *this,FRigVMDispatchContext *param_1)

{
  TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = GetExecuteArguments(this,param_1);
  return pTVar1->ArrayNum;
}

// NumPermutations @ 14a0fde90

int __thiscall FRigVMTemplate::NumPermutations(FRigVMTemplate *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  FRigVMRegistry_RWLock *pFVar8;
  
  pFVar8 = FRigVMRegistry_RWLock::Get();
  aVar3 = pFVar8->WriteLockOwnerThread;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar8->Lock);
  }
  LOCK();
  paVar1 = &pFVar8->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    pFVar8->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
    UNLOCK();
  }
  iVar7 = (this->Permutations).ArrayNum;
  LOCK();
  paVar1 = &pFVar8->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    pFVar8->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else if ((int)aVar2 + -1 < 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538070>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x26a,"CurrentLockCount >= 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  aVar3 = pFVar8->WriteLockOwnerThread;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar8->Lock);
  }
  return iVar7;
}

// RecomputeTypesHashToPermutations @ 14a101f50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FRigVMTemplate::RecomputeTypesHashToPermutations(FRigVMTemplate *this,FRigVMRegistryHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  TArray<FRigVMTypeCacheScope_NoLock,TSizedDefaultAllocator<32>_> local_38;
  
  if ((param_1->Registry != this->OwnerRegistry) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0xaa8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TArray<FRigVMTypeCacheScope_NoLock,TSizedDefaultAllocator<32>_>::SetNum
            (&local_38,(this->Arguments).ArrayNum,Default);
  uVar6 = 0;
  if (0 < (this->Arguments).ArrayNum) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < local_38.ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = local_38.AllocatorInstance.Data + lVar8;
      uVar3 = 0;
      if ((int)uVar6 < (this->Arguments).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = (this->Arguments).AllocatorInstance.Data + lVar7;
      if (*(FRigVMRegistry_NoLock **)pFVar5 != param_1->Registry) {
        *(FRigVMRegistry_NoLock **)pFVar5 = param_1->Registry;
        *(longlong *)(pFVar5 + 8) = 0;
      }
      if (*(FScriptContainerElement **)(pFVar5 + 8) != pFVar4) {
        *(FScriptContainerElement **)(pFVar5 + 8) = pFVar4;
        pFVar5[0x10] = (FScriptContainerElement)(*(longlong *)(pFVar4 + 0x40) != 0);
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x30;
      lVar7 = lVar7 + 0x80;
    } while ((int)uVar6 < (this->Arguments).ArrayNum);
  }
  RecomputeTypesHashToPermutations(this,&local_38,param_1);
  DestructItems<FRigVMTypeCacheScope_NoLock,int>
            ((FRigVMTypeCacheScope_NoLock *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FRigVMTypeCacheScope_NoLock *)local_38.AllocatorInstance.Data !=
      (FRigVMTypeCacheScope_NoLock *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// RecomputeTypesHashToPermutations @ 14a102130

void __thiscall
FRigVMTemplate::RecomputeTypesHashToPermutations
          (FRigVMTemplate *this,
          TArray<FRigVMTypeCacheScope_NoLock,TSizedDefaultAllocator<32>_> *param_1,
          FRigVMRegistryHandle *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  FRigVMTypeCacheScope_NoLock *this_00;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  FName *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int local_res8 [2];
  uint local_res10 [4];
  TRigVMTypeIndex local_58;
  uint *local_48;
  int *local_40;
  
  if ((param_2->Registry != this->OwnerRegistry) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0xab7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
           *)&this->TypesHashToPermutation);
  iVar3 = param_1->ArrayNum;
  uVar11 = 0;
  bVar2 = false;
  uVar6 = uVar11;
  if (0 < iVar3) {
    do {
      uVar4 = (uint)uVar6;
      if (bVar2) {
LAB_14a1021fd:
        bVar2 = true;
      }
      else {
        uVar7 = 0;
        if ((int)uVar4 < iVar3) {
          uVar7 = ~uVar4 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar3 = FRigVMTypeCacheScope_NoLock::GetNumTypes_NoLock
                          ((FRigVMTypeCacheScope_NoLock *)
                           ((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x30));
        if (iVar3 == 0) goto LAB_14a1021fd;
        bVar2 = false;
      }
      iVar3 = param_1->ArrayNum;
      uVar6 = (ulonglong)(uVar4 + 1);
    } while ((int)(uVar4 + 1) < iVar3);
    if (bVar2) {
      return;
    }
  }
  local_res8[0] = 0;
  if (0 < (this->Permutations).ArrayNum) {
    do {
      iVar3 = param_1->ArrayNum;
      local_res10[0] = 0;
      uVar6 = uVar11;
      uVar12 = uVar11;
      if (0 < iVar3) {
        do {
          uVar7 = (uint)uVar6;
          uVar4 = 0;
          if ((int)uVar7 < iVar3) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar3 = local_res8[0];
          lVar8 = (longlong)local_res8[0];
          this_00 = (FRigVMTypeCacheScope_NoLock *)((param_1->AllocatorInstance).Data + uVar12);
          if ((this_00->Registry == (FRigVMRegistry_NoLock *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Registry",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                                 ,2999,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((this_00->Types).field0_0x0.TypedValue.ArrayMax == -1) {
            if (this_00->bShouldCopyTypes != false) {
              FRigVMTypeCacheScope_NoLock::UpdateTypesIfRequired(this_00);
              if (((this_00->Types).field0_0x0.TypedValue.ArrayMax == -1) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              goto LAB_14a102326;
            }
            FRigVMTemplateArgument::GetTypeIndex_NoLock
                      (this_00->Argument,&local_58,iVar3,&this_00->Registry->ThisHandle);
          }
          else {
LAB_14a102326:
            if ((iVar3 < 0) || ((this_00->Types).field0_0x0.TypedValue.ArrayNum <= iVar3)) {
              if (((this_00->Types).field0_0x0.TypedValue.ArrayNum < 1) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pFVar10 = *(FName **)&(this_00->Types).field0_0x0;
            }
            else {
              if ((iVar3 < 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pFVar10 = (FName *)((this_00->Types).field0_0x0.TypedValue.AllocatorInstance.Data +
                                 lVar8 * 0xc);
            }
            local_58.Name = *pFVar10;
            local_58.Index = pFVar10[1].ComparisonIndex.Value;
          }
          uVar5 = local_res10[0] - local_58.Index ^ (uint)local_58.Index >> 0xd;
          uVar4 = (-0x61c88647 - uVar5) - local_58.Index ^ uVar5 << 8;
          uVar9 = (local_58.Index - uVar4) - uVar5 ^ uVar4 >> 0xd;
          uVar5 = (uVar5 - uVar9) - uVar4 ^ uVar9 >> 0xc;
          uVar4 = (uVar4 - uVar9) - uVar5 ^ uVar5 << 0x10;
          uVar9 = (uVar9 - uVar4) - uVar5 ^ uVar4 >> 5;
          uVar5 = (uVar5 - uVar9) - uVar4 ^ uVar9 >> 3;
          uVar4 = (uVar4 - uVar5) - uVar9 ^ uVar5 << 10;
          iVar3 = param_1->ArrayNum;
          local_res10[0] = (uVar9 - uVar4) - uVar5 ^ uVar4 >> 0xf;
          uVar6 = (ulonglong)(uVar7 + 1);
          uVar12 = uVar12 + 0x30;
        } while ((int)(uVar7 + 1) < iVar3);
      }
      local_48 = local_res10;
      local_40 = local_res8;
      TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
                ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                  *)&this->TypesHashToPermutation,
                 (TPairInitializer<unsigned_int_const_&,int_const_&> *)(local_res10 + 2),
                 (bool *)&local_48);
      local_res8[0] = local_res8[0] + 1;
    } while (local_res8[0] < (this->Permutations).ArrayNum);
  }
  return;
}

// Resolve @ 14a10b3a0

bool __thiscall
FRigVMTemplate::Resolve
          (FRigVMTemplate *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<unsigned_int> aVar8;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar8) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  bVar5 = Resolve_NoLock(this,param_1,param_2,param_3,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar8) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return bVar5;
}

// ResolveArgument @ 14a10b590

bool __thiscall
FRigVMTemplate::ResolveArgument
          (FRigVMTemplate *this,FName *param_1,TRigVMTypeIndex *param_2,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<unsigned_int> aVar8;
  TRigVMTypeIndex local_38;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar8) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_38.Index = param_2->Index;
  local_38.Name = param_2->Name;
  bVar5 = ResolveArgument_NoLock(this,param_1,&local_38,param_3,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar8 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar8) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return bVar5;
}

// ResolveArgument_NoLock @ 14a10b7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRigVMTemplate::ResolveArgument_NoLock
          (FRigVMTemplate *this,FName *param_1,TRigVMTypeIndex *param_2,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_3,FRigVMRegistryHandle *param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FName FVar3;
  code *pcVar4;
  undefined8 uVar5;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  *pTVar12;
  TTuple<FName,TRigVMTypeIndex> *pTVar13;
  byte bVar14;
  uint uVar15;
  FName *pFVar16;
  longlong lVar17;
  ForElementType<FSetElementId> FVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  undefined1 *puVar24;
  uint uVar25;
  undefined1 auStackY_3a8 [32];
  undefined1 local_377;
  undefined1 local_376;
  undefined1 local_375 [5];
  TArray<int,TSizedDefaultAllocator<32>_> local_370;
  int local_360 [2];
  FRigVMRegistryHandle *local_358;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_350;
  uint uStack_348;
  uint uStack_344;
  TBitArray<FDefaultBitArrayAllocator> *local_340;
  undefined4 uStack_338;
  uint uStack_334;
  uint local_330;
  undefined4 uStack_32c;
  int iStack_328;
  undefined4 uStack_324;
  FName local_320;
  FName FStack_318;
  uint local_310;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_308;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> local_2f8;
  FName *local_2e8;
  FRigVMTemplate *local_2e0;
  FName local_2d8;
  int local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a0;
  undefined8 uStack_280;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_270;
  undefined8 uStack_250;
  FName *local_248;
  TRigVMTypeIndex *local_240;
  longlong local_238;
  longlong local_230;
  undefined4 local_20c;
  undefined4 local_1ec;
  undefined1 local_1e8 [32];
  uint *local_1c8;
  uint local_1c0;
  uint local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  undefined1 local_1b0 [8];
  ForElementType<FSetElementId> local_1a8;
  int local_1a0;
  undefined1 local_198 [32];
  uint *local_178;
  uint local_170;
  uint local_16c;
  undefined4 local_168;
  int local_164;
  ForElementType<FSetElementId> local_158;
  int local_150;
  undefined1 local_148 [32];
  void *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  int local_114;
  undefined1 local_110 [8];
  ForElementType<FSetElementId> local_108;
  int local_100;
  undefined1 local_f8 [72];
  undefined4 local_b0;
  undefined1 local_a8 [72];
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_2e0 = this;
  if ((param_4->Registry != this->OwnerRegistry) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0x86b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  local_358 = param_4;
  pTVar12 = (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
             *)`FRigVMTemplate::ResolveArgument_NoLock'::__l2::<lambda_1>::operator()
                         (&local_358,
                          (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                           *)local_f8,param_3);
  if ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
       *)param_3 != pTVar12) {
    TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                *)param_3,pTVar12);
  }
  local_b0 = 0;
  if ((void *)local_f8._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  local_1e8._0_8_ = (FScriptContainerElement *)0x0;
  local_1e8._8_8_ = 0;
  local_1c8 = (uint *)0x0;
  local_1c0 = 0;
  local_1bc = 0x80;
  local_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1a8 = (ForElementType<FSetElementId>)0x0;
  local_1a0 = 0;
  local_248 = param_1;
  local_240 = param_2;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_>
            ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              *)local_1e8,&local_308,(bool *)&local_248);
  local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_370.ArrayNum = 0;
  local_370.ArrayMax = 0;
  local_198._0_8_ = (FScriptContainerElement *)0x0;
  local_198._8_8_ = 0;
  local_178 = (uint *)0x0;
  local_170 = 0;
  local_16c = 0x80;
  local_168 = 0xffffffff;
  local_164 = 0;
  local_158 = (ForElementType<FSetElementId>)0x0;
  local_150 = 0;
  bVar7 = Resolve_NoLock(this,(TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                               *)local_1e8,&local_370,true,param_4);
  if (bVar7) {
    pTVar13 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                      *)local_1e8,*param_1);
    if ((pTVar13 == (TTuple<FName,TRigVMTypeIndex> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    local_2d0 = param_2->Index;
    local_2d8 = param_2->Name;
    local_2c0 = *(undefined4 *)&pTVar13->field_0x10;
    local_2c8 = *(undefined8 *)&pTVar13->field_0x8;
    cVar9 = (**(code **)(param_4->Registry->_padding_ + 0x130))
                      (param_4->Registry,&local_2c8,&local_2d8,1);
    if (cVar9 != '\0') {
      pTVar12 = (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                 *)`FRigVMTemplate::ResolveArgument_NoLock'::__l2::<lambda_1>::operator()
                             (&local_358,
                              (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                               *)local_a8,
                              (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                               *)local_1e8);
      if ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           *)local_1e8 != pTVar12) {
        TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                    *)local_1e8,pTVar12);
      }
      local_60 = 0;
      if ((void *)local_a8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a8._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      `FRigVMTemplate::ResolveArgument_NoLock'::__l12::<lambda_2>::operator()
                (local_375,param_3,
                 (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                  *)local_1e8,
                 (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                  *)local_198);
      bVar7 = true;
      bVar10 = true;
      if (local_198._8_4_ != local_164) {
        do {
          bVar7 = bVar10;
          uVar5 = local_370._8_8_;
          uVar20 = 0;
          iVar19 = local_370.ArrayMax;
          uVar22 = 0;
          local_370._8_8_ = (ulonglong)(uint)local_370.ArrayMax << 0x20;
          if (((longlong)uVar5 < 0) && (iVar19 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_370.AllocatorInstance,0,&local_370.ArrayMax);
          }
          uVar25 = local_1c0;
          uVar11 = uVar22;
          if (local_170 != 0) {
            puVar23 = (uint *)(local_198 + 0x10);
            if (local_178 != (uint *)0x0) {
              puVar23 = local_178;
            }
            uVar11 = *puVar23;
            uVar21 = uVar22;
            uVar15 = uVar20;
            while (uVar11 == 0) {
              lVar17 = (longlong)(int)uVar15;
              uVar21 = uVar21 + 0x20;
              uVar15 = uVar15 + 1;
              uVar11 = local_170;
              if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15
                 ) goto LAB_14a10bb0f;
              uVar11 = (puVar23 + 1)[lVar17];
            }
            uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_308.Key._4_4_ = (int)lVar17;
            uVar11 = local_308.Key._4_4_ + -1 + uVar21;
            if ((int)local_170 < (int)uVar11) {
              uVar11 = local_170;
            }
          }
LAB_14a10bb0f:
          uStack_344 = 1;
          local_320 = *(FName *)(local_198._0_8_ + (longlong)(int)uVar11 * 0x1c);
          FStack_318 = ((FName *)(local_198._0_8_ + (longlong)(int)uVar11 * 0x1c))[1];
          local_310 = *(uint *)(local_198._0_8_ + (longlong)(int)uVar11 * 0x1c + 0x10);
          local_148._0_8_ = (FScriptContainerElement *)0x0;
          local_148._8_8_ = 0;
          local_128 = (void *)0x0;
          local_120 = 0;
          local_11c = 0x80;
          local_118 = 0xffffffff;
          local_114 = 0;
          local_108 = (ForElementType<FSetElementId>)0x0;
          local_100 = 0;
          uStack_334 = uVar22;
          local_330 = uVar22;
          if (local_1c0 != 0) {
            puVar23 = (uint *)(local_1e8 + 0x10);
            if (local_1c8 != (uint *)0x0) {
              puVar23 = local_1c8;
            }
            uVar11 = *puVar23;
            local_330 = uVar20;
            uVar22 = uVar20;
            while (uVar11 == 0) {
              lVar17 = (longlong)(int)uVar22;
              local_330 = local_330 + 0x20;
              uVar22 = uVar22 + 1;
              uStack_334 = local_1c0;
              if ((int)((local_1c0 - 1) + ((int)(local_1c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar22
                 ) goto LAB_14a10bc00;
              uVar11 = (puVar23 + 1)[lVar17];
            }
            uStack_344 = -uVar11 & uVar11;
            uVar2 = (ulonglong)uStack_344 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_308.Value._0_4_ = (int)lVar17;
            uStack_334 = (int)local_308.Value + -1 + local_330;
            if ((int)local_1c0 < (int)uStack_334) {
              uStack_334 = local_1c0;
            }
          }
LAB_14a10bc00:
          local_350 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                       *)local_1e8;
          uStack_32c = local_20c;
          local_340 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10);
          uVar20 = local_1c0 & 0xffffffe0;
          iStack_328 = local_1e8._8_4_ - local_1b4;
          TStack_2a0._padding_ = CONCAT44(uStack_344,uVar22);
          uStack_338 = 0xffffffff;
          TStack_2a0.CurrentBitIndex = uStack_334;
          TStack_2a0.UnvisitedBitMask = 0xffffffff;
          iVar19 = (int)local_1c0 >> 5;
          TStack_2a0._28_4_ = local_20c;
          TStack_2a0.BaseBitIndex = local_330;
          uStack_280 = CONCAT44(uStack_324,iStack_328);
          bVar14 = (byte)local_1c0;
          uStack_348 = uVar22;
          local_2a8 = local_350;
          TStack_2a0.Array = local_340;
          if (((int)local_1c0 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          if (uVar25 != local_1c0) {
            puVar23 = (uint *)(local_1e8 + 0x10);
            if (local_1c8 != (uint *)0x0) {
              puVar23 = local_1c8;
            }
            uVar22 = -1 << (bVar14 & 0x1f) & puVar23[iVar19];
            while (uVar22 == 0) {
              lVar17 = (longlong)iVar19;
              uVar20 = uVar20 + 0x20;
              iVar19 = iVar19 + 1;
              uVar25 = local_1c0;
              if ((int)((local_1c0 - 1) + ((int)(local_1c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
              goto LAB_14a10bd21;
              uVar22 = (puVar23 + 1)[lVar17];
            }
            uVar2 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            local_308.Value._4_4_ = (int)lVar17;
            uVar25 = local_308.Value._4_4_ + -1 + uVar20;
            if ((int)local_1c0 < (int)uVar25) {
              uVar25 = local_1c0;
            }
          }
LAB_14a10bd21:
          while( true ) {
            pTVar6 = local_2a8;
            if (*(int *)&local_2a8->field_0x8 - *(int *)&local_2a8->field_0x34 != (int)uStack_280) {
              local_377 = 0;
              `TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_377);
            }
            FVar3 = local_320;
            if (((TStack_2a0.CurrentBitIndex == uVar25) &&
                (TStack_2a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10))) &&
               (pTVar6 == (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                           *)local_1e8)) break;
            lVar17 = (longlong)TStack_2a0.CurrentBitIndex * 0x1c + *(longlong *)pTVar6;
            local_2b8 = *(undefined8 *)(lVar17 + 8);
            local_2b0 = *(undefined4 *)(lVar17 + 0x10);
            cVar9 = (**(code **)(local_358->Registry->_padding_ + 0x128))
                              (local_358->Registry,&local_2b8);
            if (cVar9 == '\0') {
              local_238 = lVar17;
              local_230 = lVar17 + 8;
              TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_>
                        ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                          *)local_148,&local_2f8,(bool *)&local_238);
            }
            TStack_2a0.UnvisitedBitMask = TStack_2a0.UnvisitedBitMask & ~TStack_2a0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a0);
          }
          uVar22 = ::GetTypeHash(local_320.ComparisonIndex);
          uVar22 = uVar22 + FVar3.Number;
          if (local_148._8_4_ != local_114) {
            FVar18 = (ForElementType<FSetElementId>)local_110;
            if (local_108 != (ForElementType<FSetElementId>)0x0) {
              FVar18 = local_108;
            }
            uVar20 = *(uint *)((longlong)FVar18 + (ulonglong)(local_100 - 1U & uVar22) * 4);
            while (uVar20 != 0xffffffff) {
              pFVar16 = (FName *)(local_148._0_8_ + (longlong)(int)uVar20 * 0x1c);
              if (*pFVar16 == local_320) {
                if (pFVar16 != (FName *)0x0) goto LAB_14a10bea9;
                break;
              }
              uVar20 = pFVar16[2].Number;
            }
          }
          local_2e8 = &local_320;
          TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                    ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                      *)local_148,(uint)local_360,
                     (TKeyInitializer<FName_const_&> *)(ulonglong)uVar22,(bool *)&local_2e8);
          pFVar16 = (FName *)(local_148._0_8_ + (longlong)local_360[0] * 0x1c);
LAB_14a10bea9:
          pFVar16[1] = FStack_318;
          pFVar16[2].ComparisonIndex.Value = local_310;
          bVar10 = Resolve_NoLock(local_2e0,
                                  (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                                   *)local_148,&local_370,true,param_4);
          if (bVar10) {
            TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
            ::operator=((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                         *)local_1e8,
                        (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                         *)local_148);
            TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
            ::operator=((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                         *)local_198,
                        (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                         *)param_3);
            uVar22 = *(uint *)&param_3->field_0x28;
            puVar1 = &param_3->field_0x10;
            uStack_348 = 0;
            local_330 = 0;
            uStack_344 = 1;
            uStack_334 = 0;
            if (uVar22 != 0) {
              puVar23 = (uint *)puVar1;
              if (*(uint **)&param_3->field_0x20 != (uint *)0x0) {
                puVar23 = *(uint **)&param_3->field_0x20;
              }
              uVar20 = *puVar23;
              while (uVar20 == 0) {
                lVar17 = (longlong)(int)uStack_348;
                local_330 = local_330 + 0x20;
                uStack_348 = uStack_348 + 1;
                uStack_334 = uVar22;
                if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_348
                   ) goto LAB_14a10bf7d;
                uVar20 = puVar23[lVar17 + 1];
              }
              uStack_344 = -uVar20 & uVar20;
              uVar2 = (ulonglong)uStack_344 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              local_2f8.Key._4_4_ = (int)lVar17;
              uStack_334 = (local_330 - 1) + local_2f8.Key._4_4_;
              if ((int)uVar22 < (int)uStack_334) {
                uStack_334 = uVar22;
              }
            }
LAB_14a10bf7d:
            uVar20 = *(uint *)&param_3->field_0x28;
            uStack_32c = local_1ec;
            uVar25 = uVar20 & 0xffffffe0;
            iStack_328 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
            TStack_270._padding_ = CONCAT44(uStack_344,uStack_348);
            uStack_338 = 0xffffffff;
            TStack_270.CurrentBitIndex = uStack_334;
            TStack_270.UnvisitedBitMask = 0xffffffff;
            iVar19 = (int)uVar20 >> 5;
            TStack_270._28_4_ = local_1ec;
            TStack_270.BaseBitIndex = local_330;
            uStack_250 = CONCAT44(uStack_324,iStack_328);
            local_350 = param_3;
            local_340 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
            local_278 = param_3;
            TStack_270.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
            if ((((int)uVar20 < 0) || ((int)uVar22 < (int)uVar20)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            uVar22 = *(uint *)&param_3->field_0x28;
            if (uVar20 != uVar22) {
              puVar24 = puVar1;
              if (*(undefined1 **)&param_3->field_0x20 != (undefined1 *)0x0) {
                puVar24 = *(undefined1 **)&param_3->field_0x20;
              }
              uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar19 * 4);
              while (uVar20 == 0) {
                lVar17 = (longlong)iVar19;
                uVar25 = uVar25 + 0x20;
                iVar19 = iVar19 + 1;
                uVar20 = uVar22;
                if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
                goto LAB_14a10c090;
                uVar20 = *(uint *)(puVar24 + lVar17 * 4 + 4);
              }
              uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
              lVar17 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              local_2f8.Value._0_4_ = (int)lVar17;
              uVar20 = (int)local_2f8.Value + -1 + uVar25;
              if ((int)uVar22 < (int)uVar20) {
                uVar20 = uVar22;
              }
            }
LAB_14a10c090:
            while( true ) {
              pTVar6 = local_278;
              if (*(int *)&local_278->field_0x8 - *(int *)&local_278->field_0x34 != (int)uStack_250)
              {
                local_376 = 0;
                `TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_376);
              }
              if (((TStack_270.CurrentBitIndex == uVar20) &&
                  (TStack_270.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
                 (pTVar6 == param_3)) break;
              pFVar16 = (FName *)((longlong)TStack_270.CurrentBitIndex * 0x1c + *(longlong *)pTVar6)
              ;
              FVar3 = *pFVar16;
              uVar22 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
              if (local_1e8._8_4_ != local_1b4) {
                FVar18 = (ForElementType<FSetElementId>)local_1b0;
                if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
                  FVar18 = local_1a8;
                }
                for (iVar19 = *(int *)((longlong)FVar18 +
                                      (ulonglong)(local_1a0 - 1U & FVar3.Number + uVar22) * 4);
                    iVar19 != -1;
                    iVar19 = *(int *)(local_1e8._0_8_ + (longlong)iVar19 * 0x1c + 0x14)) {
                  if (*(FName *)(local_1e8._0_8_ + (longlong)iVar19 * 0x1c) == FVar3) {
                    TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                    ::Remove((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                              *)local_198,*pFVar16);
                    break;
                  }
                }
              }
              TStack_270.UnvisitedBitMask =
                   TStack_270.UnvisitedBitMask & ~TStack_270._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_270);
            }
            TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
            ::operator=((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                         *)param_3,
                        (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                         *)local_1e8);
          }
          else {
            TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
            ::Remove((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                      *)local_198,local_320);
            bVar7 = false;
          }
          local_100 = 0;
          if (local_108 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_108);
          }
          iVar19 = SUB84(local_148._8_8_,4);
          local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
          if (iVar19 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
          }
          local_118 = 0xffffffff;
          local_114 = 0;
          local_120 = 0;
          if (0x80 < local_11c) {
            local_11c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
          }
          if (local_128 != (void *)0x0) {
            FMemory::Free(local_128);
          }
          if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_148._0_8_);
          }
          bVar10 = bVar7;
        } while (local_198._8_4_ != local_164);
      }
      if (bVar7) {
        bVar7 = true;
        goto LAB_14a10c263;
      }
    }
  }
  bVar7 = false;
LAB_14a10c263:
  local_150 = 0;
  if (local_158 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_158);
  }
  bVar10 = local_198._12_4_ != 0;
  local_198._8_8_ = (ulonglong)(uint)local_198._12_4_ << 0x20;
  if (bVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)local_198,0,(int *)(local_198 + 0xc));
  }
  local_168 = 0xffffffff;
  local_164 = 0;
  local_170 = 0;
  if (0x80 < local_16c) {
    local_16c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10),0);
  }
  if (local_178 != (uint *)0x0) {
    FMemory::Free(local_178);
  }
  if ((FScriptContainerElement *)local_198._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._0_8_);
  }
  if (local_370.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.AllocatorInstance.Data);
  }
  local_1a0 = 0;
  if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1a8);
  }
  bVar10 = local_1e8._12_4_ != 0;
  local_1e8._8_8_ = (ulonglong)(uint)local_1e8._12_4_ << 0x20;
  if (bVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)local_1e8,0,(int *)(local_1e8 + 0xc));
  }
  local_1b4 = 0;
  local_1c0 = 0;
  local_1b8 = 0xffffffff;
  if (0x80 < local_1bc) {
    local_1bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10),0);
  }
  if (local_1c8 != (uint *)0x0) {
    FMemory::Free(local_1c8);
  }
  if ((FScriptContainerElement *)local_1e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1e8._0_8_);
  }
  return bVar7;
}

// Resolve_NoLock @ 14a10c420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRigVMTemplate::Resolve_NoLock
          (FRigVMTemplate *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          FRigVMRegistryHandle *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  *this_00;
  FRigVMTemplate *pFVar6;
  FName FVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  EArrayType EVar14;
  ulonglong uVar15;
  TTuple<FName,TRigVMTypeIndex> *pTVar16;
  TRigVMTypeIndex *pTVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  FScriptContainerElement *pFVar21;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *pTVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  FRigVMTemplateArgument *pFVar25;
  int iVar26;
  longlong lVar27;
  ulong64 uVar28;
  FRigVMTemplateArgument *pFVar29;
  uint uVar30;
  ulonglong uVar31;
  FName **ppFVar32;
  uint *puVar33;
  FScriptContainerElement *pFVar34;
  ForElementType<unsigned_int> FVar35;
  FName this_01;
  FName *pFVar36;
  undefined1 auStackY_368 [32];
  undefined1 local_316;
  undefined1 local_315;
  undefined1 local_314;
  undefined1 local_313;
  undefined1 local_312 [2];
  int local_310 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_308;
  uint local_2f8 [2];
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  *local_2f0;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> local_2e8;
  FName local_2d8;
  FRigVMTemplate *local_2d0;
  uint local_2c8;
  FName local_2c0;
  FName local_2b8;
  int local_2b0;
  uint uStack_2ac;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2a8;
  undefined4 local_2a0;
  int iStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  FName local_290;
  uint local_288;
  TRigVMTypeIndex local_280;
  undefined1 local_270 [16];
  undefined1 local_260 [8];
  undefined1 local_258 [16];
  FName local_248;
  uint local_240;
  FName local_238;
  int local_230;
  FName local_228;
  uint local_220;
  FName local_218;
  uint local_210;
  undefined8 local_208;
  uint local_200;
  FName local_1f8;
  uint local_1f0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1e8;
  undefined1 local_1e0 [8];
  TRigVMTypeIndex *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d0;
  FName *local_1b0;
  TRigVMTypeIndex *local_1a8;
  uint *local_1a0;
  undefined1 *local_198;
  uint *local_190;
  undefined1 *local_188;
  FName *local_180;
  FName *local_178;
  FName *local_170;
  TRigVMTypeIndex *local_168;
  FName *local_160;
  TRigVMTypeIndex *local_158;
  FName *local_150;
  TRigVMTypeIndex *local_148;
  FName *local_140;
  TRigVMTypeIndex *local_138;
  TRigVMTypeIndex local_130;
  TRigVMTypeIndex local_120;
  TRigVMTypeIndex local_114;
  TRigVMTypeIndex local_108;
  undefined1 local_f8 [32];
  ForElementType<unsigned_int> local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  FScriptContainerElement local_c0 [8];
  ForAnyElementType local_b8;
  uint local_b0;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_2f0 = (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
               *)param_1;
  local_2d0 = this;
  local_1e8 = param_2;
  if ((param_4->Registry != this->OwnerRegistry) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0x77d,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  local_a8.Elements._48_4_ = 0xffffffff;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::operator=(&local_a8,
              (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
               *)param_1);
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           *)param_1);
  piVar1 = &param_2->ArrayMax;
  uVar23 = (this->Permutations).ArrayNum;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  if (*piVar1 < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar23,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  local_310[0] = 0;
  if (0 < (int)uVar23) {
    do {
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_310) &&
          ((FScriptContainerElement *)local_310 < pFVar2 + (longlong)*piVar1 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      iVar12 = param_2->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar12 + 1;
      *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_310[0];
      local_310[0] = local_310[0] + 1;
    } while (local_310[0] < (int)uVar23);
  }
  this_01 = (FName)(this->Arguments).AllocatorInstance.Data;
  local_2c8 = (this->Arguments).ArrayNum;
  uVar15 = (ulonglong)(int)local_2c8;
  local_2b8 = (FName)((longlong)this_01 + uVar15 * 0x80);
  while( true ) {
    FVar7 = local_2b8;
    local_2d8 = this_01;
    if ((this->Arguments).ArrayNum != (int)uVar15) {
      local_316 = 0;
      `TCheckedPointerIterator<FRigVMTemplateArgument_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_316);
    }
    if (this_01 == FVar7) break;
    pTVar16 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              ::Find(&local_a8,*(FName *)((longlong)this_01 + 4));
    pFVar36 = (FName *)&pTVar16->field_0x8;
    if (pTVar16 == (TTuple<FName,TRigVMTypeIndex> *)0x0) {
      pFVar36 = (FName *)0x0;
    }
    if (*(char *)((longlong)this_01 + 0x20) == '\0') {
      iVar13 = FRigVMTemplateArgument::GetNumTypes_NoLock((FRigVMTemplateArgument *)this_01,param_4)
      ;
      FRigVMTemplateArgument::GetTypeIndex_NoLock
                ((FRigVMTemplateArgument *)this_01,&local_130,0,param_4);
      iVar12 = local_130.Index;
      iVar26 = 1;
      lVar27 = 1;
      if (1 < (longlong)iVar13) {
        do {
          pTVar17 = FRigVMTemplateArgument::GetTypeIndex_NoLock
                              ((FRigVMTemplateArgument *)local_2d8,&local_120,iVar26,param_4);
          this_01 = local_2d8;
          if (pTVar17->Index != iVar12) goto LAB_14a10c79b;
          iVar26 = iVar26 + 1;
          lVar27 = lVar27 + 1;
        } while (lVar27 < iVar13);
      }
      FRigVMTemplateArgument::GetTypeIndex_NoLock
                ((FRigVMTemplateArgument *)this_01,&local_280,0,param_4);
      if (pFVar36 != (FName *)0x0) {
        local_240 = pFVar36[1].ComparisonIndex.Value;
        local_248 = *pFVar36;
        cVar10 = (**(code **)(param_4->Registry->_padding_ + 0x128))(param_4->Registry,&local_248);
        if (cVar10 == '\0') {
          local_230 = local_280.Index;
          local_220 = pFVar36[1].ComparisonIndex.Value;
          local_238 = local_280.Name;
          local_228 = *pFVar36;
          cVar10 = (**(code **)(param_4->Registry->_padding_ + 0x130))
                             (param_4->Registry,&local_228,&local_238,param_3);
          if (cVar10 == '\0') {
            param_2->ArrayNum = 0;
            if (param_2->ArrayMax < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
            }
            bVar8 = false;
            goto LAB_14a10d209;
          }
        }
      }
      local_1b0 = (FName *)((longlong)this_01 + 4);
      local_1a8 = &local_280;
      ppFVar32 = &local_1b0;
      pTVar22 = (TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)local_270;
LAB_14a10cfbd:
      param_1 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                 *)local_2f0;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_>
                (local_2f0,pTVar22,(bool *)ppFVar32);
LAB_14a10cfcd:
      this_01 = (FName)((longlong)this_01 + 0x80);
      uVar15 = (ulonglong)local_2c8;
      this = local_2d0;
    }
    else {
LAB_14a10c79b:
      if (pFVar36 == (FName *)0x0) {
LAB_14a10ce84:
        EVar14 = FRigVMTemplateArgument::GetArrayType_NoLock
                           ((FRigVMTemplateArgument *)this_01,param_4);
        param_1 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                   *)local_2f0;
        lVar27 = (longlong)this_01 + 4;
        if (EVar14 != EArrayType_Mixed) {
          if (EVar14 == EArrayType_ArrayValue) {
            local_158 = &RigVMTypeUtils::TypeIndex::WildCardArray;
            ppFVar32 = &local_160;
            pTVar22 = (TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)(local_258 + 4);
            local_160 = (FName *)lVar27;
          }
          else {
            local_148 = &RigVMTypeUtils::TypeIndex::WildCard;
            ppFVar32 = &local_150;
            pTVar22 = (TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)(local_1e0 + 4);
            local_150 = (FName *)lVar27;
          }
          goto LAB_14a10cfbd;
        }
        local_168 = &RigVMTypeUtils::TypeIndex::WildCard;
        local_170 = (FName *)lVar27;
        TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_>
                  (local_2f0,(TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)local_258,
                   (bool *)&local_170);
        if (pFVar36 == (FName *)0x0) goto LAB_14a10cfcd;
        local_1f0 = pFVar36[1].ComparisonIndex.Value;
        local_1f8 = *pFVar36;
        cVar10 = (**(code **)(param_4->Registry->_padding_ + 0x108))(param_4->Registry,&local_1f8);
        iVar12 = RigVMTypeUtils::TypeIndex::WildCardArray.Index;
        if (cVar10 == '\0') goto LAB_14a10cfcd;
        local_2c0 = RigVMTypeUtils::TypeIndex::WildCardArray.Name;
        pTVar16 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  ::Find(local_2f0,*(FName *)lVar27);
        if ((pTVar16 == (TTuple<FName,TRigVMTypeIndex> *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        this_01 = (FName)((longlong)this_01 + 0x80);
        uVar15 = (ulonglong)local_2c8;
        *(uint *)&pTVar16->field_0x8 = local_2c0.ComparisonIndex.Value;
        *(uint *)&pTVar16->field_0xc = local_2c0.Number;
        *(int *)&pTVar16->field_0x10 = iVar12;
        this = local_2d0;
        param_1 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                   *)local_2f0;
      }
      else {
        local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2e8.ArrayNum = 0;
        local_2e8.ArrayMax = 0;
        FRigVMTemplateArgument::GetAllTypes_NoLock
                  ((FRigVMTemplateArgument *)this_01,&local_2e8,param_4);
        iVar12 = local_2e8.ArrayNum;
        uVar28 = (ulong64)local_2e8.ArrayNum;
        local_290 = *pFVar36;
        bVar8 = false;
        local_288 = pFVar36[1].ComparisonIndex.Value;
        bVar4 = false;
        local_f8._0_8_ = (FScriptContainerElement *)0x0;
        local_f8._8_8_ = 0;
        local_d8 = (ForElementType<unsigned_int>)0x0;
        local_d0 = 0;
        local_cc = 0x80;
        local_c8 = -1;
        local_c4 = 0;
        local_b8.Data = (FScriptContainerElement *)0x0;
        local_b0 = 0;
        if (local_2e8.ArrayNum != 0) {
          if (local_2e8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum(uVar28);
          }
          TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_f8,local_2e8.ArrayNum);
          if ((uint)iVar12 < 4) {
            uVar23 = 1;
          }
          else {
            uVar15 = (ulonglong)(((uint)iVar12 >> 1) + 7) * 2 + 1;
            lVar27 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar27 == 0; lVar27 = lVar27 + -1) {
              }
            }
            local_270._4_4_ = (undefined4)lVar27;
            uVar23 = 1 << ((byte)lVar27 & 0x1f);
          }
          if ((local_b0 == 0) || ((int)local_b0 < (int)uVar23)) {
            local_b0 = uVar23;
            if (local_b8.Data != (FScriptContainerElement *)0x0) {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,0,4);
            }
            if (uVar23 != 0) {
              uVar30 = uVar23;
              if (uVar23 < 2) {
                if (local_b8.Data != (FScriptContainerElement *)0x0) {
                  uVar30 = 0;
                  goto LAB_14a10c8bf;
                }
              }
              else {
LAB_14a10c8bf:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_b8,0,uVar30,4);
              }
              if (0 < (int)uVar23) {
                uVar31 = (ulonglong)uVar23;
                uVar15 = 0;
                do {
                  FVar20.Data = local_c0;
                  if (local_b8.Data != (FScriptContainerElement *)0x0) {
                    FVar20.Data = local_b8.Data;
                  }
                  uVar18 = uVar15 & (longlong)(int)uVar23 - 1U;
                  uVar15 = uVar15 + 1;
                  *(undefined4 *)(FVar20.Data + uVar18 * 4) = 0xffffffff;
                  uVar31 = uVar31 - 1;
                } while (uVar31 != 0);
              }
            }
            if (local_b0 != 0) {
              pTStack_2a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
              local_2b0 = 0;
              uStack_2ac = 1;
              iStack_29c = 0;
              iStack_298 = 0;
              if (local_d0 != 0) {
                FVar35 = (ForElementType<unsigned_int>)((longlong)local_f8 + 0x10);
                if (local_d8 != (ForElementType<unsigned_int>)0x0) {
                  FVar35 = local_d8;
                }
                uVar23 = *(uint *)FVar35;
                while (uVar23 == 0) {
                  iStack_298 = iStack_298 + 0x20;
                  lVar27 = (longlong)local_2b0;
                  local_2b0 = local_2b0 + 1;
                  if ((int)(local_d0 + -1 + (local_d0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2b0)
                  goto LAB_14a10c9dd;
                  uVar23 = ((uint *)((longlong)FVar35 + 4))[lVar27];
                }
                uStack_2ac = -uVar23 & uVar23;
                uVar15 = (ulonglong)uStack_2ac * 2 + 1;
                lVar27 = 0x3f;
                if (uVar15 != 0) {
                  for (; uVar15 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                  }
                }
                local_270._8_4_ = (undefined4)lVar27;
                iStack_29c = iStack_298 + -1 + local_270._8_4_;
                if (local_d0 < iStack_29c) {
LAB_14a10c9dd:
                  iStack_29c = local_d0;
                }
              }
              local_2a0 = 0xffffffff;
              local_1d8 = (TRigVMTypeIndex *)local_f8;
              local_1d0._padding_ = CONCAT44(uStack_2ac,local_2b0);
              local_1d0.CurrentBitIndex = iStack_29c;
              local_1d0.UnvisitedBitMask = 0xffffffff;
              local_1d0._28_4_ = uStack_294;
              local_1d0.BaseBitIndex = iStack_298;
              local_1d0.Array = pTStack_2a8;
              iVar12 = iStack_29c;
              if (iStack_29c < local_d0) {
                do {
                  puVar33 = (uint *)((longlong)iVar12 * 0x10 + (longlong)local_1d8->Name);
                  uVar23 = local_b0 - 1 & *puVar33;
                  puVar33[3] = uVar23;
                  FVar20.Data = local_c0;
                  if (local_b8.Data != (FScriptContainerElement *)0x0) {
                    FVar20.Data = local_b8.Data;
                  }
                  uVar15 = (longlong)(int)local_b0 - 1U & (longlong)(int)uVar23;
                  puVar33[2] = *(uint *)(FVar20.Data + uVar15 * 4);
                  *(int *)(FVar20.Data + uVar15 * 4) = iVar12;
                  local_1d0.UnvisitedBitMask =
                       local_1d0.UnvisitedBitMask & ~local_1d0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1d0);
                  iVar12 = local_1d0.CurrentBitIndex;
                } while (local_1d0.CurrentBitIndex < (local_1d0.Array)->NumBits);
              }
            }
          }
          uVar28 = local_2e8._8_8_ & 0xffffffff;
        }
        local_2f8[0] = 0;
        if (0 < (int)uVar28) {
          do {
            uVar23 = local_2f8[0];
            uVar30 = 0;
            if ((int)local_2f8[0] < (int)uVar28) {
              uVar30 = ~local_2f8[0] >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar3 = (code *)swi(3);
              uVar9 = (*pcVar3)();
              return (bool)uVar9;
            }
            local_2c0 = *(FName *)(local_2e8.AllocatorInstance.Data + (longlong)(int)uVar23 * 0xc);
            local_210 = pFVar36[1].ComparisonIndex.Value;
            uVar30 = *(uint *)(local_2e8.AllocatorInstance.Data + (longlong)(int)uVar23 * 0xc + 8);
            local_218 = *pFVar36;
            local_208 = *(undefined8 *)
                         (local_2e8.AllocatorInstance.Data + (longlong)(int)uVar23 * 0xc);
            local_200 = uVar30;
            cVar10 = (**(code **)(param_4->Registry->_padding_ + 0x130))
                               (param_4->Registry,&local_208,&local_218,param_3);
            if (cVar10 == '\0') {
              local_198 = &local_315;
              local_315 = 0;
              local_1a0 = local_2f8;
              TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,bool_&&>_>
                        ((TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>
                          *)local_f8,(TPairInitializer<int_const_&,bool_&&> *)(local_270 + 0xc),
                         (bool *)&local_1a0);
            }
            else {
              local_188 = &local_314;
              local_314 = 1;
              local_190 = local_2f8;
              TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,bool_&&>_>
                        ((TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>
                          *)local_f8,(TPairInitializer<int_const_&,bool_&&> *)local_260,
                         (bool *)&local_190);
              bVar4 = true;
              if (!bVar8) {
                if (uVar30 == pFVar36[1].ComparisonIndex.Value) {
                  bVar8 = true;
                }
                local_290 = local_2c0;
                local_288 = uVar30;
              }
            }
            uVar28 = local_2e8._8_8_ & 0xffffffff;
            local_2f8[0] = local_2f8[0] + 1;
            param_2 = local_1e8;
            this_01 = local_2d8;
          } while ((int)local_2f8[0] < local_2e8.ArrayNum);
        }
        FVar20.Data = (FScriptContainerElement *)0x0;
        pFVar24 = (param_2->AllocatorInstance).Data;
        local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_308.ArrayNum = 0;
        local_308.ArrayMax = 0;
        pFVar2 = pFVar24 + (longlong)param_2->ArrayNum * 4;
        pFVar34 = FVar20.Data;
        FVar5.Data = local_308.AllocatorInstance.Data;
        for (; iVar12 = (int)pFVar34, local_308.AllocatorInstance.Data = FVar5.Data,
            pFVar24 != pFVar2; pFVar24 = pFVar24 + 4) {
          if (local_f8._8_4_ != local_c4) {
            pFVar19 = local_c0;
            if (local_b8.Data != (FScriptContainerElement *)0x0) {
              pFVar19 = local_b8.Data;
            }
            uVar23 = *(uint *)(pFVar19 + (ulonglong)(local_b0 - 1 & *(uint *)pFVar24) * 4);
            while (uVar23 != 0xffffffff) {
              pFVar19 = (FScriptContainerElement *)(local_f8._0_8_ + (longlong)(int)uVar23 * 0x10);
              if (*(uint *)pFVar19 == *(uint *)pFVar24) {
                pFVar21 = pFVar19 + 4;
                if (pFVar19 == (FScriptContainerElement *)0x0) {
                  pFVar21 = (FScriptContainerElement *)0x0;
                }
                if ((pFVar21 != (FScriptContainerElement *)0x0) &&
                   (*pFVar21 != (FScriptContainerElement)0x0)) {
                  if ((FVar20.Data <= pFVar24) &&
                     (pFVar24 < FVar20.Data + (longlong)local_308.ArrayMax * 4)) {
                    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar8) {
                      pcVar3 = (code *)swi(3);
                      uVar9 = (*pcVar3)();
                      return (bool)uVar9;
                    }
                    FVar20.Data = local_308.AllocatorInstance.Data;
                    iVar12 = local_308.ArrayNum;
                  }
                  if (iVar12 == local_308.ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_308.AllocatorInstance,&local_308.ArrayMax);
                    FVar20.Data = local_308.AllocatorInstance.Data;
                  }
                  local_308.ArrayNum = iVar12 + 1U;
                  *(uint *)(FVar20.Data + (longlong)iVar12 * 4) = *(uint *)pFVar24;
                  pFVar34 = (FScriptContainerElement *)(ulonglong)(iVar12 + 1U);
                  FVar20.Data = local_308.AllocatorInstance.Data;
                }
                break;
              }
              uVar23 = *(uint *)(pFVar19 + 8);
            }
          }
          FVar5.Data = local_308.AllocatorInstance.Data;
        }
        if (param_2 != &local_308) {
          pFVar2 = (param_2->AllocatorInstance).Data;
          local_308.AllocatorInstance.Data = FVar20.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            local_308.AllocatorInstance.Data = FVar5.Data;
            FMemory::Free(pFVar2);
            iVar12 = local_308.ArrayNum;
          }
          FVar20.Data = (FScriptContainerElement *)0x0;
          (param_2->AllocatorInstance).Data = local_308.AllocatorInstance.Data;
          param_2->ArrayNum = iVar12;
          param_2->ArrayMax = local_308.ArrayMax;
          local_308.ArrayNum = 0;
          local_308.ArrayMax = 0;
          local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (FVar20.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar20.Data);
        }
        param_1 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                   *)local_2f0;
        if (!bVar4) {
          local_b0 = 0;
          if (local_b8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data);
          }
          TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_f8);
          if (local_2e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.AllocatorInstance.Data);
          }
          goto LAB_14a10ce84;
        }
        local_178 = &local_290;
        local_180 = (FName *)((longlong)this_01 + 4);
        TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_>
                  (local_2f0,
                   (TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)(local_260 + 4),
                   (bool *)&local_180);
        local_b0 = 0;
        if (local_b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data);
        }
        TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_f8);
        if (local_2e8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14a10cfcd;
        FMemory::Free(local_2e8.AllocatorInstance.Data);
        uVar15 = (ulonglong)local_2c8;
        this_01 = (FName)((longlong)this_01 + 0x80);
        this = local_2d0;
      }
    }
  }
  if (param_2->ArrayNum == 1) {
    TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
             *)param_1);
    pFVar6 = local_2d0;
    this_00 = local_2f0;
    pFVar25 = (FRigVMTemplateArgument *)(this->Arguments).AllocatorInstance.Data;
    iVar12 = (this->Arguments).ArrayNum;
    pFVar29 = pFVar25 + iVar12;
    while( true ) {
      if ((pFVar6->Arguments).ArrayNum != iVar12) {
        local_313 = 0;
        `TCheckedPointerIterator<FRigVMTemplateArgument_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_313);
      }
      if (pFVar25 == pFVar29) break;
      if ((param_2->ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      local_140 = &pFVar25->Name;
      local_138 = FRigVMTemplateArgument::GetTypeIndex_NoLock
                            (pFVar25,&local_114,*(int *)(param_2->AllocatorInstance).Data,param_4);
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TRigVMTypeIndex_&&>_>
                (this_00,(TPairInitializer<FName_const_&,TRigVMTypeIndex_&&> *)local_1e0,
                 (bool *)&local_140);
      pFVar25 = pFVar25 + 1;
    }
  }
  else if (1 < param_2->ArrayNum) {
    iVar12 = (this->Arguments).ArrayNum;
    pFVar25 = (FRigVMTemplateArgument *)(this->Arguments).AllocatorInstance.Data;
    pFVar29 = pFVar25 + iVar12;
    while( true ) {
      if ((this->Arguments).ArrayNum != iVar12) {
        local_312[0] = 0;
        `TCheckedPointerIterator<FRigVMTemplateArgument_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_312);
      }
      if (pFVar25 == pFVar29) break;
      bVar8 = FRigVMTemplateArgument::IsSingleton_NoLock(pFVar25,param_2,param_4);
      if (bVar8) {
        if ((param_2->ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        pTVar17 = FRigVMTemplateArgument::GetTypeIndex_NoLock
                            (pFVar25,&local_108,*(int *)(param_2->AllocatorInstance).Data,param_4);
        local_2b8 = pTVar17->Name;
        iVar13 = pTVar17->Index;
        pTVar16 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                          *)param_1,pFVar25->Name);
        if ((pTVar16 == (TTuple<FName,TRigVMTypeIndex> *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        *(uint *)&pTVar16->field_0x8 = local_2b8.ComparisonIndex.Value;
        *(uint *)&pTVar16->field_0xc = local_2b8.Number;
        *(int *)&pTVar16->field_0x10 = iVar13;
        this = local_2d0;
        param_1 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                   *)local_2f0;
      }
      pFVar25 = pFVar25 + 1;
    }
  }
  bVar8 = param_2->ArrayNum != 0;
LAB_14a10d209:
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  return bVar8;
}

// SupportsExecuteContextStruct @ 14a111bd0

bool __thiscall
FRigVMTemplate::SupportsExecuteContextStruct(FRigVMTemplate *this,UScriptStruct *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  atomic<unsigned_int> aVar9;
  UScriptStruct *pUVar10;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  local_28.Registry = (FRigVMRegistry_NoLock *)FRigVMRegistry_RWLock::Get();
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = ((FRigVMRegistry_RWLock *)local_28.Registry)->WriteLockOwnerThread;
  local_18 = (FRigVMRegistry_RWLock *)local_28.Registry;
  aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar9) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if ((FRigVMRegistry_RWLock *)local_28.Registry != (FRigVMRegistry_RWLock *)this->OwnerRegistry) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x69d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pUVar10 = GetExecuteContextStruct_NoLock(this,&local_28);
  if (pUVar10 != (UScriptStruct *)0x0) {
    iVar4 = (int)pUVar10->_padding_;
    if ((iVar4 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar4 * 8) ==
        &pUVar10->_padding_)) {
      bVar6 = true;
      goto LAB_14a111ce8;
    }
  }
  bVar6 = false;
LAB_14a111ce8:
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if ((int)aVar2 + -1 < 0) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538070>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x26a,"CurrentLockCount >= 0");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar9 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar9) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return bVar6;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if (aVar2 != (atomic<int>)0x1) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return bVar6;
}

// SupportsExecuteContextStruct_NoLock @ 14a111ea0

bool __thiscall
FRigVMTemplate::SupportsExecuteContextStruct_NoLock
          (FRigVMTemplate *this,UScriptStruct *param_1,FRigVMRegistryHandle *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UScriptStruct *pUVar5;
  
  if (param_2->Registry != this->OwnerRegistry) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0x69d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar5 = GetExecuteContextStruct_NoLock(this,param_2);
  if (pUVar5 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) == &pUVar5->_padding_
       )) {
      return true;
    }
  }
  return false;
}

// UpdateAllArgumentTypesSlow @ 14a1140e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRigVMTemplate::UpdateAllArgumentTypesSlow(FRigVMTemplate *this,FRigVMRegistryHandle *param_1)

{
  TDelegate<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  code cVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  code **ppcVar9;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  FRigVMTemplateArgument *pFVar16;
  FRigVMRegistryHandle *pFVar17;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [8];
  ulonglong local_130;
  FRigVMRegistryHandle *local_128;
  TArray<int,TSizedDefaultAllocator<32>_> local_120;
  longlong local_110;
  FReadAccessScope local_108;
  FReadAccessScope local_f0;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  local_a8;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar6 = false;
  local_130 = local_130 & 0xffffffff00000000;
  local_128 = param_1;
  if ((param_1->Registry != this->OwnerRegistry) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                         ,0x929,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pFVar1 = (this->Arguments).AllocatorInstance.Data;
  pFVar12 = pFVar1;
  while( true ) {
    if (pFVar12 == pFVar1 + (longlong)(this->Arguments).ArrayNum * 0x80) {
      return true;
    }
    if (pFVar12[0x20] != (FScriptContainerElement)0x0) break;
    pFVar12 = pFVar12 + 0x80;
  }
  lVar13 = (longlong)pFVar12 - (longlong)pFVar1 >> 7;
  if ((int)lVar13 == -1) {
    return true;
  }
  uVar15 = 0;
  this->Hash = 0xffffffff;
  pFVar17 = param_1;
  if (0 < (this->Arguments).ArrayNum) {
    lVar14 = 0;
    local_110 = lVar13;
    do {
      uVar11 = 0;
      if ((int)uVar15 < (this->Arguments).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar16 = (FRigVMTemplateArgument *)((this->Arguments).AllocatorInstance.Data + lVar14);
      if (pFVar16->bUseCategories == false) {
        local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.ArrayNum = 0;
        local_120.ArrayMax = 0;
        bVar6 = true;
        bVar4 = FRigVMTemplateArgument::IsSingleton_NoLock(pFVar16,&local_120,param_1);
        if (bVar4) goto LAB_14a11425a;
        bVar4 = false;
      }
      else {
LAB_14a11425a:
        bVar4 = true;
      }
      if ((bVar6) &&
         (bVar6 = false, local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_120.AllocatorInstance.Data);
      }
      if (!bVar4) {
        (pFVar16->TypeIndices).ArrayNum = 0;
        if ((pFVar16->TypeIndices).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,&(pFVar16->TypeIndices).AllocatorInstance,0,
                     &(pFVar16->TypeIndices).ArrayMax);
        }
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x80;
      lVar13 = local_110;
      pFVar17 = local_128;
    } while ((int)uVar15 < (this->Arguments).ArrayNum);
  }
  uVar11 = (uint)lVar13;
  uVar15 = 0;
  if ((int)uVar11 < (this->Arguments).ArrayNum) {
    uVar15 = ~uVar11 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  this_00 = &(this->Delegates).GetDispatchFactoryDelegate;
  pFVar16 = (FRigVMTemplateArgument *)
            ((this->Arguments).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x80);
  local_58 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)0x0;
  local_50 = 0;
  local_4c = 1;
  local_138[0] = (code)0x1;
  local_130 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_108);
  if (((*(int *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x10 == 0) ||
      (plVar8 = *(longlong **)&(this->Delegates).GetDispatchFactoryDelegate.field_0x8,
      plVar8 == (longlong *)0x0)) || (cVar7 = (**(code **)(*plVar8 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_108);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_108);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_f0);
    if (*(int *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x10 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)&(this->Delegates).GetDispatchFactoryDelegate.field_0x8;
    }
    lVar13 = (**(code **)(*plVar8 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f0);
    local_130 = lVar13;
    if ((lVar13 == 0) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5992154289080895822>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                           ,0x94e,"Factory"), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  local_d8[0] = (code *)0x0;
  local_b0 = FMemory::Malloc(0x38,8);
  *local_b0 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FRigVMTemplate::UpdateAllArgumentTypesSlow'::`2'::<lambda_2>,0,1>
                       ::_vftable_;
  local_b0[1] = (code *)this;
  local_b0[2] = (code *)pFVar16;
  local_b0[3] = (code *)pFVar17;
  local_b0[4] = (code *)&local_130;
  local_b0[5] = (code *)&local_a8;
  local_b0[6] = (code *)local_138;
  if (local_b0 + 1 != (code **)0x0) {
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRigVMTemplate::UpdateAllArgumentTypesSlow'::__l2::<lambda_2>,bool,TRigVMTypeIndex>
                  ::Call;
  }
  FRigVMTemplateArgument::ForEachType
            (pFVar16,(TFunction<bool___cdecl(TRigVMTypeIndex)> *)local_d8,pFVar17);
  if (local_d8[0] != (code *)0x0) {
    ppcVar9 = local_d8 + 2;
    if (local_b0 != (code **)0x0) {
      ppcVar9 = local_b0;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  cVar3 = local_138[0];
  pTVar10 = &local_a8;
  if (local_58 !=
      (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
       *)0x0) {
    pTVar10 = local_58;
  }
  DestructItems<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,int>
            (pTVar10,local_50);
  if (local_58 !=
      (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
       *)0x0) {
    FMemory::Free(local_58);
  }
  return (bool)cVar3;
}

// UpdateArgumentTypes_Impl @ 14a1144e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRigVMTemplate::UpdateArgumentTypes_Impl
          (FRigVMTemplate *this,FRigVMTemplateArgument *param_1,TRigVMTypeIndex *param_2,
          FRigVMRegistryHandle *param_3,FRigVMDispatchFactory *param_4,
          TArray<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  FVar11;
  TTuple<FName,TRigVMTypeIndex> *pTVar12;
  uint uVar13;
  longlong *plVar14;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  FRigVMTemplateArgument *this_01;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  ForElementType<unsigned_int> FVar21;
  uint uVar22;
  FRigVMRegistryHandle *pFVar23;
  FName FVar24;
  undefined1 auStackY_238 [32];
  undefined1 local_1e8;
  undefined1 local_1e7 [3];
  undefined4 local_1e4;
  int *local_1e0;
  uint local_1d8 [2];
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  local_1d0;
  FName local_1c8;
  int local_1b8;
  int local_1b4;
  FRigVMRegistryHandle *local_1b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1a8;
  int local_198;
  int local_194;
  TPairInitializer<unsigned_int_const_&,int_&&> local_190;
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  local_180;
  FName local_178;
  int local_170;
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  local_168;
  int iStack_160;
  uint uStack_15c;
  ForElementType<unsigned_int> local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int local_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  uint *local_108;
  int *local_100;
  FReadAccessScope local_f8;
  FReadAccessScope local_e0 [2];
  undefined4 local_ac;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar10 = false;
  local_1e0 = &param_5->ArrayNum;
  local_1b4 = 0;
  piVar1 = &param_5->ArrayMax;
  FVar4 = (param_5->AllocatorInstance).SecondaryData;
  local_1d0 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
               )param_1;
  local_1b0 = param_3;
  local_190.Value = &this->Index;
  if (*piVar1 < 0) {
    FVar11 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
              )param_5;
    if (FVar4 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                  )0x0) {
      FVar11 = FVar4;
    }
    DestructItems<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,int>
              ((TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)FVar11,*local_1e0);
    *local_1e0 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>_>
                (0x50,8,0,&param_5->AllocatorInstance,0,piVar1);
    }
  }
  else {
    FVar11 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
              )param_5;
    if (FVar4 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                  )0x0) {
      FVar11 = FVar4;
    }
    DestructItems<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,int>
              ((TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)FVar11,*local_1e0);
    *local_1e0 = 0;
  }
  if (param_4 == (FRigVMDispatchFactory *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Delegates,&local_f8)
    ;
    puVar2 = &(this->Delegates).NewArgumentTypeDelegate.field_0x8;
    if (((*(int *)&(this->Delegates).NewArgumentTypeDelegate.field_0x10 == 0) ||
        (plVar14 = *(longlong **)puVar2, plVar14 == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(*plVar14 + 0x38))(), cVar7 == '\0')) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f8);
    if (bVar8) {
      local_1c8 = param_2->Name;
      iVar17 = param_2->Index;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Delegates,local_e0
                );
      if (*(int *)&(this->Delegates).NewArgumentTypeDelegate.field_0x10 == 0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = *(longlong **)puVar2;
      }
      local_178 = local_1c8;
      local_170 = iVar17;
      (**(code **)(*plVar14 + 0x60))
                (local_1c8.ComparisonIndex.Value.Value,&local_a8,(FName *)((longlong)local_1d0 + 4),
                 &local_178);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_e0);
      FVar4 = (param_5->AllocatorInstance).SecondaryData;
      FVar11 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                )param_5;
      if (FVar4 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                    )0x0) {
        FVar11 = FVar4;
      }
      if ((ulonglong)FVar11 <= &local_a8) {
        FVar11 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                  )param_5;
        if (FVar4 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                      )0x0) {
          FVar11 = FVar4;
        }
        if ((&local_a8 <
             (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              *)((longlong)*piVar1 * 0x50 + (longlong)FVar11)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      iVar17 = *local_1e0;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>_>
                           (0x850,&param_5->AllocatorInstance,piVar1);
      }
      *local_1e0 = iVar17 + 1;
      FVar4 = (param_5->AllocatorInstance).SecondaryData;
      FVar11 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                )param_5;
      if (FVar4 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                    )0x0) {
        FVar11 = FVar4;
      }
      this_00 = (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                 *)((longlong)iVar17 * 0x50 + (longlong)FVar11);
      *(undefined8 *)&this_00->Elements = 0;
      *(undefined8 *)&(this_00->Elements).field_0x8 = 0;
      *(undefined8 *)&(this_00->Elements).field_0x20 = 0;
      *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
      *(undefined4 *)&(this_00->Elements).field_0x2c = 0x80;
      *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
      (this_00->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
      this_00->HashSize = 0;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::operator=(this_00,&local_a8);
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
    }
  }
  else {
    (**(code **)(param_4->_padding_ + 0x40))(param_4,&param_1->Name,param_2,param_5);
  }
  local_1b8 = *local_1e0;
  if (local_1b8 == 0) {
LAB_14a114d42:
    bVar10 = false;
  }
  else {
    FVar4 = (param_5->AllocatorInstance).SecondaryData;
    if (FVar4 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                  )0x0) {
      param_5 = (TArray<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar4;
    }
    FVar24 = (FName)((longlong)param_5 + 0x10);
    local_180 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                 )((longlong)local_1b8 * 0x50 + (longlong)param_5);
    while( true ) {
      FVar4 = local_180;
      local_1d0 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                   )param_5;
      local_1c8 = FVar24;
      if (*local_1e0 != local_1b8) {
        local_1e8 = 0;
        `TCheckedPointerIterator<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_1e8);
      }
      if ((ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
           )param_5 == FVar4) break;
      iStack_140 = *(int *)((longlong)FVar24 + -8) - *(uint *)((longlong)FVar24 + 0x24);
      if (iStack_140 != (this->Arguments).ArrayNum) goto LAB_14a114d42;
      uVar18 = *(int *)((longlong)FVar24 + 0x18);
      iStack_160 = 0;
      local_148 = 0;
      uStack_15c = 1;
      uStack_14c = 0;
      if (uVar18 != 0) {
        FVar21 = (ForElementType<unsigned_int>)FVar24;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar24 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar21 = *(ForElementType<unsigned_int> *)((longlong)FVar24 + 0x10);
        }
        uVar22 = *(uint *)FVar21;
        while (uVar22 == 0) {
          lVar15 = (longlong)iStack_160;
          local_148 = local_148 + 0x20;
          iStack_160 = iStack_160 + 1;
          uStack_14c = uVar18;
          if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
          goto LAB_14a1148ac;
          uVar22 = *(uint *)((uchar *)((longlong)FVar21 + 4) + lVar15 * 4);
        }
        uStack_15c = -uVar22 & uVar22;
        uVar3 = (ulonglong)uStack_15c * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_198 = (int)lVar15;
        uStack_14c = local_148 + -1 + local_198;
        if ((int)uVar18 < (int)uStack_14c) {
          uStack_14c = uVar18;
        }
      }
LAB_14a1148ac:
      uVar22 = uVar18 & 0xffffffe0;
      TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
      uStack_150 = 0xffffffff;
      TStack_130.CurrentBitIndex = uStack_14c;
      TStack_130.UnvisitedBitMask = 0xffffffff;
      uStack_144 = local_ac;
      TStack_130._28_4_ = local_ac;
      TStack_130.BaseBitIndex = local_148;
      uStack_110 = CONCAT44(uStack_13c,iStack_140);
      iVar17 = (int)uVar18 >> 5;
      local_168 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                   )param_5;
      local_158 = (ForElementType<unsigned_int>)FVar24;
      local_138 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                   )param_5;
      TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar24;
      if (((int)uVar18 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      pFVar23 = local_1b0;
      FVar4 = local_1d0;
      uVar13 = *(uint *)((longlong)FVar24 + 0x18);
      if (uVar18 != uVar13) {
        FVar21 = (ForElementType<unsigned_int>)FVar24;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar24 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar21 = *(ForElementType<unsigned_int> *)((longlong)FVar24 + 0x10);
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)((longlong)FVar21 + (longlong)iVar17 * 4);
        while (uVar18 == 0) {
          lVar15 = (longlong)iVar17;
          uVar22 = uVar22 + 0x20;
          iVar17 = iVar17 + 1;
          uVar18 = uVar13;
          if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_14a1149b0;
          uVar18 = *(uint *)((uchar *)((longlong)FVar21 + 4) + lVar15 * 4);
        }
        uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_194 = (int)lVar15;
        uVar18 = local_194 + -1 + uVar22;
        if ((int)uVar13 < (int)uVar18) {
          uVar18 = uVar13;
        }
      }
LAB_14a1149b0:
      while( true ) {
        FVar11 = local_138;
        if (*(int *)((longlong)local_138 + 8) - *(int *)((longlong)local_138 + 0x34) !=
            (int)uStack_110) {
          local_1e7[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e7);
        }
        this = (FRigVMTemplate *)local_190.Value;
        if (((TStack_130.CurrentBitIndex == uVar18) && ((FName)TStack_130.Array == FVar24)) &&
           (FVar11 == FVar4)) break;
        (**(code **)(pFVar23->Registry->_padding_ + 0x118))
                  (pFVar23->Registry,
                   (longlong)TStack_130.CurrentBitIndex * 0x1c + *(longlong *)FVar11 + 8);
        TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
      }
      bVar8 = ContainsPermutation_NoLock
                        ((FRigVMTemplate *)local_190.Value,
                         (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                          *)FVar4,pFVar23);
      if (bVar8) break;
      uVar18 = 0;
      local_1d8[0] = 0;
      if (0 < ((TArray<FRigVMTemplateArgument,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x10)
              )->ArrayNum) {
        lVar15 = 0;
        do {
          uVar22 = 0;
          if ((int)uVar18 <
              ((TArray<FRigVMTemplateArgument,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x10)
              )->ArrayNum) {
            uVar22 = ~uVar18 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          this_01 = (FRigVMTemplateArgument *)
                    ((((TArray<FRigVMTemplateArgument,TSizedDefaultAllocator<32>_> *)
                      ((longlong)this + 0x10))->AllocatorInstance).Data + lVar15);
          pTVar12 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                            *)local_1d0,this_01->Name);
          pFVar19 = (FScriptContainerElement *)&pTVar12->field_0x8;
          if (pTVar12 == (TTuple<FName,TRigVMTypeIndex> *)0x0) {
            pFVar19 = (FScriptContainerElement *)0x0;
          }
          if ((pFVar19 == (FScriptContainerElement *)0x0) ||
             (uVar22 = *(uint *)(pFVar19 + 8), uVar22 == 0xffffffff)) goto LAB_14a114d42;
          uVar16 = local_1d8[0] - uVar22 ^ uVar22 >> 0xd;
          uVar13 = (-0x61c88647 - uVar16) - uVar22 ^ uVar16 << 8;
          uVar20 = (uVar22 - uVar13) - uVar16 ^ uVar13 >> 0xd;
          uVar16 = (uVar16 - uVar20) - uVar13 ^ uVar20 >> 0xc;
          uVar22 = (uVar13 - uVar16) - uVar20 ^ uVar16 << 0x10;
          uVar20 = (uVar20 - uVar22) - uVar16 ^ uVar22 >> 5;
          uVar13 = (uVar16 - uVar20) - uVar22 ^ uVar20 >> 3;
          uVar22 = (uVar22 - uVar13) - uVar20 ^ uVar13 << 10;
          local_1d8[0] = (uVar20 - uVar22) - uVar13 ^ uVar22 >> 0xf;
          if (this_01->bUseCategories == false) {
            local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a8.ArrayNum = 0;
            local_1a8.ArrayMax = 0;
            bVar10 = true;
            bVar8 = FRigVMTemplateArgument::IsSingleton_NoLock(this_01,&local_1a8,pFVar23);
            if (bVar8) goto LAB_14a114b6d;
            bVar8 = false;
          }
          else {
LAB_14a114b6d:
            bVar8 = true;
          }
          if ((bVar10) &&
             (bVar10 = false, local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_1a8.AllocatorInstance.Data);
          }
          if (!bVar8) {
            pFVar5 = (this_01->TypeIndices).AllocatorInstance.Data;
            if (((pFVar5 <= pFVar19) &&
                (pFVar19 < pFVar5 + (longlong)(this_01->TypeIndices).ArrayMax * 0xc)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            iVar17 = (this_01->TypeIndices).ArrayNum;
            piVar1 = &(this_01->TypeIndices).ArrayMax;
            if (iVar17 == *piVar1) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,&(this_01->TypeIndices).AllocatorInstance,piVar1);
            }
            (this_01->TypeIndices).ArrayNum = iVar17 + 1;
            pFVar5 = (this_01->TypeIndices).AllocatorInstance.Data;
            *(undefined8 *)(pFVar5 + (longlong)iVar17 * 0xc) = *(undefined8 *)pFVar19;
            *(undefined4 *)(pFVar5 + (longlong)iVar17 * 0xc + 8) = *(undefined4 *)(pFVar19 + 8);
          }
          uVar18 = uVar18 + 1;
          lVar15 = lVar15 + 0x80;
          pFVar23 = local_1b0;
          FVar24 = local_1c8;
        } while ((int)uVar18 <
                 ((TArray<FRigVMTemplateArgument,TSizedDefaultAllocator<32>_> *)
                 ((longlong)this + 0x10))->ArrayNum);
      }
      pFVar19 = (((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x30))->
                AllocatorInstance).Data;
      local_1e4 = 0xffffffff;
      if (((pFVar19 <= (FScriptContainerElement *)&local_1e4) &&
          ((FScriptContainerElement *)&local_1e4 <
           pFVar19 + (longlong)
                     ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x30))->ArrayMax
                     * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      iVar17 = ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x30))->ArrayNum;
      piVar1 = &((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x30))->ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)((longlong)this + 0x30),piVar1);
      }
      ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x30))->ArrayNum = iVar17 + 1;
      *(undefined4 *)
       ((((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x30))->AllocatorInstance).
        Data + (longlong)iVar17 * 4) = local_1e4;
      local_1b4 = ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x30))->ArrayNum +
                  -1;
      local_108 = local_1d8;
      local_100 = &local_1b4;
      TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,int_&&>_>
                ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                  *)((longlong)this + 0x40),&local_190,(bool *)&local_108);
      param_5 = (TArray<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *)((longlong)local_1d0 + 0x50);
      FVar24 = (FName)((longlong)FVar24 + 0x50);
    }
    bVar10 = true;
  }
  return bVar10;
}

// UpdateTypesHashToPermutation @ 14a115b60

void __thiscall
FRigVMTemplate::UpdateTypesHashToPermutation
          (FRigVMTemplate *this,int param_1,FRigVMRegistryHandle *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TRigVMTypeIndex *pTVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FRigVMTemplateArgument *this_00;
  FRigVMTemplateArgument *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  int local_res10 [2];
  uint local_res18 [4];
  TRigVMTypeIndex local_48;
  uint *local_38;
  int *local_30;
  
  local_res10[0] = param_1;
  if (param_2->Registry != this->OwnerRegistry) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                       ,0xad1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((-1 < local_res10[0]) && (local_res10[0] < (this->Permutations).ArrayNum)) {
    iVar1 = (this->Arguments).ArrayNum;
    this_00 = (FRigVMTemplateArgument *)(this->Arguments).AllocatorInstance.Data;
    pFVar8 = this_00 + iVar1;
    local_res18[0] = 0;
    while( true ) {
      if ((this->Arguments).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FRigVMTemplateArgument,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this_00 == pFVar8) break;
      pTVar4 = FRigVMTemplateArgument::GetTypeIndex_NoLock(this_00,&local_48,local_res10[0],param_2)
      ;
      uVar6 = pTVar4->Index;
      uVar7 = local_res18[0] - uVar6 ^ uVar6 >> 0xd;
      uVar5 = (-0x61c88647 - uVar7) - uVar6 ^ uVar7 << 8;
      uVar9 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 0xd;
      uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 >> 0xc;
      uVar6 = (uVar5 - uVar7) - uVar9 ^ uVar7 << 0x10;
      uVar9 = (uVar9 - uVar6) - uVar7 ^ uVar6 >> 5;
      uVar5 = (uVar7 - uVar9) - uVar6 ^ uVar9 >> 3;
      uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
      local_res18[0] = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf;
      this_00 = this_00 + 1;
    }
    local_38 = local_res18;
    local_30 = local_res10;
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
              ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                *)&this->TypesHashToPermutation,
               (TPairInitializer<unsigned_int_const_&,int_const_&> *)(local_res18 + 2),
               (bool *)&local_38);
  }
  return;
}

// UpdateTypesIndicesToPermutationIndices @ 14a115eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMTemplate::UpdateTypesIndicesToPermutationIndices
          (FRigVMTemplate *this,int param_1,FRigVMRegistryHandle *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  int local_110 [2];
  longlong *local_108;
  int iStack_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  int local_e8;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  bVar11 = -1 < CpuChannel->Enabled;
  local_110[0] = param_1;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2610,
               "FRigVMTemplate::UpdateTypesIndicesToPermutationIndices",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
               ,0xa32);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2610);
  }
  GetTypesForPermutation_NoLock
            (this,(TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                   *)local_98,local_110[0],param_2);
  uVar7 = local_70;
  iStack_100 = 0;
  local_e8 = 0;
  uStack_fc = 1;
  uStack_ec = 0;
  if (local_70 != 0) {
    puVar9 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar9 = local_78;
    }
    uVar10 = *puVar9;
    while (uVar10 == 0) {
      lVar6 = (longlong)iStack_100;
      local_e8 = local_e8 + 0x20;
      iStack_100 = iStack_100 + 1;
      uStack_ec = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_100)
      goto LAB_14a115fb3;
      uVar10 = puVar9[lVar6 + 1];
    }
    uStack_fc = -uVar10 & uVar10;
    uVar1 = (ulonglong)uStack_fc * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_d8 = (int)lVar6;
    uStack_ec = local_e8 + -1 + local_d8;
    if ((int)local_70 < (int)uStack_ec) {
      uStack_ec = local_70;
    }
  }
LAB_14a115fb3:
  local_108 = (longlong *)local_98;
  local_f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar10 = local_70 & 0xffffffe0;
  iStack_e0 = local_98._8_4_ - local_64;
  uStack_f0 = 0xffffffff;
  TStack_c8.CurrentBitIndex = uStack_ec;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_fc,iStack_100);
  iVar8 = (int)local_70 >> 5;
  TStack_c8._28_4_ = uStack_ec;
  TStack_c8.BaseBitIndex = local_e8;
  uStack_a8 = CONCAT44(uStack_dc,iStack_e0);
  bVar5 = (byte)local_70;
  uStack_e4 = uStack_ec;
  local_d0 = local_108;
  TStack_c8.Array = local_f8;
  if (((int)local_70 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar7 != local_70) {
    puVar9 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar9 = local_78;
    }
    uVar7 = -1 << (bVar5 & 0x1f) & puVar9[iVar8];
    while (uVar7 == 0) {
      lVar6 = (longlong)iVar8;
      uVar10 = uVar10 + 0x20;
      iVar8 = iVar8 + 1;
      uVar7 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_14a1160bd;
      uVar7 = puVar9[lVar6 + 1];
    }
    uVar1 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar7 = (int)lVar6 + -1 + uVar10;
    if ((int)local_70 < (int)uVar7) {
      uVar7 = local_70;
    }
  }
LAB_14a1160bd:
  while( true ) {
    plVar3 = local_d0;
    if ((int)local_d0[1] - *(int *)((longlong)local_d0 + 0x34) != (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (((TStack_c8.CurrentBitIndex == uVar7) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar3 == (longlong *)local_98)) break;
    lVar6 = *plVar3;
    this_00 = TMapBase<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<TRigVMTypeIndex_const_&>
                        ((TMapBase<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRigVMTypeIndex,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->TypesIndicesToPermutationIndices,
                         *(uint *)((longlong)TStack_c8.CurrentBitIndex * 0x1c + 0x10 + lVar6),
                         (TRigVMTypeIndex *)(lVar6 + 8 + (longlong)TStack_c8.CurrentBitIndex * 0x1c)
                        );
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(this_00,local_110);
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UsesDispatch @ 14a1161a0

bool __thiscall FRigVMTemplate::UsesDispatch(FRigVMTemplate *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->Delegates).GetDispatchFactoryDelegate,&local_28);
  if ((*(int *)&(this->Delegates).GetDispatchFactoryDelegate.field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Delegates).GetDispatchFactoryDelegate.field_0x8,
     plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

