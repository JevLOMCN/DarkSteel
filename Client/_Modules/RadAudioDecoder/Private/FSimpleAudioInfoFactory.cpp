// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RadAudioDecoder
// Functions: 3

// Create @ 146bc4eb0

ICompressedAudioInfo * __thiscall FSimpleAudioInfoFactory::Create(FSimpleAudioInfoFactory *this)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ICompressedAudioInfo *pIVar3;
  longlong *plVar4;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateLambda);
  plVar1 = *(longlong **)&(this->CreateLambda).field_0x28;
  UNRECOVERED_JUMPTABLE = *(code **)&this->CreateLambda;
  plVar4 = (longlong *)&(this->CreateLambda).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000146bc4eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar3 = (ICompressedAudioInfo *)(*UNRECOVERED_JUMPTABLE)(uVar2);
  return pIVar3;
}

// IsSeekingSupported @ 146bc4f00

bool __thiscall
FSimpleAudioInfoFactory::IsSeekingSupported(FSimpleAudioInfoFactory *this,bool param_1)

{
  if (param_1) {
    return (this->Capabilities).bSupportsSeekableStreaming;
  }
  return (this->Capabilities).bSupportsSeeking;
}

// ~FSimpleAudioInfoFactory @ 146bc5300

void __thiscall FSimpleAudioInfoFactory::~FSimpleAudioInfoFactory(FSimpleAudioInfoFactory *this)

{
  longlong *plVar1;
  IAudioInfoFactoryRegistry *pIVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FSimpleAudioInfoFactory__6B_;
  pIVar2 = IAudioInfoFactoryRegistry::Get();
  (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,this,this->FormatName);
  if (*(longlong *)&this->CreateLambda != 0) {
    plVar1 = *(longlong **)&(this->CreateLambda).field_0x28;
    plVar3 = (longlong *)&(this->CreateLambda).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000146bc534a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

