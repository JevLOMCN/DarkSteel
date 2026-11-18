// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// ~FScopedRHIThreadOwnership @ 145c8b520

void __thiscall
FScopedRHIThreadOwnership::~FScopedRHIThreadOwnership(FScopedRHIThreadOwnership *this)

{
  if (this->bCondition == false) {
    return;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"RHIReleaseThreadOwnership");
  if (CpuChannel->Enabled < 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x2f8))();
    FGenericPlatformMisc::EndNamedEvent();
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&`public:___cdecl_FScopedRHIThreadOwnership::~FScopedRHIThreadOwnership(void)___ptr64'
              ::__l5::__CpuProfilerEventSpecId1518,"RHIReleaseThreadOwnership",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h",0x5ee
            );
  FCpuProfilerTrace::OutputBeginEvent
            (`public:___cdecl_FScopedRHIThreadOwnership::~FScopedRHIThreadOwnership(void)___ptr64'::
             __l5::__CpuProfilerEventSpecId1518);
  (**(code **)(GDynamicRHI->_padding_ + 0x2f8))();
  FCpuProfilerTrace::OutputEndEvent();
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

