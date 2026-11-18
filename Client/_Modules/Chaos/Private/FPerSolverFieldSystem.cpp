// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 13

// FPerSolverFieldSystem @ 144069010

FPerSolverFieldSystem * __thiscall
FPerSolverFieldSystem::FPerSolverFieldSystem(FPerSolverFieldSystem *this)

{
  (this->ExecutionDatas).SamplePositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).SamplePositions.ArrayNum = 0;
  (this->ExecutionDatas).SamplePositions.ArrayMax = 0;
  (this->ExecutionDatas).SampleIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).SampleIndices.ArrayNum = 0;
  (this->ExecutionDatas).SampleIndices.ArrayMax = 0;
  (this->ExecutionDatas).ParticleHandles[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).ParticleHandles[0].ArrayNum = 0;
  (this->ExecutionDatas).ParticleHandles[0].ArrayMax = 0;
  (this->ExecutionDatas).ParticleHandles[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).ParticleHandles[1].ArrayNum = 0;
  (this->ExecutionDatas).ParticleHandles[1].ArrayMax = 0;
  (this->ExecutionDatas).FieldOutputs[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).FieldOutputs[0].ArrayNum = 0;
  (this->ExecutionDatas).FieldOutputs[0].ArrayMax = 0;
  (this->ExecutionDatas).FieldOutputs[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).FieldOutputs[1].ArrayNum = 0;
  (this->ExecutionDatas).FieldOutputs[1].ArrayMax = 0;
  (this->ExecutionDatas).FieldOutputs[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).FieldOutputs[2].ArrayNum = 0;
  (this->ExecutionDatas).FieldOutputs[2].ArrayMax = 0;
  (this->ExecutionDatas).FieldOutputs[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).FieldOutputs[3].ArrayNum = 0;
  (this->ExecutionDatas).FieldOutputs[3].ArrayMax = 0;
  (this->ExecutionDatas).VectorResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).VectorResults[0].ArrayNum = 0;
  (this->ExecutionDatas).VectorResults[0].ArrayMax = 0;
  (this->ExecutionDatas).VectorResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).VectorResults[1].ArrayNum = 0;
  (this->ExecutionDatas).VectorResults[1].ArrayMax = 0;
  (this->ExecutionDatas).ScalarResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).ScalarResults[0].ArrayNum = 0;
  (this->ExecutionDatas).ScalarResults[0].ArrayMax = 0;
  (this->ExecutionDatas).ScalarResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).ScalarResults[1].ArrayNum = 0;
  (this->ExecutionDatas).ScalarResults[1].ArrayMax = 0;
  (this->ExecutionDatas).IntegerResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).IntegerResults[0].ArrayNum = 0;
  (this->ExecutionDatas).IntegerResults[0].ArrayMax = 0;
  (this->ExecutionDatas).IntegerResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).IntegerResults[1].ArrayNum = 0;
  (this->ExecutionDatas).IntegerResults[1].ArrayMax = 0;
  (this->ExecutionDatas).IndexResults[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).IndexResults[0].ArrayNum = 0;
  (this->ExecutionDatas).IndexResults[0].ArrayMax = 0;
  (this->ExecutionDatas).IndexResults[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionDatas).IndexResults[1].ArrayNum = 0;
  (this->ExecutionDatas).IndexResults[1].ArrayMax = 0;
  (this->TransientCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientCommands).ArrayNum = 0;
  (this->TransientCommands).ArrayMax = 0;
  (this->PersistentCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PersistentCommands).ArrayNum = 0;
  (this->PersistentCommands).ArrayMax = 0;
  return this;
}

// AddPersistentCommand @ 1440d2f60

void __thiscall
FPerSolverFieldSystem::AddPersistentCommand
          (FPerSolverFieldSystem *this,FFieldSystemCommand *param_1)

{
  int *piVar1;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar2;
  FFieldSystemCommand *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = &this->PersistentCommands;
  pFVar3 = (FFieldSystemCommand *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->PersistentCommands).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->PersistentCommands).ArrayNum;
  piVar1 = &(this->PersistentCommands).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8c8,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PersistentCommands).ArrayNum = iVar6 + 1;
  FFieldSystemCommand::FFieldSystemCommand
            ((FFieldSystemCommand *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 200),
             param_1);
  return;
}

// AddTransientCommand @ 1440d3260

void __thiscall
FPerSolverFieldSystem::AddTransientCommand(FPerSolverFieldSystem *this,FFieldSystemCommand *param_1)

{
  int *piVar1;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar2;
  FFieldSystemCommand *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar2 = &this->TransientCommands;
  pFVar3 = (FFieldSystemCommand *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->TransientCommands).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->TransientCommands).ArrayNum;
  piVar1 = &(this->TransientCommands).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8c8,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TransientCommands).ArrayNum = iVar6 + 1;
  FFieldSystemCommand::FFieldSystemCommand
            ((FFieldSystemCommand *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 200),
             param_1);
  return;
}

// ComputeFieldLinearImpulse @ 1440d8370

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPerSolverFieldSystem::ComputeFieldLinearImpulse(FPerSolverFieldSystem *this,double param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined2 local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_res8[0] = 1;
      EmptyTargets.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,2,0,&EmptyTargets.AllocatorInstance,2,&EmptyTargets.ArrayMax);
      memcpy(EmptyTargets.AllocatorInstance.Data,local_res8,2);
      atexit(`FPerSolverFieldSystem::ComputeFieldLinearImpulse'::__l2::
             _dynamic_atexit_destructor_for__EmptyTargets__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar2 = EmptyTargets.ArrayNum;
  pFVar1 = EmptyTargets.AllocatorInstance.Data + EmptyTargets.ArrayNum;
  FVar3.Data = EmptyTargets.AllocatorInstance.Data;
  while( true ) {
    if (EmptyTargets.ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_EFieldCommandOutputType_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar3.Data == pFVar1) break;
    if ((byte)*FVar3.Data < 4) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                ((this->ExecutionDatas).FieldOutputs + (byte)*FVar3.Data,0,No);
    }
    FVar3.Data = FVar3.Data + 1;
  }
  ComputeFieldLinearImpulseInternal(&this->ExecutionDatas,param_1,&this->TransientCommands,true);
  ComputeFieldLinearImpulseInternal(&this->ExecutionDatas,param_1,&this->PersistentCommands,false);
  return;
}

// ComputeFieldRigidImpulse @ 1440d9550

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPerSolverFieldSystem::ComputeFieldRigidImpulse(FPerSolverFieldSystem *this,double param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined4 local_res8 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_res8[0] = 0x2030001;
      EmptyTargets.ArrayNum = 4;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,4,0,&EmptyTargets.AllocatorInstance,4,&EmptyTargets.ArrayMax);
      memcpy(EmptyTargets.AllocatorInstance.Data,local_res8,4);
      atexit(`FPerSolverFieldSystem::ComputeFieldRigidImpulse'::__l2::
             _dynamic_atexit_destructor_for__EmptyTargets__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar2 = EmptyTargets.ArrayNum;
  pFVar1 = EmptyTargets.AllocatorInstance.Data + EmptyTargets.ArrayNum;
  FVar3.Data = EmptyTargets.AllocatorInstance.Data;
  while( true ) {
    if (EmptyTargets.ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_EFieldCommandOutputType_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar3.Data == pFVar1) break;
    if ((byte)*FVar3.Data < 4) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                ((this->ExecutionDatas).FieldOutputs + (byte)*FVar3.Data,0,No);
    }
    FVar3.Data = FVar3.Data + 1;
  }
  ComputeFieldRigidImpulseInternal(&this->ExecutionDatas,param_1,&this->TransientCommands,true);
  ComputeFieldRigidImpulseInternal(&this->ExecutionDatas,param_1,&this->PersistentCommands,false);
  return;
}

