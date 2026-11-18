// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 66

// StaticClass @ 14a738460

UClass * __cdecl UMVVMView::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMView",
               &Z_Registration_Info_UClass_UMVVMView.InnerSingleton,StaticRegisterNativesUMVVMView,
               0x70,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMVVMView>,InternalVTableHelperCtorCaller<UMVVMView>,local_res8,
               UUserWidgetExtension::StaticClass,UUserWidget::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMView.InnerSingleton;
}

// UMVVMView @ 14a73fc90

UMVVMView * __thiscall UMVVMView::UMVVMView(UMVVMView *this,FVTableHelper *param_1)

{
  UUserWidgetExtension::UUserWidgetExtension((UUserWidgetExtension *)this,param_1);
  this->_padding_ = (longlong)&___7UMVVMView__6B_;
  (this->GeneratedViewClass).field0_0x0.DebugPtr = (UMVVMViewClass *)0x0;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  (this->BoundEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundEvents).ArrayNum = 0;
  (this->BoundEvents).ArrayMax = 0;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  this->ValidSources = 0;
  this->NumberOfSourceWithTickBinding = '\0';
  this->bLogBinding = false;
  this->bConstructed = false;
  this->bSourcesInitialized = false;
  this->bBindingsInitialized = false;
  this->bEventsInitialized = false;
  this->bHasDefaultTickBinding = false;
  return this;
}

// UMVVMView @ 14a73fcf0

UMVVMView * __thiscall UMVVMView::UMVVMView(UMVVMView *this,FObjectInitializer *param_1)

{
  UUserWidgetExtension::UUserWidgetExtension((UUserWidgetExtension *)this,param_1);
  this->_padding_ = (longlong)&___7UMVVMView__6B_;
  (this->GeneratedViewClass).field0_0x0.DebugPtr = (UMVVMViewClass *)0x0;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  (this->BoundEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundEvents).ArrayNum = 0;
  (this->BoundEvents).ArrayMax = 0;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  this->ValidSources = 0;
  this->NumberOfSourceWithTickBinding = '\0';
  this->bLogBinding = false;
  this->bConstructed = false;
  this->bSourcesInitialized = false;
  this->bBindingsInitialized = false;
  this->bEventsInitialized = false;
  this->bHasDefaultTickBinding = false;
  return this;
}

// ~UMVVMView @ 14a7407c0

void __thiscall UMVVMView::~UMVVMView(UMVVMView *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMVVMView__6B_;
  pFVar1 = (this->Extensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoundEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Sources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UUserWidgetExtension::~UUserWidgetExtension((UUserWidgetExtension *)this);
  return;
}

// operator() @ 14a740d10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall `UMVVMView::BindEvent'::__l2::<lambda_1>::operator()(void *this,FText *param_1)

{
  UObject *pUVar1;
  FString *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  UObject *local_res8;
  FText local_d8;
  TSharedRef<FTokenizedMessage,1> local_c8;
  FText local_b8;
  FText local_a8;
  FString local_98;
  FString local_88;
  FMessageLog local_78;
  FText local_40;
  FText local_30;
  FTextFormat local_20;
  
  pUVar1 = *(UObject **)((longlong)this + 8);
  FMessageLog::FMessageLog((FMessageLog *)&local_78,&UE::MVVM::FMessageLog::LogName);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_78.UserWidget.WeakPtr.ObjectIndex = 0;
  local_78.UserWidget.WeakPtr.ObjectSerialNumber = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=(&local_78.UserWidget.WeakPtr,(FObjectPtr)&local_res8);
  local_d8.TextData.Reference = (param_1->TextData).Reference;
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 8))
              (local_d8.TextData.Reference,&local_res8);
  }
  local_d8.Flags = param_1->Flags;
  pFVar2 = FMVVMViewClass_Event::ToString
                     (*(FMVVMViewClass_Event **)((longlong)this + 0x10),&local_88,
                      *(UMVVMViewClass **)(*(longlong *)this + 0x28),(FToStringArgs)0x1);
  pFVar3 = FText::FromString(&local_40,pFVar2);
  pFVar2 = UObjectBaseUtility::GetFullName
                     (*(UObjectBaseUtility **)this,&local_98,(UObject *)0x0,None);
  pFVar4 = FText::FromString(&local_30,pFVar2);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_a8,L"MVVMView",L"EnableLibraryEventFailed_Format",
                      L"Widget \'{0}\' can\'t register event \'{1}\'. {2}");
  pFVar6 = FTextFormat::FTextFormat(&local_20,pFVar5,Default);
  pFVar3 = FText::Format<FText,FText,FText>(&local_b8,pFVar6,pFVar4,pFVar3,&local_d8);
  UE::MVVM::FMessageLog::Message(&local_78,&local_c8,Error,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  FMessageLog::~FMessageLog((FMessageLog *)&local_78);
  return;
}

// AreSourcesValidForBinding @ 14a742940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall UMVVMView::AreSourcesValidForBinding(UMVVMView *this,int param_1)

{
  UMVVMViewClass *this_00;
  FMVVMViewClass_Binding *this_01;
  UUserWidget *pUVar1;
  FString *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  ulonglong uVar6;
  UUserWidget *local_res8;
  TSharedRef<FTokenizedMessage,1> local_a8;
  FText local_98;
  FText local_88;
  FString local_78;
  FMessageLog local_68;
  FText local_30;
  FTextFormat local_20;
  
  this_00 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  if (this_00 != (UMVVMViewClass *)0x0) {
    this_01 = UMVVMViewClass::GetBinding(this_00,(FMVVMViewClass_BindingKey)param_1);
    uVar6 = this_01->SourceBitField;
    if ((this->ValidSources & uVar6) == uVar6) {
      return true;
    }
    uVar6 = ~this->ValidSources & uVar6;
    if ((((this->GeneratedViewClass).field0_0x0.DebugPtr)->OptionalSources & uVar6) != uVar6) {
      pUVar1 = UUserWidgetExtension::GetUserWidget((UUserWidgetExtension *)this);
      FMessageLog::FMessageLog((FMessageLog *)&local_68,&UE::MVVM::FMessageLog::LogName);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      local_68.UserWidget.WeakPtr.ObjectIndex = 0;
      local_68.UserWidget.WeakPtr.ObjectSerialNumber = 0;
      local_res8 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      FWeakObjectPtr::operator=(&local_68.UserWidget.WeakPtr,(FObjectPtr)&local_res8);
      local_res8 = (UUserWidget *)CONCAT35(local_res8._5_3_,0x1000000);
      pFVar2 = FMVVMViewClass_Binding::ToString
                         (this_01,&local_78,(this->GeneratedViewClass).field0_0x0.DebugPtr,
                          SUB85(&local_res8,0));
      pFVar3 = FText::FromString(&local_30,pFVar2);
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_88,L"MVVMView",L"ExecuteGraphBindingFailInvalidSource",
                          L"The binding \'{0}\' was not executed. There are invalid sources.");
      pFVar5 = FTextFormat::FTextFormat(&local_20,pFVar4,Default);
      pFVar3 = FText::Format<FText>(&local_98,pFVar5,pFVar3);
      UE::MVVM::FMessageLog::Message(&local_68,&local_a8,Info,pFVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog((FMessageLog *)&local_68);
    }
  }
  return false;
}

// AreSourcesValidForEvent @ 14a742b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall UMVVMView::AreSourcesValidForEvent(UMVVMView *this,int param_1)

{
  UMVVMViewClass *this_00;
  FMVVMViewClass_Event *this_01;
  UUserWidget *pUVar1;
  FString *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  ulonglong uVar6;
  UUserWidget *local_res8;
  TSharedRef<FTokenizedMessage,1> local_a8;
  FText local_98;
  FText local_88;
  FString local_78;
  FMessageLog local_68;
  FText local_30;
  FTextFormat local_20;
  
  this_00 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  if (this_00 != (UMVVMViewClass *)0x0) {
    this_01 = UMVVMViewClass::GetEvent(this_00,(FMVVMViewClass_EventKey)param_1);
    uVar6 = this_01->SourceBitField;
    if ((this->ValidSources & uVar6) == uVar6) {
      return true;
    }
    uVar6 = ~this->ValidSources & uVar6;
    if ((((this->GeneratedViewClass).field0_0x0.DebugPtr)->OptionalSources & uVar6) != uVar6) {
      pUVar1 = UUserWidgetExtension::GetUserWidget((UUserWidgetExtension *)this);
      FMessageLog::FMessageLog((FMessageLog *)&local_68,&UE::MVVM::FMessageLog::LogName);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      local_68.UserWidget.WeakPtr.ObjectIndex = 0;
      local_68.UserWidget.WeakPtr.ObjectSerialNumber = 0;
      local_res8 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      FWeakObjectPtr::operator=(&local_68.UserWidget.WeakPtr,(FObjectPtr)&local_res8);
      pFVar2 = FMVVMViewClass_Event::ToString
                         (this_01,&local_78,(this->GeneratedViewClass).field0_0x0.DebugPtr,
                          (FToStringArgs)0x0);
      pFVar3 = FText::FromString(&local_30,pFVar2);
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_88,L"MVVMView",L"ExecuteEventFailInvalidSource",
                          L"The event \'{0}\' was not executed. There are invalid sources.");
      pFVar5 = FTextFormat::FTextFormat(&local_20,pFVar4,Default);
      pFVar3 = FText::Format<FText>(&local_98,pFVar5,pFVar3);
      UE::MVVM::FMessageLog::Message(&local_68,&local_a8,Error,pFVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog((FMessageLog *)&local_68);
    }
  }
  return false;
}

// BindEvent @ 14a743a00

void __thiscall
UMVVMView::BindEvent(UMVVMView *this,FMVVMViewClass_Event *param_1,FMVVMViewClass_EventKey param_2)

{
  int *piVar1;
  FWeakObjectPtr *this_00;
  uint uVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UFunction *pUVar7;
  FText *pFVar8;
  FWeakObjectPtr FVar9;
  UObject *pUVar10;
  FWeakObjectPtr FVar11;
  FWeakObjectPtr FVar12;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_128;
  FWeakObjectPtr local_120;
  FName local_118;
  UMVVMView *local_110;
  FWeakObjectPtr local_108;
  FMVVMViewClass_Event *local_100;
  int local_f8;
  FDestructionSentinel local_f0;
  undefined8 local_d8;
  FWeakObjectPtr local_d0;
  FName local_c8;
  undefined1 local_c0 [32];
  char local_a0;
  bool local_98;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FReadAccessScope local_50;
  
  FVar11.ObjectIndex = 0;
  FVar11.ObjectSerialNumber = 0;
  if ((this->_padding_ & 0x10) == 0) {
    FVar12 = (FWeakObjectPtr)this->_padding_;
    if (FVar12 != (FWeakObjectPtr)0x0) goto LAB_14a743a8a;
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    FVar12 = FVar11;
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("UserWidget",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                     ,0x4d0,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14a743a8a:
  local_110 = this;
  local_108 = FVar12;
  local_100 = param_1;
  local_f8 = param_2.Index;
  pUVar7 = UClass::FindFunctionByName
                     (*(UClass **)((longlong)FVar12 + 0x10),param_1->UserWidgetFunctionName,
                      IncludeSuper);
  if (pUVar7 == (UFunction *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_90,L"MVVMView",L"EnableLibraryEventFailed_FunctionNotFound",
                        L"Function not found");
    `UMVVMView::BindEvent'::__l2::<lambda_1>::operator()(&local_110,pFVar8);
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    FMVVMCompiledBindingLibrary::EvaluateFieldPath
              (&((this->GeneratedViewClass).field0_0x0.DebugPtr)->BindingLibrary,
               (TValueOrError<UE::MVVM::FFieldContext,void> *)local_c0,(UObject *)FVar12,
               &param_1->FieldPath);
    if (local_98 == false) {
      uVar2 = (param_1->SourceToReevaluate).Index;
      if ((uVar2 == 0xffffffff) ||
         ((((this->GeneratedViewClass).field0_0x0.DebugPtr)->OptionalSources >>
           ((ulonglong)uVar2 & 0x3f) & 1) == 0)) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_80,L"MVVMView",
                            L"EnableLibraryEventFailed_CantEvaluateBindingPath",
                            L"The binding path couldn\'t be evaluated.");
        `UMVVMView::BindEvent'::__l2::<lambda_1>::operator()(&local_110,pFVar8);
        if (local_80.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
          return;
        }
      }
    }
    else {
      bVar5 = UE::MVVM::TObjectVariant<0>::IsNull((TObjectVariant<0> *)local_c0);
      if ((bVar5) ||
         (bVar5 = UE::MVVM::TObjectVariant<0>::IsUObject((TObjectVariant<0> *)local_c0), !bVar5)) {
        uVar2 = (param_1->SourceToReevaluate).Index;
        if ((uVar2 == 0xffffffff) ||
           ((((this->GeneratedViewClass).field0_0x0.DebugPtr)->OptionalSources >>
             ((ulonglong)uVar2 & 0x3f) & 1) == 0)) {
          pFVar8 = FText::AsLocalizable_Advanced_LocText
                             (&local_60,L"MVVMView",L"EnableLibraryEventFailed_OwnerInvalid",
                              L"The owner is invalid.");
          `UMVVMView::BindEvent'::__l2::<lambda_1>::operator()(&local_110,pFVar8);
          if (local_60.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
            return;
          }
        }
      }
      else {
        if (local_a0 == '\x02') {
          FVar9 = (FWeakObjectPtr)
                  UE::MVVM::TMVVMFieldVariant<0>::GetProperty
                            ((TMVVMFieldVariant<0> *)(local_c0 + 0x18));
          if ((FVar9 == (FWeakObjectPtr)0x0) ||
             ((*(uint *)(*(longlong *)((longlong)FVar9 + 8) + 0x18) >> 0x19 & 1) == 0)) {
            FVar9 = FVar11;
          }
          if (FVar9 != (FWeakObjectPtr)0x0) {
            pUVar10 = UE::MVVM::TObjectVariant<0>::GetUObject((TObjectVariant<0> *)local_c0);
            piVar1 = &(this->BoundEvents).ArrayMax;
            iVar6 = (this->BoundEvents).ArrayNum;
            if (iVar6 == *piVar1) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x414,&(this->BoundEvents).AllocatorInstance,piVar1);
            }
            (this->BoundEvents).ArrayNum = iVar6 + 1;
            this_00 = (FWeakObjectPtr *)
                      ((this->BoundEvents).AllocatorInstance.Data + (longlong)iVar6 * 0x14);
            DefaultConstructItems<UMVVMView::FBoundEvent,int>(this_00,1);
            local_res8 = pUVar10;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar10);
            }
            FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
            bVar5 = IsThisNotNull((void *)FVar9,"FField::GetFName");
            if (bVar5) {
              FVar11 = *(FWeakObjectPtr *)((longlong)FVar9 + 0x20);
            }
            this_00[1] = FVar11;
            this_00[2].ObjectIndex = param_2.Index;
            FVar3 = param_1->UserWidgetFunctionName;
            local_128.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            local_120.ObjectIndex = 0;
            local_120.ObjectSerialNumber = 0;
            local_118.ComparisonIndex.Value = 0;
            local_118.Number = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_128,(FWriteAccessScope *)&local_f0);
            local_res10 = FVar12;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)FVar12);
            }
            FWeakObjectPtr::operator=(&local_120,(FObjectPtr)&local_res10);
            local_118 = FVar3;
            if (local_f0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
            }
            local_d8 = 0;
            pcVar4 = *(code **)(*(longlong *)FVar9 + 0x1e0);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      (&local_128,&local_50);
            local_d0 = local_120;
            local_c8 = local_118;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_50);
            (*pcVar4)(FVar9,&local_d8,pUVar10,0);
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_128.AccessDetector);
            return;
          }
        }
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_70,L"MVVMView",L"EnableLibraryEventFailed_NotAProperty",
                            L"The path doesn\'t point to a multicast delegate property.");
        `UMVVMView::BindEvent'::__l2::<lambda_1>::operator()(&local_110,pFVar8);
        if (local_70.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
        }
      }
    }
  }
  return;
}

// Construct @ 14a744d10

void __thiscall UMVVMView::Construct(UMVVMView *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UMVVMViewClass *pUVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  UObject *local_58;
  longlong local_50;
  UMVVMView *local_48;
  FDestructionSentinel local_40;
  
  if (((this->GeneratedViewClass).field0_0x0.DebugPtr == (UMVVMViewClass *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeneratedViewClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                         ,0x56,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->bConstructed != false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bConstructed == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                         ,0x57,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->Extensions).ArrayNum != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Extensions.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                         ,0x5a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar12 = (((this->GeneratedViewClass).field0_0x0.DebugPtr)->ViewClassExtensions).ArrayNum;
  if ((int)uVar12 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &(this->Extensions).ArrayMax;
  (this->Extensions).ArrayNum = 0;
  if ((this->Extensions).ArrayMax < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12,&(this->Extensions).AllocatorInstance,0,piVar1);
  }
  pUVar3 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  iVar10 = (pUVar3->ViewClassExtensions).ArrayNum;
  pFVar14 = (pUVar3->ViewClassExtensions).AllocatorInstance.Data;
  if ((iVar10 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = pFVar14 + (longlong)iVar10 * 8;
  while( true ) {
    if (pFVar14 == pFVar2) {
      if (((this->GeneratedViewClass).field0_0x0.DebugPtr)->bInitializeSourcesOnConstruct != false)
      {
        InitializeSources(this);
      }
      if (((this->GeneratedViewClass).field0_0x0.DebugPtr)->bInitializeEventsOnConstruct != false) {
        InitializeEvents(this);
      }
      this->bConstructed = true;
      if ((this->_padding_ & 0x10) == 0) {
        local_50 = this->_padding_;
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1637797074370035733>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                           ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_50 = 0;
      }
      local_48 = this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &UE::MVVM::FDebugging::OnViewConstructed,(FWriteAccessScope *)&local_40);
      bVar7 = false;
      UE::MVVM::FDebugging::OnViewConstructed._28_4_ =
           UE::MVVM::FDebugging::OnViewConstructed._28_4_ + 1;
      uVar12 = UE::MVVM::FDebugging::OnViewConstructed._16_4_ - 1;
      if (-1 < (int)uVar12) {
        lVar13 = (longlong)(int)uVar12 << 4;
        bVar7 = false;
        do {
          uVar11 = 0;
          if ((int)uVar12 < (int)UE::MVVM::FDebugging::OnViewConstructed._16_4_) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((*(int *)(lVar13 + 8 + UE::MVVM::FDebugging::OnViewConstructed._8_8_) == 0) ||
              (plVar4 = *(longlong **)(lVar13 + UE::MVVM::FDebugging::OnViewConstructed._8_8_),
              plVar4 == (longlong *)0x0)) ||
             (cVar9 = (**(code **)(*plVar4 + 0x68))(plVar4,&local_50,local_res8), cVar9 == '\0')) {
            bVar7 = true;
          }
          lVar13 = lVar13 + -0x10;
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
      }
      UE::MVVM::FDebugging::OnViewConstructed._28_4_ =
           UE::MVVM::FDebugging::OnViewConstructed._28_4_ + -1;
      if (bVar7) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &UE::MVVM::FDebugging::OnViewConstructed,false);
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      return;
    }
    plVar4 = *(longlong **)pFVar14;
    pcVar6 = *(code **)(*plVar4 + 0x2b0);
    if ((this->_padding_ & 0x10) == 0) {
      lVar13 = this->_padding_;
    }
    else {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar13 = 0;
    }
    local_58 = (UObject *)(*pcVar6)(plVar4,lVar13,this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_58);
    }
    pFVar5 = (this->Extensions).AllocatorInstance.Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)*piVar1 * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar10 = (this->Extensions).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->Extensions).AllocatorInstance,piVar1);
    }
    (this->Extensions).ArrayNum = iVar10 + 1;
    *(UObject **)((this->Extensions).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_58;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_58);
    }
    pFVar14 = pFVar14 + 8;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// ConstructView @ 14a745470

void __thiscall UMVVMView::ConstructView(UMVVMView *this,UMVVMViewClass *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((this->GeneratedViewClass).field0_0x0.DebugPtr != (UMVVMViewClass *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3602267991179264070>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                       ,0x46,"GeneratedViewClass == nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMVVMViewClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  piVar1 = &(this->Sources).ArrayNum;
  (this->GeneratedViewClass).field0_0x0.DebugPtr = param_1;
  if (*piVar1 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sources.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                       ,0x49,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = (((this->GeneratedViewClass).field0_0x0.DebugPtr)->Sources).ArrayNum;
  lVar8 = (longlong)(int)uVar6;
  if ((int)uVar6 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = (this->Sources).ArrayNum;
  if (iVar5 < (int)uVar6) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,uVar6 - iVar5,&(this->Sources).AllocatorInstance,piVar1,
                       &(this->Sources).ArrayMax);
    DefaultConstructItems<FMVVMView_Source,int>
              ((this->Sources).AllocatorInstance.Data + (longlong)iVar4 * 0x18,uVar6 - iVar5);
  }
  else {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if ((int)uVar6 < iVar5) {
      uVar7 = iVar5 - uVar6;
      if ((int)(uVar7 | uVar6) < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar7 != 0) {
        _Dst = (this->Sources).AllocatorInstance.Data + lVar8 * 0x18;
        iVar5 = ((this->Sources).ArrayNum - uVar7) - uVar6;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar7 * 0x18,(longlong)iVar5 * 0x18);
        }
        piVar1 = &(this->Sources).ArrayNum;
        *piVar1 = *piVar1 - uVar7;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&(this->Sources).AllocatorInstance,(this->Sources).ArrayNum,
                   &(this->Sources).ArrayMax);
      }
    }
  }
  uVar7 = 0;
  if (0 < (int)uVar6) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Sources).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      *(uint *)((this->Sources).AllocatorInstance.Data + lVar9 + 8) = uVar7;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x18;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// Destruct @ 14a746c10

