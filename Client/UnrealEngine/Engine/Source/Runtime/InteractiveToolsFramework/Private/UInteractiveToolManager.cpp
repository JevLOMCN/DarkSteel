// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 48

// StaticClass @ 1496cca60

UClass * __cdecl UInteractiveToolManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolManager",
               &Z_Registration_Info_UClass_UInteractiveToolManager.InnerSingleton,
               StaticRegisterNativesUInteractiveToolManager,0x1e8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractiveToolManager>,
               InternalVTableHelperCtorCaller<UInteractiveToolManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolManager.InnerSingleton;
}

// UInteractiveToolManager @ 1496d2ce0

UInteractiveToolManager * __thiscall
UInteractiveToolManager::UInteractiveToolManager(UInteractiveToolManager *this)

{
  UObject::UObject((UObject *)this);
  *(undefined8 *)&(this->OnToolUnexpectedShutdownMessage).field_0x18 = 2;
  *(undefined8 *)&(this->OnToolStarted).field_0x18 = 2;
  *(undefined8 *)&(this->OnToolPostBuild).field_0x18 = 2;
  *(undefined8 *)&(this->OnToolPostSetup).field_0x18 = 2;
  *(undefined8 *)&(this->OnToolEnded).field_0x18 = 2;
  *(undefined8 *)&(this->OnToolEndedWithStatus).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IToolContextTransactionProvider__;
  *(undefined8 *)&this->OnToolShutdownRequest = 0;
  *(undefined8 *)&(this->OnToolShutdownRequest).field_0x8 = 0;
  *(undefined4 *)&(this->OnToolShutdownRequest).field_0x10 = 0;
  *(undefined8 *)&this->OnToolUnexpectedShutdownMessage = 0;
  *(undefined8 *)&(this->OnToolUnexpectedShutdownMessage).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolUnexpectedShutdownMessage).field_0x10 = 0;
  *(undefined8 *)&this->OnToolStarted = 0;
  *(undefined8 *)&(this->OnToolStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolStarted).field_0x10 = 0;
  *(undefined8 *)&this->OnToolPostBuild = 0;
  *(undefined8 *)&(this->OnToolPostBuild).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolPostBuild).field_0x10 = 0;
  *(undefined8 *)&this->OnToolPostSetup = 0;
  *(undefined8 *)&(this->OnToolPostSetup).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolPostSetup).field_0x10 = 0;
  *(undefined8 *)&this->OnToolEnded = 0;
  *(undefined8 *)&(this->OnToolEnded).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolEnded).field_0x10 = 0;
  *(undefined8 *)&this->OnToolEndedWithStatus = 0;
  *(undefined8 *)&(this->OnToolEndedWithStatus).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolEndedWithStatus).field_0x10 = 0;
  *(undefined8 *)&this->ToolBuilders = 0;
  *(undefined8 *)&(this->ToolBuilders).field_0x8 = 0;
  *(undefined8 *)&(this->ToolBuilders).field_0x20 = 0;
  this->bIsActive = false;
  this->bInToolSetup = false;
  this->bToolRequestedTerminationDuringSetup = false;
  *(undefined4 *)&(this->ToolBuilders).field_0x28 = 0;
  *(undefined4 *)&(this->ToolBuilders).field_0x2c = 0x80;
  *(undefined4 *)&(this->ToolBuilders).field_0x34 = 0;
  *(undefined4 *)&(this->ToolBuilders).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ToolBuilders).field_0x40 = 0;
  *(undefined4 *)&(this->ToolBuilders).field_0x48 = 0;
  (this->ActiveLeftBuilderName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveLeftBuilderName).Data.ArrayNum = 0;
  (this->ActiveLeftBuilderName).Data.ArrayMax = 0;
  (this->ActiveRightBuilderName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveRightBuilderName).Data.ArrayNum = 0;
  (this->ActiveRightBuilderName).Data.ArrayMax = 0;
  (this->ActiveLeftToolName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveLeftToolName).Data.ArrayNum = 0;
  (this->ActiveLeftToolName).Data.ArrayMax = 0;
  (this->ActiveRightToolName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveRightToolName).Data.ArrayNum = 0;
  (this->ActiveRightToolName).Data.ArrayMax = 0;
  this->bInToolShutdown = false;
  this->bActiveToolMadeSelectionStoreRequest = false;
  this->QueriesAPI = (IToolsContextQueriesAPI *)0x0;
  this->TransactionsAPI = (IToolsContextTransactionsAPI *)0x0;
  this->InputRouter = (UInputRouter *)0x0;
  this->ActiveLeftBuilder = (UInteractiveToolBuilder *)0x0;
  (this->ActiveLeftTool).field0_0x0.DebugPtr = (UInteractiveTool *)0x0;
  this->ActiveRightBuilder = (UInteractiveToolBuilder *)0x0;
  (this->ActiveRightTool).field0_0x0.DebugPtr = (UInteractiveTool *)0x0;
  this->ToolSwitchMode = CustomizableAcceptIfAble;
  this->ActiveToolChangeTrackingMode = UndoToExit;
  return this;
}

// UInteractiveToolManager @ 1496d2ea0

