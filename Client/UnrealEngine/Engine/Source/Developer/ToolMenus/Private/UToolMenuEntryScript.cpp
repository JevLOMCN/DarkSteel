// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 45

// StaticClass @ 142c2d1e0

UClass * __cdecl UToolMenuEntryScript::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuEntryScript.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuEntryScript",
               &Z_Registration_Info_UClass_UToolMenuEntryScript.InnerSingleton,
               StaticRegisterNativesUToolMenuEntryScript,0xb0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UToolMenuEntryScript>,
               InternalVTableHelperCtorCaller<UToolMenuEntryScript>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuEntryScript.InnerSingleton;
}

// UToolMenuEntryScript @ 142c3af90

UToolMenuEntryScript * __thiscall
UToolMenuEntryScript::UToolMenuEntryScript(UToolMenuEntryScript *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UToolMenuEntryScript__6B_;
  FToolMenuEntryScriptData::FToolMenuEntryScriptData(&this->Data);
  this->bHasRegisteredMenuEntry = false;
  return this;
}

// UToolMenuEntryScript @ 142c3afd0

UToolMenuEntryScript * __thiscall
UToolMenuEntryScript::UToolMenuEntryScript(UToolMenuEntryScript *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UToolMenuEntryScript__6B_;
  FToolMenuEntryScriptData::FToolMenuEntryScriptData(&this->Data);
  this->bHasRegisteredMenuEntry = false;
  return this;
}

// ~UToolMenuEntryScript @ 142c3c990

void __thiscall UToolMenuEntryScript::~UToolMenuEntryScript(UToolMenuEntryScript *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&___7UToolMenuEntryScript__6B_;
  pIVar1 = (this->Data).ToolTip.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->Data).Label.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 142c3fc80

FText * __thiscall
`UToolMenuEntryScript::CreateLabelAttribute'::__l5::<lambda_1>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UToolMenuEntryScript *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  FText local_b8;
  FToolMenuContext local_a8;
  FText local_40;
  FText local_28;
  
  this_00 = UToolMenuEntryScript::GetIfCanSafelyRouteCall(this);
  if (this_00 == (UToolMenuEntryScript *)0x0) {
    pFVar2 = FText::FText(&local_28);
    FText::FText(__return_storage_ptr__,pFVar2);
  }
  else {
    this_01 = UObject::FindFunctionChecked((UObject *)this_00,NAME_UToolMenuEntryScript_GetLabel);
    pUVar1 = UField::GetOwnerClass((UField *)this_01);
    if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
      local_a8.bIsEditing = false;
      local_a8.CommandList.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_a8.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ContextObjects.ArrayNum = 0;
      local_a8.ContextObjects.ArrayMax = 0;
      local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_a8.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
      local_a8.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
      local_a8.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ContextCleanupFuncs.ArrayNum = 0;
      local_a8.ContextCleanupFuncs.ArrayMax = 0;
      local_a8.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.CommandLists.ArrayNum = 0;
      local_a8.CommandLists.ArrayMax = 0;
      local_a8.CommandList.Object = (FUICommandList *)0x0;
      local_a8.Extenders.ArrayNum = 0;
      local_a8.Extenders.ArrayMax = 0;
      FText::FText(&local_40);
      FToolMenuContext::operator=(&local_a8,(FToolMenuContext *)((longlong)this + 8));
      (**(code **)(this_00->_padding_ + 0x260))(this_00,this_01,&local_a8);
      local_b8.TextData.Reference = local_40.TextData.Reference;
      if (local_40.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40.TextData.Reference + 8))
                  (local_40.TextData.Reference,local_res8);
      }
      local_b8.Flags = local_40.Flags;
      if (local_40.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
      }
      DestructItems<TSharedPtr<FExtender,1>,int>
                ((TSharedPtr<FExtender,1> *)local_a8.Extenders.AllocatorInstance.Data,
                 local_a8.Extenders.ArrayNum);
      if ((TSharedPtr<FExtender,1> *)local_a8.Extenders.AllocatorInstance.Data !=
          (TSharedPtr<FExtender,1> *)0x0) {
        FMemory::Free(local_a8.Extenders.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.CommandList.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FUICommandList,1>,int>
                ((TSharedPtr<FUICommandList,1> *)local_a8.CommandLists.AllocatorInstance.Data,
                 local_a8.CommandLists.ArrayNum);
      if ((TSharedPtr<FUICommandList,1> *)local_a8.CommandLists.AllocatorInstance.Data !=
          (TSharedPtr<FUICommandList,1> *)0x0) {
        FMemory::Free(local_a8.CommandLists.AllocatorInstance.Data);
      }
      DestructItems<TFunction<void___cdecl(void)>,int>
                ((TFunction<void___cdecl(void)> *)
                 local_a8.ContextCleanupFuncs.AllocatorInstance.Data,
                 local_a8.ContextCleanupFuncs.ArrayNum);
      if ((TFunction<void___cdecl(void)> *)local_a8.ContextCleanupFuncs.AllocatorInstance.Data !=
          (TFunction<void___cdecl(void)> *)0x0) {
        FMemory::Free(local_a8.ContextCleanupFuncs.AllocatorInstance.Data);
      }
      DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                 local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
                 local_a8.ContextObjectCleanupFuncs.Pairs.ArrayNum);
      if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
          local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
          (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
        FMemory::Free(local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
      }
      if (local_a8.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.ContextObjects.AllocatorInstance.Data);
      }
    }
    else {
      (**(code **)(this_00->_padding_ + 0x2c8))(this_00,&local_b8,(longlong)this + 8);
    }
    FText::FText(__return_storage_ptr__,&local_b8);
    local_28.TextData.Reference = local_b8.TextData.Reference;
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 142c3fe60

bool __thiscall
`UToolMenuEntryScript::CreateShowInToolbarTopLevelAttribute'::__l5::<lambda_1>::operator()
          (void *this)

{
  UToolMenuEntryScript *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  undefined1 uVar2;
  FToolMenuContext local_78;
  char local_10;
  
  this_00 = UToolMenuEntryScript::GetIfCanSafelyRouteCall(this);
  uVar2 = 0;
  if (this_00 != (UToolMenuEntryScript *)0x0) {
    this_01 = UObject::FindFunctionChecked
                        ((UObject *)this_00,NAME_UToolMenuEntryScript_ShowInToolbarTopLevel);
    pUVar1 = UField::GetOwnerClass((UField *)this_01);
    if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
      local_78.bIsEditing = false;
      local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ContextObjects.ArrayNum = 0;
      local_78.ContextObjects.ArrayMax = 0;
      local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
      local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
      local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ContextCleanupFuncs.ArrayNum = 0;
      local_78.ContextCleanupFuncs.ArrayMax = 0;
      local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.CommandLists.ArrayNum = 0;
      local_78.CommandLists.ArrayMax = 0;
      local_78.CommandList.Object = (FUICommandList *)0x0;
      local_78.CommandList.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Extenders.ArrayNum = 0;
      local_78.Extenders.ArrayMax = 0;
      local_10 = '\0';
      FToolMenuContext::operator=(&local_78,(FToolMenuContext *)((longlong)this + 8));
      (**(code **)(this_00->_padding_ + 0x260))(this_00,this_01,&local_78);
      uVar2 = local_10 != '\0';
      DestructItems<TSharedPtr<FExtender,1>,int>
                ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
                 local_78.Extenders.ArrayNum);
      if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
          (TSharedPtr<FExtender,1> *)0x0) {
        FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.CommandList.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FUICommandList,1>,int>
                ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
                 local_78.CommandLists.ArrayNum);
      if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
          (TSharedPtr<FUICommandList,1> *)0x0) {
        FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
      }
      DestructItems<TFunction<void___cdecl(void)>,int>
                ((TFunction<void___cdecl(void)> *)
                 local_78.ContextCleanupFuncs.AllocatorInstance.Data,
                 local_78.ContextCleanupFuncs.ArrayNum);
      if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
          (TFunction<void___cdecl(void)> *)0x0) {
        FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
      }
      DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                 local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
                 local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
      if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
          local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
          (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
        FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
      }
      if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
      }
    }
    else {
      uVar2 = (**(code **)(this_00->_padding_ + 0x2e0))(this_00);
    }
  }
  return (bool)uVar2;
}

// operator() @ 142c3ffe0