void __thiscall UMVVMView::Destruct(UMVVMView *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  UMVVMViewClass *pUVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  undefined1 local_res8 [8];
  int local_res10;
  FScriptContainerElement *local_res18;
  longlong *local_res20;
  longlong local_70;
  UMVVMView *local_68;
  FDestructionSentinel local_60;
  
  if ((this->bConstructed != true) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bConstructed == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                         ,0x8e,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this->bConstructed = false;
  if ((this->_padding_ & 0x10) == 0) {
    local_70 = this->_padding_;
  }
  else {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_70 = 0;
  }
  local_68 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &UE::MVVM::FDebugging::OnViewBeginDestruction,(FWriteAccessScope *)&local_60);
  bVar8 = false;
  UE::MVVM::FDebugging::OnViewBeginDestruction._28_4_ =
       UE::MVVM::FDebugging::OnViewBeginDestruction._28_4_ + 1;
  uVar13 = UE::MVVM::FDebugging::OnViewBeginDestruction._16_4_ - 1;
  if (-1 < (int)uVar13) {
    lVar15 = (longlong)(int)uVar13 << 4;
    bVar8 = false;
    do {
      uVar11 = 0;
      if ((int)uVar13 < (int)UE::MVVM::FDebugging::OnViewBeginDestruction._16_4_) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((*(int *)(lVar15 + 8 + UE::MVVM::FDebugging::OnViewBeginDestruction._8_8_) == 0) ||
          (plVar3 = *(longlong **)(lVar15 + UE::MVVM::FDebugging::OnViewBeginDestruction._8_8_),
          plVar3 == (longlong *)0x0)) ||
         (cVar10 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_70,local_res8), cVar10 == '\0')) {
        bVar8 = true;
      }
      lVar15 = lVar15 + -0x10;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  UE::MVVM::FDebugging::OnViewBeginDestruction._28_4_ =
       UE::MVVM::FDebugging::OnViewBeginDestruction._28_4_ + -1;
  if (bVar8) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UE::MVVM::FDebugging::OnViewBeginDestruction,false);
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  UninitializeEvents(this);
  UninitializeSources(this);
  pUVar4 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  iVar17 = (pUVar4->ViewClassExtensions).ArrayNum;
  local_res18 = (pUVar4->ViewClassExtensions).AllocatorInstance.Data;
  local_res10 = iVar17;
  if ((iVar17 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((iVar17 != (this->Extensions).ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClassExtensions.Num() == Extensions.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                         ,0x99,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar13 = iVar17 - 1;
  if (-1 < (int)uVar13) {
    lVar14 = (longlong)(int)uVar13;
    lVar15 = lVar14 * 8;
    do {
      uVar16 = ~uVar13 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar13 < iVar17) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_res20 = *(longlong **)(local_res18 + lVar15);
      pcVar7 = *(code **)(*local_res20 + 0x2e8);
      uVar11 = 0;
      if ((int)uVar13 < (this->Extensions).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar5 = *(undefined8 *)((this->Extensions).AllocatorInstance.Data + lVar15);
      if ((this->_padding_ & 0x10) == 0) {
        lVar12 = this->_padding_;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1637797074370035733>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                           ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar12 = 0;
      }
      (*pcVar7)(local_res20,lVar12,this,uVar5);
      uVar11 = 0;
      if ((int)uVar13 < (this->Extensions).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar2 = (this->Extensions).ArrayNum;
      pFVar6 = (this->Extensions).AllocatorInstance.Data;
      iVar17 = iVar2 + ~uVar13;
      if (1 < iVar17) {
        iVar17 = 1;
      }
      if (iVar17 != 0) {
        memmove(pFVar6 + lVar14 * 8,pFVar6 + (longlong)(iVar2 - iVar17) * 8,(longlong)iVar17 << 3);
      }
      piVar1 = &(this->Extensions).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->Extensions).AllocatorInstance,(this->Extensions).ArrayNum,
                 &(this->Extensions).ArrayMax);
      lVar14 = lVar14 + -1;
      lVar15 = lVar15 + -8;
      uVar13 = uVar13 - 1;
      iVar17 = local_res10;
    } while (-1 < (int)uVar13);
  }
  return;
}

// EvaluateSource @ 14a748090

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UMVVMView::EvaluateSource(UMVVMView *this,FMVVMViewClass_SourceKey param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FMVVMViewClass_Source *this_00;
  UObject *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UUserWidget *pUVar11;
  undefined1 local_res10 [8];
  UObject *local_res18;
  UObject *local_res20;
  FName local_178;
  UObject *local_170;
  void *local_168;
  TSharedPtr<FCulture,1> local_160;
  TSharedRef<FTokenizedMessage,1> local_150;
  FText local_140;
  FText local_130;
  TSharedRef<FTokenizedMessage,1> local_120;
  FText local_110;
  FText local_100;
  FMessageLog local_f0;
  FMessageLog local_b8;
  FText local_80;
  FTextFormat local_70;
  FText local_60;
  FTextFormat local_50;
  
  if (param_1.Index == -1) {
    if ((this->_padding_ & 0x10) == 0) {
      pUVar8 = (UObject *)this->_padding_;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pUVar8 = (UObject *)0x0;
    }
    FMessageLog::FMessageLog((FMessageLog *)&local_f0,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    local_f0.UserWidget.WeakPtr.ObjectIndex = 0;
    local_f0.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_res18 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    FWeakObjectPtr::operator=(&local_f0.UserWidget.WeakPtr,(FObjectPtr)&local_res18);
    local_160.Object = (FCulture *)0x0;
    local_160.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar5 = FText::AsNumber(&local_80,-1,(FNumberFormattingOptions *)0x0,&local_160);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_130,L"MVVMView",L"ReevaluateDynamicSourceViewModelNameNotFound",
                        L"Internal error. The dynamic source {0} cound not be found.");
    pFVar7 = FTextFormat::FTextFormat(&local_70,pFVar6,Default);
    pFVar5 = FText::Format<FText>(&local_140,pFVar7,pFVar5);
    UE::MVVM::FMessageLog::Message(&local_f0,&local_150,Error,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_150.SharedReferenceCount.ReferenceController);
    if (local_140.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
    }
    if (local_130.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.SharedReferenceCount.ReferenceController);
    FMessageLog::~FMessageLog((FMessageLog *)&local_f0);
    return false;
  }
  if ((this->_padding_ & 0x10) == 0) {
    pUVar11 = (UUserWidget *)this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pUVar11 = (UUserWidget *)0x0;
  }
  this_00 = UMVVMViewClass::GetSource((this->GeneratedViewClass).field0_0x0.DebugPtr,param_1);
  pUVar8 = FMVVMViewClass_Source::GetOrCreateInstance
                     (this_00,(this->GeneratedViewClass).field0_0x0.DebugPtr,this,pUVar11);
  if (pUVar8 != (UObject *)0x0) {
    pUVar10 = *(UClass **)&pUVar8->field_0x10;
    pUVar9 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
    bVar2 = UClass::ImplementsInterface(pUVar10,pUVar9);
    if (!bVar2) {
      local_res10[0] = bVar2;
      `UMVVMView::EvaluateSource'::__l2::<lambda_1>::operator()(local_res10);
    }
  }
  local_170 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UObject *)0x0)) {
    if (pUVar8 == (UObject *)0x0) {
      local_168 = (void *)0x0;
      goto LAB_14a7482f1;
    }
  }
  else {
    UE::GC::MarkAsReachable(pUVar8);
  }
  pUVar10 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
  local_168 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar8,pUVar10);
LAB_14a7482f1:
  bVar2 = SetSourceInternal(this,param_1,(TScriptInterface<INotifyFieldValueChanged> *)&local_170,
                            true);
  if (!bVar2) {
    if ((this->_padding_ & 0x10) == 0) {
      pUVar8 = (UObject *)this->_padding_;
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pUVar8 = (UObject *)0x0;
    }
    FMessageLog::FMessageLog((FMessageLog *)&local_b8,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    local_b8.UserWidget.WeakPtr.ObjectIndex = 0;
    local_b8.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_res20 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    FWeakObjectPtr::operator=(&local_b8.UserWidget.WeakPtr,(FObjectPtr)&local_res20);
    local_178 = this_00->PropertyName;
    pFVar5 = FText::FromName(&local_60,&local_178);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_100,L"MVVMView",L"ExecuteBindingFailEvaluate",
                        L"The evaluate source \'{0}\' fail execution.");
    pFVar7 = FTextFormat::FTextFormat(&local_50,pFVar6,Default);
    pFVar5 = FText::Format<FText>(&local_110,pFVar7,pFVar5);
    UE::MVVM::FMessageLog::Message(&local_b8,&local_120,Error,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_120.SharedReferenceCount.ReferenceController);
    if (local_110.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
    }
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_b8);
  }
  return bVar2;
}

// ExecuteBindingImmediately @ 14a748680

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UMVVMView::ExecuteBindingImmediately
          (UMVVMView *this,FMVVMViewClass_Binding *param_1,FMVVMViewClass_BindingKey param_2)

{
  UMVVMViewClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  UUserWidget *pUVar8;
  ulonglong uVar9;
  UUserWidget *pUVar10;
  UObject *pUVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  longlong *plVar14;
  undefined4 local_res8;
  undefined1 local_resc;
  UObject *local_res10;
  EExecutionFailingReason local_res20;
  char cStackX_24;
  undefined4 local_268;
  undefined1 local_264;
  undefined4 local_258;
  undefined1 local_254;
  FText local_248;
  UUserWidget *local_238;
  UUserWidget *local_230;
  UObject *local_228;
  FLibraryBindingExecutedArgs local_220;
  FView local_210;
  TSharedRef<FTokenizedMessage,1> local_200;
  FText local_1f0;
  FText local_1e0;
  FString local_1d0;
  TSharedRef<FTokenizedMessage,1> local_1c0;
  FText local_1b0;
  FText local_1a0;
  FString local_190;
  TSharedRef<FTokenizedMessage,1> local_180;
  FText local_170;
  FText local_160;
  FString local_150;
  FMessageLog local_140;
  FMessageLog local_108;
  FMessageLog local_d0;
  FText local_98;
  FTextFormat local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FTextFormat local_48;
  
  local_res10 = (UObject *)param_1;
  if (((this->GeneratedViewClass).field0_0x0.DebugPtr == (UMVVMViewClass *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeneratedViewClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                         ,0x23f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->_padding_ & 0x10) == 0) {
    if (this->_padding_ == 0) goto LAB_14a748726;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_14a748726:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetUserWidget()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                       ,0x240,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar14 = &this->_padding_;
  uVar9 = param_1->SourceBitField;
  if ((this->ValidSources & uVar9) != uVar9) {
    uVar9 = ~this->ValidSources & uVar9;
    if ((((this->GeneratedViewClass).field0_0x0.DebugPtr)->OptionalSources & uVar9) == uVar9) {
      return;
    }
    pUVar11 = (UObject *)0x0;
    if ((this->_padding_ & 0x10) == 0) {
      pUVar11 = (UObject *)*plVar14;
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMessageLog::FMessageLog((FMessageLog *)&local_d0,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    local_d0.UserWidget.WeakPtr.ObjectIndex = 0;
    local_d0.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_228 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    FWeakObjectPtr::operator=(&local_d0.UserWidget.WeakPtr,(FObjectPtr)&local_228);
    local_258 = 0x1000000;
    local_254 = 0;
    pFVar4 = FMVVMViewClass_Binding::ToString
                       (param_1,&local_150,(this->GeneratedViewClass).field0_0x0.DebugPtr,
                        SUB85(&local_258,0));
    pFVar5 = FText::FromString(&local_58,pFVar4);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_160,L"MVVMView",L"ExecuteBindingFailInvalidSource",
                        L"The binding \'{0}\' was not executed. There are invalid sources.");
    pFVar7 = FTextFormat::FTextFormat(&local_48,pFVar6,Default);
    pFVar5 = FText::Format<FText>(&local_170,pFVar7,pFVar5);
    UE::MVVM::FMessageLog::Message(&local_d0,&local_180,Error,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.SharedReferenceCount.ReferenceController);
    if (local_170.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
    }
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    UE::MVVM::FDebugging::BroadcastLibraryBindingExecuted(this,param_2,InvalidSource);
    FMessageLog::~FMessageLog((FMessageLog *)&local_d0);
    return;
  }
  pUVar10 = (UUserWidget *)0x0;
  pUVar1 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  if ((this->_padding_ & 0x10) == 0) {
    pUVar8 = (UUserWidget *)*plVar14;
    if (pUVar8 == (UUserWidget *)0x0) goto LAB_14a7487c9;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar8 = pUVar10;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_14a7487c9:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExecutionSource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                       ,0xac,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar11 = local_res10;
  FMVVMCompiledBindingLibrary::ExecuteImpl
            (&pUVar1->BindingLibrary,(UObject *)&local_res20,(FMVVMVCompiledBinding *)pUVar8,
             local_res10,Simple);
  if (cStackX_24 == '\0') {
    if (this->bLogBinding != false) {
      pUVar8 = UUserWidgetExtension::GetUserWidget((UUserWidgetExtension *)this);
      FMessageLog::FMessageLog((FMessageLog *)&local_108,&UE::MVVM::FMessageLog::LogName);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      local_108.UserWidget.WeakPtr.ObjectIndex = 0;
      local_108.UserWidget.WeakPtr.ObjectSerialNumber = 0;
      local_230 = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      FWeakObjectPtr::operator=(&local_108.UserWidget.WeakPtr,(FObjectPtr)&local_230);
      local_268 = 0x1010101;
      local_264 = 1;
      pFVar4 = FMVVMViewClass_Binding::ToString
                         ((FMVVMViewClass_Binding *)pUVar11,&local_190,
                          (this->GeneratedViewClass).field0_0x0.DebugPtr,SUB85(&local_268,0));
      pFVar5 = FText::FromString(&local_78,pFVar4);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_1a0,L"MVVMView",L"ExecuteBindingGeneric",
                          L"Execute binding \'{0}\'.");
      pFVar7 = FTextFormat::FTextFormat(&local_68,pFVar6,Default);
      pFVar5 = FText::Format<FText>(&local_1b0,pFVar7,pFVar5);
      UE::MVVM::FMessageLog::Message(&local_108,&local_1c0,Info,pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c0.SharedReferenceCount.ReferenceController);
      if (local_1b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
      }
      if (local_1a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
      }
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog((FMessageLog *)&local_108);
    }
    bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &UE::MVVM::FDebugging::OnLibraryBindingExecuted);
    if (!bVar3) {
      return;
    }
    local_220.FailingReason.bIsSet = false;
    local_220.Binding.Index = param_2.Index;
    if ((this->_padding_ & 0x10) == 0) {
      pUVar10 = (UUserWidget *)*plVar14;
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_210.UserWidget = pUVar10;
    local_210.View = this;
    TMulticastDelegate<void___cdecl(UE::MVVM::FDebugging::FView_const_&,UE::MVVM::FDebugging::FLibraryBindingExecutedArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(UE::MVVM::FDebugging::FView_const_&,UE::MVVM::FDebugging::FLibraryBindingExecutedArgs_const_&),FDefaultDelegateUserPolicy>
                 *)&UE::MVVM::FDebugging::OnLibraryBindingExecuted,&local_210,&local_220);
    return;
  }
  if ((this->_padding_ & 0x10) == 0) {
    pUVar10 = (UUserWidget *)*plVar14;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMessageLog::FMessageLog((FMessageLog *)&local_140,&UE::MVVM::FMessageLog::LogName);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_140.UserWidget.WeakPtr.ObjectIndex = 0;
  local_140.UserWidget.WeakPtr.ObjectSerialNumber = 0;
  local_238 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(&local_140.UserWidget.WeakPtr,(FObjectPtr)&local_238);
  if ((cStackX_24 == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_res20 == IncompatibleLibrary) {
    pwVar13 = L"Incompatible Library";
    pwVar12 = L"FailingReasonIncompatibleLibrary";
  }
  else if (local_res20 == InvalidSource) {
    pwVar13 = L"Invalid Source";
    pwVar12 = L"FailingReasonInvalidSource";
  }
  else if (local_res20 == InvalidDestination) {
    pwVar13 = L"Invalid Destination";
    pwVar12 = L"FailingReasonInvalidDestination";
  }
  else if (local_res20 == InvalidConversionFunction) {
    pwVar13 = L"Invalid Conversion Function";
    pwVar12 = L"FailingReasonInvalidConversionFunction";
  }
  else {
    if (local_res20 != InvalidCast) {
      FText::FText(&local_248);
      goto LAB_14a74898c;
    }
    pwVar13 = L"Invalid Cast";
    pwVar12 = L"FailingReasonInvalidCast";
  }
  FText::AsLocalizable_Advanced_LocText(&local_248,L"MVVMCompiledBindingLibrary",pwVar12,pwVar13);
LAB_14a74898c:
  local_res8 = 0x1000000;
  local_resc = 0;
  pFVar4 = FMVVMViewClass_Binding::ToString
                     ((FMVVMViewClass_Binding *)pUVar11,&local_1d0,
                      (this->GeneratedViewClass).field0_0x0.DebugPtr,SUB85(&local_res8,0));
  pFVar5 = FText::FromString(&local_98,pFVar4);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_1e0,L"MVVMView",L"ExecuteBindingFailGeneric",
                      L"The binding \'{0}\' was not executed. {1}.");
  pFVar7 = FTextFormat::FTextFormat(&local_88,pFVar6,Default);
  pFVar5 = FText::Format<FText,FText>(&local_1f0,pFVar7,pFVar5,&local_248);
  UE::MVVM::FMessageLog::Message(&local_140,&local_200,Error,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_200.SharedReferenceCount.ReferenceController);
  if (local_1f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
  }
  if (local_1e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1e0.TextData.Reference + 0x10))();
  }
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if ((cStackX_24 == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::MVVM::FDebugging::BroadcastLibraryBindingExecuted(this,param_2,local_res20);
  FMessageLog::~FMessageLog((FMessageLog *)&local_140);
  return;
}

// ExecuteBindingInternal @ 14a748e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMVVMView::ExecuteBindingInternal(UMVVMView *this,FMVVMViewClass_SourceBinding *param_1)

{
  code *pcVar1;
  bool bVar2;
  EMVVMExecutionMode EVar3;
  int iVar4;
  FMVVMViewClass_Binding *this_00;
  ForAnyElementType FVar5;
  longlong lVar6;
  UUserWidget *pUVar7;
  FText *pFVar8;
  UMVVMBindingSubsystem *this_01;
  undefined1 local_res8 [8];
  UUserWidget *local_res10;
  TSharedRef<FTokenizedMessage,1> local_78;
  FText local_68;
  FMessageLog local_58;
  
  this_00 = UMVVMViewClass::GetBinding
                      ((this->GeneratedViewClass).field0_0x0.DebugPtr,
                       (FMVVMViewClass_BindingKey)(param_1->BindingKey).Index);
  if ((this_00->Flags & 1) == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3602267991179264738>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                       ,0x2e2,"ClassBinding.IsOneWay()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    EVar3 = FMVVMViewClass_Binding::GetExecuteMode(this_00);
    if (EVar3 == Immediate) {
      iVar4 = (param_1->BindingKey).Index;
      for (FVar5 = UE::MVVM::Private::RecursiveDetector.AllocatorInstance;
          FVar5.Data !=
          UE::MVVM::Private::RecursiveDetector.AllocatorInstance.Data +
          (longlong)UE::MVVM::Private::RecursiveDetector.ArrayNum * 0x10;
          FVar5.Data = FVar5.Data + 0x10) {
        if ((*(UMVVMView **)FVar5.Data == this) && (*(int *)(FVar5.Data + 8) == iVar4)) {
          `UMVVMView::ExecuteBindingInternal'::__l11::<lambda_2>::operator()(local_res8);
          pUVar7 = UUserWidgetExtension::GetUserWidget((UUserWidgetExtension *)this);
          FMessageLog::FMessageLog((FMessageLog *)&local_58,&UE::MVVM::FMessageLog::LogName);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UUserWidget *)0x0)
             ) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          local_58.UserWidget.WeakPtr.ObjectIndex = 0;
          local_58.UserWidget.WeakPtr.ObjectSerialNumber = 0;
          local_res10 = pUVar7;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UUserWidget *)0x0)
             ) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          FWeakObjectPtr::operator=(&local_58.UserWidget.WeakPtr,(FObjectPtr)&local_res10);
          pFVar8 = FText::AsLocalizable_Advanced_LocText
                             (&local_68,L"MVVMView",L"RecursionDetected",
                              L"A recursive binding was detected (ie. A->B->C->A->B->C) at runtime."
                             );
          UE::MVVM::FMessageLog::Message(&local_58,&local_78,Warning,pFVar8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78.SharedReferenceCount.ReferenceController);
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
          }
          FMessageLog::~FMessageLog((FMessageLog *)&local_58);
          return;
        }
      }
      if (UE::MVVM::Private::RecursiveDetector.ArrayNum ==
          UE::MVVM::Private::RecursiveDetector.ArrayMax) {
        UE::MVVM::Private::RecursiveDetector.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&UE::MVVM::Private::RecursiveDetector.AllocatorInstance,
                        &UE::MVVM::Private::RecursiveDetector.ArrayMax);
      }
      FVar5.Data = UE::MVVM::Private::RecursiveDetector.AllocatorInstance.Data;
      lVar6 = (longlong)UE::MVVM::Private::RecursiveDetector.ArrayNum;
      UE::MVVM::Private::RecursiveDetector.ArrayNum =
           UE::MVVM::Private::RecursiveDetector.ArrayNum + 1;
      *(UMVVMView **)(UE::MVVM::Private::RecursiveDetector.AllocatorInstance.Data + lVar6 * 0x10) =
           this;
      *(int *)(FVar5.Data + lVar6 * 0x10 + 8) = iVar4;
      ExecuteBindingImmediately(this,this_00,(FMVVMViewClass_BindingKey)(param_1->BindingKey).Index)
      ;
      if ((UE::MVVM::Private::RecursiveDetector.ArrayNum < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = (UE::MVVM::Private::RecursiveDetector.ArrayNum -
              (UE::MVVM::Private::RecursiveDetector.ArrayNum + -1)) + -1;
      if (iVar4 != 0) {
        memmove(UE::MVVM::Private::RecursiveDetector.AllocatorInstance.Data +
                (longlong)(UE::MVVM::Private::RecursiveDetector.ArrayNum + -1) * 0x10,
                UE::MVVM::Private::RecursiveDetector.AllocatorInstance.Data +
                (longlong)(UE::MVVM::Private::RecursiveDetector.ArrayNum + -1) * 0x10 + 0x10,
                (longlong)iVar4 << 4);
      }
      UE::MVVM::Private::RecursiveDetector.ArrayNum =
           UE::MVVM::Private::RecursiveDetector.ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&UE::MVVM::Private::RecursiveDetector.AllocatorInstance,
                 UE::MVVM::Private::RecursiveDetector.ArrayNum,
                 &UE::MVVM::Private::RecursiveDetector.ArrayMax);
    }
    else if (EVar3 == Delayed) {
      this_01 = UEngine::GetEngineSubsystem<UMVVMBindingSubsystem>(GEngine);
      UMVVMBindingSubsystem::AddDelayedBinding
                (this_01,this,(FMVVMViewClass_BindingKey)(param_1->BindingKey).Index);
      return;
    }
  }
  return;
}

