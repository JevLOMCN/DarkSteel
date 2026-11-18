// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ~FAnimatedMaterialParameterInfo @ 14680f250

void __thiscall
UE::MovieScene::FAnimatedMaterialParameterInfo::~FAnimatedMaterialParameterInfo
          (FAnimatedMaterialParameterInfo *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((GMaterialParameterEntityLifetimeTracking) &&
     (((this->OutputEntityID).Value != 0xffff || ((this->BlendChannelID).ChannelID != 0xffff)))) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8875111272174059450>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneMaterialParameterSystem.cpp"
                       ,0x46,"!OutputEntityID.IsValid() && !BlendChannelID.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