FText * __thiscall
`UToolMenuEntryScript::CreateToolTipAttribute'::__l5::<lambda_1>::operator()
          (void *this,FText *__return_storage_ptr__)

{
  UToolMenuEntryScript *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  FText local_b8;
  FToolMenuContext local_a8;
  FText local_40;
  FText local_28;
  
  this_00 = UToolMenuEntryScript::GetIfCanSafelyRouteCall(this);
  if (this_00 == (UToolMenuEntryScript *)0x0) {
    pFVar2 = FText::FText(&local_28);
    FText::FText(__return_storage_ptr__,pFVar2);
  }
  else {
    this_01 = UObject::FindFunctionChecked((UObject *)this_00,NAME_UToolMenuEntryScript_GetToolTip);
    pUVar1 = UField::GetOwnerClass((UField *)this_01);
    if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
      local_a8.bIsEditing = false;
      local_a8.CommandList.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_a8.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ContextObjects.ArrayNum = 0;
      local_a8.ContextObjects.ArrayMax = 0;
      local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_a8.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
      local_a8.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
      local_a8.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ContextCleanupFuncs.ArrayNum = 0;
      local_a8.ContextCleanupFuncs.ArrayMax = 0;
      local_a8.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.CommandLists.ArrayNum = 0;
      local_a8.CommandLists.ArrayMax = 0;
      local_a8.CommandList.Object = (FUICommandList *)0x0;
      local_a8.Extenders.ArrayNum = 0;
      local_a8.Extenders.ArrayMax = 0;
      FText::FText(&local_40);
      FToolMenuContext::operator=(&local_a8,(FToolMenuContext *)((longlong)this + 8));
      (**(code **)(this_00->_padding_ + 0x260))(this_00,this_01,&local_a8);
      local_b8.TextData.Reference = local_40.TextData.Reference;
      if (local_40.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40.TextData.Reference + 8))
                  (local_40.TextData.Reference,local_res8);
      }
      local_b8.Flags = local_40.Flags;
      if (local_40.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
      }
      DestructItems<TSharedPtr<FExtender,1>,int>
                ((TSharedPtr<FExtender,1> *)local_a8.Extenders.AllocatorInstance.Data,
                 local_a8.Extenders.ArrayNum);
      if ((TSharedPtr<FExtender,1> *)local_a8.Extenders.AllocatorInstance.Data !=
          (TSharedPtr<FExtender,1> *)0x0) {
        FMemory::Free(local_a8.Extenders.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.CommandList.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FUICommandList,1>,int>
                ((TSharedPtr<FUICommandList,1> *)local_a8.CommandLists.AllocatorInstance.Data,
                 local_a8.CommandLists.ArrayNum);
      if ((TSharedPtr<FUICommandList,1> *)local_a8.CommandLists.AllocatorInstance.Data !=
          (TSharedPtr<FUICommandList,1> *)0x0) {
        FMemory::Free(local_a8.CommandLists.AllocatorInstance.Data);
      }
      DestructItems<TFunction<void___cdecl(void)>,int>
                ((TFunction<void___cdecl(void)> *)
                 local_a8.ContextCleanupFuncs.AllocatorInstance.Data,
                 local_a8.ContextCleanupFuncs.ArrayNum);
      if ((TFunction<void___cdecl(void)> *)local_a8.ContextCleanupFuncs.AllocatorInstance.Data !=
          (TFunction<void___cdecl(void)> *)0x0) {
        FMemory::Free(local_a8.ContextCleanupFuncs.AllocatorInstance.Data);
      }
      DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                 local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
                 local_a8.ContextObjectCleanupFuncs.Pairs.ArrayNum);
      if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
          local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
          (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
        FMemory::Free(local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
      }
      if (local_a8.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.ContextObjects.AllocatorInstance.Data);
      }
    }
    else {
      (**(code **)(this_00->_padding_ + 0x2d0))(this_00,&local_b8,(longlong)this + 8);
    }
    FText::FText(__return_storage_ptr__,&local_b8);
    local_28.TextData.Reference = local_b8.TextData.Reference;
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CanExecute @ 142c4f190

bool __thiscall
UToolMenuEntryScript::CanExecute(UToolMenuEntryScript *this,FToolMenuContext *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 uVar2;
  FToolMenuContext local_78;
  char local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UToolMenuEntryScript_CanExecute);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_78.bIsEditing = false;
    local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ContextObjects.ArrayNum = 0;
    local_78.ContextObjects.ArrayMax = 0;
    local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
    local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
    local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ContextCleanupFuncs.ArrayNum = 0;
    local_78.ContextCleanupFuncs.ArrayMax = 0;
    local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.CommandLists.ArrayNum = 0;
    local_78.CommandLists.ArrayMax = 0;
    local_78.CommandList.Object = (FUICommandList *)0x0;
    local_78.CommandList.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Extenders.ArrayNum = 0;
    local_78.Extenders.ArrayMax = 0;
    local_10 = '\0';
    FToolMenuContext::operator=(&local_78,param_1);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_78);
    uVar2 = local_10 != '\0';
    DestructItems<TSharedPtr<FExtender,1>,int>
              ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
               local_78.Extenders.ArrayNum);
    if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
        (TSharedPtr<FExtender,1> *)0x0) {
      FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.CommandList.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FUICommandList,1>,int>
              ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
               local_78.CommandLists.ArrayNum);
    if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
        (TSharedPtr<FUICommandList,1> *)0x0) {
      FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
    }
    DestructItems<TFunction<void___cdecl(void)>,int>
              ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data,
               local_78.ContextCleanupFuncs.ArrayNum);
    if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
        (TFunction<void___cdecl(void)> *)0x0) {
      FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
    }
    DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
              ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
               local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
               local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
    if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
        local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
        (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
      FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
    }
    if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
    }
  }
  else {
    uVar2 = (**(code **)(this->_padding_ + 0x2b0))(this);
  }
  return (bool)uVar2;
}

// CanExecute_Implementation @ 142c4f2f0

bool __thiscall
UToolMenuEntryScript::CanExecute_Implementation
          (UToolMenuEntryScript *this,FToolMenuContext *param_1)

{
  return true;
}

// ConstructMenuEntry @ 142c50510

void __thiscall
UToolMenuEntryScript::ConstructMenuEntry
          (UToolMenuEntryScript *this,UToolMenu *param_1,FName param_2,FToolMenuContext *param_3)

{
  UFunction *pUVar1;
  UToolMenu *local_88;
  FName local_80;
  FToolMenuContext local_78;
  
  local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjects.ArrayNum = 0;
  local_78.ContextObjects.ArrayMax = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
  local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextCleanupFuncs.ArrayNum = 0;
  local_78.ContextCleanupFuncs.ArrayMax = 0;
  local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CommandLists.ArrayNum = 0;
  local_78.CommandLists.ArrayMax = 0;
  local_78.CommandList.Object = (FUICommandList *)0x0;
  local_78.CommandList.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Extenders.ArrayNum = 0;
  local_78.Extenders.ArrayMax = 0;
  local_78.bIsEditing = false;
  local_88 = param_1;
  local_80 = param_2;
  FToolMenuContext::operator=(&local_78,param_3);
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UToolMenuEntryScript_ConstructMenuEntry);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_88);
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
             local_78.Extenders.ArrayNum);
  if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
      (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.CommandList.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
             local_78.CommandLists.ArrayNum);
  if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
      (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data,
             local_78.ContextCleanupFuncs.ArrayNum);
  if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
      (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
             local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
  if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
      local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
      (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
  }
  if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
  }
  return;
}

// CreateIconAttribute @ 142c552d0

TAttribute<FSlateIcon> * __thiscall
UToolMenuEntryScript::CreateIconAttribute
          (UToolMenuEntryScript *this,TAttribute<FSlateIcon> *__return_storage_ptr__,
          FToolMenuContext *param_1)

{
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  FName FVar2;
  ForAnyElementType FVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FName *pFVar8;
  FName FVar9;
  FName FVar10;
  FName local_res8;
  UToolMenuEntryScript *local_res20;
  undefined1 local_e8 [24];
  FName FStack_d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  ForAnyElementType local_a8;
  int local_a0;
  FName local_98;
  FToolMenuContext local_90;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar8 = ::FName::FName(&local_res8,7,L"GetIcon",FNAME_Add);
    FunctionName = *pFVar8;
    _Init_thread_footer(&::_TSS0);
  }
  cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x3d8))
                    ((longlong *)this->_padding_,FunctionName);
  if (cVar5 != '\0') {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res20);
    local_98 = local_res8;
    local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    FToolMenuContext::FToolMenuContext(&local_90,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_c8,(FWriteAccessScope *)local_e8);
    FStack_d0 = (FName)&local_c0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x88,&local_c0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_AUFSlateIcon__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenuEntryScript::CreateIconAttribute'::`5'::<lambda_1>_>
                 ::_vftable_;
      *(FName *)(puVar6 + 3) = local_98;
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar6 + 4),&local_90);
    }
    if (local_e8[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
    }
    FToolMenuContext::~FToolMenuContext(&local_90);
    FSlateIcon::FSlateIcon(&__return_storage_ptr__->Value);
    this_00 = &__return_storage_ptr__->Getter;
    __return_storage_ptr__->bIsSet = true;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
    if ((TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *)&local_c8 != this_00) {
      local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_a0 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_c8,(FReadAccessScope *)local_e8);
      if ((local_c0.DelegateSize != 0) &&
         (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (**(code **)(*(longlong *)local_c0.DelegateAllocator + 0x50))
                  (local_c0.DelegateAllocator,&local_b0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)local_e8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_b0,(FWriteAccessScope *)local_e8);
      iVar4 = local_a0;
      FVar3.Data = local_a8.Data;
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_a0 = 0;
      if (local_e8[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)local_e8);
      if ((*(int *)&(__return_storage_ptr__->Getter).field_0x10 != 0) &&
         (puVar6 = *(undefined8 **)&(__return_storage_ptr__->Getter).field_0x8,
         puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(__return_storage_ptr__->Getter).field_0x8,0,0,0x10);
        *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
      }
      pvVar1 = *(void **)&(__return_storage_ptr__->Getter).field_0x8;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(FScriptContainerElement **)&(__return_storage_ptr__->Getter).field_0x8 = FVar3.Data;
      *(int *)&(__return_storage_ptr__->Getter).field_0x10 = iVar4;
      if (local_e8[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_b0,(FWriteAccessScope *)local_e8);
      if ((local_a0 != 0) && (local_a8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_a8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,0x10);
        local_a0 = 0;
      }
      if (local_e8[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_c8,(FWriteAccessScope *)local_e8);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_e8[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
    return __return_storage_ptr__;
  }
  FVar10 = (this->Data).Icon.SmallStyleName;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
  FVar2 = (this->Data).Icon.StyleSetName;
  if (FVar10 == (FName)0x0) {
    if ((FVar2 == (FName)0x0) && ((this->Data).Icon.StyleName == (FName)0x0)) {
      FSlateIcon::FSlateIcon((FSlateIcon *)local_e8);
      goto LAB_142c5563f;
    }
    local_res20 = (UToolMenuEntryScript *)0x0;
    FVar10 = FVar9;
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FSlateIcon::FSlateIcon((FSlateIcon *)local_e8,FVar2,(this->Data).Icon.StyleName,FVar10,(FName)0x0)
  ;
LAB_142c5563f:
  __return_storage_ptr__->bIsSet = true;
  FVar10._1_7_ = local_e8._17_7_;
  FVar10.ComparisonIndex.Value._0_1_ = local_e8[0x10];
  (__return_storage_ptr__->Value).StyleSetName.ComparisonIndex = (FNameEntryId)local_e8._0_4_;
  (__return_storage_ptr__->Value).StyleSetName.Number = local_e8._4_4_;
  (__return_storage_ptr__->Value).StyleName.ComparisonIndex = (FNameEntryId)local_e8._8_4_;
  (__return_storage_ptr__->Value).StyleName.Number = local_e8._12_4_;
  (__return_storage_ptr__->Value).SmallStyleName = FVar10;
  (__return_storage_ptr__->Value).StatusOverlayStyleName = FStack_d0;
  *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->Getter = 0;
  *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
  return __return_storage_ptr__;
}

// CreateLabelAttribute @ 142c556d0

TAttribute<FText> * __thiscall
UToolMenuEntryScript::CreateLabelAttribute
          (UToolMenuEntryScript *this,TAttribute<FText> *__return_storage_ptr__,
          FToolMenuContext *param_1)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  ITextData *pIVar2;
  ForAnyElementType FVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FName *pFVar8;
  FName local_res8;
  UToolMenuEntryScript *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FDelegateAllocation local_e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  ForAnyElementType local_c8;
  int local_c0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  FName local_98;
  FToolMenuContext local_90;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar8 = ::FName::FName(&local_res8,8,L"GetLabel",FNAME_Add);
      FunctionName = *pFVar8;
      _Init_thread_footer(&::_TSS0);
    }
  }
  cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x3d8))
                    ((longlong *)this->_padding_,FunctionName);
  if (cVar5 == '\0') {
    (__return_storage_ptr__->Value).TextData.Reference = (ITextData *)0x0;
    pIVar2 = (this->Data).Label.TextData.Reference;
    (__return_storage_ptr__->Value).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
    }
    (__return_storage_ptr__->Value).Flags = (this->Data).Label.Flags;
    __return_storage_ptr__->bIsSet = true;
    *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->Getter = 0;
    *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res20);
    local_98 = local_res8;
    local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0.DelegateSize = 0;
    FToolMenuContext::FToolMenuContext(&local_90,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_b8);
    local_a0 = &local_e0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x88,&local_e0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenuEntryScript::CreateLabelAttribute'::`5'::<lambda_1>_>
                 ::_vftable_;
      *(FName *)(puVar6 + 3) = local_98;
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar6 + 4),&local_90);
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    FToolMenuContext::~FToolMenuContext(&local_90);
    FText::FText(&__return_storage_ptr__->Value);
    this_00 = &__return_storage_ptr__->Getter;
    __return_storage_ptr__->bIsSet = true;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
    if ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&local_e8 != this_00) {
      local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_c8.Data = (FScriptContainerElement *)0x0;
      local_c0 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_e8,(FReadAccessScope *)&local_b8);
      if ((local_e0.DelegateSize != 0) &&
         (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (**(code **)(*(longlong *)local_e0.DelegateAllocator + 0x50))
                  (local_e0.DelegateAllocator,&local_d0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_b8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d0,(FWriteAccessScope *)&local_b8);
      iVar4 = local_c0;
      FVar3.Data = local_c8.Data;
      local_c8.Data = (FScriptContainerElement *)0x0;
      local_c0 = 0;
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_b8);
      if ((*(int *)&(__return_storage_ptr__->Getter).field_0x10 != 0) &&
         (puVar6 = *(undefined8 **)&(__return_storage_ptr__->Getter).field_0x8,
         puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(__return_storage_ptr__->Getter).field_0x8,0,0,0x10);
        *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
      }
      pvVar1 = *(void **)&(__return_storage_ptr__->Getter).field_0x8;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(FScriptContainerElement **)&(__return_storage_ptr__->Getter).field_0x8 = FVar3.Data;
      *(int *)&(__return_storage_ptr__->Getter).field_0x10 = iVar4;
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d0,(FWriteAccessScope *)&local_b8);
      if ((local_c0 != 0) && (local_c8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_c8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,0x10);
        local_c0 = 0;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_b8);
    if ((local_e0.DelegateSize != 0) &&
       (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e0,0,0,0x10);
      local_e0.DelegateSize = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  }
  return __return_storage_ptr__;
}