UInteractiveToolManager * __thiscall
UInteractiveToolManager::UInteractiveToolManager
          (UInteractiveToolManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnToolUnexpectedShutdownMessage).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IToolContextTransactionProvider__;
  *(undefined8 *)&this->OnToolShutdownRequest = 0;
  *(undefined8 *)&(this->OnToolShutdownRequest).field_0x8 = 0;
  *(undefined4 *)&(this->OnToolShutdownRequest).field_0x10 = 0;
  *(undefined8 *)&this->OnToolUnexpectedShutdownMessage = 0;
  *(undefined8 *)&(this->OnToolUnexpectedShutdownMessage).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolUnexpectedShutdownMessage).field_0x10 = 0;
  (this->ActiveLeftTool).field0_0x0.DebugPtr = (UInteractiveTool *)0x0;
  (this->ActiveRightTool).field0_0x0.DebugPtr = (UInteractiveTool *)0x0;
  *(undefined8 *)&this->OnToolStarted = 0;
  *(undefined8 *)&(this->OnToolStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolStarted).field_0x10 = 0;
  *(undefined8 *)&this->OnToolPostBuild = 0;
  *(undefined8 *)&(this->OnToolPostBuild).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolPostBuild).field_0x10 = 0;
  *(undefined8 *)&this->OnToolPostSetup = 0;
  *(undefined8 *)&(this->OnToolPostSetup).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolPostSetup).field_0x10 = 0;
  *(undefined8 *)&this->OnToolEnded = 0;
  *(undefined8 *)&(this->OnToolEnded).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolEnded).field_0x10 = 0;
  *(undefined8 *)&this->OnToolEndedWithStatus = 0;
  *(undefined8 *)&(this->OnToolEndedWithStatus).field_0x8 = 0;
  *(undefined8 *)&(this->OnToolEndedWithStatus).field_0x10 = 0;
  *(undefined8 *)&this->ToolBuilders = 0;
  *(undefined8 *)&(this->ToolBuilders).field_0x8 = 0;
  *(undefined8 *)&(this->ToolBuilders).field_0x20 = 0;
  *(undefined8 *)&(this->OnToolStarted).field_0x18 = 2;
  *(undefined8 *)&(this->OnToolPostBuild).field_0x18 = 2;
  *(undefined8 *)&(this->OnToolPostSetup).field_0x18 = 2;
  *(undefined8 *)&(this->OnToolEnded).field_0x18 = 2;
  *(undefined8 *)&(this->OnToolEndedWithStatus).field_0x18 = 2;
  this->bIsActive = false;
  this->bInToolSetup = false;
  this->bToolRequestedTerminationDuringSetup = false;
  *(undefined4 *)&(this->ToolBuilders).field_0x28 = 0;
  *(undefined4 *)&(this->ToolBuilders).field_0x2c = 0x80;
  *(undefined4 *)&(this->ToolBuilders).field_0x34 = 0;
  *(undefined4 *)&(this->ToolBuilders).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ToolBuilders).field_0x40 = 0;
  *(undefined4 *)&(this->ToolBuilders).field_0x48 = 0;
  (this->ActiveLeftBuilderName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveLeftBuilderName).Data.ArrayNum = 0;
  (this->ActiveLeftBuilderName).Data.ArrayMax = 0;
  (this->ActiveRightBuilderName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveRightBuilderName).Data.ArrayNum = 0;
  (this->ActiveRightBuilderName).Data.ArrayMax = 0;
  (this->ActiveLeftToolName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveLeftToolName).Data.ArrayNum = 0;
  (this->ActiveLeftToolName).Data.ArrayMax = 0;
  (this->ActiveRightToolName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveRightToolName).Data.ArrayNum = 0;
  (this->ActiveRightToolName).Data.ArrayMax = 0;
  this->bInToolShutdown = false;
  this->bActiveToolMadeSelectionStoreRequest = false;
  this->ToolSwitchMode = CustomizableAcceptIfAble;
  return this;
}

// ~UInteractiveToolManager @ 1496d44f0

void __thiscall UInteractiveToolManager::~UInteractiveToolManager(UInteractiveToolManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IToolContextTransactionProvider__;
  pFVar1 = (this->ActiveRightToolName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveLeftToolName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveRightBuilderName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveLeftBuilderName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ToolBuilders).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ToolBuilders).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInteractiveToolBuilder>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInteractiveToolBuilder>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInteractiveToolBuilder>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ToolBuilders);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnToolEndedWithStatus).field_0x8,
             *(int *)&(this->OnToolEndedWithStatus).field_0x10);
  pvVar2 = *(void **)&(this->OnToolEndedWithStatus).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnToolEndedWithStatus);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnToolEnded).field_0x8
             ,*(int *)&(this->OnToolEnded).field_0x10);
  pvVar2 = *(void **)&(this->OnToolEnded).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnToolEnded);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnToolPostSetup).field_0x8,*(int *)&(this->OnToolPostSetup).field_0x10);
  pvVar2 = *(void **)&(this->OnToolPostSetup).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnToolPostSetup);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnToolPostBuild).field_0x8,*(int *)&(this->OnToolPostBuild).field_0x10);
  pvVar2 = *(void **)&(this->OnToolPostBuild).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnToolPostBuild);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnToolStarted).field_0x8,*(int *)&(this->OnToolStarted).field_0x10);
  pvVar2 = *(void **)&(this->OnToolStarted).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnToolStarted);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnToolUnexpectedShutdownMessage).field_0x8,
             *(int *)&(this->OnToolUnexpectedShutdownMessage).field_0x10);
  pvVar2 = *(void **)&(this->OnToolUnexpectedShutdownMessage).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnToolUnexpectedShutdownMessage);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnToolShutdownRequest);
  this->_padding_ = (longlong)&___7IToolContextTransactionProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ActivateTool @ 1496d6240

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall
UInteractiveToolManager::ActivateTool(UInteractiveToolManager *this,EToolSide param_1)

{
  EToolManagerToolSwitchMode EVar1;
  longlong lVar2;
  UInteractiveTool *this_00;
  IToolsContextTransactionsAPI *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  UClass *pUVar11;
  longlong *plVar12;
  FText *pFVar13;
  undefined8 *puVar14;
  FString *pFVar15;
  undefined8 *local_res18;
  undefined8 *local_res20;
  FText local_78;
  FText local_68;
  FText local_58;
  FString local_48;
  
  if (param_1 != Left) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4827000601650921615>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveToolManager.cpp"
                       ,0x8f,"Side == EToolSide::Left");
    if (!bVar6) {
      return false;
    }
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  bVar6 = false;
  if (this->ActiveToolChangeTrackingMode == FullUndoRedo) {
    pcVar5 = *(code **)(this->_padding_ + 0x10);
    FText::AsLocalizable_Advanced_LocText
              (&local_78,L"UInteractiveToolManager",L"ToolChange",L"Change Tool");
    (*pcVar5)(&this->_padding_);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    bVar6 = true;
  }
  if ((this->ActiveLeftTool).field0_0x0.DebugPtr != (UInteractiveTool *)0x0) {
    lVar2 = this->_padding_;
    bVar9 = 0;
    EVar1 = this->ToolSwitchMode;
    pcVar5 = *(code **)(lVar2 + 0x348);
    if (EVar1 == AcceptIfAble) {
LAB_1496d6354:
      cVar10 = (**(code **)(lVar2 + 0x338))(this,1);
      if (cVar10 == '\0') {
        cVar10 = (**(code **)(this->_padding_ + 0x340))(this,1);
LAB_1496d637c:
        bVar9 = -(cVar10 != '\0') & 2;
      }
      else {
        bVar9 = 1;
      }
    }
    else {
      if (EVar1 == CancelIfAble) {
LAB_1496d6343:
        cVar10 = (**(code **)(lVar2 + 0x340))(this,1);
        goto LAB_1496d637c;
      }
      if (EVar1 == CustomizableAcceptIfAble) goto LAB_1496d6354;
      if (EVar1 == CustomizableCancelIfAble) goto LAB_1496d6343;
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4827000601650921751>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveToolManager.cpp"
                         ,0x117,"false");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    if (((this->ToolSwitchMode == CustomizableAcceptIfAble) ||
        (this->ToolSwitchMode == CustomizableCancelIfAble)) &&
       (this_00 = (this->ActiveLeftTool).field0_0x0.DebugPtr, this_00 != (UInteractiveTool *)0x0)) {
      pUVar11 = Z_Construct_UClass_UInteractiveToolShutdownQueryAPI_NoRegister();
      plVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar11);
      if (plVar12 != (longlong *)0x0) {
        bVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,1,bVar9);
      }
    }
    (*pcVar5)(this,1,bVar9);
  }
  if ((this->ActiveLeftBuilder == (UInteractiveToolBuilder *)0x0) ||
     (cVar10 = (**(code **)(this->_padding_ + 0x3a8))(this), cVar10 == '\0')) {
    if (bVar6) {
      (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
    }
    return false;
  }
  if (this->ActiveToolChangeTrackingMode == FullUndoRedo) {
    pIVar3 = this->TransactionsAPI;
    if (pIVar3 == (IToolsContextTransactionsAPI *)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4827000601650921644>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveToolManager.cpp"
                         ,0xac,"TransactionsAPI");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      goto LAB_1496d6587;
    }
    pcVar5 = *(code **)((longlong)*pIVar3 + 0x28);
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_68,L"UInteractiveToolManager",L"ActivateToolChange",L"Activate Tool"
                        );
    puVar14 = ::operator_new(0x28);
    if (puVar14 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)0x0;
    }
    else {
      pFVar15 = ::FString::FString(&local_48,&this->ActiveLeftToolName);
      *(undefined4 *)(puVar14 + 1) = 1;
      *puVar14 = &___7FActivateToolChange__6B_;
      ::FString::FString((FString *)(puVar14 + 2),pFVar15);
      *(undefined1 *)(puVar14 + 4) = 0;
      pFVar4 = (pFVar15->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
    }
    local_res18 = puVar14;
    (*pcVar5)(pIVar3,this,&local_res18,pFVar13);
  }
  else {
    if (this->ActiveToolChangeTrackingMode != UndoToExit) goto LAB_1496d6587;
    pcVar5 = *(code **)(this->_padding_ + 0x20);
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_58,L"UInteractiveToolManager",L"ActivateToolChange",L"Activate Tool"
                        );
    local_res20 = ::operator_new(8);
    if (local_res20 == (undefined8 *)0x0) {
      local_res20 = (undefined8 *)0x0;
    }
    else {
      *local_res20 = &___7FBeginToolChange__6B_;
    }
    (*pcVar5)(&this->_padding_,this,&local_res20,pFVar13);
    local_68.TextData.Reference = local_58.TextData.Reference;
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
LAB_1496d6587:
  if (bVar6) {
    (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  }
  return true;
}

