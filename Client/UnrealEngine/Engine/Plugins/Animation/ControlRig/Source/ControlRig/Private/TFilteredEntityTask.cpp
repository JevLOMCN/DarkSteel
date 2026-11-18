// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// ScheduleImpl<UE::MovieScene::FGatherControlRigParameterValues,UE::MovieScene::FAccumulatedControlRigValues_*> @ 14a3ab380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FTaskID __thiscall
UE::MovieScene::
TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::
ScheduleImpl<UE::MovieScene::FGatherControlRigParameterValues,UE::MovieScene::FAccumulatedControlRigValues_*>
          (TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
           *this,FEntityManager *param_1,IEntitySystemScheduler *param_2,FTaskParams *param_3,
          TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
          *param_4,FAccumulatedControlRigValues **param_5)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  undefined8 uVar3;
  code *pcVar4;
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
  FControlRigComponentTypes *pFVar15;
  FMovieSceneTracksComponentTypes *pFVar16;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *pTVar17;
  undefined4 extraout_var;
  TReferenceControllerBase<1> *pTVar18;
  undefined8 *in_stack_00000038;
  undefined1 auStackY_168 [32];
  FTaskID local_118;
  TStatId local_110;
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  *local_108;
  TSharedPtr<UE::MovieScene::ITaskContext,1> *local_100;
  code *local_f8;
  TStatId *local_f0;
  undefined1 local_e8 [16];
  TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
  local_d8;
  TBitArray<TFixedAllocator<12>_> local_c8;
  TBitArray<TFixedAllocator<12>_> local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar2 = *(ushort *)&this->Components;
  local_100 = (TSharedPtr<UE::MovieScene::ITaskContext,1> *)param_4;
  local_108 = (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
               *)param_5;
  if (*(short *)&(this->Components).field_0x2 != -1 && uVar2 != 0xffff) {
    pFVar13 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((uVar2 == 0xffff) || ((pFVar13->Bits).NumBits <= (int)(uint)uVar2)) ||
       ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1
        ) == 0)) {
      bVar6 = 0;
    }
    else {
      bVar6 = 1;
    }
    uVar2 = *(ushort *)&(this->Components).field_0x2;
    pFVar13 = FEntityManager::GetAccumulatedMask((FEntityManager *)param_2);
    if (((uVar2 == 0xffff) || ((pFVar13->Bits).NumBits <= (int)(uint)uVar2)) ||
       ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1
        ) == 0)) {
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
    }
    if ((bool)(bVar6 & bVar5)) {
      pTVar14 = ::operator_new(0x88);
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
        pTVar18 = (TReferenceControllerBase<1> *)&DAT_00000010;
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar14->SharedReferenceCount = (atomic<int>)0x1;
        pTVar14->WeakReferenceCount = (atomic<int>)0x1;
        pTVar14->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_U__TScheduledEntityTask_UFGatherControlRigParameterValues_MovieScene_UE__U__TReadAccess_UFAccumulatedControlEntryIndex_MovieScene_UE___23_U__TReadAccess_VFName___23_U__TOptionalReadAccess_UFMovieSceneControlRigSpaceBaseKey___23_U__TOptionalReadAccess__N_23_U__TOptionalReadAccess_E_23_U__TOptionalReadAccess__J_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23__MovieScene_UE___00_SharedPointerInternals__6B_
        ;
        pTVar14[1]._padding_ =
             (longlong)
             &
             ___7__TScheduledEntityTask_UFGatherControlRigParameterValues_MovieScene_UE__U__TReadAccess_UFAccumulatedControlEntryIndex_MovieScene_UE___23_U__TReadAccess_VFName___23_U__TOptionalReadAccess_UFMovieSceneControlRigSpaceBaseKey___23_U__TOptionalReadAccess__N_23_U__TOptionalReadAccess_E_23_U__TOptionalReadAccess__J_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23_U__TOptionalReadAccess_N_23__MovieScene_UE__6B_
        ;
        uVar3 = *in_stack_00000038;
        pTVar14[1].SharedReferenceCount = (atomic<int>)(int)uVar3;
        pTVar14[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
        pFVar15 = FControlRigComponentTypes::Get();
        pTVar14[2]._padding_ = (longlong)pFVar15;
        pFVar16 = FMovieSceneTracksComponentTypes::Get();
        *(FMovieSceneTracksComponentTypes **)&pTVar14[2].SharedReferenceCount = pFVar16;
        pTVar18 = pTVar14 + 1;
        uVar7 = *(undefined4 *)&(this->Components).field_0x8;
        uVar8 = *(undefined4 *)&(this->Components).field_0xc;
        pTVar14[3]._padding_ = *(longlong *)&this->Components;
        pTVar14[3].SharedReferenceCount = (atomic<int>)uVar7;
        pTVar14[3].WeakReferenceCount = (atomic<int>)uVar8;
        uVar7 = *(undefined4 *)&(this->Components).field_0x18;
        uVar8 = *(undefined4 *)&(this->Components).field_0x1c;
        pTVar14[4]._padding_ = *(longlong *)&(this->Components).field_0x10;
        pTVar14[4].SharedReferenceCount = (atomic<int>)uVar7;
        pTVar14[4].WeakReferenceCount = (atomic<int>)uVar8;
        uVar7 = *(undefined4 *)&(this->Components).field_0x28;
        uVar8 = *(undefined4 *)&(this->Components).field_0x2c;
        pTVar14[5]._padding_ = *(longlong *)&(this->Components).field_0x20;
        pTVar14[5].SharedReferenceCount = (atomic<int>)uVar7;
        pTVar14[5].WeakReferenceCount = (atomic<int>)uVar8;
        uVar7 = *(undefined4 *)&(this->Components).field_0x38;
        uVar8 = *(undefined4 *)&(this->Components).field_0x3c;
        pTVar14[6]._padding_ = *(longlong *)&(this->Components).field_0x30;
        pTVar14[6].SharedReferenceCount = (atomic<int>)uVar7;
        pTVar14[6].WeakReferenceCount = (atomic<int>)uVar8;
        uVar7 = *(undefined4 *)&(this->Components).field_0x48;
        uVar8 = *(undefined4 *)&(this->Components).field_0x4c;
        pTVar14[7]._padding_ = *(longlong *)&(this->Components).field_0x40;
        pTVar14[7].SharedReferenceCount = (atomic<int>)uVar7;
        pTVar14[7].WeakReferenceCount = (atomic<int>)uVar8;
        pTVar14[8]._padding_ = *(longlong *)&(this->Components).field_0x50;
        if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return (FTaskID)iVar11;
          }
        }
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      local_c8.NumBits._0_1_ = '\0';
      local_c8.NumBits._1_1_ = '\0';
      local_c8.NumBits._2_1_ = '\0';
      local_c8.NumBits._3_1_ = '\0';
      local_c8.MaxBits._0_1_ = '\0';
      local_c8.MaxBits._1_1_ = '\0';
      local_c8.MaxBits._2_1_ = '\0';
      local_c8.MaxBits._3_1_ = '\0';
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (&local_c8,&(this->DynamicReadMask).Bits);
      local_90.NumBits = 0;
      local_90.MaxBits = 0;
      TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                (&local_90,&(this->DynamicWriteMask).Bits);
      uVar2 = *(ushort *)&this->Components;
      iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
      if (0 < iVar11) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
      }
      if (local_c8.NumBits <= (int)(uint)uVar2) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L"");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          iVar11 = (*pcVar4)();
          return (FTaskID)iVar11;
        }
      }
      pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      uVar2 = *(ushort *)&(this->Components).field_0x2;
      iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
      if (0 < iVar11) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
      }
      if (local_c8.NumBits <= (int)(uint)uVar2) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L"");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          iVar11 = (*pcVar4)();
          return (FTaskID)iVar11;
        }
      }
      pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
      *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      uVar2 = *(ushort *)&(this->Components).field_0x4;
      if (uVar2 != 0xffff) {
        iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
        }
        if (local_c8.NumBits <= (int)(uint)uVar2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return (FTaskID)iVar11;
          }
        }
        pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = *(ushort *)&(this->Components).field_0x8;
      if (uVar2 != 0xffff) {
        iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
        }
        if (local_c8.NumBits <= (int)(uint)uVar2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return (FTaskID)iVar11;
          }
        }
        pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = *(ushort *)&(this->Components).field_0xc;
      if (uVar2 != 0xffff) {
        iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
        }
        if (local_c8.NumBits <= (int)(uint)uVar2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return (FTaskID)iVar11;
          }
        }
        pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = *(ushort *)&(this->Components).field_0x10;
      if (uVar2 != 0xffff) {
        iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
        }
        if (local_c8.NumBits <= (int)(uint)uVar2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return (FTaskID)iVar11;
          }
        }
        pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = *(ushort *)&(this->Components).field_0x14;
      if (uVar2 != 0xffff) {
        iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
        }
        if (local_c8.NumBits <= (int)(uint)uVar2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return (FTaskID)iVar11;
          }
        }
        pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = *(ushort *)&(this->Components).field_0x18;
      if (uVar2 != 0xffff) {
        iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
        }
        if (local_c8.NumBits <= (int)(uint)uVar2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return (FTaskID)iVar11;
          }
        }
        pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = *(ushort *)&(this->Components).field_0x1c;
      if (uVar2 != 0xffff) {
        iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
        }
        if (local_c8.NumBits <= (int)(uint)uVar2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return (FTaskID)iVar11;
          }
        }
        pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = *(ushort *)&(this->Components).field_0x20;
      if (uVar2 != 0xffff) {
        iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
        }
        if (local_c8.NumBits <= (int)(uint)uVar2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return (FTaskID)iVar11;
          }
        }
        pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = *(ushort *)&(this->Components).field_0x24;
      if (uVar2 != 0xffff) {
        iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
        }
        if (local_c8.NumBits <= (int)(uint)uVar2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return (FTaskID)iVar11;
          }
        }
        pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = *(ushort *)&(this->Components).field_0x28;
      if (uVar2 != 0xffff) {
        iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
        }
        if (local_c8.NumBits <= (int)(uint)uVar2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return (FTaskID)iVar11;
          }
        }
        pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = *(ushort *)&(this->Components).field_0x2c;
      if (uVar2 != 0xffff) {
        iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
        }
        if (local_c8.NumBits <= (int)(uint)uVar2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return (FTaskID)iVar11;
          }
        }
        pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = *(ushort *)&(this->Components).field_0x30;
      if (uVar2 != 0xffff) {
        iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
        }
        if (local_c8.NumBits <= (int)(uint)uVar2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return (FTaskID)iVar11;
          }
        }
        pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = *(ushort *)&(this->Components).field_0x34;
      if (uVar2 != 0xffff) {
        iVar11 = ((uint)uVar2 - local_c8.NumBits) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_c8,false,iVar11);
        }
        if (local_c8.NumBits <= (int)(uint)uVar2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            iVar11 = (*pcVar4)();
            return (FTaskID)iVar11;
          }
        }
        pTVar1 = local_c8.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
      }
      local_f0 = &local_110;
      local_f8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::ScheduleImpl<UE::MovieScene::FGatherControlRigParameterValues,UE::MovieScene::FAccumulatedControlRigValues_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
                 ::Call;
      local_110.StatIdPtr = (TStatIdData *)this;
      pTVar17 = TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                ::
                TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                          (&local_d8,local_108);
      pTVar9 = local_100;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8._0_8_ = pTVar18;
      local_e8._8_8_ = pTVar14;
      IEntitySystemScheduler::CreateForkedAllocationTask
                ((IEntitySystemScheduler *)param_3,(FTaskParams *)&local_118,local_100,
                 (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                  *)local_e8,
                 (TFunctionRef<void___cdecl(UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&)>
                  *)pTVar17,(FEntityComponentFilter *)&local_f8,&(this->Filter).AllMask,
                 (FComponentMask *)&local_c8);
      if (local_118.Index == -1) {
        if (((ulonglong)pTVar9[1].Object & 4) != 0) {
          FVar12 = IEntitySystemScheduler::AddNullTask((IEntitySystemScheduler *)param_3);
          local_118.Index = *(int *)CONCAT44(extraout_var,FVar12.Index);
          if (local_118.Index != -1) goto LAB_14a3abcc1;
        }
      }
      else {
LAB_14a3abcc1:
        IEntitySystemScheduler::AddChildFront
                  ((IEntitySystemScheduler *)param_3,local_118,(FTaskID)0xffffffff);
        IEntitySystemScheduler::AddChildBack
                  ((IEntitySystemScheduler *)param_3,local_118,(FTaskID)0xffffffff);
      }
      *(int *)&param_1->_padding_ = local_118.Index;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      goto LAB_14a3abcfb;
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
LAB_14a3abcfb:
  return (FTaskID)(int)param_1;
}