// CreateShowInToolbarTopLevelAttribute @ 142c55aa0

TAttribute<bool> * __thiscall
UToolMenuEntryScript::CreateShowInToolbarTopLevelAttribute
          (UToolMenuEntryScript *this,TAttribute<bool> *__return_storage_ptr__,
          FToolMenuContext *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  ForAnyElementType FVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FName *pFVar7;
  FName local_res8;
  UToolMenuEntryScript *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FDelegateAllocation local_e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  ForAnyElementType local_c8;
  int local_c0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  FName local_98;
  FToolMenuContext local_90;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar7 = ::FName::FName(&local_res8,0x15,L"ShowInToolbarTopLevel",FNAME_Add);
      FunctionName = *pFVar7;
      _Init_thread_footer(&::_TSS0);
    }
  }
  cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x3d8))
                    ((longlong *)this->_padding_,FunctionName);
  if (cVar4 == '\0') {
    __return_storage_ptr__->Value = false;
    __return_storage_ptr__->bIsSet = false;
    *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->Getter = 0;
    *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res20);
    local_98 = local_res8;
    local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0.DelegateSize = 0;
    FToolMenuContext::FToolMenuContext(&local_90,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_b8);
    local_a0 = &local_e0;
    puVar5 = UE::Core::Private::DelegateAllocate(0x88,&local_e0);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenuEntryScript::CreateShowInToolbarTopLevelAttribute'::`5'::<lambda_1>_>
                 ::_vftable_;
      *(FName *)(puVar5 + 3) = local_98;
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar5 + 4),&local_90);
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    FToolMenuContext::~FToolMenuContext(&local_90);
    this_00 = &__return_storage_ptr__->Getter;
    __return_storage_ptr__->Value = false;
    __return_storage_ptr__->bIsSet = true;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
    if ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&local_e8 != this_00) {
      local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_c8.Data = (FScriptContainerElement *)0x0;
      local_c0 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_e8,(FReadAccessScope *)&local_b8);
      if ((local_e0.DelegateSize != 0) &&
         (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (**(code **)(*(longlong *)local_e0.DelegateAllocator + 0x50))
                  (local_e0.DelegateAllocator,&local_d0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_b8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d0,(FWriteAccessScope *)&local_b8);
      iVar3 = local_c0;
      FVar2.Data = local_c8.Data;
      local_c8.Data = (FScriptContainerElement *)0x0;
      local_c0 = 0;
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_b8);
      if ((*(int *)&(__return_storage_ptr__->Getter).field_0x10 != 0) &&
         (puVar5 = *(undefined8 **)&(__return_storage_ptr__->Getter).field_0x8,
         puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(__return_storage_ptr__->Getter).field_0x8,0,0,0x10);
        *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
      }
      pvVar1 = *(void **)&(__return_storage_ptr__->Getter).field_0x8;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(FScriptContainerElement **)&(__return_storage_ptr__->Getter).field_0x8 = FVar2.Data;
      *(int *)&(__return_storage_ptr__->Getter).field_0x10 = iVar3;
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d0,(FWriteAccessScope *)&local_b8);
      if ((local_c0 != 0) && (local_c8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_c8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,0x10);
        local_c0 = 0;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_b8);
    if ((local_e0.DelegateSize != 0) &&
       (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e0,0,0,0x10);
      local_e0.DelegateSize = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  }
  return __return_storage_ptr__;
}

// CreateToolTipAttribute @ 142c55f00

TAttribute<FText> * __thiscall
UToolMenuEntryScript::CreateToolTipAttribute
          (UToolMenuEntryScript *this,TAttribute<FText> *__return_storage_ptr__,
          FToolMenuContext *param_1)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  ITextData *pIVar2;
  ForAnyElementType FVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FName *pFVar8;
  FName local_res8;
  UToolMenuEntryScript *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FDelegateAllocation local_e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  ForAnyElementType local_c8;
  int local_c0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  FName local_98;
  FToolMenuContext local_90;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar8 = ::FName::FName(&local_res8,10,L"GetToolTip",FNAME_Add);
      FunctionName = *pFVar8;
      _Init_thread_footer(&::_TSS0);
    }
  }
  cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x3d8))
                    ((longlong *)this->_padding_,FunctionName);
  if (cVar5 == '\0') {
    (__return_storage_ptr__->Value).TextData.Reference = (ITextData *)0x0;
    pIVar2 = (this->Data).ToolTip.TextData.Reference;
    (__return_storage_ptr__->Value).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
    }
    (__return_storage_ptr__->Value).Flags = (this->Data).ToolTip.Flags;
    __return_storage_ptr__->bIsSet = true;
    *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->Getter = 0;
    *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res20);
    local_98 = local_res8;
    local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0.DelegateSize = 0;
    FToolMenuContext::FToolMenuContext(&local_90,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_b8);
    local_a0 = &local_e0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x88,&local_e0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenuEntryScript::CreateToolTipAttribute'::`5'::<lambda_1>_>
                 ::_vftable_;
      *(FName *)(puVar6 + 3) = local_98;
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar6 + 4),&local_90);
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    FToolMenuContext::~FToolMenuContext(&local_90);
    FText::FText(&__return_storage_ptr__->Value);
    this_00 = &__return_storage_ptr__->Getter;
    __return_storage_ptr__->bIsSet = true;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
    *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
    if ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&local_e8 != this_00) {
      local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_c8.Data = (FScriptContainerElement *)0x0;
      local_c0 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_e8,(FReadAccessScope *)&local_b8);
      if ((local_e0.DelegateSize != 0) &&
         (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (**(code **)(*(longlong *)local_e0.DelegateAllocator + 0x50))
                  (local_e0.DelegateAllocator,&local_d0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_b8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d0,(FWriteAccessScope *)&local_b8);
      iVar4 = local_c0;
      FVar3.Data = local_c8.Data;
      local_c8.Data = (FScriptContainerElement *)0x0;
      local_c0 = 0;
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_b8);
      if ((*(int *)&(__return_storage_ptr__->Getter).field_0x10 != 0) &&
         (puVar6 = *(undefined8 **)&(__return_storage_ptr__->Getter).field_0x8,
         puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(__return_storage_ptr__->Getter).field_0x8,0,0,0x10);
        *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
      }
      pvVar1 = *(void **)&(__return_storage_ptr__->Getter).field_0x8;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(FScriptContainerElement **)&(__return_storage_ptr__->Getter).field_0x8 = FVar3.Data;
      *(int *)&(__return_storage_ptr__->Getter).field_0x10 = iVar4;
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d0,(FWriteAccessScope *)&local_b8);
      if ((local_c0 != 0) && (local_c8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_c8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c8,0,0,0x10);
        local_c0 = 0;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_b8);
    if ((local_e0.DelegateSize != 0) &&
       (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e0,0,0,0x10);
      local_e0.DelegateSize = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  }
  return __return_storage_ptr__;
}

// Execute @ 142c57e70

void __thiscall UToolMenuEntryScript::Execute(UToolMenuEntryScript *this,FToolMenuContext *param_1)

{
  UFunction *pUVar1;
  FToolMenuContext local_78;
  
  local_78.bIsEditing = false;
  local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjects.ArrayNum = 0;
  local_78.ContextObjects.ArrayMax = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
  local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextCleanupFuncs.ArrayNum = 0;
  local_78.ContextCleanupFuncs.ArrayMax = 0;
  local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CommandLists.ArrayNum = 0;
  local_78.CommandLists.ArrayMax = 0;
  local_78.CommandList.Object = (FUICommandList *)0x0;
  local_78.CommandList.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Extenders.ArrayNum = 0;
  local_78.Extenders.ArrayMax = 0;
  FToolMenuContext::operator=(&local_78,param_1);
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UToolMenuEntryScript_Execute);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_78);
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
             local_78.Extenders.ArrayNum);
  if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
      (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.CommandList.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
             local_78.CommandLists.ArrayNum);
  if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
      (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data,
             local_78.ContextCleanupFuncs.ArrayNum);
  if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
      (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
             local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
  if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
      local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
      (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
  }
  if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
  }
  return;
}

// GetCheckState @ 142c5dd60

ECheckBoxState __thiscall
UToolMenuEntryScript::GetCheckState(UToolMenuEntryScript *this,FToolMenuContext *param_1)

{
  ECheckBoxState EVar1;
  UFunction *this_00;
  UClass *pUVar2;
  FToolMenuContext local_78;
  ECheckBoxState local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UToolMenuEntryScript_GetCheckState);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_78.bIsEditing = false;
    local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ContextObjects.ArrayNum = 0;
    local_78.ContextObjects.ArrayMax = 0;
    local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
    local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
    local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ContextCleanupFuncs.ArrayNum = 0;
    local_78.ContextCleanupFuncs.ArrayMax = 0;
    local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.CommandLists.ArrayNum = 0;
    local_78.CommandLists.ArrayMax = 0;
    local_78.CommandList.Object = (FUICommandList *)0x0;
    local_78.CommandList.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Extenders.ArrayNum = 0;
    local_78.Extenders.ArrayMax = 0;
    local_10 = Unchecked;
    FToolMenuContext::operator=(&local_78,param_1);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_78);
    EVar1 = local_10;
    DestructItems<TSharedPtr<FExtender,1>,int>
              ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
               local_78.Extenders.ArrayNum);
    if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
        (TSharedPtr<FExtender,1> *)0x0) {
      FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.CommandList.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FUICommandList,1>,int>
              ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
               local_78.CommandLists.ArrayNum);
    if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
        (TSharedPtr<FUICommandList,1> *)0x0) {
      FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
    }
    DestructItems<TFunction<void___cdecl(void)>,int>
              ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data,
               local_78.ContextCleanupFuncs.ArrayNum);
    if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
        (TFunction<void___cdecl(void)> *)0x0) {
      FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
    }
    DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
              ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
               local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
               local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
    if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
        local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
        (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
      FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
    }
    if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
    }
  }
  else {
    EVar1 = (**(code **)(this->_padding_ + 0x2b8))(this);
  }
  return EVar1;
}