// ExecuteConditionInternal @ 14a74b750

void __thiscall
UMVVMView::ExecuteConditionInternal(UMVVMView *this,FMVVMViewClass_SourceCondition *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMVVMViewClass_Condition *pFVar3;
  UFunction *pUVar4;
  UObject *pUVar5;
  
  pFVar3 = UMVVMViewClass::GetCondition
                     ((this->GeneratedViewClass).field0_0x0.DebugPtr,
                      (FMVVMViewClass_ConditionKey)(param_1->ConditionKey).Index);
  if ((this->_padding_ & 0x10) == 0) {
    pUVar5 = (UObject *)this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar5 = (UObject *)0x0;
  }
  pUVar4 = UClass::FindFunctionByName
                     (*(UClass **)&pUVar5->field_0x10,pFVar3->UserWidgetFunctionName,IncludeSuper);
  UE::MVVM::BindingHelper::ExecuteFunction_NoReturnValue(pUVar4,pUVar5);
  return;
}

// ExecuteDelayedBinding @ 14a74b7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMVVMView::ExecuteDelayedBinding(UMVVMView *this,FMVVMViewClass_BindingKey *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_ExecuteBinding_Delayed> FVar10;
  ForAnyElementType FVar11;
  FMVVMViewClass_Binding *pFVar12;
  UUserWidget *pUVar13;
  FText *pFVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  longlong lVar16;
  FNameEntryId FVar17;
  FName FVar18;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  UUserWidget *local_b8;
  LARGE_INTEGER local_b0;
  FStatMessage local_a8;
  FName local_98;
  TSharedRef<FTokenizedMessage,1> local_90;
  FText local_80;
  FMessageLog local_70;
  
  FVar10 = StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_Delayed;
  if (StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_Delayed ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_ExecuteBinding_Delayed>)0x0) {
    pFVar9 = ::FName::FName(&local_98,"STAT_UMG_Viewmodel_ExecuteBinding_Delayed");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_ExecuteBinding_Delayed>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_Delayed,*pFVar9,
                        L"ExecuteBinding Delayed","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",
                        L"UMG Viewmodel",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar15 = FVar18.Number;
  if ((FVar17.Value == 0) && (uVar15 == 0)) {
LAB_14a74b917:
    bVar5 = false;
    FVar18.ComparisonIndex.Value = 0;
    FVar18.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar17.Value;
        local_res20.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                   ,0x305);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14a74b917;
    local_res8 = FVar17.Value;
    uStackX_c = uVar15;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  if ((this->GeneratedViewClass).field0_0x0.DebugPtr == (UMVVMViewClass *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3602267991179264775>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                       ,0x307,"GeneratedViewClass");
    if (bVar7) {
code_r0x00014a74bbfd:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (this->bBindingsInitialized != false) {
    if ((this->bSourcesInitialized == false) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3602267991179264777>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                           ,0x309,"bSourcesInitialized"), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar8 = (((this->GeneratedViewClass).field0_0x0.DebugPtr)->Bindings).ArrayNum;
    if ((iVar8 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar2 = param_1->Index;
    if ((iVar2 < 0) || (iVar8 <= iVar2)) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3602267991179264778>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                         ,0x30a,
                         "GeneratedViewClass->GetBindings().IsValidIndex(DelayedBinding.GetIndex())"
                        );
      if (bVar7) goto code_r0x00014a74bbfd;
    }
    else {
      for (FVar11.Data = UE::MVVM::Private::RecursiveDetector.AllocatorInstance.Data;
          FVar11.Data !=
          UE::MVVM::Private::RecursiveDetector.AllocatorInstance.Data +
          (longlong)UE::MVVM::Private::RecursiveDetector.ArrayNum * 0x10;
          FVar11.Data = FVar11.Data + 0x10) {
        if ((*(UMVVMView **)FVar11.Data == this) && (*(int *)(FVar11.Data + 8) == iVar2)) {
          `UMVVMView::ExecuteDelayedBinding'::__l11::<lambda_2>::operator()(&local_res8);
          pUVar13 = UUserWidgetExtension::GetUserWidget((UUserWidgetExtension *)this);
          FMessageLog::FMessageLog((FMessageLog *)&local_70,&UE::MVVM::FMessageLog::LogName);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar13 != (UUserWidget *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar13);
          }
          local_70.UserWidget.WeakPtr.ObjectIndex = 0;
          local_70.UserWidget.WeakPtr.ObjectSerialNumber = 0;
          local_b8 = pUVar13;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar13 != (UUserWidget *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar13);
          }
          FWeakObjectPtr::operator=(&local_70.UserWidget.WeakPtr,(FObjectPtr)&local_b8);
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_80,L"MVVMView",L"RecursionDetected",
                               L"A recursive binding was detected (ie. A->B->C->A->B->C) at runtime."
                              );
          UE::MVVM::FMessageLog::Message(&local_70,&local_90,Warning,pFVar14);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_90.SharedReferenceCount.ReferenceController);
          if (local_80.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
          }
          FMessageLog::~FMessageLog((FMessageLog *)&local_70);
          goto LAB_14a74bbfe;
        }
      }
      if (UE::MVVM::Private::RecursiveDetector.ArrayNum ==
          UE::MVVM::Private::RecursiveDetector.ArrayMax) {
        UE::MVVM::Private::RecursiveDetector.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&UE::MVVM::Private::RecursiveDetector.AllocatorInstance,
                        &UE::MVVM::Private::RecursiveDetector.ArrayMax);
      }
      FVar11.Data = UE::MVVM::Private::RecursiveDetector.AllocatorInstance.Data;
      lVar16 = (longlong)UE::MVVM::Private::RecursiveDetector.ArrayNum;
      UE::MVVM::Private::RecursiveDetector.ArrayNum =
           UE::MVVM::Private::RecursiveDetector.ArrayNum + 1;
      *(UMVVMView **)(UE::MVVM::Private::RecursiveDetector.AllocatorInstance.Data + lVar16 * 0x10) =
           this;
      *(int *)(FVar11.Data + lVar16 * 0x10 + 8) = param_1->Index;
      pFVar12 = UMVVMViewClass::GetBinding
                          ((this->GeneratedViewClass).field0_0x0.DebugPtr,
                           (FMVVMViewClass_BindingKey)param_1->Index);
      ExecuteBindingImmediately(this,pFVar12,(FMVVMViewClass_BindingKey)param_1->Index);
      if ((UE::MVVM::Private::RecursiveDetector.ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = (UE::MVVM::Private::RecursiveDetector.ArrayNum -
              (UE::MVVM::Private::RecursiveDetector.ArrayNum + -1)) + -1;
      if (iVar8 != 0) {
        memmove(UE::MVVM::Private::RecursiveDetector.AllocatorInstance.Data +
                (longlong)(UE::MVVM::Private::RecursiveDetector.ArrayNum + -1) * 0x10,
                UE::MVVM::Private::RecursiveDetector.AllocatorInstance.Data +
                (longlong)(UE::MVVM::Private::RecursiveDetector.ArrayNum + -1) * 0x10 + 0x10,
                (longlong)iVar8 << 4);
      }
      UE::MVVM::Private::RecursiveDetector.ArrayNum =
           UE::MVVM::Private::RecursiveDetector.ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&UE::MVVM::Private::RecursiveDetector.AllocatorInstance,
                 UE::MVVM::Private::RecursiveDetector.ArrayNum,
                 &UE::MVVM::Private::RecursiveDetector.ArrayMax);
    }
  }
LAB_14a74bbfe:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b0);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_b0.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_b0.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_b0.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ExecuteTickBindings @ 14a74cd70

void __thiscall UMVVMView::ExecuteTickBindings(UMVVMView *this)

{
  int iVar1;
  UMVVMViewClass *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  EMVVMExecutionMode EVar7;
  FMVVMViewClass_BindingKey FVar8;
  FMVVMViewClass_Binding *this_00;
  undefined1 local_res8 [8];
  
  if ((this->GeneratedViewClass).field0_0x0.DebugPtr == (UMVVMViewClass *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3602267991179264807>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                       ,0x327,"GeneratedViewClass");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if (((this->NumberOfSourceWithTickBinding == '\0') && (this->bHasDefaultTickBinding == false))
       && (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<3602267991179264809>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                              ,0x329,"NumberOfSourceWithTickBinding > 0 || bHasDefaultTickBinding"),
          bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
    bVar5 = false;
    iVar1 = (pUVar2->Bindings).ArrayNum;
    pFVar3 = (pUVar2->Bindings).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar8.Index = 0;
    if (0 < iVar1) {
      do {
        if ((FVar8.Index < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (FMVVMViewClass_Binding *)(pFVar3 + (ulonglong)(uint)FVar8.Index * 0x20);
        EVar7 = FMVVMViewClass_Binding::GetExecuteMode(this_00);
        if (EVar7 == Tick) {
          ExecuteBindingImmediately(this,this_00,FVar8);
          bVar5 = true;
        }
        FVar8.Index = FVar8.Index + 1;
      } while (FVar8.Index < iVar1);
      if (bVar5) {
        return;
      }
    }
    `UMVVMView::ExecuteTickBindings'::__l13::<lambda_1>::operator()(local_res8);
  }
  return;
}

// ExecuteViewModelBindings @ 14a74cef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UMVVMView::ExecuteViewModelBindings(UMVVMView *this,FName param_1)

{
  int iVar1;
  UMVVMViewClass *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FMVVMViewClass_SourceKey FVar5;
  bool bVar6;
  undefined1 uVar7;
  FText *pFVar8;
  UUserWidget *pUVar9;
  FScriptContainerElement *pFVar10;
  UObject *pUVar11;
  UObject *local_res10;
  UObject *local_res18;
  UUserWidget *local_res20;
  TSharedRef<FTokenizedMessage,1> local_138;
  FText local_128;
  TSharedRef<FTokenizedMessage,1> local_118;
  FText local_108;
  TSharedRef<FTokenizedMessage,1> local_f8;
  FText local_e8;
  FMessageLog local_d8;
  FMessageLog local_a0;
  FMessageLog local_68;
  
  if (param_1 == (FName)0x0) {
    if ((this->_padding_ & 0x10) == 0) {
      pUVar11 = (UObject *)this->_padding_;
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pUVar11 = (UObject *)0x0;
    }
    FMessageLog::FMessageLog((FMessageLog *)&local_d8,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    local_res10 = pUVar11;
    local_d8.UserWidget.WeakPtr = (FWeakObjectPtr)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    FWeakObjectPtr::operator=(&local_d8.UserWidget.WeakPtr,(FObjectPtr)&local_res10);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_128,L"MVVMView",L"SetViewModelInvalidName",
                        L"The viewmodel name is empty.");
    UE::MVVM::FMessageLog::Message(&local_d8,&local_138,Error,pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.SharedReferenceCount.ReferenceController);
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_d8);
    return false;
  }
  pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  if (pUVar2 == (UMVVMViewClass *)0x0) {
    pUVar11 = (UObject *)0x0;
    if ((this->_padding_ & 0x10) == 0) {
      pUVar11 = (UObject *)this->_padding_;
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    FMessageLog::FMessageLog((FMessageLog *)&local_a0,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    local_a0.UserWidget.WeakPtr.ObjectIndex = 0;
    local_a0.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_res18 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    FWeakObjectPtr::operator=(&local_a0.UserWidget.WeakPtr,(FObjectPtr)&local_res18);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_108,L"MVVMView",L"SetViewModelInvalidClass",
                        L"The view is not constructed.");
    UE::MVVM::FMessageLog::Message(&local_a0,&local_118,Error,pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_a0);
    return false;
  }
  pFVar3 = (pUVar2->Sources).AllocatorInstance.Data;
  iVar1 = (pUVar2->Sources).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar10 = pFVar3;
  do {
    if (pFVar10 == pFVar3 + (longlong)iVar1 * 0x68) {
LAB_14a74d183:
      pUVar9 = UUserWidgetExtension::GetUserWidget((UUserWidgetExtension *)this);
      FMessageLog::FMessageLog((FMessageLog *)&local_68,&UE::MVVM::FMessageLog::LogName);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      local_68.UserWidget.WeakPtr.ObjectIndex = 0;
      local_68.UserWidget.WeakPtr.ObjectSerialNumber = 0;
      local_res20 = pUVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      FWeakObjectPtr::operator=(&local_68.UserWidget.WeakPtr,(FObjectPtr)&local_res20);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_e8,L"MVVMView",L"SetViewModelViewModelNameNotFound",
                          L"The viewmodel name could not be found.");
      UE::MVVM::FMessageLog::Message(&local_68,&local_f8,Error,pFVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog((FMessageLog *)&local_68);
      return false;
    }
    if (*(FName *)(pFVar10 + 0x24) == param_1) {
      FVar5.Index = (int)(((longlong)pFVar10 - (longlong)pFVar3) / 0x68);
      if (FVar5.Index != -1) {
        ExecuteViewModelBindingsInternal(this,FVar5);
        return true;
      }
      goto LAB_14a74d183;
    }
    pFVar10 = pFVar10 + 0x68;
  } while( true );
}

// ExecuteViewModelBindingsInternal @ 14a74d290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMVVMView::ExecuteViewModelBindingsInternal(UMVVMView *this,FMVVMViewClass_SourceKey param_1)

{
  int iVar1;
  UMVVMViewClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_ExecuteViewModel> FVar9;
  FMVVMViewClass_Source *pFVar10;
  FMVVMViewClass_Condition *pFVar11;
  UFunction *pUVar12;
  uint uVar13;
  FMVVMViewClass_SourceBinding *pFVar14;
  UObject *pUVar15;
  FScriptContainerElement *pFVar16;
  FMVVMViewClass_SourceBinding *pFVar17;
  FNameEntryId FVar18;
  FName FVar19;
  FScriptContainerElement *pFVar20;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  uint local_res18;
  uint uStackX_1c;
  FName local_res20;
  
  FVar9 = StatPtr_STAT_UMG_Viewmodel_ExecuteViewModel;
  if (StatPtr_STAT_UMG_Viewmodel_ExecuteViewModel ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_ExecuteViewModel>)0x0) {
    pFVar8 = ::FName::FName(&local_res20,"STAT_UMG_Viewmodel_ExecuteViewModel");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_ExecuteViewModel>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_ExecuteViewModel,
                       *pFVar8,L"ExecuteViewModel","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",
                       L"UMG Viewmodel",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar13 = FVar19.Number;
  if ((FVar18.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar18.Value;
        local_res8.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                   ,0x460);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar18.Value;
      uStackX_1c = uVar13;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar5 = true;
      goto LAB_14a74d3e7;
    }
  }
  bVar5 = false;
  FVar19.ComparisonIndex.Value = 0;
  FVar19.Number = 0;
LAB_14a74d3e7:
  pFVar10 = UMVVMViewClass::GetSource((this->GeneratedViewClass).field0_0x0.DebugPtr,param_1);
  if ((pFVar10->Flags & 0x40) != 0) {
    pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
    iVar1 = (pUVar2->EvaluateSources).ArrayNum;
    pFVar16 = (pUVar2->EvaluateSources).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar20 = pFVar16 + (longlong)iVar1 * 0x10;
    for (; pFVar16 != pFVar20; pFVar16 = pFVar16 + 0x10) {
      if (*(int *)(pFVar16 + 8) == param_1.Index) {
        EvaluateSource(this,(FMVVMViewClass_SourceKey)*(int *)(pFVar16 + 0xc));
      }
    }
  }
  iVar1 = (pFVar10->Bindings).ArrayNum;
  pFVar14 = (FMVVMViewClass_SourceBinding *)(pFVar10->Bindings).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar17 = pFVar14 + iVar1;
  for (; pFVar14 != pFVar17; pFVar14 = pFVar14 + 1) {
    ExecuteBindingInternal(this,pFVar14);
  }
  iVar1 = (pFVar10->Conditions).ArrayNum;
  pFVar16 = (pFVar10->Conditions).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar20 = pFVar16 + (longlong)iVar1 * 0xc;
  do {
    if (pFVar16 == pFVar20) {
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar5) {
        FThreadStats::AddMessage(FVar19,CycleScopeEnd);
      }
      return;
    }
    pFVar11 = UMVVMViewClass::GetCondition
                        ((this->GeneratedViewClass).field0_0x0.DebugPtr,
                         (FMVVMViewClass_ConditionKey)*(int *)(pFVar16 + 8));
    if ((this->_padding_ & 0x10) == 0) {
      pUVar15 = (UObject *)this->_padding_;
    }
    else {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar15 = (UObject *)0x0;
    }
    pUVar12 = UClass::FindFunctionByName
                        (*(UClass **)&pUVar15->field_0x10,pFVar11->UserWidgetFunctionName,
                         IncludeSuper);
    UE::MVVM::BindingHelper::ExecuteFunction_NoReturnValue(pUVar12,pUVar15);
    pFVar16 = pFVar16 + 0xc;
  } while( true );
}

// GetPrivateStaticClass @ 14a753bf0

UClass * __cdecl UMVVMView::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMView",
               &Z_Registration_Info_UClass_UMVVMView.InnerSingleton,StaticRegisterNativesUMVVMView,
               0x70,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMVVMView>,InternalVTableHelperCtorCaller<UMVVMView>,local_res8,
               UUserWidgetExtension::StaticClass,UUserWidget::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMView.InnerSingleton;
}

// GetViewModel @ 14a754b10

TScriptInterface<INotifyFieldValueChanged> * __thiscall
UMVVMView::GetViewModel
          (UMVVMView *this,TScriptInterface<INotifyFieldValueChanged> *__return_storage_ptr__,
          FName param_1)

{
  int iVar1;
  TObjectPtr<UMVVMViewClass_const_>_u_0 TVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TScriptInterface<INotifyFieldValueChanged> *pTVar7;
  longlong lVar8;
  uint uVar9;
  UObject *pUVar10;
  UObject *local_res8;
  
  TVar2 = (this->GeneratedViewClass).field0_0x0;
  iVar1 = ((TVar2.DebugPtr)->Sources).ArrayNum;
  lVar3 = *(longlong *)((longlong)TVar2 + 0x28);
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TScriptInterface<INotifyFieldValueChanged> *)(*pcVar4)();
    return pTVar7;
  }
  lVar8 = lVar3;
  do {
    if (lVar8 == (longlong)iVar1 * 0x68 + lVar3) {
LAB_14a754b8a:
      pUVar10 = (UObject *)0x0;
LAB_14a754b8c:
      local_res8 = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      TScriptInterface<INotifyFieldValueChanged>::
      TScriptInterface<INotifyFieldValueChanged><UObject>
                (__return_storage_ptr__,(TObjectPtr<UObject>)&local_res8);
      return __return_storage_ptr__;
    }
    if ((*(FName *)(lVar8 + 0x24) == param_1) && ((*(ushort *)(lVar8 + 0x60) & 0x200) != 0)) {
      uVar5 = (uint)((lVar8 - lVar3) / 0x68);
      if ((-1 < (int)uVar5) && ((int)uVar5 < (this->Sources).ArrayNum)) {
        uVar9 = 0;
        if ((int)uVar5 < (this->Sources).ArrayNum) {
          uVar9 = ~uVar5 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TScriptInterface<INotifyFieldValueChanged> *)(*pcVar4)();
          return pTVar7;
        }
        pUVar10 = *(UObject **)
                   ((this->Sources).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar10);
        }
        goto LAB_14a754b8c;
      }
      goto LAB_14a754b8a;
    }
    lVar8 = lVar8 + 0x68;
  } while( true );
}

