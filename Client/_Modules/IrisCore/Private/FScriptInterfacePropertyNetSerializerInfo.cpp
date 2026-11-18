// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// BuildNetSerializerConfig @ 144200300

FNetSerializerConfig * __thiscall
UE::Net::Private::FScriptInterfacePropertyNetSerializerInfo::BuildNetSerializerConfig
          (FScriptInterfacePropertyNetSerializerInfo *this,void *param_1,FProperty *param_2)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FScriptInterfaceNetSerializerConfig__6B_;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_2[1]._padding_ != (UObject *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2[1]._padding_);
  }
  *(longlong *)((longlong)param_1 + 0x10) = param_2[1]._padding_;
  return param_1;
}

// CanUseDefaultConfig @ 144201080

bool __thiscall
UE::Net::Private::FScriptInterfacePropertyNetSerializerInfo::CanUseDefaultConfig
          (FScriptInterfacePropertyNetSerializerInfo *this,FProperty *param_1)

{
  return false;
}

// GetNetSerializer @ 14420aff0

FNetSerializer * __thiscall
UE::Net::Private::FScriptInterfacePropertyNetSerializerInfo::GetNetSerializer
          (FScriptInterfacePropertyNetSerializerInfo *this,FProperty *param_1)

{
  return &FScriptInterfaceNetSerializerNetSerializerInfo::Serializer;
}

// GetPropertyTypeClass @ 14420cf00

FFieldClass * __thiscall
UE::Net::Private::FScriptInterfacePropertyNetSerializerInfo::GetPropertyTypeClass
          (FScriptInterfacePropertyNetSerializerInfo *this)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FInterfaceProperty",0x1000,
                 CASTCLASS_FProperty|CASTCLASS_FInterfaceProperty|CASTCLASS_UField,pFVar1,
                 FInterfaceProperty::Construct);
      atexit(`FInterfaceProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

