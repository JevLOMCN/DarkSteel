// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// FMotionVectorSimulation @ 1483e1df0

FMotionVectorSimulation * __thiscall
FMotionVectorSimulation::FMotionVectorSimulation(FMotionVectorSimulation *this)

{
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)this,NewObject);
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&_vftable__for__FUObjectArray__FUObjectDeleteListener__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->MapCriticalSection,4000);
  *(undefined8 *)&this->SimulatedTransforms = 0;
  *(undefined8 *)&(this->SimulatedTransforms).field_0x8 = 0;
  *(undefined8 *)&(this->SimulatedTransforms).field_0x20 = 0;
  *(undefined4 *)&(this->SimulatedTransforms).field_0x28 = 0;
  *(undefined4 *)&(this->SimulatedTransforms).field_0x2c = 0x80;
  *(undefined4 *)&(this->SimulatedTransforms).field_0x34 = 0;
  *(undefined4 *)&(this->SimulatedTransforms).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SimulatedTransforms).field_0x40 = 0;
  *(undefined4 *)&(this->SimulatedTransforms).field_0x48 = 0;
  return this;
}

// ~FMotionVectorSimulation @ 1483e8a10

void __thiscall FMotionVectorSimulation::~FMotionVectorSimulation(FMotionVectorSimulation *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&_vftable__for__FUObjectArray__FUObjectDeleteListener__;
  *(undefined4 *)&(this->SimulatedTransforms).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SimulatedTransforms).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SimulatedTransforms);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MapCriticalSection);
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)this);
  return;
}

// ClearPreviousTransform @ 1483f4bc0

