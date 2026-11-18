// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 8

// StaticStruct @ 1441c7290

UScriptStruct * __cdecl FEscalationState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEscalationState.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NetCore();
    Z_Registration_Info_UScriptStruct_FEscalationState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEscalationState,(UObject *)pUVar1,
                         L"EscalationState");
  }
  return Z_Registration_Info_UScriptStruct_FEscalationState.OuterSingleton;
}

// ValidateConfigInternal @ 1441c72d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FEscalationState::ValidateConfigInternal(FEscalationState *this)

{
  if (((0 < this->AutoEscalateTime) && (this->AutoEscalateTime < this->CooloffTime)) &&
     (2 < (byte)LogNetCore._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
    return;
  }
  return;
}

// HasHitAnyQuota @ 1441c7310

bool __thiscall
FEscalationState::HasHitAnyQuota(FEscalationState *this,FHasHitAnyQuotaParms *param_1)

{
  return false;
}

// operator= @ 1441d4ee0

FEscalationState * __thiscall
FEscalationState::operator=(FEscalationState *this,FEscalationState *param_1)

{
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  ::FString::operator=((FString *)&this->_padding_,(FString *)&param_1->_padding_);
  this->bLogEscalate = param_1->bLogEscalate;
  pTVar1 = &this->AllTimePeriods;
  this->bDormant = param_1->bDormant;
  this->CooloffTime = param_1->CooloffTime;
  this->AutoEscalateTime = param_1->AutoEscalateTime;
  this->HighestTimePeriod = param_1->HighestTimePeriod;
  if (pTVar1 != &param_1->AllTimePeriods) {
    iVar3 = (param_1->AllTimePeriods).ArrayNum;
    piVar2 = &(this->AllTimePeriods).ArrayMax;
    _Src = (param_1->AllTimePeriods).AllocatorInstance.Data;
    (this->AllTimePeriods).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
      }
    }
  }
  return this;
}

// GetAllTimePeriods @ 1441dc0e0

TArray<signed_char,TSizedDefaultAllocator<32>_> * __thiscall
FEscalationState::GetAllTimePeriods(FEscalationState *this)

{
  return &this->AllTimePeriods;
}

// GetHighestTimePeriod @ 1441dc790

schar __thiscall FEscalationState::GetHighestTimePeriod(FEscalationState *this)

{
  return this->HighestTimePeriod;
}

// IsDormant @ 1441e1010

bool __thiscall FEscalationState::IsDormant(FEscalationState *this)

{
  return this->bDormant;
}

// ValidateTimePeriod @ 1441f1b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEscalationState::ValidateTimePeriod
          (FEscalationState *this,schar *param_1,wchar_t *param_2,EValidateTime param_3)

{
  char cVar1;
  char cVar2;
  
  if ((*param_1 < (param_3 == MustBeSet)) || ('\x10' < *param_1)) {
    if (2 < (byte)LogNetCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
    }
    cVar1 = '\x10';
    if (*param_1 < '\x10') {
      cVar1 = *param_1;
    }
    cVar2 = param_3 == MustBeSet;
    if ((int)(uint)(param_3 == MustBeSet) < (int)cVar1) {
      cVar2 = cVar1;
    }
    *param_1 = cVar2;
  }
  return;
}