// ActivateToolInternal @ 1496d65d0

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall
UInteractiveToolManager::ActivateToolInternal(UInteractiveToolManager *this,EToolSide param_1)

{
  int iVar1;
  IToolsContextTransactionsAPI *pIVar2;
  code *pcVar3;
  char cVar4;
  FText *pFVar5;
  UInteractiveTool *pUVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  FText local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = 0;
  (**(code **)((longlong)*this->QueriesAPI + 0x10))(this->QueriesAPI,&local_58);
  cVar4 = (**(code **)(*(longlong *)this->ActiveLeftBuilder + 0x2b0))
                    (this->ActiveLeftBuilder,&local_58);
  if (cVar4 == '\0') {
    pIVar2 = this->TransactionsAPI;
    pcVar3 = *(code **)((longlong)*pIVar2 + 8);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"UInteractiveToolManager",L"ActivateToolCanBuildFailMessage",
                        L"UInteractiveToolManager::ActivateTool: CanBuildTool returned false.");
    (*pcVar3)(pIVar2,pFVar5,0);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  else {
    pUVar6 = (UInteractiveTool *)
             (**(code **)(*(longlong *)this->ActiveLeftBuilder + 0x2b8))
                       (this->ActiveLeftBuilder,&local_58);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar6 == (UInteractiveTool *)0x0))
    {
      (this->ActiveLeftTool).field0_0x0.DebugPtr = pUVar6;
      if (pUVar6 == (UInteractiveTool *)0x0) goto LAB_1496d6689;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
      (this->ActiveLeftTool).field0_0x0.DebugPtr = pUVar6;
    }
    iVar1 = (this->ActiveLeftBuilderName).Data.ArrayNum;
    iVar9 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar9 = 0;
    }
    ::FString::AssignRange
              (&this->ActiveLeftToolName,
               (wchar_t *)(this->ActiveLeftBuilderName).Data.AllocatorInstance.Data,iVar9);
    (**(code **)(this->_padding_ + 0x2c0))
              (this,param_1,(this->ActiveLeftTool).field0_0x0.DebugPtr,this->ActiveLeftBuilder,
               &local_58);
    pUVar6 = (this->ActiveLeftTool).field0_0x0.DebugPtr;
    this->bInToolSetup = true;
    (**(code **)(pUVar6->_padding_ + 0x2b0))();
    pUVar6 = (this->ActiveLeftTool).field0_0x0.DebugPtr;
    this->bInToolSetup = false;
    if (this->bToolRequestedTerminationDuringSetup == false) {
      (**(code **)(this->_padding_ + 0x2c8))(this,param_1,pUVar6,this->ActiveLeftBuilder,&local_58);
      pUVar6 = (this->ActiveLeftTool).field0_0x0.DebugPtr;
      plVar7 = &pUVar6->_padding_;
      if (pUVar6 == (UInteractiveTool *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      (**(code **)(this->InputRouter->_padding_ + 0x2c0))(this->InputRouter,plVar7);
      (**(code **)(this->_padding_ + 0x368))(this);
      TMulticastDelegate<void___cdecl(UInteractiveToolManager_*,UInteractiveTool_*),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->OnToolStarted,this,(this->ActiveLeftTool).field0_0x0.DebugPtr);
      bVar8 = true;
      goto LAB_1496d668b;
    }
    this->bToolRequestedTerminationDuringSetup = false;
    (**(code **)(pUVar6->_padding_ + 0x2b8))(pUVar6,2);
    (this->ActiveLeftTool).field0_0x0.DebugPtr = (UInteractiveTool *)0x0;
    ::FString::Empty(&this->ActiveLeftToolName);
  }
LAB_1496d6689:
  bVar8 = false;
LAB_1496d668b:
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return bVar8;
}

// BeginUndoTransaction @ 1496d75b0

void __thiscall
UInteractiveToolManager::BeginUndoTransaction(UInteractiveToolManager *this,FText *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001496d75ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->OnToolEndedWithStatus + 0x18))();
  return;
}

// CanAcceptActiveTool @ 1496d87a0

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall
UInteractiveToolManager::CanAcceptActiveTool(UInteractiveToolManager *this,EToolSide param_1)

