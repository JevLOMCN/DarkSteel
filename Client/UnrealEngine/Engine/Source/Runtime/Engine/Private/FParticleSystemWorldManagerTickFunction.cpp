// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1481bb6a0

UScriptStruct * __cdecl FParticleSystemWorldManagerTickFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FParticleSystemWorldManagerTickFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FParticleSystemWorldManagerTickFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction,
                         (UObject *)pUVar1,L"ParticleSystemWorldManagerTickFunction");
  }
  return Z_Registration_Info_UScriptStruct_FParticleSystemWorldManagerTickFunction.OuterSingleton;
}

// DiagnosticContext @ 1481e1820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
FParticleSystemWorldManagerTickFunction::DiagnosticContext
          (FParticleSystemWorldManagerTickFunction *this,bool param_1)

{
  undefined7 in_register_00000011;
  FName this_00;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ComparisonIndex.Value._0_1_ = param_1;
  ::FName::FName((FName *)this_00,L"ParticleSystemManager");
  return this_00;
}

// DiagnosticMessage @ 1481e1850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FParticleSystemWorldManagerTickFunction::DiagnosticMessage
          (FParticleSystemWorldManagerTickFunction *this,FString *__return_storage_ptr__)

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
  ::FString::ConcatCF((FString *)&local_28,L"FParticleSystemManager::Tick(",pFVar1);
  ::FString::ConcatFC(__return_storage_ptr__,(FString *)&local_28,L")");
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecuteTick @ 1481e3ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FParticleSystemWorldManagerTickFunction::ExecuteTick
          (FParticleSystemWorldManagerTickFunction *this,float param_1,ELevelTick param_2,
          Type param_3,TRefCountPtr<FBaseGraphTask> *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Owner == (FParticleSystemWorldManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Owner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                       ,0x387,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FParticleSystemWorldManager::Tick
            (this->Owner,(uint)(byte)this->_padding_,param_1,param_2,param_3,param_4);
  return;
}

