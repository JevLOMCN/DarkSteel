// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 18

// StaticClass @ 14a77f9b0

UClass * __cdecl UCommonWidgetGroupBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonWidgetGroupBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonWidgetGroupBase",
               &Z_Registration_Info_UClass_UCommonWidgetGroupBase.InnerSingleton,
               StaticRegisterNativesUCommonWidgetGroupBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonWidgetGroupBase>,
               InternalVTableHelperCtorCaller<UCommonWidgetGroupBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonWidgetGroupBase.InnerSingleton;
}

// UCommonWidgetGroupBase @ 14a7b0350

UCommonWidgetGroupBase * __thiscall
UCommonWidgetGroupBase::UCommonWidgetGroupBase(UCommonWidgetGroupBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCommonWidgetGroupBase__6B_;
  return this;
}

// UCommonWidgetGroupBase @ 14a7b0380

UCommonWidgetGroupBase * __thiscall
UCommonWidgetGroupBase::UCommonWidgetGroupBase(UCommonWidgetGroupBase *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UCommonWidgetGroupBase__6B_;
  return this;
}

// ~UCommonWidgetGroupBase @ 14a7b3d80

void __thiscall UCommonWidgetGroupBase::~UCommonWidgetGroupBase(UCommonWidgetGroupBase *this)

{
  *(undefined ***)this = &___7UCommonWidgetGroupBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddWidget @ 14a7be7f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonWidgetGroupBase::AddWidget(UCommonWidgetGroupBase *this,UWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSubclassOf<UWidget> TVar3;
  undefined1 local_res10 [24];
  
  if (param_1 == (UWidget *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3838808105211133939>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Groups\\CommonWidgetGroupBase.cpp"
                       ,0xd,"InWidget");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TVar3.Class.field0_0x0 =
         (TObjectPtr<UClass>)(**(code **)(*(longlong *)this + 0x2b0))(this,local_res10);
    bVar2 = UObjectBaseUtility::IsA<TSubclassOf<UWidget>_>((UObjectBaseUtility *)param_1,TVar3);
    if (bVar2) {
      (**(code **)(*(longlong *)this + 0x2b8))(this,param_1);
    }
  }
  return;
}

// AddWidgets @ 14a7be960

void __thiscall
UCommonWidgetGroupBase::AddWidgets
          (UCommonWidgetGroupBase *this,TArray<UWidget_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObjectBaseUtility *this_00;
  code *pcVar3;
  bool bVar4;
  TSubclassOf<UWidget> TVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UWidget_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar1) break;
    this_00 = *(UObjectBaseUtility **)pFVar6;
    if (this_00 == (UObjectBaseUtility *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3838808105211133939>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Groups\\CommonWidgetGroupBase.cpp"
                         ,0xd,"InWidget");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      TVar5.Class.field0_0x0 =
           (TObjectPtr<UClass>)(**(code **)(*(longlong *)this + 0x2b0))(this,local_res18);
      bVar4 = UObjectBaseUtility::IsA<TSubclassOf<UWidget>_>(this_00,TVar5);
      if (bVar4) {
        (**(code **)(*(longlong *)this + 0x2b8))(this);
      }
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// GetPrivateStaticClass @ 14a7e7060

UClass * __cdecl UCommonWidgetGroupBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonWidgetGroupBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonWidgetGroupBase",
               &Z_Registration_Info_UClass_UCommonWidgetGroupBase.InnerSingleton,
               StaticRegisterNativesUCommonWidgetGroupBase,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonWidgetGroupBase>,
               InternalVTableHelperCtorCaller<UCommonWidgetGroupBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonWidgetGroupBase.InnerSingleton;
}

// GetWidgetType @ 14a7e99e0

TSubclassOf<UWidget> __thiscall UCommonWidgetGroupBase::GetWidgetType(UCommonWidgetGroupBase *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UWidget_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UWidget>)in_RDX.field0_0x0;
}

// OnRemoveAll @ 14a7fe6a0

void __thiscall UCommonWidgetGroupBase::OnRemoveAll(UCommonWidgetGroupBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Public\\Groups\\CommonWidgetGroupBase.h"
             ,0x2f,L"Pure virtual not implemented (%s)");
  return;
}

// OnWidgetAdded @ 14a800600

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonWidgetGroupBase::OnWidgetAdded(UCommonWidgetGroupBase *this,UWidget *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Public\\Groups\\CommonWidgetGroupBase.h"
             ,0x2d,L"Pure virtual not implemented (%s)");
  return;
}