{
  UInteractiveTool *pUVar1;
  char cVar2;
  
  pUVar1 = (this->ActiveLeftTool).field0_0x0.DebugPtr;
  if (pUVar1 != (UInteractiveTool *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2e8))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(((this->ActiveLeftTool).field0_0x0.DebugPtr)->_padding_ + 0x2f0))();
      if (cVar2 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// CanActivateTool @ 1496d8810

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall
UInteractiveToolManager::CanActivateTool
          (UInteractiveToolManager *this,EToolSide param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  TObjectPtr<UInteractiveToolBuilder>_u_0 *pTVar8;
  wchar_t *pwVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_1 == Left) {
    iVar1 = (param_2->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar9 = L"";
      iVar7 = 0;
    }
    else {
      pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar9);
    iVar7 = TSet<TTuple<FString,TObjectPtr<UInteractiveToolBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInteractiveToolBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>,FDefaultSetAllocator>
                        *)&this->ToolBuilders,uVar6,param_2);
    if (iVar7 != -1) {
      local_38 = (void *)0x0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_30 = 0;
      local_28 = (void *)0x0;
      local_20 = 0;
      local_18 = 0;
      (**(code **)((longlong)*this->QueriesAPI + 0x10))(this->QueriesAPI,&local_58);
      pTVar8 = &TMapBase<FString,TObjectPtr<UInteractiveToolBuilder>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>_>
                ::FindChecked((TMapBase<FString,TObjectPtr<UInteractiveToolBuilder>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>_>
                               *)&this->ToolBuilders,param_2)->field0_0x0;
      uVar5 = (**(code **)(*(longlong *)pTVar8->DebugPtr + 0x2b0))(pTVar8->DebugPtr,&local_58);
      if (local_28 != (void *)0x0) {
        FMemory::Free(local_28);
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      pFVar2 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar2 == (FScriptContainerElement *)0x0) {
        return (bool)uVar5;
      }
      FMemory::Free(pFVar2);
      return (bool)uVar5;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4827000601650921595>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveToolManager.cpp"
                       ,0x7b,"Side == EToolSide::Left");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return false;
}

// CanCancelActiveTool @ 1496d8d60

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall
UInteractiveToolManager::CanCancelActiveTool(UInteractiveToolManager *this,EToolSide param_1)

{
  UInteractiveTool *pUVar1;
  undefined1 uVar2;
  
  pUVar1 = (this->ActiveLeftTool).field0_0x0.DebugPtr;
  if (pUVar1 != (UInteractiveTool *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496d8d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x2e0))();
    return (bool)uVar2;
  }
  return false;
}

// ConfigureChangeTrackingMode @ 1496d9310

void __thiscall
UInteractiveToolManager::ConfigureChangeTrackingMode
          (UInteractiveToolManager *this,EToolChangeTrackingMode param_1)

{
  this->ActiveToolChangeTrackingMode = param_1;
  return;
}

// DeactivateTool @ 1496da3e0

/* WARNING: Enum "EToolSide": Some values do not have unique names */

void __thiscall
UInteractiveToolManager::DeactivateTool
          (UInteractiveToolManager *this,EToolSide param_1,EToolShutdownType param_2)

{
  IToolsContextTransactionsAPI *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  undefined8 *puVar6;
  FString *pFVar7;
  undefined8 *local_res20;
  FText local_48;
  FString local_38;
  
  if (param_1 == Left) {
    if ((this->bInToolShutdown == false) &&
       ((this->ActiveLeftTool).field0_0x0.DebugPtr != (UInteractiveTool *)0x0)) {
      if (this->ActiveToolChangeTrackingMode == FullUndoRedo) {
        pIVar1 = this->TransactionsAPI;
        if (pIVar1 == (IToolsContextTransactionsAPI *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4827000601650921724>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveToolManager.cpp"
                             ,0xfc,"TransactionsAPI");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          pcVar3 = *(code **)((longlong)*pIVar1 + 0x28);
          pFVar5 = FText::AsLocalizable_Advanced_LocText
                             (&local_48,L"UInteractiveToolManager",L"DeactivateToolChange",
                              L"Deactivate Tool");
          puVar6 = ::operator_new(0x28);
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)0x0;
          }
          else {
            pFVar7 = ::FString::FString(&local_38,&this->ActiveLeftToolName);
            *(undefined4 *)(puVar6 + 1) = 1;
            *puVar6 = &___7FActivateToolChange__6B_;
            ::FString::FString((FString *)(puVar6 + 2),pFVar7);
            *(undefined1 *)(puVar6 + 4) = 1;
            *(EToolShutdownType *)((longlong)puVar6 + 0x21) = param_2;
            pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
          }
          local_res20 = puVar6;
          (*pcVar3)(pIVar1,this,&local_res20,pFVar5);
          if (local_48.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
          }
        }
      }
      (**(code **)(this->_padding_ + 0x3b0))(this,1,param_2);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4827000601650921711>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveToolManager.cpp"
                       ,0xef,"Side == EToolSide::Left");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// DeactivateToolInternal @ 1496da5b0

/* WARNING: Enum "EToolSide": Some values do not have unique names */

void __thiscall
UInteractiveToolManager::DeactivateToolInternal
          (UInteractiveToolManager *this,EToolSide param_1,EToolShutdownType param_2)

{
  undefined1 *puVar1;
  UInteractiveTool *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined7 in_register_00000081;
  FDestructionSentinel local_48;
  
  if (param_1 == Left) {
    pUVar2 = (this->ActiveLeftTool).field0_0x0.DebugPtr;
    if (pUVar2 == (UInteractiveTool *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4827000601650921772>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveToolManager.cpp"
                         ,300,"ActiveLeftTool");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      this->bInToolShutdown = true;
      (**(code **)(this->InputRouter->_padding_ + 0x2e8))
                (this->InputRouter,&pUVar2->_padding_,CONCAT71(in_register_00000081,param_2));
      pUVar2 = (this->ActiveLeftTool).field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,param_2);
      pUVar2 = (this->ActiveLeftTool).field0_0x0.DebugPtr;
      plVar9 = &pUVar2->_padding_;
      if (pUVar2 == (UInteractiveTool *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      (**(code **)(this->InputRouter->_padding_ + 0x2c8))(this->InputRouter,plVar9);
      pUVar2 = (this->ActiveLeftTool).field0_0x0.DebugPtr;
      (this->ActiveLeftTool).field0_0x0.DebugPtr = (UInteractiveTool *)0x0;
      ::FString::Empty(&this->ActiveLeftToolName);
      (**(code **)(this->_padding_ + 0x368))(this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnToolEndedWithStatus,(FWriteAccessScope *)&local_48);
      puVar1 = &(this->OnToolEndedWithStatus).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar10 = *(int *)&(this->OnToolEndedWithStatus).field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&(this->OnToolEndedWithStatus).field_0x10) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar3 = *(longlong *)&(this->OnToolEndedWithStatus).field_0x8;
          if (((*(int *)(lVar3 + 8 + lVar11) == 0) ||
              (plVar9 = *(longlong **)(lVar3 + lVar11), plVar9 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar9 + 0x68))(plVar9,this,pUVar2,param_2), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(this->OnToolEndedWithStatus).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnToolEndedWithStatus,false);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      TMulticastDelegate<void___cdecl(UInteractiveToolManager_*,UInteractiveTool_*),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->OnToolEnded,this,pUVar2);
      this->bInToolShutdown = false;
    }
  }
  return;
}

