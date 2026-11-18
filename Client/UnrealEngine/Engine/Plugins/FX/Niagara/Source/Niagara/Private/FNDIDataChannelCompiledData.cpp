// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticStruct @ 148e407f0

UScriptStruct * __cdecl FNDIDataChannelCompiledData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannelCompiledData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDIDataChannelCompiledData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDIDataChannelCompiledData,(UObject *)pUVar1,
                         L"NDIDataChannelCompiledData");
  }
  return Z_Registration_Info_UScriptStruct_FNDIDataChannelCompiledData.OuterSingleton;
}

// operator= @ 148e57050

FNDIDataChannelCompiledData * __thiscall
FNDIDataChannelCompiledData::operator=
          (FNDIDataChannelCompiledData *this,FNDIDataChannelCompiledData *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  FNDIDataChannelFunctionInfo *pFVar4;
  void *_Dst;
  void *_Src;
  uint uVar5;
  
  if (this != param_1) {
    DestructItems<FNDIDataChannelFunctionInfo,int>
              ((FNDIDataChannelFunctionInfo *)(this->FunctionInfo).AllocatorInstance.Data,
               (this->FunctionInfo).ArrayNum);
    iVar2 = (param_1->FunctionInfo).ArrayNum;
    piVar1 = &(this->FunctionInfo).ArrayMax;
    pFVar4 = (FNDIDataChannelFunctionInfo *)(param_1->FunctionInfo).AllocatorInstance.Data;
    (this->FunctionInfo).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
      ConstructItems<FNDIDataChannelFunctionInfo,FNDIDataChannelFunctionInfo,int>
                ((this->FunctionInfo).AllocatorInstance.Data,pFVar4,iVar2);
    }
  }
  if (&this->GPUScriptParameterInfos == &param_1->GPUScriptParameterInfos) goto LAB_148e57161;
  uVar3 = *(uint *)&(param_1->GPUScriptParameterInfos).field_0x48;
  uVar5 = uVar3;
  if (uVar3 < 2) {
    if (*(longlong *)&(this->GPUScriptParameterInfos).field_0x40 != 0) {
      uVar5 = 0;
      goto LAB_148e57103;
    }
  }
  else {
LAB_148e57103:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->GPUScriptParameterInfos).field_0x40,0,uVar5,4);
  }
  _Src = *(void **)&(param_1->GPUScriptParameterInfos).field_0x40;
  _Dst = *(void **)&(this->GPUScriptParameterInfos).field_0x40;
  if (uVar3 != 0) {
    if (_Src == (void *)0x0) {
      _Src = &(param_1->GPUScriptParameterInfos).field_0x38;
    }
    if (_Dst == (void *)0x0) {
      _Dst = &(this->GPUScriptParameterInfos).field_0x38;
    }
    memcpy(_Dst,_Src,(longlong)(int)uVar3 << 2);
  }
  *(uint *)&(this->GPUScriptParameterInfos).field_0x48 = uVar3;
  TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=((TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->GPUScriptParameterInfos,
              (TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&param_1->GPUScriptParameterInfos);
LAB_148e57161:
  this->TotalParams = param_1->TotalParams;
  this->bUsedByCPU = param_1->bUsedByCPU;
  this->bUsedByGPU = param_1->bUsedByGPU;
  this->bNeedsSpawnDataTable = param_1->bNeedsSpawnDataTable;
  this->bSpawnsParticles = param_1->bSpawnsParticles;
  this->bCallsWrite = param_1->bCallsWrite;
  return this;
}

// operator() @ 148e579f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_1>::operator()
          (void *this,UNiagaraScript *param_1,FVMExternalFunctionBindingInfo *param_2)

{
  int *piVar1;
  FName *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  
  if (((0 < (param_2->VariadicInputs).ArrayNum) || (0 < (param_2->VariadicOutputs).ArrayNum)) &&
     (iVar4 = FNDIDataChannelCompiledData::FindFunctionInfoIndex
                        (*(FNDIDataChannelCompiledData **)this,param_2->Name,
                         &param_2->VariadicInputs,&param_2->VariadicOutputs), iVar4 == -1)) {
    pFVar3 = *(ForAnyElementType **)this;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    iVar4 = *(int *)&pFVar3[1].Data;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar4 + 1;
    pFVar2 = (FName *)(pFVar3->Data + (longlong)iVar4 * 0x28);
    DefaultConstructItems<FNDIDataChannelFunctionInfo,int>(pFVar2,1);
    *pFVar2 = param_2->Name;
    TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1),
               &param_2->VariadicInputs);
    TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *)(pFVar2 + 3),
               &param_2->VariadicOutputs);
  }
  *(undefined1 *)(*(longlong *)this + 100) = 1;
  if (param_2->Name == NDIDataChannelUtilities::GetNDCSpawnDataName) {
    *(undefined1 *)(*(longlong *)this + 0x66) = 1;
  }
  if ((param_2->Name == NDIDataChannelUtilities::SpawnConditionalName) ||
     (param_2->Name == NDIDataChannelUtilities::SpawnDirectName)) {
    *(undefined1 *)(*(longlong *)this + 0x67) = 1;
  }
  if (param_2->Name == NDIDataChannelUtilities::WriteName) {
    *(undefined1 *)(*(longlong *)this + 0x68) = 1;
  }
  return true;
}

