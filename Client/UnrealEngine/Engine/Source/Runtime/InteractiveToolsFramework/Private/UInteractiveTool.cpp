// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 37

// GetToolInfo @ 1496a9010

FInteractiveToolInfo * __thiscall
UInteractiveTool::GetToolInfo(UInteractiveTool *this,FInteractiveToolInfo *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->ToolDisplayName).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (this->DefaultToolInfo).ToolDisplayName.TextData.Reference;
  (__return_storage_ptr__->ToolDisplayName).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (__return_storage_ptr__->ToolDisplayName).Flags = (this->DefaultToolInfo).ToolDisplayName.Flags;
  (__return_storage_ptr__->ToolDisplayMessage).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (this->DefaultToolInfo).ToolDisplayMessage.TextData.Reference;
  (__return_storage_ptr__->ToolDisplayMessage).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (__return_storage_ptr__->ToolDisplayMessage).Flags =
       (this->DefaultToolInfo).ToolDisplayMessage.Flags;
  __return_storage_ptr__->ToolIcon = (this->DefaultToolInfo).ToolIcon;
  return __return_storage_ptr__;
}

// OnPropertyModified @ 1496b5d50

void __thiscall
UInteractiveTool::OnPropertyModified(UInteractiveTool *this,UObject *param_1,FProperty *param_2)

{
  return;
}

// OnTick @ 1496b5e70

void __thiscall UInteractiveTool::OnTick(UInteractiveTool *this,float param_1)

{
  return;
}

// SetToolDisplayMessage @ 1496c0080

void __thiscall UInteractiveTool::SetToolDisplayMessage(UInteractiveTool *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  uint uVar3;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->DefaultToolInfo).ToolDisplayMessage.TextData.Reference;
  if (pIVar2 == pIVar1) {
    uVar3 = param_1->Flags;
  }
  else {
    (this->DefaultToolInfo).ToolDisplayMessage.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    uVar3 = param_1->Flags;
  }
  (this->DefaultToolInfo).ToolDisplayMessage.Flags = uVar3;
  return;
}

// SetToolDisplayName @ 1496c00f0

void __thiscall UInteractiveTool::SetToolDisplayName(UInteractiveTool *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  uint uVar3;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->DefaultToolInfo).ToolDisplayName.TextData.Reference;
  if (pIVar2 == pIVar1) {
    uVar3 = param_1->Flags;
  }
  else {
    (this->DefaultToolInfo).ToolDisplayName.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    uVar3 = param_1->Flags;
  }
  (this->DefaultToolInfo).ToolDisplayName.Flags = uVar3;
  return;
}

// SetToolIcon @ 1496c0160

void __thiscall UInteractiveTool::SetToolIcon(UInteractiveTool *this,FSlateBrush *param_1)

{
  (this->DefaultToolInfo).ToolIcon = param_1;
  return;
}

// SetToolInfo @ 1496c0170

void __thiscall UInteractiveTool::SetToolInfo(UInteractiveTool *this,FInteractiveToolInfo *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->ToolDisplayName).TextData.Reference;
  pIVar2 = (this->DefaultToolInfo).ToolDisplayName.TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DefaultToolInfo).ToolDisplayName.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DefaultToolInfo).ToolDisplayName.Flags = (param_1->ToolDisplayName).Flags;
  pIVar1 = (param_1->ToolDisplayMessage).TextData.Reference;
  pIVar2 = (this->DefaultToolInfo).ToolDisplayMessage.TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DefaultToolInfo).ToolDisplayMessage.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DefaultToolInfo).ToolDisplayMessage.Flags = (param_1->ToolDisplayMessage).Flags;
  (this->DefaultToolInfo).ToolIcon = param_1->ToolIcon;
  return;
}

// StaticClass @ 1496c2700

UClass * __cdecl UInteractiveTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveTool.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveTool",
               &Z_Registration_Info_UClass_UInteractiveTool.InnerSingleton,
               StaticRegisterNativesUInteractiveTool,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractiveTool>,
               InternalVTableHelperCtorCaller<UInteractiveTool>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveTool.InnerSingleton;
}

// _getUObject @ 1496ca830

UObject * __thiscall UInteractiveTool::_getUObject(UInteractiveTool *this)

{
  return (UObject *)&this[-1].DefaultToolInfo;
}

// UInteractiveTool @ 1496d2ab0

