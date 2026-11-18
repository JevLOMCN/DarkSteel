// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 1484a2d40

UClass * __cdecl URuntimeOptionsBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeOptionsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeOptionsBase",
               &Z_Registration_Info_UClass_URuntimeOptionsBase.InnerSingleton,
               StaticRegisterNativesURuntimeOptionsBase,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"RuntimeOptions",InternalConstructor<URuntimeOptionsBase>,
               InternalVTableHelperCtorCaller<URuntimeOptionsBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeOptionsBase.InnerSingleton;
}

// URuntimeOptionsBase @ 1484bce50

URuntimeOptionsBase * __thiscall
URuntimeOptionsBase::URuntimeOptionsBase(URuntimeOptionsBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URuntimeOptionsBase__6B_;
  (this->OptionCommandPrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionCommandPrefix).Data.ArrayNum = 0;
  (this->OptionCommandPrefix).Data.ArrayMax = 0;
  return this;
}

// URuntimeOptionsBase @ 1484bce90

URuntimeOptionsBase * __thiscall URuntimeOptionsBase::URuntimeOptionsBase(URuntimeOptionsBase *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7URuntimeOptionsBase__6B_;
  (this->OptionCommandPrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionCommandPrefix).Data.ArrayNum = 0;
  (this->OptionCommandPrefix).Data.ArrayMax = 0;
  ::FString::operator=(&this->OptionCommandPrefix,L"ro");
  return this;
}

// ~URuntimeOptionsBase @ 1484be220

void __thiscall URuntimeOptionsBase::~URuntimeOptionsBase(URuntimeOptionsBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URuntimeOptionsBase__6B_;
  pFVar1 = (this->OptionCommandPrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyCommandlineOverrides @ 1484c3240

void __thiscall URuntimeOptionsBase::ApplyCommandlineOverrides(URuntimeOptionsBase *this)

{
  FProperty *this_00;
  FFeedbackContext *pFVar1;
  bool bVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  FString local_78;
  FString local_68;
  FString local_58;
  TFieldIterator<FProperty_const_> local_48;
  TFieldIterator<FProperty_const_> local_30;
  
  local_48.Struct = (UStruct *)this->_padding_;
  local_48.Field = (FField *)0x0;
  if (local_48.Struct != (UStruct *)0x0) {
    local_48.Field = (local_48.Struct)->ChildProperties;
  }
  local_48.InterfaceIndex = -1;
  local_48.bIncludeSuper = true;
  local_48.bIncludeDeprecated = true;
  local_48.bIncludeInterface = false;
  TFieldIterator<FProperty_const_>::IterateToNext(&local_48);
  local_30.bIncludeSuper = local_48.bIncludeSuper;
  local_30.bIncludeDeprecated = local_48.bIncludeDeprecated;
  local_30.InterfaceIndex = local_48.InterfaceIndex;
  local_30.bIncludeInterface = local_48.bIncludeInterface;
  local_30._23_1_ = local_48._23_1_;
  local_30.Struct = local_48.Struct;
  this_00 = (FProperty *)local_48.Field;
  while (this_00 != (FProperty *)0x0) {
    local_30.Field = (FField *)this_00;
    bVar2 = IsThisNotNull(this_00,"FField::GetName");
    if (bVar2) {
      ::FName::ToString((FName *)&this_00->_padding_,&local_68);
    }
    else {
      ::FString::FString(&local_68,L"None");
    }
    ::FString::PrintfImpl((FString *)&local_48,L"%s.%s");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    ::FString::PrintfImpl(&local_58,L"%s=");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar4.Data = local_58.Data.AllocatorInstance.Data;
    }
    pwVar3 = FCommandLine::Get();
    bVar2 = FParse::Value(pwVar3,(wchar_t *)FVar4.Data,&local_78,true,(wchar_t **)0x0);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar1 = GWarn;
    if (bVar2) {
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar4.Data = local_78.Data.AllocatorInstance.Data;
      }
      bVar2 = FProperty::ValidateImportFlags(this_00,0,(FOutputDevice *)GWarn);
      if ((bVar2) && (FVar4.Data != (FScriptContainerElement *)0x0)) {
        (**(code **)(this_00->_padding_ + 0xe8))(this_00,FVar4.Data,this,1,this,0x8000000,pFVar1);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_48.Struct != (UStruct *)0x0) {
      FMemory::Free(local_48.Struct);
    }
    local_30.Field = (FField *)this_00->_padding_;
    TFieldIterator<FProperty_const_>::IterateToNext(&local_30);
    this_00 = (FProperty *)local_30.Field;
  }
  return;
}

// GetPrivateStaticClass @ 1484d9650

UClass * __cdecl URuntimeOptionsBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeOptionsBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeOptionsBase",
               &Z_Registration_Info_UClass_URuntimeOptionsBase.InnerSingleton,
               StaticRegisterNativesURuntimeOptionsBase,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"RuntimeOptions",InternalConstructor<URuntimeOptionsBase>,
               InternalVTableHelperCtorCaller<URuntimeOptionsBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeOptionsBase.InnerSingleton;
}

