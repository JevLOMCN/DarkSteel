// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 14940dab0

UScriptStruct * __cdecl FNiagaraWorldManagerTickFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraWorldManagerTickFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraWorldManagerTickFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction,
                         (UObject *)pUVar1,L"NiagaraWorldManagerTickFunction");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraWorldManagerTickFunction.OuterSingleton;
}

// FNiagaraWorldManagerTickFunction @ 1494281e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraWorldManagerTickFunction * __thiscall
FNiagaraWorldManagerTickFunction::FNiagaraWorldManagerTickFunction
          (FNiagaraWorldManagerTickFunction *this)

{
  FTickFunction::FTickFunction((FTickFunction *)this);
  this->Owner = (FNiagaraWorldManager *)0x0;
  this->_padding_ = (longlong)&___7FNiagaraWorldManagerTickFunction__6B_;
  this->TickPass = Num;
  return this;
}

// ~FNiagaraWorldManagerTickFunction @ 14942c420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManagerTickFunction::~FNiagaraWorldManagerTickFunction
          (FNiagaraWorldManagerTickFunction *this)

{
  FTickTaskLevel *this_00;
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7FTickFunction__6B_;
  if (((byte *)this->_padding_ != (byte *)0x0) && ((*(byte *)this->_padding_ & 1) != 0)) {
    FTickTaskManager::Get();
    if (this->_padding_ == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickFunction->InternalData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x8a0,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = *(FTickTaskLevel **)(this->_padding_ + 0x28);
    if (this_00 == (FTickTaskLevel *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Level",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x8a2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FTickTaskLevel::RemoveTickFunction(this_00,(FTickFunction *)this);
    *(byte *)this->_padding_ = *(byte *)this->_padding_ & 0xfe;
  }
  ::operator_delete((void *)this->_padding_,0x30);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// DiagnosticContext @ 149440a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FName __thiscall
FNiagaraWorldManagerTickFunction::DiagnosticContext
          (FNiagaraWorldManagerTickFunction *this,bool param_1)

{
  undefined7 in_register_00000011;
  FName this_00;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ComparisonIndex.Value._0_1_ = param_1;
  ::FName::FName((FName *)this_00,L"FNiagaraWorldManagerTickFunction");
  return this_00;
}

// DiagnosticMessage @ 149440a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FString * __thiscall
FNiagaraWorldManagerTickFunction::DiagnosticMessage
          (FNiagaraWorldManagerTickFunction *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  UClass *pUVar2;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_28.Size = 0x1c;
      local_28.DataPtr = L"/Script/Engine.ETickingGroup";
      pUVar2 = Z_Construct_UClass_UEnum_NoRegister();
      EnumType = (UEnum *)StaticFindObjectChecked(pUVar2,(UObject *)0x0,&local_28,None);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1 = UEnum::GetNameStringByIndex(EnumType,&local_18,(uint)(byte)this->_padding_);
  ::FString::ConcatCF((FString *)&local_28,L"FNiagaraWorldManagerTickFunction::Tick(",pFVar1);
  ::FString::ConcatFC(__return_storage_ptr__,(FString *)&local_28,L")");
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecuteTick @ 149444a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraWorldManagerTickFunction::ExecuteTick
          (FNiagaraWorldManagerTickFunction *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Owner == (FNiagaraWorldManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Owner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraWorldManager.cpp"
                       ,0x16d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraWorldManager::Tick(this->Owner,this->TickPass,(uint)(byte)this->_padding_,param_1,param_4)
  ;
  return;
}