// DisplayMessage @ 1496db100

void __thiscall
UInteractiveToolManager::DisplayMessage
          (UInteractiveToolManager *this,FText *param_1,EToolMessageLevel param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496db10a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->TransactionsAPI + 8))();
  return;
}

// DoPostBuild @ 1496db120

/* WARNING: Enum "EToolSide": Some values do not have unique names */
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
UInteractiveToolManager::DoPostBuild
          (UInteractiveToolManager *this,EToolSide param_1,UInteractiveTool *param_2,
          UInteractiveToolBuilder *param_3,FToolBuilderState *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_48;
  
  (**(code **)(*(longlong *)param_3 + 0x2c0))(param_3,param_2,param_4);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnToolPostBuild,
             (FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnToolPostBuild).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnToolPostBuild).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnToolPostBuild).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnToolPostBuild).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,this,param_1,param_2,param_3,param_4),
         cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnToolPostBuild).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnToolPostBuild,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// DoPostSetup @ 1496db2a0

/* WARNING: Enum "EToolSide": Some values do not have unique names */
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
UInteractiveToolManager::DoPostSetup
          (UInteractiveToolManager *this,EToolSide param_1,UInteractiveTool *param_2,
          UInteractiveToolBuilder *param_3,FToolBuilderState *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_48;
  
  (**(code **)(*(longlong *)param_3 + 0x2c8))(param_3,param_2,param_4);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnToolPostSetup,
             (FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnToolPostSetup).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnToolPostSetup).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnToolPostSetup).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnToolPostSetup).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,this,param_1,param_2), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnToolPostSetup).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnToolPostSetup,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// DrawHUD @ 1496db4b0

void __thiscall
UInteractiveToolManager::DrawHUD
          (UInteractiveToolManager *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  UInteractiveTool *pUVar1;
  
  pUVar1 = (this->ActiveLeftTool).field0_0x0.DebugPtr;
  if (pUVar1 != (UInteractiveTool *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2c8))();
  }
  pUVar1 = (this->ActiveRightTool).field0_0x0.DebugPtr;
  if (pUVar1 != (UInteractiveTool *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2c8))(pUVar1,param_1,param_2);
  }
  return;
}

// EmitObjectChange @ 1496db560

void __thiscall
UInteractiveToolManager::EmitObjectChange
          (UInteractiveToolManager *this,UObject *param_1,
          TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_> param_2,FText *param_3)

{
  FString *pFVar1;
  FToolCommandChange *pFVar2;
  FToolCommandChange FVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  FString *local_res8;
  UObject *local_res18 [2];
  undefined8 *local_48 [2];
  
  pFVar1 = &this[-1].ActiveLeftToolName;
  cVar5 = (**(code **)(this[-1].ActiveLeftToolName.Data.AllocatorInstance.Data + 0x300))(pFVar1);
  if (cVar5 == '\0') {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4827000601650921952>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveToolManager.cpp"
                       ,0x1e0,"HasActiveTool(EToolSide::Left)");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    puVar7 = ::operator_new(0x20);
    puVar8 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[1] = 0;
      *puVar7 = &___7FToolChangeWrapperChange__6B_;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar8 = puVar7;
    }
    local_res8 = pFVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pFVar1 != (FString *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pFVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 1),(FObjectPtr)&local_res8);
    local_res18[0] = (UObject *)(**(code **)((pFVar1->Data).AllocatorInstance.Data + 800))(pFVar1,1)
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 2),(FObjectPtr)local_res18);
    pFVar2 = (FToolCommandChange *)(puVar8 + 3);
    if (pFVar2 != param_2.Ptr) {
      FVar3 = *pFVar2;
      *pFVar2 = *param_2.Ptr;
      *param_2.Ptr = (FToolCommandChange)0x0;
      if (FVar3 != (FToolCommandChange)0x0) {
        (**(code **)(*(longlong *)FVar3 + 0x48))(FVar3,1);
      }
    }
    local_48[0] = puVar8;
    (**(code **)(**(longlong **)&this->OnToolEndedWithStatus + 0x28))
              (*(longlong **)&this->OnToolEndedWithStatus,param_1,local_48,param_3);
  }
  FVar3 = *param_2.Ptr;
  if (FVar3 == (FToolCommandChange)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001496db70a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)FVar3 + 0x48))(FVar3,1);
  return;
}

// EndUndoTransaction @ 1496db840

void __thiscall UInteractiveToolManager::EndUndoTransaction(UInteractiveToolManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001496db84a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->OnToolEndedWithStatus + 0x20))();
  return;
}

// GetActiveTool @ 1496dc9b0

/* WARNING: Enum "EToolSide": Some values do not have unique names */

UInteractiveTool * __thiscall
UInteractiveToolManager::GetActiveTool(UInteractiveToolManager *this,EToolSide param_1)

{
  longlong lVar1;
  
  lVar1 = 0x68;
  if (param_1 != Left) {
    lVar1 = 0x70;
  }
  return *(UInteractiveTool **)((longlong)&this->_padding_ + lVar1);
}

// GetActiveToolBuilder @ 1496dc9d0

/* WARNING: Enum "EToolSide": Some values do not have unique names */

UInteractiveToolBuilder * __thiscall
UInteractiveToolManager::GetActiveToolBuilder(UInteractiveToolManager *this,EToolSide param_1)

{
  if (param_1 == Left) {
    return this->ActiveLeftBuilder;
  }
  return this->ActiveRightBuilder;
}

// GetActiveToolName @ 1496dc9f0

/* WARNING: Enum "EToolSide": Some values do not have unique names */

FString * __thiscall
UInteractiveToolManager::GetActiveToolName
          (UInteractiveToolManager *this,FString *__return_storage_ptr__,EToolSide param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 800))(this,param_1);
  if (lVar1 == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  lVar1 = 0x1c0;
  if (param_1 != Left) {
    lVar1 = 0x1d0;
  }
  ::FString::FString(__return_storage_ptr__,(FString *)((longlong)&this->_padding_ + lVar1));
  return __return_storage_ptr__;
}

// GetActiveToolType @ 1496dcaa0

/* WARNING: Enum "EToolSide": Some values do not have unique names */

FString * __thiscall
UInteractiveToolManager::GetActiveToolType(UInteractiveToolManager *this,EToolSide param_1)

{
  longlong lVar1;
  
  lVar1 = 0x1a0;
  if (param_1 != Right) {
    lVar1 = 0x188;
  }
  return (FString *)((longlong)&this->_padding_ + lVar1);
}

// GetChangeTrackingMode @ 1496dcbc0

EToolChangeTrackingMode __thiscall
UInteractiveToolManager::GetChangeTrackingMode(UInteractiveToolManager *this)

{
  return this->ActiveToolChangeTrackingMode;
}

