// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// ~FNiagaraScriptInstanceParameterStore @ 149026180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraScriptInstanceParameterStore::~FNiagaraScriptInstanceParameterStore
          (FNiagaraScriptInstanceParameterStore *this)

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

// StaticStruct @ 14937ac10

UScriptStruct * __cdecl FNiagaraScriptInstanceParameterStore::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptInstanceParameterStore.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraScriptInstanceParameterStore.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore,
                         (UObject *)pUVar1,L"NiagaraScriptInstanceParameterStore");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraScriptInstanceParameterStore.OuterSingleton;
}

// FNiagaraScriptInstanceParameterStore @ 149386fa0

FNiagaraScriptInstanceParameterStore * __thiscall
FNiagaraScriptInstanceParameterStore::FNiagaraScriptInstanceParameterStore
          (FNiagaraScriptInstanceParameterStore *this)

{
  FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)this);
  this->bInitialized = '\0';
  this->_padding_ = (longlong)&___7FNiagaraScriptInstanceParameterStore__6B_;
  (this->ScriptParameterStore).StructPtr = (FNiagaraScriptExecutionParameterStore *)0x0;
  return this;
}

// AddParameter @ 14938f590

bool __thiscall
FNiagaraScriptInstanceParameterStore::AddParameter
          (FNiagaraScriptInstanceParameterStore *this,FNiagaraVariable *param_1,bool param_2,
          bool param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraScriptExecutionParameterStore.h"
                     ,0x9f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// CopyCurrToPrev @ 149399a10

void __thiscall
FNiagaraScriptInstanceParameterStore::CopyCurrToPrev(FNiagaraScriptInstanceParameterStore *this)

{
  FNiagaraScriptExecutionParameterStore *pFVar1;
  size_t _Size;
  
  pFVar1 = (this->ScriptParameterStore).StructPtr;
  if (pFVar1 != (FNiagaraScriptExecutionParameterStore *)0x0) {
    _Size = (size_t)pFVar1->ParameterSize;
    memcpy((void *)(this->_padding_ + _Size),(void *)this->_padding_,_Size);
    return;
  }
  return;
}

// Empty @ 14939f9a0

void __thiscall
FNiagaraScriptInstanceParameterStore::Empty(FNiagaraScriptInstanceParameterStore *this,bool param_1)

{
  FNiagaraParameterStore::Empty((FNiagaraParameterStore *)this,param_1);
  this->bInitialized = '\0';
  (this->ScriptParameterStore).StructPtr = (FNiagaraScriptExecutionParameterStore *)0x0;
  return;
}

// GetExternalParameterSize @ 1493a6580

uint __thiscall
FNiagaraScriptInstanceParameterStore::GetExternalParameterSize
          (FNiagaraScriptInstanceParameterStore *this)

{
  FNiagaraScriptExecutionParameterStore *pFVar1;
  
  pFVar1 = (this->ScriptParameterStore).StructPtr;
  if (pFVar1 != (FNiagaraScriptExecutionParameterStore *)0x0) {
    return pFVar1->ParameterSize;
  }
  return 0;
}

// InitFromOwningContext @ 1493a9080

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraScriptInstanceParameterStore::InitFromOwningContext
          (FNiagaraScriptInstanceParameterStore *this,UNiagaraScript *param_1,
          ENiagaraSimTarget param_2,bool param_3)

{
  FNiagaraScriptExecutionParameterStore *pFVar1;
  code *pcVar2;
  
  if (param_1 == (UNiagaraScript *)0x0) {
    pcVar2 = *(code **)(this->_padding_ + 0x30);
  }
  else {
    pFVar1 = UNiagaraScript::GetExecutionReadyParameterStore(param_1,param_2);
    pcVar2 = *(code **)(this->_padding_ + 0x30);
    if (pFVar1 != (FNiagaraScriptExecutionParameterStore *)0x0) {
      (*pcVar2)(this,0);
      FNiagaraParameterStore::SetParameterDataArray
                ((FNiagaraParameterStore *)this,
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_,false);
      FNiagaraParameterStore::SetDataInterfaces
                ((FNiagaraParameterStore *)this,
                 (TArray<UNiagaraDataInterface_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_,
                 false);
      FNiagaraParameterStore::SetUObjects
                ((FNiagaraParameterStore *)this,
                 (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_,false);
      if (param_3) {
        *(uint *)&this->_padding_ = (uint)this->_padding_ | 7;
        FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)this);
      }
      (this->ScriptParameterStore).StructPtr = pFVar1;
      goto LAB_1493a9118;
    }
  }
  (*pcVar2)(this,1);
LAB_1493a9118:
  this->bInitialized = '\x01';
  return;
}

// ReadParameterVariables @ 1493b0830

TArrayView<FNiagaraVariableWithOffset_const_,int> * __thiscall
FNiagaraScriptInstanceParameterStore::ReadParameterVariables
          (FNiagaraScriptInstanceParameterStore *this,
          TArrayView<FNiagaraVariableWithOffset_const_,int> *__return_storage_ptr__)

{
  FNiagaraScriptExecutionParameterStore *pFVar1;
  
  pFVar1 = (this->ScriptParameterStore).StructPtr;
  if (pFVar1 != (FNiagaraScriptExecutionParameterStore *)0x0) {
    (**(code **)pFVar1->_padding_)();
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (FNiagaraVariableWithOffset *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// RemoveParameter @ 1493b4d60

bool __thiscall
FNiagaraScriptInstanceParameterStore::RemoveParameter
          (FNiagaraScriptInstanceParameterStore *this,FNiagaraVariableBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraScriptExecutionParameterStore.h"
                     ,0xa5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// RenameParameter @ 1493b4de0

void __thiscall
FNiagaraScriptInstanceParameterStore::RenameParameter
          (FNiagaraScriptInstanceParameterStore *this,FNiagaraVariableBase *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraScriptExecutionParameterStore.h"
                     ,0xab,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Reset @ 1493b5130

void __thiscall
FNiagaraScriptInstanceParameterStore::Reset(FNiagaraScriptInstanceParameterStore *this,bool param_1)

{
  FNiagaraParameterStore::Reset((FNiagaraParameterStore *)this,param_1);
  this->bInitialized = '\0';
  (this->ScriptParameterStore).StructPtr = (FNiagaraScriptExecutionParameterStore *)0x0;
  return;
}

