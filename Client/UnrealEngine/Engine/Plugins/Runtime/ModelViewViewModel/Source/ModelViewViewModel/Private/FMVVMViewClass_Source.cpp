// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 8

// StaticStruct @ 14a738f50

UScriptStruct * __cdecl FMVVMViewClass_Source::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMVVMViewClass_Source.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UScriptStruct_FMVVMViewClass_Source.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewClass_Source,(UObject *)pUVar1,
                         L"MVVMViewClass_Source");
  }
  return Z_Registration_Info_UScriptStruct_FMVVMViewClass_Source.OuterSingleton;
}

// operator() @ 14a740ec0

bool __thiscall
`FMVVMViewClass_Source::GetOrCreateInstance'::__l2::<lambda_1>::operator()(void *this)

{
  TValueOrError<UObject_*,void> local_48;
  TValueOrError<UE::MVVM::FFieldContext,void> local_38;
  
  FMVVMCompiledBindingLibrary::EvaluateFieldPath
            ((FMVVMCompiledBindingLibrary *)(**(longlong **)this + 0x88),&local_38,
             (UObject *)**(undefined8 **)((longlong)this + 8),
             (FMVVMVCompiledFieldPath *)(*(longlong *)((longlong)this + 0x10) + 0x20));
  if (local_38.Value.bIsSet != false) {
    UE::MVVM::FieldPathHelper::EvaluateObjectProperty(&local_48,(FFieldContext *)&local_38);
    if ((local_48.Value.bIsSet != false) && (local_48.Value.TypedValue != (UObject *)0x0)) {
      **(longlong **)((longlong)this + 0x18) = (longlong)local_48.Value.TypedValue;
    }
  }
  if ((**(longlong **)((longlong)this + 0x18) == 0) && (**(char **)((longlong)this + 0x20) == '\0'))
  {
    return false;
  }
  return true;
}

// GetGlobalCollectionViewModel @ 14a751ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TScriptInterface<INotifyFieldValueChanged> * __thiscall
FMVVMViewClass_Source::GetGlobalCollectionViewModel
          (FMVVMViewClass_Source *this,
          TScriptInterface<INotifyFieldValueChanged> *__return_storage_ptr__,UUserWidget *param_1)

{
  UMVVMViewModelBase *pUVar1;
  UMVVMViewModelBase *pUVar2;
  UMVVMViewModelBase *pUVar3;
  UMVVMViewModelCollectionObject *local_res8;
  
  pUVar2 = (UMVVMViewModelBase *)0x0;
  local_res8 = (UMVVMViewModelCollectionObject *)0x0;
  pUVar1 = UE::MVVM::Private::GetGlobalCollectionViewModel
                     (param_1,&this->GlobalViewModelInstance,&local_res8);
  pUVar3 = pUVar2;
  if (pUVar1 != (UMVVMViewModelBase *)0x0) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar2 = pUVar1;
    pUVar3 = (UMVVMViewModelBase *)&pUVar1->_padding_;
  }
  *(UMVVMViewModelBase **)__return_storage_ptr__ = pUVar2;
  *(UMVVMViewModelBase **)&__return_storage_ptr__->field_0x8 = pUVar3;
  return __return_storage_ptr__;
}

// GetOrCreateInstance @ 14a752790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
FMVVMViewClass_Source::GetOrCreateInstance
          (FMVVMViewClass_Source *this,UMVVMViewClass *param_1,UMVVMView *param_2,
          UUserWidget *param_3)

{
  FName *pFVar1;
  int iVar2;
  UMVVMViewModelContextResolver *pUVar3;
  code *pcVar4;
  UUserWidget *pUVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  UClass *pUVar14;
  UClass *pUVar15;
  UMVVMViewModelBase *this_00;
  byte bVar16;
  longlong *plVar17;
  UClass *pUVar18;
  FMessageLog *this_01;
  UMVVMViewClass *local_res10 [3];
  undefined1 auStackY_528 [32];
  byte local_4f8 [8];
  UUserWidget *local_4f0;
  UUserWidget *local_4e8;
  undefined1 local_4e0 [8];
  FName local_4d8;
  undefined8 local_4d0;
  UMVVMViewModelCollectionObject *local_4c8;
  UUserWidget *local_4c0;
  UUserWidget *local_4b8;
  UUserWidget *local_4b0;
  UUserWidget *local_4a8;
  UClass *local_4a0;
  UUserWidget *local_498;
  UUserWidget *local_490;
  UMVVMViewClass **local_488;
  UUserWidget **local_480;
  FMVVMViewClass_Source *local_478;
  UUserWidget **local_470;
  byte *local_468;
  FText local_460;
  FText local_450;
  TSharedRef<FTokenizedMessage,1> local_440;
  FText local_430;
  FText local_420;
  TSharedRef<FTokenizedMessage,1> local_410;
  FText local_400;
  FText local_3f0;
  TSharedRef<FTokenizedMessage,1> local_3e0;
  FText local_3d0;
  FText local_3c0;
  TSharedRef<FTokenizedMessage,1> local_3b0;
  FText local_3a0;
  FText local_390;
  TSharedRef<FTokenizedMessage,1> local_380;
  FText local_370;
  FText local_360;
  TSharedRef<FTokenizedMessage,1> local_350;
  FText local_340;
  FText local_330;
  TSharedRef<FTokenizedMessage,1> local_320;
  FMessageLog local_310;
  FMessageLog local_2d8;
  FMessageLog local_2a0;
  FMessageLog local_268;
  FMessageLog local_230;
  FMessageLog local_1f8;
  FText local_1c0;
  FTextFormat local_1b0;
  FText local_1a0;
  FTextFormat local_190;
  FText local_180;
  FText local_170;
  FText local_160;
  FTextFormat local_150;
  FText local_140;
  FTextFormat local_130;
  FText local_120;
  FTextFormat local_110;
  FTextFormat local_100;
  FTextFormat local_f0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_528;
  local_res10[0] = param_1;
  local_4f0 = param_3;
  if ((param_1 == (UMVVMViewClass *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InViewClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMViewClass.cpp"
                         ,0x41,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pUVar9 = (UObject *)(*pcVar4)();
    return pUVar9;
  }
  if ((param_2 == (UMVVMView *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMViewClass.cpp"
                         ,0x42,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pUVar9 = (UObject *)(*pcVar4)();
    return pUVar9;
  }
  if ((local_4f0 == (UUserWidget *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserWidget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMViewClass.cpp"
                         ,0x43,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pUVar9 = (UObject *)(*pcVar4)();
    return pUVar9;
  }
  pUVar5 = local_4f0;
  local_488 = local_res10;
  pUVar18 = (UClass *)0x0;
  local_480 = &local_4f0;
  bVar16 = (byte)this->Flags;
  local_470 = &local_4e8;
  local_4f8[0] = bVar16 >> 3 & 1;
  local_468 = local_4f8;
  local_4e8 = (UUserWidget *)0x0;
  local_478 = this;
  if ((this->Flags & 1) == 0) {
    if ((char)bVar16 < '\0') {
      return (UObject *)local_4f0;
    }
    pUVar3 = (this->Resolver).field0_0x0.DebugPtr;
    if (pUVar3 == (UMVVMViewModelContextResolver *)0x0) {
      bVar8 = FMVVMViewModelContext::IsValid(&this->GlobalViewModelInstance);
      if (bVar8) {
        local_4c8 = (UMVVMViewModelCollectionObject *)0x0;
        this_00 = UE::MVVM::Private::GetGlobalCollectionViewModel
                            (local_4f0,&this->GlobalViewModelInstance,&local_4c8);
        pUVar5 = local_4f0;
        if (this_00 != (UMVVMViewModelBase *)0x0) {
          local_4a0 = (this->GlobalViewModelInstance).ContextClass.Class.field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_4a0 != (UClass *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)local_4a0);
          }
          bVar8 = UObjectBaseUtility::IsA<TSubclassOf<UMVVMViewModelBase>_>
                            ((UObjectBaseUtility *)this_00,
                             (TSubclassOf<UMVVMViewModelBase>)&local_4a0);
          if (bVar8) {
            return (UObject *)this_00;
          }
          `FMVVMViewClass_Source::GetOrCreateInstance'::__l65::<lambda_2>::operator()(local_4e0);
          return (UObject *)this_00;
        }
        if (local_4f8[0] != 0) {
          return (UObject *)local_4e8;
        }
        FMessageLog::FMessageLog((FMessageLog *)&local_310,&UE::MVVM::FMessageLog::LogName);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UUserWidget *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        local_310.UserWidget.WeakPtr.ObjectIndex = 0;
        local_310.UserWidget.WeakPtr.ObjectSerialNumber = 0;
        local_498 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UUserWidget *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        FWeakObjectPtr::operator=(&local_310.UserWidget.WeakPtr,(FObjectPtr)&local_498);
        pFVar1 = &(this->GlobalViewModelInstance).ContextName;
        if (local_4c8 == (UMVVMViewModelCollectionObject *)0x0) {
          pFVar11 = FText::FromName(&local_140,pFVar1);
          pFVar12 = FText::AsLocalizable_Advanced_LocText
                              (&local_360,L"MVVMViewClass",L"CreateInstanceFailedGlobalInstance",
                               L"The source \'{0}\' will be invalid because the global view model collection could not be found."
                              );
          pFVar13 = FTextFormat::FTextFormat(&local_130,pFVar12,Default);
          pFVar11 = FText::Format<FText>(&local_370,pFVar13,pFVar11);
          UE::MVVM::FMessageLog::Message(&local_310,&local_380,Error,pFVar11);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_380.SharedReferenceCount.ReferenceController);
          if (local_370.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_370.TextData.Reference + 0x10))();
          }
        }
        else {
          pFVar11 = FText::FromName(&local_160,pFVar1);
          pFVar12 = FText::AsLocalizable_Advanced_LocText
                              (&local_390,L"MVVMViewClass",L"CreateInstanceFailedGlobal",
                               L"The source \'{0}\' was not found in the global view model collection."
                              );
          pFVar13 = FTextFormat::FTextFormat(&local_150,pFVar12,Default);
          pFVar11 = FText::Format<FText>(&local_3a0,pFVar13,pFVar11);
          UE::MVVM::FMessageLog::Message(&local_310,&local_3b0,Error,pFVar11);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3b0.SharedReferenceCount.ReferenceController);
          local_360.TextData.Reference = local_390.TextData.Reference;
          if (local_3a0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_3a0.TextData.Reference + 0x10))();
            local_360.TextData.Reference = local_390.TextData.Reference;
          }
        }
        if (local_360.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_360.TextData.Reference + 0x10))();
        }
        this_01 = &local_310;
      }
      else {
        if ((this->FieldPath).Num < 0) {
          return (UObject *)local_4e8;
        }
        bVar8 = `FMVVMViewClass_Source::GetOrCreateInstance'::__l2::<lambda_1>::operator()
                          (&local_488);
        pUVar5 = local_4f0;
        if (bVar8) {
          return (UObject *)local_4e8;
        }
        FMessageLog::FMessageLog((FMessageLog *)&local_1f8,&UE::MVVM::FMessageLog::LogName);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UUserWidget *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        local_1f8.UserWidget.WeakPtr.ObjectIndex = 0;
        local_1f8.UserWidget.WeakPtr.ObjectSerialNumber = 0;
        local_490 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UUserWidget *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        FWeakObjectPtr::operator=(&local_1f8.UserWidget.WeakPtr,(FObjectPtr)&local_490);
        pFVar11 = FText::FromName(&local_120,&this->PropertyName);
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_330,L"MVVMViewClass",L"CreateInstanceInvalidBinding",
                             L"The source \'{0}\' was evaluated to be invalid at initialization.");
        pFVar13 = FTextFormat::FTextFormat(&local_110,pFVar12,Default);
        pFVar11 = FText::Format<FText>(&local_340,pFVar13,pFVar11);
        UE::MVVM::FMessageLog::Message(&local_1f8,&local_350,Error,pFVar11);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_350.SharedReferenceCount.ReferenceController);
        if (local_340.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_340.TextData.Reference + 0x10))();
        }
        if (local_330.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_330.TextData.Reference + 0x10))();
        }
        this_01 = &local_1f8;
      }
    }
    else {
      pUVar14 = (this->ExpectedSourceType).Class.field0_0x0.DebugPtr;
      pcVar4 = *(code **)(*(longlong *)pUVar3 + 0x2b0);
      pUVar10 = pUVar18;
      if ((pUVar14 != (UClass *)0x0) &&
         (pUVar15 = Z_Construct_UClass_UObject_NoRegister(), pUVar15 != (UClass *)0x0)) {
        iVar2 = (int)pUVar15->_padding_;
        if (((int)pUVar14->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar15->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          pUVar10 = (this->ExpectedSourceType).Class.field0_0x0.DebugPtr;
        }
      }
      local_4e8 = (UUserWidget *)(*pcVar4)(pUVar3,pUVar10,pUVar5,param_2);
      pUVar5 = local_4f0;
      if (local_4e8 == (UUserWidget *)0x0) {
        if (local_4f8[0] != 0) {
          return (UObject *)0x0;
        }
        FMessageLog::FMessageLog((FMessageLog *)&local_268,&UE::MVVM::FMessageLog::LogName);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UUserWidget *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        local_268.UserWidget.WeakPtr.ObjectIndex = 0;
        local_268.UserWidget.WeakPtr.ObjectSerialNumber = 0;
        local_4b0 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UUserWidget *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        FWeakObjectPtr::operator=(&local_268.UserWidget.WeakPtr,(FObjectPtr)&local_4b0);
        pFVar11 = FText::FromName(&local_1a0,&this->PropertyName);
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_3f0,L"MVVMViewClass",L"CreateInstanceFailResolver",
                             L"The source \'{0}\' could not be created. Resolver returned an invalid value."
                            );
        pFVar13 = FTextFormat::FTextFormat(&local_190,pFVar12,Default);
        pFVar11 = FText::Format<FText>(&local_400,pFVar13,pFVar11);
        UE::MVVM::FMessageLog::Message(&local_268,&local_410,Error,pFVar11);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_410.SharedReferenceCount.ReferenceController);
        if (local_400.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_400.TextData.Reference + 0x10))();
        }
        if (local_3f0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_3f0.TextData.Reference + 0x10))();
        }
        FMessageLog::~FMessageLog((FMessageLog *)&local_268);
        if (local_4e8 == (UUserWidget *)0x0) {
          return (UObject *)0x0;
        }
      }
      pUVar14 = (this->ExpectedSourceType).Class.field0_0x0.DebugPtr;
      if ((pUVar14 != (UClass *)0x0) &&
         (pUVar10 = Z_Construct_UClass_UObject_NoRegister(), pUVar10 != (UClass *)0x0)) {
        iVar2 = (int)pUVar10->_padding_;
        if (((int)pUVar14->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar10->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          pUVar18 = (this->ExpectedSourceType).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar5 = local_4f0;
      iVar2 = (int)pUVar18->_padding_;
      if ((*(int *)(local_4e8->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(local_4e8->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar18->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        return (UObject *)local_4e8;
      }
      local_4e8 = (UUserWidget *)0x0;
      FMessageLog::FMessageLog((FMessageLog *)&local_230,&UE::MVVM::FMessageLog::LogName);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      local_230.UserWidget.WeakPtr.ObjectIndex = 0;
      local_230.UserWidget.WeakPtr.ObjectSerialNumber = 0;
      local_4a8 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      FWeakObjectPtr::operator=(&local_230.UserWidget.WeakPtr,(FObjectPtr)&local_4a8);
      pFVar11 = FText::FromName(&local_180,&this->PropertyName);
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_3c0,L"MVVMViewClass",L"CreateInstanceFailResolverExpected",
                           L"The source \'{0}\' could not be created. Resolver returned viewodel of an unexpected type."
                          );
      pFVar13 = FTextFormat::FTextFormat(&local_100,pFVar12,Default);
      pFVar11 = FText::Format<FText>(&local_3d0,pFVar13,pFVar11);
      UE::MVVM::FMessageLog::Message(&local_230,&local_3e0,Error,pFVar11);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3e0.SharedReferenceCount.ReferenceController);
      if (local_3d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3d0.TextData.Reference + 0x10))();
      }
      if (local_3c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3c0.TextData.Reference + 0x10))();
      }
      this_01 = &local_230;
    }
  }
  else {
    pUVar14 = (this->ExpectedSourceType).Class.field0_0x0.DebugPtr;
    if ((pUVar14 != (UClass *)0x0) &&
       (pUVar10 = Z_Construct_UClass_UObject_NoRegister(), pUVar10 != (UClass *)0x0)) {
      iVar2 = (int)pUVar10->_padding_;
      if (((int)pUVar14->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar10->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((bVar8) &&
         (pUVar14 = (this->ExpectedSourceType).Class.field0_0x0.DebugPtr, pUVar14 != (UClass *)0x0))
      {
        if ((this->Flags & 0x400) == 0) {
          local_4d8.ComparisonIndex.Value = 0;
          local_4d8.Number = 0;
          pUVar10 = Z_Construct_UClass_UObject_NoRegister();
          FVar6 = local_4d8;
          pUVar5 = local_4f0;
          if (pUVar10 != (UClass *)0x0) {
            iVar2 = (int)pUVar10->_padding_;
            if (((int)pUVar14->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar10->_padding_)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              pUVar18 = (this->ExpectedSourceType).Class.field0_0x0.DebugPtr;
            }
          }
          local_4d0 = 0;
          if (local_4d8 == (FName)0x0) {
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)local_4f0,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
          }
          pUVar14 = Z_Construct_UClass_UObject_NoRegister();
          CheckIsClassChildOf_Internal(pUVar14,pUVar18);
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_d8,pUVar18);
          FVar7 = local_4d8;
          local_d8._8_8_ = pUVar5;
          local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
          local_d8._56_8_ = (UPackage *)0x0;
          local_4d8.ComparisonIndex = FVar6.ComparisonIndex.Value;
          local_4d8.Number = FVar6.Number;
          local_d8._16_4_ = local_4d8.ComparisonIndex.Value;
          local_d8._20_4_ = local_4d8.Number;
          local_d8._24_4_ = RF_Transient;
          local_d8._40_8_ = (UObject *)0x0;
          local_d8[0x20] = false;
          local_4d8 = FVar7;
          pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
          if (local_d8._64_8_ == 0) {
            return pUVar9;
          }
          plVar17 = (longlong *)(local_d8 + 0x50);
          if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
            plVar17 = (longlong *)local_d8._104_8_;
          }
          (**(code **)(*plVar17 + 0x10))();
          return pUVar9;
        }
        if ((this->FieldPath).Num < 0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1675003697450451038>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMViewClass.cpp"
                             ,0x5e,"FieldPath.IsValid()");
          if (!bVar8) {
            return (UObject *)local_4e8;
          }
          pcVar4 = (code *)swi(3);
          pUVar9 = (UObject *)(*pcVar4)();
          return pUVar9;
        }
        bVar8 = `FMVVMViewClass_Source::GetOrCreateInstance'::__l2::<lambda_1>::operator()
                          (&local_488);
        pUVar5 = local_4f0;
        if (bVar8) {
          return (UObject *)local_4e8;
        }
        FMessageLog::FMessageLog((FMessageLog *)&local_2d8,&UE::MVVM::FMessageLog::LogName);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UUserWidget *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        local_2d8.UserWidget.WeakPtr.ObjectIndex = 0;
        local_2d8.UserWidget.WeakPtr.ObjectSerialNumber = 0;
        local_4c0 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UUserWidget *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        FWeakObjectPtr::operator=(&local_2d8.UserWidget.WeakPtr,(FObjectPtr)&local_4c0);
        pFVar11 = FText::FromName(&local_170,&this->PropertyName);
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_450,L"MVVMViewClass",L"CreateInstanceInvalidStaticInstance",
                             L"The source \'{0}\' was not found for the static view model at initialization."
                            );
        pFVar13 = FTextFormat::FTextFormat(&local_f0,pFVar12,Default);
        pFVar11 = FText::Format<FText>(&local_460,pFVar13,pFVar11);
        UE::MVVM::FMessageLog::Message(&local_2d8,&local_320,Error,pFVar11);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_320.SharedReferenceCount.ReferenceController);
        if (local_460.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_460.TextData.Reference + 0x10))();
        }
        if (local_450.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_450.TextData.Reference + 0x10))();
        }
        this_01 = &local_2d8;
        goto LAB_14a7532e4;
      }
    }
    pUVar5 = local_4f0;
    if (local_4f8[0] != 0) {
      return (UObject *)local_4e8;
    }
    FMessageLog::FMessageLog((FMessageLog *)&local_2a0,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    local_2a0.UserWidget.WeakPtr.ObjectIndex = 0;
    local_2a0.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_4b8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&local_2a0.UserWidget.WeakPtr,(FObjectPtr)&local_4b8);
    pFVar11 = FText::FromName(&local_1c0,&this->PropertyName);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_420,L"MVVMViewClass",L"CreateInstanceCreateInstance",
                         L"The source \'{0}\' could not be created. The class is not loaded.");
    pFVar13 = FTextFormat::FTextFormat(&local_1b0,pFVar12,Default);
    pFVar11 = FText::Format<FText>(&local_430,pFVar13,pFVar11);
    UE::MVVM::FMessageLog::Message(&local_2a0,&local_440,Error,pFVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_440.SharedReferenceCount.ReferenceController);
    if (local_430.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_430.TextData.Reference + 0x10))();
    }
    if (local_420.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_420.TextData.Reference + 0x10))();
    }
    this_01 = &local_2a0;
  }
