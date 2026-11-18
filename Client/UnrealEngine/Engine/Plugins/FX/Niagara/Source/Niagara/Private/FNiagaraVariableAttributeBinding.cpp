// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 21

// StaticStruct @ 148fe3ba0

UScriptStruct * __cdecl FNiagaraVariableAttributeBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableAttributeBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraVariableAttributeBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding,
                         (UObject *)pUVar1,L"NiagaraVariableAttributeBinding");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraVariableAttributeBinding.OuterSingleton;
}

// CacheValues @ 149030830

void __thiscall
FNiagaraVariableAttributeBinding::CacheValues
          (FNiagaraVariableAttributeBinding *this,FVersionedNiagaraEmitter *param_1,
          ENiagaraRendererSourceDataMode param_2)

{
  FVersionedNiagaraEmitterBase *pFVar1;
  FVersionedNiagaraEmitterBase local_28;
  
  pFVar1 = FVersionedNiagaraEmitter::ToBase(param_1,&local_28);
  CacheValues(this,pFVar1,param_2);
  return;
}

// CacheValues @ 149030880

void __thiscall
FNiagaraVariableAttributeBinding::CacheValues
          (FNiagaraVariableAttributeBinding *this,FVersionedNiagaraEmitterBase *param_1,
          ENiagaraRendererSourceDataMode param_2)

{
  uchar uVar1;
  int iVar2;
  UNiagaraEmitterBase *this_00;
  FName FVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  FNiagaraTypeDefinition *pFVar8;
  FString *pFVar9;
  FNiagaraAliasContext *pFVar10;
  FNiagaraVariable *pFVar11;
  FNiagaraVariableBase *pFVar12;
  byte bVar13;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  undefined8 local_res10;
  FNiagaraVariableBase local_2f8;
  TObjectPtr<UObject>_u_0 local_2e8;
  ushort local_2e0;
  uchar local_2de;
  short local_2dc;
  short local_2da;
  int local_2d8;
  uint local_2d4;
  FName local_2d0;
  FNiagaraTypeDefinitionHandle local_2c8;
  FName local_2c4;
  FNiagaraTypeDefinitionHandle local_2bc;
  FName local_2b8;
  FNiagaraTypeDefinitionHandle local_2b0;
  FName local_2ac;
  FNiagaraTypeDefinitionHandle local_2a4;
  FNiagaraVariable local_2a0;
  FNiagaraVariable local_280;
  FNiagaraVariable local_260;
  TStringView<wchar_t> local_240;
  TStringView<wchar_t> local_230;
  TStringView<wchar_t> local_220;
  undefined1 local_210 [40];
  void *local_1e8;
  bool local_1d8;
  TOptional<FString>_u_0 local_1d0;
  void *local_1c0;
  void *local_1b0;
  bool local_1a0;
  TOptional<FString>_u_0 local_198;
  void *local_188;
  void *local_178;
  bool local_168;
  FNiagaraAliasContext local_158;
  FNiagaraVariableBase local_a8;
  FNiagaraVariable local_98;
  FNiagaraVariable local_78;
  FNiagaraVariable local_58;
  
  this_00 = param_1->Emitter;
  pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(&(this->ParamMapVariable).TypeDefHandle);
  local_2f8.Name = this->RootName;
  local_2f8.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_2f8.TypeDefHandle,pFVar8);
  iVar7 = 0;
  if (this_00 != (UNiagaraEmitterBase *)0x0) {
    pFVar9 = UNiagaraEmitterBase::GetUniqueEmitterName(this_00);
    local_240.DataPtr = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    iVar2 = (pFVar9->Data).ArrayNum;
    local_240.Size = iVar2 + -1;
    if (iVar2 == 0) {
      local_240.Size = iVar7;
    }
    bVar6 = FNiagaraVariableBase::IsInNameSpace(&local_240,local_2f8.Name);
    if (bVar6) {
      local_210._0_4_ = None;
      local_210._8_8_ = (FScriptContainerElement *)0x0;
      local_210._16_4_ = 0;
      local_210._20_4_ = -1;
      local_1d8 = false;
      local_1d0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_1d0.TypedValue.Data.ArrayNum = 0;
      local_1d0.TypedValue.Data.ArrayMax = -1;
      local_1a0 = false;
      local_198.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(FScriptContainerElement *)0x0;
      local_198.TypedValue.Data.ArrayNum = 0;
      local_198.TypedValue.Data.ArrayMax = -1;
      local_168 = false;
      pFVar9 = UNiagaraEmitterBase::GetUniqueEmitterName(this_00);
      pFVar10 = FNiagaraAliasContext::ChangeEmitterNameToEmitter
                          ((FNiagaraAliasContext *)local_210,pFVar9);
      local_2a0._padding_._0_4_ = local_2f8.TypeDefHandle.RegisteredTypeIndex;
      local_2a0._padding_._0_4_ = local_2f8.Name.ComparisonIndex.Value;
      local_2a0._padding_._4_4_ = local_2f8.Name.Number;
      local_2a0.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a0.VarData.ArrayNum = 0;
      local_2a0.VarData.ArrayMax = 0;
      pFVar11 = FNiagaraUtilities::ResolveAliases(&local_98,&local_2a0,pFVar10);
      local_2f8.Name = (FName)pFVar11->_padding_;
      local_2f8.TypeDefHandle.RegisteredTypeIndex = (int)pFVar11->_padding_;
      if (local_98.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.VarData.AllocatorInstance.Data);
      }
      if (local_2a0.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.VarData.AllocatorInstance.Data);
      }
      if (local_168 != false) {
        if (local_178 != (void *)0x0) {
          FMemory::Free(local_178);
        }
        if (local_188 != (void *)0x0) {
          FMemory::Free(local_188);
        }
      }
      if ((local_198.TypedValue.Data.ArrayMax != -1) &&
         (local_198.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_198.TypedValue.Data.AllocatorInstance.Data);
      }
      if (local_1a0 != false) {
        if (local_1b0 != (void *)0x0) {
          FMemory::Free(local_1b0);
        }
        if (local_1c0 != (void *)0x0) {
          FMemory::Free(local_1c0);
        }
      }
      if ((local_1d0.TypedValue.Data.ArrayMax != -1) &&
         (local_1d0.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_1d0.TypedValue.Data.AllocatorInstance.Data);
      }
      if (local_1d8 != false) {
        if (local_1e8 != (void *)0x0) {
          FMemory::Free(local_1e8);
        }
        if ((void *)local_210._24_8_ != (void *)0x0) {
          FMemory::Free((void *)local_210._24_8_);
        }
      }
      if ((local_210._20_4_ != -1) &&
         ((FScriptContainerElement *)local_210._8_8_ != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_210._8_8_);
      }
      pFVar12 = FNiagaraConstants::GetAttributeAsEmitterDataSetKey(&local_a8,&local_2f8);
      local_2f8.Name = pFVar12->Name;
      this->RootName = local_2f8.Name;
    }
  }
  bVar13 = this->field_0x1d;
  (this->ParamMapVariable).Name = local_2f8.Name;
  (this->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex =
       local_2f8.TypeDefHandle.RegisteredTypeIndex;
  FVar3 = (this->ParamMapVariable).Name;
  this->DataSetName = FVar3;
  uVar1 = (this->BindingSourceMode).Value;
  if ((uVar1 == '\x01') || ((param_2 == Particles && (uVar1 == '\0')))) {
    bVar13 = bVar13 & 0xfe | 2;
  }
  else {
    bVar13 = bVar13 & 0xfc;
  }
  this->field_0x1d = bVar13;
  if (FVar3 == (FName)0x0) {
    local_res10 = 0;
    (this->ParamMapVariable).Name.ComparisonIndex = 0;
    (this->ParamMapVariable).Name.Number = 0;
  }
  else {
    if (((param_2 == Emitter) && (uVar1 == '\0')) || (uVar1 == '\x02')) {
      pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(&(this->ParamMapVariable).TypeDefHandle);
      local_2d0 = this->DataSetName;
      local_2c8.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_2c8,pFVar8);
      local_230.DataPtr =
           (wchar_t *)FNiagaraConstants::EmitterNamespaceString.Data.AllocatorInstance.Data;
      local_230.Size = FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum + -1;
      if (FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum == 0) {
        local_230.Size = iVar7;
      }
      bVar6 = FNiagaraVariableBase::IsInNameSpace(&local_230,local_2d0);
      if ((bVar6) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8123773844012924062>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCommon.cpp"
                             ,0x362,
                             "!GetDataSetBindableVariable().IsInNameSpace(FNiagaraConstants::EmitterNamespaceString)"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = &FNiagaraConstants::EmitterNamespaceString;
    }
    else {
      if (((param_2 != Particles) || (uVar1 != '\0')) && (uVar1 != '\x01')) goto LAB_149030c37;
      pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(&(this->ParamMapVariable).TypeDefHandle);
      local_2c4 = this->DataSetName;
      local_2bc.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_2bc,pFVar8);
      local_220.DataPtr =
           (wchar_t *)
           FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
      local_220.Size = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
      if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
        local_220.Size = iVar7;
      }
      bVar6 = FNiagaraVariableBase::IsInNameSpace(&local_220,local_2c4);
      if ((bVar6) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8123773844012924056>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCommon.cpp"
                             ,0x368,
                             "!GetDataSetBindableVariable().IsInNameSpace(FNiagaraConstants::ParticleAttributeNamespaceString)"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = &FNiagaraConstants::ParticleAttributeNamespaceString;
    }
    FNiagaraVariableBase::SetNamespacedName(&this->ParamMapVariable,pFVar9,this->DataSetName);
  }
