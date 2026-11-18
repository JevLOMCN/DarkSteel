// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 5

// ~INodeBase @ 14ad3e240

void __thiscall Metasound::INodeBase::~INodeBase(INodeBase *this)

{
  return;
}

// GetOperatorData @ 14ad564a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Metasound::IOperatorData_const_,1> * __thiscall
Metasound::INodeBase::GetOperatorData
          (INodeBase *this,TSharedPtr<Metasound::IOperatorData_const_,1> *__return_storage_ptr__)

{
  FName *this_00;
  FString local_18;
  
  if (!bDidWarn) {
    if (2 < (byte)LogMetaSound._0_1_) {
      this_00 = (FName *)(**(code **)((longlong)*this + 8))();
      ::FName::ToString(this_00,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    bDidWarn = true;
  }
  __return_storage_ptr__->Object = (IOperatorData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// IsVertexInterfaceSupported @ 14ad5aa10

bool __thiscall
Metasound::INodeBase::IsVertexInterfaceSupported(INodeBase *this,FVertexInterface *param_1)

{
  return false;
}

// SetDefaultInput @ 14ad637a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::INodeBase::SetDefaultInput(INodeBase *this,FName *param_1,FLiteral *param_2)

{
  FName *this_00;
  FString local_28;
  FString local_18;
  
  if (!bDidWarn) {
    if (2 < (byte)LogMetaSound._0_1_) {
      this_00 = (FName *)(**(code **)((longlong)*this + 8))();
      ::FName::ToString(this_00,&local_18);
      ::FName::ToString(param_1,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    bDidWarn = true;
  }
  return;
}

// SetVertexInterface @ 14ad64c70

bool __thiscall Metasound::INodeBase::SetVertexInterface(INodeBase *this,FVertexInterface *param_1)

{
  return false;
}

