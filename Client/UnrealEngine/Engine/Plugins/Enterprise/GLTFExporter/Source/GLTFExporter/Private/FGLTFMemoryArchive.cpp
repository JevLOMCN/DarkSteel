// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// FGLTFMemoryArchive @ 14e5d24e0

FGLTFMemoryArchive * __thiscall FGLTFMemoryArchive::FGLTFMemoryArchive(FGLTFMemoryArchive *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined ***)this = &___7FGLTFMemoryArchive__6B_;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  return this;
}

// Serialize @ 14e613920

void __thiscall FGLTFMemoryArchive::Serialize(FGLTFMemoryArchive *this,void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Length >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Public\\Builders\\GLTFMemoryArchive.h"
                       ,0x13,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
            (1,1,(*(longlong *)&this->field_0x90 - *(longlong *)&this->field_0xa0) + param_2,
             (ForAnyElementType *)&this->field_0x98,(long64 *)&this->field_0xa0,
             (long64 *)&this->field_0xa8);
  memcpy((void *)(*(longlong *)&this->field_0x98 + *(longlong *)&this->field_0x90),param_1,param_2);
  *(longlong *)&this->field_0x90 = *(longlong *)&this->field_0x90 + param_2;
  return;
}

// TotalSize @ 14e614f40

long64 __thiscall FGLTFMemoryArchive::TotalSize(FGLTFMemoryArchive *this)

{
  return *(long64 *)&this->field_0xa0;
}

