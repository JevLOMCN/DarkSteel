// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> @ 149e33800

FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> * __thiscall
FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>::
FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>
          (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *this,
          UPCGPolygon2DData *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *pFVar4;
  longlong *plVar5;
  undefined1 local_18 [16];
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__FPCGAttributeAccessorKeysPolyLineDataEntries_VUPCGPolygon2DData____6B_;
  this->Ptr = param_1;
  if (param_1 == (UPCGPolygon2DData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPolyLineData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\Accessors\\PCGAttributeAccessorKeys.cpp"
                       ,0x1a3,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)(*pcVar1)();
      return pFVar4;
    }
  }
  *(undefined1 *)&this->_padding_ = 0;
  (**(code **)(*(longlong *)param_1 + 0x528))(param_1);
  plVar5 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x530))(param_1,local_18);
  lVar2 = plVar5[1];
  this->_padding_ = *plVar5;
  this->_padding_ = lVar2;
  return this;
}

// FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> @ 149e338a0

FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> * __thiscall
FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>::
FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>
          (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *this,
          UPCGPolygon2DData *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *pFVar6;
  longlong local_28;
  int local_20;
  longlong local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  plVar1 = &this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  *plVar1 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__FPCGAttributeAccessorKeysPolyLineDataEntries_VUPCGPolygon2DData____6B_;
  this->Ptr = param_1;
  if (param_1 == (UPCGPolygon2DData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPolyLineData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\Accessors\\PCGAttributeAccessorKeys.cpp"
                       ,0x191,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)(*pcVar4)();
      return pFVar6;
    }
  }
  *(undefined1 *)&this->_padding_ = 1;
  (**(code **)(*(longlong *)param_1 + 0x520))(param_1,&local_28);
  local_18 = local_28;
  iStack_10 = local_20;
  if (local_20 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)(*pcVar4)();
      return pFVar6;
    }
  }
  this->_padding_ = local_18;
  this->_padding_ = CONCAT44(uStack_c,iStack_10);
  if ((int)this->_padding_ == 0) {
    iVar3 = *piVar2;
    *(undefined4 *)&this->_padding_ = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,iVar3,(ForAnyElementType *)plVar1,1,piVar2);
    *(undefined8 *)*plVar1 = 0xffffffffffffffff;
    local_18 = *plVar1;
    iVar3 = (int)this->_padding_;
    if (iVar3 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *)(*pcVar4)();
        return pFVar6;
      }
    }
    this->_padding_ = local_18;
    this->_padding_ = CONCAT44(uStack_c,iVar3);
  }
  return this;
}

// FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> @ 149e33a10

FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> * __thiscall
FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>::
FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>
          (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *this,
          UPCGSplineData *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *pFVar4;
  longlong *plVar5;
  undefined1 local_18 [16];
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__FPCGAttributeAccessorKeysPolyLineDataEntries_VUPCGSplineData____6B_;
  this->Ptr = param_1;
  if (param_1 == (UPCGSplineData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPolyLineData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\Accessors\\PCGAttributeAccessorKeys.cpp"
                       ,0x1a3,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)(*pcVar1)();
      return pFVar4;
    }
  }
  *(undefined1 *)&this->_padding_ = 0;
  (**(code **)(*(longlong *)param_1 + 0x528))(param_1);
  plVar5 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x530))(param_1,local_18);
  lVar2 = plVar5[1];
  this->_padding_ = *plVar5;
  this->_padding_ = lVar2;
  return this;
}

// FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> @ 149e33ab0

FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> * __thiscall
FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>::
FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>
          (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *this,
          UPCGSplineData *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *pFVar6;
  longlong local_28;
  int local_20;
  longlong local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  plVar1 = &this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  *plVar1 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7__FPCGAttributeAccessorKeysPolyLineDataEntries_VUPCGSplineData____6B_;
  this->Ptr = param_1;
  if (param_1 == (UPCGSplineData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPolyLineData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\Accessors\\PCGAttributeAccessorKeys.cpp"
                       ,0x191,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)(*pcVar4)();
      return pFVar6;
    }
  }
  *(undefined1 *)&this->_padding_ = 1;
  (**(code **)(*(longlong *)param_1 + 0x520))(param_1,&local_28);
  local_18 = local_28;
  iStack_10 = local_20;
  if (local_20 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)(*pcVar4)();
      return pFVar6;
    }
  }
  this->_padding_ = local_18;
  this->_padding_ = CONCAT44(uStack_c,iStack_10);
  if ((int)this->_padding_ == 0) {
    iVar3 = *piVar2;
    *(undefined4 *)&this->_padding_ = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,iVar3,(ForAnyElementType *)plVar1,1,piVar2);
    *(undefined8 *)*plVar1 = 0xffffffffffffffff;
    local_18 = *plVar1;
    iVar3 = (int)this->_padding_;
    if (iVar3 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *)(*pcVar4)();
        return pFVar6;
      }
    }
    this->_padding_ = local_18;
    this->_padding_ = CONCAT44(uStack_c,iVar3);
  }
  return this;
}

// ~FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> @ 149e365b0

void __thiscall
FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>::
~FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>
          (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = (void *)this->_padding_;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> @ 149e365d0

void __thiscall
FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>::
~FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>
          (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = (void *)this->_padding_;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// GetNum @ 149e5c350

int __thiscall
FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData>::GetNum
          (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGPolygon2DData> *this)

{
  int iVar1;
  
  if (this->Ptr != (UPCGPolygon2DData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149e5c35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(longlong *)this->Ptr + 0x4a8))();
    return iVar1;
  }
  return 0;
}

// GetNum @ 149e5c370

int __thiscall
FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData>::GetNum
          (FPCGAttributeAccessorKeysPolyLineDataEntries<UPCGSplineData> *this)

{
  int iVar1;
  
  if (this->Ptr != (UPCGSplineData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149e5c37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(longlong *)this->Ptr + 0x4a8))();
    return iVar1;
  }
  return 0;
}