// GetCheckState_Implementation @ 142c5dec0

ECheckBoxState __thiscall
UToolMenuEntryScript::GetCheckState_Implementation
          (UToolMenuEntryScript *this,FToolMenuContext *param_1)

{
  return Undetermined;
}

// GetIcon @ 142c5e030

FScriptSlateIcon * __thiscall
UToolMenuEntryScript::GetIcon
          (UToolMenuEntryScript *this,FScriptSlateIcon *__return_storage_ptr__,
          FToolMenuContext *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  FToolMenuContext local_88;
  FName local_20;
  FName FStack_18;
  FName local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UToolMenuEntryScript_GetIcon);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_88.bIsEditing = false;
    local_88.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ContextObjects.ArrayNum = 0;
    local_88.ContextObjects.ArrayMax = 0;
    local_88.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    local_88.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
    local_88.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
    local_88.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ContextCleanupFuncs.ArrayNum = 0;
    local_88.ContextCleanupFuncs.ArrayMax = 0;
    local_88.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.CommandLists.ArrayNum = 0;
    local_88.CommandLists.ArrayMax = 0;
    local_88.CommandList.Object = (FUICommandList *)0x0;
    local_88.CommandList.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_88.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Extenders.ArrayNum = 0;
    local_88.Extenders.ArrayMax = 0;
    local_20.ComparisonIndex.Value = 0;
    local_20.Number = 0;
    FStack_18.ComparisonIndex.Value = 0;
    FStack_18.Number = 0;
    local_10.ComparisonIndex.Value = 0;
    local_10.Number = 0;
    FToolMenuContext::operator=(&local_88,param_1);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_88);
    __return_storage_ptr__->StyleSetName = local_20;
    __return_storage_ptr__->StyleName = FStack_18;
    __return_storage_ptr__->SmallStyleName = local_10;
    DestructItems<TSharedPtr<FExtender,1>,int>
              ((TSharedPtr<FExtender,1> *)local_88.Extenders.AllocatorInstance.Data,
               local_88.Extenders.ArrayNum);
    if ((TSharedPtr<FExtender,1> *)local_88.Extenders.AllocatorInstance.Data !=
        (TSharedPtr<FExtender,1> *)0x0) {
      FMemory::Free(local_88.Extenders.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.CommandList.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FUICommandList,1>,int>
              ((TSharedPtr<FUICommandList,1> *)local_88.CommandLists.AllocatorInstance.Data,
               local_88.CommandLists.ArrayNum);
    if ((TSharedPtr<FUICommandList,1> *)local_88.CommandLists.AllocatorInstance.Data !=
        (TSharedPtr<FUICommandList,1> *)0x0) {
      FMemory::Free(local_88.CommandLists.AllocatorInstance.Data);
    }
    DestructItems<TFunction<void___cdecl(void)>,int>
              ((TFunction<void___cdecl(void)> *)local_88.ContextCleanupFuncs.AllocatorInstance.Data,
               local_88.ContextCleanupFuncs.ArrayNum);
    if ((TFunction<void___cdecl(void)> *)local_88.ContextCleanupFuncs.AllocatorInstance.Data !=
        (TFunction<void___cdecl(void)> *)0x0) {
      FMemory::Free(local_88.ContextCleanupFuncs.AllocatorInstance.Data);
    }
    DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
              ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
               local_88.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
               local_88.ContextObjectCleanupFuncs.Pairs.ArrayNum);
    if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
        local_88.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
        (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
      FMemory::Free(local_88.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
    }
    if (local_88.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.ContextObjects.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2d8))(this,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetIcon_Implementation @ 142c5e1b0

FScriptSlateIcon * __thiscall
UToolMenuEntryScript::GetIcon_Implementation
          (UToolMenuEntryScript *this,FScriptSlateIcon *__return_storage_ptr__,
          FToolMenuContext *param_1)

{
  FName FVar1;
  FName FVar2;
  
  FVar2 = (this->Data).Icon.StyleName;
  FVar1 = (this->Data).Icon.SmallStyleName;
  __return_storage_ptr__->StyleSetName = (this->Data).Icon.StyleSetName;
  __return_storage_ptr__->StyleName = FVar2;
  __return_storage_ptr__->SmallStyleName = FVar1;
  return __return_storage_ptr__;
}

// GetIfCanSafelyRouteCall @ 142c5e1d0

UToolMenuEntryScript * __cdecl
UToolMenuEntryScript::GetIfCanSafelyRouteCall
          (TWeakObjectPtr<UToolMenuEntryScript,FWeakObjectPtr> *param_1)

{
  UToolMenuEntryScript *pUVar1;
  FUObjectItem *pFVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  pUVar1 = (UToolMenuEntryScript *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  if (pUVar1 != (UToolMenuEntryScript *)0x0) {
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar1->_padding_ + 4))
    ;
    if (((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
      puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
      local_10 = local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar4 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar3);
      if (*(char *)(pFVar4 + 4) == '\0') {
        return pUVar1;
      }
    }
  }
  return (UToolMenuEntryScript *)0x0;
}

// GetLabel @ 142c5e2b0

FText * __thiscall
UToolMenuEntryScript::GetLabel
          (UToolMenuEntryScript *this,FText *__return_storage_ptr__,FToolMenuContext *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 local_res20 [8];
  FToolMenuContext local_98;
  FText local_30;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UToolMenuEntryScript_GetLabel);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_98.bIsEditing = false;
    local_98.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ContextObjects.ArrayNum = 0;
    local_98.ContextObjects.ArrayMax = 0;
    local_98.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    local_98.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
    local_98.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
    local_98.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ContextCleanupFuncs.ArrayNum = 0;
    local_98.ContextCleanupFuncs.ArrayMax = 0;
    local_98.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.CommandLists.ArrayNum = 0;
    local_98.CommandLists.ArrayMax = 0;
    local_98.CommandList.Object = (FUICommandList *)0x0;
    local_98.CommandList.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_98.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Extenders.ArrayNum = 0;
    local_98.Extenders.ArrayMax = 0;
    FText::FText(&local_30);
    FToolMenuContext::operator=(&local_98,param_1);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_98);
    (__return_storage_ptr__->TextData).Reference = local_30.TextData.Reference;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 8))
                (local_30.TextData.Reference,local_res20);
    }
    __return_storage_ptr__->Flags = local_30.Flags;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
    }
    DestructItems<TSharedPtr<FExtender,1>,int>
              ((TSharedPtr<FExtender,1> *)local_98.Extenders.AllocatorInstance.Data,
               local_98.Extenders.ArrayNum);
    if ((TSharedPtr<FExtender,1> *)local_98.Extenders.AllocatorInstance.Data !=
        (TSharedPtr<FExtender,1> *)0x0) {
      FMemory::Free(local_98.Extenders.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.CommandList.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FUICommandList,1>,int>
              ((TSharedPtr<FUICommandList,1> *)local_98.CommandLists.AllocatorInstance.Data,
               local_98.CommandLists.ArrayNum);
    if ((TSharedPtr<FUICommandList,1> *)local_98.CommandLists.AllocatorInstance.Data !=
        (TSharedPtr<FUICommandList,1> *)0x0) {
      FMemory::Free(local_98.CommandLists.AllocatorInstance.Data);
    }
    DestructItems<TFunction<void___cdecl(void)>,int>
              ((TFunction<void___cdecl(void)> *)local_98.ContextCleanupFuncs.AllocatorInstance.Data,
               local_98.ContextCleanupFuncs.ArrayNum);
    if ((TFunction<void___cdecl(void)> *)local_98.ContextCleanupFuncs.AllocatorInstance.Data !=
        (TFunction<void___cdecl(void)> *)0x0) {
      FMemory::Free(local_98.ContextCleanupFuncs.AllocatorInstance.Data);
    }
    DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
              ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
               local_98.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
               local_98.ContextObjectCleanupFuncs.Pairs.ArrayNum);
    if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
        local_98.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
        (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
      FMemory::Free(local_98.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
    }
    if (local_98.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.ContextObjects.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2c8))(this,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetLabel_Implementation @ 142c5e4a0

FText * __thiscall
UToolMenuEntryScript::GetLabel_Implementation
          (UToolMenuEntryScript *this,FText *__return_storage_ptr__,FToolMenuContext *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->Data).Label.TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->Data).Label.Flags;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 142c5f5f0

UClass * __cdecl UToolMenuEntryScript::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuEntryScript.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuEntryScript",
               &Z_Registration_Info_UClass_UToolMenuEntryScript.InnerSingleton,
               StaticRegisterNativesUToolMenuEntryScript,0xb0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UToolMenuEntryScript>,
               InternalVTableHelperCtorCaller<UToolMenuEntryScript>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuEntryScript.InnerSingleton;
}

// GetSlateIcon @ 142c5fb40

FSlateIcon * __thiscall
UToolMenuEntryScript::GetSlateIcon
          (UToolMenuEntryScript *this,FSlateIcon *__return_storage_ptr__,FToolMenuContext *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  FName FVar2;
  FName FVar3;
  FName local_c8;
  FName FStack_c0;
  FName local_b8;
  FToolMenuContext local_a8;
  FName local_40;
  FName FStack_38;
  FName local_30;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UToolMenuEntryScript_GetIcon);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_a8.bIsEditing = false;
    local_a8.CommandList.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ContextObjects.ArrayNum = 0;
    local_a8.ContextObjects.ArrayMax = 0;
    local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    local_a8.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
    local_a8.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
    local_a8.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ContextCleanupFuncs.ArrayNum = 0;
    local_a8.ContextCleanupFuncs.ArrayMax = 0;
    local_a8.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.CommandLists.ArrayNum = 0;
    local_a8.CommandLists.ArrayMax = 0;
    local_a8.CommandList.Object = (FUICommandList *)0x0;
    local_a8.Extenders.ArrayNum = 0;
    local_a8.Extenders.ArrayMax = 0;
    local_40.ComparisonIndex.Value = 0;
    local_40.Number = 0;
    FStack_38.ComparisonIndex.Value = 0;
    FStack_38.Number = 0;
    local_30.ComparisonIndex.Value = 0;
    local_30.Number = 0;
    FToolMenuContext::operator=(&local_a8,param_1);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_a8);
    local_c8 = local_40;
    FStack_c0 = FStack_38;
    local_b8 = local_30;
    DestructItems<TSharedPtr<FExtender,1>,int>
              ((TSharedPtr<FExtender,1> *)local_a8.Extenders.AllocatorInstance.Data,
               local_a8.Extenders.ArrayNum);
    if ((TSharedPtr<FExtender,1> *)local_a8.Extenders.AllocatorInstance.Data !=
        (TSharedPtr<FExtender,1> *)0x0) {
      FMemory::Free(local_a8.Extenders.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.CommandList.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FUICommandList,1>,int>
              ((TSharedPtr<FUICommandList,1> *)local_a8.CommandLists.AllocatorInstance.Data,
               local_a8.CommandLists.ArrayNum);
    if ((TSharedPtr<FUICommandList,1> *)local_a8.CommandLists.AllocatorInstance.Data !=
        (TSharedPtr<FUICommandList,1> *)0x0) {
      FMemory::Free(local_a8.CommandLists.AllocatorInstance.Data);
    }
    DestructItems<TFunction<void___cdecl(void)>,int>
              ((TFunction<void___cdecl(void)> *)local_a8.ContextCleanupFuncs.AllocatorInstance.Data,
               local_a8.ContextCleanupFuncs.ArrayNum);
    if ((TFunction<void___cdecl(void)> *)local_a8.ContextCleanupFuncs.AllocatorInstance.Data !=
        (TFunction<void___cdecl(void)> *)0x0) {
      FMemory::Free(local_a8.ContextCleanupFuncs.AllocatorInstance.Data);
    }
    DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
              ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
               local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
               local_a8.ContextObjectCleanupFuncs.Pairs.ArrayNum);
    if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
        local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
        (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
      FMemory::Free(local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
    }
    if (local_a8.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.ContextObjects.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2d8))(this,&local_c8,param_1);
  }
  FVar2 = local_b8;
  if (((local_b8 == (FName)0x0) && (FVar2 = FVar3, local_c8 == (FName)0x0)) &&
     (FStack_c0 == (FName)0x0)) {
    FSlateIcon::FSlateIcon(__return_storage_ptr__);
  }
  else {
    FSlateIcon::FSlateIcon(__return_storage_ptr__,local_c8,FStack_c0,FVar2,(FName)0x0);
  }
  return __return_storage_ptr__;
}

