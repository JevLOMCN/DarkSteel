// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 17

// StaticClass @ 14ca3f1a0

UClass * __cdecl UInteractiveToolActivity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"InteractiveToolActivity",
               &Z_Registration_Info_UClass_UInteractiveToolActivity.InnerSingleton,
               StaticRegisterNativesUInteractiveToolActivity,0x30,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractiveToolActivity>,
               InternalVTableHelperCtorCaller<UInteractiveToolActivity>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolActivity.InnerSingleton;
}

// UInteractiveToolActivity @ 14ca67ba0

UInteractiveToolActivity * __thiscall
UInteractiveToolActivity::UInteractiveToolActivity
          (UInteractiveToolActivity *this,FVTableHelper *param_1)

{
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this,param_1);
  *(undefined ***)this = &___7UInteractiveToolActivity__6B_;
  return this;
}

// UInteractiveToolActivity @ 14ca67bd0

UInteractiveToolActivity * __thiscall
UInteractiveToolActivity::UInteractiveToolActivity(UInteractiveToolActivity *this)

{
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this);
  *(undefined ***)this = &___7UInteractiveToolActivity__6B_;
  return this;
}

// ~UInteractiveToolActivity @ 14ca6b660

void __thiscall UInteractiveToolActivity::~UInteractiveToolActivity(UInteractiveToolActivity *this)

{
  *(undefined ***)this = &___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// CanAccept @ 14ca7d620

bool __thiscall UInteractiveToolActivity::CanAccept(UInteractiveToolActivity *this)

{
  return false;
}

// CanStart @ 14ca7db40

bool __thiscall UInteractiveToolActivity::CanStart(UInteractiveToolActivity *this)

{
  return false;
}

// End @ 14ca89030

EToolActivityEndResult __thiscall
UInteractiveToolActivity::End(UInteractiveToolActivity *this,EToolShutdownType param_1)

{
  return ErrorDuringEnd;
}

// GetPrivateStaticClass @ 14ca91430

UClass * __cdecl UInteractiveToolActivity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"InteractiveToolActivity",
               &Z_Registration_Info_UClass_UInteractiveToolActivity.InnerSingleton,
               StaticRegisterNativesUInteractiveToolActivity,0x30,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractiveToolActivity>,
               InternalVTableHelperCtorCaller<UInteractiveToolActivity>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolActivity.InnerSingleton;
}

// HasAccept @ 14ca94a60

bool __thiscall UInteractiveToolActivity::HasAccept(UInteractiveToolActivity *this)

{
  return false;
}

// IsRunning @ 14ca97870

bool __thiscall UInteractiveToolActivity::IsRunning(UInteractiveToolActivity *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_9150842700788924307>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\InteractiveToolActivity.h"
                     ,0x6d,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Render @ 14caa0060

void __thiscall
UInteractiveToolActivity::Render(UInteractiveToolActivity *this,IToolsContextRenderAPI *param_1)

{
  return;
}

// Setup @ 14caa6030

void __thiscall
UInteractiveToolActivity::Setup(UInteractiveToolActivity *this,UInteractiveTool *param_1)

{
  UInteractiveTool *apUStackX_8 [4];
  
  apUStackX_8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInteractiveTool *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x28,(FObjectPtr)apUStackX_8);
  return;
}

// Shutdown @ 14caa65a0

void __thiscall UInteractiveToolActivity::Shutdown(UInteractiveToolActivity *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_9150842700788924268>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\InteractiveToolActivity.h"
                     ,0x94,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014caa65e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2e0))(this,2);
  return;
}

// Shutdown @ 14caa65f0

void __thiscall
UInteractiveToolActivity::Shutdown(UInteractiveToolActivity *this,EToolShutdownType param_1)

{
  FWeakObjectPtr FStackX_8;
  undefined8 auStackX_10 [3];
  
  FStackX_8.ObjectIndex = 0;
  FStackX_8.ObjectSerialNumber = 0;
  auStackX_10[0] = 0;
  FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)auStackX_10);
  *(int *)&this->field_0x28 = FStackX_8.ObjectIndex;
  *(int *)&this->field_0x2c = FStackX_8.ObjectSerialNumber;
  return;
}

// Start @ 14caa6ee0

EToolActivityStartResult __thiscall UInteractiveToolActivity::Start(UInteractiveToolActivity *this)

{
  return FailedStart;
}

// StaticRegisterNativesUInteractiveToolActivity @ 14caa7140

void __cdecl UInteractiveToolActivity::StaticRegisterNativesUInteractiveToolActivity(void)

{
  return;
}

// Tick @ 14caa73f0

void __thiscall UInteractiveToolActivity::Tick(UInteractiveToolActivity *this,float param_1)

{
  return;
}

