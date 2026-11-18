// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 14

// StaticClass @ 14a73aa10

UClass * __cdecl UMVVMViewClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewClass",
               &Z_Registration_Info_UClass_UMVVMViewClass.InnerSingleton,
               StaticRegisterNativesUMVVMViewClass,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMVVMViewClass>,InternalVTableHelperCtorCaller<UMVVMViewClass>,
               local_res8,UWidgetBlueprintGeneratedClassExtension::StaticClass,UObject::StaticClass)
    ;
  }
  return Z_Registration_Info_UClass_UMVVMViewClass.InnerSingleton;
}

// UMVVMViewClass @ 14a73fd50

UMVVMViewClass * __thiscall
UMVVMViewClass::UMVVMViewClass(UMVVMViewClass *this,FVTableHelper *param_1)

{
  UWidgetBlueprintGeneratedClassExtension::UWidgetBlueprintGeneratedClassExtension
            ((UWidgetBlueprintGeneratedClassExtension *)this,param_1);
  this->bInitializeSourcesOnConstruct = true;
  this->bInitializeBindingsOnConstruct = true;
  this->bInitializeEventsOnConstruct = true;
  this->bListenToViewModelCollectionChanged = false;
  this->_padding_ = (longlong)&___7UMVVMViewClass__6B_;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  (this->EvaluateSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EvaluateSources).ArrayNum = 0;
  (this->EvaluateSources).ArrayMax = 0;
  (this->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events).ArrayNum = 0;
  (this->Events).ArrayMax = 0;
  (this->Conditions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Conditions).ArrayNum = 0;
  (this->Conditions).ArrayMax = 0;
  (this->ViewClassExtensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewClassExtensions).ArrayNum = 0;
  (this->ViewClassExtensions).ArrayMax = 0;
  (this->BindingLibrary).LoadedProperties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingLibrary).LoadedProperties.ArrayNum = 0;
  (this->BindingLibrary).LoadedProperties.ArrayMax = 0;
  (this->BindingLibrary).LoadedFunctions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingLibrary).LoadedFunctions.ArrayNum = 0;
  (this->BindingLibrary).LoadedFunctions.ArrayMax = 0;
  (this->BindingLibrary).FieldPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingLibrary).FieldPaths.ArrayNum = 0;
  (this->BindingLibrary).FieldPaths.ArrayMax = 0;
  (this->BindingLibrary).CompiledFields.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingLibrary).CompiledFields.ArrayNum = 0;
  (this->BindingLibrary).CompiledFields.ArrayMax = 0;
  (this->BindingLibrary).CompiledFieldNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingLibrary).CompiledFieldNames.ArrayNum = 0;
  (this->BindingLibrary).CompiledFieldNames.ArrayMax = 0;
  this->ViewCounter = 0;
  this->bCreateViewWithoutBindings = false;
  return this;
}

// UMVVMViewClass @ 14a73fe10

UMVVMViewClass * __thiscall
UMVVMViewClass::UMVVMViewClass(UMVVMViewClass *this,FObjectInitializer *param_1)

{
  UWidgetBlueprintGeneratedClassExtension::UWidgetBlueprintGeneratedClassExtension
            ((UWidgetBlueprintGeneratedClassExtension *)this,param_1);
  this->bInitializeSourcesOnConstruct = true;
  this->bInitializeBindingsOnConstruct = true;
  this->bInitializeEventsOnConstruct = true;
  this->bListenToViewModelCollectionChanged = false;
  this->_padding_ = (longlong)&___7UMVVMViewClass__6B_;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  (this->EvaluateSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EvaluateSources).ArrayNum = 0;
  (this->EvaluateSources).ArrayMax = 0;
  (this->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Events).ArrayNum = 0;
  (this->Events).ArrayMax = 0;
  (this->Conditions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Conditions).ArrayNum = 0;
  (this->Conditions).ArrayMax = 0;
  (this->ViewClassExtensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewClassExtensions).ArrayNum = 0;
  (this->ViewClassExtensions).ArrayMax = 0;
  (this->BindingLibrary).LoadedProperties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingLibrary).LoadedProperties.ArrayNum = 0;
  (this->BindingLibrary).LoadedProperties.ArrayMax = 0;
  (this->BindingLibrary).LoadedFunctions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingLibrary).LoadedFunctions.ArrayNum = 0;
  (this->BindingLibrary).LoadedFunctions.ArrayMax = 0;
  (this->BindingLibrary).FieldPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingLibrary).FieldPaths.ArrayNum = 0;
  (this->BindingLibrary).FieldPaths.ArrayMax = 0;
  (this->BindingLibrary).CompiledFields.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingLibrary).CompiledFields.ArrayNum = 0;
  (this->BindingLibrary).CompiledFields.ArrayMax = 0;
  (this->BindingLibrary).CompiledFieldNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingLibrary).CompiledFieldNames.ArrayNum = 0;
  (this->BindingLibrary).CompiledFieldNames.ArrayMax = 0;
  this->ViewCounter = 0;
  this->bCreateViewWithoutBindings = false;
  return this;
}

