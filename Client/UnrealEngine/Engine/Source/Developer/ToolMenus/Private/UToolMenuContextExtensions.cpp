// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 10

// StaticClass @ 142c30120

UClass * __cdecl UToolMenuContextExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuContextExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuContextExtensions",
               &Z_Registration_Info_UClass_UToolMenuContextExtensions.InnerSingleton,
               StaticRegisterNativesUToolMenuContextExtensions,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UToolMenuContextExtensions>,
               InternalVTableHelperCtorCaller<UToolMenuContextExtensions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuContextExtensions.InnerSingleton;
}

// UToolMenuContextExtensions @ 142c3aed0

UToolMenuContextExtensions * __thiscall
UToolMenuContextExtensions::UToolMenuContextExtensions
          (UToolMenuContextExtensions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolMenuContextExtensions__6B_;
  return this;
}

// UToolMenuContextExtensions @ 142c3af00

UToolMenuContextExtensions * __thiscall
UToolMenuContextExtensions::UToolMenuContextExtensions
          (UToolMenuContextExtensions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolMenuContextExtensions__6B_;
  return this;
}

// ~UToolMenuContextExtensions @ 142c3c950

void __thiscall
UToolMenuContextExtensions::~UToolMenuContextExtensions(UToolMenuContextExtensions *this)

