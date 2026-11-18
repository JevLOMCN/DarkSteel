// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 15

// StaticClass @ 149664920

UClass * __cdecl UInteractiveGizmo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveGizmo.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveGizmo",
               &Z_Registration_Info_UClass_UInteractiveGizmo.InnerSingleton,
               StaticRegisterNativesUInteractiveGizmo,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractiveGizmo>,
               InternalVTableHelperCtorCaller<UInteractiveGizmo>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveGizmo.InnerSingleton;
}

// _getUObject @ 14966b240

UObject * __thiscall UInteractiveGizmo::_getUObject(UInteractiveGizmo *this)

{
  return (UObject *)&this[-1]._padding_;
}

// UInteractiveGizmo @ 1496d28a0

UInteractiveGizmo * __thiscall
UInteractiveGizmo::UInteractiveGizmo(UInteractiveGizmo *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->InputBehaviors).field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  return this;
}

// UInteractiveGizmo @ 1496d28e0

UInteractiveGizmo * __thiscall UInteractiveGizmo::UInteractiveGizmo(UInteractiveGizmo *this)

{
  FName *pFVar1;
  UInputBehaviorSet *pUVar2;
  FName local_res8;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->InputBehaviors).field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transient);
  pFVar1 = ::FName::FName(&local_res8,L"GizmoInputBehaviors");
  pUVar2 = NewObject<UInputBehaviorSet>
                     ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UInputBehaviorSet *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->InputBehaviors).field0_0x0.DebugPtr = pUVar2;
  return this;
}

// ~UInteractiveGizmo @ 1496d4360

void __thiscall UInteractiveGizmo::~UInteractiveGizmo(UInteractiveGizmo *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IInputBehaviorSource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddInputBehavior @ 1496d6cf0

void __thiscall UInteractiveGizmo::AddInputBehavior(UInteractiveGizmo *this,UInputBehavior *param_1)

{
  UInputBehaviorSet *pUVar1;
  code *pcVar2;
  FString local_18;
  
  pUVar1 = (this->InputBehaviors).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2c0);
  ::FString::FString(&local_18,"");
  (*pcVar2)(pUVar1,param_1,0,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// DrawHUD @ 1496db400

void __thiscall
UInteractiveGizmo::DrawHUD(UInteractiveGizmo *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  return;
}

// GetGizmoManager @ 1496dd080

UInteractiveGizmoManager * __thiscall UInteractiveGizmo::GetGizmoManager(UInteractiveGizmo *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UInteractiveGizmoManager *pUVar5;
  
  pUVar5 = (UInteractiveGizmoManager *)this->_padding_;
  if (pUVar5 != (UInteractiveGizmoManager *)0x0) {
    pUVar4 = UInteractiveGizmoManager::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      return pUVar5;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8222451306049044535>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveGizmo.cpp"
                     ,0x37,"GizmoManager != nullptr");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UInteractiveGizmoManager *)(*pcVar2)();
    return pUVar5;
  }
  return (UInteractiveGizmoManager *)0x0;
}

// GetInputBehaviors @ 1496dd120

UInputBehaviorSet * __thiscall UInteractiveGizmo::GetInputBehaviors(UInteractiveGizmo *this)

{
  return (UInputBehaviorSet *)this->_padding_;
}

// GetPrivateStaticClass @ 1496dd3d0

UClass * __cdecl UInteractiveGizmo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveGizmo",
               &Z_Registration_Info_UClass_UInteractiveGizmo.InnerSingleton,
               StaticRegisterNativesUInteractiveGizmo,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractiveGizmo>,
               InternalVTableHelperCtorCaller<UInteractiveGizmo>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveGizmo.InnerSingleton;
}

// Render @ 1496e5340

void __thiscall UInteractiveGizmo::Render(UInteractiveGizmo *this,IToolsContextRenderAPI *param_1)

{
  return;
}

// Setup @ 1496e6190

void __thiscall UInteractiveGizmo::Setup(UInteractiveGizmo *this)

{
  return;
}

// Shutdown @ 1496e61b0

void __thiscall UInteractiveGizmo::Shutdown(UInteractiveGizmo *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001496e61b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->InputBehaviors).field0_0x0.DebugPtr)->_padding_ + 0x2e0))();
  return;
}

// StaticRegisterNativesUInteractiveGizmo @ 1496e66b0

void __cdecl UInteractiveGizmo::StaticRegisterNativesUInteractiveGizmo(void)

{
  return;
}

// Tick @ 1496e6950

void __thiscall UInteractiveGizmo::Tick(UInteractiveGizmo *this,float param_1)

{
  return;
}

