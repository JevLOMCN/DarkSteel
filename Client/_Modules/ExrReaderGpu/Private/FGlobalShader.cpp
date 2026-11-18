// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ExrReaderGpu
// Functions: 1

// ~FGlobalShader @ 14ea2b5d0

void __thiscall FGlobalShader::~FGlobalShader(FGlobalShader *this)

{
  undefined1 *this_00;
  FShaderLooseParameterBufferInfo *pFVar1;
  
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0xb0);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0xa0);
  this_00 = &this->field_0x88;
  pFVar1 = *(FShaderLooseParameterBufferInfo **)this_00;
  if (((ulonglong)pFVar1 & 1) != 0) {
    pFVar1 = (FShaderLooseParameterBufferInfo *)(this_00 + ((longlong)pFVar1 >> 0x18));
  }
  DestructItems<FShaderLooseParameterBufferInfo,int>(pFVar1,*(int *)&this->field_0x90);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this_00);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x78);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x68);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x58);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x40);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x30);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x20);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->field_0x10);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this);
  return;
}

