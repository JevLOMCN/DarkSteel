// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// FNiagaraStatelessSpawnInfo @ 149427820

FNiagaraStatelessSpawnInfo * __thiscall
FNiagaraStatelessSpawnInfo::FNiagaraStatelessSpawnInfo
          (FNiagaraStatelessSpawnInfo *this,FNiagaraStatelessSpawnInfo *param_1)

{
  byte bVar1;
  FInstancedStruct *pFVar2;
  
  this->Type = param_1->Type;
  this->SpawnTime = param_1->SpawnTime;
  (this->Amount).Mode = (param_1->Amount).Mode;
  (this->Amount).ParameterBinding.Name = (param_1->Amount).ParameterBinding.Name;
  (this->Amount).ParameterBinding.TypeDefHandle.RegisteredTypeIndex =
       (param_1->Amount).ParameterBinding.TypeDefHandle.RegisteredTypeIndex;
  pFVar2 = &(this->Amount).ParameterExpression;
  (pFVar2->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->Amount).ParameterExpression.StructMemory = (uchar *)0x0;
  FInstancedStruct::InitializeAs
            (pFVar2,(param_1->Amount).ParameterExpression.ScriptStruct.field0_0x0.DebugPtr,
             (param_1->Amount).ParameterExpression.StructMemory);
  (this->Amount).Min = (param_1->Amount).Min;
  (this->Amount).Max = (param_1->Amount).Max;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->Rate,&param_1->Rate);
  bVar1 = (this->bEnabled ^ param_1->bEnabled) & 1 ^ this->field_0x60;
  this->field_0x60 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x60) & 2 ^ bVar1;
  this->field_0x60 = bVar1;
  this->field_0x60 = (bVar1 ^ param_1->field_0x60) & 4 ^ bVar1;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->SpawnProbability,&param_1->SpawnProbability);
  pFVar2 = &(this->LoopCountLimit).ParameterExpression;
  (this->LoopCountLimit).Mode = (param_1->LoopCountLimit).Mode;
  (this->LoopCountLimit).ParameterBinding.Name = (param_1->LoopCountLimit).ParameterBinding.Name;
  (this->LoopCountLimit).ParameterBinding.TypeDefHandle.RegisteredTypeIndex =
       (param_1->LoopCountLimit).ParameterBinding.TypeDefHandle.RegisteredTypeIndex;
  (pFVar2->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->LoopCountLimit).ParameterExpression.StructMemory = (uchar *)0x0;
  FInstancedStruct::InitializeAs
            (pFVar2,(param_1->LoopCountLimit).ParameterExpression.ScriptStruct.field0_0x0.DebugPtr,
             (param_1->LoopCountLimit).ParameterExpression.StructMemory);
  (this->LoopCountLimit).Min = (param_1->LoopCountLimit).Min;
  (this->LoopCountLimit).Max = (param_1->LoopCountLimit).Max;
  return this;
}

// StaticStruct @ 1494736f0

UScriptStruct * __cdecl FNiagaraStatelessSpawnInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessSpawnInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessSpawnInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo,(UObject *)pUVar1,
                         L"NiagaraStatelessSpawnInfo");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraStatelessSpawnInfo.OuterSingleton;
}

// FNiagaraStatelessSpawnInfo @ 149475e60

FNiagaraStatelessSpawnInfo * __thiscall
FNiagaraStatelessSpawnInfo::FNiagaraStatelessSpawnInfo(FNiagaraStatelessSpawnInfo *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float fVar3;
  int iVar4;
  
  (this->Amount).Mode = UniformConstant;
  this->Type = Burst;
  this->SpawnTime = 0.0;
  (this->Amount).ParameterBinding.Name.ComparisonIndex = 0;
  (this->Amount).ParameterBinding.Name.Number = 0;
  iVar4 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->Amount).ParameterBinding.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def
                    );
  (this->Amount).ParameterBinding.TypeDefHandle.RegisteredTypeIndex = iVar4;
  FInstancedStruct::FInstancedStruct(&(this->Amount).ParameterExpression);
  (this->Amount).Min = 0;
  (this->Amount).Max = 0;
  FNiagaraDistributionRangeInt::InitConstant(&this->Amount,1);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->Rate,__real_42700000);
  fVar3 = __real_3f800000;
  puVar2 = &this->field_0x60;
  this->bEnabled = '\x01';
  this->bLoopCountLimitEnabled = '\0';
  this->bSpawnProbabilityEnabled = '\0';
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat(&this->SpawnProbability,fVar3);
  (this->LoopCountLimit).Mode = UniformConstant;
  (this->LoopCountLimit).ParameterBinding.Name.ComparisonIndex = 0;
  (this->LoopCountLimit).ParameterBinding.Name.Number = 0;
  iVar4 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->LoopCountLimit).ParameterBinding.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->LoopCountLimit).ParameterBinding.TypeDefHandle.RegisteredTypeIndex = iVar4;
  FInstancedStruct::FInstancedStruct(&(this->LoopCountLimit).ParameterExpression);
  (this->LoopCountLimit).Min = 0;
  (this->LoopCountLimit).Max = 0;
  FNiagaraDistributionRangeInt::InitConstant(&this->LoopCountLimit,1);
  return this;
}

// IsValid @ 14947d450

bool __thiscall
FNiagaraStatelessSpawnInfo::IsValid(FNiagaraStatelessSpawnInfo *this,TOptional<float> param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  float fVar5;
  
  if (this->bEnabled != 0) {
    if (this->Type == Burst) {
      if ((0 < (this->Amount).Max + (this->Amount).Min) && (fVar1 = this->SpawnTime, 0.0 <= fVar1))
      {
        fVar5 = fVar1 + __real_322bcc77;
        if (*(char *)((longlong)param_1 + 4) != '\0') {
          fVar5 = *(float *)param_1;
        }
        if (fVar1 < fVar5) {
          return true;
        }
      }
    }
    else {
      if (this->Type == Rate) {
        return 0.0 < (this->Rate).Max + (this->Rate).Min;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessSpawnInfo.cpp"
                         ,0x14,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  return false;
}

