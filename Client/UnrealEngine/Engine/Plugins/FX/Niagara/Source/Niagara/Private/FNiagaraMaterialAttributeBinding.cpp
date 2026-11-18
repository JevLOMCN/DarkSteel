// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 148fe3df0

UScriptStruct * __cdecl FNiagaraMaterialAttributeBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraMaterialAttributeBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraMaterialAttributeBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding,
                         (UObject *)pUVar1,L"NiagaraMaterialAttributeBinding");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraMaterialAttributeBinding.OuterSingleton;
}

// FNiagaraMaterialAttributeBinding @ 149022620

FNiagaraMaterialAttributeBinding * __thiscall
FNiagaraMaterialAttributeBinding::FNiagaraMaterialAttributeBinding
          (FNiagaraMaterialAttributeBinding *this)

{
  int iVar1;
  
  (this->MaterialParameterName).ComparisonIndex = 0;
  (this->MaterialParameterName).Number = 0;
  (this->NiagaraVariable).Name.ComparisonIndex = 0;
  (this->NiagaraVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->NiagaraVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->NiagaraVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->ResolvedNiagaraVariable).Name.ComparisonIndex = 0;
  (this->ResolvedNiagaraVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->ResolvedNiagaraVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def
                    );
  (this->ResolvedNiagaraVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  (this->NiagaraChildVariable).Name.ComparisonIndex = 0;
  (this->NiagaraChildVariable).Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->NiagaraChildVariable).TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  (this->NiagaraChildVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  return this;
}

// CacheValues @ 149030640

void __thiscall
FNiagaraMaterialAttributeBinding::CacheValues
          (FNiagaraMaterialAttributeBinding *this,UNiagaraEmitterBase *param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  FString *pFVar4;
  FNiagaraAliasContext *pFVar5;
  FNiagaraVariable *pFVar6;
  FNiagaraTypeDefinition *this_00;
  FName *pFVar7;
  FNiagaraVariable local_108;
  undefined1 local_e8 [40];
  void *local_c0;
  bool local_b0;
  TOptional<FString>_u_0 local_a8;
  void *local_98;
  void *local_88;
  bool local_78;
  TOptional<FString>_u_0 local_70;
  void *local_60;
  void *local_50;
  bool local_40;
  undefined1 local_38 [16];
  FNiagaraVariable local_28;
  
  if (param_1 == (UNiagaraEmitterBase *)0x0) {
    iVar1 = (this->NiagaraVariable).TypeDefHandle.RegisteredTypeIndex;
    (this->ResolvedNiagaraVariable).Name = (this->NiagaraVariable).Name;
    (this->ResolvedNiagaraVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  }
  else {
    local_e8._0_4_ = EmitterOrParticleScript;
    local_e8._8_8_ = (FScriptContainerElement *)0x0;
    local_e8._16_4_ = 0;
    local_b0 = false;
    local_a8.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_a8.TypedValue.Data.ArrayNum = 0;
    local_78 = false;
    local_70.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_70.TypedValue.Data.ArrayNum = 0;
    local_40 = false;
    local_e8._20_4_ = -1;
    local_a8.TypedValue.Data.ArrayMax = -1;
    local_70.TypedValue.Data.ArrayMax = -1;
    pFVar4 = UNiagaraEmitterBase::GetUniqueEmitterName(param_1);
    pFVar5 = FNiagaraAliasContext::ChangeEmitterToEmitterName
                       ((FNiagaraAliasContext *)local_e8,pFVar4);
    local_108._padding_._0_4_ = (this->NiagaraVariable).TypeDefHandle.RegisteredTypeIndex;
    local_108._padding_ = *(longlong *)&(this->NiagaraVariable).Name;
    local_108.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.VarData.ArrayNum = 0;
    local_108.VarData.ArrayMax = 0;
    pFVar6 = FNiagaraUtilities::ResolveAliases(&local_28,&local_108,pFVar5);
    uVar2 = *(undefined4 *)((longlong)&pFVar6->_padding_ + 4);
    (this->ResolvedNiagaraVariable).Name.ComparisonIndex =
         (FNameEntryId)*(undefined4 *)&pFVar6->_padding_;
    (this->ResolvedNiagaraVariable).Name.Number = uVar2;
    (this->ResolvedNiagaraVariable).TypeDefHandle.RegisteredTypeIndex = (int)pFVar6->_padding_;
    if (local_28.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.VarData.AllocatorInstance.Data);
    }
    if (local_108.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.VarData.AllocatorInstance.Data);
    }
    if (local_40 != false) {
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
      if (local_60 != (void *)0x0) {
        FMemory::Free(local_60);
      }
    }
    if ((local_70.TypedValue.Data.ArrayMax != -1) &&
       (local_70.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_70.TypedValue.Data.AllocatorInstance.Data);
    }
    if (local_78 != false) {
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
    }
    if ((local_a8.TypedValue.Data.ArrayMax != -1) &&
       (local_a8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_a8.TypedValue.Data.AllocatorInstance.Data);
    }
    if (local_b0 != false) {
      if (local_c0 != (void *)0x0) {
        FMemory::Free(local_c0);
      }
      if ((void *)local_e8._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._24_8_);
      }
    }
    if ((local_e8._20_4_ != -1) &&
       ((FScriptContainerElement *)local_e8._8_8_ != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_e8._8_8_);
    }
    this_00 = FNiagaraTypeDefinitionHandle::Resolve(&(this->ResolvedNiagaraVariable).TypeDefHandle);
    bVar3 = FNiagaraTypeDefinition::IsDataInterface(this_00);
    if (bVar3) {
      pFVar7 = (FName *)(**(code **)(param_1->_padding_ + 0x2b0))
                                  (param_1,local_38,&this->ResolvedNiagaraVariable);
      (this->ResolvedNiagaraVariable).Name = *pFVar7;
      (this->ResolvedNiagaraVariable).TypeDefHandle.RegisteredTypeIndex =
           pFVar7[1].ComparisonIndex.Value;
    }
  }
  return;
}

