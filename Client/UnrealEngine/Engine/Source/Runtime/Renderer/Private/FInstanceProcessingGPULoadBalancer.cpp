// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FInstanceProcessingGPULoadBalancer @ 144b97e50

FInstanceProcessingGPULoadBalancer * __thiscall
FInstanceProcessingGPULoadBalancer::FInstanceProcessingGPULoadBalancer
          (FInstanceProcessingGPULoadBalancer *this)

{
  int *piVar1;
  
  piVar1 = ::operator_new(0x28);
  if (piVar1 == (int *)0x0) {
    *(undefined8 *)this = 0;
  }
  else {
    *piVar1 = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    *(int **)this = piVar1;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  return this;
}

