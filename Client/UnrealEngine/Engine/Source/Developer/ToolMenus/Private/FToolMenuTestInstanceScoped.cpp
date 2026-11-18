// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 2

// FToolMenuTestInstanceScoped @ 142c3a690

FToolMenuTestInstanceScoped * __thiscall
UE::ToolMenus::FToolMenuTestInstanceScoped::FToolMenuTestInstanceScoped
          (FToolMenuTestInstanceScoped *this)

{
  FName FVar1;
  UToolMenus *pUVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  FName local_res8;
  
  pUVar2 = ToolMenus::Private::CreateToolMenusInstance();
  this->ScopedInstance = pUVar2;
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
    pFVar3 = ::FName::FName(&local_res8,"ToolMenus");
    FVar1 = *pFVar3;
    this_00 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_00,FVar1);
    UToolMenus::Singleton = ToolMenus::Private::CreateToolMenusInstance();
  }
  this->PreviousInstance = UToolMenus::Singleton;
  UToolMenus::Singleton = this->ScopedInstance;
  return this;
}

// ~FToolMenuTestInstanceScoped @ 142c3c680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::ToolMenus::FToolMenuTestInstanceScoped::~FToolMenuTestInstanceScoped
          (FToolMenuTestInstanceScoped *this)

{
  FUObjectItem *this_00;
  
  UToolMenus::Singleton = this->PreviousInstance;
  this_00 = FUObjectArray::IndexToObject
                      (&GUObjectArray,*(int *)((longlong)&this->ScopedInstance->_padding_ + 4));
  FUObjectItem::ClearRootFlags(this_00,RootSet);
  return;
}

