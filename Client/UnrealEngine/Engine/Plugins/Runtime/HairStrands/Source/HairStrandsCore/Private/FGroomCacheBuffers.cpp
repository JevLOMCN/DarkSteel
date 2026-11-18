// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 10

// FGroomCacheBuffers @ 14dfedab0

FGroomCacheBuffers * __thiscall
FGroomCacheBuffers::FGroomCacheBuffers(FGroomCacheBuffers *this,UGroomCache *param_1)

{
  this->_padding_ = (longlong)&___7IGroomCacheBuffers__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  this->GroomCache = param_1;
  this->_padding_ = (longlong)&___7FGroomCacheBuffers__6B_;
  (this->CurrentFrame).GroupsData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentFrame).GroupsData.ArrayNum = 0;
  (this->CurrentFrame).GroupsData.ArrayMax = 0;
  (this->NextFrame).GroupsData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NextFrame).GroupsData.ArrayNum = 0;
  (this->NextFrame).GroupsData.ArrayMax = 0;
  this->InterpolationFactor = 0.0;
  this->CurrentFrameIndex = -1;
  this->NextFrameIndex = -1;
  return this;
}

// ~FGroomCacheBuffers @ 14dff16f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FGroomCacheBuffers::~FGroomCacheBuffers(FGroomCacheBuffers *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FGroomCacheBuffers__6B_;
  DestructItems<FGroomCacheGroupData,int>
            ((FGroomCacheGroupData *)(this->NextFrame).GroupsData.AllocatorInstance.Data,
             (this->NextFrame).GroupsData.ArrayNum);
  pFVar1 = (this->NextFrame).GroupsData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGroomCacheGroupData,int>
            ((FGroomCacheGroupData *)(this->CurrentFrame).GroupsData.AllocatorInstance.Data,
             (this->CurrentFrame).GroupsData.ArrayNum);
  pFVar1 = (this->CurrentFrame).GroupsData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IGroomCacheBuffers__6B_;
                    /* WARNING: Could not recover jumptable at 0x00014dff174a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  return;
}

// GetBoundingBox @ 14e0135e0

TBox<double> * __thiscall
FGroomCacheBuffers::GetBoundingBox(FGroomCacheBuffers *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  double *pdVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 8))();
  lVar6 = *plVar4;
  lVar3 = plVar4[1];
  pdVar7 = (double *)(lVar6 + 0x78);
  lVar5 = (longlong)(int)lVar3 * 0xa0 + lVar6;
LAB_14e013641:
  do {
    if ((int)plVar4[1] != (int)lVar3) {
      `TCheckedPointerIterator<FGroomCacheGroupData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar6 == lVar5) break;
    if (__return_storage_ptr__->IsValid == '\0') {
      if (*(char *)(pdVar7 + 4) != '\0') {
        dVar1 = pdVar7[-1];
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = pdVar7[-2];
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
        dVar1 = pdVar7[1];
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = *pdVar7;
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1;
        dVar1 = pdVar7[3];
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = pdVar7[2];
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1;
        *(double *)&__return_storage_ptr__->IsValid = pdVar7[4];
      }
    }
    else if (*(char *)(pdVar7 + 4) != '\0') {
      dVar1 = pdVar7[-2];
      uVar8 = SUB84(dVar1,0);
      uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
      lVar6 = lVar6 + 0xa0;
      dVar2 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
      if (dVar2 <= dVar1) {
        uVar8 = SUB84(dVar2,0);
        uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar10,uVar8);
      dVar1 = pdVar7[-1];
      uVar8 = SUB84(dVar1,0);
      uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
      if (dVar2 <= dVar1) {
        uVar8 = SUB84(dVar2,0);
        uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
      uVar9 = SUB84(dVar1,0);
      uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar10,uVar8);
      dVar2 = *pdVar7;
      if (dVar2 <= dVar1) {
        uVar9 = SUB84(dVar2,0);
        uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar11,uVar9);
      dVar1 = pdVar7[1];
      uVar8 = SUB84(dVar1,0);
      uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
      if (dVar1 <= dVar2) {
        uVar8 = SUB84(dVar2,0);
        uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar10,uVar8);
      dVar1 = pdVar7[2];
      uVar8 = SUB84(dVar1,0);
      uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
      if (dVar1 <= dVar2) {
        uVar8 = SUB84(dVar2,0);
        uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar10,uVar8);
      dVar1 = pdVar7[3];
      uVar8 = SUB84(dVar1,0);
      uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
      pdVar7 = pdVar7 + 0x14;
      dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
      if (dVar1 <= dVar2) {
        uVar8 = SUB84(dVar2,0);
        uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar10,uVar8);
      goto LAB_14e013641;
    }
    lVar6 = lVar6 + 0xa0;
    pdVar7 = pdVar7 + 0x14;
  } while( true );
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x10))(this);
  lVar6 = *plVar4;
  lVar3 = plVar4[1];
  pdVar7 = (double *)(lVar6 + 0x78);
  lVar5 = (longlong)(int)lVar3 * 0xa0 + lVar6;
LAB_14e013730:
  do {
    if ((int)plVar4[1] != (int)lVar3) {
      `TCheckedPointerIterator<FGroomCacheGroupData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar6 == lVar5) {
      return __return_storage_ptr__;
    }
    if (__return_storage_ptr__->IsValid == '\0') {
      if (*(char *)(pdVar7 + 4) != '\0') {
        dVar1 = pdVar7[-1];
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = pdVar7[-2];
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
        dVar1 = pdVar7[1];
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = *pdVar7;
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1;
        dVar1 = pdVar7[3];
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = pdVar7[2];
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1;
        *(double *)&__return_storage_ptr__->IsValid = pdVar7[4];
      }
    }
    else if (*(char *)(pdVar7 + 4) != '\0') {
      dVar1 = pdVar7[-2];
      uVar8 = SUB84(dVar1,0);
      uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
      lVar6 = lVar6 + 0xa0;
      dVar2 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
      if (dVar2 <= dVar1) {
        uVar8 = SUB84(dVar2,0);
        uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar10,uVar8);
      dVar1 = pdVar7[-1];
      uVar8 = SUB84(dVar1,0);
      uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
      if (dVar2 <= dVar1) {
        uVar8 = SUB84(dVar2,0);
        uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
      uVar9 = SUB84(dVar1,0);
      uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar10,uVar8);
      dVar2 = *pdVar7;
      if (dVar2 <= dVar1) {
        uVar9 = SUB84(dVar2,0);
        uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar11,uVar9);
      dVar1 = pdVar7[1];
      uVar8 = SUB84(dVar1,0);
      uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
      if (dVar1 <= dVar2) {
        uVar8 = SUB84(dVar2,0);
        uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar10,uVar8);
      dVar1 = pdVar7[2];
      uVar8 = SUB84(dVar1,0);
      uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
      if (dVar1 <= dVar2) {
        uVar8 = SUB84(dVar2,0);
        uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar10,uVar8);
      dVar1 = pdVar7[3];
      uVar8 = SUB84(dVar1,0);
      uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
      pdVar7 = pdVar7 + 0x14;
      dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
      if (dVar1 <= dVar2) {
        uVar8 = SUB84(dVar2,0);
        uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar10,uVar8);
      goto LAB_14e013730;
    }
    lVar6 = lVar6 + 0xa0;
    pdVar7 = pdVar7 + 0x14;
  } while( true );
}

// GetCurrentFrameBuffer @ 14e013840

FGroomCacheAnimationData * __thiscall
FGroomCacheBuffers::GetCurrentFrameBuffer(FGroomCacheBuffers *this)

{
  return &this->CurrentFrame;
}

// GetCurrentFrameIndex @ 14e013870

int __thiscall FGroomCacheBuffers::GetCurrentFrameIndex(FGroomCacheBuffers *this)

{
  return this->CurrentFrameIndex;
}

// GetInterpolationFactor @ 14e018060

float __thiscall FGroomCacheBuffers::GetInterpolationFactor(FGroomCacheBuffers *this)

{
  return this->InterpolationFactor;
}

// GetNextFrameBuffer @ 14e018890

FGroomCacheAnimationData * __thiscall
FGroomCacheBuffers::GetNextFrameBuffer(FGroomCacheBuffers *this)

{
  return &this->NextFrame;
}

// GetNextFrameIndex @ 14e0188c0

int __thiscall FGroomCacheBuffers::GetNextFrameIndex(FGroomCacheBuffers *this)

{
  return this->NextFrameIndex;
}

// Reset @ 14e026120

void __thiscall FGroomCacheBuffers::Reset(FGroomCacheBuffers *this)

{
  return;
}

// UpdateBuffersAtTime @ 14e02b720

void __thiscall
FGroomCacheBuffers::UpdateBuffersAtTime(FGroomCacheBuffers *this,float param_1,bool param_2)

{
  FGroomCacheAnimationData *pFVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  UGroomCache *this_00;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined3 uVar7;
  int iVar8;
  int iVar9;
  EGroomCacheAttributes EVar10;
  undefined3 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FGroomCacheBuffers::UpdateBuffersAtTime(float,bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1251,"FGroomCacheBuffers::UpdateBuffersAtTime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomComponent.cpp"
               ,0x4e3);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FGroomCacheBuffers::UpdateBuffersAtTime(float,bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1251);
  }
  this_00 = this->GroomCache;
  fVar17 = 0.0;
  uVar3 = (this_00->GroomCacheInfo).AnimationInfo.NumFrames;
  fVar18 = (this_00->GroomCacheInfo).AnimationInfo.Duration - __real_38d1b717;
  if ((uVar3 == 0) || (fVar18 == 0.0)) {
    iVar13 = 0;
    iVar14 = 0;
  }
  else {
    iVar13 = UGroomCache::GetFrameIndexAtTime(this_00,param_1,param_2);
    fVar2 = (this_00->GroomCacheInfo).AnimationInfo.SecondsPerFrame;
    iVar14 = uVar3 - 1;
    if (iVar13 + 1 < iVar14) {
      iVar14 = iVar13 + 1;
    }
    if (__real_322bcc77 < (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      if (param_2) {
        auVar16 = roundps(in_XMM2,ZEXT416((uint)(param_1 / fVar18)),1);
        fVar17 = param_1 - auVar16._0_4_ * fVar18;
      }
      else {
        fVar17 = (this_00->GroomCacheInfo).AnimationInfo.EndTime -
                 (this_00->GroomCacheInfo).AnimationInfo.StartTime;
        if (param_1 <= fVar17) {
          fVar17 = param_1;
        }
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
      }
      fVar17 = (fVar17 - (float)iVar13 * fVar2) / fVar2;
    }
  }
  this->InterpolationFactor = fVar17;
  if (iVar13 != this->CurrentFrameIndex) {
    iVar4 = this->NextFrameIndex;
    pFVar1 = &this->CurrentFrame;
    if (iVar13 == iVar4) {
      iVar13 = (this->NextFrame).GroupsData.ArrayNum;
      iVar6 = (this->NextFrame).GroupsData.ArrayMax;
      pFVar5 = (pFVar1->GroupsData).AllocatorInstance.Data;
      iVar8 = (this->CurrentFrame).GroupsData.ArrayNum;
      iVar9 = (this->CurrentFrame).GroupsData.ArrayMax;
      EVar10 = (this->CurrentFrame).Attributes;
      uVar11 = *(undefined3 *)&(this->CurrentFrame).field_0x11;
      iVar12 = (this->CurrentFrame).Version;
      (pFVar1->GroupsData).AllocatorInstance.Data =
           (this->NextFrame).GroupsData.AllocatorInstance.Data;
      (this->CurrentFrame).GroupsData.ArrayNum = iVar13;
      (this->CurrentFrame).GroupsData.ArrayMax = iVar6;
      uVar7 = *(undefined3 *)&(this->NextFrame).field_0x11;
      iVar13 = (this->NextFrame).Version;
      (this->CurrentFrame).Attributes = (this->NextFrame).Attributes;
      *(undefined3 *)&(this->CurrentFrame).field_0x11 = uVar7;
      (this->CurrentFrame).Version = iVar13;
      (this->NextFrame).GroupsData.AllocatorInstance.Data = pFVar5;
      (this->NextFrame).GroupsData.ArrayNum = iVar8;
      (this->NextFrame).GroupsData.ArrayMax = iVar9;
      (this->NextFrame).Attributes = EVar10;
      *(undefined3 *)&(this->NextFrame).field_0x11 = uVar11;
      (this->NextFrame).Version = iVar12;
      this->CurrentFrameIndex = iVar4;
    }
    else {
      UGroomCache::GetGroomDataAtFrameIndex(this_00,iVar13,pFVar1);
      this->CurrentFrameIndex = iVar13;
    }
  }
  if (iVar14 != this->NextFrameIndex) {
    UGroomCache::GetGroomDataAtFrameIndex(this->GroomCache,iVar14,&this->NextFrame);
    this->NextFrameIndex = iVar14;
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

