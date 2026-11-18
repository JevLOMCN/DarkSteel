// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXRHI
// Functions: 2

// operator!= @ 14de0fac0

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

bool __thiscall FDLSSFeatureDesc::operator!=(FDLSSFeatureDesc *this,FDLSSFeatureDesc *param_1)

{
  if (((((*(int *)((longlong)&(this->DestRect).field0_0x0 + 8) -
          *(int *)&(this->DestRect).field0_0x0 ==
          *(int *)((longlong)&(param_1->DestRect).field0_0x0 + 8) -
          *(int *)&(param_1->DestRect).field0_0x0) &&
        (*(int *)((longlong)&(this->DestRect).field0_0x0 + 0xc) -
         *(int *)((longlong)&(this->DestRect).field0_0x0 + 4) ==
         *(int *)((longlong)&(param_1->DestRect).field0_0x0 + 0xc) -
         *(int *)((longlong)&(param_1->DestRect).field0_0x0 + 4))) &&
       (this->DLSSPreset == param_1->DLSSPreset)) &&
      ((((this->DLSSRRPreset == param_1->DLSSRRPreset && (this->PerfQuality == param_1->PerfQuality)
         ) && ((this->bHighResolutionMotionVectors == param_1->bHighResolutionMotionVectors &&
               ((this->bUseAutoExposure == param_1->bUseAutoExposure &&
                (this->bEnableAlphaUpscaling == param_1->bEnableAlphaUpscaling)))))) &&
       (this->bReleaseMemoryOnDelete == param_1->bReleaseMemoryOnDelete)))) &&
     (((this->GPUNode == param_1->GPUNode && (this->GPUVisibility == param_1->GPUVisibility)) &&
      (this->DenoiserMode == param_1->DenoiserMode)))) {
    return false;
  }
  return true;
}

// GetDebugDescription @ 14de10680

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

FString * __thiscall
FDLSSFeatureDesc::GetDebugDescription(FDLSSFeatureDesc *this,FString *__return_storage_ptr__)

{
  switch(this->PerfQuality) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
  }
  switch(this->DLSSRRPreset) {
  case 0:
    break;
  default:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
  }
  switch(this->DLSSPreset) {
  case 0:
    break;
  default:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
  }
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"SrcRect=[%dx%d->%dx%d], DestRect=[%dx%d->%dx%d], ScaleX=%f, ScaleY=%f, NGXDLSSPreset=%s(%d), NGXDLSSRRPreset=%s(%d), NGXPerfQuality=%s(%d), bHighResolutionMotionVectors=%d, bUseAutoExposure=%d, bEnableAlphaUpscaling=%d, bReleaseMemoryOnDelete=%d, GPUNode=%u, GPUVisibility=0x%x, DenoiseMode=%s"
            );
  return __return_storage_ptr__;
}