// HandleViewModelCollectionChanged @ 14a754fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMVVMView::HandleViewModelCollectionChanged(UMVVMView *this)

{
  int iVar1;
  UMVVMViewClass *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  UUserWidget *pUVar8;
  UUserWidget *pUVar9;
  longlong lVar10;
  uint uVar11;
  UUserWidget *pUVar12;
  UUserWidget *pUVar13;
  FScriptContainerElement *pFVar14;
  UUserWidget *pUVar15;
  UMVVMViewModelCollectionObject *local_res8;
  UUserWidget *local_38;
  UUserWidget *local_30;
  
  pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  if (pUVar2 == (UMVVMViewClass *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3602267991179265151>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                       ,0x47f,"GeneratedViewClass");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar1 = (pUVar2->Sources).ArrayNum;
    lVar10 = (longlong)iVar1;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar13 = (UUserWidget *)0x0;
    pUVar9 = pUVar13;
    pUVar15 = pUVar13;
    if (0 < iVar1) {
      do {
        uVar11 = (uint)pUVar9;
        uVar6 = 0;
        if ((int)uVar11 < (this->Sources).ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
        pFVar14 = (FScriptContainerElement *)
                  ((longlong)&pUVar15->_padding_ + (longlong)(this->Sources).AllocatorInstance.Data)
        ;
        uVar6 = *(uint *)(pFVar14 + 8);
        if ((((int)uVar6 < 0) || ((pUVar2->Sources).ArrayNum <= (int)uVar6)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Sources.IsValidIndex(Key.GetIndex())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\View\\MVVMViewClass.h"
                               ,0x2b1,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar7 = 0;
        if ((int)uVar6 < (pUVar2->Sources).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pUVar2->Sources).AllocatorInstance.Data;
        if (((pFVar14[0x10] != (FScriptContainerElement)0x0) &&
            (pFVar14[0x12] == (FScriptContainerElement)0x0)) &&
           ((*(ushort *)(pFVar3 + (longlong)(int)uVar6 * 0x68 + 0x60) & 0x800) != 0)) {
          if ((this->_padding_ & 0x10) == 0) {
            pUVar9 = (UUserWidget *)this->_padding_;
          }
          else {
            bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1637797074370035733>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                               ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
            pUVar9 = pUVar13;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          local_res8 = (UMVVMViewModelCollectionObject *)0x0;
          pUVar8 = (UUserWidget *)
                   UE::MVVM::Private::GetGlobalCollectionViewModel
                             (pUVar9,(FMVVMViewModelContext *)
                                     (pFVar3 + (longlong)(int)uVar6 * 0x68 + 0x10),&local_res8);
          pUVar9 = pUVar13;
          pUVar12 = pUVar13;
          if (pUVar8 != (UUserWidget *)0x0) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            pUVar9 = pUVar8;
            pUVar12 = (UUserWidget *)&pUVar8->_padding_;
          }
          if (*(UUserWidget **)pFVar14 == (UUserWidget *)0x0) {
            bVar5 = pUVar9 == (UUserWidget *)0x0;
          }
          else {
            bVar5 = *(UUserWidget **)pFVar14 == pUVar9;
          }
          if (!bVar5) {
            local_38 = pUVar9;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar9 != (UUserWidget *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar9);
            }
            local_30 = pUVar12;
            SetSourceInternal(this,(FMVVMViewClass_SourceKey)*(int *)(pFVar14 + 8),
                              (TScriptInterface<INotifyFieldValueChanged> *)&local_38,true);
          }
        }
        lVar10 = lVar10 + -1;
        pUVar9 = (UUserWidget *)(ulonglong)(uVar11 + 1);
        pUVar15 = (UUserWidget *)&pUVar15->_padding_;
      } while (lVar10 != 0);
    }
  }
  return;
}

// HandledLibraryBindingValueChanged @ 14a755260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UMVVMView::HandledLibraryBindingValueChanged
          (UMVVMView *this,UObject *param_1,FFieldId *param_2,FMVVMView_SourceKey param_3)

{
  FMVVMViewClass_SourceKey FVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UMVVMViewClass_const_>_u_0 TVar4;
  FName FVar5;
  code *pcVar6;
  FFieldId *pFVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_ExecuteBinding_ValueChanged> FVar11;
  FMVVMViewClass_Source *pFVar12;
  FMVVMViewClass_Condition *pFVar13;
  UFunction *pUVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  longlong lVar18;
  FMVVMViewClass_SourceBinding *pFVar19;
  UObject *pUVar20;
  FMVVMViewClass_SourceBinding *pFVar21;
  byte bVar22;
  FName *pFVar23;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  FFieldId *local_res18;
  byte local_res20;
  FName local_108;
  UObject *local_f0;
  FName local_e8;
  FName local_e0;
  TSharedRef<FTokenizedMessage,1> local_d8;
  FText local_c8;
  FText local_b8;
  FMessageLog local_a8;
  FText local_70;
  FTextFormat local_60 [2];
  
  lVar18 = (longlong)param_3.Index;
  FVar11 = StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_ValueChanged;
  local_res18 = param_2;
  if (StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_ValueChanged ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_ExecuteBinding_ValueChanged>)0x0) {
    pFVar10 = ::FName::FName(&local_e0,"STAT_UMG_Viewmodel_ExecuteBinding_ValueChanged");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_ExecuteBinding_ValueChanged>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_UMG_Viewmodel_ExecuteBinding_ValueChanged,*pFVar10,
                        L"ExecuteBinding ValueChanged","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",
                        L"UMG Viewmodel",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar22 = 0;
  local_108 = *(FName *)FVar11;
  local_res20 = 0;
  if ((local_108.ComparisonIndex.Value.Value == 0) && (local_108.Number == 0)) {
LAB_14a7553c6:
    local_108.ComparisonIndex.Value = 0;
    local_108.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar22 = 1;
      local_res20 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = local_108.ComparisonIndex.Value.Value;
        local_res10.Number = local_108.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                   ,0x2a0);
        bVar22 = 3;
        local_res20 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14a7553c6;
    FThreadStats::AddMessage(local_108,CycleScopeStart);
    local_res20 = bVar22 | 4;
  }
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                         ,0x2a2,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_2->FieldName == (FName)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFieldId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                         ,0x2a3,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_3.Index == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewSourceKey.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                         ,0x2a4,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->GeneratedViewClass).field0_0x0.DebugPtr == (UMVVMViewClass *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3602267991179264678>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                       ,0x2a6,"GeneratedViewClass");
    if (bVar8) {
code_r0x00014a75580b:
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if ((param_3.Index < 0) || ((this->Sources).ArrayNum <= param_3.Index)) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3602267991179264678>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                       ,0x2a6,"Sources.IsValidIndex(ViewSourceKey.GetIndex())");
    if (bVar8) goto code_r0x00014a75580b;
  }
  else {
    pUVar20 = (UObject *)0x0;
    uVar9 = 0;
    if (param_3.Index < (this->Sources).ArrayNum) {
      uVar9 = (uint)~param_3.Index >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (this->Sources).AllocatorInstance.Data;
    if ((pFVar3[lVar18 * 0x18 + 0x11] == (FScriptContainerElement)0x0) ||
       (pFVar3[lVar18 * 0x18 + 0x10] == (FScriptContainerElement)0x0)) {
      if ((this->_padding_ & 0x10) == 0) {
        pUVar20 = (UObject *)this->_padding_;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1637797074370035733>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                           ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FMessageLog::FMessageLog((FMessageLog *)&local_a8,&UE::MVVM::FMessageLog::LogName);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar20);
      }
      local_a8.UserWidget.WeakPtr.ObjectIndex = 0;
      local_a8.UserWidget.WeakPtr.ObjectSerialNumber = 0;
      local_f0 = pUVar20;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar20);
      }
      FWeakObjectPtr::operator=(&local_a8.UserWidget.WeakPtr,(FObjectPtr)&local_f0);
      local_e8 = param_2->FieldName;
      pFVar15 = FText::FromName(&local_70,&local_e8);
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_b8,L"MVVMView",L"ExecuteBindingFailWhileInitializing",
                           L"The Field \'{0}\' could not execute the bindings while initializing.");
      pFVar17 = FTextFormat::FTextFormat(local_60,pFVar16,Default);
      pFVar15 = FText::Format<FText>(&local_c8,pFVar17,pFVar15);
      UE::MVVM::FMessageLog::Message(&local_a8,&local_d8,Warning,pFVar15);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog((FMessageLog *)&local_a8);
    }
    else {
      FVar1.Index = *(int *)(pFVar3 + lVar18 * 0x18 + 8);
      pFVar12 = UMVVMViewClass::GetSource((this->GeneratedViewClass).field0_0x0.DebugPtr,FVar1);
      if ((pFVar12->Flags & 0x40) != 0) {
        TVar4 = (this->GeneratedViewClass).field0_0x0;
        iVar2 = ((TVar4.DebugPtr)->EvaluateSources).ArrayNum;
        pFVar10 = *(FName **)((longlong)TVar4 + 0x48);
        if ((iVar2 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar23 = pFVar10 + (longlong)iVar2 * 2;
        for (; pFVar10 != pFVar23; pFVar10 = pFVar10 + 2) {
          if ((pFVar10[1].ComparisonIndex.Value == FVar1.Index) && (*pFVar10 == param_2->FieldName))
          {
            EvaluateSource(this,(FMVVMViewClass_SourceKey)pFVar10[1].Number);
          }
        }
      }
      iVar2 = (pFVar12->Bindings).ArrayNum;
      pFVar19 = (FMVVMViewClass_SourceBinding *)(pFVar12->Bindings).AllocatorInstance.Data;
      if ((iVar2 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar21 = pFVar19 + iVar2;
      if (pFVar19 != pFVar21) {
        FVar5 = param_2->FieldName;
        do {
          if ((pFVar19->FieldId).FieldName == FVar5) {
            ExecuteBindingInternal(this,pFVar19);
          }
          pFVar19 = pFVar19 + 1;
        } while (pFVar19 != pFVar21);
      }
      iVar2 = (pFVar12->Conditions).ArrayNum;
      pFVar10 = (FName *)(pFVar12->Conditions).AllocatorInstance.Data;
      if ((iVar2 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar7 = local_res18;
      pFVar23 = (FName *)((longlong)pFVar10 + (longlong)iVar2 * 0xc);
      for (; pFVar10 != pFVar23; pFVar10 = (FName *)&pFVar10[1].Number) {
        if (*pFVar10 == pFVar7->FieldName) {
          pFVar13 = UMVVMViewClass::GetCondition
                              ((this->GeneratedViewClass).field0_0x0.DebugPtr,
                               (FMVVMViewClass_ConditionKey)pFVar10[1].ComparisonIndex.Value);
          if ((this->_padding_ & 0x10) == 0) {
            pUVar20 = (UObject *)this->_padding_;
          }
          else {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1637797074370035733>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                               ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pUVar20 = (UObject *)0x0;
          }
          pUVar14 = UClass::FindFunctionByName
                              (*(UClass **)&pUVar20->field_0x10,pFVar13->UserWidgetFunctionName,
                               IncludeSuper);
          UE::MVVM::BindingHelper::ExecuteFunction_NoReturnValue(pUVar14,pUVar20);
        }
      }
    }
  }
  bVar22 = local_res20;
  if ((local_res20 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar22 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar22 & 4) != 0) {
    FThreadStats::AddMessage(local_108,CycleScopeEnd);
  }
  return;
}

// InitializeBindings @ 14a755bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMVVMView::InitializeBindings(UMVVMView *this)

{
  int iVar1;
  UMVVMViewClass *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_InitializeBindings> FVar16;
  longlong lVar17;
  FName FVar18;
  FMVVMView_SourceKey FVar19;
  uint uVar20;
  longlong lVar21;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  
  if (this->bSourcesInitialized == false) {
    InitializeSources(this);
  }
  if (this->bBindingsInitialized != false) {
    return;
  }
  FVar16 = StatPtr_STAT_UMG_Viewmodel_InitializeBindings;
  if (StatPtr_STAT_UMG_Viewmodel_InitializeBindings ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_InitializeBindings>)0x0) {
    pFVar15 = ::FName::FName(&local_68,"STAT_UMG_Viewmodel_InitializeBindings");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_InitializeBindings>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_InitializeBindings,
                        *pFVar15,L"InitializeBindings","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",
                        L"UMG Viewmodel",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar16;
  bVar8 = false;
  bVar11 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar13 = false;
  bVar9 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) ||
     (bVar7 = bVar8, bVar10 = bVar11, FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar11 = true;
      bVar13 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_res18.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                   ,0x168);
        bVar8 = true;
        bVar11 = true;
        bVar13 = true;
        bVar9 = true;
      }
    }
    bVar7 = bVar8;
    bVar10 = bVar11;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar13 = true;
      bVar9 = true;
      goto LAB_14a755d82;
    }
  }
  bVar11 = bVar9;
  bVar8 = bVar13;
  bVar13 = false;
  bVar9 = false;
  local_res20 = local_60;
  FVar18 = local_60;