// ~UMVVMViewClass @ 14a740810

void __thiscall UMVVMViewClass::~UMVVMViewClass(UMVVMViewClass *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMVVMViewClass__6B_;
  pFVar1 = (this->BindingLibrary).CompiledFieldNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BindingLibrary).CompiledFields.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BindingLibrary).FieldPaths.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BindingLibrary).LoadedFunctions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BindingLibrary).LoadedProperties.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ViewClassExtensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Conditions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Events).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EvaluateSources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMVVMViewClass_Source,int>
            ((FMVVMViewClass_Source *)(this->Sources).AllocatorInstance.Data,
             (this->Sources).ArrayNum);
  pFVar1 = (this->Sources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWidgetBlueprintGeneratedClassExtension::~UWidgetBlueprintGeneratedClassExtension
            ((UWidgetBlueprintGeneratedClassExtension *)this);
  return;
}

// Construct @ 14a745170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMVVMViewClass::Construct(UMVVMViewClass *this,UUserWidget *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  TObjectPtr<UObject>_u_0 this_00;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  FString *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [8];
  uint local_res20;
  TObjectPtr<UObject>_u_0 local_80;
  undefined4 local_78;
  TObjectPtr<UObject>_u_0 *local_70;
  undefined8 local_68;
  code *local_60;
  TObjectPtr<UObject>_u_0 **local_58;
  FString local_50;
  
  this->ViewCounter = this->ViewCounter + 1;
  if (this->ViewCounter == 1) {
    FMVVMCompiledBindingLibrary::Load(&this->BindingLibrary);
    local_res20 = (this->Sources).ArrayNum;
    uVar12 = (ulonglong)(int)local_res20;
    pwVar15 = L"";
    pFVar16 = (this->Sources).AllocatorInstance.Data;
    pFVar13 = pFVar16 + uVar12 * 0x68;
    while( true ) {
      plVar9 = (longlong *)0x0;
      if ((this->Sources).ArrayNum != (int)uVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FMVVMViewClass_Source,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar16 == pFVar13) break;
      iVar2 = *(int *)(pFVar16 + 0x38);
      puVar14 = *(undefined8 **)(pFVar16 + 0x30);
      if (iVar2 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (0 < iVar2) {
        lVar4 = *(longlong *)pFVar16;
        if ((lVar4 == 0) ||
           (pUVar7 = Z_Construct_UClass_UObject_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_14a745443:
          pFVar11 = GetTypeName<UClass>(&local_50);
          if ((pFVar11->Data).ArrayNum != 0) {
            pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar15);
        }
        iVar3 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar7->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((!bVar6) || (pUVar7 = *(UClass **)pFVar16, pUVar7 == (UClass *)0x0)) goto LAB_14a745443;
        pUVar8 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
        bVar6 = UClass::ImplementsInterface(pUVar7,pUVar8);
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("SourceClass->ImplementsInterface(UNotifyFieldValueChanged::StaticClass())"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMViewClass.cpp"
                               ,0x2e1,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar7);
        }
        this_00 = (TObjectPtr<UObject>_u_0)(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
        if (this_00.DebugPtr != (UObject *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(this_00.DebugPtr);
          }
          pUVar8 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
          plVar9 = UObjectBaseUtility::GetInterfaceAddress
                             ((UObjectBaseUtility *)this_00.DebugPtr,pUVar8);
        }
        puVar1 = (undefined8 *)((longlong)puVar14 + (longlong)iVar2 * 0xc);
        if (puVar14 != puVar1) {
          if (this_00.DebugPtr == (UObject *)0x0) {
            do {
              puVar10 = (undefined8 *)(**(code **)(_DAT_00000000 + 0x30))(0);
              local_70 = &local_80;
              local_68 = *puVar14;
              local_58 = &local_70;
              local_60 = UE::Core::Private::Function::
                         TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
                         ::Call;
              local_80 = this_00;
              (**(code **)*puVar10)(puVar10,pUVar7,&local_60);
              *(undefined4 *)(puVar14 + 1) = local_78;
              puVar14 = (undefined8 *)((longlong)puVar14 + 0xc);
            } while (puVar14 != puVar1);
          }
          else {
            do {
              puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9);
              local_70 = &local_80;
              local_80.DebugPtr = (UObject *)0x0;
              local_68 = *puVar14;
              local_58 = &local_70;
              local_60 = UE::Core::Private::Function::
                         TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
                         ::Call;
              (**(code **)*puVar10)(puVar10,pUVar7,&local_60);
              *(undefined4 *)(puVar14 + 1) = local_78;
              puVar14 = (undefined8 *)((longlong)puVar14 + 0xc);
            } while (puVar14 != puVar1);
          }
        }
      }
      pFVar16 = pFVar16 + 0x68;
      uVar12 = (ulonglong)local_res20;
    }
  }
  return;
}