// GetParamMapBindableVariable @ 149047820

FNiagaraVariableBase * __thiscall
FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable
          (FNiagaraMaterialAttributeBinding *this)

{
  return &this->ResolvedNiagaraVariable;
}

// Matches @ 14905b520

bool __thiscall
FNiagaraMaterialAttributeBinding::Matches
          (FNiagaraMaterialAttributeBinding *this,FNiagaraVariableBase *param_1,
          UNiagaraEmitterBase *param_2,ENiagaraRendererSourceDataMode param_3)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  bool bVar3;
  FNiagaraTypeDefinition *pFVar4;
  FNiagaraTypeDefinition *pFVar5;
  FString *pFVar6;
  FNiagaraAliasContext *pFVar7;
  FNiagaraVariable *pFVar8;
  FName local_118;
  FNiagaraTypeDefinitionHandle local_110 [2];
  FScriptContainerElement *local_108;
  undefined8 local_100;
  FNiagaraVariable local_f8;
  undefined1 local_d8 [40];
  void *local_b0;
  bool local_a0;
  TOptional<FString>_u_0 local_98;
  void *local_88;
  void *local_78;
  bool local_68;
  TOptional<FString>_u_0 local_60;
  void *local_50;
  void *local_40;
  bool local_30;
  FNiagaraVariable local_28;
  
  if (param_1->Name == (this->NiagaraVariable).Name) {
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
    pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(&(this->NiagaraVariable).TypeDefHandle);
    if ((((pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr ==
          (pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr) &&
        (pFVar4->UnderlyingType == pFVar5->UnderlyingType)) && (pFVar4->Flags == pFVar5->Flags)) {
      return true;
    }
  }
  local_118 = param_1->Name;
  local_110[0].RegisteredTypeIndex = (param_1->TypeDefHandle).RegisteredTypeIndex;
  local_108 = (FScriptContainerElement *)0x0;
  local_100 = 0;
  pFVar6 = UNiagaraEmitterBase::GetUniqueEmitterName(param_2);
  local_f8._padding_ = (longlong)(pFVar6->Data).AllocatorInstance.Data;
  iVar2 = (pFVar6->Data).ArrayNum;
  local_f8._padding_._0_4_ = iVar2 + -1;
  if (iVar2 == 0) {
    local_f8._padding_._0_4_ = 0;
  }
  bVar3 = FNiagaraVariableBase::IsInNameSpace((TStringView<wchar_t> *)&local_f8,param_1->Name);
  if (bVar3) {
    local_d8._0_4_ = None;
    local_d8._8_8_ = (FScriptContainerElement *)0x0;
    local_d8._16_4_ = 0;
    local_d8._20_4_ = -1;
    local_a0 = false;
    local_98.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_98.TypedValue.Data.ArrayNum = 0;
    local_98.TypedValue.Data.ArrayMax = -1;
    local_68 = false;
    local_60.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_60.TypedValue.Data.ArrayNum = 0;
    local_60.TypedValue.Data.ArrayMax = -1;
    local_30 = false;
    pFVar6 = UNiagaraEmitterBase::GetUniqueEmitterName(param_2);
    pFVar7 = FNiagaraAliasContext::ChangeEmitterNameToEmitter
                       ((FNiagaraAliasContext *)local_d8,pFVar6);
    local_f8._padding_._0_4_ = (param_1->TypeDefHandle).RegisteredTypeIndex;
    local_f8._padding_ = *(longlong *)&param_1->Name;
    local_f8.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.VarData.ArrayNum = 0;
    local_f8.VarData.ArrayMax = 0;
    pFVar8 = FNiagaraUtilities::ResolveAliases(&local_28,&local_f8,pFVar7);
    local_118 = (FName)pFVar8->_padding_;
    pTVar1 = &pFVar8->VarData;
    local_110[0].RegisteredTypeIndex = (int)pFVar8->_padding_;
    if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_108 != pTVar1) {
      if (local_108 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108);
      }
      local_108 = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_100._0_4_ = (pFVar8->VarData).ArrayNum;
      local_100._4_4_ = (pFVar8->VarData).ArrayMax;
      (pFVar8->VarData).ArrayNum = 0;
      (pFVar8->VarData).ArrayMax = 0;
    }
    if (local_28.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.VarData.AllocatorInstance.Data);
    }
    if (local_f8.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.VarData.AllocatorInstance.Data);
    }
    if (local_30 != false) {
      if (local_40 != (void *)0x0) {
        FMemory::Free(local_40);
      }
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
    }
    if ((local_60.TypedValue.Data.ArrayMax != -1) &&
       (local_60.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_60.TypedValue.Data.AllocatorInstance.Data);
    }
    if (local_68 != false) {
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
    }
    if ((local_98.TypedValue.Data.ArrayMax != -1) &&
       (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
    }
    if (local_a0 != false) {
      if (local_b0 != (void *)0x0) {
        FMemory::Free(local_b0);
      }
      if ((void *)local_d8._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_d8._24_8_);
      }
    }
    if ((local_d8._20_4_ != -1) &&
       ((FScriptContainerElement *)local_d8._8_8_ != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_d8._8_8_);
    }
  }
  if (local_118 == (this->NiagaraVariable).Name) {
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(local_110);
    pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(&(this->NiagaraVariable).TypeDefHandle);
    if ((((pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr ==
          (pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr) &&
        (pFVar4->UnderlyingType == pFVar5->UnderlyingType)) && (pFVar4->Flags == pFVar5->Flags)) {
      bVar3 = true;
      goto LAB_14905b7ac;
    }
  }
  bVar3 = false;
LAB_14905b7ac:
  if (local_108 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108);
  }
  return bVar3;
}

