// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 1473c76f0

UScriptStruct * __cdecl FAnimSegment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimSegment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimSegment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimSegment,(UObject *)pUVar1,L"AnimSegment");
  }
  return Z_Registration_Info_UScriptStruct_FAnimSegment.OuterSingleton;
}

// ConvertTrackPosToAnimPos @ 1473f41d0

float __thiscall FAnimSegment::ConvertTrackPosToAnimPos(FAnimSegment *this,float *param_1)

{
  UAnimSequenceBase *pUVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pUVar1 = (this->AnimReference).field0_0x0.DebugPtr;
  fVar5 = __real_3f800000;
  if (pUVar1 != (UAnimSequenceBase *)0x0) {
    fVar5 = pUVar1->RateScale;
  }
  fVar5 = fVar5 * this->AnimPlayRate;
  fVar8 = __real_3f800000;
  if (__real_322bcc77 < (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar8 = fVar5;
  }
  iVar2 = this->LoopingCount + -1;
  fVar5 = this->AnimEndTime - this->AnimStartTime;
  fVar7 = (*param_1 - this->StartPos) * fVar8;
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  fVar6 = (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  iVar2 = (int)ROUND((fVar6 + fVar6) / fVar5 - __real_3f000000) >> 1;
  if (iVar2 < iVar3) {
    iVar3 = iVar2;
  }
  pfVar4 = &this->AnimStartTime;
  if (fVar8 < 0.0) {
    pfVar4 = &this->AnimEndTime;
  }
  return (fVar7 - (float)iVar3 * fVar5) + *pfVar4;
}

// GetAnimNotifiesFromTrackPositions @ 1473ff1b0

void __thiscall
FAnimSegment::GetAnimNotifiesFromTrackPositions
          (FAnimSegment *this,float *param_1,float *param_2,FAnimNotifyContext *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  UAnimSequenceBase *pUVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [4];
  
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar9 = __real_3f800000;
  fVar1 = *param_1;
  pUVar4 = (this->AnimReference).field0_0x0.DebugPtr;
  fVar16 = this->StartPos;
  fVar2 = *param_2;
  bVar5 = fVar2 < fVar1;
  fVar15 = __real_3f800000;
  if (pUVar4 != (UAnimSequenceBase *)0x0) {
    fVar15 = pUVar4->RateScale;
  }
  fVar14 = this->AnimPlayRate;
  fVar19 = fVar14 * fVar15;
  if ((float)((uint)(fVar14 * fVar15) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
  {
    fVar19 = __real_3f800000;
  }
  iVar3 = this->LoopingCount;
  fVar15 = this->AnimEndTime;
  fVar17 = this->AnimStartTime;
  fVar20 = fVar15 - fVar17;
  fVar13 = ((float)iVar3 * fVar20) / (float)((uint)fVar19 & __xmm_7fffffff7fffffff7fffffff7fffffff)
           + fVar16;
  fVar10 = fVar2;
  fVar19 = fVar1;
  if (bVar5) {
    fVar10 = fVar1;
    fVar19 = fVar2;
  }
  if (((fVar19 < fVar13) && (fVar16 < fVar10)) && (pUVar4 != (UAnimSequenceBase *)0x0)) {
    fVar19 = fVar14 * pUVar4->RateScale;
    if ((float)((uint)fVar19 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
      fVar19 = __real_3f800000;
    }
    fVar18 = (float)((uint)fVar19 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar10 = fVar1;
    fVar12 = fVar1;
    if (bVar5) {
      if (fVar13 <= fVar1) {
        fVar10 = fVar13;
        fVar12 = fVar13;
      }
    }
    else {
      if (fVar13 <= fVar1) {
        fVar12 = fVar13;
      }
      if (fVar1 <= fVar16) {
        fVar10 = fVar16;
      }
    }
    fVar14 = fVar14 * pUVar4->RateScale;
    if ((float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
      fVar14 = __real_3f800000;
    }
    iVar8 = 0;
    if (0 < iVar3 + -1) {
      iVar8 = iVar3 + -1;
    }
    fVar11 = (fVar10 - fVar16) * fVar14;
    fVar10 = (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    iVar7 = (int)ROUND((fVar10 + fVar10) / fVar20 - __real_3f000000) >> 1;
    if (iVar7 < iVar8) {
      iVar8 = iVar7;
    }
    local_res8[0] = fVar15;
    if (0.0 <= fVar14) {
      local_res8[0] = fVar17;
    }
    fVar14 = fVar2;
    if (fVar13 <= fVar2) {
      fVar14 = fVar13;
    }
    if (fVar14 <= fVar16) {
      fVar14 = fVar16;
    }
    if (fVar12 <= fVar16) {
      fVar12 = fVar16;
    }
    local_res8[0] = (fVar11 - (float)iVar8 * fVar20) + local_res8[0];
    if (fVar15 <= local_res8[0]) {
      local_res8[0] = fVar15;
    }
    fVar16 = (float)((uint)(fVar14 - fVar12) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (local_res8[0] <= fVar17) {
      local_res8[0] = fVar17;
    }
    local_res10[0] = fVar15;
    if (fVar19 < 0.0 != bVar5) {
      local_res10[0] = fVar17;
      fVar17 = fVar15;
    }
    iVar8 = 1;
    if (1 < iVar3) {
      iVar8 = iVar3;
    }
    while( true ) {
      if (iVar8 < 1) {
        return;
      }
      if ((fVar16 <= 0.0) && (fVar2 != fVar1)) {
        return;
      }
      fVar15 = (local_res10[0] - local_res8[0]) / fVar18;
      if ((float)((uint)fVar16 & uVar6) < (float)((uint)fVar15 & uVar6)) break;
      (**(code **)(pUVar4->_padding_ + 0x2d8))(pUVar4,local_res8,local_res10,param_3);
      fVar16 = fVar16 - fVar15;
      local_res8[0] = fVar17;
      iVar8 = iVar8 + -1;
    }
    if (bVar5) {
      fVar9 = __real_bf800000;
    }
    local_res18[0] = fVar9 * fVar19 * fVar16 + local_res8[0];
    (**(code **)(pUVar4->_padding_ + 0x2d8))(pUVar4,local_res8,local_res18,param_3);
  }
  return;
}

// GetAnimationData @ 1473ff960

UAnimSequenceBase * __thiscall
FAnimSegment::GetAnimationData(FAnimSegment *this,float param_1,float *param_2)

{
  UAnimSequenceBase *pUVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if (this->bValid != false) {
    bVar2 = IsInRange(this,param_1);
    if ((bVar2) &&
       (pUVar1 = (this->AnimReference).field0_0x0.DebugPtr, pUVar1 != (UAnimSequenceBase *)0x0)) {
      fVar4 = pUVar1->RateScale * this->AnimPlayRate;
      if ((float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
        fVar4 = __real_3f800000;
      }
      fVar5 = param_1 - this->StartPos;
      if (1 < this->LoopingCount) {
        fVar5 = FGenericPlatformMath::Fmod
                          (fVar5,(this->AnimEndTime - this->AnimStartTime) /
                                 (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff));
      }
      lVar3 = 0xc;
      if (fVar4 <= 0.0) {
        lVar3 = 0x10;
      }
      *param_2 = fVar4 * fVar5 + *(float *)((longlong)&(this->AnimReference).field0_0x0 + lVar3);
      return (this->AnimReference).field0_0x0.DebugPtr;
    }
  }
  return (UAnimSequenceBase *)0x0;
}

// GetLength @ 147402380

float __thiscall FAnimSegment::GetLength(FAnimSegment *this)

{
  UAnimSequenceBase *pUVar1;
  float fVar2;
  float fVar3;
  
  pUVar1 = (this->AnimReference).field0_0x0.DebugPtr;
  fVar2 = __real_3f800000;
  if (pUVar1 != (UAnimSequenceBase *)0x0) {
    fVar2 = pUVar1->RateScale;
  }
  fVar2 = fVar2 * this->AnimPlayRate;
  fVar3 = __real_3f800000;
  if (__real_322bcc77 < (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar3 = fVar2;
  }
  return ((this->AnimEndTime - this->AnimStartTime) * (float)this->LoopingCount) /
         (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff);
}

// GetRootMotionExtractionStepsForTrackRange @ 147404430

void __thiscall
FAnimSegment::GetRootMotionExtractionStepsForTrackRange
          (FAnimSegment *this,TArray<FRootMotionExtractionStep,TSizedDefaultAllocator<32>_> *param_1
          ,float param_2,float param_3)

{
  TObjectPtr<UAnimSequenceBase>_u_0 *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  TObjectPtr<UAnimSequenceBase>_u_0 TVar9;
  longlong lVar10;
  int iVar11;
  TObjectPtr<UAnimSequenceBase>_u_0 TVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res18 [4];
  TObjectPtr<UAnimSequenceBase>_u_0 local_d8;
  float local_d0;
  float local_cc;
  TObjectPtr<UAnimSequenceBase>_u_0 local_c8;
  float local_c0;
  float local_bc;
  
  if (((param_2 != param_3) && (this->bValid != false)) &&
     ((this->AnimReference).field0_0x0.DebugPtr != (UAnimSequenceBase *)0x0)) {
    fVar17 = this->StartPos;
    bVar6 = param_3 < param_2;
    fVar13 = GetLength(this);
    fVar13 = fVar13 + fVar17;
    if (bVar6) {
      if (fVar13 <= param_3) {
        return;
      }
      if (param_2 <= fVar17) {
        return;
      }
      fVar16 = fVar13;
      if (param_2 <= fVar13) {
        fVar16 = param_2;
      }
      fVar13 = fVar17;
      if (fVar17 <= param_3) {
        fVar13 = param_3;
      }
    }
    else {
      if (fVar13 <= param_2) {
        return;
      }
      if (param_3 <= fVar17) {
        return;
      }
      fVar16 = fVar17;
      if (fVar17 <= param_2) {
        fVar16 = param_2;
      }
      if (param_3 <= fVar13) {
        fVar13 = param_3;
      }
    }
    local_res18[0] = fVar16;
    fVar14 = GetValidPlayRate(this);
    fVar17 = this->AnimEndTime;
    fVar18 = this->AnimStartTime;
    fVar15 = ConvertTrackPosToAnimPos(this,local_res18);
    uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar13 = (float)((uint)(fVar13 - fVar16) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar17 <= fVar15) {
      fVar15 = fVar17;
    }
    if (fVar15 <= fVar18) {
      fVar15 = fVar18;
    }
    fVar16 = (&this->AnimStartTime)[fVar14 < 0.0 != bVar6];
    if (fVar14 < 0.0 == bVar6) {
      fVar18 = fVar17;
    }
    pUVar8 = Z_Construct_UClass_UAnimSequence_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)this,pUVar8);
    TVar12.DebugPtr = (UAnimSequenceBase *)0x0;
    TVar9.DebugPtr = TVar12.DebugPtr;
    if (bVar5) {
      TVar9.DebugPtr = (this->AnimReference).field0_0x0.DebugPtr;
    }
    if ((this->AnimReference).field0_0x0.DebugPtr != (UAnimSequenceBase *)0x0) {
      pUVar8 = UAnimComposite::StaticClass();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)this,pUVar8);
      if (bVar5) {
        TVar12 = (TObjectPtr<UAnimSequenceBase>_u_0)(this->AnimReference).field0_0x0.DebugPtr;
      }
    }
    if ((TVar9.DebugPtr != (UAnimSequenceBase *)0x0) ||
       (TVar12.DebugPtr != (UAnimSequenceBase *)0x0)) {
      iVar11 = 1;
      if (1 < this->LoopingCount) {
        iVar11 = this->LoopingCount;
      }
      if (0 < iVar11) {
        while (0.0 < fVar13) {
          fVar17 = (fVar18 - fVar15) / fVar14;
          if ((float)((uint)fVar13 & uVar4) < (float)((uint)fVar17 & uVar4)) {
            fVar17 = __real_3f800000;
            if (bVar6) {
              fVar17 = __real_bf800000;
            }
            local_bc = fVar17 * fVar14 * fVar13 + fVar15;
            if (TVar9.DebugPtr != (UAnimSequenceBase *)0x0) {
              local_c8 = TVar9;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
              }
              pTVar1 = (TObjectPtr<UAnimSequenceBase>_u_0 *)(param_1->AllocatorInstance).Data;
              local_c0 = fVar15;
              if (((pTVar1 <= &local_c8) && (&local_c8 < pTVar1 + (longlong)param_1->ArrayMax * 2))
                 && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar11 = param_1->ArrayNum;
              if (iVar11 == param_1->ArrayMax) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              lVar10 = (longlong)iVar11;
              param_1->ArrayNum = iVar11 + 1;
              pFVar2 = (param_1->AllocatorInstance).Data;
              ((TObjectPtr<UAnimSequenceBase>_u_0 *)(pFVar2 + lVar10 * 0x10))->DebugPtr =
                   (UAnimSequenceBase *)local_c8;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_c8.DebugPtr != (UAnimSequenceBase *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)local_c8.DebugPtr);
              }
              *(float *)(pFVar2 + lVar10 * 0x10 + 8) = local_c0;
              *(float *)(pFVar2 + lVar10 * 0x10 + 0xc) = local_bc;
              return;
            }
            if (TVar12.DebugPtr == (UAnimSequenceBase *)0x0) {
              return;
            }
            FAnimTrack::GetRootMotionExtractionStepsForTrackRange
                      ((FAnimTrack *)&TVar12.DebugPtr[1]._padding_,param_1,fVar15,local_bc);
            return;
          }
          if (TVar9.DebugPtr == (UAnimSequenceBase *)0x0) {
            if (TVar12.DebugPtr != (UAnimSequenceBase *)0x0) {
              FAnimTrack::GetRootMotionExtractionStepsForTrackRange
                        ((FAnimTrack *)&TVar12.DebugPtr[1]._padding_,param_1,fVar15,fVar18);
            }
          }
          else {
            local_d8 = TVar9;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
            }
            pTVar1 = (TObjectPtr<UAnimSequenceBase>_u_0 *)(param_1->AllocatorInstance).Data;
            local_d0 = fVar15;
            local_cc = fVar18;
            if (((pTVar1 <= &local_d8) && (&local_d8 < pTVar1 + (longlong)param_1->ArrayMax * 2)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar7 = param_1->ArrayNum;
            if (iVar7 == param_1->ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            pFVar2 = (param_1->AllocatorInstance).Data;
            param_1->ArrayNum = iVar7 + 1;
            lVar10 = (longlong)iVar7;
            ((TObjectPtr<UAnimSequenceBase>_u_0 *)(pFVar2 + lVar10 * 0x10))->DebugPtr =
                 (UAnimSequenceBase *)local_d8;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_d8.DebugPtr != (UAnimSequenceBase *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_d8.DebugPtr);
            }
            *(float *)(pFVar2 + lVar10 * 0x10 + 8) = local_d0;
            *(float *)(pFVar2 + lVar10 * 0x10 + 0xc) = local_cc;
          }
          iVar11 = iVar11 + -1;
          fVar13 = fVar13 - fVar17;
          fVar15 = fVar16;
          if (iVar11 < 1) {
            return;
          }
        }
      }
    }
  }
  return;
}

// GetValidPlayRate @ 147405ce0

float __thiscall FAnimSegment::GetValidPlayRate(FAnimSegment *this)

{
  UAnimSequenceBase *pUVar1;
  float fVar2;
  
  pUVar1 = (this->AnimReference).field0_0x0.DebugPtr;
  fVar2 = __real_3f800000;
  if (pUVar1 != (UAnimSequenceBase *)0x0) {
    fVar2 = pUVar1->RateScale;
  }
  fVar2 = fVar2 * this->AnimPlayRate;
  if ((float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    fVar2 = __real_3f800000;
  }
  return fVar2;
}

// IsInRange @ 147407cd0

bool __thiscall FAnimSegment::IsInRange(FAnimSegment *this,float param_1)

{
  UAnimSequenceBase *pUVar1;
  float fVar2;
  float fVar3;
  
  if (this->StartPos <= param_1) {
    pUVar1 = (this->AnimReference).field0_0x0.DebugPtr;
    fVar2 = __real_3f800000;
    if (pUVar1 != (UAnimSequenceBase *)0x0) {
      fVar2 = pUVar1->RateScale;
    }
    fVar2 = fVar2 * this->AnimPlayRate;
    fVar3 = __real_3f800000;
    if (__real_322bcc77 < (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar3 = fVar2;
    }
    if (param_1 <=
        ((this->AnimEndTime - this->AnimStartTime) * (float)this->LoopingCount) /
        (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) + this->StartPos) {
      return true;
    }
  }
  return false;
}

// SetAnimReference @ 147419050

void __thiscall
FAnimSegment::SetAnimReference(FAnimSegment *this,UAnimSequenceBase *param_1,bool param_2)

{
  float fVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAnimSequenceBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->AnimReference).field0_0x0.DebugPtr = param_1;
  }
  else {
    (this->AnimReference).field0_0x0.DebugPtr = param_1;
    if (param_1 == (UAnimSequenceBase *)0x0) {
      return;
    }
  }
  if (param_2) {
    this->AnimStartTime = 0.0;
    fVar1 = (float)(**(code **)(param_1->_padding_ + 0x2c0))(param_1);
    this->AnimEndTime = fVar1;
    this->AnimPlayRate = 1.0;
    this->LoopingCount = 1;
    this->StartPos = 0.0;
  }
  return;
}