UInteractiveTool * __thiscall
UInteractiveTool::UInteractiveTool(UInteractiveTool *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->OnPropertySetsModified).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->OnPropertyModifiedDirectlyByTool).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  *(undefined8 *)&this->OnPropertySetsModified = 0;
  *(undefined8 *)&(this->OnPropertySetsModified).field_0x8 = 0;
  *(undefined8 *)&(this->OnPropertySetsModified).field_0x10 = 0;
  *(undefined8 *)&this->OnPropertyModifiedDirectlyByTool = 0;
  *(undefined8 *)&(this->OnPropertyModifiedDirectlyByTool).field_0x8 = 0;
  *(undefined8 *)&(this->OnPropertyModifiedDirectlyByTool).field_0x10 = 0;
  (this->InputBehaviors).field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
  (this->ToolPropertyObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ToolPropertyObjects).ArrayNum = 0;
  (this->ToolPropertyObjects).ArrayMax = 0;
  this->bLastShowedAcceptWarning = false;
  this->ToolActionSet = (FInteractiveToolActionSet *)0x0;
  FInteractiveToolInfo::FInteractiveToolInfo(&this->DefaultToolInfo);
  return this;
}

// UInteractiveTool @ 1496d2b40

UInteractiveTool * __thiscall UInteractiveTool::UInteractiveTool(UInteractiveTool *this)

{
  FName *pFVar1;
  UInputBehaviorSet *pUVar2;
  FText *pFVar3;
  FName local_res8;
  FText local_18;
  
  UObject::UObject((UObject *)this);
  *(undefined8 *)&(this->OnPropertySetsModified).field_0x18 = 2;
  *(undefined8 *)&this->OnPropertySetsModified = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->OnPropertySetsModified).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  *(undefined8 *)&(this->OnPropertySetsModified).field_0x10 = 0;
  *(undefined8 *)&this->OnPropertyModifiedDirectlyByTool = 0;
  *(undefined8 *)&(this->OnPropertyModifiedDirectlyByTool).field_0x8 = 0;
  *(undefined8 *)&(this->OnPropertyModifiedDirectlyByTool).field_0x10 = 0;
  *(undefined8 *)&(this->OnPropertyModifiedDirectlyByTool).field_0x18 = 2;
  (this->InputBehaviors).field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
  (this->ToolPropertyObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ToolPropertyObjects).ArrayNum = 0;
  (this->ToolPropertyObjects).ArrayMax = 0;
  this->bLastShowedAcceptWarning = false;
  this->ToolActionSet = (FInteractiveToolActionSet *)0x0;
  FInteractiveToolInfo::FInteractiveToolInfo(&this->DefaultToolInfo);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  pFVar1 = ::FName::FName(&local_res8,L"InputBehaviors");
  pUVar2 = NewObject<UInputBehaviorSet>
                     ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UInputBehaviorSet *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->InputBehaviors).field0_0x0.DebugPtr = pUVar2;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UInteractiveTool",L"DefaultInteractiveToolName",L"DefaultToolName"
                     );
  FText::operator=(&(this->DefaultToolInfo).ToolDisplayName,pFVar3);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// ~UInteractiveTool @ 1496d4410

void __thiscall UInteractiveTool::~UInteractiveTool(UInteractiveTool *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  pIVar1 = (this->DefaultToolInfo).ToolDisplayMessage.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->DefaultToolInfo).ToolDisplayName.TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pFVar2 = (this->ToolPropertyObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPropertyModifiedDirectlyByTool).field_0x8,
             *(int *)&(this->OnPropertyModifiedDirectlyByTool).field_0x10);
  pvVar3 = *(void **)&(this->OnPropertyModifiedDirectlyByTool).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPropertyModifiedDirectlyByTool);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPropertySetsModified).field_0x8,
             *(int *)&(this->OnPropertySetsModified).field_0x10);
  pvVar3 = *(void **)&(this->OnPropertySetsModified).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPropertySetsModified);
  this->_padding_ = (longlong)&___7IInputBehaviorSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddInputBehavior @ 1496d6d60

void __thiscall
UInteractiveTool::AddInputBehavior(UInteractiveTool *this,UInputBehavior *param_1,void *param_2)