// InitializeRuntimeOptions @ 1484e0340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall URuntimeOptionsBase::InitializeRuntimeOptions(URuntimeOptionsBase *this)

{
  EClassFlags *pEVar1;
  code *pcVar2;
  URuntimeOptionsBase *this_00;
  int iVar3;
  bool bVar4;
  FString *pFVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined1 auStackY_2d8 [32];
  FString local_268;
  FUObjectCppClassStaticFunctions local_258;
  URuntimeOptionsBase *local_250;
  URuntimeOptionsBase *local_248;
  FString local_240;
  FConfigContext local_228;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_250 = this;
  if (((this->_padding_ & 0x10) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HasAnyFlags(RF_ClassDefaultObject)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RuntimeOptionsBase.cpp"
                         ,0x17,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->OptionCommandPrefix).Data.ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OptionCommandPrefix.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RuntimeOptionsBase.cpp"
                         ,0x18,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar7 = (UClass *)this->_padding_;
  if ((pUVar7->ClassFlags & CLASS_Abstract) == CLASS_None) {
    pUVar6 = Z_Registration_Info_UClass_URuntimeOptionsBase.InnerSingleton;
    iVar3 = 0;
    while( true ) {
      iVar9 = iVar3;
      if (pUVar6 == (UClass *)0x0) {
        local_258.AddReferencedObjects = UObject::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/Engine",L"RuntimeOptionsBase",
                   &Z_Registration_Info_UClass_URuntimeOptionsBase.InnerSingleton,
                   StaticRegisterNativesURuntimeOptionsBase,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
                   CASTCLASS_None,L"RuntimeOptions",InternalConstructor<URuntimeOptionsBase>,
                   InternalVTableHelperCtorCaller<URuntimeOptionsBase>,&local_258,
                   UObject::StaticClass,UObject::StaticClass);
        pUVar6 = Z_Registration_Info_UClass_URuntimeOptionsBase.InnerSingleton;
      }
      this_00 = local_250;
      if (pUVar7 == pUVar6) break;
      pEVar1 = &pUVar7->ClassFlags;
      pUVar7 = (UClass *)pUVar7->_padding_;
      iVar3 = iVar9 + 1;
      if ((*pEVar1 & CLASS_Abstract) != CLASS_None) {
        iVar3 = iVar9;
      }
    }
    pwVar8 = L"";
    if (iVar9 != 1) {
      local_248 = local_250;
      `URuntimeOptionsBase::InitializeRuntimeOptions'::__l19::<lambda_1>::operator()(&local_248);
    }
    local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.Data.ArrayNum = 0;
    local_268.Data.ArrayMax = 0;
    FConfigContext::FConfigContext(&local_228,GConfig,true,&local_268,(FConfigFile *)0x0);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    pFVar5 = ::FName::ToString((FName *)(this_00->_padding_ + 0xe8),&local_240);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    FConfigContext::Load(&local_228,pwVar8);
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
    FConfigContext::~FConfigContext(&local_228);
    ApplyCommandlineOverrides(this_00);
    RegisterSupportedConsoleVariables(this_00,false);
  }
  return;
}

// PostInitProperties @ 1484e51f0

void __thiscall URuntimeOptionsBase::PostInitProperties(URuntimeOptionsBase *this)

{
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    InitializeRuntimeOptions(this);
    return;
  }
  return;
}

// PostReloadConfig @ 1484e5220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall URuntimeOptionsBase::PostReloadConfig(URuntimeOptionsBase *this,FProperty *param_1)

{
  int iVar1;
  code *pcVar2;
  FProperty *this_00;
  bool bVar3;
  FName local_res18;
  FName local_res20;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  TFieldIterator<FProperty_const_> local_58;
  TFieldIterator<FProperty_const_> local_40;
  
  ApplyCommandlineOverrides(this);
  RegisterSupportedConsoleVariables(this,true);
  if (5 < (byte)LogRuntimeOptionsBase._0_1_) {
    local_res18 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res18,&local_78);
    (**(code **)(*(longlong *)this->_padding_ + 0x318))();
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRuntimeOptionsBase);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_58.Struct = (UStruct *)this->_padding_;
    local_58.Field = (FField *)0x0;
    if (local_58.Struct != (UStruct *)0x0) {
      local_58.Field = (local_58.Struct)->ChildProperties;
    }
    local_58.InterfaceIndex = -1;
    local_58.bIncludeSuper = true;
    local_58.bIncludeDeprecated = true;
    local_58.bIncludeInterface = false;
    TFieldIterator<FProperty_const_>::IterateToNext(&local_58);
    local_40.bIncludeSuper = local_58.bIncludeSuper;
    local_40.bIncludeDeprecated = local_58.bIncludeDeprecated;
    local_40.InterfaceIndex = local_58.InterfaceIndex;
    local_40.bIncludeInterface = local_58.bIncludeInterface;
    local_40._23_1_ = local_58._23_1_;
    local_40.Struct = local_58.Struct;
    this_00 = (FProperty *)local_58.Field;
    while (this_00 != (FProperty *)0x0) {
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_40.Field = (FField *)this_00;
      if ((this_00->ArrayDim < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = this_00->Offset_Internal;
      if ((this_00->ArrayDim < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FProperty::ExportText_Direct
                (this_00,&local_98,
                 (void *)((longlong)&this->_padding_ + (longlong)this_00->Offset_Internal),
                 (void *)((longlong)&this->_padding_ + (longlong)iVar1),(UObject *)this,0,
                 (UObject *)0x0);
      if (5 < (byte)LogRuntimeOptionsBase._0_1_) {
        bVar3 = IsThisNotNull(this_00,"FField::GetName");
        if (bVar3) {
          ::FName::ToString((FName *)&this_00->_padding_,&local_88);
        }
        else {
          ::FString::FString(&local_88,L"None");
        }
        local_res20 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res20,&local_68);
        (**(code **)(*(longlong *)this->_padding_ + 0x318))();
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRuntimeOptionsBase);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_40.Field = (local_40.Field)->Next;
      TFieldIterator<FProperty_const_>::IterateToNext(&local_40);
      this_00 = (FProperty *)local_40.Field;
    }
  }
  return;
}

// RegisterSupportedConsoleVariables @ 1484ef8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
URuntimeOptionsBase::RegisterSupportedConsoleVariables(URuntimeOptionsBase *this,bool param_1)

{
  code *pcVar1;
  FProperty *pFVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  FName local_res8;
  ForAnyElementType in_stack_ffffffffffffff68;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TFieldIterator<FProperty_const_> local_48;
  TFieldIterator<FProperty_const_> local_30;
  
  local_48.Struct = (UStruct *)this->_padding_;
  local_48.Field = (FField *)0x0;
  if (local_48.Struct != (UStruct *)0x0) {
    local_48.Field = (local_48.Struct)->ChildProperties;
  }
  local_48.InterfaceIndex = -1;
  local_48.bIncludeSuper = true;
  local_48.bIncludeDeprecated = true;
  local_48.bIncludeInterface = false;
  TFieldIterator<FProperty_const_>::IterateToNext(&local_48);
  local_30.bIncludeSuper = local_48.bIncludeSuper;
  local_30.bIncludeDeprecated = local_48.bIncludeDeprecated;
  local_30.InterfaceIndex = local_48.InterfaceIndex;
  local_30.bIncludeInterface = local_48.bIncludeInterface;
  local_30._23_1_ = local_48._23_1_;
  local_30.Struct = local_48.Struct;
  pFVar2 = (FProperty *)local_48.Field;
  while( true ) {
    if (pFVar2 == (FProperty *)0x0) {
      return;
    }
    local_30.Field = (FField *)pFVar2;
    bVar3 = IsThisNotNull(pFVar2,"FField::GetName");
    if (bVar3) {
      ::FName::ToString((FName *)&pFVar2->_padding_,&local_78);
    }
    else {
      ::FString::FString(&local_78,L"None");
    }
    ::FString::PrintfImpl(&local_88,L"%s.%s");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    pvVar5 = FProperty::ContainerUObjectPtrToValuePtrInternal
                       ((FProperty *)local_30.Field,(UObject *)this,0);
    if (param_1) {
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x4fb,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar7.Data = local_88.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*IConsoleManager::Singleton + 0xb0))
                (IConsoleManager::Singleton,FVar7.Data,0);
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar3)) break;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar7.Data = local_88.Data.AllocatorInstance.Data;
    }
    lVar6 = (**(code **)((longlong)*IConsoleManager::Singleton + 200))
                      (IConsoleManager::Singleton,FVar7.Data,0);
    if (lVar6 == 0) {
      if (pFVar2 != (FProperty *)0x0) {
        lVar6 = pFVar2->_padding_;
        if ((*(uint *)(lVar6 + 0x18) >> 0x18 & 1) == 0) {
          if ((*(uint *)(lVar6 + 0x18) >> 0x11 & 1) == 0) {
            if ((*(uint *)(lVar6 + 0x18) >> 0xe & 1) != 0) {
              if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
                  (IConsoleManager::SetupSingleton(),
                  IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Singleton != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                     ,0x4fb,L""), bVar3)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              in_stack_ffffffffffffff68.Data = in_stack_ffffffffffffff68.Data & 0xffffffff00000000;
              FVar7.Data = (FScriptContainerElement *)L"";
              if (local_88.Data.ArrayNum != 0) {
                FVar7.Data = local_88.Data.AllocatorInstance.Data;
              }
              (**(code **)((longlong)*IConsoleManager::Singleton + 0x30))
                        (IConsoleManager::Singleton,FVar7.Data,pvVar5,L"",
                         in_stack_ffffffffffffff68.Data);
            }
          }
          else {
            if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
                (IConsoleManager::SetupSingleton(),
                IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Singleton != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x4fb,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            in_stack_ffffffffffffff68.Data = in_stack_ffffffffffffff68.Data & 0xffffffff00000000;
            FVar7.Data = (FScriptContainerElement *)L"";
            if (local_88.Data.ArrayNum != 0) {
              FVar7.Data = local_88.Data.AllocatorInstance.Data;
            }
            (**(code **)((longlong)*IConsoleManager::Singleton + 0x48))
                      (IConsoleManager::Singleton,FVar7.Data,pvVar5,L"",
                       in_stack_ffffffffffffff68.Data);
          }
        }
        else {
          cVar4 = (**(code **)(pFVar2->_padding_ + 0x1d0))(pFVar2);
          if (cVar4 == '\0') {
            cVar4 = (**(code **)(pFVar2->_padding_ + 0x1d8))(pFVar2);
            if (cVar4 != '\0') {
              if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
                  (IConsoleManager::SetupSingleton(),
                  IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Singleton != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                     ,0x4fb,L""), bVar3)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              in_stack_ffffffffffffff68.Data = in_stack_ffffffffffffff68.Data & 0xffffffff00000000;
              FVar7.Data = (FScriptContainerElement *)L"";
              if (local_88.Data.ArrayNum != 0) {
                FVar7.Data = local_88.Data.AllocatorInstance.Data;
              }
              (**(code **)((longlong)*IConsoleManager::Singleton + 0x40))
                        (IConsoleManager::Singleton,FVar7.Data,pvVar5,L"",
                         in_stack_ffffffffffffff68.Data);
            }
          }
          else {
            if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
                (IConsoleManager::SetupSingleton(),
                IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Singleton != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x4fb,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            in_stack_ffffffffffffff68.Data = in_stack_ffffffffffffff68.Data & 0xffffffff00000000;
            FVar7.Data = (FScriptContainerElement *)L"";
            if (local_88.Data.ArrayNum != 0) {
              FVar7.Data = local_88.Data.AllocatorInstance.Data;
            }
            (**(code **)((longlong)*IConsoleManager::Singleton + 0x38))
                      (IConsoleManager::Singleton,FVar7.Data,pvVar5,L"",
                       in_stack_ffffffffffffff68.Data);
          }
        }
      }
    }
    else if (1 < (byte)LogRuntimeOptionsBase._0_1_) {
      bVar3 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_68);
      }
      else {
        ::FString::FString(&local_68,L"None");
      }
      local_res8 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_res8,&local_58);
      in_stack_ffffffffffffff68.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        in_stack_ffffffffffffff68.Data = local_58.Data.AllocatorInstance.Data;
      }
      (**(code **)(*(longlong *)this->_padding_ + 0x318))();
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRuntimeOptionsBase);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    local_30.Field = (local_30.Field)->Next;
    TFieldIterator<FProperty_const_>::IterateToNext(&local_30);
    pFVar2 = (FProperty *)local_30.Field;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// StaticRegisterNativesURuntimeOptionsBase @ 1484fcfe0

void __cdecl URuntimeOptionsBase::StaticRegisterNativesURuntimeOptionsBase(void)

{
  return;
}

// operator() @ 15052c150

bool __thiscall
`URuntimeOptionsBase::InitializeRuntimeOptions'::__l19::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8097026578694799397>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x10) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8097026578694799397>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052c1c9;
    }
  }
  bVar2 = false;
LAB_15052c1c9:
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