// FieldForcesUpdateCallback @ 1440dbfa0

void __thiscall
FPerSolverFieldSystem::FieldForcesUpdateCallback
          (FPerSolverFieldSystem *this,FPBDRigidsSolver *param_1)

{
  if ((param_1 != (FPBDRigidsSolver *)0x0) && ((char)param_1->_padding_ == '\0')) {
    FieldForcesUpdateInternal(this,param_1,&this->TransientCommands,true);
    FieldForcesUpdateInternal(this,param_1,&this->PersistentCommands,false);
  }
  return;
}

// FieldForcesUpdateInternal @ 1440dc000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPerSolverFieldSystem::FieldForcesUpdateInternal
          (FPerSolverFieldSystem *this,FPBDRigidsSolver *param_1,
          TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_Object> FVar16;
  FNameEntryId FVar17;
  FName FVar18;
  longlong lVar19;
  FPerSolverFieldSystem *pFVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  FFieldSystemCommand *pFVar23;
  ulonglong uVar24;
  undefined1 auStackY_1e8 [32];
  uint local_184;
  ForAnyElementType local_180;
  int local_178;
  int local_174;
  uint local_170;
  uint uStack_16c;
  FColor_u_0 local_168;
  EFieldPositionType local_164;
  EFieldObjectType local_160;
  EFieldFilterType local_15c;
  EFieldResolutionType local_158 [2];
  FPBDRigidsSolver *local_150;
  FName local_148;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *local_140;
  FName local_138;
  FName local_130;
  FPerSolverFieldSystem *local_120;
  FName local_118 [2];
  undefined1 local_108 [104];
  undefined4 local_a0;
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> local_98;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  uVar22 = 0;
  FVar16 = StatPtr_STAT_ForceUpdateField_Object;
  local_150 = param_1;
  local_140 = param_2;
  local_120 = this;
  if (StatPtr_STAT_ForceUpdateField_Object ==
      (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_Object>)0x0) {
    pFVar15 = ::FName::FName(local_118,"STAT_ForceUpdateField_Object");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_ForceUpdateField_Object>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ForceUpdateField_Object,*pFVar15,
                        L"Field System Object Force Update","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar16;
  bVar5 = false;
  bVar6 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  bVar10 = false;
  bVar11 = false;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar12 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_168.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_168._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.ComparisonIndex.Value = FVar17.Value;
        local_148.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_148,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\PerSolverFieldSystem.cpp"
                   ,0x77);
        bVar5 = true;
        bVar6 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_170 = FVar17.Value;
      uStack_16c = uVar12;
      local_138 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar10 = true;
      goto LAB_1440dc184;
    }
  }
  bVar6 = bVar11;
  bVar5 = bVar10;
  bVar10 = false;
  local_138 = local_130;
  FVar18 = local_130;