{
  UInputBehaviorSet *pUVar1;
  code *pcVar2;
  FString local_18;
  
  pUVar1 = (this->InputBehaviors).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2c0);
  ::FString::FString(&local_18,"");
  (*pcVar2)(pUVar1,param_1,param_2,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddToolPropertySource @ 1496d6f00

void __thiscall
UInteractiveTool::AddToolPropertySource(UInteractiveTool *this,UInteractiveToolPropertySet *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  <lambda_1> local_res10;
  UInteractiveToolPropertySet *local_18 [2];
  
  pFVar5 = (this->ToolPropertyObjects).AllocatorInstance.Data;
  pFVar2 = pFVar5 + (longlong)(this->ToolPropertyObjects).ArrayNum * 8;
  do {
    if (pFVar5 == pFVar2) {
LAB_1496d6f78:
      local_18[0] = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UInteractiveToolPropertySet *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      pFVar2 = (this->ToolPropertyObjects).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->ToolPropertyObjects).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar4 = (this->ToolPropertyObjects).ArrayNum;
      piVar1 = &(this->ToolPropertyObjects).ArrayMax;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->ToolPropertyObjects).AllocatorInstance,piVar1);
      }
      (this->ToolPropertyObjects).ArrayNum = iVar4 + 1;
      *(UInteractiveToolPropertySet **)
       ((this->ToolPropertyObjects).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_18[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_18[0] != (UInteractiveToolPropertySet *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_18[0]);
      }
      TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
      ::AddLambda<_UInteractiveTool::AddToolPropertySource_::__l2::<lambda_1>_>
                ((TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
                  *)&param_1->OnModified,&local_res10);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnPropertySetsModified);
      return;
    }
    if (*(UInteractiveToolPropertySet **)pFVar5 == (UInteractiveToolPropertySet *)0x0) {
      bVar6 = param_1 == (UInteractiveToolPropertySet *)0x0;
    }
    else {
      bVar6 = *(UInteractiveToolPropertySet **)pFVar5 == param_1;
    }
    if (bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ToolPropertyObjects.Contains(PropertySet) == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveTool.cpp"
                         ,0x5b,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1496d6f78;
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// AddToolPropertySource @ 1496d70a0

void __thiscall UInteractiveTool::AddToolPropertySource(UInteractiveTool *this,UObject *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  UObject *local_18 [2];
  
  pFVar5 = (this->ToolPropertyObjects).AllocatorInstance.Data;
  pFVar2 = pFVar5 + (longlong)(this->ToolPropertyObjects).ArrayNum * 8;
  do {
    if (pFVar5 == pFVar2) {
LAB_1496d7118:
      local_18[0] = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      pFVar2 = (this->ToolPropertyObjects).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->ToolPropertyObjects).ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar4 = (this->ToolPropertyObjects).ArrayNum;
      piVar1 = &(this->ToolPropertyObjects).ArrayMax;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->ToolPropertyObjects).AllocatorInstance,piVar1);
      }
      (this->ToolPropertyObjects).ArrayNum = iVar4 + 1;
      *(UObject **)((this->ToolPropertyObjects).AllocatorInstance.Data + (longlong)iVar4 * 8) =
           local_18[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_18[0]);
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnPropertySetsModified);
      return;
    }
    if (*(UObject **)pFVar5 == (UObject *)0x0) {
      bVar6 = param_1 == (UObject *)0x0;
    }
    else {
      bVar6 = *(UObject **)pFVar5 == param_1;
    }
    if (bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ToolPropertyObjects.Contains(PropertyObject) == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveTool.cpp"
                         ,0x53,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1496d7118;
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// CanAccept @ 1496d8780

bool __thiscall UInteractiveTool::CanAccept(UInteractiveTool *this)

{
  return false;
}

// DrawHUD @ 1496db4a0

void __thiscall
UInteractiveTool::DrawHUD(UInteractiveTool *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  return;
}

// ExecuteAction @ 1496dbdc0

void __thiscall UInteractiveTool::ExecuteAction(UInteractiveTool *this,int param_1)

{
  code *pcVar1;
  longlong *plVar2;
  FInteractiveToolActionSet *this_00;
  FInteractiveToolAction *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  this_00 = (FInteractiveToolActionSet *)(**(code **)(this->_padding_ + 0x358))();
  pFVar3 = FInteractiveToolActionSet::FindActionByID(this_00,param_1);
  if (pFVar3 != (FInteractiveToolAction *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&pFVar3->OnAction);
    pcVar1 = *(code **)&pFVar3->OnAction;
    plVar2 = *(longlong **)&(pFVar3->OnAction).field_0x28;
    plVar5 = (longlong *)&(pFVar3->OnAction).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar4);
  }
  return;
}