// operator() @ 148e588c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_2>::operator()
          (void *this,UNiagaraScript *param_1,FNiagaraDataInterfaceGeneratedFunction *param_2)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FNiagaraTypeDefinition *pFVar5;
  FName *pFVar6;
  size_t _Size;
  FName *pFVar7;
  longlong lVar8;
  int local_res8 [2];
  FNiagaraCompileHash *local_res18;
  FNiagaraVariableBase local_68;
  FNiagaraCompileHash local_58;
  FNiagaraTypeDefinition local_48;
  
  if ((0 < (param_2->VariadicInputs).ArrayNum) || (0 < (param_2->VariadicOutputs).ArrayNum)) {
    _Src = (param_1->CachedScriptVMId).BaseScriptCompileHash.DataHash.AllocatorInstance.Data;
    local_58.DataHash.ArrayNum = (param_1->CachedScriptVMId).BaseScriptCompileHash.DataHash.ArrayNum
    ;
    _Size = (size_t)local_58.DataHash.ArrayNum;
    local_58.DataHash.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.DataHash.ArrayNum == 0) {
      local_58.DataHash.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_58.DataHash.ArrayNum,0,(ForAnyElementType *)&local_58,
                 local_58.DataHash.ArrayNum,&local_58.DataHash.ArrayMax);
      memcpy(local_58.DataHash.AllocatorInstance.Data,_Src,_Size);
    }
    lVar1 = *(longlong *)this;
    uVar3 = FNiagaraCompileHash::GetTypeHash(&local_58);
    iVar4 = TSet<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FNiagaraCompileHash>
                      ((TSet<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,0>,FDefaultSetAllocator>
                        *)(lVar1 + 0x10),uVar3,&local_58);
    if ((iVar4 == -1) || (lVar8 = *(longlong *)(lVar1 + 0x10) + (longlong)iVar4 * 0x28, lVar8 == 0))
    {
      local_res18 = &local_58;
      TSet<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FNiagaraCompileHash_const_&>_>
                ((TSet<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x10),(uint)local_res8,
                 (TKeyInitializer<FNiagaraCompileHash_const_&> *)(ulonglong)uVar3,
                 (bool *)&local_res18);
      lVar8 = *(longlong *)(lVar1 + 0x10) + (longlong)local_res8[0] * 0x28;
    }
    iVar4 = (param_2->VariadicInputs).ArrayNum;
    pFVar7 = (FName *)(param_2->VariadicInputs).AllocatorInstance.Data;
    pFVar6 = pFVar7 + (longlong)iVar4 * 2;
    while( true ) {
      if ((param_2->VariadicInputs).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FNiagaraVariableCommonReference_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar6) break;
      local_68.Name = *pFVar7;
      pFVar5 = FNiagaraTypeDefinition::FNiagaraTypeDefinition(&local_48,(UObject *)pFVar7[1]);
      local_68.TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(&local_68.TypeDefHandle,pFVar5);
      TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FNiagaraVariableBase>
                ((TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *)(lVar8 + 0x10),
                 &local_68);
      pFVar7 = pFVar7 + 2;
    }
    iVar4 = (param_2->VariadicOutputs).ArrayNum;
    pFVar7 = (FName *)(param_2->VariadicOutputs).AllocatorInstance.Data;
    pFVar6 = pFVar7 + (longlong)iVar4 * 2;
    while( true ) {
      if ((param_2->VariadicOutputs).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FNiagaraVariableCommonReference_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar6) break;
      local_68.Name = *pFVar7;
      pFVar5 = FNiagaraTypeDefinition::FNiagaraTypeDefinition(&local_48,(UObject *)pFVar7[1]);
      local_68.TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(&local_68.TypeDefHandle,pFVar5);
      TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FNiagaraVariableBase>
                ((TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *)(lVar8 + 0x10),
                 &local_68);
      pFVar7 = pFVar7 + 2;
    }
    if (local_58.DataHash.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.DataHash.AllocatorInstance.Data);
    }
  }
  *(undefined1 *)(*(longlong *)this + 0x65) = 1;
  bVar2 = ::FName::Equals(param_2->DefinitionName,L"GetNDCSpawnData");
  if (bVar2) {
    *(undefined1 *)(*(longlong *)this + 0x66) = 1;
  }
  return true;
}