LAB_1440dc184:
  local_170 = param_2->ArrayNum;
  uVar24 = (ulonglong)local_170;
  if ((local_170 != 0) && (param_1 != (FPBDRigidsSolver *)0x0)) {
    local_180.Data = (FScriptContainerElement *)0x0;
    local_178 = 0;
    local_174 = 0;
    if ((int)local_170 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar24);
    }
    local_158[0] = Field_Resolution_Max;
    local_15c = Field_Filter_Max;
    local_160 = Field_Object_Max;
    local_164 = Field_Position_Max;
    local_184 = 0;
    if (0 < (int)local_170) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_170,&local_180,0,&local_174);
      do {
        uVar12 = 0;
        if ((int)uVar22 < param_2->ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar23 = (FFieldSystemCommand *)
                  ((param_2->AllocatorInstance).Data + (longlong)(int)uVar22 * 200);
        iVar13 = (**(code **)(((pFVar23->RootNode).Ptr)->_padding_ + 8))();
        pFVar20 = this;
        if ((iVar13 == 4) &&
           ((pFVar23->PhysicsType == Field_LinearForce ||
            (pFVar23->PhysicsType == Field_AngularTorque)))) {
          bVar11 = Chaos::BuildFieldSamplePoints<FPerSolverFieldSystem>
                             (this,param_1,pFVar23,&this->ExecutionDatas,local_158,&local_15c,
                              &local_160,&local_164);
          if (bVar11) {
            FFieldContext::FFieldContext
                      ((FFieldContext *)local_108,&this->ExecutionDatas,&pFVar23->MetaData,
                       (double)param_1->_padding_ - (double)pFVar23->TimeCreation);
            iVar13 = (**(code **)(((pFVar23->RootNode).Ptr)->_padding_ + 8))();
            uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            if (iVar13 == 4) {
              iVar13 = (this->ExecutionDatas).SamplePositions.ArrayNum;
              this_00 = (this->ExecutionDatas).VectorResults;
              TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                        (this_00,iVar13,No);
              uVar22 = 0;
              if (0 < iVar13) {
                lVar19 = 0;
                do {
                  uVar12 = 0;
                  if ((int)uVar22 < (this->ExecutionDatas).VectorResults[0].ArrayNum) {
                    uVar12 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar2 = (this_00->AllocatorInstance).Data;
                  uVar22 = uVar22 + 1;
                  pFVar21 = pFVar2 + lVar19;
                  *(undefined8 *)pFVar21 = uVar7;
                  *(undefined8 *)(pFVar21 + 8) = uVar8;
                  *(undefined8 *)(pFVar2 + lVar19 + 0x10) = uVar9;
                  lVar19 = lVar19 + 0x18;
                  pFVar20 = local_120;
                  param_2 = local_140;
                } while ((int)uVar22 < iVar13);
              }
              param_1 = local_150;
              Chaos::FieldVectorForceUpdate
                        (local_150,pFVar23,(pFVar20->ExecutionDatas).ParticleHandles + 1,
                         (FFieldContext *)local_108,this_00);
              uVar24 = (ulonglong)local_170;
            }
            if (local_98.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
              (**(code **)(local_98.Ptr)->_padding_)(local_98.Ptr,1);
            }
            local_a0 = 0;
            if ((void *)local_108._96_8_ != (void *)0x0) {
              FMemory::Free((void *)local_108._96_8_);
            }
            TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (local_108 + 0x20);
          }
          if (((local_180.Data <= (FScriptContainerElement *)&local_184) &&
              ((FScriptContainerElement *)&local_184 < local_180.Data + (longlong)local_174 * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (local_178 == local_174) {
            local_178 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_180,&local_174);
          }
          *(uint *)(local_180.Data + (longlong)local_178 * 4) = local_184;
          local_178 = local_178 + 1;
        }
        uVar22 = local_184 + 1;
        this = pFVar20;
        local_184 = uVar22;
      } while ((int)uVar22 < (int)uVar24);
    }
    if ((param_3) && (uVar22 = local_178 - 1, -1 < (int)uVar22)) {
      piVar1 = &param_2->ArrayMax;
      lVar19 = (longlong)(int)uVar22 * 4;
      do {
        uVar12 = 0;
        if ((int)uVar22 < local_178) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar12 = *(uint *)(local_180.Data + lVar19);
        uVar14 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar21 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar12 * 200;
        *(undefined4 *)(pFVar21 + 0xc0) = 0;
        if (*(void **)(pFVar21 + 0xb8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar21 + 0xb8));
        }
        TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (pFVar21 + 0x78);
        puVar3 = *(undefined8 **)(pFVar21 + 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        param_2 = local_140;
        iVar13 = local_140->ArrayNum + ~uVar12;
        if (iVar13 != 0) {
          memmove(pFVar21,pFVar21 + 200,(longlong)iVar13 * 200);
        }
        param_2->ArrayNum = param_2->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
        lVar19 = lVar19 + -4;
        uVar22 = uVar22 - 1;
        FVar18 = local_138;
      } while (-1 < (int)uVar22);
    }
    if (local_180.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// FieldParameterUpdateCallback @ 1440dd840

void __thiscall
FPerSolverFieldSystem::FieldParameterUpdateCallback
          (FPerSolverFieldSystem *this,FPBDRigidsSolver *param_1,FPBDPositionConstraints *param_2,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_3)

{
  if ((param_1 != (FPBDRigidsSolver *)0x0) && ((char)param_1->_padding_ == '\0')) {
    FieldParameterUpdateInternal(this,param_1,param_2,param_3,&this->TransientCommands,true);
    FieldParameterUpdateInternal(this,param_1,param_2,param_3,&this->PersistentCommands,false);
  }
  return;
}

// FieldParameterUpdateInternal @ 1440dd8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPerSolverFieldSystem::FieldParameterUpdateInternal
          (FPerSolverFieldSystem *this,FPBDRigidsSolver *param_1,FPBDPositionConstraints *param_2,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_3,
          TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *param_4,bool param_5)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  TArray<float,TSizedDefaultAllocator<32>_> *this_01;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_02;
  EFieldPhysicsType EVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FPBDPositionConstraints *pFVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_Object> FVar18;
  FName FVar19;
  FPerSolverFieldSystem *pFVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  ulonglong uVar23;
  FFieldSystemCommand *pFVar24;
  longlong lVar25;
  undefined1 auStackY_208 [32];
  uint local_1a4;
  ForAnyElementType local_1a0;
  int local_198;
  int local_194;
  uint local_190;
  FName local_188;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *local_180;
  FColor_u_0 local_178;
  EFieldPositionType local_174;
  EFieldObjectType local_170;
  EFieldFilterType local_16c;
  EFieldResolutionType local_168 [2];
  FPerSolverFieldSystem *local_160;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_158;
  FPBDRigidsSolver *local_150;
  FPBDPositionConstraints *local_148;
  FName local_140;
  FName local_138;
  FName local_128 [2];
  undefined1 local_118 [104];
  undefined4 local_b0;
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> local_a8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar22 = 0;
  local_180 = param_4;
  FVar18 = StatPtr_STAT_ParamUpdateField_Object;
  local_160 = this;
  local_158 = param_3;
  local_150 = param_1;
  local_148 = param_2;
  if (StatPtr_STAT_ParamUpdateField_Object ==
      (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_Object>)0x0) {
    pFVar17 = ::FName::FName(local_128,"STAT_ParamUpdateField_Object");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_ParamUpdateField_Object>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParamUpdateField_Object,*pFVar17,
                        L"Field System Object Parameter Update","STATGROUP_Chaos","STATCAT_Advanced"
                        ,L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar18;
  bVar6 = false;
  bVar7 = false;
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  bVar12 = false;
  bVar13 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar6 = false;
      bVar7 = true;
      bVar12 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_140.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\PerSolverFieldSystem.cpp"
                   ,0x22);
        bVar6 = true;
        bVar7 = true;
        bVar12 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_188 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar12 = true;
      goto LAB_1440dda55;
    }
  }
  bVar7 = bVar13;
  bVar6 = bVar12;
  bVar12 = false;
  local_188 = local_138;
  FVar19 = local_138;
LAB_1440dda55:
  local_190 = param_4->ArrayNum;
  uVar23 = (ulonglong)local_190;
  if ((local_190 != 0) && (param_1 != (FPBDRigidsSolver *)0x0)) {
    local_1a0.Data = (FScriptContainerElement *)0x0;
    local_198 = 0;
    local_194 = 0;
    if ((int)local_190 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar23);
    }
    local_168[0] = Field_Resolution_Max;
    local_16c = Field_Filter_Max;
    local_170 = Field_Object_Max;
    local_174 = Field_Position_Max;
    local_1a4 = 0;
    if (0 < (int)local_190) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_190,&local_1a0,0,&local_194);
      pFVar11 = local_148;
      do {
        uVar14 = 0;
        if ((int)uVar22 < param_4->ArrayNum) {
          uVar14 = ~uVar22 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar24 = (FFieldSystemCommand *)
                  ((param_4->AllocatorInstance).Data + (longlong)(int)uVar22 * 200);
        iVar15 = (**(code **)(((pFVar24->RootNode).Ptr)->_padding_ + 8))();
        if (iVar15 == 2) {
          if ((pFVar24->PhysicsType == Field_DynamicState) ||
             (pFVar24->PhysicsType - Field_CollisionGroup < 2)) goto LAB_1440ddbc3;
        }
        else {
          iVar15 = (**(code **)(((pFVar24->RootNode).Ptr)->_padding_ + 8))();
          if (iVar15 == 3) {
            EVar2 = pFVar24->PhysicsType;
            if (((EVar2 == Field_ExternalClusterStrain) || (EVar2 == Field_Kill)) ||
               (EVar2 - Field_InternalClusterStrain < 3)) {
LAB_1440ddbc3:
              bVar13 = Chaos::BuildFieldSamplePoints<FPerSolverFieldSystem>
                                 (this,param_1,pFVar24,&this->ExecutionDatas,local_168,&local_16c,
                                  &local_170,&local_174);
              if (bVar13) {
                FFieldContext::FFieldContext
                          ((FFieldContext *)local_118,&this->ExecutionDatas,&pFVar24->MetaData,
                           (double)param_1->_padding_ - (double)pFVar24->TimeCreation);
                iVar15 = (**(code **)(((pFVar24->RootNode).Ptr)->_padding_ + 8))();
                pFVar20 = this;
                if (iVar15 == 2) {
                  iVar15 = (this->ExecutionDatas).SamplePositions.ArrayNum;
                  this_00 = (this->ExecutionDatas).IntegerResults;
                  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar15,No);
                  uVar22 = 0;
                  if (0 < iVar15) {
                    lVar25 = 0;
                    do {
                      uVar14 = 0;
                      if ((int)uVar22 < (this->ExecutionDatas).IntegerResults[0].ArrayNum) {
                        uVar14 = ~uVar22 >> 0x1f;
                      }
                      if ((uVar14 == 0) &&
                         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar13)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      uVar22 = uVar22 + 1;
                      *(undefined4 *)((this_00->AllocatorInstance).Data + lVar25) = 0;
                      lVar25 = lVar25 + 4;
                      pFVar20 = local_160;
                      param_4 = local_180;
                    } while ((int)uVar22 < iVar15);
                  }
                  param_1 = local_150;
                  Chaos::FieldIntegerParameterUpdate
                            (local_150,pFVar24,(pFVar20->ExecutionDatas).ParticleHandles + 1,
                             (FFieldContext *)local_118,pFVar11,local_158,this_00);
LAB_1440ddea3:
                  uVar23 = (ulonglong)local_190;
                  this = pFVar20;
                }
                else {
                  iVar15 = (**(code **)(((pFVar24->RootNode).Ptr)->_padding_ + 8))();
                  if (iVar15 == 3) {
                    iVar15 = (this->ExecutionDatas).SamplePositions.ArrayNum;
                    this_01 = (this->ExecutionDatas).ScalarResults;
                    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(this_01,iVar15,No);
                    uVar22 = 0;
                    if (0 < iVar15) {
                      lVar25 = 0;
                      do {
                        uVar14 = 0;
                        if ((int)uVar22 < (this->ExecutionDatas).ScalarResults[0].ArrayNum) {
                          uVar14 = ~uVar22 >> 0x1f;
                        }
                        if ((uVar14 == 0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar13)) {
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        uVar22 = uVar22 + 1;
                        *(undefined4 *)((this_01->AllocatorInstance).Data + lVar25) = 0;
                        lVar25 = lVar25 + 4;
                        pFVar20 = local_160;
                        param_4 = local_180;
                      } while ((int)uVar22 < iVar15);
                    }
                    param_1 = local_150;
                    Chaos::FieldScalarParameterUpdate
                              (local_150,pFVar24,(pFVar20->ExecutionDatas).ParticleHandles + 1,
                               (FFieldContext *)local_118,pFVar11,local_158,this_01);
                    goto LAB_1440ddea3;
                  }
                  iVar15 = (**(code **)(((pFVar24->RootNode).Ptr)->_padding_ + 8))();
                  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  if (iVar15 == 4) {
                    iVar15 = (this->ExecutionDatas).SamplePositions.ArrayNum;
                    this_02 = (this->ExecutionDatas).VectorResults;
                    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                              (this_02,iVar15,No);
                    uVar22 = 0;
                    if (0 < iVar15) {
                      lVar25 = 0;
                      do {
                        uVar14 = 0;
                        if ((int)uVar22 < (this->ExecutionDatas).VectorResults[0].ArrayNum) {
                          uVar14 = ~uVar22 >> 0x1f;
                        }
                        if ((uVar14 == 0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar13)) {
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        pFVar3 = (this_02->AllocatorInstance).Data;
                        uVar22 = uVar22 + 1;
                        pFVar21 = pFVar3 + lVar25;
                        *(undefined8 *)pFVar21 = uVar8;
                        *(undefined8 *)(pFVar21 + 8) = uVar9;
                        *(undefined8 *)(pFVar3 + lVar25 + 0x10) = uVar10;
                        lVar25 = lVar25 + 0x18;
                        pFVar20 = local_160;
                        param_4 = local_180;
                      } while ((int)uVar22 < iVar15);
                    }
                    param_1 = local_150;
                    Chaos::FieldVectorParameterUpdate
                              (local_150,pFVar24,(pFVar20->ExecutionDatas).ParticleHandles + 1,
                               (FFieldContext *)local_118,pFVar11,local_158,this_02);
                    goto LAB_1440ddea3;
                  }
                }
                if (local_a8.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
                  (**(code **)(local_a8.Ptr)->_padding_)(local_a8.Ptr,1);
                }
                local_b0 = 0;
                if ((void *)local_118._96_8_ != (void *)0x0) {
                  FMemory::Free((void *)local_118._96_8_);
                }
                TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (local_118 + 0x20);
              }
              if (((local_1a0.Data <= (FScriptContainerElement *)&local_1a4) &&
                  ((FScriptContainerElement *)&local_1a4 < local_1a0.Data + (longlong)local_194 * 4)
                  ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (local_198 == local_194) {
                local_198 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_1a0,&local_194);
              }
              *(uint *)(local_1a0.Data + (longlong)local_198 * 4) = local_1a4;
              local_198 = local_198 + 1;
            }
          }
          else {
            iVar15 = (**(code **)(((pFVar24->RootNode).Ptr)->_padding_ + 8))();
            if ((iVar15 == 4) &&
               (((EVar2 = pFVar24->PhysicsType, EVar2 == Field_LinearVelocity ||
                 (EVar2 == Field_AngularVelociy)) || (EVar2 == Field_LinearImpulse))))
            goto LAB_1440ddbc3;
          }
        }
        uVar22 = local_1a4 + 1;
        FVar19 = local_188;
        local_1a4 = uVar22;
      } while ((int)uVar22 < (int)uVar23);
    }
    if ((param_5) && (uVar22 = local_198 - 1, -1 < (int)uVar22)) {
      piVar1 = &param_4->ArrayMax;
      lVar25 = (longlong)(int)uVar22 * 4;
      do {
        uVar14 = 0;
        if ((int)uVar22 < local_198) {
          uVar14 = ~uVar22 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar14 = *(uint *)(local_1a0.Data + lVar25);
        uVar16 = 0;
        if ((int)uVar14 < param_4->ArrayNum) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar21 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar14 * 200;
        *(undefined4 *)(pFVar21 + 0xc0) = 0;
        if (*(void **)(pFVar21 + 0xb8) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar21 + 0xb8));
        }
        TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (pFVar21 + 0x78);
        puVar4 = *(undefined8 **)(pFVar21 + 8);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        param_4 = local_180;
        iVar15 = local_180->ArrayNum + ~uVar14;
        if (iVar15 != 0) {
          memmove(pFVar21,pFVar21 + 200,(longlong)iVar15 * 200);
        }
        param_4->ArrayNum = param_4->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,&param_4->AllocatorInstance,param_4->ArrayNum,piVar1);
        lVar25 = lVar25 + -4;
        uVar22 = uVar22 - 1;
        FVar19 = local_188;
      } while (-1 < (int)uVar22);
    }
    if (local_1a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// GetFilteredParticleHandles @ 1440e4270

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FPerSolverFieldSystem::GetFilteredParticleHandles
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
           *param_1,FPBDRigidsSolver *param_2,EFieldFilterType param_3,EFieldObjectType param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TParticleHandleBase<double,3>_u_0 *pTVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  EParticleType EVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  TParticleHandleBase<double,3>_u_0 TVar14;
  TPBDRigidClusteredParticleHandleImp<double,3,0> *pTVar15;
  undefined1 local_198 [24];
  uint uStack_180;
  EParticleType EStack_17c;
  int local_178;
  int local_174;
  int local_170;
  TGeometryParticleHandleImp<double,3,1> *local_168;
  TGeometryParticleHandleImp<double,3,1> *local_160;
  TGeometryParticleHandleImp<double,3,1> *local_158;
  TGeometryParticleHandleImp<double,3,1> *local_150;
  TGeometryParticleHandleImp<double,3,1> *local_148;
  TGeometryParticleHandleImp<double,3,1> *local_140;
  undefined1 local_138 [24];
  int iStack_120;
  EParticleType EStack_11c;
  int local_118;
  int local_114;
  int local_110;
  TParticleHandleBase<double,3>_u_0 local_108;
  uint uStack_100;
  int iStack_fc;
  TParticleHandleBase<double,3>_u_0 local_f8;
  int iStack_f0;
  int iStack_ec;
  undefined1 local_e8 [48];
  undefined1 local_b8 [48];
  undefined1 local_88 [28];
  EParticleType local_6c [20];
  undefined1 local_58 [48];
  
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::SetNum
            (param_1,0,No);
  if (param_3 == Field_Filter_Dynamic) {
    uVar11 = *(uint *)&(param_2->Particles).NonDisabledDynamicView.field_0x10;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
    TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
              ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_198,
               (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                *)&(param_2->Particles).NonDisabledDynamicView);
    if ((TGeometryParticlesImp<double,3,0> *)local_198._16_8_ !=
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      TVar14 = (TParticleHandleBase<double,3>_u_0)local_198._16_8_;
      uVar11 = uStack_180;
      do {
        Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_198);
        uVar8 = 0;
        if ((int)uVar11 < (int)(TVar14.PBDRigidParticles)->_padding_) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(char *)((TVar14.PBDRigidParticles)->_padding_ + 0xb + (longlong)(int)uVar11 * 0x10) ==
            '\x01') goto LAB_1440e44c0;
        Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_198);
        EVar10 = EStack_17c;
        if ((EStack_17c == GeometryCollection) || (EStack_17c == Clustered)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        if (param_4 - Field_Object_All < 2) {
LAB_1440e43d9:
          Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                    ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_198);
          local_168 = Chaos::GetHandleHelper<double,3>
                                ((TGeometryParticleHandleImp<double,3,0> *)(local_198 + 0x10));
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_168) &&
              ((FScriptContainerElement *)&local_168 < pFVar2 + (longlong)*piVar1 * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = param_1->ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar12 + 1;
          *(TGeometryParticleHandleImp<double,3,1> **)
           ((param_1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_168;
          Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                    ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_198);
          pTVar15 = (TPBDRigidClusteredParticleHandleImp<double,3,0> *)(local_198 + 0x10);
          if (EVar10 < Clustered) {
            pTVar15 = (TPBDRigidClusteredParticleHandleImp<double,3,0> *)0x0;
          }
          AddClusterChildren(param_1,param_2,pTVar15);
        }
        else if (param_4 == Field_Object_Rigid) {
          if (!bVar7) goto LAB_1440e43d9;
        }
        else if ((param_4 == Field_Object_Destruction) && (bVar7)) goto LAB_1440e43d9;
LAB_1440e44c0:
        Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_198);
        do {
          uVar6 = local_198._8_8_;
          if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )local_198._8_8_ ==
              (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )0x0) {
            uVar11 = uVar11 + 1;
            uStack_180 = uVar11;
            if (local_174 <= (int)uVar11) {
LAB_1440e44e4:
              local_178 = local_178 + 1;
              Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                        ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_198);
              TVar14 = (TParticleHandleBase<double,3>_u_0)local_198._16_8_;
              uVar11 = uStack_180;
            }
          }
          else {
            iVar12 = local_170 + 1;
            local_170 = iVar12;
            if (*(int *)(local_198._8_8_ + 8) <= iVar12) goto LAB_1440e44e4;
            if ((iVar12 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar3 = *(TParticleHandleBase<double,3>_u_0 **)
                      (((ForAnyElementType *)uVar6)->Data + (longlong)iVar12 * 8);
            TVar14 = (TParticleHandleBase<double,3>_u_0)pTVar3->PBDRigidParticles;
            uVar11 = *(uint *)(pTVar3 + 1);
            if (TVar14.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
              iStack_fc = (uint)iStack_fc._1_3_ << 8;
            }
            else {
              iStack_fc = CONCAT31(iStack_fc._1_3_,(TVar14.GeometryParticles)->MParticleType);
            }
            _EStack_17c = iStack_fc;
            uStack_180 = uVar11;
            local_198._16_8_ = TVar14;
            local_108 = TVar14;
            uStack_100 = uVar11;
          }
          if (TVar14.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
            return;
          }
          Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                    ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_198);
          bVar7 = Chaos::TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                            ((TGeometryParticleHandleImp<double,3,0> *)(local_198 + 0x10));
        } while (bVar7);
      } while (TVar14.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
    }
  }
  else if (param_3 == Field_Filter_Static) {
    uVar11 = *(uint *)&(param_2->Particles).ActiveStaticParticlesView.field_0x10;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_138,
               (TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                *)&(param_2->Particles).ActiveStaticParticlesView);
    if ((TGeometryParticlesImp<double,3,0> *)local_138._16_8_ !=
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      TVar14 = (TParticleHandleBase<double,3>_u_0)local_138._16_8_;
      iVar12 = iStack_120;
      do {
        Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
        RangedForValidation((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                            local_138);
        if ((EStack_11c == GeometryCollection) || (EStack_11c == Clustered)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        if (param_4 - Field_Object_All < 2) {
LAB_1440e466a:
          Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
          RangedForValidation((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                              local_138);
          local_160 = Chaos::GetHandleHelper<double,3>
                                ((TGeometryParticleHandleImp<double,3,0> *)(local_138 + 0x10));
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_160) &&
              ((FScriptContainerElement *)&local_160 < pFVar2 + (longlong)*piVar1 * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = param_1->ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar9 + 1;
          *(TGeometryParticleHandleImp<double,3,1> **)
           ((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_160;
        }
        else if (param_4 == Field_Object_Rigid) {
          if (!bVar7) goto LAB_1440e466a;
        }
        else if ((param_4 == Field_Object_Destruction) && (bVar7)) goto LAB_1440e466a;
        Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
        RangedForValidation((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                            local_138);
        do {
          uVar6 = local_138._8_8_;
          if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )local_138._8_8_ ==
              (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )0x0) {
            iVar12 = iVar12 + 1;
            iStack_120 = iVar12;
            if (local_114 <= iVar12) {
LAB_1440e4734:
              local_118 = local_118 + 1;
              Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
              SeekNonEmptySOA((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                              local_138);
              TVar14 = (TParticleHandleBase<double,3>_u_0)local_138._16_8_;
              iVar12 = iStack_120;
            }
          }
          else {
            iVar12 = local_110 + 1;
            local_110 = iVar12;
            if (*(int *)(local_138._8_8_ + 8) <= iVar12) goto LAB_1440e4734;
            if ((iVar12 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar3 = *(TParticleHandleBase<double,3>_u_0 **)
                      (((ForAnyElementType *)uVar6)->Data + (longlong)iVar12 * 8);
            TVar14 = (TParticleHandleBase<double,3>_u_0)pTVar3->GeometryParticles;
            iVar12 = *(int *)(pTVar3 + 1);
            if (TVar14.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
              iStack_ec = (uint)iStack_ec._1_3_ << 8;
            }
            else {
              iStack_ec = CONCAT31(iStack_ec._1_3_,(TVar14.GeometryParticles)->MParticleType);
            }
            _EStack_11c = iStack_ec;
            iStack_120 = iVar12;
            local_138._16_8_ = TVar14;
            local_f8 = TVar14;
            iStack_f0 = iVar12;
          }
          if (TVar14.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
            return;
          }
          Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
          RangedForValidation((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                              local_138);
          bVar7 = Chaos::TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                            ((TGeometryParticleHandleImp<double,3,0> *)(local_138 + 0x10));
        } while (bVar7);
      } while (TVar14.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
    }
  }
  else if (param_3 == Field_Filter_Kinematic) {
    uVar11 = *(uint *)&(param_2->Particles).ActiveKinematicParticlesView.field_0x10;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    Chaos::TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
    TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
              ((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
               local_58,(TArray<Chaos::TSOAView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                         *)&(param_2->Particles).ActiveKinematicParticlesView);
    while ((TGeometryParticlesImp<double,3,0> *)local_58._16_8_ !=
           (TGeometryParticlesImp<double,3,0> *)0x0) {
      Chaos::TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
      RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                           *)local_58);
      if (((EParticleType)local_58._28_8_ == GeometryCollection) ||
         ((EParticleType)local_58._28_8_ == Clustered)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (param_4 - Field_Object_All < 2) {
LAB_1440e48ba:
        Chaos::TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
        RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                             *)local_58);
        local_158 = Chaos::GetHandleHelper<double,3>
                              ((TGeometryParticleHandleImp<double,3,0> *)(local_58 + 0x10));
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_158) &&
            ((FScriptContainerElement *)&local_158 < pFVar2 + (longlong)*piVar1 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar12 = param_1->ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar12 + 1;
        *(TGeometryParticleHandleImp<double,3,1> **)
         ((param_1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_158;
      }
      else if (param_4 == Field_Object_Rigid) {
        if (!bVar7) goto LAB_1440e48ba;
      }
      else if ((param_4 == Field_Object_Destruction) && (bVar7)) goto LAB_1440e48ba;
      Chaos::TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::operator++
                ((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
                 local_58);
    }
  }
  else if (param_3 == Field_Filter_Sleeping) {
    uVar11 = *(uint *)&(param_2->Particles).NonDisabledDynamicView.field_0x10;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
    TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
              ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_b8,
               (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                *)&(param_2->Particles).NonDisabledDynamicView);
    while ((TGeometryParticlesImp<double,3,0> *)local_b8._16_8_ !=
           (TGeometryParticlesImp<double,3,0> *)0x0) {
      Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_b8);
      bVar7 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::Sleeping
                        ((TPBDRigidParticleHandleImp<double,3,0> *)(local_b8 + 0x10));
      if (!bVar7) goto LAB_1440e4ae6;
      Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_b8);
      if (((EParticleType)local_b8._28_8_ == GeometryCollection) ||
         ((EParticleType)local_b8._28_8_ == Clustered)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (param_4 - Field_Object_All < 2) {
LAB_1440e4a3e:
        Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_b8);
        local_150 = Chaos::GetHandleHelper<double,3>
                              ((TGeometryParticleHandleImp<double,3,0> *)(local_b8 + 0x10));
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_150) &&
            ((FScriptContainerElement *)&local_150 < pFVar2 + (longlong)*piVar1 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar12 = param_1->ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar12 + 1;
        *(TGeometryParticleHandleImp<double,3,1> **)
         ((param_1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_150;
      }
      else if (param_4 == Field_Object_Rigid) {
        if (!bVar7) goto LAB_1440e4a3e;
      }
      else if ((param_4 == Field_Object_Destruction) && (bVar7)) goto LAB_1440e4a3e;
LAB_1440e4ae6:
      Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::operator++
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_b8);
    }
  }
  else if (param_3 == Field_Filter_Disabled) {
    uVar11 = *(uint *)&(param_2->Particles).AllParticlesView.field_0x10;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_88,
               (TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                *)&(param_2->Particles).AllParticlesView);
    if ((TGeometryParticlesImp<double,3,0> *)local_88._16_8_ !=
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      do {
        Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
        RangedForValidation((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                            local_88);
        plVar13 = (longlong *)(local_88 + 0x10);
        if (local_6c[0] < Rigid) {
          plVar13 = (longlong *)0x0;
        }
        if (plVar13 != (longlong *)0x0) {
          uVar11 = *(uint *)(plVar13 + 1);
          lVar4 = *plVar13;
          uVar8 = 0;
          if ((int)uVar11 < *(int *)(lVar4 + 0x2e0)) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(char *)(*(longlong *)(lVar4 + 0x2d8) + 0xd + (longlong)(int)uVar11 * 0x10) != '\0')
          {
            if ((*(char *)((longlong)plVar13 + 0xc) == '\x06') ||
               (*(char *)((longlong)plVar13 + 0xc) == '\x03')) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            if (param_4 - Field_Object_All < 2) {
LAB_1440e4c22:
              Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
              RangedForValidation((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
                                   *)local_88);
              local_148 = Chaos::GetHandleHelper<double,3>
                                    ((TGeometryParticleHandleImp<double,3,0> *)(local_88 + 0x10));
              pFVar2 = (param_1->AllocatorInstance).Data;
              if (((pFVar2 <= (FScriptContainerElement *)&local_148) &&
                  ((FScriptContainerElement *)&local_148 < pFVar2 + (longlong)*piVar1 * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar12 = param_1->ArrayNum;
              if (iVar12 == *piVar1) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&param_1->AllocatorInstance,piVar1);
              }
              param_1->ArrayNum = iVar12 + 1;
              *(TGeometryParticleHandleImp<double,3,1> **)
               ((param_1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_148;
            }
            else if (param_4 == Field_Object_Rigid) {
              if (!bVar7) goto LAB_1440e4c22;
            }
            else if ((param_4 == Field_Object_Destruction) && (bVar7)) goto LAB_1440e4c22;
          }
        }
        Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::operator++
                  ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_88);
      } while ((TGeometryParticlesImp<double,3,0> *)local_88._16_8_ !=
               (TGeometryParticlesImp<double,3,0> *)0x0);
    }
  }
  else if (param_3 == Field_Filter_All) {
    uVar11 = *(uint *)&(param_2->Particles).NonDisabledView.field_0x10;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_e8,
               (TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                *)&(param_2->Particles).NonDisabledView);
    if ((TGeometryParticlesImp<double,3,0> *)local_e8._16_8_ !=
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      do {
        Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
        RangedForValidation((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                            local_e8);
        EVar10 = (EParticleType)local_e8._28_8_;
        if ((EVar10 == GeometryCollection) || (EVar10 == Clustered)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        if (param_4 - Field_Object_All < 2) {
LAB_1440e4d86:
          Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
          RangedForValidation((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                              local_e8);
          local_140 = Chaos::GetHandleHelper<double,3>
                                ((TGeometryParticleHandleImp<double,3,0> *)(local_e8 + 0x10));
          pFVar2 = (param_1->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_140) &&
              ((FScriptContainerElement *)&local_140 < pFVar2 + (longlong)*piVar1 * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = param_1->ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar12 + 1;
          *(TGeometryParticleHandleImp<double,3,1> **)
           ((param_1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_140;
          Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
          RangedForValidation((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                              local_e8);
          pTVar15 = (TPBDRigidClusteredParticleHandleImp<double,3,0> *)(local_e8 + 0x10);
          if (EVar10 < Clustered) {
            pTVar15 = (TPBDRigidClusteredParticleHandleImp<double,3,0> *)0x0;
          }
          AddClusterChildren(param_1,param_2,pTVar15);
        }
        else if (param_4 == Field_Object_Rigid) {
          if (!bVar7) goto LAB_1440e4d86;
        }
        else if ((param_4 == Field_Object_Destruction) && (bVar7)) goto LAB_1440e4d86;
        Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::operator++
                  ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_e8);
      } while ((TGeometryParticlesImp<double,3,0> *)local_e8._16_8_ !=
               (TGeometryParticlesImp<double,3,0> *)0x0);
    }
  }
  return;
}

// GetRelevantParticleHandles @ 1440e5380

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FPerSolverFieldSystem::GetRelevantParticleHandles
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
           *param_1,FPBDRigidsSolver *param_2,EFieldResolutionType param_3)

{
  int *piVar1;
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  TParticleHandleBase<double,3>_u_0 *pTVar7;
  FPBDRigidsEvolutionGBF *pFVar8;
  undefined1 *puVar9;
  code *pcVar10;
  longlong *plVar11;
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  TParticleHandleBase<double,3>_u_0 TVar18;
  TPBDRigidClusteredParticleHandleImp<double,3,0> *pTVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_res18 [8];
  int local_res20;
  undefined1 local_118 [24];
  uint uStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  TGeometryParticleHandleImp<double,3,1> *local_d8;
  TParticleHandleBase<double,3>_u_0 local_d0;
  uint uStack_c8;
  int iStack_c4;
  int local_c0;
  TSet<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined1 local_88 [76];
  int local_3c;
  
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::SetNum
            (param_1,0,No);
  if (param_3 == Field_Resolution_Minimal) {
    uVar16 = *(uint *)&(param_2->Particles).NonDisabledView.field_0x10;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_118,
               (TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                *)&(param_2->Particles).NonDisabledView);
    if ((TGeometryParticlesImp<double,3,0> *)local_118._16_8_ !=
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      TVar18 = (TParticleHandleBase<double,3>_u_0)local_118._16_8_;
      uVar16 = uStack_100;
      do {
        Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
        RangedForValidation((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                            local_118);
        uVar22 = 0;
        if ((int)uVar16 < *(int *)&((TVar18.GeometryParticles)->MGeometryParticleHandle).field_0x10)
        {
          uVar22 = ~uVar16 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_e8 = *(undefined8 *)
                    ((TVar18.KinematicGeometryParticles)->_padding_ + (longlong)(int)uVar16 * 8);
        pFVar6 = (param_1->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_e8) &&
            ((FScriptContainerElement *)&local_e8 < pFVar6 + (longlong)*piVar1 * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar14 = param_1->ArrayNum;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,piVar1);
          param_1->ArrayNum = iVar14;
        }
        param_1->ArrayNum = iVar14 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_e8;
        Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
        RangedForValidation((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                            local_118);
        pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,0> *)(local_118 + 0x10);
        if ((EParticleType)iStack_fc < Clustered) {
          pTVar19 = (TPBDRigidClusteredParticleHandleImp<double,3,0> *)0x0;
        }
        AddClusterChildren(param_1,param_2,pTVar19);
        Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
        RangedForValidation((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                            local_118);
        do {
          if (CONCAT44(local_118._12_4_,local_118._8_4_) == 0) {
            uVar16 = uVar16 + 1;
            uStack_100 = uVar16;
            if (iStack_f4 <= (int)uVar16) {
LAB_1440e5576:
              local_f8 = local_f8 + 1;
              Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
              SeekNonEmptySOA((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                              local_118);
              TVar18 = (TParticleHandleBase<double,3>_u_0)local_118._16_8_;
              uVar16 = uStack_100;
            }
          }
          else {
            plVar11 = (longlong *)CONCAT44(local_118._12_4_,local_118._8_4_);
            iVar14 = iStack_f0 + 1;
            iStack_f0 = iVar14;
            if ((int)plVar11[1] <= iVar14) goto LAB_1440e5576;
            if ((iVar14 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pTVar7 = *(TParticleHandleBase<double,3>_u_0 **)(*plVar11 + (longlong)iVar14 * 8);
            TVar18 = (TParticleHandleBase<double,3>_u_0)pTVar7->KinematicGeometryParticles;
            uVar16 = *(uint *)(pTVar7 + 1);
            if (TVar18.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
              iStack_c4 = (uint)iStack_c4._1_3_ << 8;
            }
            else {
              iStack_c4 = CONCAT31(iStack_c4._1_3_,(TVar18.GeometryParticles)->MParticleType);
            }
            iStack_fc = iStack_c4;
            uStack_100 = uVar16;
            local_118._16_8_ = TVar18;
            local_d0 = TVar18;
            uStack_c8 = uVar16;
          }
          if (TVar18.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
            return;
          }
          Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
          RangedForValidation((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                              local_118);
          bVar13 = Chaos::TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                             ((TGeometryParticleHandleImp<double,3,0> *)(local_118 + 0x10));
        } while (bVar13);
      } while (TVar18.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
    }
  }
  else if (param_3 == Field_Resolution_DisabledParents) {
    pFVar8 = (param_2->MEvolution).Ptr;
    uVar16 = *(int *)&(pFVar8->Clustering).TopLevelClusterParents.Elements.field_0x8 -
             *(int *)&(pFVar8->Clustering).TopLevelClusterParents.Elements.field_0x34;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    if (param_1->ArrayMax < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    }
    local_118._8_4_ = 0;
    local_118._16_8_ = &(pFVar8->Clustering).TopLevelClusterParents.Elements.field_0x10;
    iVar14 = *(int *)&(pFVar8->Clustering).TopLevelClusterParents.Elements.field_0x28;
    pTVar2 = &(pFVar8->Clustering).TopLevelClusterParents;
    local_118._12_4_ = 1;
    local_f8 = 0;
    iStack_fc = 0;
    if (iVar14 != 0) {
      puVar21 = *(uint **)&(pFVar8->Clustering).TopLevelClusterParents.Elements.field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)local_118._16_8_;
      }
      uVar16 = *puVar21;
      while (uVar16 == 0) {
        lVar15 = (longlong)(int)local_118._8_4_;
        local_f8 = local_f8 + 0x20;
        local_118._8_4_ = local_118._8_4_ + 1;
        iStack_fc = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_118._8_4_)
        goto LAB_1440e5730;
        uVar16 = puVar21[lVar15 + 1];
      }
      local_118._12_4_ = -uVar16 & uVar16;
      uVar4 = (ulonglong)(uint)local_118._12_4_ * 2 + 1;
      lVar15 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_res20 = (int)lVar15;
      iStack_fc = local_f8 + -1 + local_res20;
      if (iVar14 < iStack_fc) {
        iStack_fc = iVar14;
      }
    }
LAB_1440e5730:
    iStack_f4 = local_3c;
    iStack_f0 = *(int *)&(pFVar8->Clustering).TopLevelClusterParents.Elements.field_0x8 -
                *(int *)&(pFVar8->Clustering).TopLevelClusterParents.Elements.field_0x34;
    uVar16 = *(uint *)&(pFVar8->Clustering).TopLevelClusterParents.Elements.field_0x28;
    TStack_b0._padding_ = CONCAT44(local_118._12_4_,local_118._8_4_);
    puVar3 = &(pFVar8->Clustering).TopLevelClusterParents.Elements.field_0x10;
    uStack_100 = -1;
    uVar22 = uVar16 & 0xffffffe0;
    iVar17 = (int)uVar16 >> 5;
    TStack_b0._28_4_ = local_3c;
    TStack_b0.BaseBitIndex = local_f8;
    uStack_90 = CONCAT44(iStack_ec,iStack_f0);
    TStack_b0._16_8_ = _uStack_100;
    local_118._0_8_ = pTVar2;
    local_b8 = pTVar2;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_118._16_8_;
    if ((((int)uVar16 < 0) || (iVar14 < (int)uVar16)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar5 = *(uint *)&(pFVar8->Clustering).TopLevelClusterParents.Elements.field_0x28;
    if (uVar16 != uVar5) {
      puVar9 = *(undefined1 **)&(pFVar8->Clustering).TopLevelClusterParents.Elements.field_0x20;
      puVar20 = puVar3;
      if (puVar9 != (undefined1 *)0x0) {
        puVar20 = puVar9;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar17 * 4);
      while (uVar16 == 0) {
        lVar15 = (longlong)iVar17;
        uVar22 = uVar22 + 0x20;
        iVar17 = iVar17 + 1;
        uVar16 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_1440e5860;
        uVar16 = *(uint *)(puVar20 + lVar15 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_c0 = (int)lVar15;
      uVar16 = local_c0 + -1 + uVar22;
      if ((int)uVar5 < (int)uVar16) {
        uVar16 = uVar5;
      }
    }
LAB_1440e5860:
    while( true ) {
      pTVar12 = local_b8;
      if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
          (int)uStack_90) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_b0.CurrentBitIndex == uVar16) &&
          (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
         (pTVar12 == pTVar2)) break;
      local_e0 = *(undefined8 *)
                  (*(longlong *)&pTVar12->Elements + (longlong)TStack_b0.CurrentBitIndex * 0x10);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_e0) &&
          ((FScriptContainerElement *)&local_e0 < pFVar6 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar14 = param_1->ArrayNum;
      if (iVar14 == param_1->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar14 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_e0;
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    }
  }
  else if (param_3 == Field_Resolution_Maximum) {
    uVar16 = *(uint *)&(param_2->Particles).AllParticlesView.field_0x10;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_88,
               (TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                *)&(param_2->Particles).AllParticlesView);
    while ((TGeometryParticlesImp<double,3,0> *)local_88._16_8_ !=
           (TGeometryParticlesImp<double,3,0> *)0x0) {
      Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_88);
      local_d8 = Chaos::GetHandleHelper<double,3>
                           ((TGeometryParticleHandleImp<double,3,0> *)(local_88 + 0x10));
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar14 = param_1->ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
        param_1->ArrayNum = iVar14;
      }
      param_1->ArrayNum = iVar14 + 1;
      *(TGeometryParticleHandleImp<double,3,1> **)
       ((param_1->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_d8;
      Chaos::TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::operator++
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_88);
    }
  }
  return;
}

// RemovePersistentCommand @ 1440eeef0

void __thiscall
FPerSolverFieldSystem::RemovePersistentCommand
          (FPerSolverFieldSystem *this,FFieldSystemCommand *param_1)

{
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_>::Remove(&this->PersistentCommands,param_1)
  ;
  return;
}

// RemoveTransientCommand @ 1440ef1c0

void __thiscall
FPerSolverFieldSystem::RemoveTransientCommand
          (FPerSolverFieldSystem *this,FFieldSystemCommand *param_1)

{
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_>::Remove(&this->TransientCommands,param_1);
  return;
}

