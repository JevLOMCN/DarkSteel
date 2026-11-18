// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 14

// StaticClass @ 14a13b7e0

UClass * __cdecl URigVMUserWorkflowOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMUserWorkflowOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMUserWorkflowOptions",
               &Z_Registration_Info_UClass_URigVMUserWorkflowOptions.InnerSingleton,
               StaticRegisterNativesURigVMUserWorkflowOptions,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URigVMUserWorkflowOptions>,
               InternalVTableHelperCtorCaller<URigVMUserWorkflowOptions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMUserWorkflowOptions.InnerSingleton;
}

// URigVMUserWorkflowOptions @ 14a191430

URigVMUserWorkflowOptions * __thiscall
URigVMUserWorkflowOptions::URigVMUserWorkflowOptions
          (URigVMUserWorkflowOptions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URigVMUserWorkflowOptions__6B_;
  (this->Workflow)._padding_ = (longlong)&___7FRigVMUserWorkflow__6B_;
  (this->Subject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Workflow).Title.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Workflow).Title.Data.ArrayNum = 0;
  (this->Workflow).Title.Data.ArrayMax = 0;
  (this->Workflow).Tooltip.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Workflow).Tooltip.Data.ArrayNum = 0;
  (this->Workflow).Tooltip.Data.ArrayMax = 0;
  (this->Workflow).Type = Invalid;
  *(undefined8 *)&(this->Workflow).PerformDelegate = 0;
  *(undefined8 *)&(this->Workflow).PerformDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Workflow).PerformDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->Workflow).PerformDynamicDelegate = 0;
  *(undefined8 *)&(this->Workflow).PerformDynamicDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Workflow).PerformDynamicDelegate.field_0x10 = 0;
  (this->Workflow).OptionsClass.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->ReportDelegate = 0;
  *(undefined8 *)&(this->ReportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ReportDelegate).field_0x10 = 0;
  return this;
}

// URigVMUserWorkflowOptions @ 14a1914c0

URigVMUserWorkflowOptions * __thiscall
URigVMUserWorkflowOptions::URigVMUserWorkflowOptions
          (URigVMUserWorkflowOptions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URigVMUserWorkflowOptions__6B_;
  (this->Workflow)._padding_ = (longlong)&___7FRigVMUserWorkflow__6B_;
  (this->Subject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Workflow).Title.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Workflow).Title.Data.ArrayNum = 0;
  (this->Workflow).Title.Data.ArrayMax = 0;
  (this->Workflow).Tooltip.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Workflow).Tooltip.Data.ArrayNum = 0;
  (this->Workflow).Tooltip.Data.ArrayMax = 0;
  (this->Workflow).Type = Invalid;
  *(undefined8 *)&(this->Workflow).PerformDelegate = 0;
  *(undefined8 *)&(this->Workflow).PerformDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Workflow).PerformDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->Workflow).PerformDynamicDelegate = 0;
  *(undefined8 *)&(this->Workflow).PerformDynamicDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->Workflow).PerformDynamicDelegate.field_0x10 = 0;
  (this->Workflow).OptionsClass.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->ReportDelegate = 0;
  *(undefined8 *)&(this->ReportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ReportDelegate).field_0x10 = 0;
  return this;
}

// ~URigVMUserWorkflowOptions @ 14a192080

void __thiscall
URigVMUserWorkflowOptions::~URigVMUserWorkflowOptions(URigVMUserWorkflowOptions *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URigVMUserWorkflowOptions__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReportDelegate);
  (this->Workflow)._padding_ = (longlong)&___7FRigVMUserWorkflow__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Workflow).PerformDynamicDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Workflow).PerformDelegate);
  pFVar1 = (this->Workflow).Tooltip.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Workflow).Title.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a1ac210

UClass * __cdecl URigVMUserWorkflowOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMUserWorkflowOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMUserWorkflowOptions",
               &Z_Registration_Info_UClass_URigVMUserWorkflowOptions.InnerSingleton,
               StaticRegisterNativesURigVMUserWorkflowOptions,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URigVMUserWorkflowOptions>,
               InternalVTableHelperCtorCaller<URigVMUserWorkflowOptions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMUserWorkflowOptions.InnerSingleton;
}

// Report @ 14a1b3940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
URigVMUserWorkflowOptions::Report(URigVMUserWorkflowOptions *this,Type param_1,FString *param_2)

