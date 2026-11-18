// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// ~FChildren @ 14254ac90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChildren::~FChildren(FChildren *this)

{
  FString local_28;
  FString local_18;
  
  this->_padding_ = (longlong)&___7FChildren__6B_;
  if (this->Debug_DestroyedTag != 0xdc) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  this->Debug_DestroyedTag = 0xa3;
  if (this->Debug_bIsIteratingChildren != false) {
    ::FName::ToString(&this->Name,&local_18);
    FReflectionMetaData::GetWidgetDebugInfo(&local_28,this->Owner);
    UE::Logging::Private::BasicFatalLog
              (&`protected:_virtual___cdecl_FChildren::~FChildren(void)___ptr64'::__l3::LOG_Static,
               (FLogCategoryBase *)&LogSlate);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// NumSlot @ 14258cef0

int __thiscall FChildren::NumSlot(FChildren *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014258cef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)this->_padding_)();
  return iVar1;
}

// SupportSlotWithSlateAttribute @ 1425a8e30

bool __thiscall FChildren::SupportSlotWithSlateAttribute(FChildren *this)

{
  return false;
}

