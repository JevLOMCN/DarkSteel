// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// ~IConvertDeinterleave @ 1444a6900

void __thiscall Audio::IConvertDeinterleave::~IConvertDeinterleave(IConvertDeinterleave *this)

{
  return;
}

// Create @ 1444b9a70

TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> __cdecl
Audio::IConvertDeinterleave::Create(FConvertDeinterleaveParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_> TVar3;
  undefined4 *in_RDX;
  
  switch(*in_RDX) {
  case 1:
    ConvertDeinterleavePrivate::CreateConvertDeinterleave<1>(param_1);
    return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
           (IConvertDeinterleave *)param_1;
  case 2:
    ConvertDeinterleavePrivate::CreateConvertDeinterleave<2>(param_1);
    return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
           (IConvertDeinterleave *)param_1;
  case 3:
    ConvertDeinterleavePrivate::CreateConvertDeinterleave<3>(param_1);
    return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
           (IConvertDeinterleave *)param_1;
  case 4:
    ConvertDeinterleavePrivate::CreateConvertDeinterleave<4>(param_1);
    return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
           (IConvertDeinterleave *)param_1;
  case 5:
    ConvertDeinterleavePrivate::CreateConvertDeinterleave<5>(param_1);
    return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
           (IConvertDeinterleave *)param_1;
  case 6:
    ConvertDeinterleavePrivate::CreateConvertDeinterleave<6>(param_1);
    return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
           (IConvertDeinterleave *)param_1;
  case 7:
    ConvertDeinterleavePrivate::CreateConvertDeinterleave<7>(param_1);
    return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
           (IConvertDeinterleave *)param_1;
  case 8:
    ConvertDeinterleavePrivate::CreateConvertDeinterleave<8>(param_1);
    return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
           (IConvertDeinterleave *)param_1;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConvertDeinterleave.cpp"
                     ,0x103,L"Unsupported input channel count: %d");
  if (!bVar2) {
    param_1->NumInputChannels = 0;
    param_1->NumOutputChannels = 0;
    return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
           (IConvertDeinterleave *)param_1;
  }
  pcVar1 = (code *)swi(3);
  TVar3.Ptr = (IConvertDeinterleave *)(*pcVar1)();
  return (TUniquePtr<Audio::IConvertDeinterleave,TDefaultDelete<Audio::IConvertDeinterleave>_>)
         TVar3.Ptr;
}

