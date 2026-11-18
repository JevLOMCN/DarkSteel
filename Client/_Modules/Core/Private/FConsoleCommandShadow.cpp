// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// AsCommand @ 141629cf0

IConsoleCommand * __thiscall FConsoleCommandShadow::AsCommand(FConsoleCommandShadow *this)

{
  if (this == (FConsoleCommandShadow *)&DAT_00000040) {
    this = (FConsoleCommandShadow *)0x0;
  }
  return (IConsoleCommand *)this;
}

// Execute @ 1416390d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FConsoleCommandShadow::Execute
          (FConsoleCommandShadow *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    uVar2 = (**(code **)(*(longlong *)this->_padding_ + 0xa8))
                      ((longlong *)this->_padding_,param_1,param_2,param_3);
  }
  else {
    uVar2 = 0;
  }
  return (bool)uVar2;
}

// GetDetailedHelp @ 1416410a0

FText * __thiscall
FConsoleCommandShadow::GetDetailedHelp(FConsoleCommandShadow *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0x28))
              ((longlong *)this->_padding_,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FText::AsCultureInvariant(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetFlags @ 141641f20

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

EConsoleVariableFlags __thiscall FConsoleCommandShadow::GetFlags(FConsoleCommandShadow *this)

{
  bool bVar1;
  EConsoleVariableFlags EVar2;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000141641f42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x18))();
    return EVar2;
  }
  return ECVF_Default;
}

// GetHelp @ 141642970

wchar_t * __thiscall FConsoleCommandShadow::GetHelp(FConsoleCommandShadow *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000141642992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pwVar2 = (wchar_t *)(**(code **)(*(longlong *)this->_padding_ + 8))();
    return pwVar2;
  }
  return L"";
}

// GetRealObject @ 141645c00

IConsoleObject * __thiscall FConsoleCommandShadow::GetRealObject(FConsoleCommandShadow *this)

{
  return (IConsoleObject *)this->RealCommand;
}

// GetThisName @ 141646ea0

FString * __thiscall
FConsoleCommandShadow::GetThisName(FConsoleCommandShadow *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  longlong *plVar4;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  plVar4 = &this->_padding_;
  if (this == (FConsoleCommandShadow *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0xd0))
            (IConsoleManager::Singleton,__return_storage_ptr__,plVar4);
  return __return_storage_ptr__;
}

// IsDeprecated @ 141649d00

bool __thiscall FConsoleCommandShadow::IsDeprecated(FConsoleCommandShadow *this)

{
  return (bool)(*(byte *)((longlong)&this[-1].RealCommand + 2) >> 3 & 1);
}

// Release @ 141656770

void __thiscall FConsoleCommandShadow::Release(FConsoleCommandShadow *this)

{
  this->_padding_ = 0;
  return;
}

// SetFlags @ 14165d2c0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleCommandShadow::SetFlags(FConsoleCommandShadow *this,EConsoleVariableFlags param_1)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::BindForUsage((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0x20))((longlong *)this->_padding_,param_1);
  }
  return;
}

// SetHelp @ 14165d810

void __thiscall FConsoleCommandShadow::SetHelp(FConsoleCommandShadow *this,wchar_t *param_1)

{
  bool bVar1;
  
  bVar1 = FConsoleObjectShadowData::Bind((FConsoleObjectShadowData *)&this[-1]._padding_);
  if (bVar1) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))((longlong *)this->_padding_,param_1);
  }
  return;
}

// SetRealObject @ 14165e620

void __thiscall
FConsoleCommandShadow::SetRealObject(FConsoleCommandShadow *this,IConsoleObject *param_1)

{
  this->RealCommand = (IConsoleCommand *)param_1;
  return;
}

