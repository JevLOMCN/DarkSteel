// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149789460

UClass * __cdecl UPCGRawBufferData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGRawBufferData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGRawBufferData",
               &Z_Registration_Info_UClass_UPCGRawBufferData.InnerSingleton,
               StaticRegisterNativesUPCGRawBufferData,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGRawBufferData>,
               InternalVTableHelperCtorCaller<UPCGRawBufferData>,local_res8,UPCGData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGRawBufferData.InnerSingleton;
}

// UPCGRawBufferData @ 1497e16e0

UPCGRawBufferData * __thiscall
UPCGRawBufferData::UPCGRawBufferData(UPCGRawBufferData *this,FVTableHelper *param_1)

{
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGRawBufferData__6B_;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return this;
}

// UPCGRawBufferData @ 1497e1720

UPCGRawBufferData * __thiscall
UPCGRawBufferData::UPCGRawBufferData(UPCGRawBufferData *this,FObjectInitializer *param_1)

{
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGRawBufferData__6B_;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return this;
}

// ~UPCGRawBufferData @ 1497e32b0

void __thiscall UPCGRawBufferData::~UPCGRawBufferData(UPCGRawBufferData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGRawBufferData__6B_;
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGData::~UPCGData((UPCGData *)this);
  return;
}

// AddToCrc @ 1497ee430

void __thiscall
UPCGRawBufferData::AddToCrc(UPCGRawBufferData *this,FArchiveCrc32 *param_1,bool param_2)

{
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  UPCGData::AddUIDToCrc((UPCGData *)this,param_1);
  return;
}

// GetDataTypeId @ 149812e90

FPCGDataTypeBaseId * __thiscall UPCGRawBufferData::GetDataTypeId(UPCGRawBufferData *this)

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
      pUVar1 = FPCGDataTypeInfoRawBuffer::StaticStruct();
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

// GetPrivateStaticClass @ 149817a40

UClass * __cdecl UPCGRawBufferData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGRawBufferData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGRawBufferData",
               &Z_Registration_Info_UClass_UPCGRawBufferData.InnerSingleton,
               StaticRegisterNativesUPCGRawBufferData,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGRawBufferData>,
               InternalVTableHelperCtorCaller<UPCGRawBufferData>,local_res8,UPCGData::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGRawBufferData.InnerSingleton;
}

// StaticRegisterNativesUPCGRawBufferData @ 149847240

void __cdecl UPCGRawBufferData::StaticRegisterNativesUPCGRawBufferData(void)

{
  return;
}

