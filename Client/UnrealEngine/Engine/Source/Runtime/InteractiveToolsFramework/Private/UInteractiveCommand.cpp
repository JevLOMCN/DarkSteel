// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 14962b6f0

UClass * __cdecl UInteractiveCommand::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveCommand.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveCommand",
               &Z_Registration_Info_UClass_UInteractiveCommand.InnerSingleton,
               StaticRegisterNativesUInteractiveCommand,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractiveCommand>,
               InternalVTableHelperCtorCaller<UInteractiveCommand>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveCommand.InnerSingleton;
}

// UInteractiveCommand @ 14963b550

UInteractiveCommand * __thiscall
UInteractiveCommand::UInteractiveCommand(UInteractiveCommand *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInteractiveCommand__6B_;
  return this;
}

// UInteractiveCommand @ 14963b580

UInteractiveCommand * __thiscall
UInteractiveCommand::UInteractiveCommand(UInteractiveCommand *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInteractiveCommand__6B_;
  return this;
}

// ~UInteractiveCommand @ 14963ea90

void __thiscall UInteractiveCommand::~UInteractiveCommand(UInteractiveCommand *this)

{
  *(undefined ***)this = &___7UInteractiveCommand__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanExecuteCommand @ 14964d310

bool __thiscall
UInteractiveCommand::CanExecuteCommand
          (UInteractiveCommand *this,UInteractiveCommandArguments *param_1)

{
  return false;
}

// ExecuteCommand @ 149652180

void __thiscall
UInteractiveCommand::ExecuteCommand
          (UInteractiveCommand *this,UInteractiveCommandArguments *param_1,
          UInteractiveCommandResult **param_2)

{
  return;
}

// GetCommandShortString @ 1496529d0

FText * __thiscall
UInteractiveCommand::GetCommandShortString(UInteractiveCommand *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149656b00

UClass * __cdecl UInteractiveCommand::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveCommand.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveCommand",
               &Z_Registration_Info_UClass_UInteractiveCommand.InnerSingleton,
               StaticRegisterNativesUInteractiveCommand,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractiveCommand>,
               InternalVTableHelperCtorCaller<UInteractiveCommand>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveCommand.InnerSingleton;
}

// StaticRegisterNativesUInteractiveCommand @ 149664b80

void __cdecl UInteractiveCommand::StaticRegisterNativesUInteractiveCommand(void)

{
  return;
}

