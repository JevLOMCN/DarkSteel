// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// StaticStruct @ 149316d90

UScriptStruct * __cdecl FNiagaraPlatformSetCVarCondition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetCVarCondition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetCVarCondition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition,
                         (UObject *)pUVar1,L"NiagaraPlatformSetCVarCondition");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraPlatformSetCVarCondition.OuterSingleton;
}

// Evaluate_Internal<int> @ 14931d470

bool __thiscall
FNiagaraPlatformSetCVarCondition::Evaluate_Internal<int>
          (FNiagaraPlatformSetCVarCondition *this,UDeviceProfile *param_1,int param_2,bool param_3,
          bool *param_4,bool *param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  IConsoleVariable *pIVar6;
  ulonglong uVar7;
  bool bVar8;
  
  pIVar6 = this->CachedCVar;
  if (((pIVar6 == (IConsoleVariable *)0x0) ||
      (this->LastCachedFrame <= FNiagaraPlatformSet::LastDirtiedFrame)) ||
     (this->LastCachedFrame == 0xffffffff)) {
    this->LastCachedFrame = GFrameNumber;
    pIVar6 = FNiagaraPlatformSet::GetCVar(this->CVarName);
    this->CachedCVar = pIVar6;
    if (pIVar6 == (IConsoleVariable *)0x0) {
      return false;
    }
  }
  if (param_1 == (UDeviceProfile *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5046260443048313939>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                       ,0x453,"DeviceProfile");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
LAB_14931d508:
    uVar7 = (**(code **)(*(longlong *)pIVar6 + 0x18))(pIVar6);
    if ((uVar7 & 4) == 0) {
      bVar2 = true;
      goto LAB_14931d51d;
    }
  }
  else if (GbNiagaraAllowRuntimeScalabilityChanges != 0) goto LAB_14931d508;
  bVar2 = false;
LAB_14931d51d:
  iVar5 = (**(code **)(*(longlong *)pIVar6 + 200))(pIVar6);
  if (((this->bUseMinInt == 0) || (this->MinInt <= iVar5)) &&
     ((this->bUseMaxInt == 0 || (iVar5 <= this->MaxInt)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  bVar8 = bVar4;
  if (bVar2) {
    bVar8 = true;
  }
  *param_4 = bVar8;
  bVar8 = true;
  if (!bVar2) {
    bVar8 = (bool)(bVar4 ^ 1);
  }
  *param_5 = bVar8;
  return bVar4;
}

// Evaluate_Internal<float> @ 14931d590

bool __thiscall
FNiagaraPlatformSetCVarCondition::Evaluate_Internal<float>
          (FNiagaraPlatformSetCVarCondition *this,UDeviceProfile *param_1,int param_2,bool param_3,
          bool *param_4,bool *param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  IConsoleVariable *pIVar5;
  ulonglong uVar6;
  bool bVar7;
  float fVar8;
  
  pIVar5 = this->CachedCVar;
  if (((pIVar5 == (IConsoleVariable *)0x0) ||
      (this->LastCachedFrame <= FNiagaraPlatformSet::LastDirtiedFrame)) ||
     (this->LastCachedFrame == 0xffffffff)) {
    this->LastCachedFrame = GFrameNumber;
    pIVar5 = FNiagaraPlatformSet::GetCVar(this->CVarName);
    this->CachedCVar = pIVar5;
    if (pIVar5 == (IConsoleVariable *)0x0) {
      return false;
    }
  }
  if (param_1 == (UDeviceProfile *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5046260443048313939>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                       ,0x453,"DeviceProfile");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
LAB_14931d628:
    uVar6 = (**(code **)(*(longlong *)pIVar5 + 0x18))(pIVar5);
    if ((uVar6 & 4) == 0) {
      bVar2 = true;
      goto LAB_14931d63d;
    }
  }
  else if (GbNiagaraAllowRuntimeScalabilityChanges != 0) goto LAB_14931d628;
  bVar2 = false;
LAB_14931d63d:
  fVar8 = (float)(**(code **)(*(longlong *)pIVar5 + 0xd0))(pIVar5);
  if (((this->bUseMinFloat != 0) && (fVar8 < this->MinFloat)) ||
     ((this->bUseMaxFloat != 0 && (this->MaxFloat <= fVar8 && fVar8 != this->MaxFloat)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  bVar7 = bVar4;
  if (bVar2) {
    bVar7 = true;
  }
  *param_4 = bVar7;
  bVar7 = true;
  if (!bVar2) {
    bVar7 = (bool)(bVar4 ^ 1);
  }
  *param_5 = bVar7;
  return bVar4;
}

// Evaluate_Internal<bool> @ 14931d6b0

bool __thiscall
FNiagaraPlatformSetCVarCondition::Evaluate_Internal<bool>
          (FNiagaraPlatformSetCVarCondition *this,UDeviceProfile *param_1,int param_2,bool param_3,
          bool *param_4,bool *param_5)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  IConsoleVariable *pIVar6;
  ulonglong uVar7;
  
  pIVar6 = this->CachedCVar;
  if (((pIVar6 == (IConsoleVariable *)0x0) ||
      (this->LastCachedFrame <= FNiagaraPlatformSet::LastDirtiedFrame)) ||
     (this->LastCachedFrame == 0xffffffff)) {
    this->LastCachedFrame = GFrameNumber;
    pIVar6 = FNiagaraPlatformSet::GetCVar(this->CVarName);
    this->CachedCVar = pIVar6;
    if (pIVar6 == (IConsoleVariable *)0x0) {
      return false;
    }
  }
  if (param_1 == (UDeviceProfile *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5046260443048313939>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                       ,0x453,"DeviceProfile");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
LAB_14931d748:
    uVar7 = (**(code **)(*(longlong *)pIVar6 + 0x18))(pIVar6);
    if ((uVar7 & 4) == 0) {
      bVar3 = true;
      goto LAB_14931d75d;
    }
  }
  else if (GbNiagaraAllowRuntimeScalabilityChanges != 0) goto LAB_14931d748;
  bVar3 = false;
LAB_14931d75d:
  cVar5 = (**(code **)(*(longlong *)pIVar6 + 0xc0))(pIVar6);
  bVar1 = this->Value;
  *param_4 = bVar3 || (bool)cVar5 == bVar1;
  *param_5 = bVar3 || (bool)cVar5 != bVar1;
  return (bool)cVar5 == bVar1;
}

// GetCVarValue<int> @ 14932ac60

int __thiscall
FNiagaraPlatformSetCVarCondition::GetCVarValue<int>
          (FNiagaraPlatformSetCVarCondition *this,IConsoleVariable *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014932ac66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(longlong *)param_1 + 200))(param_1);
  return iVar1;
}

// GetCVarValue<float> @ 14932ac80

float __thiscall
FNiagaraPlatformSetCVarCondition::GetCVarValue<float>
          (FNiagaraPlatformSetCVarCondition *this,IConsoleVariable *param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014932ac86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)param_1 + 0xd0))(param_1);
  return fVar1;
}

