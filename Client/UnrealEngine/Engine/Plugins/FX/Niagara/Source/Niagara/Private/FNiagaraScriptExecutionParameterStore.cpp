// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// StaticStruct @ 14937ab10

UScriptStruct * __cdecl FNiagaraScriptExecutionParameterStore::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptExecutionParameterStore.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraScriptExecutionParameterStore.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore,
                         (UObject *)pUVar1,L"NiagaraScriptExecutionParameterStore");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraScriptExecutionParameterStore.OuterSingleton;
}

// FNiagaraScriptExecutionParameterStore @ 149386ef0

FNiagaraScriptExecutionParameterStore * __thiscall
FNiagaraScriptExecutionParameterStore::FNiagaraScriptExecutionParameterStore
          (FNiagaraScriptExecutionParameterStore *this,FNiagaraParameterStore *param_1)

{
  FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)this);
  this->_padding_ = (longlong)&___7FNiagaraScriptExecutionParameterStore__6B_;
  FNiagaraParameterStore::operator=((FNiagaraParameterStore *)this,param_1);
  return this;
}

// FNiagaraScriptExecutionParameterStore @ 149386f30

FNiagaraScriptExecutionParameterStore * __thiscall
FNiagaraScriptExecutionParameterStore::FNiagaraScriptExecutionParameterStore
          (FNiagaraScriptExecutionParameterStore *this)

{
  FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)this);
  this->bInitialized = '\0';
  this->_padding_ = (longlong)&___7FNiagaraScriptExecutionParameterStore__6B_;
  this->ParameterSize = 0;
  return this;
}

// ~FNiagaraScriptExecutionParameterStore @ 14938a240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraScriptExecutionParameterStore::~FNiagaraScriptExecutionParameterStore
          (FNiagaraScriptExecutionParameterStore *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar6 [8];
  FName FStackX_8;
  FName FStackX_10;
  FStatMessage FStack_28;
  
  this->_padding_ = (longlong)&___7FNiagaraParameterStore__6B_;
  auVar6 = (uchar  [8])(longlong)*(int *)((longlong)&this->_padding_ + 4);
  if (auVar6 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_NiagaraParamStoreMemory;
    if (StatPtr_STAT_NiagaraParamStoreMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)0x0) {
      pFVar4 = ::FName::FName(&FStackX_10,"STAT_NiagaraParamStoreMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_NiagaraParamStoreMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParamStoreMemory,*pFVar4,
                         L"Niagara parameter store memory","STATGROUP_Niagara","STATCAT_Niagara",
                         L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar5;
    FStackX_8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      FStack_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      FStackX_8 = FVar1;
      FStack_28.StatData.Pad = auVar6;
      FStack_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&FStack_28);
      FStatsTrace::Add(&FStackX_8,-(longlong)auVar6);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) && ((int)this->_padding_ != 0)) {
    IsInGameThread();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread() || (SourceStores.Num() == 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraParameterStore.cpp"
                       ,0xe8,
                       L"ParameterStore destruction must be on the GameThread(%d) or SourceStores(%d) must be unbound"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraParameterStore::UnbindAll((FNiagaraParameterStore *)this);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding>,int>
            ((TTuple<FNiagaraParameterStore_*,FNiagaraParameterStoreBinding> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FNiagaraVariableWithOffset,int>
            ((FNiagaraVariableWithOffset *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// operator= @ 14938b130

FNiagaraScriptExecutionParameterStore * __thiscall
FNiagaraScriptExecutionParameterStore::operator=
          (FNiagaraScriptExecutionParameterStore *this,FNiagaraParameterStore *param_1)

{
  FNiagaraParameterStore::operator=((FNiagaraParameterStore *)this,param_1);
  return this;
}

// AddParameter @ 14938f550

bool __thiscall
FNiagaraScriptExecutionParameterStore::AddParameter
          (FNiagaraScriptExecutionParameterStore *this,FNiagaraVariable *param_1,bool param_2,
          bool param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraScriptExecutionParameterStore.h"
                     ,0x54,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// Empty @ 14939f970

void __thiscall
FNiagaraScriptExecutionParameterStore::Empty
          (FNiagaraScriptExecutionParameterStore *this,bool param_1)

{
  FNiagaraParameterStore::Empty((FNiagaraParameterStore *)this,param_1);
  this->bInitialized = '\0';
  this->ParameterSize = 0;
  return;
}

// RemoveParameter @ 1493b4d20

bool __thiscall
FNiagaraScriptExecutionParameterStore::RemoveParameter
          (FNiagaraScriptExecutionParameterStore *this,FNiagaraVariableBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraScriptExecutionParameterStore.h"
                     ,0x5b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// RenameParameter @ 1493b4da0

void __thiscall
FNiagaraScriptExecutionParameterStore::RenameParameter
          (FNiagaraScriptExecutionParameterStore *this,FNiagaraVariableBase *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraScriptExecutionParameterStore.h"
                     ,0x61,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Reset @ 1493b5100

void __thiscall
FNiagaraScriptExecutionParameterStore::Reset
          (FNiagaraScriptExecutionParameterStore *this,bool param_1)

{
  FNiagaraParameterStore::Reset((FNiagaraParameterStore *)this,param_1);
  this->bInitialized = '\0';
  this->ParameterSize = 0;
  return;
}