// GetContextObjectStore @ 1496dcc30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UContextObjectStore * __thiscall
UInteractiveToolManager::GetContextObjectStore(UInteractiveToolManager *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = UInteractiveToolsContext::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return *(UContextObjectStore **)(lVar2 + 0x88);
    }
  }
  return _DAT_00000088;
}

// GetContextQueriesAPI @ 1496dcca0

IToolsContextQueriesAPI * __thiscall
UInteractiveToolManager::GetContextQueriesAPI(UInteractiveToolManager *this)

{
  return this->QueriesAPI;
}

// GetContextTransactionsAPI @ 1496dccb0

IToolsContextTransactionsAPI * __thiscall
UInteractiveToolManager::GetContextTransactionsAPI(UInteractiveToolManager *this)

{
  return this->TransactionsAPI;
}

// GetPairedGizmoManager @ 1496dd270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UInteractiveGizmoManager * __thiscall
UInteractiveToolManager::GetPairedGizmoManager(UInteractiveToolManager *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = UInteractiveToolsContext::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return *(UInteractiveGizmoManager **)(lVar2 + 0x80);
    }
  }
  return _DAT_00000080;
}

// GetPreferredShutdownType @ 1496dd2d0

/* WARNING: Enum "EToolSide": Some values do not have unique names */

EToolShutdownType __thiscall
UInteractiveToolManager::GetPreferredShutdownType
          (UInteractiveToolManager *this,EToolSide param_1,EToolShutdownReason param_2)

{
  EToolManagerToolSwitchMode EVar1;
  UInteractiveTool *this_00;
  code *pcVar2;
  bool bVar3;
  EToolShutdownType EVar4;
  char cVar5;
  UClass *pUVar7;
  longlong *plVar8;
  undefined4 in_register_00000014;
  ulonglong uVar9;
  undefined7 in_register_00000081;
  longlong lVar6;
  
  uVar9 = CONCAT44(in_register_00000014,param_1);
  EVar1 = this->ToolSwitchMode;
  EVar4 = Completed;
  if (EVar1 == AcceptIfAble) {
LAB_1496dd341:
    cVar5 = (**(code **)(this->_padding_ + 0x338))
                      (this,uVar9,CONCAT71(in_register_00000081,param_2));
    if (cVar5 != '\0') {
      EVar4 = Accept;
      goto LAB_1496dd367;
    }
    lVar6 = this->_padding_;
    uVar9 = (ulonglong)param_1;
  }
  else {
    if (EVar1 != CancelIfAble) {
      if (EVar1 == CustomizableAcceptIfAble) goto LAB_1496dd341;
      if (EVar1 != CustomizableCancelIfAble) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4827000601650921751>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveToolManager.cpp"
                           ,0x117,"false");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        goto LAB_1496dd367;
      }
    }
    lVar6 = this->_padding_;
  }
  cVar5 = (**(code **)(lVar6 + 0x340))(this,uVar9);
  EVar4 = -(cVar5 != '\0') & Cancel;
LAB_1496dd367:
  if (((this->ToolSwitchMode == CustomizableAcceptIfAble) ||
      (this->ToolSwitchMode == CustomizableCancelIfAble)) &&
     (this_00 = (this->ActiveLeftTool).field0_0x0.DebugPtr, this_00 != (UInteractiveTool *)0x0)) {
    pUVar7 = Z_Construct_UClass_UInteractiveToolShutdownQueryAPI_NoRegister();
    plVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar7);
    if (plVar8 != (longlong *)0x0) {
      EVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,param_2,EVar4);
    }
  }
  return EVar4;
}

// GetPrivateStaticClass @ 1496dd690

UClass * __cdecl UInteractiveToolManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolManager",
               &Z_Registration_Info_UClass_UInteractiveToolManager.InnerSingleton,
               StaticRegisterNativesUInteractiveToolManager,0x1e8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractiveToolManager>,
               InternalVTableHelperCtorCaller<UInteractiveToolManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolManager.InnerSingleton;
}

// GetToolSwitchMode @ 1496de510

EToolManagerToolSwitchMode __thiscall
UInteractiveToolManager::GetToolSwitchMode(UInteractiveToolManager *this)

{
  return this->ToolSwitchMode;
}

// HasActiveTool @ 1496de9f0

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall
UInteractiveToolManager::HasActiveTool(UInteractiveToolManager *this,EToolSide param_1)

{
  if (param_1 == Left) {
    return (this->ActiveLeftTool).field0_0x0.DebugPtr != (UInteractiveTool *)0x0;
  }
  return (this->ActiveRightTool).field0_0x0.DebugPtr != (UInteractiveTool *)0x0;
}

// HasAnyActiveTool @ 1496dea30

bool __thiscall UInteractiveToolManager::HasAnyActiveTool(UInteractiveToolManager *this)

{
  if (((this->ActiveLeftTool).field0_0x0.DebugPtr == (UInteractiveTool *)0x0) &&
     ((this->ActiveRightTool).field0_0x0.DebugPtr == (UInteractiveTool *)0x0)) {
    return false;
  }
  return true;
}

// Initialize @ 1496def30

void __thiscall
UInteractiveToolManager::Initialize
          (UInteractiveToolManager *this,IToolsContextQueriesAPI *param_1,
          IToolsContextTransactionsAPI *param_2,UInputRouter *param_3)

{
  this->QueriesAPI = param_1;
  this->TransactionsAPI = param_2;
  this->InputRouter = param_3;
  this->bIsActive = true;
  return;
}