// GetCVarValue<bool> @ 14932aca0

bool __thiscall
FNiagaraPlatformSetCVarCondition::GetCVarValue<bool>
          (FNiagaraPlatformSetCVarCondition *this,IConsoleVariable *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014932aca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xc0))(param_1);
  return (bool)uVar1;
}

// FNiagaraPlatformSetCVarCondition @ 149333690

FNiagaraPlatformSetCVarCondition * __thiscall
FNiagaraPlatformSetCVarCondition::FNiagaraPlatformSetCVarCondition
          (FNiagaraPlatformSetCVarCondition *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  (this->CVarName).ComparisonIndex = 0;
  (this->CVarName).Number = 0;
  this->PassResponse = None;
  this->FailResponse = Disable;
  this->Value = true;
  puVar2 = &this->field_0x1c;
  this->bUseMinInt = 1;
  this->bUseMaxFloat = 0;
  this->bUseMinFloat = 1;
  this->bUseMaxInt = 0;
  this->MinInt = 1;
  this->MaxInt = 1;
  this->MinFloat = 1.0;
  this->MaxFloat = 1.0;
  this->CachedCVar = (IConsoleVariable *)0x0;
  this->LastCachedFrame = 0xffffffff;
  return this;
}

// Evaluate @ 149345f20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNiagaraPlatformSetCVarCondition::Evaluate
          (FNiagaraPlatformSetCVarCondition *this,UDeviceProfile *param_1,int param_2,bool param_3,
          bool *param_4,bool *param_5)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  IConsoleVariable *pIVar7;
  ulonglong uVar8;
  bool bVar9;
  float fVar10;
  FNiagaraPlatformSetCVarCondition *local_res8;
  FString local_18;
  
  pIVar7 = this->CachedCVar;
  if (((pIVar7 == (IConsoleVariable *)0x0) ||
      (this->LastCachedFrame <= FNiagaraPlatformSet::LastDirtiedFrame)) ||
     (this->LastCachedFrame == 0xffffffff)) {
    this->LastCachedFrame = GFrameNumber;
    pIVar7 = FNiagaraPlatformSet::GetCVar(this->CVarName);
    this->CachedCVar = pIVar7;
  }
  if (pIVar7 == (IConsoleVariable *)0x0) {
    if (2 < (byte)LogNiagara._0_1_) {
      ::FName::ToString(&this->CVarName,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  cVar2 = (**(code **)(*(longlong *)pIVar7 + 0x40))(pIVar7);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(longlong *)pIVar7 + 0x48))(pIVar7);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*(longlong *)pIVar7 + 0x50))(pIVar7);
      if (cVar2 == '\0') {
        local_res8 = this;
        `FNiagaraPlatformSetCVarCondition::Evaluate'::__l18::<lambda_1>::operator()(&local_res8);
        return false;
      }
      pIVar7 = this->CachedCVar;
      if (((pIVar7 == (IConsoleVariable *)0x0) ||
          (this->LastCachedFrame <= FNiagaraPlatformSet::LastDirtiedFrame)) ||
         (this->LastCachedFrame == 0xffffffff)) {
        this->LastCachedFrame = GFrameNumber;
        pIVar7 = FNiagaraPlatformSet::GetCVar(this->CVarName);
        this->CachedCVar = pIVar7;
        if (pIVar7 == (IConsoleVariable *)0x0) {
          return false;
        }
      }
      if (param_1 == (UDeviceProfile *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5046260443048313939>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                           ,0x453,"DeviceProfile");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
LAB_1493461fd:
        uVar8 = (**(code **)(*(longlong *)pIVar7 + 0x18))(pIVar7);
        if ((uVar8 & 4) != 0) goto LAB_14934620f;
        bVar3 = true;
      }
      else {
        if (GbNiagaraAllowRuntimeScalabilityChanges != 0) goto LAB_1493461fd;
LAB_14934620f:
        bVar3 = false;
      }
      fVar10 = (float)(**(code **)(*(longlong *)pIVar7 + 0xd0))(pIVar7);
      if (((this->bUseMinFloat != 0) && (fVar10 < this->MinFloat)) ||
         ((this->bUseMaxFloat != 0 && (this->MaxFloat <= fVar10 && fVar10 != this->MaxFloat))))
      goto LAB_14934623d;
    }
    else {
      pIVar7 = this->CachedCVar;
      if (((pIVar7 == (IConsoleVariable *)0x0) ||
          (this->LastCachedFrame <= FNiagaraPlatformSet::LastDirtiedFrame)) ||
         (this->LastCachedFrame == 0xffffffff)) {
        this->LastCachedFrame = GFrameNumber;
        pIVar7 = FNiagaraPlatformSet::GetCVar(this->CVarName);
        this->CachedCVar = pIVar7;
        if (pIVar7 == (IConsoleVariable *)0x0) {
          return false;
        }
      }
      if (param_1 == (UDeviceProfile *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5046260443048313939>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                           ,0x453,"DeviceProfile");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
LAB_1493460f4:
        uVar8 = (**(code **)(*(longlong *)pIVar7 + 0x18))(pIVar7);
        if ((uVar8 & 4) != 0) goto LAB_149346106;
        bVar3 = true;
      }
      else {
        if (GbNiagaraAllowRuntimeScalabilityChanges != 0) goto LAB_1493460f4;
LAB_149346106:
        bVar3 = false;
      }
      iVar6 = (**(code **)(*(longlong *)pIVar7 + 200))(pIVar7);
      if (((this->bUseMinInt != 0) && (iVar6 < this->MinInt)) ||
         ((this->bUseMaxInt != 0 && (this->MaxInt < iVar6)))) {
LAB_14934623d:
        bVar5 = false;
        goto LAB_149346136;
      }
    }
    bVar5 = true;
LAB_149346136:
    bVar9 = bVar5;
    if (bVar3) {
      bVar9 = true;
    }
    *param_4 = bVar9;
    bVar9 = true;
    if (!bVar3) {
      bVar9 = (bool)(bVar5 ^ 1);
    }
    *param_5 = bVar9;
    return bVar5;
  }
  pIVar7 = this->CachedCVar;
  if (((pIVar7 == (IConsoleVariable *)0x0) ||
      (this->LastCachedFrame <= FNiagaraPlatformSet::LastDirtiedFrame)) ||
     (this->LastCachedFrame == 0xffffffff)) {
    this->LastCachedFrame = GFrameNumber;
    pIVar7 = FNiagaraPlatformSet::GetCVar(this->CVarName);
    this->CachedCVar = pIVar7;
    if (pIVar7 == (IConsoleVariable *)0x0) {
      return false;
    }
  }
  if (param_1 == (UDeviceProfile *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5046260443048313939>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPlatformSet.cpp"
                       ,0x453,"DeviceProfile");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
LAB_149345ff7:
    uVar8 = (**(code **)(*(longlong *)pIVar7 + 0x18))(pIVar7);
    if ((uVar8 & 4) == 0) {
      bVar3 = true;
      goto LAB_14934600c;
    }
  }
  else if (GbNiagaraAllowRuntimeScalabilityChanges != 0) goto LAB_149345ff7;
  bVar3 = false;
LAB_14934600c:
  cVar2 = (**(code **)(*(longlong *)pIVar7 + 0xc0))(pIVar7);
  bVar5 = this->Value;
  bVar9 = (bool)cVar2 == bVar5;
  if (!bVar3) {
    *param_4 = bVar9;
    *param_5 = (bool)cVar2 != bVar5;
    return bVar9;
  }
  *param_4 = true;
  *param_5 = true;
  return bVar9;
}

// GetCVar @ 14934edf0

IConsoleVariable * __thiscall
FNiagaraPlatformSetCVarCondition::GetCVar(FNiagaraPlatformSetCVarCondition *this)

{
  IConsoleVariable *pIVar1;
  
  pIVar1 = this->CachedCVar;
  if (((pIVar1 == (IConsoleVariable *)0x0) ||
      (this->LastCachedFrame <= FNiagaraPlatformSet::LastDirtiedFrame)) ||
     (this->LastCachedFrame == 0xffffffff)) {
    this->LastCachedFrame = GFrameNumber;
    pIVar1 = FNiagaraPlatformSet::GetCVar(this->CVarName);
    this->CachedCVar = pIVar1;
  }
  return pIVar1;
}

// SetCVar @ 14936a190

void __thiscall
FNiagaraPlatformSetCVarCondition::SetCVar(FNiagaraPlatformSetCVarCondition *this,FName param_1)

{
  this->CVarName = param_1;
  this->CachedCVar = (IConsoleVariable *)0x0;
  return;
}

// operator() @ 150540fa0

bool __thiscall
`FNiagaraPlatformSetCVarCondition::Evaluate'::__l18::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5046260443048314450>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5046260443048314450>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150541007;
    }
  }
  bVar2 = false;
LAB_150541007:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