LAB_14a755d82:
  if ((this->NumberOfSourceWithTickBinding != '\0') &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumberOfSourceWithTickBinding == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                          ,0x16a,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar19.Index = 0;
  if (0 < (this->Sources).ArrayNum) {
    do {
      InitializeSourceBindings(this,FVar19,false);
      FVar19.Index = FVar19.Index + 1;
    } while (FVar19.Index < (this->Sources).ArrayNum);
  }
  InitializeSourceBindingsCommon(this);
  pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  pFVar3 = (pUVar2->ViewClassExtensions).AllocatorInstance.Data;
  iVar1 = (pUVar2->ViewClassExtensions).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((iVar1 != (this->Extensions).ArrayNum) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClassExtensions.Num() == Extensions.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                          ,0x174,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar20 = 0;
  if (0 < iVar1) {
    lVar21 = 0;
    do {
      plVar4 = *(longlong **)(pFVar3 + lVar21);
      pcVar6 = *(code **)(*plVar4 + 0x2c0);
      uVar14 = 0;
      if ((int)uVar20 < (this->Extensions).ArrayNum) {
        uVar14 = ~uVar20 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar5 = *(undefined8 *)((this->Extensions).AllocatorInstance.Data + lVar21);
      if ((this->_padding_ & 0x10) == 0) {
        lVar17 = this->_padding_;
      }
      else {
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1637797074370035733>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                            ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar13) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar17 = 0;
      }
      (*pcVar6)(plVar4,lVar17,this,uVar5);
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 8;
      FVar18 = local_res20;
      bVar7 = bVar8;
      bVar13 = bVar9;
      bVar10 = bVar11;
    } while ((int)uVar20 < iVar1);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// InitializeEvents @ 14a755fc0

void __thiscall UMVVMView::InitializeEvents(UMVVMView *this)

{
  int iVar1;
  UMVVMViewClass *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  FMVVMViewClass_EventKey FVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if (this->bEventsInitialized != false) {
    return;
  }
  if ((this->_padding_ & 0x10) == 0) {
    if (this->_padding_ != 0) goto LAB_14a756040;
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("UserWidget",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                     ,0x49c,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14a756040:
  if (((this->GeneratedViewClass).field0_0x0.DebugPtr == (UMVVMViewClass *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeneratedViewClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                         ,0x49d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  uVar8 = (pUVar2->Events).ArrayNum;
  pFVar3 = (pUVar2->Events).AllocatorInstance.Data;
  if (((int)uVar8 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->BoundEvents).ArrayNum != 0) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3602267991179265185>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                         ,0x4a1,"BoundEvents.IsEmpty()"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar10 = 0;
  (this->BoundEvents).ArrayNum = 0;
  if ((this->BoundEvents).ArrayMax < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar8,&(this->BoundEvents).AllocatorInstance,0,&(this->BoundEvents).ArrayMax);
  }
  uVar13 = uVar10;
  if (0 < (int)uVar8) {
    do {
      FVar11.Index = (int)uVar13;
      if ((FVar11.Index < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      BindEvent(this,(FMVVMViewClass_Event *)(pFVar3 + uVar13 * 0x18),FVar11);
      uVar13 = (ulonglong)(FVar11.Index + 1U);
    } while ((int)(FVar11.Index + 1U) < (int)uVar8);
  }
  pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  pFVar3 = (pUVar2->ViewClassExtensions).AllocatorInstance.Data;
  iVar1 = (pUVar2->ViewClassExtensions).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((iVar1 != (this->Extensions).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClassExtensions.Num() == Extensions.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                         ,0x4aa,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar13 = uVar10;
  if (0 < iVar1) {
    do {
      plVar4 = *(longlong **)(pFVar3 + uVar10);
      uVar12 = (uint)uVar13;
      pcVar6 = *(code **)(*plVar4 + 0x2c8);
      uVar8 = 0;
      if ((int)uVar12 < (this->Extensions).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar5 = *(undefined8 *)((this->Extensions).AllocatorInstance.Data + uVar10);
      if ((this->_padding_ & 0x10) == 0) {
        lVar9 = this->_padding_;
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1637797074370035733>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                           ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar9 = 0;
      }
      (*pcVar6)(plVar4,lVar9,this,uVar5);
      uVar10 = uVar10 + 8;
      uVar13 = (ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < iVar1);
  }
  this->bEventsInitialized = true;
  return;
}

// InitializeSource @ 14a756340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMVVMView::InitializeSource(UMVVMView *this,FMVVMView_SourceKey param_1)

{
  FMVVMView_Source *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FMVVMViewClass_Source *this_00;
  UObject *pUVar6;
  UUserWidget *pUVar7;
  
  pUVar7 = (UUserWidget *)0x0;
  uVar5 = 0;
  if (param_1.Index < (this->Sources).ArrayNum) {
    uVar5 = (uint)~param_1.Index >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Sources).AllocatorInstance.Data;
  pFVar1 = (FMVVMView_Source *)(pFVar2 + (longlong)param_1.Index * 0x18);
  this_00 = UMVVMViewClass::GetSource
                      ((this->GeneratedViewClass).field0_0x0.DebugPtr,
                       (FMVVMViewClass_SourceKey)
                       *(int *)(pFVar2 + (longlong)param_1.Index * 0x18 + 8));
  if (pFVar1->bSourceInitialized != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewSource.bSourceInitialized == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                       ,0x10a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pFVar1->bSetManually == false) {
    if ((this->_padding_ & 0x10) == 0) {
      pUVar7 = (UUserWidget *)this->_padding_;
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar6 = FMVVMViewClass_Source::GetOrCreateInstance
                       (this_00,(this->GeneratedViewClass).field0_0x0.DebugPtr,this,pUVar7);
    InitializeSourceInternal
              (this,pUVar6,(FMVVMViewClass_SourceKey)(pFVar1->ClassKey).Index,this_00,pFVar1);
    UE::MVVM::FDebugging::BroadcastViewSourceValueChanged
              (this,(FMVVMViewClass_SourceKey)(pFVar1->ClassKey).Index,param_1);
  }
  pFVar1->bSourceInitialized = true;
  return;
}

// InitializeSourceBindings @ 14a756490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UMVVMView::InitializeSourceBindings(UMVVMView *this,FMVVMView_SourceKey param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FMVVMViewClass_BindingKey> FVar2;
  ForElementType<FMVVMViewClass_ConditionKey> FVar3;
  int iVar4;
  longlong lVar5;
  UClass *this_00;
  UMVVMViewClass *pUVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FMVVMViewClass_Source *pFVar11;
  UClass *pUVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  FMVVMViewClass_Condition *pFVar15;
  UFunction *pUVar16;
  UMVVMBindingSubsystem *this_01;
  FText *pFVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  uint uVar20;
  longlong *plVar21;
  ForElementType<FMVVMViewClass_BindingKey> FVar22;
  ForElementType<FMVVMViewClass_ConditionKey> FVar23;
  FScriptContainerElement *pFVar24;
  int *piVar25;
  UObject *pUVar26;
  ForElementType<FMVVMViewClass_BindingKey> FVar27;
  ForElementType<FMVVMViewClass_ConditionKey> FVar28;
  FScriptContainerElement *pFVar29;
  undefined1 auStackY_218 [32];
  undefined1 local_1c8;
  char local_1c7;
  int local_1c4;
  int local_1c0;
  undefined1 local_1bc;
  undefined1 local_1bb;
  FDelegateAllocation local_1b8;
  FScriptContainerElement *local_1a8;
  FMVVMViewClass_Source *local_1a0;
  undefined1 local_198 [8];
  longlong *plStack_190;
  FMVVMViewClass_Source *local_188;
  UObject *local_180;
  UMVVMView *local_178;
  UObject *local_170;
  FName local_168 [2];
  longlong local_158;
  undefined4 local_150;
  ForElementType<TAlignedBytes<16,16>_> local_148;
  int local_140;
  undefined1 local_130;
  FDelegateAllocation *local_128;
  TSharedRef<FTokenizedMessage,1> local_120;
  FText local_110;
  FText local_100;
  FMessageLog local_f0;
  FText local_b8;
  FTextFormat local_a8;
  ForElementType<FMVVMViewClass_BindingKey> local_98;
  int local_70;
  int local_6c;
  ForElementType<FMVVMViewClass_ConditionKey> local_68;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  uVar20 = 0;
  if (param_1.Index < (this->Sources).ArrayNum) {
    uVar20 = (uint)~param_1.Index >> 0x1f;
  }
  local_1c7 = param_2;
  if ((uVar20 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar29 = (this->Sources).AllocatorInstance.Data;
  pFVar24 = pFVar29 + (longlong)param_1.Index * 0x18;
  local_1a8 = pFVar24;
  pFVar11 = UMVVMViewClass::GetSource
                      ((this->GeneratedViewClass).field0_0x0.DebugPtr,
                       (FMVVMViewClass_SourceKey)
                       *(int *)(pFVar29 + (longlong)param_1.Index * 0x18 + 8));
  lVar5 = *(longlong *)pFVar24;
  local_1a0 = pFVar11;
  if ((lVar5 != 0) != ((this->ValidSources >> ((ulonglong)*(uint *)(pFVar24 + 8) & 0x3f) & 1) != 0))
  {
    local_188 = pFVar11;
    `UMVVMView::InitializeSourceBindings'::__l2::<lambda_1>::operator()(&local_188);
  }
  if (lVar5 == 0) {
    if ((pFVar11->Flags & 8) == 0) {
      if ((this->_padding_ & 0x10) == 0) {
        pUVar26 = (UObject *)this->_padding_;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1637797074370035733>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                           ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar26 = (UObject *)0x0;
      }
      FMessageLog::FMessageLog((FMessageLog *)&local_f0,&UE::MVVM::FMessageLog::LogName);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar26 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar26);
      }
      local_f0.UserWidget.WeakPtr.ObjectIndex = 0;
      local_f0.UserWidget.WeakPtr.ObjectSerialNumber = 0;
      local_170 = pUVar26;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar26 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar26);
      }
      FWeakObjectPtr::operator=(&local_f0.UserWidget.WeakPtr,(FObjectPtr)&local_170);
      local_168[0] = pFVar11->PropertyName;
      pFVar17 = FText::FromName(&local_b8,local_168);
      pFVar18 = FText::AsLocalizable_Advanced_LocText
                          (&local_100,L"MVVMView",L"InitializeBindingFailInvalidSource",
                           L"The source \'{0}\' is invalid and could not initialize the bindings.");
      pFVar19 = FTextFormat::FTextFormat(&local_a8,pFVar18,Default);
      pFVar17 = FText::Format<FText>(&local_110,pFVar19,pFVar17);
      UE::MVVM::FMessageLog::Message(&local_f0,&local_120,Error,pFVar17);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.SharedReferenceCount.ReferenceController);
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      if (local_100.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog((FMessageLog *)&local_f0);
    }
    pFVar24[0x11] = (FScriptContainerElement)0x1;
    return;
  }
  iVar4 = (pFVar11->FieldToRegisterTo).ArrayNum;
  if (iVar4 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (0 < iVar4) {
    this_00 = *(UClass **)(*(longlong *)pFVar24 + 0x10);
    if (this_00 != (UClass *)0x0) {
      pUVar12 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
      bVar8 = UClass::ImplementsInterface(this_00,pUVar12);
      if (bVar8) {
        local_180 = *(UObject **)pFVar24;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_180 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_180);
        }
        TScriptInterface<INotifyFieldValueChanged>::
        TScriptInterface<INotifyFieldValueChanged><UObject>
                  ((TScriptInterface<INotifyFieldValueChanged> *)local_198,
                   (TObjectPtr<UObject>)&local_180);
        if ((local_198 != (undefined1  [8])0x0) && (plStack_190 != (longlong *)0x0)) {
          iVar4 = (pFVar11->FieldToRegisterTo).ArrayNum;
          pFVar29 = (pFVar11->FieldToRegisterTo).AllocatorInstance.Data;
          if ((iVar4 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar1 = pFVar29 + (longlong)iVar4 * 0xc;
          pFVar11 = local_1a0;
          for (; local_1a0 = pFVar11, pFVar29 != pFVar1; pFVar29 = pFVar29 + 0xc) {
            if ((*(int *)(pFVar29 + 8) == -1) || (*(longlong *)pFVar29 == 0)) {
              local_1c8 = 0;
              bVar8 = `UMVVMView::InitializeSourceBindings'::__l16::<lambda_2>::operator()
                                (&local_1c8);
              if (bVar8) goto LAB_14a756687;
            }
            else {
LAB_14a756687:
              local_1b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_1b8.DelegateSize = 0;
              local_130 = 0;
              local_128 = &local_1b8;
              puVar13 = UE::Core::Private::DelegateAllocate(0x28,&local_1b8);
              if (puVar13 != (undefined8 *)0x0) {
                *puVar13 = &
                           ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFMVVMView_SourceKey____6B_
                ;
                *(int *)(puVar13 + 1) = param_1.Index;
                uVar14 = FDelegateHandle::GenerateNewID();
                puVar13[2] = uVar14;
                *puVar13 = &
                           ___7__TBaseUObjectMethodDelegateInstance__0A_VUMVVMView____A6AXPEAVUObject__UFFieldId_FieldNotification_UE___ZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFMVVMView_SourceKey____6B_
                ;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                puVar13[3] = 0;
                local_178 = this;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_178);
                puVar13[4] = HandledLibraryBindingValueChanged;
                pFVar24 = local_1a8;
              }
              plVar21 = (longlong *)0x0;
              if (local_198 != (undefined1  [8])0x0) {
                plVar21 = plStack_190;
              }
              local_1bc = 0;
              local_148 = local_1b8.DelegateAllocator;
              local_140 = local_1b8.DelegateSize;
              local_158 = *(longlong *)pFVar29;
              local_150 = *(undefined4 *)(pFVar29 + 8);
              local_1b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              local_1b8.DelegateSize = 0;
              (**(code **)(*plVar21 + 0x10))();
              *(int *)(pFVar24 + 0xc) = *(int *)(pFVar24 + 0xc) + 1;
              local_1bb = 0;
              if (local_1b8.DelegateSize != 0) {
                if (local_1b8.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
                goto LAB_14a7567ae;
                (*(code *)**(undefined8 **)local_1b8.DelegateAllocator)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&local_1b8,0,0,0x10);
                local_1b8.DelegateSize = 0;
              }
              if (local_1b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                FMemory::Free((void *)local_1b8.DelegateAllocator);
              }
            }
LAB_14a7567ae:
            param_2 = (bool)local_1c7;
            pFVar11 = local_1a0;
          }
        }
        goto LAB_14a7567c6;
      }
    }
    local_198 = (undefined1  [8])0x0;
    plStack_190 = (longlong *)0x0;
  }
LAB_14a7567c6:
  pFVar24 = (pFVar11->Bindings).AllocatorInstance.Data;
  iVar4 = (pFVar11->Bindings).ArrayNum;
  if (param_2 == false) {
    if ((iVar4 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar29 = pFVar24 + (longlong)iVar4 * 0x10;
    for (; pFVar24 != pFVar29; pFVar24 = pFVar24 + 0x10) {
      if (((byte)pFVar24[0xc] & 1) != 0) {
        uVar20 = *(uint *)(pFVar24 + 8);
        pUVar6 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
        if ((((int)uVar20 < 0) || ((pUVar6->Bindings).ArrayNum <= (int)uVar20)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Bindings.IsValidIndex(Key.GetIndex())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\View\\MVVMViewClass.h"
                               ,0x2be,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar10 = 0;
        if ((int)uVar20 < (pUVar6->Bindings).ArrayNum) {
          uVar10 = ~uVar20 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        ExecuteBindingImmediately
                  (this,(FMVVMViewClass_Binding *)
                        ((pUVar6->Bindings).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x20),
                   (FMVVMViewClass_BindingKey)*(int *)(pFVar24 + 8));
      }
    }
    iVar4 = (pFVar11->Conditions).ArrayNum;
    pFVar24 = (pFVar11->Conditions).AllocatorInstance.Data;
    if ((iVar4 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar29 = pFVar24 + (longlong)iVar4 * 0xc;
    for (; pFVar24 != pFVar29; pFVar24 = pFVar24 + 0xc) {
      uVar20 = *(uint *)(pFVar24 + 8);
      piVar25 = &(((this->GeneratedViewClass).field0_0x0.DebugPtr)->Conditions).ArrayNum;
      if ((((int)uVar20 < 0) || (*piVar25 <= (int)uVar20)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Conditions.IsValidIndex(Key.GetIndex())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\View\\MVVMViewClass.h"
                             ,0x2e5,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = 0;
      if ((int)uVar20 < *piVar25) {
        uVar10 = ~uVar20 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar15 = UMVVMViewClass::GetCondition
                          ((this->GeneratedViewClass).field0_0x0.DebugPtr,
                           (FMVVMViewClass_ConditionKey)*(int *)(pFVar24 + 8));
      if ((this->_padding_ & 0x10) == 0) {
        pUVar26 = (UObject *)this->_padding_;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1637797074370035733>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                           ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar26 = (UObject *)0x0;
      }
      pUVar16 = UClass::FindFunctionByName
                          (*(UClass **)&pUVar26->field_0x10,pFVar15->UserWidgetFunctionName,
                           IncludeSuper);
      UE::MVVM::BindingHelper::ExecuteFunction_NoReturnValue(pUVar16,pUVar26);
    }
  }
  else {
    local_6c = 8;
    local_98.SecondaryData = (ForElementType<FMVVMViewClass_BindingKey>)0x0;
    local_70 = 0;
    if ((iVar4 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar29 = pFVar24 + (longlong)iVar4 * 0x10;
    iVar4 = local_1c4;
    FVar27 = local_98.SecondaryData;
    iVar9 = local_70;
    for (; pFVar24 != pFVar29; pFVar24 = pFVar24 + 0x10) {
      local_1c4 = *(int *)(pFVar24 + 8);
      FVar22 = (ForElementType<FMVVMViewClass_BindingKey>)&local_98;
      if (FVar27 != (ForElementType<FMVVMViewClass_BindingKey>)0x0) {
        FVar22 = FVar27;
      }
      FVar2 = (ForElementType<FMVVMViewClass_BindingKey>)((longlong)FVar22 + (longlong)iVar9 * 4);
      for (; FVar22 != FVar2;
          FVar22 = (ForElementType<FMVVMViewClass_BindingKey>)((longlong)FVar22 + 4)) {
        if (*(int *)FVar22 == local_1c4) goto LAB_14a756a0a;
      }
      FVar22 = (ForElementType<FMVVMViewClass_BindingKey>)&local_98;
      if (FVar27 != (ForElementType<FMVVMViewClass_BindingKey>)0x0) {
        FVar22 = FVar27;
      }
      if ((ulonglong)FVar22 <= &local_1c4) {
        FVar22 = (ForElementType<FMVVMViewClass_BindingKey>)&local_98;
        if (FVar27 != (ForElementType<FMVVMViewClass_BindingKey>)0x0) {
          FVar22 = FVar27;
        }
        if ((&local_1c4 < (int *)((longlong)FVar22 + (longlong)local_6c * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), FVar27 = local_98.SecondaryData, iVar9 = local_70, bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iVar9 == local_6c) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMVVMViewClass_BindingKey>_>
                          (0x404,&local_98,&local_6c);
        FVar27 = local_98.SecondaryData;
      }
      local_70 = iVar9 + 1;
      FVar22 = (ForElementType<FMVVMViewClass_BindingKey>)&local_98;
      if (FVar27 != (ForElementType<FMVVMViewClass_BindingKey>)0x0) {
        FVar22 = FVar27;
      }
      *(int *)((longlong)FVar22 + (longlong)iVar9 * 4) = local_1c4;
      uVar20 = *(uint *)(pFVar24 + 8);
      pUVar6 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
      if ((((int)uVar20 < 0) || ((pUVar6->Bindings).ArrayNum <= (int)uVar20)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Bindings.IsValidIndex(Key.GetIndex())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\View\\MVVMViewClass.h"
                             ,0x2be,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = 0;
      if ((int)uVar20 < (pUVar6->Bindings).ArrayNum) {
        uVar10 = ~uVar20 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      ExecuteBindingImmediately
                (this,(FMVVMViewClass_Binding *)
                      ((pUVar6->Bindings).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x20),
                 (FMVVMViewClass_BindingKey)*(int *)(pFVar24 + 8));
      FVar27 = local_98.SecondaryData;
      iVar9 = local_70;
      iVar4 = local_1c4;
LAB_14a756a0a:
      local_1c4 = iVar4;
      iVar4 = local_1c4;
    }
    iVar9 = (pFVar11->Conditions).ArrayNum;
    pFVar24 = (pFVar11->Conditions).AllocatorInstance.Data;
    local_68.SecondaryData = (ForElementType<FMVVMViewClass_ConditionKey>)0x0;
    local_40 = 0;
    local_3c = 8;
    local_1c4 = iVar4;
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), FVar27 = local_98.SecondaryData, bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar29 = pFVar24 + (longlong)iVar9 * 0xc;
    iVar4 = local_1c0;
    FVar28 = local_68.SecondaryData;
    iVar9 = local_40;
    for (; pFVar24 != pFVar29; pFVar24 = pFVar24 + 0xc) {
      local_1c0 = *(int *)(pFVar24 + 8);
      FVar23 = (ForElementType<FMVVMViewClass_ConditionKey>)&local_68;
      if (FVar28 != (ForElementType<FMVVMViewClass_ConditionKey>)0x0) {
        FVar23 = FVar28;
      }
      FVar3 = (ForElementType<FMVVMViewClass_ConditionKey>)((longlong)FVar23 + (longlong)iVar9 * 4);
      for (; FVar23 != FVar3;
          FVar23 = (ForElementType<FMVVMViewClass_ConditionKey>)((longlong)FVar23 + 4)) {
        if (*(int *)FVar23 == local_1c0) goto LAB_14a756cc6;
      }
      FVar23 = (ForElementType<FMVVMViewClass_ConditionKey>)&local_68;
      if (FVar28 != (ForElementType<FMVVMViewClass_ConditionKey>)0x0) {
        FVar23 = FVar28;
      }
      if ((ulonglong)FVar23 <= &local_1c0) {
        FVar23 = (ForElementType<FMVVMViewClass_ConditionKey>)&local_68;
        if (FVar28 != (ForElementType<FMVVMViewClass_ConditionKey>)0x0) {
          FVar23 = FVar28;
        }
        if ((&local_1c0 < (int *)((longlong)FVar23 + (longlong)local_3c * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), FVar28 = local_68.SecondaryData, iVar9 = local_40, bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iVar9 == local_3c) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMVVMViewClass_ConditionKey>_>
                          (0x404,&local_68,&local_3c);
        FVar28 = local_68.SecondaryData;
      }
      local_40 = iVar9 + 1;
      FVar23 = (ForElementType<FMVVMViewClass_ConditionKey>)&local_68;
      if (FVar28 != (ForElementType<FMVVMViewClass_ConditionKey>)0x0) {
        FVar23 = FVar28;
      }
      *(int *)((longlong)FVar23 + (longlong)iVar9 * 4) = local_1c0;
      uVar20 = *(uint *)(pFVar24 + 8);
      piVar25 = &(((this->GeneratedViewClass).field0_0x0.DebugPtr)->Conditions).ArrayNum;
      if ((((int)uVar20 < 0) || (*piVar25 <= (int)uVar20)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Conditions.IsValidIndex(Key.GetIndex())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\View\\MVVMViewClass.h"
                             ,0x2e5,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = 0;
      if ((int)uVar20 < *piVar25) {
        uVar10 = ~uVar20 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar15 = UMVVMViewClass::GetCondition
                          ((this->GeneratedViewClass).field0_0x0.DebugPtr,
                           (FMVVMViewClass_ConditionKey)*(int *)(pFVar24 + 8));
      if ((this->_padding_ & 0x10) == 0) {
        pUVar26 = (UObject *)this->_padding_;
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1637797074370035733>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                           ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar26 = (UObject *)0x0;
      }
      pUVar16 = UClass::FindFunctionByName
                          (*(UClass **)&pUVar26->field_0x10,pFVar15->UserWidgetFunctionName,
                           IncludeSuper);
      UE::MVVM::BindingHelper::ExecuteFunction_NoReturnValue(pUVar16,pUVar26);
      FVar28 = local_68.SecondaryData;
      iVar9 = local_40;
      iVar4 = local_1c0;
LAB_14a756cc6:
      local_1c0 = iVar4;
      FVar27 = local_98.SecondaryData;
      iVar4 = local_1c0;
    }
    local_1c0 = iVar4;
    if (FVar28 != (ForElementType<FMVVMViewClass_ConditionKey>)0x0) {
      FMemory::Free((void *)FVar28);
      FVar27 = local_98.SecondaryData;
    }
    if (FVar27 != (ForElementType<FMVVMViewClass_BindingKey>)0x0) {
      FMemory::Free((void *)FVar27);
    }
  }
  if ((((local_1a0->Flags & 0x100) != 0) &&
      (this->NumberOfSourceWithTickBinding = this->NumberOfSourceWithTickBinding + '\x01',
      this->NumberOfSourceWithTickBinding == '\x01')) && (this->bHasDefaultTickBinding == false)) {
    this_01 = UEngine::GetEngineSubsystem<UMVVMBindingSubsystem>(GEngine);
    UMVVMBindingSubsystem::AddViewWithTickBinding(this_01,this);
  }
  local_1a8[0x11] = (FScriptContainerElement)0x1;
  return;
}

// InitializeSourceBindingsCommon @ 14a7570f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMVVMView::InitializeSourceBindingsCommon(UMVVMView *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UMVVMBindingSubsystem *this_00;
  IConsoleManager *pIVar4;
  
  if (this->bHasDefaultTickBinding != false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3602267991179264382>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                       ,0x17e,"bHasDefaultTickBinding == false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ValidSources != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pIVar4 = IConsoleManager::Get();
        CVarDefaultExecutionMode =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"MVVM.DefaultExecutionMode",1);
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (CVarDefaultExecutionMode == (IConsoleVariable *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3602267991179264387>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                         ,0x183,"CVarDefaultExecutionMode");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar2 = false;
    }
    else {
      cVar3 = (**(code **)(*(longlong *)CVarDefaultExecutionMode + 200))();
      bVar2 = cVar3 == '\x02';
    }
    this->bHasDefaultTickBinding = bVar2;
  }
  if ((this->NumberOfSourceWithTickBinding == '\0') && (this->bHasDefaultTickBinding != false)) {
    this_00 = UEngine::GetEngineSubsystem<UMVVMBindingSubsystem>(GEngine);
    UMVVMBindingSubsystem::AddViewWithTickBinding(this_00,this);
  }
  this->bBindingsInitialized = true;
  return;
}

// InitializeSourceInternal @ 14a757230

void __thiscall
UMVVMView::InitializeSourceInternal
          (UMVVMView *this,UObject *param_1,FMVVMViewClass_SourceKey param_2,
          FMVVMViewClass_Source *param_3,FMVVMView_Source *param_4)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  FObjectPropertyBase *this_00;
  FName FVar6;
  FName FVar7;
  undefined1 local_res10 [8];
  
  if (param_1 == (UObject *)0x0) {
    uVar5 = this->ValidSources & ~(1L << ((longlong)param_2.Index & 0x3fU));
  }
  else {
    uVar5 = this->ValidSources | 1L << ((longlong)param_2.Index & 0x3fU);
  }
  this->ValidSources = uVar5;
  if ((param_3->Flags & 4) == 0) goto LAB_14a75736d;
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  if ((this->_padding_ & 0x10) == 0) {
    FVar6 = (FName)this->_padding_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    FVar6 = FVar7;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_3->Flags & 2) != 0) {
    FVar7 = param_3->PropertyName;
  }
  this_00 = FindFProperty<FObjectPropertyBase>(*(UStruct **)((longlong)FVar6 + 0x10),FVar7,Default);
  if (this_00 == (FObjectPropertyBase *)0x0) {
    local_res10[0] = 0;
    bVar4 = `UMVVMView::InitializeSourceInternal'::__l11::<lambda_1>::operator()(local_res10);
    if (!bVar4) goto LAB_14a75736d;
  }
  if (param_1 == (UObject *)0x0) {
LAB_14a75734e:
    FObjectPropertyBase::SetObjectPropertyValue_InContainer(this_00,(void *)FVar6,param_1,0);
    param_4->bAssignedToUserWidgetProperty = true;
  }
  else {
    pUVar2 = (this_00->PropertyClass).field0_0x0.DebugPtr;
    if (pUVar2 != (UClass *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_14a75734e;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3602267991179264301>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                       ,0x12d,"NewSource->GetClass()->IsChildOf(FoundObjectProperty->PropertyClass)"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
LAB_14a75736d:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  (param_4->Source).field0_0x0.DebugPtr = param_1;
  return;
}

// InitializeSources @ 14a7573a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMVVMView::InitializeSources(UMVVMView *this)

{
  int iVar1;
  UMVVMViewModelCollectionObject *pUVar2;
  UMVVMViewClass *pUVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_InitializeSources> FVar14;
  UUserWidget *pUVar15;
  longlong lVar16;
  UMVVMGameSubsystem *pUVar17;
  FMVVMViewClass_Source *this_00;
  UObject *pUVar18;
  longlong lVar19;
  FMVVMView_Source *pFVar20;
  FMVVMView_SourceKey FVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  FColor_u_0 local_res10 [4];
  FScriptContainerElement *local_res20;
  FName local_88;
  FName local_80;
  code *local_78;
  FName local_70;
  FNameEntryId local_60;
  uint uStack_5c;
  
  if (this->bSourcesInitialized != false) {
    return;
  }
  if ((this->GeneratedViewClass).field0_0x0.DebugPtr == (UMVVMViewClass *)0x0) {
    return;
  }
  FVar14 = StatPtr_STAT_UMG_Viewmodel_InitializeSources;
  if (StatPtr_STAT_UMG_Viewmodel_InitializeSources ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_InitializeSources>)0x0) {
    pFVar13 = ::FName::FName(&local_70,"STAT_UMG_Viewmodel_InitializeSources");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_InitializeSources>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_InitializeSources,
                        *pFVar13,L"InitializeSources","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",
                        L"UMG Viewmodel",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_88 = *(FName *)FVar14;
  bVar9 = false;
  bVar8 = false;
  local_60.Value = 0;
  uStack_5c = 0;
  bVar11 = false;
  bVar10 = false;
  if ((local_88.ComparisonIndex.Value.Value != 0) || (local_88.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = local_88.ComparisonIndex.Value.Value;
        local_80.Number = local_88.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                   ,0xa9);
        bVar9 = true;
        bVar8 = true;
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_88,CycleScopeStart);
      bVar10 = true;
      goto LAB_14a75753e;
    }
  }
  bVar9 = bVar11;
  bVar8 = bVar10;
  bVar10 = false;
  local_88 = _local_60;
LAB_14a75753e:
  if (((this->bHasDefaultTickBinding != false) || (this->NumberOfSourceWithTickBinding != '\0')) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3602267991179264171>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                          ,0xab,
                          "bHasDefaultTickBinding == false && NumberOfSourceWithTickBinding == 0"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar1 = (((this->GeneratedViewClass).field0_0x0.DebugPtr)->Sources).ArrayNum;
  lVar19 = (longlong)iVar1;
  if ((iVar1 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->Sources).ArrayNum != iVar1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Sources.Num() == NumberOfSources",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                          ,0xaf,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((0x40 < iVar1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumberOfSources <= 64",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                          ,0xb0,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->GeneratedViewClass).field0_0x0.DebugPtr)->bListenToViewModelCollectionChanged != false
     ) {
    pUVar15 = UUserWidgetExtension::GetUserWidget((UUserWidgetExtension *)this);
    lVar16 = (**(code **)(pUVar15->_padding_ + 0x180))(pUVar15);
    if ((lVar16 != 0) && (*(UGameInstance **)(lVar16 + 0x230) != (UGameInstance *)0x0)) {
      pUVar17 = UGameInstance::GetSubsystem<UMVVMGameSubsystem>(*(UGameInstance **)(lVar16 + 0x230))
      ;
      pUVar2 = (pUVar17->ViewModelCollection).field0_0x0.DebugPtr;
      if (pUVar2 != (UMVVMViewModelCollectionObject *)0x0) {
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<UMVVMView>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &(pUVar2->ViewModelCollection).OnCollectionChangedDelegate,
                   (UMVVMView *)&stack0xffffffffffffff98,(pmf_74ad9f0c)this);
      }
    }
  }
  FVar21.Index = 0;
  if (0 < iVar1) {
    lVar16 = 0;
    do {
      uVar22 = 0;
      if (FVar21.Index < (this->Sources).ArrayNum) {
        uVar22 = (uint)~FVar21.Index >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar20 = (FMVVMView_Source *)((this->Sources).AllocatorInstance.Data + lVar16);
      this_00 = UMVVMViewClass::GetSource
                          ((this->GeneratedViewClass).field0_0x0.DebugPtr,
                           (FMVVMViewClass_SourceKey)(pFVar20->ClassKey).Index);
      if ((pFVar20->bSourceInitialized != false) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ViewSource.bSourceInitialized == false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                              ,0x10a,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pFVar20->bSetManually == false) {
        if ((this->_padding_ & 0x10) == 0) {
          pUVar15 = (UUserWidget *)this->_padding_;
        }
        else {
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1637797074370035733>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                              ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pUVar15 = (UUserWidget *)0x0;
        }
        pUVar18 = FMVVMViewClass_Source::GetOrCreateInstance
                            (this_00,(this->GeneratedViewClass).field0_0x0.DebugPtr,this,pUVar15);
        InitializeSourceInternal
                  (this,pUVar18,(FMVVMViewClass_SourceKey)(pFVar20->ClassKey).Index,this_00,pFVar20)
        ;
        UE::MVVM::FDebugging::BroadcastViewSourceValueChanged
                  (this,(FMVVMViewClass_SourceKey)(pFVar20->ClassKey).Index,FVar21);
      }
      pFVar20->bSourceInitialized = true;
      if (((this->GeneratedViewClass).field0_0x0.DebugPtr)->bInitializeBindingsOnConstruct != false)
      {
        InitializeSourceBindings(this,FVar21,false);
      }
      FVar21.Index = FVar21.Index + 1;
      lVar16 = lVar16 + 0x18;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  if (((this->GeneratedViewClass).field0_0x0.DebugPtr)->bInitializeBindingsOnConstruct != false) {
    InitializeSourceBindingsCommon(this);
  }
  pUVar3 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  pFVar4 = (pUVar3->ViewClassExtensions).AllocatorInstance.Data;
  iVar1 = (pUVar3->ViewClassExtensions).ArrayNum;
  local_res20 = pFVar4;
  if ((iVar1 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((iVar1 != (this->Extensions).ArrayNum) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClassExtensions.Num() == Extensions.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                          ,0xcc,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar22 = 0;
  pFVar23 = pFVar4;
  if (0 < iVar1) {
    lVar19 = 0;
    do {
      plVar5 = *(longlong **)(pFVar4 + lVar19);
      local_78 = *(code **)(*plVar5 + 0x2b8);
      uVar12 = 0;
      if ((int)uVar22 < (this->Extensions).ArrayNum) {
        uVar12 = ~uVar22 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar6 = *(undefined8 *)((this->Extensions).AllocatorInstance.Data + lVar19);
      if ((this->_padding_ & 0x10) == 0) {
        lVar16 = this->_padding_;
      }
      else {
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1637797074370035733>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                            ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar16 = 0;
      }
      (*local_78)(plVar5,lVar16,this,uVar6);
      uVar22 = uVar22 + 1;
      lVar19 = lVar19 + 8;
      pFVar23 = local_res20;
    } while ((int)uVar22 < iVar1);
  }
  if ((((this->GeneratedViewClass).field0_0x0.DebugPtr)->bInitializeBindingsOnConstruct != false) &&
     (uVar22 = 0, 0 < iVar1)) {
    lVar19 = 0;
    do {
      plVar5 = *(longlong **)(pFVar23 + lVar19);
      pcVar7 = *(code **)(*plVar5 + 0x2c0);
      uVar12 = 0;
      if ((int)uVar22 < (this->Extensions).ArrayNum) {
        uVar12 = ~uVar22 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar6 = *(undefined8 *)((this->Extensions).AllocatorInstance.Data + lVar19);
      if ((this->_padding_ & 0x10) == 0) {
        lVar16 = this->_padding_;
      }
      else {
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1637797074370035733>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                            ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar16 = 0;
      }
      (*pcVar7)(plVar5,lVar16,this,uVar6);
      uVar22 = uVar22 + 1;
      lVar19 = lVar19 + 8;
      pFVar23 = local_res20;
    } while ((int)uVar22 < iVar1);
  }
  this->bSourcesInitialized = true;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(local_88,CycleScopeEnd);
  }
  return;
}

// ReinitializeEvents @ 14a75c8d0

void __thiscall
UMVVMView::ReinitializeEvents
          (UMVVMView *this,FMVVMViewClass_SourceKey param_1,UObject *param_2,UObject *param_3)

{
  int iVar1;
  UMVVMViewClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FWeakObjectPtr *this_00;
  uint uVar6;
  FMVVMViewClass_Event *pFVar7;
  FMVVMViewClass_EventKey FVar8;
  longlong lVar9;
  FWeakObjectPtr local_res8;
  UObject *local_28 [2];
  
  FVar8.Index = 0;
  if ((0 < (this->BoundEvents).ArrayNum) && (param_2 != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_28[0] = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_28);
    uVar6 = (this->BoundEvents).ArrayNum - 1;
    if (-1 < (int)uVar6) {
      lVar9 = (longlong)(int)uVar6 * 0x14;
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->BoundEvents).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = (FWeakObjectPtr *)((this->BoundEvents).AllocatorInstance.Data + lVar9);
        if (((this_00->ObjectIndex == local_res8.ObjectIndex) &&
            (this_00->ObjectSerialNumber == local_res8.ObjectSerialNumber)) ||
           ((bVar4 = FWeakObjectPtr::IsValid(this_00), !bVar4 &&
            (bVar4 = FWeakObjectPtr::IsValid(&local_res8), !bVar4)))) {
          UnbindEvent(this,uVar6);
        }
        lVar9 = lVar9 + -0x14;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
  }
  pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  iVar1 = (pUVar2->Events).ArrayNum;
  pFVar7 = (FMVVMViewClass_Event *)(pUVar2->Events).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0 < iVar1) {
    do {
      if ((FVar8.Index < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pFVar7->SourceToReevaluate).Index == param_1.Index) {
        BindEvent(this,pFVar7,FVar8);
      }
      FVar8.Index = FVar8.Index + 1;
      pFVar7 = pFVar7 + 1;
    } while (FVar8.Index < iVar1);
  }
  return;
}

// SetSourceInternal @ 14a75e5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMVVMView::SetSourceInternal
          (UMVVMView *this,FMVVMViewClass_SourceKey param_1,
          TScriptInterface<INotifyFieldValueChanged> *param_2,bool param_3)

{
  FMVVMView_Source *pFVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  UMVVMViewClass *pUVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_SetSource> FVar13;
  FMVVMViewClass_Source *this_00;
  FText *pFVar14;
  FText *pFVar15;
  FTextFormat *pFVar16;
  UClass *pUVar17;
  UUserWidget *pUVar18;
  UMVVMBindingSubsystem *this_01;
  uint uVar19;
  UObject *pUVar20;
  FScriptContainerElement *pFVar21;
  FName FVar22;
  FScriptContainerElement *pFVar23;
  FColor_u_0 local_238 [2];
  FName local_230;
  UObject *local_228;
  FName local_220;
  UObject *local_210;
  FName local_208;
  UUserWidget *local_200;
  FName local_1f8;
  UUserWidget *local_1f0;
  FName local_1e8;
  FMVVMViewClass_Source *local_1e0;
  FName local_1d8;
  TSharedRef<FTokenizedMessage,1> local_1d0;
  FText local_1c0;
  FText local_1b0;
  TSharedRef<FTokenizedMessage,1> local_1a0;
  FText local_190;
  FText local_180;
  TSharedRef<FTokenizedMessage,1> local_170;
  FText local_160;
  FString local_150;
  FString local_140;
  FMessageLog local_130;
  FMessageLog local_f8;
  FMessageLog local_c0;
  FText local_88;
  FTextFormat local_78;
  FText local_68;
  FTextFormat local_58;
  
  FVar13 = StatPtr_STAT_UMG_Viewmodel_SetSource;
  if (StatPtr_STAT_UMG_Viewmodel_SetSource ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_SetSource>)0x0) {
    pFVar12 = ::FName::FName(&local_1d8,"STAT_UMG_Viewmodel_SetSource");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_SetSource>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_SetSource,*pFVar12,
                        L"SetSource","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",L"UMG Viewmodel",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar13;
  bVar7 = false;
  bVar9 = false;
  local_220.ComparisonIndex.Value = 0;
  local_220.Number = 0;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_14a75e710:
    bVar8 = false;
    FVar22 = local_220;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_238[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_238[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_230.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_230.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_230,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                   ,0x3da);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14a75e710;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar8 = true;
  }
  if (((param_1.Index < 0) || ((this->Sources).ArrayNum <= param_1.Index)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Sources.IsValidIndex(ClassSourceKey.GetIndex())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                          ,0x3dc,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  this_00 = UMVVMViewClass::GetSource((this->GeneratedViewClass).field0_0x0.DebugPtr,param_1);
  uVar19 = 0;
  if (param_1.Index < (this->Sources).ArrayNum) {
    uVar19 = (uint)~param_1.Index >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  pFVar1 = (FMVVMView_Source *)
           ((this->Sources).AllocatorInstance.Data + (longlong)param_1.Index * 0x18);
  if (param_3) {
    if ((this_00->Flags & 0x20) == 0) {
      if ((this->_padding_ & 0x10) == 0) {
        pUVar20 = (UObject *)this->_padding_;
      }
      else {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1637797074370035733>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                            ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
        pUVar20 = (UObject *)0x0;
      }
      FMessageLog::FMessageLog((FMessageLog *)&local_130,&UE::MVVM::FMessageLog::LogName);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar20);
      }
      local_130.UserWidget.WeakPtr.ObjectIndex = 0;
      local_130.UserWidget.WeakPtr.ObjectSerialNumber = 0;
      local_210 = pUVar20;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar20);
      }
      FWeakObjectPtr::operator=(&local_130.UserWidget.WeakPtr,(FObjectPtr)&local_210);
      local_208 = this_00->PropertyName;
      pFVar14 = FText::FromName(&local_88,&local_208);
      pFVar15 = FText::AsLocalizable_Advanced_LocText
                          (&local_1b0,L"MVVMView",L"SetViewModelCannotBeEvalaute",
                           L"The new viewmodel {0} cannot be evaluated again.");
      pFVar16 = FTextFormat::FTextFormat(&local_78,pFVar15,Default);
      pFVar14 = FText::Format<FText>(&local_1c0,pFVar16,pFVar14);
      UE::MVVM::FMessageLog::Message(&local_130,&local_1d0,Error,pFVar14);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d0.SharedReferenceCount.ReferenceController);
      if (local_1c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
      }
      if (local_1b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog((FMessageLog *)&local_130);
      bVar10 = false;
      goto LAB_14a75ed53;
    }
  }
  else if ((this_00->Flags & 0x10) == 0) {
    pUVar18 = UUserWidgetExtension::GetUserWidget((UUserWidgetExtension *)this);
    FMessageLog::FMessageLog((FMessageLog *)&local_f8,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    local_f8.UserWidget.WeakPtr.ObjectIndex = 0;
    local_f8.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_200 = pUVar18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    FWeakObjectPtr::operator=(&local_f8.UserWidget.WeakPtr,(FObjectPtr)&local_200);
    local_1f8 = this_00->PropertyName;
    pFVar14 = FText::FromName(&local_68,&local_1f8);
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_180,L"MVVMView",L"SetViewModelCannotBeSet",
                         L"The new viewmodel {0} cannot be set.");
    pFVar16 = FTextFormat::FTextFormat(&local_58,pFVar15,Default);
    pFVar14 = FText::Format<FText>(&local_190,pFVar16,pFVar14);
    UE::MVVM::FMessageLog::Message(&local_f8,&local_1a0,Error,pFVar14);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a0.SharedReferenceCount.ReferenceController);
    if (local_190.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
    }
    if (local_180.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_f8);
    bVar10 = false;
    goto LAB_14a75ed53;
  }
  if (*(longlong *)param_2 == 0) {
LAB_14a75ebcb:
    local_228 = (pFVar1->Source).field0_0x0.DebugPtr;
    if ((local_228 != (UObject *)0x0) !=
        ((this->ValidSources >> ((ulonglong)(uint)param_1.Index & 0x3f) & 1) != 0)) {
      local_1e0 = this_00;
      `UMVVMView::SetSourceInternal'::__l38::<lambda_1>::operator()(&local_1e0);
    }
    if (local_228 == *(UObject **)param_2) {
      if (((this_00->Flags & 0x1000) != 0) && (pFVar1->bBindingsInitialized != false)) {
        ExecuteViewModelBindingsInternal(this,param_1);
      }
    }
    else {
      bVar10 = pFVar1->bBindingsInitialized;
      bVar2 = pFVar1->bSourceInitialized;
      if (bVar10 != false) {
        if ((pFVar1->Source).field0_0x0.DebugPtr != (UObject *)0x0) {
          UninitializeSourceBindings(this,param_1,this_00,pFVar1);
        }
        this_01 = UEngine::GetEngineSubsystem<UMVVMBindingSubsystem>(GEngine);
        UMVVMBindingSubsystem::RemoveDelayedBindings(this_01,this,param_1);
      }
      UninitializeSource(this,(FMVVMView_SourceKey)param_1.Index);
      InitializeSourceInternal(this,*(UObject **)param_2,param_1,this_00,pFVar1);
      pFVar1->bSetManually = !param_3;
      pFVar1->bSourceInitialized = bVar2;
      if (this->bEventsInitialized != false) {
        ReinitializeEvents(this,param_1,local_228,*(UObject **)param_2);
      }
      if (bVar10 != false) {
        if ((this_00->Flags & 0x40) != 0) {
          pUVar5 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
          iVar3 = (pUVar5->EvaluateSources).ArrayNum;
          pFVar21 = (pUVar5->EvaluateSources).AllocatorInstance.Data;
          if ((iVar3 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          pFVar23 = pFVar21 + (longlong)iVar3 * 0x10;
          for (; pFVar21 != pFVar23; pFVar21 = pFVar21 + 0x10) {
            if (*(int *)(pFVar21 + 8) == param_1.Index) {
              EvaluateSource(this,(FMVVMViewClass_SourceKey)*(int *)(pFVar21 + 0xc));
            }
          }
        }
        InitializeSourceBindings(this,(FMVVMView_SourceKey)param_1.Index,true);
      }
      UE::MVVM::FDebugging::BroadcastViewSourceValueChanged
                (this,param_1,(FMVVMView_SourceKey)param_1.Index);
    }
    bVar10 = true;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)param_2 + 0x10);
    pUVar17 = FMVVMViewClass_Source::GetSourceClass(this_00);
    if (pUVar17 != (UClass *)0x0) {
      iVar3 = (int)pUVar17->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar17->_padding_)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (bVar10) goto LAB_14a75ebcb;
    }
    pUVar18 = UUserWidgetExtension::GetUserWidget((UUserWidgetExtension *)this);
    FMessageLog::FMessageLog((FMessageLog *)&local_c0,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    local_c0.UserWidget.WeakPtr.ObjectIndex = 0;
    local_c0.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_1f0 = pUVar18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    FWeakObjectPtr::operator=(&local_c0.UserWidget.WeakPtr,(FObjectPtr)&local_1f0);
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_160,L"MVVMView",L"SetViewModelInvalidValueType",
                         L"The new viewmodel is not of the expected type.");
    UE::MVVM::FMessageLog::Message(&local_c0,&local_170,Error,pFVar14);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
    if (1 < (byte)LogMVVM._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_140,(UObject *)0x0,None);
      local_1e8 = this_00->PropertyName;
      ::FName::ToString(&local_1e8,&local_150);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMVVM);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_c0);
    bVar10 = false;
  }
LAB_14a75ed53:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return bVar10;
}

// SetViewModel @ 14a75eda0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UMVVMView::SetViewModel
          (UMVVMView *this,FName param_1,TScriptInterface<INotifyFieldValueChanged> *param_2)

{
  FMVVMViewClass_BindingKey FVar1;
  UMVVMViewClass *pUVar2;
  UClass *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FText *pFVar10;
  UUserWidget *pUVar11;
  ForAnyElementType FVar12;
  UClass *pUVar13;
  FMVVMViewClass_Source *pFVar14;
  FProperty *pFVar15;
  UFunction *pUVar16;
  FMVVMViewClass_Binding *pFVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FMVVMViewClass_SourceKey FVar20;
  UObject *pUVar21;
  FName *pFVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  FName *pFVar25;
  longlong local_res20;
  TObjectPtr<UMVVMViewClass_const_>_u_0 local_180;
  longlong local_178;
  UObject *local_170;
  UObject *local_168;
  UUserWidget *local_160;
  FMVVMViewClass_Source *local_158;
  UObject *local_150 [2];
  TSharedRef<FTokenizedMessage,1> local_140;
  FText local_130;
  TSharedRef<FTokenizedMessage,1> local_120;
  FText local_110;
  TSharedRef<FTokenizedMessage,1> local_100;
  FText local_f0;
  FMessageLog local_e0;
  FMessageLog local_a8;
  FMessageLog local_70;
  
  if (param_1 == (FName)0x0) {
    pUVar21 = (UObject *)0x0;
    if ((this->_padding_ & 0x10) == 0) {
      pUVar21 = (UObject *)this->_padding_;
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    FMessageLog::FMessageLog((FMessageLog *)&local_e0,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar21);
    }
    local_e0.UserWidget.WeakPtr.ObjectIndex = 0;
    local_e0.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_170 = pUVar21;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar21);
    }
    FWeakObjectPtr::operator=(&local_e0.UserWidget.WeakPtr,(FObjectPtr)&local_170);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_130,L"MVVMView",L"SetViewModelInvalidName",
                         L"The viewmodel name is empty.");
    UE::MVVM::FMessageLog::Message(&local_e0,&local_140,Error,pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_140.SharedReferenceCount.ReferenceController);
    if (local_130.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_e0);
    return false;
  }
  pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  if (pUVar2 == (UMVVMViewClass *)0x0) {
    pUVar21 = (UObject *)0x0;
    if ((this->_padding_ & 0x10) == 0) {
      pUVar21 = (UObject *)this->_padding_;
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    FMessageLog::FMessageLog((FMessageLog *)&local_a8,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar21);
    }
    local_a8.UserWidget.WeakPtr.ObjectIndex = 0;
    local_a8.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_168 = pUVar21;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar21);
    }
    FWeakObjectPtr::operator=(&local_a8.UserWidget.WeakPtr,(FObjectPtr)&local_168);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_110,L"MVVMView",L"SetViewModelInvalidClass",
                         L"The view is not constructed.");
    UE::MVVM::FMessageLog::Message(&local_a8,&local_120,Error,pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_120.SharedReferenceCount.ReferenceController);
    if (local_110.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_a8);
    return false;
  }
  pFVar24 = (pUVar2->Sources).AllocatorInstance.Data;
  iVar9 = (pUVar2->Sources).ArrayNum;
  if ((iVar9 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  for (pFVar18 = pFVar24; pFVar18 != pFVar24 + (longlong)iVar9 * 0x68; pFVar18 = pFVar18 + 0x68) {
    if (*(FName *)(pFVar18 + 0x24) == param_1) {
      FVar20.Index = (int)(((longlong)pFVar18 - (longlong)pFVar24) / 0x68);
      goto LAB_14a75f038;
    }
  }
  FVar20.Index = -1;
LAB_14a75f038:
  if (FVar20.Index == -1) {
    pUVar11 = UUserWidgetExtension::GetUserWidget((UUserWidgetExtension *)this);
    FMessageLog::FMessageLog((FMessageLog *)&local_70,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    local_70.UserWidget.WeakPtr.ObjectIndex = 0;
    local_70.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_160 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UUserWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    FWeakObjectPtr::operator=(&local_70.UserWidget.WeakPtr,(FObjectPtr)&local_160);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_f0,L"MVVMView",L"SetViewModelViewModelNameNotFound",
                         L"The viewmodel name could not be found.");
    UE::MVVM::FMessageLog::Message(&local_70,&local_100,Error,pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_100.SharedReferenceCount.ReferenceController);
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_70);
    bVar5 = false;
  }
  else {
    local_150[0] = *(UObject **)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_150[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_150[0]);
    }
    local_150[1] = *(UObject **)&param_2->field_0x8;
    bVar5 = SetSourceInternal(this,FVar20,(TScriptInterface<INotifyFieldValueChanged> *)local_150,
                              false);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`UMVVMView::SetViewModel'::__l2::_dynamic_atexit_destructor_for__sViewClasses__);
      _Init_thread_footer(&::_TSS0);
    }
    if (bVar5) {
      local_180 = (TObjectPtr<UMVVMViewClass_const_>_u_0)
                  (this->GeneratedViewClass).field0_0x0.DebugPtr;
      for (FVar12.Data = sViewClasses.AllocatorInstance.Data;
          FVar12.Data != sViewClasses.AllocatorInstance.Data + (longlong)sViewClasses.ArrayNum * 8;
          FVar12.Data = FVar12.Data + 8) {
        if (*(UMVVMViewClass **)FVar12.Data == local_180.DebugPtr) {
          if ((int)((longlong)FVar12.Data - (longlong)sViewClasses.AllocatorInstance.Data >> 3) !=
              -1) {
            return true;
          }
          break;
        }
      }
      if (((sViewClasses.AllocatorInstance.Data <= &local_180) &&
          (&local_180 <
           (TObjectPtr<UMVVMViewClass_const_>_u_0 *)
           (sViewClasses.AllocatorInstance.Data + (longlong)sViewClasses.ArrayMax * 8))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (sViewClasses.ArrayNum == sViewClasses.ArrayMax) {
        sViewClasses.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&sViewClasses.AllocatorInstance,&sViewClasses.ArrayMax);
      }
      uVar23 = 0;
      lVar19 = (longlong)sViewClasses.ArrayNum;
      sViewClasses.ArrayNum = sViewClasses.ArrayNum + 1;
      ((TObjectPtr<UMVVMViewClass_const_>_u_0 *)(sViewClasses.AllocatorInstance.Data + lVar19 * 8))
      ->DebugPtr = (UMVVMViewClass *)local_180;
      if (0 < (this->Sources).ArrayNum) {
        local_178 = 0;
        local_res20 = 0;
        do {
          lVar19 = local_178;
          if (local_res20 != FVar20.Index) {
            uVar8 = 0;
            if ((int)uVar23 < (this->Sources).ArrayNum) {
              uVar8 = ~uVar23 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            pFVar24 = (this->Sources).AllocatorInstance.Data + lVar19;
            if (*(longlong *)pFVar24 != 0) {
              this_00 = *(UClass **)(*(longlong *)pFVar24 + 0x10);
              pUVar13 = UMVVMViewModelBase::StaticClass();
              if (pUVar13 != (UClass *)0x0) {
                iVar9 = (int)pUVar13->_padding_;
                if (((int)this_00->_padding_ < iVar9) ||
                   ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar9 * 8) !=
                    &pUVar13->_padding_)) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                if (bVar7) goto LAB_14a75f465;
              }
              pFVar14 = UMVVMViewClass::GetSource
                                  ((this->GeneratedViewClass).field0_0x0.DebugPtr,
                                   (FMVVMViewClass_SourceKey)*(int *)(pFVar24 + 8));
              lVar3 = *(longlong *)pFVar24;
              if ((lVar3 != 0) !=
                  ((this->ValidSources >> ((ulonglong)*(uint *)(pFVar24 + 8) & 0x3f) & 1) != 0)) {
                local_158 = pFVar14;
                `UMVVMView::SetViewModel'::__l16::<lambda_2>::operator()(&local_158);
              }
              lVar19 = local_178;
              if (lVar3 != 0) {
                pFVar22 = (FName *)(pFVar14->Bindings).AllocatorInstance.Data;
                iVar9 = (pFVar14->Bindings).ArrayNum;
                if ((iVar9 < 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xeb,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                pFVar25 = pFVar22 + (longlong)iVar9 * 2;
                lVar19 = local_178;
                for (; pFVar22 != pFVar25; pFVar22 = pFVar22 + 2) {
                  local_178 = lVar19;
                  pFVar15 = UStruct::FindPropertyByName((UStruct *)this_00,*pFVar22);
                  pUVar16 = UClass::FindFunctionByName(this_00,*pFVar22,IncludeSuper);
                  if ((pFVar15 != (FProperty *)0x0) || (pUVar16 != (UFunction *)0x0)) {
                    FVar1.Index = pFVar22[1].ComparisonIndex.Value;
                    pFVar17 = UMVVMViewClass::GetBinding
                                        ((this->GeneratedViewClass).field0_0x0.DebugPtr,FVar1);
                    if (pFVar17->bSyncWhenSetViewModel == true) {
                      ExecuteBindingImmediately(this,pFVar17,FVar1);
                    }
                  }
                  lVar19 = local_178;
                }
              }
            }
          }
LAB_14a75f465:
          local_res20 = local_res20 + 1;
          local_178 = lVar19 + 0x18;
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < (this->Sources).ArrayNum);
      }
      if ((sViewClasses.ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar9 = (sViewClasses.ArrayNum - (sViewClasses.ArrayNum + -1)) + -1;
      if (iVar9 != 0) {
        memmove(sViewClasses.AllocatorInstance.Data + (longlong)(sViewClasses.ArrayNum + -1) * 8,
                sViewClasses.AllocatorInstance.Data + (longlong)(sViewClasses.ArrayNum + -1) * 8 + 8
                ,(longlong)iVar9 << 3);
      }
      sViewClasses.ArrayNum = sViewClasses.ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&sViewClasses.AllocatorInstance,sViewClasses.ArrayNum,&sViewClasses.ArrayMax);
    }
  }
  return bVar5;
}

// SetViewModelByClass @ 14a75f740

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UMVVMView::SetViewModelByClass(UMVVMView *this,TScriptInterface<INotifyFieldValueChanged> *param_1)

{
  int iVar1;
  UMVVMViewClass *pUVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FText *pFVar8;
  FScriptContainerElement *pFVar9;
  UClass *pUVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  FMessageLog *this_00;
  FScriptContainerElement *pFVar13;
  UObject *pUVar14;
  FMVVMViewClass_SourceKey FVar15;
  UObject *pUVar16;
  UObject *local_res18;
  UObject *local_res20;
  UObject *local_1f0;
  FName local_1e8;
  UObject *local_1e0;
  UObject *local_1d8 [2];
  TSharedRef<FTokenizedMessage,1> local_1c8;
  FText local_1b8;
  TSharedRef<FTokenizedMessage,1> local_1a8;
  FText local_198;
  TSharedRef<FTokenizedMessage,1> local_188;
  FText local_178;
  FText local_168;
  TSharedRef<FTokenizedMessage,1> local_158;
  FText local_148;
  FMessageLog local_138;
  FMessageLog local_100;
  FMessageLog local_c8;
  FMessageLog local_90;
  FText local_58;
  FTextFormat local_48;
  
  pUVar14 = (UObject *)0x0;
  if (*(longlong *)param_1 == 0) {
    if ((this->_padding_ & 0x10) == 0) {
      pUVar14 = (UObject *)this->_padding_;
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    FMessageLog::FMessageLog((FMessageLog *)&local_138,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    local_138.UserWidget.WeakPtr.ObjectIndex = 0;
    local_138.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_res18 = pUVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    FWeakObjectPtr::operator=(&local_138.UserWidget.WeakPtr,(FObjectPtr)&local_res18);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_1b8,L"MVVMView",L"SetViewModelInvalidObject",
                        L"The new viewmodel is null.");
    UE::MVVM::FMessageLog::Message(&local_138,&local_1c8,Error,pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.SharedReferenceCount.ReferenceController);
    if (local_1b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_138);
    return false;
  }
  pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  if (pUVar2 == (UMVVMViewClass *)0x0) {
    if ((this->_padding_ & 0x10) == 0) {
      pUVar14 = (UObject *)this->_padding_;
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    FMessageLog::FMessageLog((FMessageLog *)&local_100,&UE::MVVM::FMessageLog::LogName);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    local_100.UserWidget.WeakPtr.ObjectIndex = 0;
    local_100.UserWidget.WeakPtr.ObjectSerialNumber = 0;
    local_res20 = pUVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    FWeakObjectPtr::operator=(&local_100.UserWidget.WeakPtr,(FObjectPtr)&local_res20);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_198,L"MVVMView",L"SetViewModelInvalidGeneratedViewClass",
                        L"The view is not initialized.");
    UE::MVVM::FMessageLog::Message(&local_100,&local_1a8,Error,pFVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
    if (local_198.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog((FMessageLog *)&local_100);
    return false;
  }
  pFVar13 = (pUVar2->Sources).AllocatorInstance.Data;
  iVar1 = (pUVar2->Sources).ArrayNum;
  FVar15.Index = -1;
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar9 = pFVar13 + (longlong)iVar1 * 0x68;
  pUVar16 = pUVar14;
  if (pFVar13 != pFVar9) {
    do {
      lVar3 = *(longlong *)pFVar13;
      lVar4 = *(longlong *)(*(longlong *)param_1 + 0x10);
      if ((lVar3 != 0) &&
         (pUVar10 = Z_Construct_UClass_UObject_NoRegister(), pUVar10 != (UClass *)0x0)) {
        iVar1 = (int)pUVar10->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar10->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((bVar6) && (lVar3 = *(longlong *)pFVar13, lVar3 != 0)) {
          if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
              lVar3 + 0x30)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar6) && (bVar6 = FVar15.Index != -1, FVar15.Index = (int)pUVar16, bVar6)) {
            if ((this->_padding_ & 0x10) == 0) {
              pUVar14 = (UObject *)this->_padding_;
            }
            else {
              bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<1637797074370035733>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                                 ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
            }
            FMessageLog::FMessageLog((FMessageLog *)&local_c8,&UE::MVVM::FMessageLog::LogName);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar14);
            }
            local_c8.UserWidget.WeakPtr.ObjectIndex = 0;
            local_c8.UserWidget.WeakPtr.ObjectSerialNumber = 0;
            local_1f0 = pUVar14;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar14);
            }
            FWeakObjectPtr::operator=(&local_c8.UserWidget.WeakPtr,(FObjectPtr)&local_1f0);
            local_1e8 = *(FName *)(*(longlong *)(*(longlong *)param_1 + 0x10) + 0x18);
            pFVar8 = FText::FromName(&local_58,&local_1e8);
            pFVar11 = FText::AsLocalizable_Advanced_LocText
                                (&local_168,L"MVVMView",L"SetViewModelViewModelNotUnique",
                                 L"More than one viewmodel match the type of the passed instance. Make sure there exists only one viewmodel of type {0} in the widget blueprint, or try SetViewModel by name."
                                );
            pFVar12 = FTextFormat::FTextFormat(&local_48,pFVar11,Default);
            pFVar8 = FText::Format<FText>(&local_178,pFVar12,pFVar8);
            UE::MVVM::FMessageLog::Message(&local_c8,&local_188,Error,pFVar8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_188.SharedReferenceCount.ReferenceController);
            if (local_178.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
            }
            if (local_168.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
            }
            this_00 = &local_c8;
            goto LAB_14a75fd08;
          }
        }
      }
      pFVar13 = pFVar13 + 0x68;
      pUVar16 = (UObject *)(ulonglong)((int)pUVar16 + 1);
    } while (pFVar13 != pFVar9);
    if (FVar15.Index != -1) {
      local_1d8[0] = *(UObject **)param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d8[0] != (UObject *)0x0))
      {
        UE::GC::MarkAsReachable(local_1d8[0]);
      }
      local_1d8[1] = *(UObject **)&param_1->field_0x8;
      bVar6 = SetSourceInternal(this,FVar15,(TScriptInterface<INotifyFieldValueChanged> *)local_1d8,
                                false);
      return bVar6;
    }
  }
  if ((this->_padding_ & 0x10) == 0) {
    pUVar14 = (UObject *)this->_padding_;
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  FMessageLog::FMessageLog((FMessageLog *)&local_90,&UE::MVVM::FMessageLog::LogName);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  local_90.UserWidget.WeakPtr.ObjectIndex = 0;
  local_90.UserWidget.WeakPtr.ObjectSerialNumber = 0;
  local_1e0 = pUVar14;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  FWeakObjectPtr::operator=(&local_90.UserWidget.WeakPtr,(FObjectPtr)&local_1e0);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_148,L"MVVMView",L"SetViewModelViewModelNotFound",
                      L"A created viewmodel matching the class of the passed instance could not be found."
                     );
  UE::MVVM::FMessageLog::Message(&local_90,&local_158,Error,pFVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  if (local_148.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
  }
  this_00 = &local_90;
LAB_14a75fd08:
  FMessageLog::~FMessageLog((FMessageLog *)this_00);
  return false;
}

// StaticRegisterNativesUMVVMView @ 14a7601d0

void __cdecl UMVVMView::StaticRegisterNativesUMVVMView(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UMVVMView_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnbindEvent @ 14a766610

void __thiscall UMVVMView::UnbindEvent(UMVVMView *this,int param_1)

{
  TArray<UMVVMView::FBoundEvent,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FWeakObjectPtr *this_00;
  UObject *pUVar10;
  FMVVMViewClass_Event *pFVar11;
  int iVar12;
  UObject *pUVar13;
  uint uVar14;
  uint uVar15;
  UObject *local_res18;
  FProperty *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FWeakObjectPtr local_60;
  FName local_58;
  FDestructionSentinel local_50;
  
  pUVar13 = (UObject *)0x0;
  pTVar1 = &this->BoundEvents;
  uVar15 = ~param_1;
  uVar14 = uVar15 >> 0x1f;
  uVar9 = 0;
  if (param_1 < (this->BoundEvents).ArrayNum) {
    uVar9 = uVar14;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar3 = (longlong)param_1 * 0x14;
  this_00 = (FWeakObjectPtr *)((pTVar1->AllocatorInstance).Data + lVar3);
  pUVar10 = FWeakObjectPtr::Get(this_00);
  if (((pUVar10 == (UObject *)0x0) ||
      (local_res20 = UStruct::FindPropertyByName
                               (*(UStruct **)&pUVar10->field_0x10,*(FName *)(this_00 + 1)),
      local_res20 == (FProperty *)0x0)) ||
     ((*(uint *)(local_res20->_padding_ + 0x18) >> 0x19 & 1) == 0)) {
    uVar9 = 0;
    if (param_1 < (this->BoundEvents).ArrayNum) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar4 = (this->BoundEvents).ArrayNum;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    iVar12 = iVar4 + uVar15;
    if (1 < iVar12) {
      iVar12 = 1;
    }
    if (iVar12 != 0) {
      memmove(pFVar6 + lVar3,pFVar6 + (longlong)(iVar4 - iVar12) * 0x14,(longlong)iVar12 * 0x14);
    }
    piVar2 = &(this->BoundEvents).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,&pTVar1->AllocatorInstance,(this->BoundEvents).ArrayNum,
               &(this->BoundEvents).ArrayMax);
    return;
  }
  if ((this->_padding_ & 0x10) == 0) {
    pUVar13 = (UObject *)this->_padding_;
    if (pUVar13 != (UObject *)0x0) goto LAB_14a766754;
  }
  else {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("UserWidget",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                     ,0x529,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14a766754:
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  pFVar11 = UMVVMViewClass::GetEvent
                      ((this->GeneratedViewClass).field0_0x0.DebugPtr,
                       (FMVVMViewClass_EventKey)this_00[2].ObjectIndex);
  FVar5 = pFVar11->UserWidgetFunctionName;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_res18 = pUVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar13);
  }
  FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_res18);
  local_58 = FVar5;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  (**(code **)(local_res20->_padding_ + 0x1e8))(local_res20,&local_68,pUVar10,0);
  uVar9 = 0;
  if (param_1 < (this->BoundEvents).ArrayNum) {
    uVar9 = uVar14;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar4 = (this->BoundEvents).ArrayNum;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  iVar12 = iVar4 + uVar15;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    memmove(pFVar6 + lVar3,pFVar6 + (longlong)(iVar4 - iVar12) * 0x14,(longlong)iVar12 * 0x14);
  }
  piVar2 = &(this->BoundEvents).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,&pTVar1->AllocatorInstance,(this->BoundEvents).ArrayNum,
             &(this->BoundEvents).ArrayMax);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// UninitializeBindings @ 14a766e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMVVMView::UninitializeBindings(UMVVMView *this)

{
  int iVar1;
  UMVVMViewClass *pUVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_UninitializeBindings> FVar15;
  UMVVMBindingSubsystem *this_00;
  longlong lVar16;
  FName FVar17;
  uint uVar18;
  FMVVMViewClass_SourceKey FVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 local_res10 [8];
  FColor_u_0 local_res18 [2];
  FWeakObjectPtr local_res20;
  FName local_98;
  FName local_90;
  FScriptContainerElement *local_88;
  code *local_80;
  UMVVMView *local_78;
  FWeakObjectPtr local_70;
  FName local_68;
  FName local_60;
  
  if (this->bBindingsInitialized == false) {
    return;
  }
  FVar15 = StatPtr_STAT_UMG_Viewmodel_UninitializeBindings;
  if (StatPtr_STAT_UMG_Viewmodel_UninitializeBindings ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_UninitializeBindings>)0x0) {
    pFVar14 = ::FName::FName(&local_68,"STAT_UMG_Viewmodel_UninitializeBindings");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_UninitializeBindings>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_UMG_Viewmodel_UninitializeBindings,*pFVar14,
                        L"UninitializeBindings","STATGROUP_UMG_Viewmodel","STATCAT_Advanced",
                        L"UMG Viewmodel",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar15;
  bVar12 = false;
  bVar9 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar11 = false;
  bVar7 = false;
  if ((FVar17.ComparisonIndex.Value.Value != 0) ||
     (bVar6 = bVar12, bVar8 = bVar9, FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar12 = false;
      bVar9 = true;
      bVar11 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_98.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                   ,0x196);
        bVar12 = true;
        bVar9 = true;
        bVar11 = true;
        bVar7 = true;
      }
    }
    bVar6 = bVar12;
    bVar8 = bVar9;
    if (FThreadStats::bPrimaryEnable != false) {
      local_90 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar11 = true;
      bVar7 = true;
      goto LAB_14a767017;
    }
  }
  bVar9 = bVar7;
  bVar12 = bVar11;
  bVar11 = false;
  bVar7 = false;
  local_90 = local_60;
  FVar17 = local_60;
LAB_14a767017:
  pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  this->bBindingsInitialized = false;
  local_88 = (pUVar2->ViewClassExtensions).AllocatorInstance.Data;
  iVar1 = (pUVar2->ViewClassExtensions).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((iVar1 != (this->Extensions).ArrayNum) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClassExtensions.Num() == Extensions.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                          ,0x19b,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = local_88;
  uVar18 = 0;
  if (0 < iVar1) {
    lVar20 = 0;
    do {
      local_88 = *(FScriptContainerElement **)(pFVar4 + lVar20);
      local_80 = *(code **)(*(longlong *)local_88 + 0x2d8);
      uVar13 = 0;
      if ((int)uVar18 < (this->Extensions).ArrayNum) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar3 = *(undefined8 *)((this->Extensions).AllocatorInstance.Data + lVar20);
      if ((this->_padding_ & 0x10) == 0) {
        lVar16 = this->_padding_;
      }
      else {
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1637797074370035733>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                            ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar16 = 0;
      }
      (*local_80)(local_88,lVar16,this,uVar3);
      uVar18 = uVar18 + 1;
      lVar20 = lVar20 + 8;
      FVar17 = local_90;
      bVar6 = bVar12;
      bVar11 = bVar7;
      bVar8 = bVar9;
    } while ((int)uVar18 < iVar1);
  }
  pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  iVar1 = (pUVar2->Sources).ArrayNum;
  pFVar4 = (pUVar2->Sources).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar21 = 0;
  if (0 < iVar1) {
    do {
      FVar19.Index = (int)uVar21;
      uVar18 = 0;
      if (FVar19.Index < (this->Sources).ArrayNum) {
        uVar18 = (uint)~FVar19.Index >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UninitializeSourceBindings
                (this,FVar19,(FMVVMViewClass_Source *)(pFVar4 + uVar21 * 0x68),
                 (FMVVMView_Source *)((this->Sources).AllocatorInstance.Data + uVar21 * 0x18));
      uVar21 = (ulonglong)(FVar19.Index + 1U);
    } while ((int)(FVar19.Index + 1U) < iVar1);
  }
  this_00 = UEngine::GetEngineSubsystem<UMVVMBindingSubsystem>(GEngine);
  if (this_00 != (UMVVMBindingSubsystem *)0x0) {
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      `UMVVMBindingSubsystem::RemoveDelayedBindings'::__l2::<lambda_1>::operator()(local_res10);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_78 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_78);
    local_70 = local_res20;
    TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
    ::Remove((TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
              *)&this_00->DelayedBindings,(TObjectKey<UMVVMView_const_> *)&local_70);
    if ((this->NumberOfSourceWithTickBinding == '\0') && (this->bHasDefaultTickBinding != false)) {
      UMVVMBindingSubsystem::RemoveViewWithTickBinding(this_00,this);
    }
  }
  this->bHasDefaultTickBinding = false;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// UninitializeEvents @ 14a767360

void __thiscall UMVVMView::UninitializeEvents(UMVVMView *this)

{
  int iVar1;
  UMVVMViewClass *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  if (this->bEventsInitialized != false) {
    if (((this->GeneratedViewClass).field0_0x0.DebugPtr == (UMVVMViewClass *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("GeneratedViewClass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                           ,0x4bb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
    this->bEventsInitialized = false;
    pFVar3 = (pUVar2->ViewClassExtensions).AllocatorInstance.Data;
    iVar1 = (pUVar2->ViewClassExtensions).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((iVar1 != (this->Extensions).ArrayNum) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClassExtensions.Num() == Extensions.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                           ,0x4c0,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar10 = 0;
    if (0 < iVar1) {
      lVar11 = 0;
      do {
        plVar4 = *(longlong **)(pFVar3 + lVar11);
        pcVar6 = *(code **)(*plVar4 + 0x2d0);
        uVar8 = 0;
        if ((int)uVar10 < (this->Extensions).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar5 = *(undefined8 *)((this->Extensions).AllocatorInstance.Data + lVar11);
        if ((this->_padding_ & 0x10) == 0) {
          lVar9 = this->_padding_;
        }
        else {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<1637797074370035733>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                             ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar9 = 0;
        }
        (*pcVar6)(plVar4,lVar9,this,uVar5);
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar10 < iVar1);
    }
    iVar1 = (this->BoundEvents).ArrayNum;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      UnbindEvent(this,iVar1);
    }
  }
  return;
}

// UninitializeSource @ 14a767560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMVVMView::UninitializeSource(UMVVMView *this,FMVVMView_SourceKey param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  UMVVMViewModelContextResolver *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FMVVMViewClass_Source *pFVar7;
  UUserWidget *pUVar8;
  FObjectPropertyBase *this_00;
  FName FVar9;
  undefined1 local_res10 [8];
  
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  uVar6 = 0;
  if (param_1.Index < (this->Sources).ArrayNum) {
    uVar6 = (uint)~param_1.Index >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->Sources).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)param_1.Index * 0x18;
  pFVar7 = UMVVMViewClass::GetSource
                     ((this->GeneratedViewClass).field0_0x0.DebugPtr,
                      (FMVVMViewClass_SourceKey)
                      *(int *)(pFVar2 + (longlong)param_1.Index * 0x18 + 8));
  if (pFVar1[0x10] == (FScriptContainerElement)0x0) {
    return;
  }
  pFVar1[0x10] = (FScriptContainerElement)0x0;
  if (pFVar1[0x12] == (FScriptContainerElement)0x0) {
    pUVar3 = (pFVar7->Resolver).field0_0x0.DebugPtr;
    if (pUVar3 != (UMVVMViewModelContextResolver *)0x0) {
      (**(code **)(*(longlong *)pUVar3 + 0x2b8))(pUVar3,*(undefined8 *)pFVar1,this);
    }
    *(undefined8 *)pFVar1 = 0;
    pFVar1[0x10] = (FScriptContainerElement)0x0;
    if (pFVar1[0x13] != (FScriptContainerElement)0x0) {
      pUVar8 = UUserWidgetExtension::GetUserWidget((UUserWidgetExtension *)this);
      if ((pFVar7->Flags & 2) != 0) {
        FVar9 = pFVar7->PropertyName;
      }
      this_00 = FindFProperty<FObjectPropertyBase>((UStruct *)pUVar8->_padding_,FVar9,Default);
      if ((this_00 != (FObjectPropertyBase *)0x0) ||
         (bVar5 = `UMVVMView::UninitializeSource'::__l12::<lambda_1>::operator()(local_res10), bVar5
         )) {
        FObjectPropertyBase::SetObjectPropertyValue_InContainer(this_00,pUVar8,(UObject *)0x0,0);
      }
      pFVar1[0x13] = (FScriptContainerElement)0x0;
    }
    this->ValidSources = this->ValidSources & ~(1L << ((longlong)*(int *)(pFVar1 + 8) & 0x3fU));
    UE::MVVM::FDebugging::BroadcastViewSourceValueChanged
              (this,(FMVVMViewClass_SourceKey)*(int *)(pFVar1 + 8),param_1);
    return;
  }
  return;
}

// UninitializeSourceBindings @ 14a7676b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UMVVMView::UninitializeSourceBindings
          (UMVVMView *this,FMVVMViewClass_SourceKey param_1,FMVVMViewClass_Source *param_2,
          FMVVMView_Source *param_3)

{
  uchar *puVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  UUserWidget *pUVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  UMVVMBindingSubsystem *this_00;
  longlong *plVar9;
  UObject *local_res20;
  undefined1 local_c8 [16];
  UUserWidget *local_b8;
  FName local_b0;
  TSharedRef<FTokenizedMessage,1> local_a8;
  FText local_98;
  FText local_88;
  FMessageLog local_78;
  FText local_40;
  FTextFormat local_30;
  
  if ((param_3->bBindingsInitialized == false) || (param_3->RegisteredCount < 1)) {
    param_3->bBindingsInitialized = false;
  }
  else {
    pUVar2 = (param_3->Source).field0_0x0.DebugPtr;
    if (pUVar2 == (UObject *)0x0) {
      pUVar5 = UUserWidgetExtension::GetUserWidget((UUserWidgetExtension *)this);
      FMessageLog::FMessageLog((FMessageLog *)&local_78,&UE::MVVM::FMessageLog::LogName);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      local_78.UserWidget.WeakPtr.ObjectIndex = 0;
      local_78.UserWidget.WeakPtr.ObjectSerialNumber = 0;
      local_b8 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UUserWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      FWeakObjectPtr::operator=(&local_78.UserWidget.WeakPtr,(FObjectPtr)&local_b8);
      local_b0 = param_2->PropertyName;
      pFVar6 = FText::FromName(&local_40,&local_b0);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_88,L"MVVMView",L"UninitializeBindingFailInvalidSource",
                          L"The source \'{0}\' is invalid and could not uninitialize the bindings.")
      ;
      pFVar8 = FTextFormat::FTextFormat(&local_30,pFVar7,Default);
      pFVar6 = FText::Format<FText>(&local_98,pFVar8,pFVar6);
      UE::MVVM::FMessageLog::Message(&local_78,&local_a8,Error,pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog((FMessageLog *)&local_78);
    }
    else {
      local_res20 = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      TScriptInterface<INotifyFieldValueChanged>::
      TScriptInterface<INotifyFieldValueChanged><UObject>
                ((TScriptInterface<INotifyFieldValueChanged> *)local_c8,
                 (TObjectPtr<UObject>)&local_res20);
      if ((local_c8._0_8_ == 0) || ((longlong *)local_c8._8_8_ == (longlong *)0x0)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SourceAsInterface.GetInterface()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                           ,0x21f,L"It was added as a INotifyFieldValueChanged. It should still be."
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar9 = (longlong *)0x0;
      if (local_c8._0_8_ != 0) {
        plVar9 = (longlong *)local_c8._8_8_;
      }
      (**(code **)(*plVar9 + 0x28))(plVar9,this);
      param_3->RegisteredCount = 0;
    }
    if ((param_2->Flags & 0x100) != 0) {
      puVar1 = &this->NumberOfSourceWithTickBinding;
      *puVar1 = *puVar1 + 0xff;
      if ((*puVar1 == '\0') && (this->bHasDefaultTickBinding == false)) {
        this_00 = UEngine::GetEngineSubsystem<UMVVMBindingSubsystem>(GEngine);
        if (this_00 != (UMVVMBindingSubsystem *)0x0) {
          UMVVMBindingSubsystem::RemoveViewWithTickBinding(this_00,this);
        }
      }
    }
    param_3->bBindingsInitialized = false;
  }
  return;
}

// UninitializeSources @ 14a7678e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMVVMView::UninitializeSources(UMVVMView *this)

{
  int iVar1;
  UMVVMViewClass *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  undefined8 uVar5;
  UMVVMViewModelCollectionObject *pUVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_UninitializeSources> FVar16;
  longlong lVar17;
  UMVVMGameSubsystem *pUVar18;
  longlong *plVar19;
  FName FVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  
  if (this->bSourcesInitialized == false) {
    return;
  }
  plVar23 = (longlong *)0x0;
  FVar16 = StatPtr_STAT_UMG_Viewmodel_UninitializeSources;
  if (StatPtr_STAT_UMG_Viewmodel_UninitializeSources ==
      (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_UninitializeSources>)0x0) {
    pFVar15 = ::FName::FName(&local_68,"STAT_UMG_Viewmodel_UninitializeSources");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_UMG_Viewmodel_UninitializeSources>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UMG_Viewmodel_UninitializeSources
                        ,*pFVar15,L"UninitializeSources","STATGROUP_UMG_Viewmodel",
                        "STATCAT_Advanced",L"UMG Viewmodel",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar20 = *(FName *)FVar16;
  bVar14 = false;
  bVar11 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar13 = false;
  bVar9 = false;
  if ((FVar20.ComparisonIndex.Value.Value != 0) ||
     (bVar8 = bVar14, bVar10 = bVar11, FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar14 = false;
      bVar11 = true;
      bVar13 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_res18.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                   ,0xe5);
        bVar14 = true;
        bVar11 = true;
        bVar13 = true;
        bVar9 = true;
      }
    }
    bVar8 = bVar14;
    bVar10 = bVar11;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar20;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar13 = true;
      bVar9 = true;
      goto LAB_14a767a79;
    }
  }
  bVar11 = bVar9;
  bVar14 = bVar13;
  bVar13 = false;
  bVar9 = false;
  local_res20 = local_60;
  FVar20 = local_60;
LAB_14a767a79:
  if (this->bBindingsInitialized != false) {
    UninitializeBindings(this);
  }
  pUVar2 = (this->GeneratedViewClass).field0_0x0.DebugPtr;
  pFVar3 = (pUVar2->ViewClassExtensions).AllocatorInstance.Data;
  iVar1 = (pUVar2->ViewClassExtensions).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((iVar1 != (this->Extensions).ArrayNum) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClassExtensions.Num() == Extensions.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                          ,0xed,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar19 = plVar23;
  plVar24 = plVar23;
  if (0 < iVar1) {
    do {
      plVar4 = *(longlong **)(pFVar3 + (longlong)plVar24);
      uVar21 = (uint)plVar19;
      pcVar7 = *(code **)(*plVar4 + 0x2e0);
      uVar22 = 0;
      if ((int)uVar21 < (this->Extensions).ArrayNum) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar5 = *(undefined8 *)
               ((longlong)plVar24 + (longlong)(this->Extensions).AllocatorInstance.Data);
      if ((this->_padding_ & 0x10) == 0) {
        plVar19 = (longlong *)this->_padding_;
      }
      else {
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1637797074370035733>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                            ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        plVar19 = plVar23;
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      (*pcVar7)(plVar4,plVar19,this,uVar5);
      FVar20 = local_res20;
      plVar19 = (longlong *)(ulonglong)(uVar21 + 1);
      plVar24 = plVar24 + 1;
      bVar8 = bVar14;
      bVar13 = bVar9;
      bVar10 = bVar11;
    } while ((int)(uVar21 + 1) < iVar1);
  }
  if (((this->GeneratedViewClass).field0_0x0.DebugPtr)->bListenToViewModelCollectionChanged != false
     ) {
    if ((this->_padding_ & 0x10) == 0) {
      plVar19 = (longlong *)this->_padding_;
    }
    else {
      bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1637797074370035733>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                          ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      plVar19 = plVar23;
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar17 = (**(code **)(*plVar19 + 0x180))();
    if ((lVar17 != 0) && (*(UGameInstance **)(lVar17 + 0x230) != (UGameInstance *)0x0)) {
      pUVar18 = UGameInstance::GetSubsystem<UMVVMGameSubsystem>(*(UGameInstance **)(lVar17 + 0x230))
      ;
      pUVar6 = (pUVar18->ViewModelCollection).field0_0x0.DebugPtr;
      if (pUVar6 != (UMVVMViewModelCollectionObject *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &(pUVar6->ViewModelCollection).OnCollectionChangedDelegate,this);
      }
    }
  }
  iVar1 = (this->Sources).ArrayNum;
  this->bSourcesInitialized = false;
  if (0 < iVar1) {
    do {
      UninitializeSource(this,(FMVVMView_SourceKey)(int)plVar23);
      uVar22 = (int)plVar23 + 1;
      plVar23 = (longlong *)(ulonglong)uVar22;
    } while ((int)uVar22 < iVar1);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// execAreBindingsInitialized @ 14a7690b0

void __cdecl UMVVMView::execAreBindingsInitialized(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[2].field_0x1c;
  return;
}

// execAreEventsInitialized @ 14a7690e0

void __cdecl UMVVMView::execAreEventsInitialized(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[2].field_0x1d;
  return;
}

// execAreSourcesInitialized @ 14a769110

void __cdecl UMVVMView::execAreSourcesInitialized(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[2].field_0x1b;
  return;
}

// execAreSourcesValidForBinding @ 14a769140

void __cdecl
UMVVMView::execAreSourcesValidForBinding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = AreSourcesValidForBinding((UMVVMView *)param_1,local_res10[0]);
  *(bool *)param_3 = bVar2;
  return;
}

// execAreSourcesValidForEvent @ 14a7691e0

void __cdecl UMVVMView::execAreSourcesValidForEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = AreSourcesValidForEvent((UMVVMView *)param_1,local_res10[0]);
  *(bool *)param_3 = bVar2;
  return;
}

// execExecuteViewModelBindings @ 14a76b480

void __cdecl UMVVMView::execExecuteViewModelBindings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ExecuteViewModelBindings((UMVVMView *)param_1,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetViewModel @ 14a76b740

void __cdecl UMVVMView::execGetViewModel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TScriptInterface<INotifyFieldValueChanged> *pTVar2;
  FName local_res10;
  TScriptInterface<INotifyFieldValueChanged> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetViewModel((UMVVMView *)param_1,&local_18,local_res10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)pTVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)pTVar2);
  }
  *(undefined8 *)param_3 = *(undefined8 *)pTVar2;
  *(undefined8 *)((longlong)param_3 + 8) = *(undefined8 *)&pTVar2->field_0x8;
  return;
}

// execInitializeBindings @ 14a76b840

void __cdecl UMVVMView::execInitializeBindings(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  InitializeBindings((UMVVMView *)param_1);
  return;
}

// execInitializeEvents @ 14a76b860

void __cdecl UMVVMView::execInitializeEvents(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  InitializeEvents((UMVVMView *)param_1);
  return;
}

// execInitializeSources @ 14a76b880

void __cdecl UMVVMView::execInitializeSources(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  InitializeSources((UMVVMView *)param_1);
  return;
}

// execSetViewModel @ 14a76c9b0

void __cdecl UMVVMView::execSetViewModel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName local_res10;
  UObject *local_28;
  undefined8 uStack_20;
  UObject *local_18 [2];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28 = (UObject *)0x0;
  uStack_20 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18[0] = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_28);
  }
  local_18[1] = (UObject *)uStack_20;
  bVar2 = SetViewModel((UMVVMView *)param_1,local_res10,
                       (TScriptInterface<INotifyFieldValueChanged> *)local_18);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetViewModelByClass @ 14a76cd10