// GetActionSet @ 1496dc940

FInteractiveToolActionSet * __thiscall UInteractiveTool::GetActionSet(UInteractiveTool *this)

{
  FInteractiveToolActionSet *pFVar1;
  
  if (this->ToolActionSet != (FInteractiveToolActionSet *)0x0) {
    return this->ToolActionSet;
  }
  pFVar1 = ::operator_new(0x10);
  if (pFVar1 != (FInteractiveToolActionSet *)0x0) {
    (pFVar1->Actions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Actions).ArrayNum = 0;
    (pFVar1->Actions).ArrayMax = 0;
  }
  this->ToolActionSet = pFVar1;
  (**(code **)(this->_padding_ + 0x368))(this);
  return this->ToolActionSet;
}

// GetInputBehaviors @ 1496dd130

UInputBehaviorSet * __thiscall UInteractiveTool::GetInputBehaviors(UInteractiveTool *this)

{
  return *(UInputBehaviorSet **)&(this->OnPropertySetsModified).field_0x18;
}

// GetPrivateStaticClass @ 1496dd530

UClass * __cdecl UInteractiveTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveTool",
               &Z_Registration_Info_UClass_UInteractiveTool.InnerSingleton,
               StaticRegisterNativesUInteractiveTool,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractiveTool>,
               InternalVTableHelperCtorCaller<UInteractiveTool>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveTool.InnerSingleton;
}

// GetToolManager @ 1496de2b0

UInteractiveToolManager * __thiscall UInteractiveTool::GetToolManager(UInteractiveTool *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UInteractiveToolManager *pUVar5;
  
  pUVar5 = (UInteractiveToolManager *)this->_padding_;
  if (pUVar5 != (UInteractiveToolManager *)0x0) {
    pUVar4 = UInteractiveToolManager::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      return pUVar5;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ToolManager != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveTool.cpp"
                     ,0x14c,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UInteractiveToolManager *)(*pcVar2)();
    return pUVar5;
  }
  return (UInteractiveToolManager *)0x0;
}

// GetToolProperties @ 1496de320

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
UInteractiveTool::GetToolProperties
          (UInteractiveTool *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res18 [8];
  longlong local_48;
  ForAnyElementType local_40;
  int local_38;
  int aiStack_34 [3];
  
  if (param_1) {
    pFVar9 = (this->ToolPropertyObjects).AllocatorInstance.Data;
    iVar1 = (this->ToolPropertyObjects).ArrayNum;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    aiStack_34[0] = 0;
    pFVar3 = pFVar9 + (longlong)iVar1 * 8;
    while( true ) {
      if ((this->ToolPropertyObjects).ArrayNum != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar9 == pFVar3) break;
      lVar8 = *(longlong *)pFVar9;
      local_48 = lVar8;
      if (lVar8 == 0) {
LAB_1496de41b:
        if ((local_40.Data <= (FScriptContainerElement *)&local_48) &&
           ((FScriptContainerElement *)&local_48 < local_40.Data + (longlong)aiStack_34[0] * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar7;
          }
        }
        if (local_38 == aiStack_34[0]) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_40,aiStack_34);
        }
        lVar8 = (longlong)local_38;
        local_38 = local_38 + 1;
        *(longlong *)(local_40.Data + lVar8 * 8) = local_48;
      }
      else {
        pUVar6 = UInteractiveToolPropertySet::StaticClass();
        iVar2 = (int)pUVar6->_padding_;
        if (((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar2) ||
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
             &pUVar6->_padding_)) || (*(char *)(lVar8 + 0x88) != '\0')) goto LAB_1496de41b;
      }
      pFVar9 = pFVar9 + 8;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_40.Data;
    __return_storage_ptr__->ArrayNum = local_38;
    __return_storage_ptr__->ArrayMax = aiStack_34[0];
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar1 = (this->ToolPropertyObjects).ArrayNum;
    pFVar3 = (this->ToolPropertyObjects).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,(longlong)iVar1 << 3);
    }
  }
  return __return_storage_ptr__;
}

// HasAccept @ 1496de9e0

bool __thiscall UInteractiveTool::HasAccept(UInteractiveTool *this)

{
  return false;
}

// HasCancel @ 1496dea50

bool __thiscall UInteractiveTool::HasCancel(UInteractiveTool *this)

{
  return false;
}

