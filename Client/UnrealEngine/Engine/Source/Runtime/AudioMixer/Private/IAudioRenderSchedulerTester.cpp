// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// ~IAudioRenderSchedulerTester @ 146541280

void __thiscall
IAudioRenderSchedulerTester::~IAudioRenderSchedulerTester(IAudioRenderSchedulerTester *this)

{
  return;
}

// Create @ 14654c450

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<IAudioRenderSchedulerTester,TDefaultDelete<IAudioRenderSchedulerTester>_> __cdecl
IAudioRenderSchedulerTester::Create(void)

{
  FAudioRenderSchedulerTesterImpl *this;
  IAudioRenderSchedulerTester IVar1;
  IAudioRenderSchedulerTester *in_RCX;
  
  this = ::operator_new(0x128);
  if (this != (FAudioRenderSchedulerTesterImpl *)0x0) {
    memset(this,0,0x128);
    IVar1 = (IAudioRenderSchedulerTester)
            Audio::FAudioRenderSchedulerTesterImpl::FAudioRenderSchedulerTesterImpl(this);
    *in_RCX = IVar1;
    return (TUniquePtr<IAudioRenderSchedulerTester,TDefaultDelete<IAudioRenderSchedulerTester>_>)
           in_RCX;
  }
  *in_RCX = (IAudioRenderSchedulerTester)0x0;
  return (TUniquePtr<IAudioRenderSchedulerTester,TDefaultDelete<IAudioRenderSchedulerTester>_>)
         in_RCX;
}