// GetToolTip @ 142c60520

FText * __thiscall
UToolMenuEntryScript::GetToolTip
          (UToolMenuEntryScript *this,FText *__return_storage_ptr__,FToolMenuContext *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 local_res20 [8];
  FToolMenuContext local_98;
  FText local_30;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UToolMenuEntryScript_GetToolTip);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_98.bIsEditing = false;
    local_98.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ContextObjects.ArrayNum = 0;
    local_98.ContextObjects.ArrayMax = 0;
    local_98.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    local_98.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
    local_98.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
    local_98.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ContextCleanupFuncs.ArrayNum = 0;
    local_98.ContextCleanupFuncs.ArrayMax = 0;
    local_98.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.CommandLists.ArrayNum = 0;
    local_98.CommandLists.ArrayMax = 0;
    local_98.CommandList.Object = (FUICommandList *)0x0;
    local_98.CommandList.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_98.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Extenders.ArrayNum = 0;
    local_98.Extenders.ArrayMax = 0;
    FText::FText(&local_30);
    FToolMenuContext::operator=(&local_98,param_1);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_98);
    (__return_storage_ptr__->TextData).Reference = local_30.TextData.Reference;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 8))
                (local_30.TextData.Reference,local_res20);
    }
    __return_storage_ptr__->Flags = local_30.Flags;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
    }
    DestructItems<TSharedPtr<FExtender,1>,int>
              ((TSharedPtr<FExtender,1> *)local_98.Extenders.AllocatorInstance.Data,
               local_98.Extenders.ArrayNum);
    if ((TSharedPtr<FExtender,1> *)local_98.Extenders.AllocatorInstance.Data !=
        (TSharedPtr<FExtender,1> *)0x0) {
      FMemory::Free(local_98.Extenders.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.CommandList.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FUICommandList,1>,int>
              ((TSharedPtr<FUICommandList,1> *)local_98.CommandLists.AllocatorInstance.Data,
               local_98.CommandLists.ArrayNum);
    if ((TSharedPtr<FUICommandList,1> *)local_98.CommandLists.AllocatorInstance.Data !=
        (TSharedPtr<FUICommandList,1> *)0x0) {
      FMemory::Free(local_98.CommandLists.AllocatorInstance.Data);
    }
    DestructItems<TFunction<void___cdecl(void)>,int>
              ((TFunction<void___cdecl(void)> *)local_98.ContextCleanupFuncs.AllocatorInstance.Data,
               local_98.ContextCleanupFuncs.ArrayNum);
    if ((TFunction<void___cdecl(void)> *)local_98.ContextCleanupFuncs.AllocatorInstance.Data !=
        (TFunction<void___cdecl(void)> *)0x0) {
      FMemory::Free(local_98.ContextCleanupFuncs.AllocatorInstance.Data);
    }
    DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
              ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
               local_98.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
               local_98.ContextObjectCleanupFuncs.Pairs.ArrayNum);
    if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
        local_98.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
        (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
      FMemory::Free(local_98.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
    }
    if (local_98.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.ContextObjects.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2d0))(this,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetToolTip_Implementation @ 142c606b0

FText * __thiscall
UToolMenuEntryScript::GetToolTip_Implementation
          (UToolMenuEntryScript *this,FText *__return_storage_ptr__,FToolMenuContext *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->Data).ToolTip.TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->Data).ToolTip.Flags;
  return __return_storage_ptr__;
}

// InitEntry @ 142c616b0

void __thiscall
UToolMenuEntryScript::InitEntry
          (UToolMenuEntryScript *this,FName param_1,FName param_2,FName param_3,FName param_4,
          FText *param_5,FText *param_6)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  
  (this->Data).OwnerName = param_1;
  (this->Data).Menu = param_2;
  (this->Data).Section = param_3;
  (this->Data).Name = param_4;
  pIVar1 = (param_5->TextData).Reference;
  pIVar2 = (this->Data).Label.TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Data).Label.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&param_4);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Data).Label.Flags = param_5->Flags;
  pIVar1 = (this->Data).ToolTip.TextData.Reference;
  pIVar2 = (param_6->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (this->Data).ToolTip.TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_4);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (this->Data).ToolTip.Flags = param_6->Flags;
  return;
}

// IsVisible @ 142c63c00

bool __thiscall
UToolMenuEntryScript::IsVisible(UToolMenuEntryScript *this,FToolMenuContext *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 uVar2;
  FToolMenuContext local_78;
  char local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UToolMenuEntryScript_IsVisible);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_78.bIsEditing = false;
    local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ContextObjects.ArrayNum = 0;
    local_78.ContextObjects.ArrayMax = 0;
    local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
    local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
    local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ContextCleanupFuncs.ArrayNum = 0;
    local_78.ContextCleanupFuncs.ArrayMax = 0;
    local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.CommandLists.ArrayNum = 0;
    local_78.CommandLists.ArrayMax = 0;
    local_78.CommandList.Object = (FUICommandList *)0x0;
    local_78.CommandList.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Extenders.ArrayNum = 0;
    local_78.Extenders.ArrayMax = 0;
    local_10 = '\0';
    FToolMenuContext::operator=(&local_78,param_1);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_78);
    uVar2 = local_10 != '\0';
    DestructItems<TSharedPtr<FExtender,1>,int>
              ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
               local_78.Extenders.ArrayNum);
    if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
        (TSharedPtr<FExtender,1> *)0x0) {
      FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.CommandList.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FUICommandList,1>,int>
              ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
               local_78.CommandLists.ArrayNum);
    if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
        (TSharedPtr<FUICommandList,1> *)0x0) {
      FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
    }
    DestructItems<TFunction<void___cdecl(void)>,int>
              ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data,
               local_78.ContextCleanupFuncs.ArrayNum);
    if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
        (TFunction<void___cdecl(void)> *)0x0) {
      FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
    }
    DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
              ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
               local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
               local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
    if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
        local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
        (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
      FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
    }
    if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
    }
  }
  else {
    uVar2 = (**(code **)(this->_padding_ + 0x2c0))(this);
  }
  return (bool)uVar2;
}

// IsVisible_Implementation @ 142c63d60

bool __thiscall
UToolMenuEntryScript::IsVisible_Implementation(UToolMenuEntryScript *this,FToolMenuContext *param_1)

{
  return true;
}

// RegisterMenuEntry @ 142c6d3a0

void __thiscall UToolMenuEntryScript::RegisterMenuEntry(UToolMenuEntryScript *this)

{
  bool bVar1;
  
  bVar1 = UToolMenus::AddMenuEntryObject(this);
  this->bHasRegisteredMenuEntry = bVar1;
  return;
}

// ShowInToolbarTopLevel @ 142c70b60

bool __thiscall
UToolMenuEntryScript::ShowInToolbarTopLevel(UToolMenuEntryScript *this,FToolMenuContext *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 uVar2;
  FToolMenuContext local_78;
  char local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UToolMenuEntryScript_ShowInToolbarTopLevel);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_78.bIsEditing = false;
    local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ContextObjects.ArrayNum = 0;
    local_78.ContextObjects.ArrayMax = 0;
    local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
    local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
    local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ContextCleanupFuncs.ArrayNum = 0;
    local_78.ContextCleanupFuncs.ArrayMax = 0;
    local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.CommandLists.ArrayNum = 0;
    local_78.CommandLists.ArrayMax = 0;
    local_78.CommandList.Object = (FUICommandList *)0x0;
    local_78.CommandList.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Extenders.ArrayNum = 0;
    local_78.Extenders.ArrayMax = 0;
    local_10 = '\0';
    FToolMenuContext::operator=(&local_78,param_1);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_78);
    uVar2 = local_10 != '\0';
    DestructItems<TSharedPtr<FExtender,1>,int>
              ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
               local_78.Extenders.ArrayNum);
    if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
        (TSharedPtr<FExtender,1> *)0x0) {
      FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.CommandList.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FUICommandList,1>,int>
              ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
               local_78.CommandLists.ArrayNum);
    if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
        (TSharedPtr<FUICommandList,1> *)0x0) {
      FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
    }
    DestructItems<TFunction<void___cdecl(void)>,int>
              ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data,
               local_78.ContextCleanupFuncs.ArrayNum);
    if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
        (TFunction<void___cdecl(void)> *)0x0) {
      FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
    }
    DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
              ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
               local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
               local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
    if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
        local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
        (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
      FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
    }
    if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
    }
  }
  else {
    uVar2 = (**(code **)(this->_padding_ + 0x2e0))(this);
  }
  return (bool)uVar2;
}

// ShowInToolbarTopLevel_Implementation @ 142c70cc0

bool __thiscall
UToolMenuEntryScript::ShowInToolbarTopLevel_Implementation
          (UToolMenuEntryScript *this,FToolMenuContext *param_1)

{
  return false;
}

// StaticRegisterNativesUToolMenuEntryScript @ 142c70f40