// Destruct @ 14a747030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMVVMViewClass::Destruct(UMVVMViewClass *this,UUserWidget *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  piVar1 = &this->ViewCounter;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 < 0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1675003697450451729>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMViewClass.cpp"
                         ,0x311,"ViewCounter >= 0"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->ViewCounter == 0) {
    piVar1 = &(this->BindingLibrary).LoadedProperties.ArrayMax;
    (this->BindingLibrary).LoadedProperties.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&this->BindingLibrary,0,piVar1);
    }
    piVar1 = &(this->BindingLibrary).LoadedFunctions.ArrayMax;
    (this->BindingLibrary).LoadedFunctions.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,&(this->BindingLibrary).LoadedFunctions.AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// GetBinding @ 14a750de0

FMVVMViewClass_Binding * __thiscall
UMVVMViewClass::GetBinding(UMVVMViewClass *this,FMVVMViewClass_BindingKey param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMVVMViewClass_Binding *pFVar4;
  
  if ((param_1.Index < 0) || ((this->Bindings).ArrayNum <= param_1.Index)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Bindings.IsValidIndex(Key.GetIndex())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\View\\MVVMViewClass.h"
                       ,0x2be,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMVVMViewClass_Binding *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1.Index < (this->Bindings).ArrayNum) {
    uVar3 = (uint)~param_1.Index >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMVVMViewClass_Binding *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMVVMViewClass_Binding *)
         ((this->Bindings).AllocatorInstance.Data + (longlong)param_1.Index * 0x20);
}

// GetCondition @ 14a751030

FMVVMViewClass_Condition * __thiscall
UMVVMViewClass::GetCondition(UMVVMViewClass *this,FMVVMViewClass_ConditionKey param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMVVMViewClass_Condition *pFVar4;
  
  if ((param_1.Index < 0) || ((this->Conditions).ArrayNum <= param_1.Index)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Conditions.IsValidIndex(Key.GetIndex())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\View\\MVVMViewClass.h"
                       ,0x2e5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMVVMViewClass_Condition *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1.Index < (this->Conditions).ArrayNum) {
    uVar3 = (uint)~param_1.Index >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMVVMViewClass_Condition *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMVVMViewClass_Condition *)
         ((this->Conditions).AllocatorInstance.Data + (longlong)param_1.Index * 0x18);
}

// GetEvent @ 14a751390

FMVVMViewClass_Event * __thiscall
UMVVMViewClass::GetEvent(UMVVMViewClass *this,FMVVMViewClass_EventKey param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMVVMViewClass_Event *pFVar4;
  
  if ((param_1.Index < 0) || ((this->Events).ArrayNum <= param_1.Index)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Events.IsValidIndex(Key.GetIndex())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\View\\MVVMViewClass.h"
                       ,0x2d8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMVVMViewClass_Event *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1.Index < (this->Events).ArrayNum) {
    uVar3 = (uint)~param_1.Index >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMVVMViewClass_Event *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMVVMViewClass_Event *)
         ((this->Events).AllocatorInstance.Data + (longlong)param_1.Index * 0x18);
}