void __cdecl UMVVMView::execSetViewModelByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UObject *local_28;
  undefined8 uStack_20;
  UObject *local_18 [2];
  
  local_28 = (UObject *)0x0;
  uStack_20 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18[0] = local_28;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_28);
  }
  local_18[1] = (UObject *)uStack_20;
  bVar2 = SetViewModelByClass((UMVVMView *)param_1,
                              (TScriptInterface<INotifyFieldValueChanged> *)local_18);
  *(bool *)param_3 = bVar2;
  return;
}

// execUninitializeBindings @ 14a76cdd0

void __cdecl UMVVMView::execUninitializeBindings(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UninitializeBindings((UMVVMView *)param_1);
  return;
}

// execUninitializeEvents @ 14a76cdf0

void __cdecl UMVVMView::execUninitializeEvents(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UninitializeEvents((UMVVMView *)param_1);
  return;
}

// execUninitializeSources @ 14a76ce10

void __cdecl UMVVMView::execUninitializeSources(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UninitializeSources((UMVVMView *)param_1);
  return;
}

// operator() @ 1505539d0

bool __thiscall `UMVVMView::EvaluateSource'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3602267991179264658>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3602267991179264658>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553a10

bool __thiscall `UMVVMView::InitializeSourceBindings'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3602267991179264447>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x24);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3602267991179264447>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150553a85;
    }
  }
  bVar2 = false;