void __cdecl UToolMenuEntryScript::StaticRegisterNativesUToolMenuEntryScript(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UToolMenuEntryScript_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ToMenuEntry @ 142c71220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenuEntryScript::ToMenuEntry(UToolMenuEntryScript *this,FToolMenuEntry *param_1)

{
  bool bVar1;
  bool bVar2;
  EMultiBlockType EVar3;
  EUserInterfaceActionType EVar4;
  FName FVar5;
  EToolMenuInsertFallback EVar6;
  undefined2 uVar7;
  FToolMenuEntry *pFVar8;
  UToolMenus *pUVar9;
  FToolMenuOwner *pFVar10;
  FUIAction *pFVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  undefined1 auStackY_a98 [32];
  FToolMenuOwner_u_0 local_a48;
  FMRSWRecursiveAccessDetector *pFStack_a40;
  char local_a38;
  undefined1 local_a28 [24];
  undefined1 local_a10 [8];
  ForAnyElementType FStack_a08;
  ulonglong local_a00;
  undefined1 local_9f8 [24];
  undefined1 local_9e0 [8];
  ForAnyElementType FStack_9d8;
  ulonglong local_9d0;
  undefined1 local_9c8 [8];
  ForAnyElementType local_9c0;
  int local_9b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_9b0;
  ForAnyElementType FStack_9a8;
  int local_9a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_998;
  ForAnyElementType FStack_990;
  int local_988;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_980;
  ForAnyElementType FStack_978;
  int local_970;
  undefined8 local_960;
  undefined1 local_958 [40];
  undefined1 local_930 [8];
  ForAnyElementType FStack_928;
  ulonglong local_920;
  FToolMenuOwner_u_0 local_918 [2];
  undefined1 local_908 [240];
  FMRSWRecursiveAccessDetector local_818 [3];
  FMRSWRecursiveAccessDetector local_800 [3];
  FMRSWRecursiveAccessDetector local_7e8 [3];
  bool local_7d0;
  FToolMenuEntry local_7c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a98;
  if ((this->Data).Advanced.bIsSubMenu == false) {
    EVar3 = (this->Data).Advanced.EntryType;
    if (EVar3 != ToolBarButton) {
      if (EVar3 == ToolBarComboButton) {
        FVar12 = (this->Data).Advanced.TutorialHighlight;
        bVar1 = (this->Data).Advanced.bSimpleComboBox;
        TAttribute<FSlateIcon>::TAttribute<FSlateIcon><FScriptSlateIcon>
                  ((TAttribute<FSlateIcon> *)local_958,&(this->Data).Icon);
        TAttribute<FText>::TAttribute<FText><FText>
                  ((TAttribute<FText> *)local_a28,&(this->Data).ToolTip);
        TAttribute<FText>::TAttribute<FText><FText>
                  ((TAttribute<FText> *)local_9f8,&(this->Data).Label);
        FVar5 = (this->Data).Name;
        local_9c8 = (undefined1  [8])0x0;
        local_9c0.Data = (FScriptContainerElement *)0x0;
        local_9b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_9a8.Data = (FScriptContainerElement *)0x0;
        local_9b8 = 0;
        local_998.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_990.Data = (FScriptContainerElement *)0x0;
        local_9a0 = 0;
        local_980.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_978.Data = (FScriptContainerElement *)0x0;
        local_988 = 0;
        local_970 = 0;
        local_908[0x68] = false;
        local_908[0xd0] = false;
        local_7d0 = false;
        pUVar9 = UToolMenus::Get();
        pFVar10 = UToolMenus::CurrentOwner(pUVar9,(FToolMenuOwner *)&local_918[0].ValueName);
        local_a48.ValueName = *(FStoreName *)&pFVar10->field0_0x0;
        pFStack_a40 = *(FMRSWRecursiveAccessDetector **)&pFVar10->ValueType;
        FToolMenuEntry::FToolMenuEntry
                  (&local_7c8,(FToolMenuOwner *)&local_a48.ValueName,FVar5,ToolBarComboButton);
        local_7c8.TutorialHighlightName = FVar12;
        TAttribute<FText>::operator=(&local_7c8.Label,(TAttribute<FText> *)local_9f8);
        TAttribute<FText>::operator=(&local_7c8.ToolTip,(TAttribute<FText> *)local_a28);
        local_7c8.Icon.bIsSet = local_958[0x20];
        local_7c8.Icon.Value.StyleSetName.ComparisonIndex.Value = local_958._0_4_;
        local_7c8.Icon.Value.StyleSetName.Number = local_958._4_4_;
        local_7c8.Icon.Value.StyleName.ComparisonIndex.Value = local_958._8_4_;
        local_7c8.Icon.Value.StyleName.Number = local_958._12_4_;
        local_7c8.Icon.Value.SmallStyleName.ComparisonIndex.Value = local_958._16_4_;
        local_7c8.Icon.Value.SmallStyleName.Number = local_958._20_4_;
        local_7c8.Icon.Value.StatusOverlayStyleName.ComparisonIndex.Value = local_958._24_4_;
        local_7c8.Icon.Value.StatusOverlayStyleName.Number = local_958._28_4_;
        TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  (&local_7c8.Icon.Getter,
                   (TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *)local_930);
        FToolUIActionChoice::operator=(&local_7c8.Action,(FToolUIActionChoice *)local_908);
        FNewToolMenuChoice::operator=
                  (&local_7c8.ToolBarData.ComboButtonContextMenuGenerator,
                   (FNewToolMenuChoice *)local_9c8);
        local_7c8.ToolBarData.bSimpleComboBox = bVar1;
        FToolMenuEntry::operator=(param_1,&local_7c8);
        FToolMenuEntry::~FToolMenuEntry(&local_7c8);
        FToolUIActionChoice::~FToolUIActionChoice((FToolUIActionChoice *)local_908);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_980,(FWriteAccessScope *)&local_a48.ValueName);
        if ((local_970 != 0) && (FStack_978.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_978.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_978,0,0,0x10)
          ;
          local_970 = 0;
        }
        if (local_a38 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (pFStack_a40,(FDestructionSentinel *)&local_a48.ValueName);
        }
        if (FStack_978.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_978.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_980.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_998,(FWriteAccessScope *)&local_a48.ValueName);
        if ((local_988 != 0) && (FStack_990.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_990.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_990,0,0,0x10)
          ;
          local_988 = 0;
        }
        if (local_a38 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (pFStack_a40,(FDestructionSentinel *)&local_a48.ValueName);
        }
        if (FStack_990.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_990.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_998.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_9b0,(FWriteAccessScope *)&local_a48.ValueName);
        if ((local_9a0 != 0) && (FStack_9a8.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_9a8.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9a8,0,0,0x10)
          ;
          local_9a0 = 0;
        }
        if (local_a38 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (pFStack_a40,(FDestructionSentinel *)&local_a48.ValueName);
        }
        if (FStack_9a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_9a8.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_9b0.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9c8,
                   (FWriteAccessScope *)&local_a48.ValueName);
        if ((local_9b8 != 0) && (local_9c0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_9c0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_9c0,0,0,0x10);
          local_9b8 = 0;
        }
        if (local_a38 == '\0') {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    (pFStack_a40,(FDestructionSentinel *)&local_a48.ValueName);
        }
        if (local_9c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_9c0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_9c8);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9e0);
        if (FStack_9d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_9d8.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_9e0);
        if ((ITextData *)local_9f8._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_9f8._0_8_ + 0x10))();
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a10);
        if (FStack_a08.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_a08.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_a10);
        if ((ITextData *)local_a28._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_a28._0_8_ + 0x10))();
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_930);
        if (FStack_928.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_928.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_930);
      }
      else {
        local_a48.ValueInt64 = 0;
        pFVar11 = FUIAction::FUIAction((FUIAction *)local_9c8);
        FUIAction::FUIAction((FUIAction *)local_908,pFVar11);
        local_908[0x68] = true;
        local_908[0xd0] = false;
        local_7d0 = false;
        TAttribute<FSlateIcon>::TAttribute<FSlateIcon><FScriptSlateIcon>
                  ((TAttribute<FSlateIcon> *)local_958,&(this->Data).Icon);
        TAttribute<FText>::TAttribute<FText><FText>
                  ((TAttribute<FText> *)local_a28,&(this->Data).ToolTip);
        TAttribute<FText>::TAttribute<FText><FText>
                  ((TAttribute<FText> *)local_9f8,&(this->Data).Label);
        pFVar8 = FToolMenuEntry::InitMenuEntry
                           (&local_7c8,(this->Data).Name,(TAttribute<FText> *)local_9f8,
                            (TAttribute<FText> *)local_a28,(TAttribute<FSlateIcon> *)local_958,
                            (FToolUIActionChoice *)local_908,Button,(FName)0x0);
        FToolMenuEntry::operator=(param_1,pFVar8);
        FToolMenuEntry::~FToolMenuEntry(&local_7c8);
        TAttribute<FText>::~TAttribute<FText>((TAttribute<FText> *)local_9f8);
        TAttribute<FText>::~TAttribute<FText>((TAttribute<FText> *)local_a28);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_930);
        if (FStack_928.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_928.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_930);
        FToolUIActionChoice::~FToolUIActionChoice((FToolUIActionChoice *)local_908);
        FUIAction::~FUIAction((FUIAction *)local_9c8);
        param_1->UserInterfaceActionType = (this->Data).Advanced.UserInterfaceActionType;
        param_1->TutorialHighlightName = (this->Data).Advanced.TutorialHighlight;
      }
      goto LAB_142c71f75;
    }
    FVar12 = (this->Data).Icon.SmallStyleName;
    FVar14.ComparisonIndex.Value = 0;
    FVar14.Number = 0;
    FVar5 = (this->Data).Advanced.TutorialHighlight;
    EVar4 = (this->Data).Advanced.UserInterfaceActionType;
    FVar13 = (this->Data).Icon.StyleSetName;
    if (FVar12 == (FName)0x0) {
      if ((FVar13 != (FName)0x0) || ((this->Data).Icon.StyleName != (FName)0x0)) {
        local_918[0].ValueInt64 = 0;
        FVar12 = FVar14;
        goto LAB_142c71742;
      }
      FSlateIcon::FSlateIcon((FSlateIcon *)local_958);
    }
    else {
LAB_142c71742:
      local_a48.ValueInt64 = 0;
      FSlateIcon::FSlateIcon
                ((FSlateIcon *)local_958,FVar13,(this->Data).Icon.StyleName,FVar12,(FName)0x0);
    }
    local_9f8._0_8_ = (this->Data).ToolTip.TextData.Reference;
    local_920 = 0;
    local_958[0x20] = true;
    local_930 = (undefined1  [8])0x0;
    FStack_928.Data = (FScriptContainerElement *)0x0;
    if ((ITextData *)local_9f8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_9f8._0_8_ + 8))(local_9f8._0_8_,&local_960);
    }
    local_9f8._8_4_ = (this->Data).ToolTip.Flags;
    local_a28._0_8_ = (this->Data).Label.TextData.Reference;
    local_9d0 = 0;
    local_9f8[0x10] = true;
    local_9e0 = (undefined1  [8])0x0;
    FStack_9d8.Data = (FScriptContainerElement *)0x0;
    if ((ITextData *)local_a28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a28._0_8_ + 8))(local_a28._0_8_,&local_960);
    }
    local_a28._8_4_ = (this->Data).Label.Flags;
    FVar12 = (this->Data).Name;
    local_a00 = 0;
    local_a28[0x10] = true;
    local_a10 = (undefined1  [8])0x0;
    FStack_a08.Data = (FScriptContainerElement *)0x0;
    local_908[0x68] = false;
    local_908[0xd0] = false;
    local_7d0 = false;
    pUVar9 = UToolMenus::Get();
    pFVar10 = UToolMenus::CurrentOwner(pUVar9,(FToolMenuOwner *)&local_918[0].ValueName);
    local_a48.ValueName = *(FStoreName *)&pFVar10->field0_0x0;
    pFStack_a40 = *(FMRSWRecursiveAccessDetector **)&pFVar10->ValueType;
    FToolMenuEntry::FToolMenuEntry
              (&local_7c8,(FToolMenuOwner *)&local_a48.ValueName,FVar12,ToolBarButton);
    local_7c8.TutorialHighlightName = FVar5;
    FText::operator=(&local_7c8.Label.Value,(FText *)local_a28);
    local_7c8.Label.bIsSet = local_a28[0x10];
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_7c8.Label.Getter,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_a10);
    FText::operator=(&local_7c8.ToolTip.Value,(FText *)local_9f8);
    local_7c8.ToolTip.bIsSet = local_9f8[0x10];
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_7c8.ToolTip.Getter,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_9e0);
    local_7c8.Icon.bIsSet = local_958[0x20];
    local_7c8.Icon.Value.StyleSetName.ComparisonIndex.Value = local_958._0_4_;
    local_7c8.Icon.Value.StyleSetName.Number = local_958._4_4_;
    local_7c8.Icon.Value.StyleName.ComparisonIndex.Value = local_958._8_4_;
    local_7c8.Icon.Value.StyleName.Number = local_958._12_4_;
    local_7c8.Icon.Value.SmallStyleName.ComparisonIndex.Value = local_958._16_4_;
    local_7c8.Icon.Value.SmallStyleName.Number = local_958._20_4_;
    local_7c8.Icon.Value.StatusOverlayStyleName.ComparisonIndex.Value = local_958._24_4_;
    local_7c8.Icon.Value.StatusOverlayStyleName.Number = local_958._28_4_;
    TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&local_7c8.Icon.Getter,
               (TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *)local_930);
    local_7c8.UserInterfaceActionType = EVar4;
    FToolUIActionChoice::operator=(&local_7c8.Action,(FToolUIActionChoice *)local_908);
    FToolMenuEntry::operator=(param_1,&local_7c8);
    FToolMenuEntry::~FToolMenuEntry(&local_7c8);
    if (local_7d0 != false) {
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_7e8);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_800);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_818);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(local_908 + 0xd8));
    }
    if (local_908[0xd0] != false) {
      FToolUIAction::~FToolUIAction((FToolUIAction *)(local_908 + 0x70));
    }
    if (local_908[0x68] != false) {
      FUIAction::~FUIAction((FUIAction *)local_908);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a10,
               (FWriteAccessScope *)&local_a48.ValueName);
    if (((int)local_a00 != 0) && (FStack_a08.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_a08.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a08,0,0,0x10);
      local_a00 = local_a00 & 0xffffffff00000000;
    }
    if (local_a38 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_a40,(FDestructionSentinel *)&local_a48.ValueName);
    }
    if (FStack_a08.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a08.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a10);
    if ((ITextData *)local_a28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a28._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9e0,
               (FWriteAccessScope *)&local_a48.ValueName);
    if (((int)local_9d0 != 0) && (FStack_9d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_9d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9d8,0,0,0x10);
      local_9d0 = local_9d0 & 0xffffffff00000000;
    }
    if (local_a38 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_a40,(FDestructionSentinel *)&local_a48.ValueName);
    }
    if (FStack_9d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_9d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9e0);
    if ((ITextData *)local_9f8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_9f8._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_930,
               (FWriteAccessScope *)&local_a48.ValueName);
    if (((int)local_920 != 0) && (FStack_928.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_928.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_928,0,0,0x10);
      local_920 = local_920 & 0xffffffff00000000;
    }
    if (local_a38 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_a40,(FDestructionSentinel *)&local_a48.ValueName);
    }
    if (FStack_928.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_928.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_930);
    goto LAB_142c71f75;
  }
  FVar12 = (this->Data).Icon.SmallStyleName;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
  bVar1 = (this->Data).Advanced.bShouldCloseWindowAfterMenuSelection;
  FVar5 = (this->Data).Icon.StyleSetName;
  local_a48.ValueInt64 = 0;
  if (FVar12 == (FName)0x0) {
    if ((FVar5 != (FName)0x0) || ((this->Data).Icon.StyleName != (FName)0x0)) {
      local_960 = 0;
      FVar12 = FVar13;
      goto LAB_142c712b5;
    }
    FSlateIcon::FSlateIcon((FSlateIcon *)local_958);
  }
  else {
LAB_142c712b5:
    local_918[0].ValueInt64 = 0;
    FSlateIcon::FSlateIcon
              ((FSlateIcon *)local_958,FVar5,(this->Data).Icon.StyleName,FVar12,(FName)0x0);
  }
  local_a28._0_8_ = (this->Data).ToolTip.TextData.Reference;
  bVar2 = (this->Data).Advanced.bOpenSubMenuOnClick;
  local_920 = 0;
  local_958[0x20] = true;
  local_9c8 = (undefined1  [8])0x0;
  local_9c0.Data = (FScriptContainerElement *)0x0;
  local_9b8 = 0;
  local_9a0 = 0;
  local_988 = 0;
  local_970 = 0;
  local_930 = (undefined1  [8])0x0;
  FStack_928.Data = (FScriptContainerElement *)0x0;
  local_9b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_9a8.Data = (FScriptContainerElement *)0x0;
  local_998.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_990.Data = (FScriptContainerElement *)0x0;
  local_980.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_978.Data = (FScriptContainerElement *)0x0;
  if ((ITextData *)local_a28._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a28._0_8_ + 8))(local_a28._0_8_,&local_960);
  }
  local_a28._8_4_ = (this->Data).ToolTip.Flags;
  local_9f8._0_8_ = (this->Data).Label.TextData.Reference;
  local_a00 = 0;
  local_a28[0x10] = true;
  local_a10 = (undefined1  [8])0x0;
  FStack_a08.Data = (FScriptContainerElement *)0x0;
  if ((ITextData *)local_9f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_9f8._0_8_ + 8))(local_9f8._0_8_,&local_960);
  }
  local_9f8._8_4_ = (this->Data).Label.Flags;
  local_9f8[0x10] = true;
  local_9e0 = (undefined1  [8])0x0;
  FStack_9d8.Data = (FScriptContainerElement *)0x0;
  local_9d0 = 0;
  pFVar8 = FToolMenuEntry::InitSubMenu
                     (&local_7c8,(this->Data).Name,(TAttribute<FText> *)local_9f8,
                      (TAttribute<FText> *)local_a28,(FNewToolMenuChoice *)local_9c8,bVar2,
                      (TAttribute<FSlateIcon> *)local_958,bVar1,(FName)local_a48.ValueName);
  FToolMenuEntry::operator=(param_1,pFVar8);
  FToolMenuEntry::~FToolMenuEntry(&local_7c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9e0,
             (FWriteAccessScope *)&local_a48.ValueName);
  if (((int)local_9d0 != 0) && (FStack_9d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9d8,0,0,0x10);
    local_9d0 = local_9d0 & 0xffffffff00000000;
  }
  if (local_a38 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (pFStack_a40,(FDestructionSentinel *)&local_a48.ValueName);
  }
  if (FStack_9d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9e0);
  if ((ITextData *)local_9f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_9f8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a10,
             (FWriteAccessScope *)&local_a48.ValueName);
  if (((int)local_a00 != 0) && (FStack_a08.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a08.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a08,0,0,0x10);
    local_a00 = local_a00 & 0xffffffff00000000;
  }
  if (local_a38 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (pFStack_a40,(FDestructionSentinel *)&local_a48.ValueName);
  }
  if (FStack_a08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a08.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a10);
  if ((ITextData *)local_a28._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_a28._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_980,(FWriteAccessScope *)&local_a48.ValueName);
  if ((local_970 != 0) && (FStack_978.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_978.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_978,0,0,0x10);
    local_970 = 0;
  }
  if (local_a38 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (pFStack_a40,(FDestructionSentinel *)&local_a48.ValueName);
  }
  if (FStack_978.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_978.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_980.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_998,(FWriteAccessScope *)&local_a48.ValueName);
  if ((local_988 != 0) && (FStack_990.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_990.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_990,0,0,0x10);
    local_988 = 0;
  }
  if (local_a38 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (pFStack_a40,(FDestructionSentinel *)&local_a48.ValueName);
  }
  if (FStack_990.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_990.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_998.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_9b0,(FWriteAccessScope *)&local_a48.ValueName);
  if ((local_9a0 != 0) && (FStack_9a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9a8,0,0,0x10);
    local_9a0 = 0;
  }
  if (local_a38 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (pFStack_a40,(FDestructionSentinel *)&local_a48.ValueName);
  }
  if (FStack_9a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_9b0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9c8,
             (FWriteAccessScope *)&local_a48.ValueName);
  if ((local_9b8 != 0) && (local_9c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_9c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_9c0,0,0,0x10);
    local_9b8 = 0;
  }
  if (local_a38 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (pFStack_a40,(FDestructionSentinel *)&local_a48.ValueName);
  }
  if (local_9c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_930,
             (FWriteAccessScope *)&local_a48.ValueName);
  if (((int)local_920 != 0) && (FStack_928.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_928.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_928,0,0,0x10);
    local_920 = local_920 & 0xffffffff00000000;
  }
  if (local_a38 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (pFStack_a40,(FDestructionSentinel *)&local_a48.ValueName);
  }
  if (FStack_928.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_928.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_930);
