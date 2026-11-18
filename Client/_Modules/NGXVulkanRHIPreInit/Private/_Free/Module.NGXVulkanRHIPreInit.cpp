// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXVulkanRHIPreInit
// Functions: 5

// `dynamic_initializer_for_'LogDLSSNGXVulkanRHIPreInit'' @ 1413ff650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogDLSSNGXVulkanRHIPreInit__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogDLSSNGXVulkanRHIPreInit,L"LogDLSSNGXVulkanRHIPreInit",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogDLSSNGXVulkanRHIPreInit__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNGXVulkanRHIPreInit'' @ 1413ff690

void __cdecl _dynamic_initializer_for__ModuleRegistrantNGXVulkanRHIPreInit__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NGXVulkanRHIPreInit";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NGXVulkanRHIPreInit",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FNGXVulkanRHIPreInitModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14de392e0

void * __thiscall
FNGXVulkanRHIPreInitModule::_scalar_deleting_destructor_
          (FNGXVulkanRHIPreInitModule *this,uint param_1)

{
  *this = (FNGXVulkanRHIPreInitModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_NGXVulkanRHIPreInit @ 14de39350

void __cdecl IMPLEMENT_MODULE_NGXVulkanRHIPreInit(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogDLSSNGXVulkanRHIPreInit'' @ 15045f530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogDLSSNGXVulkanRHIPreInit__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogDLSSNGXVulkanRHIPreInit);
  return;
}