LAB_150553a85:
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

// operator() @ 150553d00

bool __thiscall `UMVVMView::SetSourceInternal'::__l38::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3602267991179265021>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x24);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3602267991179265021>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150553d75;
    }
  }
  bVar2 = false;
LAB_150553d75:
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

// operator() @ 150553e30

bool __thiscall `UMVVMView::InitializeSourceInternal'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<3602267991179264299>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3602267991179264299>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553e70

bool __thiscall `UMVVMView::UninitializeSource'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<3602267991179264331>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3602267991179264331>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553eb0

bool __thiscall `UMVVMView::ExecuteTickBindings'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3602267991179264826>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3602267991179264826>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553f30

bool __thiscall `UMVVMView::InitializeSourceBindings'::__l16::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3602267991179264458>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3602267991179264458>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553f70

bool __thiscall `UMVVMView::SetViewModel'::__l16::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3602267991179264903>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x24);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3602267991179264903>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150553fe5;
    }
  }
  bVar2 = false;
LAB_150553fe5:
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

// operator() @ 1505540a0

bool __thiscall `UMVVMView::ExecuteBindingInternal'::__l11::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<3602267991179264750>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3602267991179264750>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505540e0

bool __thiscall `UMVVMView::ExecuteDelayedBinding'::__l11::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<3602267991179264787>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3602267991179264787>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