LAB_142c71f75:
  if ((this->Data).InsertPosition.Position != Default) {
    (param_1->InsertPosition).Name = (this->Data).InsertPosition.Name;
    EVar6 = (this->Data).InsertPosition.Fallback;
    uVar7 = *(undefined2 *)&(this->Data).InsertPosition.field_0xa;
    (param_1->InsertPosition).Position = (this->Data).InsertPosition.Position;
    (param_1->InsertPosition).Fallback = EVar6;
    *(undefined2 *)&(param_1->InsertPosition).field_0xa = uVar7;
  }
  param_1->StyleNameOverride = (this->Data).Advanced.StyleNameOverride;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UToolMenuEntryScript *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (param_1->ScriptObject).field0_0x0.DebugPtr = this;
  local_a48 = (FToolMenuOwner_u_0)*(FToolMenuOwner_u_0 *)&(this->Data).OwnerName;
  if ((FName)local_a48.ValueInt64 == (FName)0x0) {
    local_a48.ValueName.Index = 0;
    local_a48.ValueName.Number = 0;
    pFStack_a40 = (FMRSWRecursiveAccessDetector *)((ulonglong)pFStack_a40._1_7_ << 8);
  }
  else {
    pFStack_a40 = (FMRSWRecursiveAccessDetector *)CONCAT71(pFStack_a40._1_7_,2);
  }
  (param_1->Owner).field0_0x0.ValueInt64 = (long64)local_a48;
  *(FMRSWRecursiveAccessDetector **)&(param_1->Owner).ValueType = pFStack_a40;
  return;
}

// UnregisterMenuEntry @ 142c735b0

void __thiscall UToolMenuEntryScript::UnregisterMenuEntry(UToolMenuEntryScript *this)

{
  if (this->bHasRegisteredMenuEntry != false) {
    UToolMenus::RemoveMenuEntryObject(this);
    this->bHasRegisteredMenuEntry = false;
  }
  return;
}

// execCanExecute @ 142c76360