// FindFunctionInfoIndex @ 148e65790

int __thiscall
FNDIDataChannelCompiledData::FindFunctionInfoIndex
          (FNDIDataChannelCompiledData *this,FName param_1,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  iVar4 = (this->FunctionInfo).ArrayNum;
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < iVar4) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      pFVar5 = (FName *)((this->FunctionInfo).AllocatorInstance.Data + lVar7);
      if ((((*pFVar5 == param_1) && (param_2->ArrayNum == pFVar5[2].ComparisonIndex.Value)) &&
          (bVar2 = CompareItems<FNiagaraVariableBase,int>
                             ((FNiagaraVariableBase *)(param_2->AllocatorInstance).Data,
                              (FNiagaraVariableBase *)pFVar5[1],param_2->ArrayNum), bVar2)) &&
         ((param_3->ArrayNum == pFVar5[4].ComparisonIndex.Value &&
          (bVar2 = CompareItems<FNiagaraVariableBase,int>
                             ((FNiagaraVariableBase *)(param_3->AllocatorInstance).Data,
                              (FNiagaraVariableBase *)pFVar5[3],param_3->ArrayNum), bVar2)))) {
        return uVar6;
      }
      iVar4 = (this->FunctionInfo).ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x28;
    } while ((int)uVar6 < iVar4);
  }
  return -1;
}

// GatherAccessInfo @ 148e669b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNDIDataChannelCompiledData::GatherAccessInfo
          (FNDIDataChannelCompiledData *this,UNiagaraSystem *param_1,UNiagaraDataInterface *param_2)