// PostActiveToolShutdownRequest @ 1496e2c70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UInteractiveToolManager::PostActiveToolShutdownRequest
          (UInteractiveToolManager *this,UInteractiveTool *param_1,EToolShutdownType param_2,
          bool param_3,FText *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  UInteractiveTool *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  FText *this_00;
  FString *pFVar12;
  FStaticBasicLogRecord *pFVar13;
  longlong *plVar14;
  uint uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 local_res8 [8];
  FString local_e0;
  FDestructionSentinel local_d0;
  FString local_b8;
  FString local_a8;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  longlong *local_68 [2];
  longlong *local_58;
  
  plVar14 = (longlong *)0x0;
  if (param_3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnToolUnexpectedShutdownMessage,&local_98);
    iVar2 = *(int *)&(this->OnToolUnexpectedShutdownMessage).field_0x10;
    plVar16 = *(longlong **)&(this->OnToolUnexpectedShutdownMessage).field_0x8;
    plVar17 = plVar16 + (longlong)iVar2 * 2;
    do {
      if (*(int *)&(this->OnToolUnexpectedShutdownMessage).field_0x10 != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (plVar16 == plVar17) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_98);
        bVar10 = FText::IsEmpty(param_4);
        if (bVar10) {
          if (param_1 == (UInteractiveTool *)0x0) {
            pFVar12 = ::FString::FString(&local_a8,L"(Null Tool)");
            ::FString::FString(&local_e0,pFVar12);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          else {
            this_00 = (FText *)(**(code **)(param_1->_padding_ + 0x370))(param_1,local_68);
            pFVar12 = FText::ToString(this_00);
            pFVar12 = ::FString::FString(&local_b8,pFVar12);
            ::FString::FString(&local_e0,pFVar12);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if (local_58 != (longlong *)0x0) {
              (**(code **)(*local_58 + 0x10))();
            }
            if (local_68[0] != (longlong *)0x0) {
              (**(code **)(*local_68[0] + 0x10))();
            }
          }
          if (this->bInToolSetup == false) {
            if (1 < (byte)LogTemp._0_1_) {
              pFVar13 = &::LOG_Static;
              goto LAB_1496e2ed9;
            }
          }
          else if (1 < (byte)LogTemp._0_1_) {
            pFVar13 = &::LOG_Static;
LAB_1496e2ed9:
            UE::Logging::Private::BasicLog<2>(pFVar13,(FLogCategoryBase *)&LogTemp);
          }
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
        }
        else if (1 < (byte)LogTemp._0_1_) {
          FText::ToString(param_4);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
        break;
      }
      if (((int)plVar16[1] != 0) && (*plVar16 != 0)) goto LAB_1496e2cf4;
      plVar16 = plVar16 + 2;
    } while( true );
  }
LAB_1496e2f52:
  if (this->bInToolSetup != false) {
    this->bToolRequestedTerminationDuringSetup = true;
    return true;
  }
  if ((param_1 != (UInteractiveTool *)0x0) &&
     (((pUVar4 = (this->ActiveLeftTool).field0_0x0.DebugPtr, pUVar4 != (UInteractiveTool *)0x0 &&
       (pUVar4 == param_1)) ||
      ((pUVar4 = (this->ActiveRightTool).field0_0x0.DebugPtr, pUVar4 != (UInteractiveTool *)0x0 &&
       (pUVar4 == param_1)))))) {
    bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnToolShutdownRequest);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnToolShutdownRequest,&local_80);
      if (*(int *)&(this->OnToolShutdownRequest).field_0x10 != 0) {
        plVar14 = *(longlong **)&(this->OnToolShutdownRequest).field_0x8;
      }
      cVar9 = (**(code **)(*plVar14 + 0x60))(plVar14,this,param_1,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      if (cVar9 != '\0') {
        return true;
      }
    }
    pUVar4 = (this->ActiveLeftTool).field0_0x0.DebugPtr;
    (**(code **)(this->_padding_ + 0x348))
              (this,(pUVar4 == (UInteractiveTool *)0x0 || pUVar4 != param_1) + '\x01',param_2);
    return true;
  }
  return false;
LAB_1496e2cf4:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_98);
  bVar10 = this->bInToolSetup;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnToolUnexpectedShutdownMessage,(FWriteAccessScope *)&local_d0);
  puVar1 = &(this->OnToolUnexpectedShutdownMessage).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar6 = false;
  uVar15 = *(int *)&(this->OnToolUnexpectedShutdownMessage).field_0x10 - 1;
  if (-1 < (int)uVar15) {
    lVar18 = (longlong)(int)uVar15 << 4;
    bVar6 = false;
    do {
      uVar11 = 0;
      if ((int)uVar15 < *(int *)&(this->OnToolUnexpectedShutdownMessage).field_0x10) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      lVar3 = *(longlong *)&(this->OnToolUnexpectedShutdownMessage).field_0x8;
      if (((*(int *)(lVar18 + 8 + lVar3) == 0) ||
          (plVar16 = *(longlong **)(lVar18 + lVar3), plVar16 == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*plVar16 + 0x68))(plVar16,this,param_1,param_4,bVar10), cVar9 == '\0'
         )) {
        bVar6 = true;
      }
      lVar18 = lVar18 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  puVar1 = &(this->OnToolUnexpectedShutdownMessage).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnToolUnexpectedShutdownMessage,false);
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  goto LAB_1496e2f52;
}

// PostInvalidation @ 1496e3070

void __thiscall UInteractiveToolManager::PostInvalidation(UInteractiveToolManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001496e307a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->TransactionsAPI + 0x10))();
  return;
}

// RegisterToolType @ 1496e3df0

void __thiscall
UInteractiveToolManager::RegisterToolType
          (UInteractiveToolManager *this,FString *param_1,UInteractiveToolBuilder *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TPairInitializer<FString_const_&,TObjectPtr<UInteractiveToolBuilder>_&&> local_res8;
  FString *local_18;
  TObjectPtr<UInteractiveToolBuilder> **local_10;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  iVar5 = TSet<TTuple<FString,TObjectPtr<UInteractiveToolBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UInteractiveToolBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>,FDefaultSetAllocator>
                      *)&this->ToolBuilders,uVar4,param_1);
  if (iVar5 == -1) {
    local_res8.Value = (TObjectPtr<UInteractiveToolBuilder> *)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UInteractiveToolBuilder *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_10 = &local_res8.Value;
    local_18 = param_1;
    TSet<TTuple<FString,TObjectPtr<UInteractiveToolBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TObjectPtr<UInteractiveToolBuilder>_&&>_>
              ((TSet<TTuple<FString,TObjectPtr<UInteractiveToolBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>,FDefaultSetAllocator>
                *)&this->ToolBuilders,&local_res8,(bool *)&local_18);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4827000601650921546>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveToolManager.cpp"
                       ,0x4a,"ToolBuilders.Contains(Identifier) == false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Render @ 1496e53e0

void __thiscall
UInteractiveToolManager::Render(UInteractiveToolManager *this,IToolsContextRenderAPI *param_1)

{
  UInteractiveTool *pUVar1;
  
  pUVar1 = (this->ActiveLeftTool).field0_0x0.DebugPtr;
  if (pUVar1 != (UInteractiveTool *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2c0))();
  }
  pUVar1 = (this->ActiveRightTool).field0_0x0.DebugPtr;
  if (pUVar1 != (UInteractiveTool *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,param_1);
  }
  return;
}

// RequestSelectionChange @ 1496e5570

bool __thiscall
UInteractiveToolManager::RequestSelectionChange
          (UInteractiveToolManager *this,FSelectedObjectsChangeList *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496e557a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->TransactionsAPI + 0x30))();
  return (bool)uVar1;
}

// SelectActiveToolType @ 1496e5820

/* WARNING: Enum "EToolSide": Some values do not have unique names */

