// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// AsVariable @ 141629d20

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

IConsoleVariable * __thiscall FConsoleVariableBase::AsVariable(FConsoleVariableBase *this)

{
  return (IConsoleVariable *)this;
}

// CanChange @ 14162da40

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FConsoleVariableBase::CanChange(FConsoleVariableBase *this,EConsoleVariableFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EConsoleVariableFlags EVar4;
  EConsoleVariableFlags EVar5;
  FString local_48;
  void *local_38 [2];
  void *local_28 [2];
  
  EVar5 = this->Flags & ECVF_SetByMask;
  EVar4 = param_1 & ECVF_SetByMask;
  if (EVar5 > EVar4) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xd0))
              (IConsoleManager::Singleton,local_38,this);
    (**(code **)(this->_padding_ + 0xd8))(this,local_28);
    GetConsoleVariableSetByName(EVar5);
    GetConsoleVariableSetByName(EVar4);
    ::FString::PrintfImpl
              (&local_48,
               L"Setting the console variable \'%s\' with \'SetBy%s\' was ignored as it is lower priority than the previous \'SetBy%s\'. Value remains \'%s\'"
              );
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    if (((EVar5 == ECVF_SetByConsoleVariablesIni) || (EVar5 == ECVF_SetByCommandline)) ||
       ((EVar5 == ECVF_SetBySystemSettingsIni || (EVar5 == ECVF_SetByHotfix)))) {
      if (5 < (byte)LogConsoleManager._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&`public:_bool___cdecl_FConsoleVariableBase::CanChange(EConsoleVariableFlags)const___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
      }
    }
    else if ((EVar4 == ECVF_SetByScalability) && (EVar5 == ECVF_SetByDeviceProfile)) {
      if (4 < (byte)LogConsoleManager._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_bool___cdecl_FConsoleVariableBase::CanChange(EConsoleVariableFlags)const___ptr64'
                    ::__l31::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
      }
    }
    else if (2 < (byte)LogConsoleManager._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_bool___cdecl_FConsoleVariableBase::CanChange(EConsoleVariableFlags)const___ptr64'
                  ::__l51::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
  }
  return EVar5 <= EVar4;
}

// GetDetailedHelp @ 141641100

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FConsoleVariableBase::GetDetailedHelp(FConsoleVariableBase *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  wchar_t *pwVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  FTextFormat local_c8;
  FFormatArgumentValue local_b8;
  undefined4 local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  (**(code **)(this->_padding_ + 0xd8))(this,&local_d8);
  bVar2 = 1 < local_d8.Data.ArrayNum;
  if (bVar2) {
    pFVar5 = FText::FromString(&local_68,&local_d8);
  }
  else {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"ConsoleManager",L"CVarEmptyValueString",L"<empty>");
  }
  pFVar5 = FText::FText(&local_48,pFVar5);
  pwVar6 = (wchar_t *)(**(code **)(this->_padding_ + 8))(this);
  pFVar7 = FText::FromString(&local_38,pwVar6);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"ConsoleManager",L"CVarDetailedHelp",L"{0}\n\nCurrent value : {1}")
  ;
  pFVar9 = FTextFormat::FTextFormat(&local_28,pFVar8,Default);
  local_b8.Type = Text;
  FText::FText((FText *)&local_b8.TextValue,pFVar7);
  if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
  }
  local_98 = 4;
  FText::FText(&local_88,pFVar5);
  if (local_88.TextData.Reference == (ITextData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_e8.AllocatorInstance,2,&local_e8.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_e8.AllocatorInstance.Data,&local_b8,2);
  local_c8.TextFormatData.Object = (pFVar9->TextFormatData).Object;
  local_c8.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_c8.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(__return_storage_ptr__,&local_c8,&local_e8);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar1 = (pFVar7->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (pFVar5->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (bVar2) {
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  if ((!bVar2) && (local_58.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFlags @ 141641f60

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

EConsoleVariableFlags __thiscall FConsoleVariableBase::GetFlags(FConsoleVariableBase *this)

{
  return this->Flags;
}

// GetHelp @ 1416429b0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

wchar_t * __thiscall FConsoleVariableBase::GetHelp(FConsoleVariableBase *this)

{
  if ((this->Help).Data.ArrayNum != 0) {
    return (wchar_t *)(this->Help).Data.AllocatorInstance.Data;
  }
  return L"";
}

// GetShadowIndex @ 141645ee0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FConsoleVariableBase::GetShadowIndex(FConsoleVariableBase *this)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  uint uVar4;
  void *local_18 [2];
  
  if ((this->Flags & ECVF_RenderThreadSafe) != ECVF_Default) {
    bVar3 = IsInGameThread();
    return bVar3 ^ 1;
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  pIVar2 = IConsoleManager::Singleton;
  bVar3 = IsInActualRenderingThread();
  if (((bVar3) && (bVar3 = FGenericPlatformProcess::SupportsMultithreading(), bVar3)) &&
     (this->bWarnedAboutThreadSafety == false)) {
    (**(code **)((longlong)*pIVar2 + 0xd0))(pIVar2,local_18,this);
    if (2 < (byte)LogConsoleManager._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`protected:_unsigned_int___cdecl_FConsoleVariableBase::GetShadowIndex(void)const___ptr64'
                  ::__l14::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
    }
    this->bWarnedAboutThreadSafety = true;
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return 0;
}