LAB_149030c37:
  if (this_00 == (UNiagaraEmitterBase *)0x0) {
    return;
  }
  uVar1 = (this->BindingSourceMode).Value;
  if ((uVar1 == '\x02') || ((param_2 == Emitter && (uVar1 == '\0')))) {
    local_158.RapidIterationParameterMode = EmitterOrParticleScript;
    local_158.EmitterName.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_158.EmitterName.field0_0x0.TypedValue.Data.ArrayNum = 0;
    local_158.EmitterName.field0_0x0.TypedValue.Data.ArrayMax = -1;
    local_158.EmitterMapping.bIsSet = false;
    local_158.ModuleName.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_158.ModuleName.field0_0x0.TypedValue.Data.ArrayNum = 0;
    local_158.ModuleName.field0_0x0.TypedValue.Data.ArrayMax = -1;
    local_158.ModuleMapping.bIsSet = false;
    local_158.StackContextName.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_158.StackContextName.field0_0x0.TypedValue.Data.ArrayNum = 0;
    local_158.StackContextName.field0_0x0.TypedValue.Data.ArrayMax = -1;
    local_158.StackContextMapping.bIsSet = false;
    pFVar9 = UNiagaraEmitterBase::GetUniqueEmitterName(this_00);
    FNiagaraAliasContext::ChangeEmitterToEmitterName(&local_158,pFVar9);
    local_280._padding_ = *(longlong *)&(this->ParamMapVariable).Name;
    local_280._padding_._0_4_ = (this->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex;
    local_280.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_280.VarData.ArrayNum = 0;
    local_280.VarData.ArrayMax = 0;
    pFVar11 = FNiagaraUtilities::ResolveAliases(&local_78,&local_280,&local_158);
    uVar5 = *(undefined4 *)((longlong)&pFVar11->_padding_ + 4);
    (this->ParamMapVariable).Name.ComparisonIndex = (FNameEntryId)*(undefined4 *)&pFVar11->_padding_
    ;
    (this->ParamMapVariable).Name.Number = uVar5;
    (this->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex = (int)pFVar11->_padding_;
    if (local_78.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.VarData.AllocatorInstance.Data);
    }
    if (local_280.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.VarData.AllocatorInstance.Data);
    }
    pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(&(this->ParamMapVariable).TypeDefHandle);
    local_2b8 = this->DataSetName;
    local_2b0.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_2b0,pFVar8);
    local_260._padding_._0_4_ = local_2b8.ComparisonIndex.Value;
    local_260._padding_._4_4_ = local_2b8.Number;
    local_260.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.VarData.ArrayNum = 0;
    local_260.VarData.ArrayMax = 0;
    local_260._padding_._0_4_ = local_2b0.RegisteredTypeIndex;
    pFVar11 = FNiagaraUtilities::ResolveAliases(&local_58,&local_260,&local_158);
    uVar5 = *(undefined4 *)((longlong)&pFVar11->_padding_ + 4);
    (this->DataSetName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pFVar11->_padding_;
    (this->DataSetName).Number = uVar5;
    if (local_58.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.VarData.AllocatorInstance.Data);
    }
    if (local_260.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.VarData.AllocatorInstance.Data);
    }
    FNiagaraAliasContext::~FNiagaraAliasContext(&local_158);
  }
  pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(&(this->ParamMapVariable).TypeDefHandle);
  local_2e8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2e8.DebugPtr != (UObject *)0x0)
     ) {
    UE::GC::MarkAsReachable(local_2e8.DebugPtr);
  }
  local_2e0 = pFVar8->UnderlyingType;
  local_2de = pFVar8->Flags;
  local_2dc = pFVar8->Size;
  local_2da = pFVar8->Alignment;
  local_2d8 = pFVar8->RegisteredTypeDefIndex;
  local_2d4 = pFVar8->UnderlyingTypePathNameHash;
  uVar1 = (this->BindingSourceMode).Value;
  if ((uVar1 == '\x01') || ((param_2 == Particles && (uVar1 == '\0')))) {
    pcVar4 = *(code **)(this_00->_padding_ + 0x2b8);
    pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(&(this->ParamMapVariable).TypeDefHandle);
    local_2ac = this->DataSetName;
    local_2a4.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_2a4,pFVar8);
    bVar13 = (*pcVar4)(this_00,&local_2ac,&param_1->Version,&local_2e8);
  }
  else {
    if ((uVar1 != '\x02') && ((param_2 != Emitter || (uVar1 != '\0')))) {
      if (uVar1 == '\x03') {
        bVar6 = UNiagaraEmitterBase::CanObtainSystemAttribute
                          (this_00,&this->ParamMapVariable,
                           (FNiagaraTypeDefinition *)&local_2e8.ObjectPtr);
        this->bBindingExistsOnSource = bVar6;
      }
      else if (uVar1 == '\x04') {
        bVar6 = UNiagaraEmitterBase::CanObtainUserVariable(this_00,&this->ParamMapVariable);
        this->bBindingExistsOnSource = bVar6;
      }
      goto LAB_149030ed4;
    }
    bVar13 = (**(code **)(this_00->_padding_ + 0x2c0))(this_00,&this->ParamMapVariable,&local_2e8);
  }
  this->field_0x1d = this->field_0x1d ^ (this->bBindingExistsOnSource ^ bVar13) & 1;