bool __thiscall
UInteractiveToolManager::SelectActiveToolType
          (UInteractiveToolManager *this,EToolSide param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TObjectPtr<UInteractiveToolBuilder>_u_0 *pTVar5;
  wchar_t *pwVar6;
  
  iVar1 = (param_2->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar4 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
  iVar4 = TSet<TTuple<FString,TObjectPtr<UInteractiveToolBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UInteractiveToolBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>,FDefaultSetAllocator>
                      *)&this->ToolBuilders,uVar3,param_2);
  if (iVar4 == -1) {
    bVar2 = false;
  }
  else {
    pTVar5 = &TMapBase<FString,TObjectPtr<UInteractiveToolBuilder>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>_>
              ::FindChecked((TMapBase<FString,TObjectPtr<UInteractiveToolBuilder>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>_>
                             *)&this->ToolBuilders,param_2)->field0_0x0;
    if (param_1 == Right) {
      this->ActiveRightBuilder = (UInteractiveToolBuilder *)*pTVar5;
      ::FString::operator=(&this->ActiveRightBuilderName,param_2);
      bVar2 = true;
    }
    else {
      this->ActiveLeftBuilder = (UInteractiveToolBuilder *)*pTVar5;
      ::FString::operator=(&this->ActiveLeftBuilderName,param_2);
      bVar2 = true;
    }
  }
  return bVar2;
}

// SetToolSwitchMode @ 1496e6010

void __thiscall
UInteractiveToolManager::SetToolSwitchMode
          (UInteractiveToolManager *this,EToolManagerToolSwitchMode param_1)

{
  this->ToolSwitchMode = param_1;
  return;
}

// Shutdown @ 1496e63e0

void __thiscall UInteractiveToolManager::Shutdown(UInteractiveToolManager *this)

{
  UInteractiveTool *pUVar1;
  
  pUVar1 = (this->ActiveLeftTool).field0_0x0.DebugPtr;
  this->QueriesAPI = (IToolsContextQueriesAPI *)0x0;
  if (pUVar1 != (UInteractiveTool *)0x0) {
    (**(code **)(this->_padding_ + 0x348))(this,1,2);
  }
  if ((this->ActiveRightTool).field0_0x0.DebugPtr != (UInteractiveTool *)0x0) {
    (**(code **)(this->_padding_ + 0x348))(this,2,2);
  }
  this->bIsActive = false;
  this->TransactionsAPI = (IToolsContextTransactionsAPI *)0x0;
  return;
}

// StaticRegisterNativesUInteractiveToolManager @ 1496e66f0

void __cdecl UInteractiveToolManager::StaticRegisterNativesUInteractiveToolManager(void)

{
  return;
}

// Tick @ 1496e6b20

void __thiscall UInteractiveToolManager::Tick(UInteractiveToolManager *this,float param_1)

{
  UInteractiveTool *pUVar1;
  
  pUVar1 = (this->ActiveLeftTool).field0_0x0.DebugPtr;
  if (pUVar1 != (UInteractiveTool *)0x0) {
    UInteractiveTool::Tick(pUVar1,param_1);
  }
  pUVar1 = (this->ActiveRightTool).field0_0x0.DebugPtr;
  if (pUVar1 != (UInteractiveTool *)0x0) {
    UInteractiveTool::Tick(pUVar1,param_1);
  }
  return;
}

// UnregisterToolType @ 1496e6f80

void __thiscall
UInteractiveToolManager::UnregisterToolType(UInteractiveToolManager *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  bool bVar5;
  
  iVar2 = (this->ActiveLeftToolName).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->ActiveLeftToolName).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1496e6fba;
    }
LAB_1496e6fc1:
    (**(code **)(this->_padding_ + 0x348))(this,1);
  }
  else {
    bVar5 = iVar2 + iVar1 == 1;
LAB_1496e6fba:
    if (bVar5) goto LAB_1496e6fc1;
  }
  iVar2 = (this->ActiveRightToolName).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->ActiveRightToolName).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1496e6fff;
    }
  }
  else {
    bVar5 = iVar2 + iVar1 == 1;
LAB_1496e6fff:
    if (!bVar5) goto LAB_1496e701a;
  }
  (**(code **)(this->_padding_ + 0x348))(this,2);
LAB_1496e701a:
  if (*(int *)&(this->ToolBuilders).field_0x8 != *(int *)&(this->ToolBuilders).field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar4 = L"";
      iVar2 = 0;
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar4);
    TSet<TTuple<FString,TObjectPtr<UInteractiveToolBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,TObjectPtr<UInteractiveToolBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolBuilder>,0>,FDefaultSetAllocator>
                *)&this->ToolBuilders,uVar3,param_1);
  }
  return;
}

// __DefaultConstructor @ 1496e7d00

void __cdecl UInteractiveToolManager::__DefaultConstructor(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined8 *)&this[2].field_0x10 = 2;
    *(undefined8 *)&this[3].field_0x18 = 2;
    *(undefined8 *)&this[4].field_0x10 = 2;
    *(undefined8 *)&this[5].field_0x8 = 2;
    *(undefined8 *)(this + 6) = 2;
    *(undefined8 *)&this[6].field_0x20 = 2;
    *(undefined ***)this = &_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &_vftable__for__IToolContextTransactionProvider__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)&this[8].field_0x18 = 0;
    *(undefined2 *)&this[7].field_0x18 = 0;
    this[7].field_0x1a = 0;
    *(undefined4 *)&this[8].field_0x20 = 0;
    *(undefined4 *)&this[8].field_0x24 = 0x80;
    *(undefined4 *)(this + 9) = 0xffffffff;
    *(undefined4 *)&this[9].field_0x4 = 0;
    *(undefined8 *)&this[9].field_0x10 = 0;
    *(undefined4 *)&this[9].field_0x18 = 0;
    *(undefined8 *)&this[9].field_0x20 = 0;
    *(undefined8 *)(this + 10) = 0;
    *(undefined8 *)&this[10].field_0x10 = 0;
    *(undefined8 *)&this[10].field_0x18 = 0;
    *(undefined4 *)&this[0xb].field_0x4 = 2;
    *(undefined8 *)&this[0xb].field_0x8 = 0;
    *(undefined8 *)&this[0xb].field_0x10 = 0;
    *(undefined8 *)&this[0xb].field_0x18 = 0;
    *(undefined8 *)&this[0xb].field_0x20 = 0;
    *(undefined2 *)(this + 0xc) = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[10].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[10].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 0xb) = 2;
  }
  return;
}

// __VTableCtorCaller @ 1496e7ed0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UInteractiveToolManager::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &_vftable__for__IToolContextTransactionProvider__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 2;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 2;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 2;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 2;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 2;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 2;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined2 *)&pUVar1[7].field_0x18 = 0;
    pUVar1[7].field_0x1a = 0;
    *(undefined4 *)&pUVar1[8].field_0x20 = 0;
    *(undefined4 *)&pUVar1[8].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 9) = 0xffffffff;
    *(undefined4 *)&pUVar1[9].field_0x4 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    *(undefined4 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined8 *)&pUVar1[10].field_0x10 = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined4 *)&pUVar1[0xb].field_0x4 = 2;
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined2 *)(pUVar1 + 0xc) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// _getUObject @ 1496e8130

UObject * __thiscall UInteractiveToolManager::_getUObject(UInteractiveToolManager *this)

{
  return (UObject *)&this[-1].ActiveLeftToolName;
}