// NotifyOfPropertyChangeByTool @ 1496e2830

void __thiscall
UInteractiveTool::NotifyOfPropertyChangeByTool
          (UInteractiveTool *this,UInteractiveToolPropertySet *param_1)

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
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnPropertyModifiedDirectlyByTool,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnPropertyModifiedDirectlyByTool).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnPropertyModifiedDirectlyByTool).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnPropertyModifiedDirectlyByTool).field_0x10) {
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
      lVar2 = *(longlong *)&(this->OnPropertyModifiedDirectlyByTool).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnPropertyModifiedDirectlyByTool).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnPropertyModifiedDirectlyByTool,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// RegisterActions @ 1496e3630

void __thiscall
UInteractiveTool::RegisterActions(UInteractiveTool *this,FInteractiveToolActionSet *param_1)

{
  return;
}

// RemoveInputBehaviorsBySource @ 1496e5000

void __thiscall UInteractiveTool::RemoveInputBehaviorsBySource(UInteractiveTool *this,void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001496e5007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->InputBehaviors).field0_0x0.DebugPtr)->_padding_ + 0x2d8))();
  return;
}

// RemoveToolPropertySource @ 1496e5160

bool __thiscall
UInteractiveTool::RemoveToolPropertySource
          (UInteractiveTool *this,UInteractiveToolPropertySet *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UInteractiveToolPropertySet *pUVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  UInteractiveToolPropertySet *local_48 [2];
  
  local_48[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInteractiveToolPropertySet *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->ToolPropertyObjects).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 <
       pFVar2 + (longlong)(this->ToolPropertyObjects).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar1 = (this->ToolPropertyObjects).ArrayNum;
  if (iVar1 != 0) {
    pFVar2 = (this->ToolPropertyObjects).AllocatorInstance.Data;
    iVar10 = 0;
    bVar4 = *(UInteractiveToolPropertySet **)pFVar2 != local_48[0];
    lVar7 = 0;
    pUVar6 = local_48[0];
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar9 + 1;
        if (iVar1 <= lVar7) break;
      } while (bVar4 == (*(UInteractiveToolPropertySet **)(pFVar2 + lVar7 * 8) != pUVar6));
      if (bVar4 != false) {
        if (iVar10 != iVar8) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                  (longlong)(iVar9 - iVar8) << 3);
          pUVar6 = local_48[0];
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < iVar1);
    (this->ToolPropertyObjects).ArrayNum = iVar10;
    if (iVar1 != iVar10) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->OnModified);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnPropertySetsModified);
      return true;
    }
  }
  return false;
}

// Render @ 1496e53d0

void __thiscall UInteractiveTool::Render(UInteractiveTool *this,IToolsContextRenderAPI *param_1)

{
  return;
}

// ReplaceToolPropertySource @ 1496e5430

bool __thiscall
UInteractiveTool::ReplaceToolPropertySource
          (UInteractiveTool *this,UInteractiveToolPropertySet *param_1,
          UInteractiveToolPropertySet *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  <lambda_1> local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInteractiveToolPropertySet *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar1 = (this->ToolPropertyObjects).AllocatorInstance.Data;
  pFVar7 = pFVar1;
  while( true ) {
    if (pFVar7 == pFVar1 + (longlong)(this->ToolPropertyObjects).ArrayNum * 8) {
      return false;
    }
    if (*(UInteractiveToolPropertySet **)pFVar7 == param_1) break;
    pFVar7 = pFVar7 + 8;
  }
  uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
  if (uVar6 == 0xffffffff) {
    return false;
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->OnModified);
  TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>::
  AddLambda<_UInteractiveTool::ReplaceToolPropertySource_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
              *)&param_2->OnModified,&local_res10);
  uVar5 = 0;
  if ((int)uVar6 < (this->ToolPropertyObjects).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this->ToolPropertyObjects).AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UInteractiveToolPropertySet *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  *(UInteractiveToolPropertySet **)(pFVar1 + (longlong)(int)uVar6 * 8) = param_2;
  if (param_3) {
    param_2->bIsPropertySetEnabled = true;
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnPropertySetsModified);
  return true;
}

// SetToolPropertySourceEnabled @ 1496e5f60