// GetPrivateStaticClass @ 14a753cb0

UClass * __cdecl UMVVMViewClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMViewClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMViewClass",
               &Z_Registration_Info_UClass_UMVVMViewClass.InnerSingleton,
               StaticRegisterNativesUMVVMViewClass,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMVVMViewClass>,InternalVTableHelperCtorCaller<UMVVMViewClass>,
               local_res8,UWidgetBlueprintGeneratedClassExtension::StaticClass,UObject::StaticClass)
    ;
  }
  return Z_Registration_Info_UClass_UMVVMViewClass.InnerSingleton;
}

// GetSource @ 14a754500

FMVVMViewClass_Source * __thiscall
UMVVMViewClass::GetSource(UMVVMViewClass *this,FMVVMViewClass_SourceKey param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMVVMViewClass_Source *pFVar4;
  
  if ((param_1.Index < 0) || ((this->Sources).ArrayNum <= param_1.Index)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sources.IsValidIndex(Key.GetIndex())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\View\\MVVMViewClass.h"
                       ,0x2b1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMVVMViewClass_Source *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1.Index < (this->Sources).ArrayNum) {
    uVar3 = (uint)~param_1.Index >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMVVMViewClass_Source *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMVVMViewClass_Source *)
         ((this->Sources).AllocatorInstance.Data + (longlong)param_1.Index * 0x68);
}

// Initialize @ 14a755a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMVVMViewClass::Initialize(UMVVMViewClass *this,UUserWidget *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UMVVMView *pUVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  UClass *local_res18 [2];
  FString local_28;
  FString local_18;
  
  pUVar4 = UUserWidget::GetExtension<UMVVMView>(param_1);
  if (pUVar4 != (UMVVMView *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1675003697450451656>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMViewClass.cpp"
                       ,0x2c8,"UserWidget->GetExtension<UMVVMView>() == nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res18[0] = UMVVMView::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  pUVar4 = (UMVVMView *)
           UUserWidget::AddExtension(param_1,(TSubclassOf<UUserWidgetExtension>)local_res18);
  if (pUVar4 != (UMVVMView *)0x0) {
    pUVar5 = UMVVMView::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar4,RF_Transient);
      UMVVMView::ConstructView(pUVar4,this);
      return;
    }
    pFVar6 = GetTypeName<UMVVMView>(&local_28);
    pwVar7 = L"";
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = GetFullNameForCastLogError<UUserWidgetExtension>
                       (&local_18,(UUserWidgetExtension *)pUVar4);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar8);
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1675003697450451658>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMViewClass.cpp"
                     ,0x2ca,"View");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// StaticRegisterNativesUMVVMViewClass @ 14a760210

void __cdecl UMVVMViewClass::StaticRegisterNativesUMVVMViewClass(void)

{
  return;
}

// ToString @ 14a763d10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UMVVMViewClass::ToString
          (UMVVMViewClass *this,FString *__return_storage_ptr__,FToStringArgs *param_1)