LAB_14a7532e4:
  FMessageLog::~FMessageLog((FMessageLog *)this_01);
  return (UObject *)local_4e8;
}

// GetSourceClass @ 14a7545a0

UClass * __thiscall FMVVMViewClass_Source::GetSourceClass(FMVVMViewClass_Source *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->ExpectedSourceType).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UObject_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (this->ExpectedSourceType).Class.field0_0x0.DebugPtr;
      }
    }
  }
  return (UClass *)0x0;
}

// ReleaseInstance @ 14a75cab0

void __thiscall
FMVVMViewClass_Source::ReleaseInstance
          (FMVVMViewClass_Source *this,UObject *param_1,UMVVMView *param_2)

{
  UMVVMViewModelContextResolver *pUVar1;
  
  pUVar1 = (this->Resolver).field0_0x0.DebugPtr;
  if (pUVar1 != (UMVVMViewModelContextResolver *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a75cabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x2b8))();
    return;
  }
  return;
}

// ToString @ 14a762ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FMVVMViewClass_Source::ToString
          (FMVVMViewClass_Source *this,FString *__return_storage_ptr__,UMVVMViewClass *param_1,
          FToStringArgs *param_2)

{
  int iVar1;
  UMVVMViewModelContextResolver *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  void *pvVar7;
  UClass *pUVar8;
  ulong64 uVar9;
  int iVar10;
  FName *pFVar11;
  FName *pFVar12;
  undefined1 auStack_4e8 [32];
  FName local_4c8;
  FName local_4c0;
  FName local_4b8;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  TVariant<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<FString,FString>::FEmptyType>
  local_480;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_4e8;
  if ((param_1 == (UMVVMViewClass *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMViewClass.cpp"
                         ,0xc9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar4)();
    return pFVar6;
  }
  local_468.Base = local_448;
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  local_468.CurPos = local_448;
  local_468.End = (wchar_t *)local_48;
  pvVar7 = FGenericPlatformString::Memcpy(local_448,L"Type: ",0xc);
  local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0xc);
  pUVar8 = TSubclassOf<UObject>::operator*(&this->ExpectedSourceType);
  pFVar6 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar8,&local_4b0,(UObject *)0x0);
  operator<<<wchar_t,FString>(&local_468,pFVar6);
  if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
  }
  if (local_468.End < local_468.CurPos + 0xe) {
    TStringBuilderBase<wchar_t>::Extend(&local_468,0xe);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L", SourceName: ",0x1c);
  local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x1c);
  local_4c0 = this->PropertyName;
  ::FName::AppendString(&local_4c0,&local_468);
  if (param_2->bAddFields != false) {
    if (local_468.End < local_468.CurPos + 0xf) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0xf);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"\n    FieldIds: ",0x1e);
    iVar10 = (this->FieldToRegisterTo).ArrayNum;
    local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x1e);
    pFVar11 = (FName *)(this->FieldToRegisterTo).AllocatorInstance.Data;
    if ((iVar10 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
    pFVar12 = (FName *)((longlong)pFVar11 + (longlong)iVar10 * 0xc);
    if (pFVar11 != pFVar12) {
      while( true ) {
        local_4c8 = *pFVar11;
        ::FName::AppendString(&local_4c8,&local_468);
        pFVar11 = (FName *)&pFVar11[1].Number;
        if (pFVar11 == pFVar12) break;
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        *local_468.CurPos = L'|';
        local_468.CurPos = local_468.CurPos + 1;
      }
    }
  }
  if (param_2->bAddBindings != false) {
    if (local_468.End < local_468.CurPos + 0xf) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0xf);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"\n    Bindings: ",0x1e);
    iVar10 = (this->Bindings).ArrayNum;
    local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x1e);
    pFVar11 = (FName *)(this->Bindings).AllocatorInstance.Data;
    if ((iVar10 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
    pFVar12 = pFVar11 + (longlong)iVar10 * 2;
    for (; pFVar11 != pFVar12; pFVar11 = pFVar11 + 2) {
      if (local_468.End < local_468.CurPos + 0x12) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,0x12);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"\n        FieldId: ",0x24);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x24);
      local_4b8 = *pFVar11;
      ::FName::AppendString(&local_4b8,&local_468);
      if (local_468.End < local_468.CurPos + 0xf) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,0xf);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L" BindingIndex: ",0x1e);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x1e);
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_468,L"%d");
      if (local_468.End < local_468.CurPos + 8) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,8);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L" Flags: ",0x10);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x10);
      if ((pFVar11[1].Number & 1) != 0) {
        if (local_468.End < (wchar_t *)((longlong)pvVar7 + 0x2c)) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,0xe);
        }
        pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"ExecuteAtInit ",0x1c);
        local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x1c);
      }
    }
  }
  if (param_2->bAddFlags != false) {
    if (local_468.End < local_468.CurPos + 0xc) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0xc);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"\n    Flags: ",0x18);
    local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x18);
    bVar5 = false;
    if ((this->Flags & 0x80) != 0) {
      bVar5 = true;
      if (local_468.End < (wchar_t *)((longlong)pvVar7 + 0x2c)) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,10);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"UserWidget",0x14);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x14);
    }
    if ((this->Flags & 2) != 0) {
      if (bVar5) {
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        *local_468.CurPos = L'|';
        local_468.CurPos = local_468.CurPos + 1;
      }
      bVar5 = true;
      if (local_468.End < local_468.CurPos + 8) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,8);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"Property",0x10);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x10);
    }
    if ((this->Flags & 4) != 0) {
      if (bVar5) {
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        *local_468.CurPos = L'|';
        local_468.CurPos = local_468.CurPos + 1;
      }
      bVar5 = true;
      if (local_468.End < local_468.CurPos + 0xb) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,0xb);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"SetProperty",0x16);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x16);
    }
    if ((this->Flags & 0x10) != 0) {
      if (bVar5) {
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        *local_468.CurPos = L'|';
        local_468.CurPos = local_468.CurPos + 1;
      }
      bVar5 = true;
      if (local_468.End < local_468.CurPos + 8) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,8);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"CanBeSet",0x10);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x10);
    }
    if ((this->Flags & 0x20) != 0) {
      if (bVar5) {
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        *local_468.CurPos = L'|';
        local_468.CurPos = local_468.CurPos + 1;
      }
      bVar5 = true;
      if (local_468.End < local_468.CurPos + 0xe) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,0xe);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"CanBeEvaluated",0x1c);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x1c);
    }
    if ((this->Flags & 0x40) != 0) {
      if (bVar5) {
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        *local_468.CurPos = L'|';
        local_468.CurPos = local_468.CurPos + 1;
      }
      bVar5 = true;
      if (local_468.End < local_468.CurPos + 0x13) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,0x13);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"HasEvaluateBindings",0x26);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x26);
    }
    if ((this->Flags & 8) != 0) {
      if (bVar5) {
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        *local_468.CurPos = L'|';
        local_468.CurPos = local_468.CurPos + 1;
      }
      bVar5 = true;
      if (local_468.End < local_468.CurPos + 8) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,8);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"Optional",0x10);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x10);
    }
    if ((this->Flags & 0x100) != 0) {
      if (bVar5) {
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        *local_468.CurPos = L'|';
        local_468.CurPos = local_468.CurPos + 1;
      }
      bVar5 = true;
      if (local_468.End < local_468.CurPos + 0xf) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,0xf);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"HasTickBindings",0x1e);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x1e);
    }
    if ((this->Flags & 0x200) != 0) {
      if (bVar5) {
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        *local_468.CurPos = L'|';
        local_468.CurPos = local_468.CurPos + 1;
      }
      bVar5 = true;
      if (local_468.End < local_468.CurPos + 0xb) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,0xb);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"IsViewModel",0x16);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x16);
    }
    if ((this->Flags & 0x400) != 0) {
      if (bVar5) {
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        *local_468.CurPos = L'|';
        local_468.CurPos = local_468.CurPos + 1;
      }
      bVar5 = true;
      if (local_468.End < local_468.CurPos + 0xf) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,0xf);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"EditDefaultOnly",0x1e);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x1e);
    }
    if ((this->Flags & 0x800) != 0) {
      if (bVar5) {
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        *local_468.CurPos = L'|';
        local_468.CurPos = local_468.CurPos + 1;
      }
      bVar5 = true;
      if (local_468.End < local_468.CurPos + 0x1a) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,0x1a);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"GlobalCollectionAutoUpdate",0x34);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x34);
    }
    if ((this->Flags & 0x1000) != 0) {
      if (bVar5) {
        if (local_468.End < local_468.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,1);
        }
        *local_468.CurPos = L'|';
        local_468.CurPos = local_468.CurPos + 1;
      }
      if (local_468.End < local_468.CurPos + 0x20) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,0x20);
      }
      pvVar7 = FGenericPlatformString::Memcpy
                         (local_468.CurPos,L"AlwaysExecuteBindingsOnSetSource",0x40);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x40);
    }
  }
  if (param_2->bAddCreationMode != false) {
    if (local_468.End < local_468.CurPos + 0x13) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0x13);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"\n    CreationType: ",0x26);
    local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x26);
    if ((this->Flags & 1) == 0) {
      pUVar2 = (this->Resolver).field0_0x0.DebugPtr;
      if (pUVar2 == (UMVVMViewModelContextResolver *)0x0) {
        bVar5 = FMVVMViewModelContext::IsValid(&this->GlobalViewModelInstance);
        if (bVar5) {
          if (local_468.End < local_468.CurPos + 0x12) {
            TStringBuilderBase<wchar_t>::Extend(&local_468,0x12);
          }
          pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"GlobalCollection={",0x24);
          local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x24);
          pUVar8 = TSubclassOf<UMVVMViewModelBase>::operator*
                             (&(this->GlobalViewModelInstance).ContextClass);
          if (pUVar8 == (UClass *)0x0) {
            if (local_468.End < local_468.CurPos + 9) {
              TStringBuilderBase<wchar_t>::Extend(&local_468,9);
            }
            pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"<Invalid>",0x12);
            local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x12);
          }
          else {
            pUVar8 = TSubclassOf<UMVVMViewModelBase>::operator*
                               (&(this->GlobalViewModelInstance).ContextClass);
            pFVar6 = UObjectBaseUtility::GetPathName
                               ((UObjectBaseUtility *)pUVar8,&local_490,(UObject *)0x0);
            operator<<<wchar_t,FString>(&local_468,pFVar6);
            if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_490.Data.AllocatorInstance.Data);
            }
          }
          if (local_468.End < local_468.CurPos + 2) {
            TStringBuilderBase<wchar_t>::Extend(&local_468,2);
          }
          pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L", ",4);
          local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 4);
          ::FName::AppendString(&(this->GlobalViewModelInstance).ContextName,&local_468);
          if (local_468.End < local_468.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_468,1);
          }
          pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"}",2);
          local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 2);
        }
        else if ((this->FieldPath).Num < 0) {
          if (local_468.End < local_468.CurPos + 4) {
            TStringBuilderBase<wchar_t>::Extend(&local_468,4);
          }
          pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,&u_None,8);
          local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 8);
        }
        else {
          if (local_468.End < local_468.CurPos + 5) {
            TStringBuilderBase<wchar_t>::Extend(&local_468,5);
          }
          pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"Path=",10);
          local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 10);
          FMVVMCompiledBindingLibrary::FieldPathToString
                    (&param_1->BindingLibrary,(TValueOrError<FString,FString> *)&local_480,
                     this->FieldPath,param_2->bUseDisplayName);
          bVar5 = TVariant<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<FString,FString>::FEmptyType>
                  ::IsType<FString>(&local_480);
          if (bVar5) {
            if ((local_480.TypeIndex != '\0') &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) {
code_r0x00014a7637b5:
              pcVar4 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar4)();
              return pFVar6;
            }
          }
          else {
            if (local_468.End < local_468.CurPos + 7) {
              TStringBuilderBase<wchar_t>::Extend(&local_468,7);
            }
            pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"<Error>",0xe);
            local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0xe);
            if ((local_480.TypeIndex != '\x01') &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar5)) goto code_r0x00014a7637b5;
          }
          operator<<<wchar_t,FString_&>(&local_468,(FString *)&local_480);
          TValueOrError<FString,FString>::~TValueOrError<FString,FString>
                    ((TValueOrError<FString,FString> *)&local_480);
        }
      }
      else {
        pFVar6 = UObjectBaseUtility::GetFullName
                           (*(UObjectBaseUtility **)&pUVar2->field_0x10,&local_4a0,(UObject *)0x0,
                            None);
        iVar1 = (pFVar6->Data).ArrayNum;
        pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
        iVar10 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar10 = 0;
        }
        uVar9 = (ulong64)iVar10;
        if (local_468.End < local_468.CurPos + uVar9) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,uVar9);
        }
        if (iVar10 != 0) {
          pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,pFVar3,uVar9 * 2);
          local_468.CurPos = (wchar_t *)((longlong)pvVar7 + uVar9 * 2);
        }
        if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (local_468.End < (wchar_t *)((longlong)pvVar7 + 0x42)) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,0xe);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L"CreateInstance",0x1c);
      local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x1c);
      if ((this->Flags & 0x400) != 0) {
        if (local_468.End < (wchar_t *)((longlong)pvVar7 + 0x3e)) {
          TStringBuilderBase<wchar_t>::Extend(&local_468,0x11);
        }
        pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,L", InstanceExposed",0x22);
        local_468.CurPos = (wchar_t *)((longlong)pvVar7 + 0x22);
      }
    }
  }
  if (local_468.End < local_468.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_468,1);
  }
  *local_468.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_468.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
  return __return_storage_ptr__;
}

// operator() @ 150554020

bool __thiscall
`FMVVMViewClass_Source::GetOrCreateInstance'::__l65::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1675003697450451085>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1675003697450451085>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