LAB_149030ed4:
  if ((this->bBindingExistsOnSource != 0) &&
     (((pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(&(this->ParamMapVariable).TypeDefHandle),
       local_2e8.DebugPtr != (pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr ||
       (local_2e0 != pFVar8->UnderlyingType)) || (local_2de != pFVar8->Flags)))) {
    iVar7 = FNiagaraTypeDefinitionHandle::Register
                      (local_res8,(FNiagaraTypeDefinition *)&local_2e8.ObjectPtr);
    (this->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex = iVar7;
  }
  return;
}

// Dump @ 14903eaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraVariableAttributeBinding::Dump(FNiagaraVariableAttributeBinding *this)

{
  FNiagaraTypeDefinition *pFVar1;
  FName local_res10 [2];
  FString local_28;
  FString local_18;
  
  if (4 < (byte)LogNiagara._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  if (4 < (byte)LogNiagara._0_1_) {
    pFVar1 = FNiagaraTypeDefinitionHandle::Resolve(&(this->ParamMapVariable).TypeDefHandle);
    if ((pFVar1->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
      ::FString::FString(&local_28,L"Invalid");
    }
    else {
      local_res10[0] = UE::CoreUObject::Private::GetFName((UObject *)(local_res10 + 1));
      local_res10[0] = *(FName *)local_res10[0];
      ::FName::ToString(local_res10,&local_28);
    }
    ::FName::ToString(&(this->ParamMapVariable).Name,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogNiagara._0_1_) {
      ::FName::ToString(&this->DataSetName,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogNiagara._0_1_) {
        ::FName::ToString(&this->RootName,&local_18);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if (4 < (byte)LogNiagara._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  return;
}

// Matches @ 14905b7f0

bool __thiscall
FNiagaraVariableAttributeBinding::Matches
          (FNiagaraVariableAttributeBinding *this,FNiagaraVariableBase *param_1,
          FVersionedNiagaraEmitter *param_2,ENiagaraRendererSourceDataMode param_3)

{
  bool bVar1;
  FVersionedNiagaraEmitterBase *pFVar2;
  FVersionedNiagaraEmitterBase local_28;
  
  pFVar2 = FVersionedNiagaraEmitter::ToBase(param_2,&local_28);
  bVar1 = Matches(this,param_1,pFVar2,param_3);
  return bVar1;
}

// Matches @ 14905b840

bool __thiscall
FNiagaraVariableAttributeBinding::Matches
          (FNiagaraVariableAttributeBinding *this,FNiagaraVariableBase *param_1,
          FVersionedNiagaraEmitterBase *param_2,ENiagaraRendererSourceDataMode param_3)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  FNiagaraTypeDefinition *pFVar3;
  FNiagaraTypeDefinition *pFVar4;
  FString *pFVar5;
  FNiagaraAliasContext *pFVar6;
  FNiagaraVariable *pFVar7;
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
  
  if (param_1->Name == (this->ParamMapVariable).Name) {
    pFVar3 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(&(this->ParamMapVariable).TypeDefHandle);
    if ((((pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr ==
          (pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr) &&
        (pFVar3->UnderlyingType == pFVar4->UnderlyingType)) && (pFVar3->Flags == pFVar4->Flags)) {
      return true;
    }
  }
  local_118 = param_1->Name;
  local_110[0].RegisteredTypeIndex = (param_1->TypeDefHandle).RegisteredTypeIndex;
  local_108 = (FScriptContainerElement *)0x0;
  local_100 = 0;
  if (param_2->Emitter != (UNiagaraEmitterBase *)0x0) {
    local_f8._padding_ =
         (longlong)FNiagaraConstants::EmitterNamespaceString.Data.AllocatorInstance.Data;
    local_f8._padding_._0_4_ = FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum + -1;
    if (FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum == 0) {
      local_f8._padding_._0_4_ = 0;
    }
    bVar2 = FNiagaraVariableBase::IsInNameSpace((TStringView<wchar_t> *)&local_f8,param_1->Name);
    if (bVar2) {
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
      pFVar5 = UNiagaraEmitterBase::GetUniqueEmitterName(param_2->Emitter);
      pFVar6 = FNiagaraAliasContext::ChangeEmitterToEmitterName
                         ((FNiagaraAliasContext *)local_d8,pFVar5);
      local_f8._padding_._0_4_ = (param_1->TypeDefHandle).RegisteredTypeIndex;
      local_f8._padding_ = *(longlong *)&param_1->Name;
      local_f8.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.VarData.ArrayNum = 0;
      local_f8.VarData.ArrayMax = 0;
      pFVar7 = FNiagaraUtilities::ResolveAliases(&local_28,&local_f8,pFVar6);
      local_118 = (FName)pFVar7->_padding_;
      pTVar1 = &pFVar7->VarData;
      local_110[0].RegisteredTypeIndex = (int)pFVar7->_padding_;
      if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_108 != pTVar1) {
        if (local_108 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108);
        }
        local_108 = (pTVar1->AllocatorInstance).Data;
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_100._0_4_ = (pFVar7->VarData).ArrayNum;
        local_100._4_4_ = (pFVar7->VarData).ArrayMax;
        (pFVar7->VarData).ArrayNum = 0;
        (pFVar7->VarData).ArrayMax = 0;
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
  }
  if (local_118 == (this->ParamMapVariable).Name) {
    pFVar3 = FNiagaraTypeDefinitionHandle::Resolve(local_110);
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(&(this->ParamMapVariable).TypeDefHandle);
    if ((((pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr ==
          (pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr) &&
        (pFVar3->UnderlyingType == pFVar4->UnderlyingType)) && (pFVar3->Flags == pFVar4->Flags)) {
      bVar2 = true;
      goto LAB_14905bad4;
    }
  }
  bVar2 = false;
LAB_14905bad4:
  if (local_108 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108);
  }
  return bVar2;
}

// MatchesDefault @ 14905bb40

bool __thiscall
FNiagaraVariableAttributeBinding::MatchesDefault
          (FNiagaraVariableAttributeBinding *this,FNiagaraVariableAttributeBinding *param_1,
          ENiagaraRendererSourceDataMode param_2)

{
  if (this->DataSetName == param_1->DataSetName) {
    return this->RootName == param_1->RootName;
  }
  return false;
}

// PostLoad @ 14905e030

void __thiscall
FNiagaraVariableAttributeBinding::PostLoad
          (FNiagaraVariableAttributeBinding *this,ENiagaraRendererSourceDataMode param_1)

{
  return;
}

// RenameVariableIfMatching @ 149063540

bool __thiscall
FNiagaraVariableAttributeBinding::RenameVariableIfMatching
          (FNiagaraVariableAttributeBinding *this,FNiagaraVariableBase *param_1,
          FNiagaraVariableBase *param_2,FVersionedNiagaraEmitter *param_3,
          ENiagaraRendererSourceDataMode param_4)

{
  bool bVar1;
  FVersionedNiagaraEmitterBase *pFVar2;
  FVersionedNiagaraEmitterBase local_28;
  
  pFVar2 = FVersionedNiagaraEmitter::ToBase(param_3,&local_28);
  bVar1 = RenameVariableIfMatching(this,param_1,param_2,pFVar2,param_4);
  return bVar1;
}

// RenameVariableIfMatching @ 1490635a0

bool __thiscall
FNiagaraVariableAttributeBinding::RenameVariableIfMatching
          (FNiagaraVariableAttributeBinding *this,FNiagaraVariableBase *param_1,
          FNiagaraVariableBase *param_2,FVersionedNiagaraEmitterBase *param_3,
          ENiagaraRendererSourceDataMode param_4)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  bool bVar2;
  FNiagaraTypeDefinition *pFVar3;
  FNiagaraTypeDefinition *pFVar4;
  FString *pFVar5;
  FNiagaraAliasContext *pFVar6;
  FNiagaraVariable *pFVar7;
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
  
  if (param_1->Name == (this->ParamMapVariable).Name) {
    pFVar3 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(&(this->ParamMapVariable).TypeDefHandle);
    if ((((pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr ==
          (pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr) &&
        (pFVar3->UnderlyingType == pFVar4->UnderlyingType)) && (pFVar3->Flags == pFVar4->Flags)) {
      SetValue(this,&param_2->Name,param_3,param_4);
      return true;
    }
  }
  local_120[0].RegisteredTypeIndex = (param_1->TypeDefHandle).RegisteredTypeIndex;
  local_128 = param_1->Name;
  local_108._padding_ =
       (longlong)FNiagaraConstants::EmitterNamespaceString.Data.AllocatorInstance.Data;
  local_118 = (FScriptContainerElement *)0x0;
  local_110 = 0;
  local_108._padding_._0_4_ = FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum + -1;
  if (FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum == 0) {
    local_108._padding_._0_4_ = 0;
  }
  bVar2 = FNiagaraVariableBase::IsInNameSpace((TStringView<wchar_t> *)&local_108,param_1->Name);
  if (bVar2) {
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
    pFVar5 = UNiagaraEmitterBase::GetUniqueEmitterName(param_3->Emitter);
    pFVar6 = FNiagaraAliasContext::ChangeEmitterToEmitterName
                       ((FNiagaraAliasContext *)local_e8,pFVar5);
    local_108._padding_._0_4_ = (param_1->TypeDefHandle).RegisteredTypeIndex;
    local_108._padding_ = *(longlong *)&param_1->Name;
    local_108.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.VarData.ArrayNum = 0;
    local_108.VarData.ArrayMax = 0;
    pFVar7 = FNiagaraUtilities::ResolveAliases(&local_38,&local_108,pFVar6);
    local_128 = (FName)pFVar7->_padding_;
    pTVar1 = &pFVar7->VarData;
    local_120[0].RegisteredTypeIndex = (int)pFVar7->_padding_;
    if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_118 != pTVar1) {
      if (local_118 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118);
      }
      local_118 = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_110._0_4_ = (pFVar7->VarData).ArrayNum;
      local_110._4_4_ = (pFVar7->VarData).ArrayMax;
      (pFVar7->VarData).ArrayNum = 0;
      (pFVar7->VarData).ArrayMax = 0;
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
  if (local_128 == (this->ParamMapVariable).Name) {
    pFVar3 = FNiagaraTypeDefinitionHandle::Resolve(local_120);
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(&(this->ParamMapVariable).TypeDefHandle);
    if ((((pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr ==
          (pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr) &&
        (pFVar3->UnderlyingType == pFVar4->UnderlyingType)) && (pFVar3->Flags == pFVar4->Flags)) {
      SetValue(this,&param_2->Name,param_3,param_4);
      bVar2 = true;
      goto LAB_149063853;
    }
  }
  bVar2 = false;
LAB_149063853:
  if (local_118 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118);
  }
  return bVar2;
}

// ResetToDefault @ 149064540

void __thiscall
FNiagaraVariableAttributeBinding::ResetToDefault
          (FNiagaraVariableAttributeBinding *this,FNiagaraVariableAttributeBinding *param_1,
          FVersionedNiagaraEmitter *param_2,ENiagaraRendererSourceDataMode param_3)

{
  FVersionedNiagaraEmitterBase *pFVar1;
  FVersionedNiagaraEmitterBase local_28;
  
  pFVar1 = FVersionedNiagaraEmitter::ToBase(param_2,&local_28);
  ResetToDefault(this,param_1,pFVar1,param_3);
  return;
}

// ResetToDefault @ 149064590

void __thiscall
FNiagaraVariableAttributeBinding::ResetToDefault
          (FNiagaraVariableAttributeBinding *this,FNiagaraVariableAttributeBinding *param_1,
          FVersionedNiagaraEmitterBase *param_2,ENiagaraRendererSourceDataMode param_3)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraTypeDefinition *pFVar4;
  FString *pFVar5;
  FNiagaraVariableBase local_78;
  FName local_68;
  FNiagaraTypeDefinitionHandle local_60;
  FName local_5c;
  FNiagaraTypeDefinitionHandle local_54;
  TStringView<wchar_t> local_50;
  TStringView<wchar_t> local_40;
  FVersionedNiagaraEmitterBase local_30;
  
  uVar1 = (param_1->BindingSourceMode).Value;
  if ((uVar1 != '\0') && (1 < (byte)(uVar1 - 1))) {
    SetValue(this,&param_1->RootName,param_2,param_3);
    return;
  }
  pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(&(param_1->ParamMapVariable).TypeDefHandle);
  local_78.Name = param_1->RootName;
  local_78.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_78.TypeDefHandle,pFVar4);
  if (((param_3 == Emitter) && ((param_1->BindingSourceMode).Value == '\0')) ||
     (uVar1 = (param_1->BindingSourceMode).Value, uVar1 == '\x02')) {
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(&(param_1->ParamMapVariable).TypeDefHandle);
    local_68 = param_1->DataSetName;
    local_60.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_60,pFVar4);
    local_50.DataPtr =
         (wchar_t *)FNiagaraConstants::EmitterNamespaceString.Data.AllocatorInstance.Data;
    local_50.Size = FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum + -1;
    if (FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum == 0) {
      local_50.Size = 0;
    }
    bVar3 = FNiagaraVariableBase::IsInNameSpace(&local_50,local_68);
    if ((bVar3) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8123773844012924177>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCommon.cpp"
                           ,0x2ef,
                           "!InOther.GetDataSetBindableVariable().IsInNameSpace(FNiagaraConstants::EmitterNamespaceString)"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = &FNiagaraConstants::EmitterNamespaceString;
  }
  else {
    if (((param_3 != Particles) || (uVar1 != '\0')) && (uVar1 != '\x01')) goto LAB_149064737;
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(&(param_1->ParamMapVariable).TypeDefHandle);
    local_5c = param_1->DataSetName;
    local_54.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_54,pFVar4);
    local_40.DataPtr =
         (wchar_t *)FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
    local_40.Size = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
    if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
      local_40.Size = 0;
    }
    bVar3 = FNiagaraVariableBase::IsInNameSpace(&local_40,local_5c);
    if ((bVar3) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8123773844012924171>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCommon.cpp"
                           ,0x2f5,
                           "!InOther.GetDataSetBindableVariable().IsInNameSpace(FNiagaraConstants::ParticleAttributeNamespaceString)"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = &FNiagaraConstants::ParticleAttributeNamespaceString;
  }
  FNiagaraVariableBase::SetNamespacedName(&local_78,pFVar5,param_1->DataSetName);
LAB_149064737:
  local_30.Emitter = (UNiagaraEmitterBase *)0x0;
  local_30.Version.A = 0;
  local_30.Version.B = 0;
  local_30.Version.C = 0;
  local_30.Version.D = 0;
  SetValue(this,&local_78.Name,&local_30,param_3);
  return;
}

// SetAsPreviousValue @ 149065eb0

void __thiscall
FNiagaraVariableAttributeBinding::SetAsPreviousValue
          (FNiagaraVariableAttributeBinding *this,FNiagaraVariableAttributeBinding *param_1,
          FVersionedNiagaraEmitter *param_2,ENiagaraRendererSourceDataMode param_3)

{
  FVersionedNiagaraEmitterBase *pFVar1;
  FVersionedNiagaraEmitterBase local_28;
  
  pFVar1 = FVersionedNiagaraEmitter::ToBase(param_2,&local_28);
  SetAsPreviousValue(this,param_1,pFVar1,param_3);
  return;
}

// SetAsPreviousValue @ 149065f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraVariableAttributeBinding::SetAsPreviousValue
          (FNiagaraVariableAttributeBinding *this,FNiagaraVariableAttributeBinding *param_1,
          FVersionedNiagaraEmitterBase *param_2,ENiagaraRendererSourceDataMode param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FNiagaraTypeDefinition *pFVar7;
  wchar_t *pwVar8;
  void *pvVar9;
  uint uVar10;
  ulong64 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  undefined1 auStack_458 [32];
  longlong local_438;
  longlong local_430;
  ENiagaraRendererSourceDataMode local_428;
  undefined1 local_427 [7];
  FName local_420;
  FNiagaraTypeDefinitionHandle local_418 [2];
  FVersionedNiagaraEmitterBase *local_410;
  wchar_t *local_408;
  FName local_400;
  wchar_t *local_3f8;
  int iStack_3f0;
  undefined4 uStack_3ec;
  code *local_3e8;
  wchar_t **local_3e0;
  TStringView<wchar_t> local_3d8;
  void *local_3c8;
  undefined8 uStack_3c0;
  void *local_3b8;
  undefined8 uStack_3b0;
  TStringBuilderBase<wchar_t> local_3a8;
  wchar_t local_388 [128];
  wchar_t local_288 [128];
  wchar_t *local_188;
  int local_180;
  undefined4 local_17c;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_458;
  local_428 = param_3;
  local_410 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::ToString(&FNiagaraConstants::PreviousNamespace,&PreviousNamespace);
    atexit(`FNiagaraVariableAttributeBinding::SetAsPreviousValue'::__l2::
           _dynamic_atexit_destructor_for__PreviousNamespace__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar7 = FNiagaraTypeDefinitionHandle::Resolve(&(param_1->ParamMapVariable).TypeDefHandle);
  local_420 = param_1->RootName;
  local_418[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_418,pFVar7);
  (this->ParamMapVariable).Name = local_420;
  (this->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex = local_418[0].RegisteredTypeIndex;
  lVar15 = 0x10;
  this->RootName = local_420;
  this->DataSetName = local_420;
  local_178.Base = local_158;
  local_178.CurPos = local_158;
  local_178.End = (wchar_t *)local_58;
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  local_188 = (wchar_t *)0x0;
  local_180 = 0;
  local_17c = 0x10;
  ::FName::ToString(&local_420,&local_178);
  local_408 = local_288;
  local_3e0 = &local_408;
  local_3e8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FNiagaraVariableAttributeBinding::SetAsPreviousValue'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
              ::Call;
  local_3f8 = local_178.Base;
  iStack_3f0 = (int)((longlong)local_178.CurPos - (longlong)local_178.Base >> 1);
  local_3d8._12_4_ = uStack_3ec;
  local_3d8.Size = iStack_3f0;
  local_3d8.DataPtr = local_178.Base;
  UE::String::ParseTokens
            (&local_3d8,L'.',(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_3e8,None);
  iVar12 = local_180;
  pwVar8 = local_288;
  if (local_188 != (wchar_t *)0x0) {
    pwVar8 = local_188;
  }
  pwVar16 = pwVar8 + (longlong)local_180 * 8;
  while( true ) {
    if (local_180 != iVar12) {
      local_427[0] = 0;
      `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_427);
    }
    FVar3.Data = PreviousNamespace.Data.AllocatorInstance.Data;
    iVar5 = PreviousNamespace.Data.ArrayNum;
    if (pwVar8 == pwVar16) {
      local_3a8.Base = local_388;
      local_3a8.CurPos = local_388;
      local_3a8.End = local_288;
      local_3a8.bIsDynamic = false;
      local_3a8.bIsExternal = false;
      if (local_180 < 2) {
        iVar12 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar12 = 0;
        }
        uVar11 = (ulong64)iVar12;
        if (local_288 < local_388 + uVar11) {
          TStringBuilderBase<wchar_t>::Extend(&local_3a8,uVar11);
        }
        if (iVar12 != 0) {
          pvVar9 = FGenericPlatformString::Memcpy(local_3a8.CurPos,FVar3.Data,uVar11 * 2);
          local_3a8.CurPos = (wchar_t *)((longlong)pvVar9 + uVar11 * 2);
        }
        if (local_3a8.End < local_3a8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_3a8,1);
        }
        pvVar9 = FGenericPlatformString::Memcpy(local_3a8.CurPos,L".",2);
        local_3a8.CurPos = (wchar_t *)((longlong)pvVar9 + 2);
        if (local_180 < 1) {
          local_438 = 0;
          local_430 = (longlong)local_180;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pwVar8 = local_288;
        if (local_188 != (wchar_t *)0x0) {
          pwVar8 = local_188;
        }
        uVar1 = *(undefined8 *)(pwVar8 + 4);
        pvVar9 = *(void **)pwVar8;
        uVar11 = (ulong64)(int)uVar1;
        if (local_3a8.End < local_3a8.CurPos + uVar11) {
          TStringBuilderBase<wchar_t>::Extend(&local_3a8,uVar11);
        }
        if ((int)uVar1 != 0) {
          pvVar9 = FGenericPlatformString::Memcpy(local_3a8.CurPos,pvVar9,uVar11 * 2);
          local_3a8.CurPos = (wchar_t *)((longlong)pvVar9 + uVar11 * 2);
        }
      }
      else {
        pwVar8 = local_288;
        if (local_188 != (wchar_t *)0x0) {
          pwVar8 = local_188;
        }
        uVar1 = *(undefined8 *)(pwVar8 + 4);
        pvVar9 = *(void **)pwVar8;
        uStack_3c0 = *(undefined8 *)(pwVar8 + 4);
        uVar11 = (ulong64)(int)uVar1;
        local_3c8 = pvVar9;
        if (local_288 < local_388 + uVar11) {
          TStringBuilderBase<wchar_t>::Extend(&local_3a8,uVar11);
        }
        if ((int)uVar1 != 0) {
          pvVar9 = FGenericPlatformString::Memcpy(local_3a8.CurPos,pvVar9,uVar11 * 2);
          local_3a8.CurPos = (wchar_t *)((longlong)pvVar9 + uVar11 * 2);
        }
        if (local_3a8.End < local_3a8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_3a8,1);
        }
        pvVar9 = FGenericPlatformString::Memcpy(local_3a8.CurPos,L".",2);
        FVar3 = PreviousNamespace.Data.AllocatorInstance;
        local_3a8.CurPos = (wchar_t *)((longlong)pvVar9 + 2);
        iVar12 = PreviousNamespace.Data.ArrayNum + -1;
        if (PreviousNamespace.Data.ArrayNum == 0) {
          iVar12 = 0;
        }
        uVar11 = (ulong64)iVar12;
        if (local_3a8.End < local_3a8.CurPos + uVar11) {
          TStringBuilderBase<wchar_t>::Extend(&local_3a8,uVar11);
        }
        if (iVar12 != 0) {
          pvVar9 = FGenericPlatformString::Memcpy(local_3a8.CurPos,FVar3.Data,uVar11 * 2);
          local_3a8.CurPos = (wchar_t *)((longlong)pvVar9 + uVar11 * 2);
        }
        uVar13 = 1;
        if (1 < local_180) {
          do {
            if (local_3a8.End < local_3a8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_3a8,1);
            }
            pvVar9 = FGenericPlatformString::Memcpy(local_3a8.CurPos,L".",2);
            local_3a8.CurPos = (wchar_t *)((longlong)pvVar9 + 2);
            uVar10 = 0;
            if ((int)uVar13 < local_180) {
              uVar10 = ~uVar13 >> 0x1f;
            }
            if (uVar10 == 0) {
              local_438 = (longlong)(int)uVar13;
              local_430 = (longlong)local_180;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            pwVar8 = local_288;
            if (local_188 != (wchar_t *)0x0) {
              pwVar8 = local_188;
            }
            pvVar9 = *(void **)(lVar15 + (longlong)pwVar8);
            uStack_3b0 = ((undefined8 *)(lVar15 + (longlong)pwVar8))[1];
            iVar12 = (int)*(undefined8 *)(lVar15 + 8 + (longlong)pwVar8);
            uVar11 = (ulong64)iVar12;
            local_3b8 = pvVar9;
            if (local_3a8.End < local_3a8.CurPos + uVar11) {
              TStringBuilderBase<wchar_t>::Extend(&local_3a8,uVar11);
            }
            if (iVar12 != 0) {
              pvVar9 = FGenericPlatformString::Memcpy(local_3a8.CurPos,pvVar9,uVar11 * 2);
              local_3a8.CurPos = (wchar_t *)((longlong)pvVar9 + uVar11 * 2);
            }
            uVar13 = uVar13 + 1;
            lVar15 = lVar15 + 0x10;
          } while ((int)uVar13 < local_180);
        }
      }
      if (local_3a8.End < local_3a8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_3a8,1);
      }
      *local_3a8.CurPos = L'\0';
      ::FName::FName(&local_400,local_3a8.Base);
      SetValue(this,&local_400,local_410,local_428);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_3a8);
      goto LAB_1490664e2;
    }
    iVar14 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar14 = 0;
    }
    iVar5 = *(int *)(pwVar8 + 4);
    if (((iVar5 == iVar14) &&
        (((iVar5 == 0 || (iVar14 == 0)) ||
         (iVar6 = FGenericPlatformStricmp::Strnicmp
                            (*(wchar_t **)pwVar8,
                             (wchar_t *)PreviousNamespace.Data.AllocatorInstance.Data,
                             (longlong)iVar14), iVar6 == 0)))) && (iVar5 == iVar14)) break;
    pwVar8 = pwVar8 + 8;
  }
  SetValue(this,&local_420,local_410,local_428);
LAB_1490664e2:
  if (local_188 != (wchar_t *)0x0) {
    FMemory::Free(local_188);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
  return;
}

// SetAsPreviousValue @ 1490665a0

void __thiscall
FNiagaraVariableAttributeBinding::SetAsPreviousValue
          (FNiagaraVariableAttributeBinding *this,FNiagaraVariableBase *param_1,
          FVersionedNiagaraEmitter *param_2,ENiagaraRendererSourceDataMode param_3)

{
  FVersionedNiagaraEmitterBase *pFVar1;
  FVersionedNiagaraEmitterBase local_28;
  
  pFVar1 = FVersionedNiagaraEmitter::ToBase(param_2,&local_28);
  SetAsPreviousValue(this,param_1,pFVar1,param_3);
  return;
}

// SetAsPreviousValue @ 1490665f0

void __thiscall
FNiagaraVariableAttributeBinding::SetAsPreviousValue
          (FNiagaraVariableAttributeBinding *this,FNiagaraVariableBase *param_1,
          FVersionedNiagaraEmitterBase *param_2,ENiagaraRendererSourceDataMode param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FString *this_00;
  ForAnyElementType FVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  undefined1 local_78 [4];
  FName local_74;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::ToString(&FNiagaraConstants::PreviousNamespace,&PreviousNamespace);
      atexit(`FNiagaraVariableAttributeBinding::SetAsPreviousValue'::__l2::
             _dynamic_atexit_destructor_for__PreviousNamespace__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  (this->ParamMapVariable).Name = param_1->Name;
  (this->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex =
       (param_1->TypeDefHandle).RegisteredTypeIndex;
  this->RootName = param_1->Name;
  this->DataSetName = param_1->Name;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  this_00 = ::FName::ToString(&param_1->Name,&local_48);
  ::FString::ParseIntoArray(this_00,&local_68,L".",true);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  iVar3 = local_68.ArrayNum;
  uVar7 = (ulonglong)local_68.ArrayNum;
  pFVar6 = local_68.AllocatorInstance.Data + uVar7 * 0x10;
  FVar4.Data = local_68.AllocatorInstance.Data;
  do {
    if ((int)uVar7 != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
      uVar7 = local_68._8_8_ & 0xffffffff;
    }
    iVar2 = (int)uVar7;
    if (FVar4.Data == pFVar6) {
      iVar3 = iVar2;
      if ((local_68.AllocatorInstance.Data <
           (FScriptContainerElement *)((longlong)&PreviousNamespace.Data.AllocatorInstance.Data + 1)
          ) && (&PreviousNamespace <
                local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x10)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar3 = local_68.ArrayNum;
      }
      if (iVar3 == local_68.ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
      }
      local_68.ArrayNum = iVar3 + 1;
      lVar5 = (ulonglong)(1 < iVar2) * 0x10;
      memmove(local_68.AllocatorInstance.Data + lVar5 + 0x10,local_68.AllocatorInstance.Data + lVar5
              ,(longlong)(int)(iVar3 - (uint)(1 < iVar2)) << 4);
      pFVar6 = local_68.AllocatorInstance.Data + lVar5;
      *(FScriptContainerElement **)pFVar6 = (FScriptContainerElement *)0x0;
      FVar4 = PreviousNamespace.Data.AllocatorInstance;
      iVar3 = PreviousNamespace.Data.ArrayNum;
      *(int *)(pFVar6 + 8) = iVar3;
      if (iVar3 == 0) {
        *(int *)(pFVar6 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,0,(ForAnyElementType *)pFVar6,iVar3,(int *)(pFVar6 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar6,FVar4.Data,(longlong)iVar3 * 2);
      }
      iVar3 = local_68.ArrayNum;
      uVar7 = (ulonglong)local_68.ArrayNum;
      bVar8 = true;
      pFVar6 = local_68.AllocatorInstance.Data + uVar7 * 0x10;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      FVar4.Data = local_68.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar7 != iVar3) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_78);
        }
        if (FVar4.Data == pFVar6) break;
        if (bVar8) {
          bVar8 = false;
        }
        else {
          ::FString::AppendChars(&local_58,L".",1);
        }
        iVar2 = *(int *)(FVar4.Data + 8) + -1;
        if (*(int *)(FVar4.Data + 8) == 0) {
          iVar2 = 0;
        }
        ::FString::AppendChars(&local_58,*(wchar_t **)FVar4.Data,iVar2);
        uVar7 = local_68._8_8_ & 0xffffffff;
        FVar4.Data = FVar4.Data + 0x10;
      }
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar4.Data = local_58.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_74,(wchar_t *)FVar4.Data);
      SetValue(this,&local_74,param_2,param_3);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      goto LAB_1490668f0;
    }
    iVar2 = *(int *)(FVar4.Data + 8);
    if (iVar2 == PreviousNamespace.Data.ArrayNum) {
      if (iVar2 < 2) {
LAB_14906670c:
        SetValue(this,&param_1->Name,param_2,param_3);
LAB_1490668f0:
        DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
        if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
        return;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)FVar4.Data,
                         (wchar_t *)PreviousNamespace.Data.AllocatorInstance.Data);
      uVar7 = local_68._8_8_ & 0xffffffff;
      bVar8 = iVar2 == 0;
    }
    else {
      bVar8 = iVar2 + PreviousNamespace.Data.ArrayNum == 1;
    }
    if (bVar8) goto LAB_14906670c;
    FVar4.Data = FVar4.Data + 0x10;
  } while( true );
}

// SetValue @ 1490684e0

void __thiscall
FNiagaraVariableAttributeBinding::SetValue
          (FNiagaraVariableAttributeBinding *this,FName *param_1,FVersionedNiagaraEmitter *param_2,
          ENiagaraRendererSourceDataMode param_3)

{
  FVersionedNiagaraEmitterBase *pFVar1;
  FVersionedNiagaraEmitterBase local_28;
  
  pFVar1 = FVersionedNiagaraEmitter::ToBase(param_2,&local_28);
  SetValue(this,param_1,pFVar1,param_3);
  return;
}

// SetValue @ 149068530

void __thiscall
FNiagaraVariableAttributeBinding::SetValue
          (FNiagaraVariableAttributeBinding *this,FName *param_1,
          FVersionedNiagaraEmitterBase *param_2,ENiagaraRendererSourceDataMode param_3)

{
  uint uVar1;
  UNiagaraEmitterBase *this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FNiagaraTypeDefinition *pFVar7;
  FName *pFVar8;
  FNiagaraVariableBase *pFVar9;
  FString *pFVar10;
  FNiagaraAliasContext *pFVar11;
  FNiagaraVariable *pFVar12;
  int iVar13;
  char local_res8 [8];
  FNiagaraVariableBase local_138;
  undefined1 local_128 [16];
  ForAnyElementType local_118;
  undefined8 local_110;
  undefined1 local_108 [40];
  void *local_e0;
  bool local_d0;
  TOptional<FString>_u_0 local_c8;
  void *local_b8;
  void *local_a8;
  bool local_98;
  TOptional<FString>_u_0 local_90;
  void *local_80;
  void *local_70;
  bool local_60;
  FNiagaraVariable local_58;
  
  this_00 = param_2->Emitter;
  this->RootName = *param_1;
  pFVar7 = FNiagaraTypeDefinitionHandle::Resolve(&(this->ParamMapVariable).TypeDefHandle);
  local_138.Name = this->RootName;
  local_138.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_138.TypeDefHandle,pFVar7);
  local_128._0_8_ = FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
  iVar13 = 0;
  local_128._8_4_ = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
  if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
    local_128._8_4_ = iVar13;
  }
  bVar2 = FNiagaraVariableBase::IsInNameSpace((TStringView<wchar_t> *)local_128,local_138.Name);
  local_128._0_8_ = FNiagaraConstants::EmitterNamespaceString.Data.AllocatorInstance.Data;
  local_128._8_4_ = FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum + -1;
  if (FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum == 0) {
    local_128._8_4_ = iVar13;
  }
  bVar3 = FNiagaraVariableBase::IsInNameSpace((TStringView<wchar_t> *)local_128,local_138.Name);
  if (this_00 == (UNiagaraEmitterBase *)0x0) {
    bVar4 = false;
  }
  else {
    pFVar8 = (FName *)UNiagaraEmitterBase::GetUniqueEmitterName(this_00);
    local_128._0_8_ = *pFVar8;
    uVar1 = pFVar8[1].ComparisonIndex.Value;
    local_128._8_4_ = uVar1 - 1;
    if (uVar1 == 0) {
      local_128._8_4_ = iVar13;
    }
    bVar4 = FNiagaraVariableBase::IsInNameSpace((TStringView<wchar_t> *)local_128,local_138.Name);
  }
  local_128._0_8_ = FNiagaraConstants::SystemNamespaceString.Data.AllocatorInstance.Data;
  local_128._8_4_ = FNiagaraConstants::SystemNamespaceString.Data.ArrayNum + -1;
  if (FNiagaraConstants::SystemNamespaceString.Data.ArrayNum == 0) {
    local_128._8_4_ = iVar13;
  }
  local_res8[0] =
       FNiagaraVariableBase::IsInNameSpace((TStringView<wchar_t> *)local_128,local_138.Name);
  local_128._0_8_ = FNiagaraConstants::UserNamespaceString.Data.AllocatorInstance.Data;
  local_128._8_4_ = FNiagaraConstants::UserNamespaceString.Data.ArrayNum + -1;
  if (FNiagaraConstants::UserNamespaceString.Data.ArrayNum == 0) {
    local_128._8_4_ = iVar13;
  }
  bVar5 = FNiagaraVariableBase::IsInNameSpace((TStringView<wchar_t> *)local_128,local_138.Name);
  local_128._0_8_ = FNiagaraConstants::StackContextNamespaceString.Data.AllocatorInstance.Data;
  local_128._8_4_ = FNiagaraConstants::StackContextNamespaceString.Data.ArrayNum + -1;
  if (FNiagaraConstants::StackContextNamespaceString.Data.ArrayNum == 0) {
    local_128._8_4_ = 0;
  }
  bVar6 = FNiagaraVariableBase::IsInNameSpace((TStringView<wchar_t> *)local_128,local_138.Name);
  if ((bVar6) || (bVar2)) {
    if (param_3 == Particles) {
      pFVar9 = FNiagaraConstants::GetAttributeAsParticleDataSetKey
                         ((FNiagaraVariableBase *)local_128,&local_138);
      local_138.Name = pFVar9->Name;
      (this->BindingSourceMode).Value = '\0';
      goto LAB_149068a73;
    }
    if (!bVar6) goto LAB_1490686e8;
LAB_1490686ed:
    if (param_3 == Emitter) {
      pFVar9 = FNiagaraConstants::GetAttributeAsEmitterDataSetKey
                         ((FNiagaraVariableBase *)local_128,&local_138);
      local_138.Name = pFVar9->Name;
      (this->BindingSourceMode).Value = '\0';
      goto LAB_149068a73;
    }
  }
  else {
LAB_1490686e8:
    if (bVar3) goto LAB_1490686ed;
  }
  if ((bVar4 == false) || (param_3 != Emitter)) {
    if (bVar2) {
      pFVar9 = FNiagaraConstants::GetAttributeAsParticleDataSetKey
                         ((FNiagaraVariableBase *)local_128,&local_138);
      local_138.Name = pFVar9->Name;
      (this->BindingSourceMode).Value = '\x01';
    }
    else if ((bVar3) || (bVar4 != false)) {
      if (this_00 != (UNiagaraEmitterBase *)0x0) {
        local_108._0_4_ = None;
        local_108._8_8_ = (FScriptContainerElement *)0x0;
        local_108._16_4_ = 0;
        local_d0 = false;
        local_c8.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_c8.TypedValue.Data.ArrayNum = 0;
        local_98 = false;
        local_90.TypedValue.Data.AllocatorInstance.Data =
             (ForAnyElementType)(FScriptContainerElement *)0x0;
        local_90.TypedValue.Data.ArrayNum = 0;
        local_60 = false;
        local_108._20_4_ = -1;
        local_c8.TypedValue.Data.ArrayMax = -1;
        local_90.TypedValue.Data.ArrayMax = -1;
        pFVar10 = UNiagaraEmitterBase::GetUniqueEmitterName(this_00);
        pFVar11 = FNiagaraAliasContext::ChangeEmitterNameToEmitter
                            ((FNiagaraAliasContext *)local_108,pFVar10);
        local_128._8_4_ = local_138.TypeDefHandle.RegisteredTypeIndex;
        local_128._0_4_ = local_138.Name.ComparisonIndex.Value;
        local_128._4_4_ = local_138.Name.Number;
        local_118.Data = (FScriptContainerElement *)0x0;
        local_110._0_4_ = 0;
        local_110._4_4_ = 0;
        pFVar12 = FNiagaraUtilities::ResolveAliases(&local_58,(FNiagaraVariable *)local_128,pFVar11)
        ;
        local_138.Name = (FName)pFVar12->_padding_;
        local_138.TypeDefHandle.RegisteredTypeIndex = (int)pFVar12->_padding_;
        if (local_58.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.VarData.AllocatorInstance.Data);
        }
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data);
        }
        if (local_60 != false) {
          if (local_70 != (void *)0x0) {
            FMemory::Free(local_70);
          }
          if (local_80 != (void *)0x0) {
            FMemory::Free(local_80);
          }
        }
        if ((local_90.TypedValue.Data.ArrayMax != -1) &&
           (local_90.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_90.TypedValue.Data.AllocatorInstance.Data);
        }
        if (local_98 != false) {
          if (local_a8 != (void *)0x0) {
            FMemory::Free(local_a8);
          }
          if (local_b8 != (void *)0x0) {
            FMemory::Free(local_b8);
          }
        }
        if ((local_c8.TypedValue.Data.ArrayMax != -1) &&
           (local_c8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_c8.TypedValue.Data.AllocatorInstance.Data);
        }
        if (local_d0 != false) {
          if (local_e0 != (void *)0x0) {
            FMemory::Free(local_e0);
          }
          if ((void *)local_108._24_8_ != (void *)0x0) {
            FMemory::Free((void *)local_108._24_8_);
          }
        }
        if ((local_108._20_4_ != -1) &&
           ((FScriptContainerElement *)local_108._8_8_ != (FScriptContainerElement *)0x0)) {
          FMemory::Free((void *)local_108._8_8_);
        }
      }
      pFVar9 = FNiagaraConstants::GetAttributeAsEmitterDataSetKey
                         ((FNiagaraVariableBase *)local_128,&local_138);
      local_138.Name = pFVar9->Name;
      (this->BindingSourceMode).Value = '\x02';
    }
    else if (local_res8[0] == '\0') {
      if (bVar5) {
        (this->BindingSourceMode).Value = '\x04';
      }
      else if (bVar6) {
        `FNiagaraVariableAttributeBinding::SetValue'::__l36::<lambda_1>::operator()(local_res8);
      }
    }
    else {
      (this->BindingSourceMode).Value = '\x03';
    }
  }
  else {
    local_108._0_4_ = None;
    local_108._8_8_ = (FScriptContainerElement *)0x0;
    local_108._16_4_ = 0;
    local_d0 = false;
    local_c8.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_c8.TypedValue.Data.ArrayNum = 0;
    local_98 = false;
    local_90.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_90.TypedValue.Data.ArrayNum = 0;
    local_60 = false;
    local_108._20_4_ = -1;
    local_c8.TypedValue.Data.ArrayMax = -1;
    local_90.TypedValue.Data.ArrayMax = -1;
    pFVar10 = UNiagaraEmitterBase::GetUniqueEmitterName(this_00);
    pFVar11 = FNiagaraAliasContext::ChangeEmitterNameToEmitter
                        ((FNiagaraAliasContext *)local_108,pFVar10);
    local_128._8_4_ = local_138.TypeDefHandle.RegisteredTypeIndex;
    local_128._0_4_ = local_138.Name.ComparisonIndex.Value;
    local_128._4_4_ = local_138.Name.Number;
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110._0_4_ = 0;
    local_110._4_4_ = 0;
    pFVar12 = FNiagaraUtilities::ResolveAliases(&local_58,(FNiagaraVariable *)local_128,pFVar11);
    local_138.Name = (FName)pFVar12->_padding_;
    local_138.TypeDefHandle.RegisteredTypeIndex = (int)pFVar12->_padding_;
    if (local_58.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.VarData.AllocatorInstance.Data);
    }
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    if (local_60 != false) {
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      if (local_80 != (void *)0x0) {
        FMemory::Free(local_80);
      }
    }
    if ((local_90.TypedValue.Data.ArrayMax != -1) &&
       (local_90.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_90.TypedValue.Data.AllocatorInstance.Data);
    }
    if (local_98 != false) {
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
    }
    if ((local_c8.TypedValue.Data.ArrayMax != -1) &&
       (local_c8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_c8.TypedValue.Data.AllocatorInstance.Data);
    }
    if (local_d0 != false) {
      if (local_e0 != (void *)0x0) {
        FMemory::Free(local_e0);
      }
      if ((void *)local_108._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_108._24_8_);
      }
    }
    if ((local_108._20_4_ != -1) &&
       ((FScriptContainerElement *)local_108._8_8_ != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_108._8_8_);
    }
    pFVar9 = FNiagaraConstants::GetAttributeAsEmitterDataSetKey
                       ((FNiagaraVariableBase *)local_128,&local_138);
    local_138.Name = pFVar9->Name;
    (this->BindingSourceMode).Value = '\0';
  }
