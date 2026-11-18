// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 1

// FParallelForData @ 14db3b420

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FParallelForData * __thiscall
`ParallelForImpl::
ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelForData::FParallelForData
          (void *this,wchar_t *param_1,int param_2,int param_3,int param_4,int param_5,
          TArrayView<std::nullptr_t,int> *param_6,TFunctionRef<void___cdecl(int)> *param_7,
          FEventRef *param_8,ETaskPriority param_9)

{
  int iVar1;
  uint uVar2;
  FLowLevelMemTracker *pFVar3;
  FTagData *pFVar4;
  FTagData *pFVar5;
  
  pFVar5 = (FTagData *)0x0;
  *(wchar_t **)((longlong)this + 0x38) = param_1;
  *(undefined ***)this =
       &
       ___7FParallelForData__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1__N1_Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1_N2_Z_W4EParallelForFlags__AEBV__TArrayView___TH___Z_6B_
  ;
  *(TArrayView<std::nullptr_t,int> **)((longlong)this + 0x58) = param_6;
  *(TFunctionRef<void___cdecl(int)> **)((longlong)this + 0x60) = param_7;
  *(FEventRef **)((longlong)this + 0x68) = param_8;
  *(ETaskPriority *)((longlong)this + 0x70) = param_9;
  *(int *)((longlong)this + 0x4c) = param_2;
  *(int *)((longlong)this + 0x50) = param_3;
  *(int *)((longlong)this + 0x54) = param_4;
  *(undefined4 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  *(undefined8 *)((longlong)this + 0x78) = 0;
  *(int *)((longlong)this + 0x84) = 0;
  *(int *)((longlong)this + 0x80) = 0;
  *(int *)((longlong)this + 0x44) = param_4;
  iVar1 = UE::Core::Private::
          ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>_::__l2::FTracedTask>_>
                    (0x48,8,param_5,
                     (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,bool,bool)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,bool,bool)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FTracedTask>
                      *)((longlong)this + 0x78),(int *)((longlong)this + 0x80),
                     (int *)((longlong)this + 0x84));
  DefaultConstructItems<_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>_::__l2::FTracedTask,int>
            ((void *)(*(longlong *)((longlong)this + 0x78) + (longlong)iVar1 * 0x48),param_5);
  pFVar4 = pFVar5;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar3 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar3 = FLowLevelMemTracker::Construct();
    }
    pFVar4 = FLowLevelMemTracker::GetActiveTagData(pFVar3,Default,None);
  }
  *(FTagData **)((longlong)this + 0x10) = pFVar4;
  pFVar4 = pFVar5;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar3 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar3 = FLowLevelMemTracker::Construct();
    }
    pFVar4 = FLowLevelMemTracker::GetActiveTagData(pFVar3,Default,Assets);
  }
  *(FTagData **)((longlong)this + 0x18) = pFVar4;
  pFVar4 = pFVar5;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar3 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar3 = FLowLevelMemTracker::Construct();
    }
    pFVar4 = FLowLevelMemTracker::GetActiveTagData(pFVar3,Default,AssetClasses);
  }
  *(FTagData **)((longlong)this + 0x20) = pFVar4;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar3 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar3 = FLowLevelMemTracker::Construct();
    }
    pFVar5 = FLowLevelMemTracker::GetActiveTagData(pFVar3,Default,UObjectClasses);
  }
  *(FTagData **)((longlong)this + 0x28) = pFVar5;
  iVar1 = MemoryTrace_GetActiveTag();
  *(int *)((longlong)this + 0x30) = iVar1;
  uVar2 = FMetadataTrace::SaveStack();
  *(uint *)((longlong)this + 0x34) = uVar2;
  return this;
}

