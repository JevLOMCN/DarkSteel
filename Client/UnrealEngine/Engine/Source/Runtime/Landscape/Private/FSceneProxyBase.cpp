// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 5

// CanBeOccluded @ 145f84450

bool __thiscall Nanite::FSceneProxyBase::CanBeOccluded(FSceneProxyBase *this)

{
  return false;
}

// GetCurrentFirstLODIdx_RenderThread @ 145f8e950

uchar __thiscall Nanite::FSceneProxyBase::GetCurrentFirstLODIdx_RenderThread(FSceneProxyBase *this)

{
  return '\0';
}

// GetNaniteResourceInfo @ 145f93160

void __thiscall
Nanite::FSceneProxyBase::GetNaniteResourceInfo
          (FSceneProxyBase *this,uint *param_1,uint *param_2,uint *param_3)

{
  uint local_28;
  uint local_24;
  uint local_20;
  
  (**(code **)(this->_padding_ + 0x260))(this,&local_28);
  *param_1 = local_28;
  *param_2 = local_24;
  *param_3 = local_20;
  return;
}

// IsCullingReversedByComponent @ 145f97f30

bool __thiscall Nanite::FSceneProxyBase::IsCullingReversedByComponent(FSceneProxyBase *this)

{
  return false;
}

// IsUsingDistanceCullFade @ 145f981d0

bool __thiscall Nanite::FSceneProxyBase::IsUsingDistanceCullFade(FSceneProxyBase *this)

{
  return false;
}