void __thiscall
FMotionVectorSimulation::ClearPreviousTransform(FMotionVectorSimulation *this,UObject *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->MapCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMapBase<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>_>
    ::Remove((TMapBase<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>_>
              *)&this->SimulatedTransforms,(UObjectBase *)param_1);
                    /* WARNING: Could not recover jumptable at 0x0001483f4c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Get @ 148404ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMotionVectorSimulation * __cdecl FMotionVectorSimulation::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FTickableGameObject::FTickableGameObject((FTickableGameObject *)&::Singleton,NewObject);
      ::Singleton._padding_ = (longlong)&_vftable__for__FTickableGameObject__;
      ::Singleton._padding_ = (longlong)&_vftable__for__FUObjectArray__FUObjectDeleteListener__;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&::Singleton.MapCriticalSection,4000);
      ::Singleton.SimulatedTransforms._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      ::Singleton.SimulatedTransforms._48_8_ = _UNK_150631d98;
      ::Singleton.SimulatedTransforms._0_8_ = 0;
      ::Singleton.SimulatedTransforms._8_8_ = 0;
      ::Singleton.SimulatedTransforms._32_8_ = 0;
      ::Singleton.SimulatedTransforms._64_8_ = 0;
      ::Singleton.SimulatedTransforms._72_4_ = 0;
      atexit(`FMotionVectorSimulation::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// GetAllocatedSize @ 1484051d0

ulong64 __thiscall FMotionVectorSimulation::GetAllocatedSize(FMotionVectorSimulation *this)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)&(this->SimulatedTransforms).field_0x40;
  if (uVar1 < 2) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)(int)uVar1 << 2;
  }
  return (longlong)*(int *)&(this->SimulatedTransforms).field_0x4 * 0x90 +
         (ulonglong)((*(int *)&(this->SimulatedTransforms).field_0x24 + 0x1fU >> 5) << 2) + lVar2;
}

// GetPreviousTransform @ 148409b40

TOptional<UE::Math::TTransform<double>_> * __thiscall
FMotionVectorSimulation::GetPreviousTransform
          (FMotionVectorSimulation *this,
          TOptional<UE::Math::TTransform<double>_> *__return_storage_ptr__,UObject *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  FSimulatedTransform *pFVar13;
  
  if (GMotionVectorSimulation != 0) {
    lpCriticalSection = &this->MapCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar13 = TMapBase<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>_>
              ::Find((TMapBase<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>_>
                      *)&this->SimulatedTransforms,(UObjectBase *)param_1);
    if ((pFVar13 != (FSimulatedTransform *)0x0) && (pFVar13->FrameNumber == GFrameCounter)) {
      dVar9 = (pFVar13->Transform).Rotation.XY.m128d_f64[1];
      dVar10 = (pFVar13->Transform).Rotation.ZW.m128d_f64[0];
      dVar11 = (pFVar13->Transform).Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64[0] =
           (pFVar13->Transform).Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64[1] = dVar9;
      __return_storage_ptr__->bIsSet = true;
      dVar9 = (pFVar13->Transform).Translation.XY.m128d_f64[0];
      dVar12 = (pFVar13->Transform).Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64[0] = dVar10;
      (__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64[1] = dVar11;
      dVar10 = (pFVar13->Transform).Translation.ZW.m128d_f64[0];
      dVar11 = (pFVar13->Transform).Translation.ZW.m128d_f64[1];
      (__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64[0] = dVar9;
      (__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64[1] = dVar12;
      uVar1 = *(undefined4 *)(pFVar13->Transform).Scale3D.XY.m128d_f64;
      uVar2 = *(undefined4 *)((longlong)(pFVar13->Transform).Scale3D.XY.m128d_f64 + 4);
      uVar3 = *(undefined4 *)((pFVar13->Transform).Scale3D.XY.m128d_f64 + 1);
      uVar4 = *(undefined4 *)((longlong)(pFVar13->Transform).Scale3D.XY.m128d_f64 + 0xc);
      (__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64[0] = dVar10;
      (__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64[1] = dVar11;
      uVar5 = *(undefined4 *)(pFVar13->Transform).Scale3D.ZW.m128d_f64;
      uVar6 = *(undefined4 *)((longlong)(pFVar13->Transform).Scale3D.ZW.m128d_f64 + 4);
      uVar7 = *(undefined4 *)((pFVar13->Transform).Scale3D.ZW.m128d_f64 + 1);
      uVar8 = *(undefined4 *)((longlong)(pFVar13->Transform).Scale3D.ZW.m128d_f64 + 0xc);
      *(undefined4 *)(__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64 = uVar1;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64 + 4) =
           uVar2;
      *(undefined4 *)((__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64 + 1) = uVar3;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64 + 0xc) =
           uVar4;
      *(undefined4 *)(__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64 = uVar5;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64 + 4) =
           uVar6;
      *(undefined4 *)((__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64 + 1) = uVar7;
      *(undefined4 *)((longlong)(__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64 + 0xc) =
           uVar8;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return __return_storage_ptr__;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetPreviousTransform @ 148409c10

bool __thiscall
FMotionVectorSimulation::GetPreviousTransform
          (FMotionVectorSimulation *this,UObject *param_1,TTransform<double> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  FSimulatedTransform *pFVar5;
  
  if (GMotionVectorSimulation != 0) {
    lpCriticalSection = &this->MapCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar5 = TMapBase<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>_>
             ::Find((TMapBase<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>_>
                     *)&this->SimulatedTransforms,(UObjectBase *)param_1);
    if ((pFVar5 != (FSimulatedTransform *)0x0) && (pFVar5->FrameNumber == GFrameCounter)) {
      dVar4 = (pFVar5->Transform).Rotation.XY.m128d_f64[1];
      (param_2->Rotation).XY.m128d_f64[0] = (pFVar5->Transform).Rotation.XY.m128d_f64[0];
      (param_2->Rotation).XY.m128d_f64[1] = dVar4;
      dVar4 = (pFVar5->Transform).Rotation.ZW.m128d_f64[1];
      (param_2->Rotation).ZW.m128d_f64[0] = (pFVar5->Transform).Rotation.ZW.m128d_f64[0];
      (param_2->Rotation).ZW.m128d_f64[1] = dVar4;
      dVar4 = (pFVar5->Transform).Translation.XY.m128d_f64[1];
      (param_2->Translation).XY.m128d_f64[0] = (pFVar5->Transform).Translation.XY.m128d_f64[0];
      (param_2->Translation).XY.m128d_f64[1] = dVar4;
      dVar4 = (pFVar5->Transform).Translation.ZW.m128d_f64[1];
      (param_2->Translation).ZW.m128d_f64[0] = (pFVar5->Transform).Translation.ZW.m128d_f64[0];
      (param_2->Translation).ZW.m128d_f64[1] = dVar4;
      uVar1 = *(undefined4 *)((longlong)(pFVar5->Transform).Scale3D.XY.m128d_f64 + 4);
      uVar2 = *(undefined4 *)((pFVar5->Transform).Scale3D.XY.m128d_f64 + 1);
      uVar3 = *(undefined4 *)((longlong)(pFVar5->Transform).Scale3D.XY.m128d_f64 + 0xc);
      *(undefined4 *)(param_2->Scale3D).XY.m128d_f64 =
           *(undefined4 *)(pFVar5->Transform).Scale3D.XY.m128d_f64;
      *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4) = uVar1;
      *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1) = uVar2;
      *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc) = uVar3;
      uVar1 = *(undefined4 *)((longlong)(pFVar5->Transform).Scale3D.ZW.m128d_f64 + 4);
      uVar2 = *(undefined4 *)((pFVar5->Transform).Scale3D.ZW.m128d_f64 + 1);
      uVar3 = *(undefined4 *)((longlong)(pFVar5->Transform).Scale3D.ZW.m128d_f64 + 0xc);
      *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64 =
           *(undefined4 *)(pFVar5->Transform).Scale3D.ZW.m128d_f64;
      *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4) = uVar1;
      *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1) = uVar2;
      *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc) = uVar3;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return false;
}

// GetStatId @ 14840ab00

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FMotionVectorSimulation::GetStatId(FMotionVectorSimulation *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_private:_virtual_struct_TStatId___cdecl_FMotionVectorSimulation::GetStatId(void)const_::_2_::FStat_MotionVectorSimulation>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_MotionVectorSimulation ==
          (FThreadSafeStaticStat<_private:_virtual_struct_TStatId___cdecl_FMotionVectorSimulation::GetStatId(void)const_::_2_::FStat_MotionVectorSimulation>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"MotionVectorSimulation");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_MotionVectorSimulation,*pFVar1,
                   L"MotionVectorSimulation","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_MotionVectorSimulation;
  if (StatPtr_MotionVectorSimulation ==
      (FThreadSafeStaticStat<_private:_virtual_struct_TStatId___cdecl_FMotionVectorSimulation::GetStatId(void)const_::_2_::FStat_MotionVectorSimulation>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"MotionVectorSimulation");
    FVar2 = (FThreadSafeStaticStat<_private:_virtual_struct_TStatId___cdecl_FMotionVectorSimulation::GetStatId(void)const_::_2_::FStat_MotionVectorSimulation>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_MotionVectorSimulation,*pFVar1,
                         L"MotionVectorSimulation","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// IsEnabled @ 14840f450

bool __cdecl FMotionVectorSimulation::IsEnabled(void)

{
  return GMotionVectorSimulation != 0;
}

// IsTickable @ 14840fe80

bool __thiscall FMotionVectorSimulation::IsTickable(FMotionVectorSimulation *this)

{
  return 0 < *(int *)&(this->SimulatedTransforms).field_0x8 -
             *(int *)&(this->SimulatedTransforms).field_0x34;
}

// IsTickableInEditor @ 14840fea0

bool __thiscall FMotionVectorSimulation::IsTickableInEditor(FMotionVectorSimulation *this)

{
  return true;
}

// NotifyUObjectDeleted @ 1484130a0

void __thiscall
FMotionVectorSimulation::NotifyUObjectDeleted
          (FMotionVectorSimulation *this,UObjectBase *param_1,int param_2)

{
  TMapBase<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>_>
  ::Remove((TMapBase<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>_>
            *)((this->MapCriticalSection).CriticalSection.Opaque3 + 2),param_1);
  return;
}

// OnUObjectArrayShutdown @ 148417530

void __thiscall FMotionVectorSimulation::OnUObjectArrayShutdown(FMotionVectorSimulation *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->SimulatedTransforms).field_0x40;
  if (!bVar3) {
    TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
                      *)((this->MapCriticalSection).CriticalSection.Opaque3 + 2));
  }
  puVar1 = &(this->SimulatedTransforms).field_0x4;
  *(undefined4 *)&this->SimulatedTransforms = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,0,
               (ForAnyElementType *)((this->MapCriticalSection).CriticalSection.Opaque3 + 2),0,
               (int *)puVar1);
  }
  *(undefined4 *)&(this->SimulatedTransforms).field_0x28 = 0xffffffff;
  *(undefined4 *)&(this->SimulatedTransforms).field_0x2c = 0;
  iVar2 = *(int *)&(this->SimulatedTransforms).field_0x24;
  *(undefined4 *)&(this->SimulatedTransforms).field_0x20 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SimulatedTransforms).field_0x24 = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SimulatedTransforms).field_0x8,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->SimulatedTransforms).field_0x40 = 1;
    TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
              *)((this->MapCriticalSection).CriticalSection.Opaque3 + 2));
  }
  if (this == (FMotionVectorSimulation *)&DAT_00000008) {
    this = (FMotionVectorSimulation *)0x0;
  }
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// SetPreviousTransform @ 1484259f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMotionVectorSimulation::SetPreviousTransform
          (FMotionVectorSimulation *this,UObject *param_1,TTransform<double> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 auStack_c8 [32];
  TPairInitializer<UObjectBase_const_*_&&,FMotionVectorSimulation::FSimulatedTransform_const_&>
  local_a8;
  FSimulatedTransform **local_98;
  double *local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulong64 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  lpCriticalSection = &this->MapCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_88 = (param_2->Rotation).XY.m128d_f64[0];
    dStack_80 = (param_2->Rotation).XY.m128d_f64[1];
    local_78 = (param_2->Rotation).ZW.m128d_f64[0];
    dStack_70 = (param_2->Rotation).ZW.m128d_f64[1];
    local_68 = (param_2->Translation).XY.m128d_f64[0];
    dStack_60 = (param_2->Translation).XY.m128d_f64[1];
    local_58 = (param_2->Translation).ZW.m128d_f64[0];
    dStack_50 = (param_2->Translation).ZW.m128d_f64[1];
    local_28 = GFrameCounter;
    local_98 = &local_a8.Value;
    local_48 = (param_2->Scale3D).XY.m128d_f64[0];
    dStack_40 = (param_2->Scale3D).XY.m128d_f64[1];
    local_38 = (param_2->Scale3D).ZW.m128d_f64[0];
    dStack_30 = (param_2->Scale3D).ZW.m128d_f64[1];
    local_90 = &local_88;
    local_a8.Value = (FSimulatedTransform *)param_1;
    TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UObjectBase_const_*_&&,FMotionVectorSimulation::FSimulatedTransform_const_&>_>
              ((TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
                *)&this->SimulatedTransforms,&local_a8,(bool *)&local_98);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Tick @ 148428230

void __thiscall FMotionVectorSimulation::Tick(FMotionVectorSimulation *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  TMap<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>_>
  *pTVar4;
  uint uVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  lpCriticalSection = &this->MapCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar4 = &this->SimulatedTransforms;
  TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
              *)pTVar4);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  uVar5 = local_78._28_4_;
  local_18 = (TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
              *)pTVar4;
  if ((int)uVar5 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      if (*(ulonglong *)(*local_48 + 0x70 + (longlong)(int)uVar3 * 0x90) < GFrameCounter) {
        TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar5);
        local_10 = '\x01';
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
      uVar5 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar5 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMotionVectorSimulation::FSimulatedTransform,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014842838f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