{
  TMap<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  code *local_98 [2];
  undefined **local_88;
  FNDIDataChannelCompiledData *local_80;
  undefined8 local_70;
  code *local_68 [2];
  undefined **local_58;
  FNDIDataChannelCompiledData *local_50;
  undefined8 local_40;
  
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  iVar10 = 0;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_1>,bool,UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&>
                ::Call;
  local_70 = 0;
  local_80 = this;
  FNiagaraDataInterfaceUtilities::ForEachVMFunction
            (param_2,param_1,
             (TFunction<bool___cdecl(UNiagaraScript_const_*,FVMExternalFunctionBindingInfo_const_&)>
              *)local_98);
  this_00 = &this->GPUScriptParameterInfos;
  bVar6 = 1 < *(int *)&(this->GPUScriptParameterInfos).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->GPUScriptParameterInfos).field_0x8);
  puVar1 = &(this->GPUScriptParameterInfos).field_0xc;
  *(undefined4 *)&(this->GPUScriptParameterInfos).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->GPUScriptParameterInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GPUScriptParameterInfos).field_0x34 = 0;
  iVar3 = *(int *)&(this->GPUScriptParameterInfos).field_0x2c;
  *(undefined4 *)&(this->GPUScriptParameterInfos).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->GPUScriptParameterInfos).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->GPUScriptParameterInfos).field_0x10,0
              );
  }
  uVar7 = 1;
  if (bVar6) {
    *(undefined4 *)&(this->GPUScriptParameterInfos).field_0x48 = 1;
    TSet<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this->TotalParams = 0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNDIDataChannelCompiledData::GatherAccessInfo'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_40 = 0;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNDIDataChannelCompiledData::GatherAccessInfo'::__l2::<lambda_2>,bool,UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&>
                ::Call;
  local_50 = this;
  FNiagaraDataInterfaceUtilities::ForEachGpuFunction
            (param_2,param_1,
             (TFunction<bool___cdecl(UNiagaraScript_const_*,FNiagaraDataInterfaceGeneratedFunction_const_&)>
              *)local_68);
  iVar3 = *(int *)&(this->GPUScriptParameterInfos).field_0x28;
  puVar1 = &(this->GPUScriptParameterInfos).field_0x10;
  iVar12 = 0;
  iVar8 = iVar10;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->GPUScriptParameterInfos).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    iVar12 = 0;
    iVar10 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148e66b3e;
      uVar11 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = iVar12 + -1 + (int)lVar9;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_148e66b3e:
  uVar11 = *(uint *)&(this->GPUScriptParameterInfos).field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uVar7,iVar10);
  TStack_c8.CurrentBitIndex = iVar8;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_c8._28_4_ = iVar8;
  TStack_c8.BaseBitIndex = iVar12;
  uStack_a8 = CONCAT44(uStack_dc,
                       *(int *)&(this->GPUScriptParameterInfos).field_0x8 -
                       *(int *)&(this->GPUScriptParameterInfos).field_0x34);
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->GPUScriptParameterInfos).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->GPUScriptParameterInfos).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148e66c50;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_148e66c50:
  while( true ) {
    if (*(int *)&(this->GPUScriptParameterInfos).field_0x8 -
        *(int *)&(this->GPUScriptParameterInfos).field_0x34 != (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar9 = (longlong)TStack_c8.CurrentBitIndex;
    if ((TStack_c8.CurrentBitIndex == uVar11) &&
       (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&this_00->field_0x0;
    AlgoImpl::
    IntroSortInternal<FNiagaraVariableBase,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraVariableBase,_NDIDataChannelUtilities::SortParameters_::__l2::<lambda_1>_>_>
              (*(FNiagaraVariableBase **)(lVar4 + 0x10 + lVar9 * 0x28),
               *(int *)(lVar4 + 0x18 + lVar9 * 0x28),local_res8[0],(<lambda_1> *)local_res20);
    this->TotalParams = this->TotalParams + *(int *)(lVar4 + lVar9 * 0x28 + 0x18);
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  return;
}

// Init @ 148e735c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNDIDataChannelCompiledData::Init
          (FNDIDataChannelCompiledData *this,UNiagaraSystem *param_1,UNiagaraDataInterface *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  DestructItems<FNDIDataChannelFunctionInfo,int>
            ((FNDIDataChannelFunctionInfo *)(this->FunctionInfo).AllocatorInstance.Data,
             (this->FunctionInfo).ArrayNum);
  piVar1 = &(this->FunctionInfo).ArrayMax;
  (this->FunctionInfo).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  if (param_1 == (UNiagaraSystem *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("System",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelCommon.cpp"
                       ,0x111,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (param_2 == (UNiagaraDataInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerDI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelCommon.cpp"
                       ,0x112,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  GatherAccessInfo(this,param_1,param_2);
  return true;
}

