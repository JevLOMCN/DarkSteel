// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 15

// FRHIShaderLibrary @ 145deda50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRHIShaderLibrary * __thiscall
FRHIShaderLibrary::FRHIShaderLibrary
          (FRHIShaderLibrary *this,EShaderPlatform param_1,FString *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_ShaderLibrary);
  this->Platform = param_1;
  this->_padding_ = (longlong)&___7FRHIShaderLibrary__6B_;
  ::FString::FString(&this->LibraryName,param_2);
  iVar1 = (param_2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  this->LibraryId = uVar2;
  return this;
}

// ~FRHIShaderLibrary @ 145df13f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FRHIShaderLibrary::~FRHIShaderLibrary(FRHIShaderLibrary *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRHIShaderLibrary__6B_;
  pFVar1 = (this->LibraryName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// AddRefPreloadedShaderGroup @ 145df7d60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FRHIShaderLibrary::AddRefPreloadedShaderGroup(FRHIShaderLibrary *this,int param_1)

{
  return;
}

// CreateShader @ 145e02d90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIShader> __thiscall
FRHIShaderLibrary::CreateShader(FRHIShaderLibrary *this,int param_1,bool param_2)

{
  undefined4 in_register_00000014;
  
  *(undefined8 *)CONCAT44(in_register_00000014,param_1) = 0;
  return (TRefCountPtr<FRHIShader>)(FRHIShader *)CONCAT44(in_register_00000014,param_1);
}

// GetAllShaderIndices @ 145e0eb20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRHIShaderLibrary::GetAllShaderIndices
          (FRHIShaderLibrary *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetGroupIndexForShader @ 145e0f460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall FRHIShaderLibrary::GetGroupIndexForShader(FRHIShaderLibrary *this,int param_1)

{
  return -1;
}

// GetLibraryId @ 145e0f830

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall FRHIShaderLibrary::GetLibraryId(FRHIShaderLibrary *this)

{
  return this->LibraryId;
}

// GetShaderSizeBytes @ 145e10db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall FRHIShaderLibrary::GetShaderSizeBytes(FRHIShaderLibrary *this,int param_1)

{
  return 0;
}

// IsPreloading @ 145e19e90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FRHIShaderLibrary::IsPreloading
          (FRHIShaderLibrary *this,int param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  return false;
}

// PreloadShader @ 145e1e2f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FRHIShaderLibrary::PreloadShader
          (FRHIShaderLibrary *this,int param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  return false;
}

// PreloadShaderMap @ 145e1f580

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FRHIShaderLibrary::PreloadShaderMap
          (FRHIShaderLibrary *this,int param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  return false;
}

// PreloadShaderMap @ 145e1f590

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FRHIShaderLibrary::PreloadShaderMap
          (FRHIShaderLibrary *this,int param_1,
          TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)> *param_2
          )

{
  return false;
}

// ReleasePreloadedShader @ 145e21130

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FRHIShaderLibrary::ReleasePreloadedShader(FRHIShaderLibrary *this,int param_1)

{
  return;
}

// ReleasePreloadedShaderGroup @ 145e21500

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FRHIShaderLibrary::ReleasePreloadedShaderGroup(FRHIShaderLibrary *this,int param_1)

{
  return;
}

// Teardown @ 145e34cf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FRHIShaderLibrary::Teardown(FRHIShaderLibrary *this)

{
  return;
}

