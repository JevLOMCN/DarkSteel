// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 1

// Acquire @ 1446d1180

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRHITransientResource::Acquire
          (FRHITransientResource *this,wchar_t *param_1,uint param_2,ERHIPipeline param_3,
          ulong64 param_4)

{
  int *piVar1;
  
  this->AcquireCount = this->AcquireCount + 1;
  this->Name = param_1;
  this->AcquirePipeline = param_3;
  this->DiscardPass = 0xffffffff;
  this->bAcquired = true;
  this->AcquirePasses = (TInterval<unsigned_int>)((ulonglong)param_2 << 0x20);
  this->AcquireCycle = param_4;
  piVar1 = &(this->AliasingOverlaps).ArrayMax;
  (this->AliasingOverlaps).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->AliasingOverlaps).AllocatorInstance,0,piVar1);
  }
  return;
}