{
  *(undefined ***)this = &___7UToolMenuContextExtensions__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DebugLogContextObjectClasses @ 142c56380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UToolMenuContextExtensions::DebugLogContextObjectClasses(FToolMenuContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined4 local_res8 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar7 = false;
  bVar6 = false;
  local_res8[0] = 0;
  pFVar9 = (param_1->ContextObjects).AllocatorInstance.Data;
  iVar2 = (param_1->ContextObjects).ArrayNum;
  bVar5 = true;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  while( true ) {
    if ((param_1->ContextObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      ::FString::AppendChars(&local_58,L", ",2);
    }
    if (*(longlong *)pFVar9 == 0) {
      bVar6 = true;
      pFVar8 = ::FString::FString(&local_48,L"Null");
    }
    else {
      bVar7 = true;
      pFVar8 = UObjectBaseUtility::GetPathName
                         (*(UObjectBaseUtility **)(*(longlong *)pFVar9 + 0x10),&local_38,
                          (UObject *)0x0);
    }
    pFVar4 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = (pFVar8->Data).ArrayNum;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    if ((bVar6) &&
       (bVar6 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar7) &&
       (bVar7 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    iVar10 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)pFVar4,iVar10);
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar9 = pFVar9 + 8;
  }
  if (2 < (byte)LogSlate._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// FindByClass @ 142c59ed0

UObject * __cdecl
UToolMenuContextExtensions::FindByClass(FToolMenuContext *param_1,TSubclassOf<UObject> param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UObject_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_2.Class.field0_0x0;
        goto LAB_142c59f22;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_142c59f22:
  pUVar5 = FToolMenuContext::FindByClass(param_1,pUVar4);
  return pUVar5;
}

// GetPrivateStaticClass @ 142c5f490

UClass * __cdecl UToolMenuContextExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuContextExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuContextExtensions",
               &Z_Registration_Info_UClass_UToolMenuContextExtensions.InnerSingleton,
               StaticRegisterNativesUToolMenuContextExtensions,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UToolMenuContextExtensions>,
               InternalVTableHelperCtorCaller<UToolMenuContextExtensions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuContextExtensions.InnerSingleton;
}

// StaticRegisterNativesUToolMenuContextExtensions @ 142c70ec0

void __cdecl UToolMenuContextExtensions::StaticRegisterNativesUToolMenuContextExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UToolMenuContextExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDebugLogContextObjectClasses @ 142c764d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UToolMenuContextExtensions::execDebugLogContextObjectClasses
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong *plVar8;
  FString *pFVar9;
  longlong *plVar10;
  int iVar11;
  uchar *puVar12;
  undefined4 local_res10 [4];
  longlong *local_res20;
  FString local_d8;
  uchar local_c8 [8];
  void *local_c0;
  undefined8 local_b8;
  TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *local_b0;
  undefined8 local_a8;
  TFunction<void___cdecl(void)> *local_a0;
  undefined8 local_98;
  TSharedPtr<FUICommandList,1> *local_90;
  undefined8 local_88;
  undefined8 local_80;
  TReferenceControllerBase<1> *local_78;
  TSharedPtr<FExtender,1> *pTStack_70;
  undefined8 local_68;
  FString local_58;
  FString local_48;
  
  bVar7 = false;
  bVar6 = false;
  local_res10[0] = 0;
  local_c8[0] = '\0';
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0 = (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0;
  local_a8 = 0;
  local_a0 = (TFunction<void___cdecl(void)> *)0x0;
  local_98 = 0;
  local_90 = (TSharedPtr<FUICommandList,1> *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_78 = (TReferenceControllerBase<1> *)0x0;
  pTStack_70 = (TSharedPtr<FExtender,1> *)0x0;
  local_68 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  puVar12 = local_c8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar12 = param_2->MostRecentPropertyAddress;
  }
  bVar5 = true;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar10 = *(longlong **)(puVar12 + 8);
  iVar1 = *(int *)(puVar12 + 0x10);
  local_res20 = plVar10 + iVar1;
  while( true ) {
    plVar8 = local_res20;
    if (*(int *)(puVar12 + 0x10) != iVar1) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (plVar10 == plVar8) break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      ::FString::AppendChars(&local_d8,L", ",2);
    }
    if (*plVar10 == 0) {
      bVar6 = true;
      pFVar9 = ::FString::FString(&local_58,L"Null");
    }
    else {
      bVar7 = true;
      pFVar9 = UObjectBaseUtility::GetPathName
                         (*(UObjectBaseUtility **)(*plVar10 + 0x10),&local_48,(UObject *)0x0);
    }
    pFVar4 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = (pFVar9->Data).ArrayNum;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    if ((bVar6) &&
       (bVar6 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((bVar7) &&
       (bVar7 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    iVar11 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar11 = 0;
    }
    ::FString::AppendChars(&local_d8,(wchar_t *)pFVar4,iVar11);
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    plVar10 = plVar10 + 1;
  }
  if (2 < (byte)LogSlate._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<FExtender,1>,int>(pTStack_70,(int)local_68);
  if (pTStack_70 != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(pTStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
  DestructItems<TSharedPtr<FUICommandList,1>,int>(local_90,(int)local_88);
  if (local_90 != (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_90);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>(local_a0,(int)local_98);
  if (local_a0 != (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_a0);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            (local_b0,(int)local_a8);
  if (local_b0 != (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_b0);
  }
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

// execFindByClass @ 142c76800

void __cdecl
UToolMenuContextExtensions::execFindByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  FToolMenuContext *this;
  UClass *local_res10;
  FToolMenuContext local_98;
  
  local_98.bIsEditing = false;
  local_98.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ContextObjects.ArrayNum = 0;
  local_98.ContextObjects.ArrayMax = 0;
  local_98.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  local_98.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
  local_98.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ContextCleanupFuncs.ArrayNum = 0;
  local_98.ContextCleanupFuncs.ArrayMax = 0;
  local_98.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.CommandLists.ArrayNum = 0;
  local_98.CommandLists.ArrayMax = 0;
  local_98.CommandList.Object = (FUICommandList *)0x0;
  local_98.CommandList.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_98.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Extenders.ArrayNum = 0;
  local_98.Extenders.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10 = (UClass *)0x0;
  this = &local_98;
  if ((FToolMenuContext *)param_2->MostRecentPropertyAddress != (FToolMenuContext *)0x0) {
    this = (FToolMenuContext *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_res10 != (UClass *)0x0) goto LAB_142c76916;
  }
  else if (local_res10 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
LAB_142c76916:
    pUVar4 = Z_Construct_UClass_UObject_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar6->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_142c76947;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_142c76947:
  pUVar5 = FToolMenuContext::FindByClass(this,pUVar6);
  *(UObject **)param_3 = pUVar5;
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
  return;
}

