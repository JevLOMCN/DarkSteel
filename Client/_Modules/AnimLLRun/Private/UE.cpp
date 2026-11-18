// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimLLRun
// Functions: 1

// GetTimeAfterDistanceTraveled @ 14a7340b0

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl
UE::Anim::DistanceMatchingUtility::GetTimeAfterDistanceTraveled
          (UAnimSequenceBase *param_1,float param_2,float param_3,FName param_4,bool param_5)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FName local_res8;
  float local_res10 [2];
  FAnimCurveBufferAccess local_108;
  double local_e8;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined1 local_d0;
  FScriptContainerElement *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined1 local_a7;
  
  local_res10[0] = param_2;
  if (param_1 == (UAnimSequenceBase *)0x0) {
    if (2 < (byte)LogAnimDistanceMatchingLibrary._0_1_) {
      Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
    }
  }
  else {
    FAnimCurveBufferAccess::FAnimCurveBufferAccess(&local_108,param_1,param_4);
    fVar8 = 0.0;
    if (((CONCAT44(local_108.CompressedBuffer._4_4_,local_108.CompressedBuffer._0_4_) == 0) &&
        (local_108.RawCurve == (FFloatCurve *)0x0)) || (local_108.NumSamples < 2)) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = FAnimCurveBufferAccess::GetValue(&local_108,local_108.NumSamples + -1);
      fVar4 = FAnimCurveBufferAccess::GetValue(&local_108,0);
      fVar3 = fVar3 - fVar4;
    }
    uVar1 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar4 = __real_322bcc77;
    if ((float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
      if ((byte)LogAnimDistanceMatchingLibrary._0_1_ < 3) {
        return local_res10[0];
      }
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,(FString *)&local_108);
      Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
      pFVar2 = (FScriptContainerElement *)local_108._0_8_;
    }
    else {
      fVar9 = 0.0;
      fVar5 = (float)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
      fVar3 = __real_3d088889;
      local_d0 = 0;
      local_108.CompressedBuffer._0_4_ = 0;
      local_108._0_8_ = (void *)0x0;
      local_e0 = 0;
      local_d4 = 0;
      local_c8 = (void *)0x0;
      local_c0 = 0;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_a7 = 0;
      local_e8 = 0.0;
      local_dc = 0;
      if (0.0 < param_3) {
        do {
          if ((!param_5) && (fVar5 <= local_res10[0] + fVar3)) break;
          local_e8 = (double)local_res10[0];
          fVar6 = (float)(**(code **)(param_1->_padding_ + 0x2e0))(param_1,param_4,&local_e8,0);
          local_e8 = (double)(local_res10[0] + fVar3);
          fVar7 = (float)(**(code **)(param_1->_padding_ + 0x2e0))(param_1,param_4,&local_e8);
          fVar7 = fVar7 - fVar6;
          if ((float)((uint)fVar7 & uVar1) <= fVar4) {
            local_res10[0] = local_res10[0] + fVar3;
          }
          else {
            if (param_3 <= fVar7 + fVar8) {
              FAnimationRuntime::AdvanceTime
                        (param_5,((param_3 - fVar8) / fVar7) * fVar3,local_res10,fVar5);
              break;
            }
            FAnimationRuntime::AdvanceTime(param_5,fVar3,local_res10,fVar5);
            fVar8 = fVar7 + fVar8;
          }
          fVar9 = fVar9 + fVar3;
          if (fVar5 <= fVar9) {
            if (2 < (byte)LogAnimDistanceMatchingLibrary._0_1_) {
              local_res8 = (FName)param_1->_padding_;
              ::FName::ToString(&local_res8,(FString *)&local_108);
              Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAnimDistanceMatchingLibrary);
              if ((void *)local_108._0_8_ != (void *)0x0) {
                FMemory::Free((void *)local_108._0_8_);
              }
            }
            break;
          }
        } while (fVar8 < param_3);
      }
      pFVar2 = local_c8;
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
        pFVar2 = local_c8;
      }
    }
    if (pFVar2 != (void *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  return local_res10[0];
}

