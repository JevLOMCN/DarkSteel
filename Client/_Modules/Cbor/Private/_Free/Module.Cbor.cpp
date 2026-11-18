// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Cbor
// Functions: 7

// `dynamic_initializer_for_'LogCbor'' @ 140f4bc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCbor__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogCbor,L"LogCbor",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCbor__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantCbor'' @ 140f4bc80

void __cdecl _dynamic_initializer_for__ModuleRegistrantCbor__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Cbor";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Cbor",4);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FCborModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 143120730

void * __thiscall FCborModule::_scalar_deleting_destructor_(FCborModule *this,uint param_1)

{
  *this = (FCborModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// DestructItems<FCborContext,int> @ 143120770

void __cdecl DestructItems<FCborContext,int>(FCborContext *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->RawTextValue;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// operator<< @ 143120a70

FArchive * __cdecl operator<<(FArchive *param_1,FCborHeader *param_2)

{
  uchar *puVar1;
  
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (uchar *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->Header = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,1);
  return param_1;
}

// IMPLEMENT_MODULE_Cbor @ 143123140

void __cdecl IMPLEMENT_MODULE_Cbor(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogCbor'' @ 150360240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCbor__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCbor);
  return;
}

