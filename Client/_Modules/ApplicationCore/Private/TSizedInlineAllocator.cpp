// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 6

// ResizeAllocation @ 142401c80

void __thiscall
TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>::ResizeAllocation
          (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> *this,
          int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x21) {
    if (_Src == (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FWindowsConsoleOutputDevice2::FConsoleWindow::Activity_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142401d20

void __thiscall
TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FInputDeviceScope_*>::
ResizeAllocation(ForElementType<FInputDeviceScope_*> *this,int param_1,int param_2,ulong64 param_3)

{
  ForElementType<FInputDeviceScope_*> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 0x11) {
    if (_Src == (ForElementType<FInputDeviceScope_*>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 3);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FInputDeviceScope_*>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 3);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142401dc0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>::ResizeAllocation
          (ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight> *this,int param_1,int param_2
          ,ulong64 param_3)

{
  ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FWindowsConsoleOutputDevice2::FLogHighlight>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142401e60

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>::ResizeAllocation
          (ForElementType<FWindowsConsoleOutputDevice::FLogHighlight> *this,int param_1,int param_2,
          ulong64 param_3)

{
  ForElementType<FWindowsConsoleOutputDevice::FLogHighlight> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 << 4);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FWindowsConsoleOutputDevice::FLogHighlight>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 << 4);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142401f00

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>::ResizeAllocation
          (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x128);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FWindowsConsoleOutputDevice2::FLogStringHighlight>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x128);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

// ResizeAllocation @ 142401fa0

void __thiscall
TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>::ResizeAllocation
          (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight> *this,int param_1,
          int param_2,ulong64 param_3)

{
  ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight> _Src;
  
  _Src = this->SecondaryData;
  if ((uint)param_2 < 9) {
    if (_Src == (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)0x0) {
      return;
    }
    memmove(this,(void *)_Src,(longlong)param_1 * 0x118);
    param_2 = 0;
    param_1 = 0;
  }
  else if (_Src == (ForElementType<FWindowsConsoleOutputDevice::FLogStringHighlight>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->SecondaryData,0,param_2,param_3);
    memmove((void *)this->SecondaryData,this,(longlong)param_1 * 0x118);
    return;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&this->SecondaryData,param_1,param_2,param_3);
  return;
}

