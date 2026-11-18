// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 148e8a090

UClass * __cdecl UNDIMemoryBufferSimCacheData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDIMemoryBufferSimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDIMemoryBufferSimCacheData",
               &Z_Registration_Info_UClass_UNDIMemoryBufferSimCacheData.InnerSingleton,
               StaticRegisterNativesUNDIMemoryBufferSimCacheData,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNDIMemoryBufferSimCacheData>,
               InternalVTableHelperCtorCaller<UNDIMemoryBufferSimCacheData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDIMemoryBufferSimCacheData.InnerSingleton;
}

// UNDIMemoryBufferSimCacheData @ 148ea4850

UNDIMemoryBufferSimCacheData * __thiscall
UNDIMemoryBufferSimCacheData::UNDIMemoryBufferSimCacheData
          (UNDIMemoryBufferSimCacheData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNDIMemoryBufferSimCacheData__6B_;
  (this->FrameData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameData).ArrayNum = 0;
  (this->FrameData).ArrayMax = 0;
  (this->BufferData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferData).ArrayNum = 0;
  (this->BufferData).ArrayMax = 0;
  return this;
}

// UNDIMemoryBufferSimCacheData @ 148ea4890

UNDIMemoryBufferSimCacheData * __thiscall
UNDIMemoryBufferSimCacheData::UNDIMemoryBufferSimCacheData
          (UNDIMemoryBufferSimCacheData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNDIMemoryBufferSimCacheData__6B_;
  (this->FrameData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameData).ArrayNum = 0;
  (this->FrameData).ArrayMax = 0;
  (this->BufferData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferData).ArrayNum = 0;
  (this->BufferData).ArrayMax = 0;
  return this;
}

// ~UNDIMemoryBufferSimCacheData @ 148ea6b40

void __thiscall
UNDIMemoryBufferSimCacheData::~UNDIMemoryBufferSimCacheData(UNDIMemoryBufferSimCacheData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNDIMemoryBufferSimCacheData__6B_;
  pFVar1 = (this->BufferData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrameData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148ebf700

UClass * __cdecl UNDIMemoryBufferSimCacheData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNDIMemoryBufferSimCacheData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NDIMemoryBufferSimCacheData",
               &Z_Registration_Info_UClass_UNDIMemoryBufferSimCacheData.InnerSingleton,
               StaticRegisterNativesUNDIMemoryBufferSimCacheData,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNDIMemoryBufferSimCacheData>,
               InternalVTableHelperCtorCaller<UNDIMemoryBufferSimCacheData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNDIMemoryBufferSimCacheData.InnerSingleton;
}

// StaticRegisterNativesUNDIMemoryBufferSimCacheData @ 148ed4bc0

void __cdecl UNDIMemoryBufferSimCacheData::StaticRegisterNativesUNDIMemoryBufferSimCacheData(void)

{
  return;
}