// RenameVariableIfMatching @ 149063240

bool __thiscall
FNiagaraMaterialAttributeBinding::RenameVariableIfMatching
          (FNiagaraMaterialAttributeBinding *this,FNiagaraVariableBase *param_1,
          FNiagaraVariableBase *param_2,UNiagaraEmitterBase *param_3,
          ENiagaraRendererSourceDataMode param_4)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  bool bVar3;
  FNiagaraTypeDefinition *pFVar4;
  FNiagaraTypeDefinition *pFVar5;
  FString *pFVar6;
  FNiagaraAliasContext *pFVar7;
  FNiagaraVariable *pFVar8;
  FName local_128;
  FNiagaraTypeDefinitionHandle local_120 [2];
  FScriptContainerElement *local_118;
  undefined8 local_110;
  FNiagaraVariable local_108;
  undefined1 local_e8 [40];
  void *local_c0;
  bool local_b0;
  TOptional<FString>_u_0 local_a8;
  void *local_98;
  void *local_88;
  bool local_78;
  TOptional<FString>_u_0 local_70;
  void *local_60;
  void *local_50;
  bool local_40;
  FNiagaraVariable local_38;
  
  if (param_1->Name == (this->NiagaraVariable).Name) {
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
    pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(&(this->NiagaraVariable).TypeDefHandle);
    if ((((pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr ==
          (pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr) &&
        (pFVar4->UnderlyingType == pFVar5->UnderlyingType)) && (pFVar4->Flags == pFVar5->Flags)) {
      (this->NiagaraVariable).Name = param_2->Name;
      (this->NiagaraVariable).TypeDefHandle.RegisteredTypeIndex =
           (param_2->TypeDefHandle).RegisteredTypeIndex;
      CacheValues(this,param_3);
      return true;
    }
  }
  local_128 = param_1->Name;
  local_120[0].RegisteredTypeIndex = (param_1->TypeDefHandle).RegisteredTypeIndex;
  local_118 = (FScriptContainerElement *)0x0;
  local_110 = 0;
  pFVar6 = UNiagaraEmitterBase::GetUniqueEmitterName(param_3);
  local_108._padding_ = (longlong)(pFVar6->Data).AllocatorInstance.Data;
  iVar2 = (pFVar6->Data).ArrayNum;
  local_108._padding_._0_4_ = iVar2 + -1;
  if (iVar2 == 0) {
    local_108._padding_._0_4_ = 0;
  }
  bVar3 = FNiagaraVariableBase::IsInNameSpace((TStringView<wchar_t> *)&local_108,param_1->Name);
  if (bVar3) {
    local_e8._0_4_ = None;
    local_e8._8_8_ = (FScriptContainerElement *)0x0;
    local_e8._16_4_ = 0;
    local_e8._20_4_ = -1;
    local_b0 = false;
    local_a8.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_a8.TypedValue.Data.ArrayNum = 0;
    local_a8.TypedValue.Data.ArrayMax = -1;
    local_78 = false;
    local_70.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_70.TypedValue.Data.ArrayNum = 0;
    local_70.TypedValue.Data.ArrayMax = -1;
    local_40 = false;
    pFVar6 = UNiagaraEmitterBase::GetUniqueEmitterName(param_3);
    pFVar7 = FNiagaraAliasContext::ChangeEmitterNameToEmitter
                       ((FNiagaraAliasContext *)local_e8,pFVar6);
    local_108._padding_._0_4_ = (param_1->TypeDefHandle).RegisteredTypeIndex;
    local_108._padding_ = *(longlong *)&param_1->Name;
    local_108.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.VarData.ArrayNum = 0;
    local_108.VarData.ArrayMax = 0;
    pFVar8 = FNiagaraUtilities::ResolveAliases(&local_38,&local_108,pFVar7);
    local_128 = (FName)pFVar8->_padding_;
    pTVar1 = &pFVar8->VarData;
    local_120[0].RegisteredTypeIndex = (int)pFVar8->_padding_;
    if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_118 != pTVar1) {
      if (local_118 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118);
      }
      local_118 = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_110._0_4_ = (pFVar8->VarData).ArrayNum;
      local_110._4_4_ = (pFVar8->VarData).ArrayMax;
      (pFVar8->VarData).ArrayNum = 0;
      (pFVar8->VarData).ArrayMax = 0;
    }
    if (local_38.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.VarData.AllocatorInstance.Data);
    }
    if (local_108.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.VarData.AllocatorInstance.Data);
    }
    if (local_40 != false) {
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
      if (local_60 != (void *)0x0) {
        FMemory::Free(local_60);
      }
    }
    if ((local_70.TypedValue.Data.ArrayMax != -1) &&
       (local_70.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_70.TypedValue.Data.AllocatorInstance.Data);
    }
    if (local_78 != false) {
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
    }
    if ((local_a8.TypedValue.Data.ArrayMax != -1) &&
       (local_a8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_a8.TypedValue.Data.AllocatorInstance.Data);
    }
    if (local_b0 != false) {
      if (local_c0 != (void *)0x0) {
        FMemory::Free(local_c0);
      }
      if ((void *)local_e8._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._24_8_);
      }
    }
    if ((local_e8._20_4_ != -1) &&
       ((FScriptContainerElement *)local_e8._8_8_ != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_e8._8_8_);
    }
  }
  if (local_128 == (this->NiagaraVariable).Name) {
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(local_120);
    pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(&(this->NiagaraVariable).TypeDefHandle);
    if ((((pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr ==
          (pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr) &&
        (pFVar4->UnderlyingType == pFVar5->UnderlyingType)) && (pFVar4->Flags == pFVar5->Flags)) {
      (this->NiagaraVariable).Name = param_2->Name;
      (this->NiagaraVariable).TypeDefHandle.RegisteredTypeIndex =
           (param_2->TypeDefHandle).RegisteredTypeIndex;
      CacheValues(this,param_3);
      bVar3 = true;
      goto LAB_149063506;
    }
  }
  bVar3 = false;
LAB_149063506:
  if (local_118 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118);
  }
  return bVar3;
}