{
  FToStringArgs FVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  void *pvVar7;
  FString *pFVar8;
  TStringBuilderBase<wchar_t> *pTVar9;
  FMVVMViewClass_Source *pFVar10;
  ulong64 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_1948 [32];
  longlong local_1928;
  longlong local_1920;
  undefined4 local_1918;
  undefined1 local_1914;
  FString local_1908;
  FToStringArgs local_18f8;
  FName local_18e8;
  FName local_18e0;
  FName local_18d8 [2];
  FString *local_18c8;
  FString local_18c0;
  FString local_18b0;
  FString local_18a0;
  TStringBuilderBase<wchar_t> local_1888;
  wchar_t local_1868 [2048];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[1] = 0x14a763d32;
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1948;
  local_18c8 = __return_storage_ptr__;
  if (this->ViewCounter < 1) {
    FMVVMCompiledBindingLibrary::Load(&this->BindingLibrary);
  }
  local_1888.Base = local_1868;
  local_1888.bIsDynamic = false;
  local_1888.bIsExternal = false;
  local_1888.CurPos = local_1868;
  local_1888.End = (wchar_t *)&local_868;
  pvVar7 = FGenericPlatformString::Memcpy(local_1868,L"Sources: ",0x12);
  local_1888.CurPos = (wchar_t *)((longlong)pvVar7 + 0x12);
  uVar12 = 0;
  while( true ) {
    uVar13 = 0;
    iVar14 = (this->Sources).ArrayNum;
    if (iVar14 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    if (iVar14 <= (int)uVar12) break;
    iVar14 = (this->Sources).ArrayNum;
    pFVar3 = (this->Sources).AllocatorInstance.Data;
    if (iVar14 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    uVar13 = 0;
    if ((int)uVar12 < iVar14) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if (uVar13 == 0) {
      local_1928 = (longlong)(int)uVar12;
      local_1920 = (longlong)iVar14;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    if (local_1888.End < (TStringBuilderBase<wchar_t> *)(local_1888.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1888,1);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_1888.CurPos,L"\n",2);
    local_1888.CurPos = (wchar_t *)((longlong)pvVar7 + 2);
    if (local_1888.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar7 + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1888,1);
    }
    *local_1888.CurPos = L'(';
    local_1888.CurPos = local_1888.CurPos + 1;
    pTVar9 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_1888,L"%d");
    if (pTVar9->End < pTVar9->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar9,1);
    }
    local_18f8.bAddBindings = (param_1->Source).bAddBindings;
    local_18f8.bAddFlags = (param_1->Source).bAddFlags;
    local_18f8.Bindings = (param_1->Source).Bindings;
    local_18f8.bUseDisplayName = (param_1->Source).bUseDisplayName;
    local_18f8.bAddCreationMode = (param_1->Source).bAddCreationMode;
    local_18f8.bAddFields = (param_1->Source).bAddFields;
    *pTVar9->CurPos = L')';
    pTVar9->CurPos = pTVar9->CurPos + 1;
    pFVar8 = FMVVMViewClass_Source::ToString
                       ((FMVVMViewClass_Source *)(pFVar3 + (longlong)(int)uVar12 * 0x68),&local_18c0
                        ,this,&local_18f8);
    iVar2 = (pFVar8->Data).ArrayNum;
    pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
    iVar14 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar14 = 0;
    }
    uVar11 = (ulong64)iVar14;
    if (local_1888.End < (TStringBuilderBase<wchar_t> *)(local_1888.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1888,uVar11);
    }
    if (iVar14 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy(local_1888.CurPos,pFVar3,uVar11 * 2);
      local_1888.CurPos = (wchar_t *)((longlong)pvVar7 + uVar11 * 2);
    }
    if (local_18c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18c0.Data.AllocatorInstance.Data);
    }
    uVar12 = uVar12 + 1;
  }
  if (local_1888.End < (TStringBuilderBase<wchar_t> *)(local_1888.CurPos + 0xb)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1888,0xb);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_1888.CurPos,L"\nBindings: ",0x16);
  local_1888.CurPos = (wchar_t *)((longlong)pvVar7 + 0x16);
  if (local_1888.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar7 + 0x28)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1888,9);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_1888.CurPos,L"Sources: ",0x12);
  local_1888.CurPos = (wchar_t *)((longlong)pvVar7 + 0x12);
  while( true ) {
    uVar15 = 0;
    iVar14 = (this->Bindings).ArrayNum;
    if (iVar14 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    if (iVar14 <= (int)uVar13) break;
    iVar14 = (this->Bindings).ArrayNum;
    pFVar3 = (this->Bindings).AllocatorInstance.Data;
    if (iVar14 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    uVar12 = 0;
    if ((int)uVar13 < iVar14) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if (uVar12 == 0) {
      local_1928 = (longlong)(int)uVar13;
      local_1920 = (longlong)iVar14;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    if (local_1888.End < (TStringBuilderBase<wchar_t> *)(local_1888.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1888,1);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_1888.CurPos,L"\n",2);
    local_1888.CurPos = (wchar_t *)((longlong)pvVar7 + 2);
    if (local_1888.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar7 + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1888,1);
    }
    *local_1888.CurPos = L'(';
    local_1888.CurPos = local_1888.CurPos + 1;
    pTVar9 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_1888,L"%d");
    if (pTVar9->End < pTVar9->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar9,1);
    }
    local_1918._0_1_ = (param_1->Binding).bUseDisplayName;
    local_1918._1_1_ = (param_1->Binding).bAddFlags;
    local_1918._2_1_ = (param_1->Binding).bAddBindingId;
    local_1918._3_1_ = (param_1->Binding).bAddBindingFields;
    local_1914 = (param_1->Binding).bAddSources;
    *pTVar9->CurPos = L')';
    pTVar9->CurPos = pTVar9->CurPos + 1;
    pFVar8 = FMVVMViewClass_Binding::ToString
                       ((FMVVMViewClass_Binding *)(pFVar3 + (longlong)(int)uVar13 * 0x20),
                        &local_18b0,this,SUB85(&local_1918,0));
    iVar2 = (pFVar8->Data).ArrayNum;
    pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
    iVar14 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar14 = 0;
    }
    uVar11 = (ulong64)iVar14;
    if (local_1888.End < (TStringBuilderBase<wchar_t> *)(local_1888.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1888,uVar11);
    }
    if (iVar14 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy(local_1888.CurPos,pFVar3,uVar11 * 2);
      local_1888.CurPos = (wchar_t *)((longlong)pvVar7 + uVar11 * 2);
    }
    if (local_18b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18b0.Data.AllocatorInstance.Data);
    }
    uVar13 = uVar13 + 1;
  }
  if (local_1888.End < (TStringBuilderBase<wchar_t> *)(local_1888.CurPos + 0xc)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1888,0xc);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_1888.CurPos,L"\nEvaluates: ",0x18);
  local_1888.CurPos = (wchar_t *)((longlong)pvVar7 + 0x18);
  uVar16 = uVar15;
  while( true ) {
    uVar12 = 0;
    iVar14 = (this->EvaluateSources).ArrayNum;
    if (iVar14 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    uVar13 = (uint)uVar15;
    if (iVar14 <= (int)uVar13) break;
    iVar14 = (this->EvaluateSources).ArrayNum;
    pFVar3 = (this->EvaluateSources).AllocatorInstance.Data;
    if (iVar14 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    uVar12 = 0;
    if ((int)uVar13 < iVar14) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if (uVar12 == 0) {
      local_1928 = (longlong)(int)uVar13;
      local_1920 = (longlong)iVar14;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    if (local_1888.End < (TStringBuilderBase<wchar_t> *)(local_1888.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1888,1);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_1888.CurPos,L"\n",2);
    local_1888.CurPos = (wchar_t *)((longlong)pvVar7 + 2);
    if (local_1888.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar7 + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1888,1);
    }
    *local_1888.CurPos = L'(';
    local_1888.CurPos = local_1888.CurPos + 1;
    pTVar9 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_1888,L"%d");
    if (pTVar9->End < pTVar9->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar9,1);
    }
    local_868.Base = local_848;
    local_868.End = (wchar_t *)local_48;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    *pTVar9->CurPos = L')';
    local_868.CurPos = local_848;
    pTVar9->CurPos = pTVar9->CurPos + 1;
    if (*(int *)(pFVar3 + uVar16 + 8) != -1) {
      pvVar7 = FGenericPlatformString::Memcpy(local_848,L"Parent: ",0x10);
      local_868.CurPos = (wchar_t *)((longlong)pvVar7 + 0x10);
      pFVar10 = GetSource(this,(FMVVMViewClass_SourceKey)*(int *)(pFVar3 + uVar16 + 8));
      local_18e8 = pFVar10->PropertyName;
      ::FName::AppendString(&local_18e8,&local_868);
    }
    if (*(longlong *)(pFVar3 + uVar16) != 0) {
      if (local_868.End < local_868.CurPos + 9) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,9);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_868.CurPos,L"FieldId: ",0x12);
      local_868.CurPos = (wchar_t *)((longlong)pvVar7 + 0x12);
      local_18e0 = *(FName *)(pFVar3 + uVar16);
      ::FName::AppendString(&local_18e0,&local_868);
    }
    if (*(int *)(pFVar3 + uVar16 + 0xc) != -1) {
      if (local_868.End < local_868.CurPos + 8) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,8);
      }
      pvVar7 = FGenericPlatformString::Memcpy(local_868.CurPos,L"Source: ",0x10);
      local_868.CurPos = (wchar_t *)((longlong)pvVar7 + 0x10);
      pFVar10 = GetSource(this,(FMVVMViewClass_SourceKey)*(int *)(pFVar3 + uVar16 + 0xc));
      local_18d8[0] = pFVar10->PropertyName;
      ::FName::AppendString(local_18d8,&local_868);
    }
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString(&local_1908,local_868.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
    FVar5.Data = local_1908.Data.AllocatorInstance.Data;
    iVar14 = local_1908.Data.ArrayNum + -1;
    if (local_1908.Data.ArrayNum == 0) {
      iVar14 = 0;
    }
    uVar11 = (ulong64)iVar14;
    if (local_1888.End < (TStringBuilderBase<wchar_t> *)(local_1888.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1888,uVar11);
    }
    if (iVar14 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy(local_1888.CurPos,FVar5.Data,uVar11 * 2);
      local_1888.CurPos = (wchar_t *)((longlong)pvVar7 + uVar11 * 2);
    }
    if (local_1908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1908.Data.AllocatorInstance.Data);
    }
    uVar15 = (ulonglong)(uVar13 + 1);
    uVar16 = uVar16 + 0x10;
  }
  if (local_1888.End < (TStringBuilderBase<wchar_t> *)(local_1888.CurPos + 9)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1888,9);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_1888.CurPos,L"\nEvents: ",0x12);
  local_1888.CurPos = (wchar_t *)((longlong)pvVar7 + 0x12);
  while( true ) {
    iVar14 = (this->Events).ArrayNum;
    if (iVar14 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    if (iVar14 <= (int)uVar12) break;
    iVar14 = (this->Events).ArrayNum;
    pFVar3 = (this->Events).AllocatorInstance.Data;
    if (iVar14 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    uVar13 = 0;
    if ((int)uVar12 < iVar14) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if (uVar13 == 0) {
      local_1928 = (longlong)(int)uVar12;
      local_1920 = (longlong)iVar14;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar4)();
        return pFVar8;
      }
    }
    if (local_1888.End < (TStringBuilderBase<wchar_t> *)(local_1888.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1888,1);
    }
    pvVar7 = FGenericPlatformString::Memcpy(local_1888.CurPos,L"\n",2);
    local_1888.CurPos = (wchar_t *)((longlong)pvVar7 + 2);
    if (local_1888.End < (TStringBuilderBase<wchar_t> *)((longlong)pvVar7 + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1888,1);
    }
    *local_1888.CurPos = L'(';
    local_1888.CurPos = local_1888.CurPos + 1;
    pTVar9 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_1888,L"%d");
    if (pTVar9->End < pTVar9->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar9,1);
    }
    FVar1.bUseDisplayName = (param_1->Event).bUseDisplayName;
    *pTVar9->CurPos = L')';
    pTVar9->CurPos = pTVar9->CurPos + 1;
    pFVar8 = FMVVMViewClass_Event::ToString
                       ((FMVVMViewClass_Event *)(pFVar3 + (longlong)(int)uVar12 * 0x18),&local_18a0,
                        this,FVar1);
    iVar2 = (pFVar8->Data).ArrayNum;
    pFVar3 = (pFVar8->Data).AllocatorInstance.Data;
    iVar14 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar14 = 0;
    }
    uVar11 = (ulong64)iVar14;
    if (local_1888.End < (TStringBuilderBase<wchar_t> *)(local_1888.CurPos + uVar11)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1888,uVar11);
    }
    if (iVar14 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy(local_1888.CurPos,pFVar3,uVar11 * 2);
      local_1888.CurPos = (wchar_t *)((longlong)pvVar7 + uVar11 * 2);
    }
    if (local_18a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18a0.Data.AllocatorInstance.Data);
    }
    uVar12 = uVar12 + 1;
  }
  if (local_1888.End < (TStringBuilderBase<wchar_t> *)(local_1888.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1888,1);
  }
  *local_1888.CurPos = L'\0';
  ::FString::FString(local_18c8,local_1888.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1888);
  return local_18c8;
}