bool __thiscall
UInteractiveTool::SetToolPropertySourceEnabled
          (UInteractiveTool *this,UInteractiveToolPropertySet *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInteractiveToolPropertySet *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar1 = (this->ToolPropertyObjects).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->ToolPropertyObjects).ArrayNum * 8) {
      return false;
    }
    if (*(UInteractiveToolPropertySet **)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 8;
  }
  if ((int)((longlong)pFVar2 - (longlong)pFVar1 >> 3) == -1) {
    return false;
  }
  if (param_1->bIsPropertySetEnabled != param_2) {
    param_1->bIsPropertySetEnabled = param_2;
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnPropertySetsModified);
  }
  return true;
}

// Setup @ 1496e61a0

void __thiscall UInteractiveTool::Setup(UInteractiveTool *this)

{
  return;
}

// Shutdown @ 1496e6390

void __thiscall UInteractiveTool::Shutdown(UInteractiveTool *this,EToolShutdownType param_1)

{
  (**(code **)(((this->InputBehaviors).field0_0x0.DebugPtr)->_padding_ + 0x2e0))();
  (this->ToolPropertyObjects).ArrayNum = 0;
  if ((this->ToolPropertyObjects).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ToolPropertyObjects).AllocatorInstance,0,
               &(this->ToolPropertyObjects).ArrayMax);
  }
  return;
}

// StaticRegisterNativesUInteractiveTool @ 1496e66d0

void __cdecl UInteractiveTool::StaticRegisterNativesUInteractiveTool(void)

{
  return;
}

// Tick @ 1496e69f0

void __thiscall UInteractiveTool::Tick(UInteractiveTool *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->ToolPropertyObjects).AllocatorInstance.Data;
  iVar3 = (this->ToolPropertyObjects).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->ToolPropertyObjects).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar5 = *(longlong *)pFVar8;
    if (lVar5 != 0) {
      pUVar6 = UInteractiveToolPropertySet::StaticClass();
      iVar4 = (int)pUVar6->_padding_;
      if ((iVar4 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar4 * 8)
          == &pUVar6->_padding_)) {
        puVar7 = *(undefined8 **)(lVar5 + 0x28);
        iVar4 = *(int *)(lVar5 + 0x30);
        puVar2 = puVar7 + iVar4;
        if (*(char *)(lVar5 + 0x88) == '\0') {
          while( true ) {
            if (*(int *)(lVar5 + 0x30) != iVar4) {
              `TCheckedPointerIterator<TUniquePtr<FWatchablePropertySet::FPropertyWatcher,TDefaultDelete<FWatchablePropertySet::FPropertyWatcher>_>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_res8);
            }
            if (puVar7 == puVar2) break;
            (**(code **)(*(longlong *)*puVar7 + 0x10))();
            puVar7 = puVar7 + 1;
          }
        }
        else {
          while( true ) {
            if (*(int *)(lVar5 + 0x30) != iVar4) {
              `TCheckedPointerIterator<TUniquePtr<FWatchablePropertySet::FPropertyWatcher,TDefaultDelete<FWatchablePropertySet::FPropertyWatcher>_>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_res8);
            }
            if (puVar7 == puVar2) break;
            (**(code **)(*(longlong *)*puVar7 + 8))();
            puVar7 = puVar7 + 1;
          }
        }
      }
    }
    pFVar8 = pFVar8 + 8;
  }
                    /* WARNING: Could not recover jumptable at 0x0001496e6b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x350))(this,param_1);
  return;
}

// UpdateAcceptWarnings @ 1496e7070

void __thiscall
UInteractiveTool::UpdateAcceptWarnings(UInteractiveTool *this,EAcceptWarning param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  FText *pFVar4;
  FText local_28;
  FText local_18;
  
  if (param_1 == NoWarning) {
    if (this->bLastShowedAcceptWarning == false) goto LAB_1496e7152;
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
    pcVar1 = *(code **)(*plVar3 + 0x360);
    pFVar4 = FText::FText(&local_18);
    (*pcVar1)(plVar3,pFVar4,3);
    local_28.TextData.Reference = local_18.TextData.Reference;
  }
  else {
    if (param_1 != EmptyForbidden) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveTool.cpp"
                         ,0x12f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_1496e7152;
    }
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
    pcVar1 = *(code **)(*plVar3 + 0x360);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"UInteractiveTool",L"CannotCreateEmptyMesh",
                        L"WARNING: Tool doesn\'t allow creation of an empty mesh.");
    (*pcVar1)(plVar3,pFVar4,3);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
LAB_1496e7152:
  this->bLastShowedAcceptWarning = param_1 != NoWarning;
  return;
}

