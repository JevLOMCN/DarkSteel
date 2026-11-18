// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AvfMediaFactory
// Functions: 2

// GetPlayabilityConfidenceScore @ 14ea25260

int __thiscall
IMediaPlayerFactory::GetPlayabilityConfidenceScore
          (IMediaPlayerFactory *this,FString *param_1,IMediaOptions *param_2,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)*this)();
  return -(uint)(cVar1 != '\0') & 100;
}

// ~IMediaPlayerFactory @ 14ea27420

void __thiscall IMediaPlayerFactory::~IMediaPlayerFactory(IMediaPlayerFactory *this)

{
  *this = (IMediaPlayerFactory)&___7IMediaPlayerFactory__6B_;
  return;
}