void __cdecl UToolMenuEntryScript::execCanExecute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_78 [8];
  void *local_70;
  undefined8 local_68;
  TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *local_60;
  undefined8 local_58;
  TFunction<void___cdecl(void)> *local_50;
  undefined8 local_48;
  TSharedPtr<FUICommandList,1> *local_40;
  undefined8 local_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *local_28;
  TSharedPtr<FExtender,1> *pTStack_20;
  undefined8 local_18;
  
  local_78[0] = '\0';
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0;
  local_58 = 0;
  local_50 = (TFunction<void___cdecl(void)> *)0x0;
  local_48 = 0;
  local_40 = (TSharedPtr<FUICommandList,1> *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_28 = (TReferenceControllerBase<1> *)0x0;
  pTStack_20 = (TSharedPtr<FExtender,1> *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar3 = local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,puVar3);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<TSharedPtr<FExtender,1>,int>(pTStack_20,(int)local_18);
  if (pTStack_20 != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(pTStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  DestructItems<TSharedPtr<FUICommandList,1>,int>(local_40,(int)local_38);
  if (local_40 != (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_40);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>(local_50,(int)local_48);
  if (local_50 != (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_50);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            (local_60,(int)local_58);
  if (local_60 != (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// execGetCheckState @ 142c76d00

void __cdecl UToolMenuEntryScript::execGetCheckState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_78 [8];
  void *local_70;
  undefined8 local_68;
  TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *local_60;
  undefined8 local_58;
  TFunction<void___cdecl(void)> *local_50;
  undefined8 local_48;
  TSharedPtr<FUICommandList,1> *local_40;
  undefined8 local_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *local_28;
  TSharedPtr<FExtender,1> *pTStack_20;
  undefined8 local_18;
  
  local_78[0] = '\0';
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0;
  local_58 = 0;
  local_50 = (TFunction<void___cdecl(void)> *)0x0;
  local_48 = 0;
  local_40 = (TSharedPtr<FUICommandList,1> *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_28 = (TReferenceControllerBase<1> *)0x0;
  pTStack_20 = (TSharedPtr<FExtender,1> *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar3 = local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,puVar3);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<TSharedPtr<FExtender,1>,int>(pTStack_20,(int)local_18);
  if (pTStack_20 != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(pTStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  DestructItems<TSharedPtr<FUICommandList,1>,int>(local_40,(int)local_38);
  if (local_40 != (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_40);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>(local_50,(int)local_48);
  if (local_50 != (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_50);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            (local_60,(int)local_58);
  if (local_60 != (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// execGetIcon @ 142c76e70

void __cdecl UToolMenuEntryScript::execGetIcon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uchar *puVar4;
  uchar local_98 [8];
  void *local_90;
  undefined8 local_88;
  TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *local_80;
  undefined8 local_78;
  TFunction<void___cdecl(void)> *local_70;
  undefined8 local_68;
  TSharedPtr<FUICommandList,1> *local_60;
  undefined8 local_58;
  undefined8 local_50;
  TReferenceControllerBase<1> *local_48;
  TSharedPtr<FExtender,1> *pTStack_40;
  undefined8 local_38;
  undefined1 local_28 [32];
  
  local_98[0] = '\0';
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80 = (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0;
  local_78 = 0;
  local_70 = (TFunction<void___cdecl(void)> *)0x0;
  local_68 = 0;
  local_60 = (TSharedPtr<FUICommandList,1> *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_48 = (TReferenceControllerBase<1> *)0x0;
  pTStack_40 = (TSharedPtr<FExtender,1> *)0x0;
  local_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar4 = local_98;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,local_28,puVar4);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  DestructItems<TSharedPtr<FExtender,1>,int>(pTStack_40,(int)local_38);
  if (pTStack_40 != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(pTStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  DestructItems<TSharedPtr<FUICommandList,1>,int>(local_60,(int)local_58);
  if (local_60 != (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_60);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>(local_70,(int)local_68);
  if (local_70 != (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_70);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            (local_80,(int)local_78);
  if (local_80 != (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  return;
}

// execGetLabel @ 142c77110

void __cdecl UToolMenuEntryScript::execGetLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  uchar *puVar3;
  longlong *local_88 [2];
  uchar local_78 [8];
  void *local_70;
  undefined8 local_68;
  TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *local_60;
  undefined8 local_58;
  TFunction<void___cdecl(void)> *local_50;
  undefined8 local_48;
  TSharedPtr<FUICommandList,1> *local_40;
  undefined8 local_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *local_28;
  TSharedPtr<FExtender,1> *pTStack_20;
  undefined8 local_18;
  
  local_78[0] = '\0';
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0;
  local_58 = 0;
  local_50 = (TFunction<void___cdecl(void)> *)0x0;
  local_48 = 0;
  local_40 = (TSharedPtr<FUICommandList,1> *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_28 = (TReferenceControllerBase<1> *)0x0;
  pTStack_20 = (TSharedPtr<FExtender,1> *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar3 = local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = (FText *)(**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,local_88,puVar3);
  FText::operator=(param_3,pFVar2);
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  DestructItems<TSharedPtr<FExtender,1>,int>(pTStack_20,(int)local_18);
  if (pTStack_20 != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(pTStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  DestructItems<TSharedPtr<FUICommandList,1>,int>(local_40,(int)local_38);
  if (local_40 != (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_40);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>(local_50,(int)local_48);
  if (local_50 != (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_50);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            (local_60,(int)local_58);
  if (local_60 != (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// execGetToolTip @ 142c774e0

void __cdecl UToolMenuEntryScript::execGetToolTip(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  uchar *puVar3;
  longlong *local_88 [2];
  uchar local_78 [8];
  void *local_70;
  undefined8 local_68;
  TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *local_60;
  undefined8 local_58;
  TFunction<void___cdecl(void)> *local_50;
  undefined8 local_48;
  TSharedPtr<FUICommandList,1> *local_40;
  undefined8 local_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *local_28;
  TSharedPtr<FExtender,1> *pTStack_20;
  undefined8 local_18;
  
  local_78[0] = '\0';
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0;
  local_58 = 0;
  local_50 = (TFunction<void___cdecl(void)> *)0x0;
  local_48 = 0;
  local_40 = (TSharedPtr<FUICommandList,1> *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_28 = (TReferenceControllerBase<1> *)0x0;
  pTStack_20 = (TSharedPtr<FExtender,1> *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar3 = local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = (FText *)(**(code **)(*(longlong *)param_1 + 0x2d0))(param_1,local_88,puVar3);
  FText::operator=(param_3,pFVar2);
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  DestructItems<TSharedPtr<FExtender,1>,int>(pTStack_20,(int)local_18);
  if (pTStack_20 != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(pTStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  DestructItems<TSharedPtr<FUICommandList,1>,int>(local_40,(int)local_38);
  if (local_40 != (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_40);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>(local_50,(int)local_48);
  if (local_50 != (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_50);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            (local_60,(int)local_58);
  if (local_60 != (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// execInitEntry @ 142c77670

void __cdecl UToolMenuEntryScript::execInitEntry(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FText *pFVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  FText local_48;
  FText local_38;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_58 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_50 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  FText::FText(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar4 = &local_38;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar4 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_48);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar5 = &local_48;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar5 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)(param_1 + 3) = local_res10;
  *(undefined8 *)(param_1 + 1) = local_res20;
  *(undefined8 *)&param_1[1].field_0x8 = local_58;
  *(undefined8 *)&param_1[1].field_0x10 = local_50;
  pIVar2 = (pFVar4->TextData).Reference;
  pIVar3 = *(ITextData **)&param_1[1].field_0x18;
  if (pIVar3 != pIVar2) {
    *(ITextData **)&param_1[1].field_0x18 = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  *(uint *)&param_1[1].field_0x20 = pFVar4->Flags;
  pIVar2 = (pFVar5->TextData).Reference;
  pIVar3 = *(ITextData **)(param_1 + 2);
  if (pIVar3 != pIVar2) {
    *(ITextData **)(param_1 + 2) = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  *(uint *)&param_1[2].field_0x8 = pFVar5->Flags;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// execIsVisible @ 142c77e00

void __cdecl UToolMenuEntryScript::execIsVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_78 [8];
  void *local_70;
  undefined8 local_68;
  TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *local_60;
  undefined8 local_58;
  TFunction<void___cdecl(void)> *local_50;
  undefined8 local_48;
  TSharedPtr<FUICommandList,1> *local_40;
  undefined8 local_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *local_28;
  TSharedPtr<FExtender,1> *pTStack_20;
  undefined8 local_18;
  
  local_78[0] = '\0';
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0;
  local_58 = 0;
  local_50 = (TFunction<void___cdecl(void)> *)0x0;
  local_48 = 0;
  local_40 = (TSharedPtr<FUICommandList,1> *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_28 = (TReferenceControllerBase<1> *)0x0;
  pTStack_20 = (TSharedPtr<FExtender,1> *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar3 = local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,puVar3);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<TSharedPtr<FExtender,1>,int>(pTStack_20,(int)local_18);
  if (pTStack_20 != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(pTStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  DestructItems<TSharedPtr<FUICommandList,1>,int>(local_40,(int)local_38);
  if (local_40 != (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_40);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>(local_50,(int)local_48);
  if (local_50 != (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_50);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            (local_60,(int)local_58);
  if (local_60 != (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// execRegisterMenuEntry @ 142c78600

void __cdecl
UToolMenuEntryScript::execRegisterMenuEntry(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = UToolMenus::AddMenuEntryObject((UToolMenuEntryScript *)param_1);
  param_1[4].field_0x8 = bVar1;
  return;
}

// execShowInToolbarTopLevel @ 142c79b80

void __cdecl
UToolMenuEntryScript::execShowInToolbarTopLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar local_78 [8];
  void *local_70;
  undefined8 local_68;
  TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *local_60;
  undefined8 local_58;
  TFunction<void___cdecl(void)> *local_50;
  undefined8 local_48;
  TSharedPtr<FUICommandList,1> *local_40;
  undefined8 local_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *local_28;
  TSharedPtr<FExtender,1> *pTStack_20;
  undefined8 local_18;
  
  local_78[0] = '\0';
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0;
  local_58 = 0;
  local_50 = (TFunction<void___cdecl(void)> *)0x0;
  local_48 = 0;
  local_40 = (TSharedPtr<FUICommandList,1> *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_28 = (TReferenceControllerBase<1> *)0x0;
  pTStack_20 = (TSharedPtr<FExtender,1> *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar3 = local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,puVar3);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<TSharedPtr<FExtender,1>,int>(pTStack_20,(int)local_18);
  if (pTStack_20 != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(pTStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  DestructItems<TSharedPtr<FUICommandList,1>,int>(local_40,(int)local_38);
  if (local_40 != (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_40);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>(local_50,(int)local_48);
  if (local_50 != (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_50);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            (local_60,(int)local_58);
  if (local_60 != (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// execUnregisterMenuEntry @ 142c79cf0

void __cdecl
UToolMenuEntryScript::execUnregisterMenuEntry(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[4].field_0x8 != '\0') {
    UToolMenus::RemoveMenuEntryObject((UToolMenuEntryScript *)param_1);
    param_1[4].field_0x8 = 0;
  }
  return;
}

