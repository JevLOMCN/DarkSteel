// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FPlayAmplitudeFrequencyHapticLatentCommand @ 147bbee60

void __thiscall
FPlayAmplitudeFrequencyHapticLatentCommand::~FPlayAmplitudeFrequencyHapticLatentCommand
          (FPlayAmplitudeFrequencyHapticLatentCommand *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7IAutomationLatentCommand__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147bbee8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Update @ 147c09e20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPlayAmplitudeFrequencyHapticLatentCommand::Update(FPlayAmplitudeFrequencyHapticLatentCommand *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  float local_18;
  float local_14;
  undefined8 local_10;
  
  FSlateApplication::Get();
  if (FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  plVar4 = (longlong *)
           (**(code **)((FSlateApplicationBase::PlatformApplication.Object)->_padding_ + 0xe0))();
  if (plVar4 != (longlong *)0x0) {
    local_14 = this->Amplitude;
    local_18 = this->Frequency;
    local_10 = 0;
    (**(code **)(*plVar4 + 0x18))(plVar4,0,this->Hand,&local_18);
  }
  return true;
}