// LogHistory @ 14164cfd0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall FConsoleVariableBase::LogHistory(FConsoleVariableBase *this,FOutputDevice *param_1)

{
  return;
}

// OnChanged @ 14164ecf0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableBase::OnChanged
          (FConsoleVariableBase *this,EConsoleVariableFlags param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  EConsoleVariableFlags EVar3;
  
  EVar3 = param_1 & (ECVF_SetByMask|ECVF_FlagMask);
  if (((param_1 & ECVF_SetByMask) == ECVF_Default) && (EVar3 != ECVF_Default)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("((uint32)SetBy & ECVF_SetByMask) || SetBy == ECVF_Default",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0x139,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (!param_2) {
    bVar2 = CanChange(this,EVar3);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bForce || CanChange(SetBy)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                         ,0x13c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this->Flags = this->Flags & ECVF_FlagMask;
  this->Flags = this->Flags | EVar3;
  if ((param_1 & ECVF_Set_SetOnly_Unsafe) == ECVF_Default) {
    TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnChangedCallback,(IConsoleVariable *)this);
  }
  return;
}

// OnChangedDelegate @ 14164ef60

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

TMulticastDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> * __thiscall
FConsoleVariableBase::OnChangedDelegate(FConsoleVariableBase *this)

{
  return &this->OnChangedCallback;
}

// SetFlags @ 14165d300

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableBase::SetFlags(FConsoleVariableBase *this,EConsoleVariableFlags param_1)

{
  this->Flags = param_1;
  if ((param_1 & (ECVF_ExcludeFromPreview|ECVF_Scalability)) == ECVF_Scalability) {
    this->Flags = param_1 | ECVF_Preview;
  }
  return;
}

// SetHelp @ 14165d850

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall FConsoleVariableBase::SetHelp(FConsoleVariableBase *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                       ,0xd8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::FString::operator=(&this->Help,param_1);
  return;
}

// SetOnChangedCallback @ 14165e140

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
FConsoleVariableBase::SetOnChangedCallback
          (FConsoleVariableBase *this,
          TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *param_1)

{
  FDelegateHandle FVar1;
  
  FVar1.ID = (this->LegacyDelegateHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnChangedCallback,FVar1)
    ;
  }
  FVar1 = TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
          ::Add((TMulticastDelegateRegistration<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy>
                 *)&this->OnChangedCallback,
                (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)
                &stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->LegacyDelegateHandle).ID = *FVar1.ID;
  return;
}

