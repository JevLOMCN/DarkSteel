// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// ScheduleImpl<UE::MovieScene::FEvaluateBaseControlRigs,UE::MovieScene::FInstanceRegistry_*> @ 14a3aa6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
::ScheduleImpl<UE::MovieScene::FEvaluateBaseControlRigs,UE::MovieScene::FInstanceRegistry_*>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,FInstanceRegistry **param_5)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar7;
  bool bVar8;
  int iVar9;
  FTaskID FVar10;
  TReferenceControllerBase<1> *pTVar11;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar12;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar13;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_258 [32];
  FComponentTypeID local_208;
  FComponentTypeID local_206;
  FComponentTypeID local_204;
  FComponentTypeID local_202;
  FComponentTypeID local_200;
  FComponentTypeID local_1fe;
  FComponentTypeID local_1fc;
  FComponentTypeID local_1fa;
  FComponentTypeID local_1f8;
  FComponentTypeID local_1f6;
  FTaskID local_1f4;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
  *local_1e8;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_1e0;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_1d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  initializer_list<UE::MovieScene::FComponentTypeID> local_188;
  code *local_178;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
  **local_170;
  undefined1 local_168 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_158;
  TBitArray<TFixedAllocator<12>_> local_148;
  TBitArray<TFixedAllocator<12>_> local_110;
  FComponentMask local_d8;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1d8 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_1e0 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  if ((*(short *)&this->field_0x10 == -1 ||
       (*(short *)&this->field_0xe == -1 ||
       (*(short *)this == -1 ||
       (*(short *)&this->field_0x8 == -1 || *(short *)&this->field_0x6 == -1)))) ||
     (bVar8 = TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
              ::HasAnyWork((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
                            *)this,(FEntityManager *)param_2), !bVar8)) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    goto LAB_14a3aadff;
  }
  pTVar11 = ::operator_new(0x58);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar13 = pTVar11 + 1;
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFEvaluateBaseControlRigs_MovieScene_UE__U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TOptionalReadAccess_UFMovieSceneSequenceID___23_U__TReadAccess_UFFrameTime___23_U__TReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TReadAccess_UFControlRigSourceData_MovieScene_UE___23_U__TWriteAccess_UFBaseControlRigEvalData_MovieScene_UE___23__MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    pTVar11[1]._padding_ =
         (longlong)
         &
         ___7__TScheduledEntityTask_UFEvaluateBaseControlRigs_MovieScene_UE__U__TReadAccess_UFRootInstanceHandle_MovieScene_UE___23_U__TOptionalReadAccess_UFMovieSceneSequenceID___23_U__TReadAccess_UFFrameTime___23_U__TReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TReadAccess_UFControlRigSourceData_MovieScene_UE___23_U__TWriteAccess_UFBaseControlRigEvalData_MovieScene_UE___23__MovieScene_UE__6B_
    ;
    uVar3 = *in_stack_00000038;
    pTVar11[1].SharedReferenceCount = (atomic<int>)(int)uVar3;
    pTVar11[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
    uVar5 = *(undefined4 *)&this->field_0x8;
    uVar6 = *(undefined4 *)&this->field_0xc;
    pTVar11[2]._padding_ = *(longlong *)this;
    pTVar11[2].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[2].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&this->field_0x18;
    uVar6 = *(undefined4 *)&this->field_0x1c;
    pTVar11[3]._padding_ = *(longlong *)&this->field_0x10;
    pTVar11[3].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[3].WeakReferenceCount = (atomic<int>)uVar6;
    uVar5 = *(undefined4 *)&this->field_0x28;
    uVar6 = *(undefined4 *)&this->field_0x2c;
    pTVar11[4]._padding_ = *(longlong *)&this->field_0x20;
    pTVar11[4].SharedReferenceCount = (atomic<int>)uVar5;
    pTVar11[4].WeakReferenceCount = (atomic<int>)uVar6;
    pTVar11[5]._padding_ = *(longlong *)&this->field_0x30;
    if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  uVar2 = *(ushort *)this;
  local_148.MaxBits._0_1_ = 0x80;
  local_148.MaxBits._1_1_ = '\x01';
  local_148.MaxBits._2_1_ = '\0';
  local_148.MaxBits._3_1_ = '\0';
  local_148.NumBits._0_1_ = '\0';
  local_148.NumBits._1_1_ = '\0';
  local_148.NumBits._2_1_ = '\0';
  local_148.NumBits._3_1_ = '\0';
  local_110.NumBits = 0;
  local_110.MaxBits = 0x180;
  TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,uVar2 + 1);
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x2;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_148.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar9);
    }
    if ((local_148.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&this->field_0x6;
  iVar9 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar9);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x8;
  iVar9 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar9);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0xa;
  if (uVar2 != 0xffff) {
    iVar9 = ((uint)uVar2 - local_148.NumBits) + 1;
    if (0 < iVar9) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar9);
    }
    if ((local_148.NumBits <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return (FTaskID)iVar9;
    }
    pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  }
  uVar2 = *(ushort *)&this->field_0xe;
  iVar9 = ((uint)uVar2 - local_148.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar9);
  }
  if ((local_148.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = *(ushort *)&this->field_0x10;
  iVar9 = ((uint)uVar2 - local_110.NumBits) + 1;
  if (0 < iVar9) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_110,false,iVar9);
  }
  if ((local_110.NumBits <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  pTVar1 = local_110.AllocatorInstance.InlineData + (uVar2 >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
  local_d8.Bits.NumBits = 0;
  local_d8.Bits.MaxBits = 0x180;
  local_70 = 0;
  local_6c = 0x180;
  local_68 = (void *)0x0;
  local_60 = 0;
  if ((*(short *)this == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  local_208.Value = *(ushort *)this;
  local_1c8._First = &local_208;
  local_1c8._Last = &local_206;
  FComponentMask::SetAll(&local_d8,&local_1c8);
  if ((*(short *)&this->field_0x6 == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  local_204.Value = *(ushort *)&this->field_0x6;
  local_1b8._First = &local_204;
  local_1b8._Last = &local_202;
  FComponentMask::SetAll(&local_d8,&local_1b8);
  if ((*(short *)&this->field_0x8 == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  local_200.Value = *(ushort *)&this->field_0x8;
  local_1a8._First = &local_200;
  local_1a8._Last = &local_1fe;
  FComponentMask::SetAll(&local_d8,&local_1a8);
  if ((*(short *)&this->field_0xe == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  local_1fc.Value = *(ushort *)&this->field_0xe;
  local_198._First = &local_1fc;
  local_198._Last = &local_1fa;
  FComponentMask::SetAll(&local_d8,&local_198);
  if ((*(short *)&this->field_0x10 == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("In->ComponentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                         ,0x1a8,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return (FTaskID)iVar9;
  }
  local_1f8.Value = *(ushort *)&this->field_0x10;
  local_188._First = &local_1f8;
  local_188._Last = &local_1f6;
  FComponentMask::SetAll(&local_d8,&local_188);
  local_170 = &local_1e8;
  local_178 = Core::Private::Function::
              TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>::ScheduleImpl<UE::MovieScene::FEvaluateBaseControlRigs,UE::MovieScene::FInstanceRegistry_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
              ::Call;
  local_1e8 = this;
  pTVar12 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
            ::
            TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                      (&local_158,local_1e0);
  pTVar7 = local_1d8;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_168._0_8_ = pTVar13;
  local_168._8_8_ = pTVar11;
  IEntitySystemScheduler::CreateForkedAllocationTask
            ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_1f4,local_1d8,
             (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
              *)local_168,
             (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
              *)pTVar12,(FEntityComponentFilter *)&local_178,&local_d8,(FComponentMask *)&local_148)
  ;
  if (local_1f4.Index == -1) {
    if (((ulonglong)pTVar7[1].Object & 4) != 0) {
      FVar10 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
      local_1f4.Index = *(int *)CONCAT44(extraout_var,FVar10.Index);
      if (local_1f4.Index != -1) goto LAB_14a3aadac;
    }
  }
  else {
LAB_14a3aadac:
    IEntitySystemScheduler::AddChildFront
              ((IEntitySystemScheduler *)param_3,local_1f4,(FTaskID)0xffffffff);
    IEntitySystemScheduler::AddChildBack
              ((IEntitySystemScheduler *)param_3,local_1f4,(FTaskID)0xffffffff);
  }
  *(int *)&param_1->_padding_ = local_1f4.Index;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
LAB_14a3aadff:
  return (FTaskID)(int)param_1;
}

// ScheduleImpl<UE::MovieScene::FEvaluateControlRigSpaceChannels> @ 14a3aae30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
::ScheduleImpl<UE::MovieScene::FEvaluateControlRigSpaceChannels>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar9;
  bool bVar10;
  int iVar11;
  FTaskID FVar12;
  FComponentMask *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar15;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar16;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *in_stack_00000030;
  undefined1 auStackY_228 [32];
  FComponentTypeID local_1d8;
  FComponentTypeID local_1d6;
  FComponentTypeID local_1d4;
  FComponentTypeID local_1d2;
  FComponentTypeID local_1d0;
  FComponentTypeID local_1ce;
  FTaskID local_1cc;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
  *local_1c0;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_1b8;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_1b0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  initializer_list<UE::MovieScene::FComponentTypeID> local_188;
  code *local_178;
  TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
  **local_170;
  undefined1 local_168 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_158;
  TBitArray<TFixedAllocator<12>_> local_148;
  TBitArray<TFixedAllocator<12>_> local_110;
  FComponentMask local_d8;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar2 = *(ushort *)this;
  local_1b0 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_1b8 = in_stack_00000030;
  if (uVar2 != 0xffff && (*(short *)&this->field_0x4 != -1 && *(short *)&this->field_0x2 != -1)) {
    pFVar13 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((uVar2 == 0xffff) || ((pFVar13->Bits).NumBits <= (int)(uint)uVar2)) ||
       ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1
        ) == 0)) {
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
    }
    uVar2 = *(ushort *)&this->field_0x2;
    pFVar13 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((uVar2 == 0xffff) || ((pFVar13->Bits).NumBits <= (int)(uint)uVar2)) ||
       ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1
        ) == 0)) {
      bVar6 = 0;
    }
    else {
      bVar6 = 1;
    }
    uVar2 = *(ushort *)&this->field_0x4;
    pFVar13 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((uVar2 == 0xffff) || ((pFVar13->Bits).NumBits <= (int)(uint)uVar2)) ||
       ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1
        ) == 0)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    if ((bool)(bVar6 & bVar5 & bVar4)) {
      pTVar14 = ::operator_new(0x48);
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        pTVar16 = (TReferenceControllerBase<1> *)&DAT_00000010;
      }
      else {
        pTVar14->SharedReferenceCount = (atomic<int>)0x1;
        pTVar16 = pTVar14 + 1;
        pTVar14->WeakReferenceCount = (atomic<int>)0x1;
        pTVar14->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFEvaluateControlRigSpaceChannels_MovieScene_UE__U__TReadAccess_UFFrameTime___23_U__TReadAccess_PEBUFMovieSceneControlRigSpaceChannel___23_U__TWriteAccess_UFMovieSceneControlRigSpaceBaseKey___23__MovieScene_UE___00_SharedPointerInternals__6B_
        ;
        pTVar14[1]._padding_ =
             (longlong)
             &
             ___7__TScheduledEntityTask_UFEvaluateControlRigSpaceChannels_MovieScene_UE__U__TReadAccess_UFFrameTime___23_U__TReadAccess_PEBUFMovieSceneControlRigSpaceChannel___23_U__TWriteAccess_UFMovieSceneControlRigSpaceBaseKey___23__MovieScene_UE__6B_
        ;
        *(undefined1 *)&pTVar14[1].SharedReferenceCount = 0;
        uVar7 = *(undefined4 *)&this->field_0x8;
        uVar8 = *(undefined4 *)&this->field_0xc;
        pTVar14[2]._padding_ = *(longlong *)this;
        pTVar14[2].SharedReferenceCount = (atomic<int>)uVar7;
        pTVar14[2].WeakReferenceCount = (atomic<int>)uVar8;
        uVar7 = *(undefined4 *)&this->field_0x18;
        uVar8 = *(undefined4 *)&this->field_0x1c;
        pTVar14[3]._padding_ = *(longlong *)&this->field_0x10;
        pTVar14[3].SharedReferenceCount = (atomic<int>)uVar7;
        pTVar14[3].WeakReferenceCount = (atomic<int>)uVar8;
        pTVar14[4]._padding_ = *(longlong *)&this->field_0x20;
        if ((pTVar16 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          iVar11 = (*pcVar3)();
          return (FTaskID)iVar11;
        }
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      uVar2 = *(ushort *)this;
      local_148.NumBits._0_1_ = '\0';
      local_148.NumBits._1_1_ = '\0';
      local_148.NumBits._2_1_ = '\0';
      local_148.NumBits._3_1_ = '\0';
      local_148.MaxBits._0_1_ = 0x80;
      local_148.MaxBits._1_1_ = '\x01';
      local_148.MaxBits._2_1_ = '\0';
      local_148.MaxBits._3_1_ = '\0';
      local_110.NumBits = 0;
      local_110.MaxBits = 0x180;
      TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,uVar2 + 1);
      if ((local_148.NumBits <= (int)(uint)uVar2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        iVar11 = (*pcVar3)();
        return (FTaskID)iVar11;
      }
      pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      uVar2 = *(ushort *)&this->field_0x2;
      iVar11 = ((uint)uVar2 - local_148.NumBits) + 1;
      if (0 < iVar11) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar11);
      }
      if ((local_148.NumBits <= (int)(uint)uVar2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        iVar11 = (*pcVar3)();
        return (FTaskID)iVar11;
      }
      pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      uVar2 = *(ushort *)&this->field_0x4;
      iVar11 = ((uint)uVar2 - local_110.NumBits) + 1;
      if (0 < iVar11) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_110,false,iVar11);
      }
      if ((local_110.NumBits <= (int)(uint)uVar2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        iVar11 = (*pcVar3)();
        return (FTaskID)iVar11;
      }
      pTVar1 = local_110.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      local_d8.Bits.NumBits = 0;
      local_d8.Bits.MaxBits = 0x180;
      local_70 = 0;
      local_6c = 0x180;
      local_68 = (void *)0x0;
      local_60 = 0;
      if ((*(short *)this == -1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("In->ComponentType",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                              ,0x1a8,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        iVar11 = (*pcVar3)();
        return (FTaskID)iVar11;
      }
      local_1d8.Value = *(ushort *)this;
      local_1a8._First = &local_1d8;
      local_1a8._Last = &local_1d6;
      FComponentMask::SetAll(&local_d8,&local_1a8);
      if ((*(short *)&this->field_0x2 == -1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("In->ComponentType",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                              ,0x1a8,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        iVar11 = (*pcVar3)();
        return (FTaskID)iVar11;
      }
      local_1d4.Value = *(ushort *)&this->field_0x2;
      local_198._First = &local_1d4;
      local_198._Last = &local_1d2;
      FComponentMask::SetAll(&local_d8,&local_198);
      if ((*(short *)&this->field_0x4 == -1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("In->ComponentType",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                              ,0x1a8,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        iVar11 = (*pcVar3)();
        return (FTaskID)iVar11;
      }
      local_1d0.Value = *(ushort *)&this->field_0x4;
      local_188._First = &local_1d0;
      local_188._Last = &local_1ce;
      FComponentMask::SetAll(&local_d8,&local_188);
      local_170 = &local_1c0;
      local_178 = Core::Private::Function::
                  TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>::ScheduleImpl<UE::MovieScene::FEvaluateControlRigSpaceChannels>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
      local_1c0 = this;
      pTVar15 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                ::
                TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                          (&local_158,local_1b8);
      pTVar9 = local_1b0;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_168._0_8_ = pTVar16;
      local_168._8_8_ = pTVar14;
      IEntitySystemScheduler::CreateForkedAllocationTask
                ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_1cc,local_1b0,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_168,
                 (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
                  *)pTVar15,(FEntityComponentFilter *)&local_178,&local_d8,
                 (FComponentMask *)&local_148);
      if (local_1cc.Index == -1) {
        if (((ulonglong)pTVar9[1].Object & 4) != 0) {
          FVar12 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
          local_1cc.Index = *(int *)CONCAT44(extraout_var,FVar12.Index);
          if (local_1cc.Index != -1) goto LAB_14a3ab304;
        }
      }
      else {
LAB_14a3ab304:
        IEntitySystemScheduler::AddChildFront
                  ((IEntitySystemScheduler *)param_3,local_1cc,(FTaskID)0xffffffff);
        IEntitySystemScheduler::AddChildBack
                  ((IEntitySystemScheduler *)param_3,local_1cc,(FTaskID)0xffffffff);
      }
      *(int *)&param_1->_padding_ = local_1cc.Index;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      goto LAB_14a3ab351;
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
LAB_14a3ab351:
  return (FTaskID)(int)param_1;
}

// ScheduleImpl<UE::MovieScene::FResetDoNotKey> @ 14a3abd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TReadAccess<UE::MovieScene::FBaseControlRigEvalData>_>
::ScheduleImpl<UE::MovieScene::FResetDoNotKey>
          (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TReadAccess<UE::MovieScene::FBaseControlRigEvalData>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *pTVar8;
  bool bVar9;
  int iVar10;
  FTaskID FVar11;
  FComponentMask *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar14;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar15;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *in_stack_00000030;
  undefined1 auStackY_218 [32];
  FComponentTypeID local_1c8;
  FComponentTypeID local_1c6;
  FComponentTypeID local_1c4;
  FComponentTypeID local_1c2;
  FTaskID local_1c0;
  TStatId local_1b8;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_1b0;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_1a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  initializer_list<UE::MovieScene::FComponentTypeID> local_188;
  code *local_178;
  TStatId *local_170;
  undefined1 local_168 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_158;
  TBitArray<TFixedAllocator<12>_> local_148;
  FComponentMask local_108;
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_98;
  undefined8 local_90;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_218;
  uVar2 = *(ushort *)this;
  local_1a8 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_1b0 = in_stack_00000030;
  if (*(short *)&this->field_0x2 != -1 && uVar2 != 0xffff) {
    pFVar12 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((uVar2 == 0xffff) || ((pFVar12->Bits).NumBits <= (int)(uint)uVar2)) ||
       ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1
        ) == 0)) {
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
    }
    uVar2 = *(ushort *)&this->field_0x2;
    pFVar12 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((uVar2 == 0xffff) || ((pFVar12->Bits).NumBits <= (int)(uint)uVar2)) ||
       ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1
        ) == 0)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    if ((bool)(bVar5 & bVar4)) {
      pTVar13 = ::operator_new(0x48);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
      }
      else {
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar15 = pTVar13 + 1;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFResetDoNotKey_MovieScene_UE__U__TReadAccess_UFControlRigSourceData_MovieScene_UE___23_U__TReadAccess_UFBaseControlRigEvalData_MovieScene_UE___23__MovieScene_UE___00_SharedPointerInternals__6B_
        ;
        pTVar13[1]._padding_ =
             (longlong)
             &
             ___7__TScheduledEntityTask_UFResetDoNotKey_MovieScene_UE__U__TReadAccess_UFControlRigSourceData_MovieScene_UE___23_U__TReadAccess_UFBaseControlRigEvalData_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        *(undefined1 *)&pTVar13[1].SharedReferenceCount = 0;
        uVar6 = *(undefined4 *)&this->field_0x8;
        uVar7 = *(undefined4 *)&this->field_0xc;
        pTVar13[2]._padding_ = *(longlong *)this;
        pTVar13[2].SharedReferenceCount = (atomic<int>)uVar6;
        pTVar13[2].WeakReferenceCount = (atomic<int>)uVar7;
        uVar6 = *(undefined4 *)&this->field_0x18;
        uVar7 = *(undefined4 *)&this->field_0x1c;
        pTVar13[3]._padding_ = *(longlong *)&this->field_0x10;
        pTVar13[3].SharedReferenceCount = (atomic<int>)uVar6;
        pTVar13[3].WeakReferenceCount = (atomic<int>)uVar7;
        pTVar13[4]._padding_ = *(longlong *)&this->field_0x20;
        if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            iVar10 = (*pcVar3)();
            return (FTaskID)iVar10;
          }
        }
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      uVar2 = *(ushort *)this;
      local_148.MaxBits._0_1_ = 0x80;
      local_148.MaxBits._1_1_ = '\x01';
      local_148.MaxBits._2_1_ = '\0';
      local_148.MaxBits._3_1_ = '\0';
      local_148.NumBits._0_1_ = '\0';
      local_148.NumBits._1_1_ = '\0';
      local_148.NumBits._2_1_ = '\0';
      local_148.NumBits._3_1_ = '\0';
      local_58 = 0;
      local_54 = 0x180;
      TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,uVar2 + 1);
      if (local_148.NumBits <= (int)(uint)uVar2) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return (FTaskID)iVar10;
        }
      }
      pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      uVar2 = *(ushort *)&this->field_0x2;
      iVar10 = ((uint)uVar2 - local_148.NumBits) + 1;
      if (0 < iVar10) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_148,false,iVar10);
      }
      if (local_148.NumBits <= (int)(uint)uVar2) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return (FTaskID)iVar10;
        }
      }
      pTVar1 = local_148.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      local_108.Bits.NumBits = 0;
      local_108.Bits.MaxBits = 0x180;
      local_a0 = 0;
      local_9c = 0x180;
      local_98 = (void *)0x0;
      local_90 = 0;
      if (*(short *)this == -1) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("In->ComponentType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                           ,0x1a8,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return (FTaskID)iVar10;
        }
      }
      local_1c8.Value = *(ushort *)this;
      local_198._First = &local_1c8;
      local_198._Last = &local_1c6;
      FComponentMask::SetAll(&local_108,&local_198);
      if (*(short *)&this->field_0x2 == -1) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("In->ComponentType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                           ,0x1a8,L"");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return (FTaskID)iVar10;
        }
      }
      local_1c4.Value = *(ushort *)&this->field_0x2;
      local_188._First = &local_1c4;
      local_188._Last = &local_1c2;
      FComponentMask::SetAll(&local_108,&local_188);
      local_170 = &local_1b8;
      local_178 = Core::Private::Function::
                  TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TReadAccess<UE::MovieScene::FBaseControlRigEvalData>_>::ScheduleImpl<UE::MovieScene::FResetDoNotKey>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
      local_1b8.StatIdPtr = (TStatIdData *)this;
      pTVar14 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                ::
                TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                          (&local_158,local_1b0);
      pTVar8 = local_1a8;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_168._0_8_ = pTVar15;
      local_168._8_8_ = pTVar13;
      IEntitySystemScheduler::CreateForkedAllocationTask
                ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_1c0,local_1a8,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_168,
                 (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
                  *)pTVar14,(FEntityComponentFilter *)&local_178,&local_108,
                 (FComponentMask *)&local_148);
      if (local_1c0.Index == -1) {
        if (((ulonglong)pTVar8[1].Object & 4) != 0) {
          FVar11 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
          local_1c0.Index = *(int *)CONCAT44(extraout_var,FVar11.Index);
          if (local_1c0.Index != -1) goto LAB_14a3ac0f6;
        }
      }
      else {
LAB_14a3ac0f6:
        IEntitySystemScheduler::AddChildFront
                  ((IEntitySystemScheduler *)param_3,local_1c0,(FTaskID)0xffffffff);
        IEntitySystemScheduler::AddChildBack
                  ((IEntitySystemScheduler *)param_3,local_1c0,(FTaskID)0xffffffff);
      }
      *(int *)&param_1->_padding_ = local_1c0.Index;
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      goto LAB_14a3ac141;
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
LAB_14a3ac141:
  return (FTaskID)(int)param_1;
}

// operator() @ 14a3bf880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::MovieScene::
TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TReadAccess<UE::MovieScene::FBaseControlRigEvalData>_>
::ScheduleImpl<UE::MovieScene::FResetDoNotKey>'::__l2::<lambda_1>::operator()
          (void *this,FEntityAllocationProxy *param_1,
          TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FComponentAccess *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uint uVar7;
  uint uVar8;
  FEntityAllocationProxy local_28;
  
  local_28.Manager = param_1->Manager;
  local_28.AllocationIndex = param_1->AllocationIndex;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  this_00 = *(FComponentAccess **)this;
  piVar1 = &param_2->ArrayNum;
  uVar8 = *piVar1;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,2,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  DefaultConstructItems<TRelativePtr<void,unsigned_int>,int>
            ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,2);
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_28);
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00,pFVar6,(TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  uVar8 = uVar8 + 1;
  uVar7 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar6 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(&local_28);
  UE::MovieScene::FComponentAccess::PreLockComponentData
            (this_00 + 1,pFVar6,
             (TRelativePtr<void,unsigned_int> *)(pFVar2 + (longlong)(int)uVar8 * 4));
  return;
}

