// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// PerformRequest @ 1416502a0

void __thiscall FGenericSizeRequest::PerformRequest(FGenericSizeRequest *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (this->field_0x43 == '\0') {
    if (((*(longlong *)&this->field_0x50 == 0) || (*(longlong *)&this->field_0x58 == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LowerLevel && Filename",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformFile.cpp"
                           ,0x8b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = (**(code **)(**(longlong **)&this->field_0x50 + 0x80))
                      (*(longlong **)&this->field_0x50,*(undefined8 *)&this->field_0x58);
    *(undefined8 *)&this->field_0x8 = uVar3;
  }
  IAsyncReadRequest::SetComplete((IAsyncReadRequest *)this);
  return;
}

// ReleaseMemoryOwnershipImpl @ 141656a20

void __thiscall FGenericSizeRequest::ReleaseMemoryOwnershipImpl(FGenericSizeRequest *this)

{
  return;
}

