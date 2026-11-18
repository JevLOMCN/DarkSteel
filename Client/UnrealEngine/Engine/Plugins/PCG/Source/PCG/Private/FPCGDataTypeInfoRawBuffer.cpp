// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// AsId @ 149748640

FPCGDataTypeBaseId * __cdecl FPCGDataTypeInfoRawBuffer::AsId(void)

{
  UScriptStruct *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRawBuffer::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRawBuffer::AsId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRawBuffer::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pUVar1 = StaticStruct();
      FPCGDataTypeBaseId::FPCGDataTypeBaseId
                (&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRawBuffer::AsId(void)'
                  ::__l2::Id,pUVar1);
      _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRawBuffer::AsId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRawBuffer::AsId(void)'
              ::__l2::Id;
    }
  }
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoRawBuffer::AsId(void)'
          ::__l2::Id;
}

// StaticStruct @ 1497893a0

UScriptStruct * __cdecl FPCGDataTypeInfoRawBuffer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRawBuffer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRawBuffer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoRawBuffer,(UObject *)pUVar1,
                         L"PCGDataTypeInfoRawBuffer");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoRawBuffer.OuterSingleton;
}

// GetAssociatedClass @ 1497893e0

TSubclassOf<UPCGData> __thiscall
FPCGDataTypeInfoRawBuffer::GetAssociatedClass(FPCGDataTypeInfoRawBuffer *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UPCGRawBufferData::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RDX.field0_0x0;
}

// GetStaticAssociatedClass @ 14981b8e0

TSubclassOf<UPCGData> __cdecl FPCGDataTypeInfoRawBuffer::GetStaticAssociatedClass(void)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RCX;
  
  pUVar1 = UPCGRawBufferData::StaticClass();
  *(UClass **)in_RCX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UPCGData>)in_RCX.field0_0x0;
}