LAB_149068a73:
  this->RootName = local_138.Name;
  CacheValues(this,param_2,param_3);
  return;
}

// Setup @ 14906a2e0

void __thiscall
FNiagaraVariableAttributeBinding::Setup
          (FNiagaraVariableAttributeBinding *this,FNiagaraVariableBase *param_1,
          FNiagaraVariable *param_2,ENiagaraRendererSourceDataMode param_3)

{
  int iVar1;
  FNiagaraTypeDefinition *pFVar2;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  FVersionedNiagaraEmitterBase local_28;
  
  this->RootName = param_1->Name;
  pFVar2 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  iVar1 = FNiagaraTypeDefinitionHandle::Register(local_res8,pFVar2);
  (this->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  local_28.Emitter = (UNiagaraEmitterBase *)0x0;
  local_28.Version.A = 0;
  local_28.Version.B = 0;
  local_28.Version.C = 0;
  local_28.Version.D = 0;
  SetValue(this,&param_1->Name,&local_28,param_3);
  return;
}

// FNiagaraVariableAttributeBinding @ 1492d1690

FNiagaraVariableAttributeBinding * __thiscall
FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding
          (FNiagaraVariableAttributeBinding *this)

{
  int iVar1;
  FNiagaraTypeRegistry *this_00;
  
  (this->RootName).ComparisonIndex = 0;
  (this->RootName).Number = 0;
  (this->ParamMapVariable).Name.ComparisonIndex = 0;
  (this->ParamMapVariable).Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar1 = -1;
  }
  else {
    this_00 = FNiagaraTypeRegistry::Get();
    iVar1 = FNiagaraTypeRegistry::RegisterTypeInternal(this_00,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->ParamMapVariable).TypeDefHandle.RegisteredTypeIndex = iVar1;
  this->bBindingExistsOnSource = '\0';
  this->bIsCachedParticleValue = '\x01';
  (this->DataSetName).ComparisonIndex = 0;
  (this->DataSetName).Number = 0;
  (this->BindingSourceMode).Value = '\0';
  return this;
}

// operator() @ 15053cf80

bool __thiscall
`FNiagaraVariableAttributeBinding::SetValue'::__l36::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8123773844012924350>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8123773844012924350>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