{
  UObject *pUVar1;
  char cVar2;
  FScriptExceptionHandler *pFVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ReportDelegate,
             &local_28);
  if (((*(int *)&(this->ReportDelegate).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(this->ReportDelegate).field_0x8, plVar4 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar4 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (param_1 == Error) {
      pFVar3 = FScriptExceptionHandler::Get();
      if ((param_2->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      FScriptExceptionHandler::HandleException(pFVar3,Error,pwVar5,L"");
    }
    else if (param_1 == Warning) {
      pFVar3 = FScriptExceptionHandler::Get();
      if ((param_2->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      FScriptExceptionHandler::HandleException(pFVar3,Warning,pwVar5,L"");
    }
    else if (3 < (byte)LogRigVM._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    pUVar1 = (this->Subject).field0_0x0.DebugPtr;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ReportDelegate,
               &local_28);
    if (*(int *)&(this->ReportDelegate).field_0x10 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&(this->ReportDelegate).field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,param_1,pUVar1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// RequiresDialog @ 14a1b4100

bool __thiscall
URigVMUserWorkflowOptions::RequiresDialog(URigVMUserWorkflowOptions *this,FProperty *param_1)

{
  if (((param_1->PropertyFlags & CPF_Edit) != CPF_None) &&
     ((param_1->PropertyFlags >> 0x10 & 1) == 0)) {
    return true;
  }
  return false;
}

// RequiresDialog @ 14a1b4120

bool __thiscall URigVMUserWorkflowOptions::RequiresDialog(URigVMUserWorkflowOptions *this)

{
  FField *pFVar1;
  char cVar2;
  TFieldIterator<FProperty> local_28;
  
  local_28.Struct = (UStruct *)this->_padding_;
  if (local_28.Struct == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = (local_28.Struct)->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = true;
  local_28.bIncludeDeprecated = true;
  local_28.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_28);
  pFVar1 = local_28.Field;
  while( true ) {
    if (pFVar1 == (FField *)0x0) {
      return false;
    }
    if (((((uint)(int)pFVar1->ClassPrivate->CastFlags >> 0xf & 1) != 0) && (pFVar1 != (FField *)0x0)
        ) && (local_28.Field = pFVar1, cVar2 = (**(code **)(this->_padding_ + 0x2b0))(this,pFVar1),
             cVar2 != '\0')) break;
    local_28.Field = pFVar1->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    pFVar1 = local_28.Field;
  }
  return true;
}

// StaticRegisterNativesURigVMUserWorkflowOptions @ 14a1eaa00

void __cdecl URigVMUserWorkflowOptions::StaticRegisterNativesURigVMUserWorkflowOptions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsValid @ 14a1f9910

void __cdecl URigVMUserWorkflowOptions::execIsValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(longlong *)(param_1 + 1) != 0;
  return;
}

// execReportError @ 14a1f99f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
URigVMUserWorkflowOptions::execReportError(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  char cVar3;
  FScriptExceptionHandler *this;
  longlong *plVar4;
  wchar_t *pwVar5;
  wchar_t *local_38;
  undefined8 local_30;
  FReadAccessScope local_28;
  
  plVar4 = (longlong *)0x0;
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1[3].field_0x20,
             &local_28);
  if ((*(int *)&param_1[4].field_0x8 != 0) && (*(longlong **)(param_1 + 4) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 4) + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      uVar2 = *(undefined8 *)(param_1 + 1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1[3].field_0x20,
                 &local_28);
      if (*(int *)&param_1[4].field_0x8 != 0) {
        plVar4 = *(longlong **)(param_1 + 4);
      }
      (**(code **)(*plVar4 + 0x60))(plVar4,1,uVar2,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      goto LAB_14a1f9b02;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  this = FScriptExceptionHandler::Get();
  pwVar5 = L"";
  if ((int)local_30 != 0) {
    pwVar5 = local_38;
  }
  FScriptExceptionHandler::HandleException(this,Error,pwVar5,L"");
LAB_14a1f9b02:
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execReportInfo @ 14a1f9b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
URigVMUserWorkflowOptions::execReportInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  void *local_38;
  undefined8 local_30;
  FReadAccessScope local_28;
  
  plVar4 = (longlong *)0x0;
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1[3].field_0x20,
             &local_28);
  if (((*(int *)&param_1[4].field_0x8 == 0) || (*(longlong **)(param_1 + 4) == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 4) + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (3 < (byte)LogRigVM._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    uVar2 = *(undefined8 *)(param_1 + 1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1[3].field_0x20,
               &local_28);
    if (*(int *)&param_1[4].field_0x8 != 0) {
      plVar4 = *(longlong **)(param_1 + 4);
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,4,uVar2,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execReportWarning @ 14a1f9c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
URigVMUserWorkflowOptions::execReportWarning(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  char cVar3;
  FScriptExceptionHandler *this;
  longlong *plVar4;
  wchar_t *pwVar5;
  wchar_t *local_38;
  undefined8 local_30;
  FReadAccessScope local_28;
  
  plVar4 = (longlong *)0x0;
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1[3].field_0x20,
             &local_28);
  if ((*(int *)&param_1[4].field_0x8 != 0) && (*(longlong **)(param_1 + 4) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 4) + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      uVar2 = *(undefined8 *)(param_1 + 1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1[3].field_0x20,
                 &local_28);
      if (*(int *)&param_1[4].field_0x8 != 0) {
        plVar4 = *(longlong **)(param_1 + 4);
      }
      (**(code **)(*plVar4 + 0x60))(plVar4,3,uVar2,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      goto LAB_14a1f9d82;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  this = FScriptExceptionHandler::Get();
  pwVar5 = L"";
  if ((int)local_30 != 0) {
    pwVar5 = local_38;
  }
  FScriptExceptionHandler::HandleException(this,Warning,pwVar5,L"");
LAB_14a1f9d82:
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execRequiresDialog @ 14a1f9ec0

void __cdecl
URigVMUserWorkflowOptions::execRequiresDialog(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField *pFVar1;
  char cVar2;
  TFieldIterator<FProperty> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.Struct = *(UStruct **)&param_1->field_0x10;
  if (local_28.Struct == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = (local_28.Struct)->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = true;
  local_28.bIncludeDeprecated = true;
  local_28.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_28);
  pFVar1 = local_28.Field;
  while( true ) {
    if (pFVar1 == (FField *)0x0) {
      *(undefined1 *)param_3 = 0;
      return;
    }
    if (((((uint)(int)pFVar1->ClassPrivate->CastFlags >> 0xf & 1) != 0) && (pFVar1 != (FField *)0x0)
        ) && (local_28.Field = pFVar1,
             cVar2 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,pFVar1), cVar2 != '\0'))
    break;
    local_28.Field = pFVar1->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    pFVar1 = local_28.Field;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

