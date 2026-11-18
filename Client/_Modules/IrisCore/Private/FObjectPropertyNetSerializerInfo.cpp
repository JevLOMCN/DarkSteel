// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// BuildNetSerializerConfig @ 144200230

FNetSerializerConfig * __thiscall
UE::Net::Private::FObjectPropertyNetSerializerInfo::BuildNetSerializerConfig
          (FObjectPropertyNetSerializerInfo *this,void *param_1,FProperty *param_2)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FObjectNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_2[1]._padding_ != (UObject *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2[1]._padding_);
  }
  *(longlong *)((longlong)param_1 + 0x10) = param_2[1]._padding_;
  return param_1;
}

// CanUseDefaultConfig @ 144201050

bool __thiscall
UE::Net::Private::FObjectPropertyNetSerializerInfo::CanUseDefaultConfig
          (FObjectPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return false;
}

// GetNetSerializer @ 14420afc0

FNetSerializer * __thiscall
UE::Net::Private::FObjectPropertyNetSerializerInfo::GetNetSerializer
          (FObjectPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return &FObjectNetSerializerNetSerializerInfo::Serializer;
}

// GetPropertyTypeClass @ 14420ced0

FFieldClass * __thiscall
UE::Net::Private::FObjectPropertyNetSerializerInfo::GetPropertyTypeClass
          (FObjectPropertyNetSerializerInfo *this)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FObjectPropertyBase::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FObjectProperty",0x10000,
                 CASTCLASS_FObjectPropertyBase|CASTCLASS_FObjectProperty|CASTCLASS_FProperty|
                 CASTCLASS_UField,pFVar1,FObjectProperty::Construct);
      atexit(`FObjectProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// IsSupported @ 1442121a0

bool __thiscall
UE::Net::Private::FObjectPropertyNetSerializerInfo::IsSupported
          (FObjectPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return (bool)((*(byte *)((longlong)&param_1->PropertyFlags + 7) ^ 0xff) & 1);
}

