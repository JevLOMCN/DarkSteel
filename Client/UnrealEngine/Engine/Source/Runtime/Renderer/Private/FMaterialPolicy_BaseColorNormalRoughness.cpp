// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetBlendState @ 1458ff670

FRHIBlendState * __cdecl
RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness::GetBlendState(uchar param_1)

{
  switch(param_1 & 0x1f) {
  case 1:
  case 9:
  case 0x11:
  case 0x19:
    return TStaticStateRHI<TStaticBlendState<15,0,1,5,0,0,1,0,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
  case 2:
  case 10:
  case 0x12:
  case 0x1a:
    return TStaticStateRHI<TStaticBlendState<0,0,1,5,0,0,1,13,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
  case 3:
  case 0xb:
  case 0x13:
  case 0x1b:
    return TStaticStateRHI<TStaticBlendState<15,0,1,5,0,0,1,13,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
  case 4:
  case 0xc:
  case 0x14:
  case 0x1c:
    return TStaticStateRHI<TStaticBlendState<0,0,1,5,0,0,1,10,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
  case 5:
  case 0xd:
  case 0x15:
  case 0x1d:
    return TStaticStateRHI<TStaticBlendState<15,0,1,5,0,0,1,10,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
  case 6:
  case 0xe:
  case 0x16:
  case 0x1e:
    return TStaticStateRHI<TStaticBlendState<0,0,1,5,0,0,1,15,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
  default:
    return TStaticStateRHI<TStaticBlendState<15,0,1,5,0,0,1,15,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
  case 8:
  case 0x10:
  case 0x18:
    return TStaticStateRHI<TStaticBlendState<0,0,1,5,0,0,1,0,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
  }
}

