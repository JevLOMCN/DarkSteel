// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 5

// BuildNetSerializerConfig @ 1442003b0

FNetSerializerConfig * __thiscall
UE::Net::Private::FWeakObjectPtrPropertyNetSerializerInfo::BuildNetSerializerConfig
          (FWeakObjectPtrPropertyNetSerializerInfo *this,void *param_1,FProperty *param_2)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FWeakObjectNetSerializerConfig__6B_;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_2[1]._padding_ != (UObject *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2[1]._padding_);
  }
  *(longlong *)((longlong)param_1 + 0x10) = param_2[1]._padding_;
  return param_1;
}

// CanUseDefaultConfig @ 144201090

bool __thiscall
UE::Net::Private::FWeakObjectPtrPropertyNetSerializerInfo::CanUseDefaultConfig
          (FWeakObjectPtrPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return false;
}

// GetNetSerializer @ 14420b010

FNetSerializer * __thiscall
UE::Net::Private::FWeakObjectPtrPropertyNetSerializerInfo::GetNetSerializer
          (FWeakObjectPtrPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return &FWeakObjectNetSerializerNetSerializerInfo::Serializer;
}

// GetPropertyTypeClass @ 14420cf30

FFieldClass * __thiscall
UE::Net::Private::FWeakObjectPtrPropertyNetSerializerInfo::GetPropertyTypeClass
          (FWeakObjectPtrPropertyNetSerializerInfo *this)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FObjectPropertyBase::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FWeakObjectProperty",0x8000000,
                 CASTCLASS_FWeakObjectProperty|CASTCLASS_FObjectPropertyBase|CASTCLASS_FProperty|
                 CASTCLASS_UField,pFVar1,FWeakObjectProperty::Construct);
      atexit(`FWeakObjectProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// IsSupported @ 144212240

bool __thiscall
UE::Net::Private::FWeakObjectPtrPropertyNetSerializerInfo::IsSupported
          (FWeakObjectPtrPropertyNetSerializerInfo *this,FProperty *param_1)

{
  return true;
}

