// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 148e418f0

UScriptStruct * __cdecl FNDIDataChannelWriteCompiledData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteCompiledData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteCompiledData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData,
                         (UObject *)pUVar1,L"NDIDataChannelWriteCompiledData");
  }
  return Z_Registration_Info_UScriptStruct_FNDIDataChannelWriteCompiledData.OuterSingleton;
}

// ~FNDIDataChannelWriteCompiledData @ 148e56390

void __thiscall
FNDIDataChannelWriteCompiledData::~FNDIDataChannelWriteCompiledData
          (FNDIDataChannelWriteCompiledData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNiagaraVariableLayoutInfo,int>
            ((FNiagaraVariableLayoutInfo *)(this->DataLayout).VariableLayouts.AllocatorInstance.Data
             ,(this->DataLayout).VariableLayouts.ArrayNum);
  pFVar1 = (this->DataLayout).VariableLayouts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataLayout).Variables.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,FNDIDataChannel_GPUScriptParameterAccessInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  DestructItems<FNDIDataChannelFunctionInfo,int>
            ((FNDIDataChannelFunctionInfo *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// Init @ 148e736a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNDIDataChannelWriteCompiledData::Init
          (FNDIDataChannelWriteCompiledData *this,UNiagaraSystem *param_1,
          UNiagaraDataInterfaceDataChannelWrite *param_2)

{
  longlong lVar1;
  FNiagaraVariableBase *pFVar2;
  int iVar3;
  int iVar4;
  FNiagaraVariableBase *pFVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  piVar6 = (int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<FNDIDataChannelFunctionInfo,int>
              ((FNDIDataChannelFunctionInfo *)this->_padding_,iVar3);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)this,0,piVar6);
    }
  }
  else {
    DestructItems<FNDIDataChannelFunctionInfo,int>
              ((FNDIDataChannelFunctionInfo *)this->_padding_,iVar3);
    *(undefined4 *)&this->_padding_ = 0;
  }
  FNiagaraDataSetCompiledData::Empty(&this->DataLayout);
  FNDIDataChannelCompiledData::GatherAccessInfo
            ((FNDIDataChannelCompiledData *)this,param_1,(UNiagaraDataInterface *)param_2);
  iVar3 = (int)this->_padding_;
  lVar7 = this->_padding_;
  piVar6 = (int *)(lVar7 + 0x10);
  lVar1 = lVar7 + (longlong)iVar3 * 0x28;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      `TCheckedPointerIterator<FNDIDataChannelFunctionInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar7 == lVar1) break;
    iVar4 = *piVar6;
    pFVar5 = *(FNiagaraVariableBase **)(piVar6 + -2);
    pFVar2 = pFVar5 + iVar4;
    while( true ) {
      if (*piVar6 != iVar4) {
        `TCheckedPointerIterator<FNiagaraVariableBase,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar2) break;
      TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FNiagaraVariableBase_const_&>(&(this->DataLayout).Variables,pFVar5);
      pFVar5 = pFVar5 + 1;
    }
    lVar7 = lVar7 + 0x28;
    piVar6 = piVar6 + 10;
  }
  FNiagaraDataSetCompiledData::BuildLayout(&this->DataLayout);
  return true;
}

