// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 6

// GetAutomationController @ 148c4dcc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<IAutomationControllerManager,1> * __thiscall
FAutomationControllerModule::GetAutomationController
          (FAutomationControllerModule *this,
          TSharedRef<IAutomationControllerManager,1> *__return_storage_ptr__)

{
  FAutomationControllerManager *this_00;
  TRawPtrProxy<FAutomationControllerManager> local_res10 [3];
  
  if (AutomationControllerSingleton.Object == (IAutomationControllerManager *)0x0) {
    this_00 = ::operator_new(0x2c0);
    local_res10[0].Object = (FAutomationControllerManager *)0x0;
    if (this_00 != (FAutomationControllerManager *)0x0) {
      local_res10[0].Object = FAutomationControllerManager::FAutomationControllerManager(this_00);
    }
    TSharedPtr<IAutomationControllerManager,1>::operator=<FAutomationControllerManager>
              (&AutomationControllerSingleton,local_res10);
  }
  TSharedPtr<IAutomationControllerManager,1>::ToSharedRef
            (&AutomationControllerSingleton,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Init @ 148c4dd20

void __thiscall FAutomationControllerModule::Init(FAutomationControllerModule *this)

{
  undefined8 *puVar1;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  puVar1 = (undefined8 *)(**(code **)((longlong)*this + 0x40))(this,local_18);
  (**(code **)(*(longlong *)*puVar1 + 0x28))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// Tick @ 148c4dd50

void __thiscall FAutomationControllerModule::Tick(FAutomationControllerModule *this)

{
  undefined8 *puVar1;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  puVar1 = (undefined8 *)(**(code **)((longlong)*this + 0x40))(this,local_18);
  (**(code **)(*(longlong *)*puVar1 + 0x38))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// StartupModule @ 148c4dd80

void __thiscall FAutomationControllerModule::StartupModule(FAutomationControllerModule *this)

{
  undefined8 *puVar1;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  puVar1 = (undefined8 *)(**(code **)((longlong)*this + 0x40))(this,local_18);
  (**(code **)(*(longlong *)*puVar1 + 0x158))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// ShutdownModule @ 148c4ddb0

void __thiscall FAutomationControllerModule::ShutdownModule(FAutomationControllerModule *this)

{
  undefined8 *puVar1;
  undefined8 local_18;
  FSharedReferencer<1> local_10 [2];
  
  puVar1 = (undefined8 *)(**(code **)((longlong)*this + 0x40))(this,&local_18);
  (**(code **)(*(longlong *)*puVar1 + 0x150))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  local_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  AutomationControllerSingleton.Object = (IAutomationControllerManager *)0x0;
  local_18 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&AutomationControllerSingleton.SharedReferenceCount,local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  return;
}

// SupportsDynamicReloading @ 148c4de10

bool __thiscall
FAutomationControllerModule::SupportsDynamicReloading(FAutomationControllerModule *this)

{
  return true;
}