// OnWidgetRemoved @ 14a801d30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonWidgetGroupBase::OnWidgetRemoved(UCommonWidgetGroupBase *this,UWidget *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Public\\Groups\\CommonWidgetGroupBase.h"
             ,0x2e,L"Pure virtual not implemented (%s)");
  return;
}

// RemoveAll @ 14a812da0

void __thiscall UCommonWidgetGroupBase::RemoveAll(UCommonWidgetGroupBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a812da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2c8))();
  return;
}

// RemoveWidget @ 14a814540

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonWidgetGroupBase::RemoveWidget(UCommonWidgetGroupBase *this,UWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSubclassOf<UWidget> TVar3;
  undefined1 local_res10 [24];
  
  if (param_1 == (UWidget *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3838808105211133923>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Groups\\CommonWidgetGroupBase.cpp"
                       ,0x1d,"InWidget");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TVar3.Class.field0_0x0 =
         (TObjectPtr<UClass>)(**(code **)(*(longlong *)this + 0x2b0))(this,local_res10);
    bVar2 = UObjectBaseUtility::IsA<TSubclassOf<UWidget>_>((UObjectBaseUtility *)param_1,TVar3);
    if (bVar2) {
      (**(code **)(*(longlong *)this + 0x2c0))(this,param_1);
    }
  }
  return;
}

// StaticRegisterNativesUCommonWidgetGroupBase @ 14a81eb30

void __cdecl UCommonWidgetGroupBase::StaticRegisterNativesUCommonWidgetGroupBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UCommonWidgetGroupBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddWidget @ 14a82bd40

void __cdecl UCommonWidgetGroupBase::execAddWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObjectBaseUtility *this;
  bool bVar3;
  TSubclassOf<UWidget> TVar4;
  UObjectBaseUtility *local_res10;
  undefined1 local_res20 [8];
  
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObjectBaseUtility *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3838808105211133939>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Groups\\CommonWidgetGroupBase.cpp"
                       ,0xd,"InWidget");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    TVar4.Class.field0_0x0 =
         (TObjectPtr<UClass>)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res20);
    bVar3 = UObjectBaseUtility::IsA<TSubclassOf<UWidget>_>(this,TVar4);
    if (bVar3) {
      (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,this);
    }
  }
  return;
}

// execAddWidgets @ 14a82be40

void __cdecl UCommonWidgetGroupBase::execAddWidgets(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  UObjectBaseUtility *this;
  code *pcVar4;
  bool bVar5;
  TSubclassOf<UWidget> TVar6;
  undefined8 *puVar7;
  void **ppvVar8;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  void *local_38;
  undefined8 local_30;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  ppvVar8 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar7 = *ppvVar8;
  iVar2 = *(int *)(ppvVar8 + 1);
  puVar1 = puVar7 + iVar2;
  while( true ) {
    if (*(int *)(ppvVar8 + 1) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UWidget_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar7 == puVar1) break;
    this = (UObjectBaseUtility *)*puVar7;
    if (this == (UObjectBaseUtility *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3838808105211133939>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Groups\\CommonWidgetGroupBase.cpp"
                         ,0xd,"InWidget");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      TVar6.Class.field0_0x0 =
           (TObjectPtr<UClass>)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res20);
      bVar5 = UObjectBaseUtility::IsA<TSubclassOf<UWidget>_>(this,TVar6);
      if (bVar5) {
        (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1);
      }
    }
    puVar7 = puVar7 + 1;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execRemoveAll @ 14a831690

void __cdecl UCommonWidgetGroupBase::execRemoveAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a8316a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2c8))();
  return;
}

// execRemoveWidget @ 14a831810

void __cdecl
UCommonWidgetGroupBase::execRemoveWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObjectBaseUtility *this;
  bool bVar3;
  TSubclassOf<UWidget> TVar4;
  UObjectBaseUtility *local_res10;
  undefined1 local_res20 [8];
  
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObjectBaseUtility *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3838808105211133923>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Groups\\CommonWidgetGroupBase.cpp"
                       ,0x1d,"InWidget");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    TVar4.Class.field0_0x0 =
         (TObjectPtr<UClass>)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res20);
    bVar3 = UObjectBaseUtility::IsA<TSubclassOf<UWidget>_>(this,TVar4);
    if (bVar3) {
      (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,this);
    }
  }
  return;
}

