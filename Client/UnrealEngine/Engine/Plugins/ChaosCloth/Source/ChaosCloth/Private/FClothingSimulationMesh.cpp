// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 17

// FClothingSimulationMesh @ 14db8fa20

FClothingSimulationMesh * __thiscall
Chaos::FClothingSimulationMesh::FClothingSimulationMesh
          (FClothingSimulationMesh *this,FString *param_1)

{
  this->_padding_ = (longlong)&___7FClothingSimulationMesh_Chaos__6B_;
  ::FString::FString(&this->DebugName,param_1);
  (this->ReferenceBoneName).ComparisonIndex = 0;
  (this->ReferenceBoneName).Number = 0;
  return this;
}

// ~FClothingSimulationMesh @ 14db9f730

void __thiscall
Chaos::FClothingSimulationMesh::~FClothingSimulationMesh(FClothingSimulationMesh *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FClothingSimulationMesh_Chaos__6B_;
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ApplyMorphTarget @ 14dbbd5c0

void __thiscall
Chaos::FClothingSimulationMesh::ApplyMorphTarget
          (FClothingSimulationMesh *this,int param_1,int param_2,float param_3,
          TArrayView<Chaos::TVector<float,3>,int> *param_4,
          TArrayView<Chaos::TVector<float,3>,int> *param_5)

{
  char cVar1;
  TArrayView<int_const_,int> local_68;
  TArrayView<UE::Math::TVector<float>_const_,int> local_58;
  TArrayView<UE::Math::TVector<float>_const_,int> local_48;
  undefined **local_38;
  FClothingSimulationMesh *local_30;
  FName local_28;
  int local_20;
  
  cVar1 = (**(code **)(this->_padding_ + 0x28))();
  if (cVar1 != '\0') {
    local_28 = FClothingSimulationDefaultAccessoryMesh::DefaultAccessoryMeshName;
    local_38 = &___7FClothingSimulationDefaultAccessoryMesh_Chaos__6B_;
    local_30 = this;
    local_20 = param_1;
    (**(code **)(this->_padding_ + 0x110))(this,&local_48,param_1,param_2);
    if ((code *)local_38[10] ==
        FClothingSimulationDefaultAccessoryMesh::GetMorphTargetTangentZDeltas) {
      (**(code **)(local_30->_padding_ + 0x118))(local_30,&local_58,local_20,param_2);
    }
    else {
      (*(code *)local_38[10])(&local_38,&local_58,param_2);
    }
    if ((code *)local_38[0xb] == FClothingSimulationDefaultAccessoryMesh::GetMorphTargetIndices) {
      (**(code **)(local_30->_padding_ + 0x120))(local_30,&local_68,local_20,param_2);
    }
    else {
      (*(code *)local_38[0xb])(&local_38,&local_68,param_2);
    }
    if ((((__real_322bcc77 < (float)((uint)param_3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
         (local_48.ArrayNum != 0)) && (local_48.ArrayNum == local_58.ArrayNum)) &&
       (local_48.ArrayNum == local_68.ArrayNum)) {
      Chaos::Private::ApplyMorphTargetInternal<Chaos::TVector<float,3>_>
                (param_3,&local_48,&local_58,&local_68,param_4,param_5);
    }
  }
  return;
}

// FindMorphTargetByName @ 14dbf3470

int __thiscall
Chaos::FClothingSimulationMesh::FindMorphTargetByName
          (FClothingSimulationMesh *this,int param_1,FString *param_2)

{
  return -1;
}

// GetAccessoryMesh @ 14dbf58e0

FClothingSimulationAccessoryMesh * __thiscall
Chaos::FClothingSimulationMesh::GetAccessoryMesh
          (FClothingSimulationMesh *this,int param_1,FName *param_2)

{
  return (FClothingSimulationAccessoryMesh *)0x0;
}

// GetAllAccessoryMeshNames @ 14dbf68f0

TArrayView<FName_const_,int> * __thiscall
Chaos::FClothingSimulationMesh::GetAllAccessoryMeshNames
          (FClothingSimulationMesh *this,TArrayView<FName_const_,int> *__return_storage_ptr__,
          int param_1)

{
  __return_storage_ptr__->DataPtr = (FName *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetAllMorphTargetNames @ 14dbf6cc0

TArrayView<FString_const_,int> * __thiscall
Chaos::FClothingSimulationMesh::GetAllMorphTargetNames
          (FClothingSimulationMesh *this,TArrayView<FString_const_,int> *__return_storage_ptr__,
          int param_1)

{
  __return_storage_ptr__->DataPtr = (FString *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetLODIndexFromOwnerLODIndex @ 14dbfc6b0

int __thiscall
Chaos::FClothingSimulationMesh::GetLODIndexFromOwnerLODIndex
          (FClothingSimulationMesh *this,int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x28))();
  iVar2 = -1;
  if (cVar1 != '\0') {
    iVar2 = param_1;
  }
  return iVar2;
}

// GetManagedArrayCollection @ 14dbfc8c0

TSharedPtr<FManagedArrayCollection_const_,1> * __thiscall
Chaos::FClothingSimulationMesh::GetManagedArrayCollection
          (FClothingSimulationMesh *this,
          TSharedPtr<FManagedArrayCollection_const_,1> *__return_storage_ptr__,int param_1)

{
  __return_storage_ptr__->Object = (FManagedArrayCollection *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetMorphTargetIndices @ 14dbfc9e0

TArrayView<int_const_,int> * __thiscall
Chaos::FClothingSimulationMesh::GetMorphTargetIndices
          (FClothingSimulationMesh *this,TArrayView<int_const_,int> *__return_storage_ptr__,
          int param_1,int param_2)

{
  __return_storage_ptr__->DataPtr = (int *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetMorphTargetPositionDeltas @ 14dbfca50

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
Chaos::FClothingSimulationMesh::GetMorphTargetPositionDeltas
          (FClothingSimulationMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1,
          int param_2)

{
  __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetMorphTargetTangentZDeltas @ 14dbfcac0

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
Chaos::FClothingSimulationMesh::GetMorphTargetTangentZDeltas
          (FClothingSimulationMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1,
          int param_2)

{
  __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetScale @ 14dbfff40

float __thiscall Chaos::FClothingSimulationMesh::GetScale(FClothingSimulationMesh *this)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = (**(code **)(this->_padding_ + 0xc0))();
  dVar2 = *(double *)(lVar1 + 0x40);
  if (*(double *)(lVar1 + 0x40) <= *(double *)(lVar1 + 0x48)) {
    dVar2 = *(double *)(lVar1 + 0x48);
  }
  if (dVar2 <= *(double *)(lVar1 + 0x50)) {
    dVar2 = *(double *)(lVar1 + 0x50);
  }
  return (float)dVar2;
}

// Update @ 14dc20500

void __thiscall
Chaos::FClothingSimulationMesh::Update
          (FClothingSimulationMesh *this,FClothingSimulationSolver *param_1,int param_2,int param_3,
          int param_4,int param_5,int param_6,float param_7)

{
  TUniquePtr<Chaos::Softs::FEvolution,TDefaultDelete<Chaos::Softs::FEvolution>_> *pTVar1;
  TUniquePtr<Chaos::Softs::FPBDEvolution,TDefaultDelete<Chaos::Softs::FPBDEvolution>_> *pTVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  TArrayView<Chaos::TVector<float,3>,int> local_d8;
  TArrayView<Chaos::TVector<float,3>,int> local_c8;
  TArrayView<Chaos::TVector<float,3>,int> local_b8;
  TArrayView<Chaos::TVector<float,3>,int> local_a8;
  TArrayView<Chaos::TVector<float,3>,int> local_98;
  TArrayView<Chaos::TVector<float,3>,int> local_88;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_78;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_68;
  FClothingSimulationAccessoryMesh local_58;
  int local_40;
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationMesh.cpp"
                         ,0xd1,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  cVar8 = (**(code **)(this->_padding_ + 0x28))(this,param_3);
  if ((cVar8 != '\0') && (iVar9 = (**(code **)(this->_padding_ + 0x30))(this,param_3), iVar9 != 0))
  {
    pTVar1 = &param_1->Evolution;
    pTVar2 = &param_1->PBDEvolution;
    Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
              (&local_c8,pTVar1,pTVar2,param_5,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               &(param_1->AnimationPositions).field_0x8);
    Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
              (&local_b8,pTVar1,pTVar2,param_5,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               &(param_1->AnimationNormals).field_0x8);
    local_58.AccessoryMeshName = FClothingSimulationDefaultAccessoryMesh::DefaultAccessoryMeshName;
    local_58._padding_ = (longlong)&___7FClothingSimulationDefaultAccessoryMesh_Chaos__6B_;
    local_58.Mesh = this;
    local_40 = param_3;
    if ((param_1 == (FClothingSimulationSolver *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Solver",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationAccessoryMesh.cpp"
                           ,0xc5,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FClothingSimulationAccessoryMesh::SkinPhysicsMesh
              (&local_58,param_6,param_7,param_1->LocalSpaceScale,&param_1->LocalSpaceLocation,
               &local_c8,&local_b8);
    if (param_3 != param_2) {
      Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
                (&local_d8,pTVar1,pTVar2,param_5,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 &(param_1->OldAnimationPositions).field_0x8);
      puVar3 = &(param_1->OldAnimationNormals).field_0x8;
      Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
                (&local_a8,pTVar1,pTVar2,param_5,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)puVar3);
      cVar8 = (**(code **)(this->_padding_ + 0x28))(this,param_2);
      if ((cVar8 != '\0') &&
         (iVar9 = (**(code **)(this->_padding_ + 0x30))(this,param_2), 0 < iVar9)) {
        Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
                  (&local_98,pTVar1,pTVar2,param_4,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   &(param_1->OldAnimationPositions).field_0x8);
        local_68.DataPtr = local_98.DataPtr;
        local_68.ArrayNum = local_98.ArrayNum;
        Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
                  (&local_88,pTVar1,pTVar2,param_4,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)puVar3);
        local_78.DataPtr = local_88.DataPtr;
        local_78.ArrayNum = local_88.ArrayNum;
        bVar7 = WrapDeformLOD(this,param_2,param_3,&local_68,&local_78,&local_d8,&local_a8);
        if (bVar7) {
          return;
        }
      }
      uVar11 = 0;
      if (0 < local_d8.ArrayNum) {
        lVar13 = 0;
        do {
          uVar12 = ~uVar11 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar11 < local_c8.ArrayNum) {
            uVar10 = uVar12;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar4 = *(undefined8 *)(&(local_c8.DataPtr)->field_0x0 + lVar13);
          uVar5 = *(undefined4 *)(&(local_c8.DataPtr)->field_0x8 + lVar13);
          uVar10 = 0;
          if ((int)uVar11 < local_d8.ArrayNum) {
            uVar10 = uVar12;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined8 *)(&(local_d8.DataPtr)->field_0x0 + lVar13) = uVar4;
          *(undefined4 *)(&(local_d8.DataPtr)->field_0x8 + lVar13) = uVar5;
          uVar10 = 0;
          if ((int)uVar11 < local_b8.ArrayNum) {
            uVar10 = uVar12;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar4 = *(undefined8 *)(&(local_b8.DataPtr)->field_0x0 + lVar13);
          uVar5 = *(undefined4 *)(&(local_b8.DataPtr)->field_0x8 + lVar13);
          uVar10 = 0;
          if ((int)uVar11 < local_a8.ArrayNum) {
            uVar10 = uVar12;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = uVar11 + 1;
          *(undefined8 *)(&(local_a8.DataPtr)->field_0x0 + lVar13) = uVar4;
          *(undefined4 *)(&(local_a8.DataPtr)->field_0x8 + lVar13) = uVar5;
          lVar13 = lVar13 + 0xc;
        } while ((int)uVar11 < local_d8.ArrayNum);
      }
    }
  }
  return;
}

// WrapDeformLOD @ 14dc24500

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::FClothingSimulationMesh::WrapDeformLOD
          (FClothingSimulationMesh *this,int param_1,int param_2,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_3,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_4,
          TArrayView<Chaos::TVector<float,3>,int> *param_5,
          TArrayView<Chaos::TVector<float,3>,int> *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  code *pcVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  char cVar19;
  bool bVar20;
  undefined1 uVar21;
  int iVar22;
  uint uVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothWrapDeformMesh> FVar25;
  longlong *plVar26;
  TVector<float,3> *pTVar27;
  longlong lVar28;
  FName FVar29;
  longlong lVar30;
  float *pfVar31;
  uint uVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  FColor_u_0 local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  undefined8 local_158;
  float local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  float local_128;
  float fStack_124;
  float local_120;
  FName local_11c;
  longlong local_110;
  longlong lStack_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [184];
  
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId140,"FClothingSimulationMesh_WrapDeformLOD",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationMesh.cpp"
               ,0x8c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId140);
  }
  uVar32 = 0;
  FVar25 = StatPtr_STAT_ChaosClothWrapDeformMesh;
  if (StatPtr_STAT_ChaosClothWrapDeformMesh ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothWrapDeformMesh>)0x0) {
    pFVar24 = ::FName::FName(&local_11c,"STAT_ChaosClothWrapDeformMesh");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothWrapDeformMesh>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothWrapDeformMesh,*pFVar24
                        ,L"Chaos Cloth Wrap Deform Mesh","STATGROUP_ChaosCloth","STATCAT_Advanced",
                        L"ChaosCloth",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar25;
  bVar16 = false;
  bVar17 = false;
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  bVar18 = false;
  bVar20 = false;
  if ((FVar29.ComparisonIndex.Value.Value == 0) && (FVar29.Number == 0)) {
LAB_14dc246e3:
    bVar17 = bVar20;
    bVar16 = bVar18;
    bVar18 = false;
    local_140 = local_138;
    FVar29 = local_138;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_170.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_170._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar16 = false;
      bVar17 = true;
      bVar18 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_148.Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_148,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationMesh.cpp"
                   ,0x8d);
        bVar16 = true;
        bVar17 = true;
        bVar18 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dc246e3;
    local_140 = FVar29;
    FThreadStats::AddMessage(FVar29,CycleScopeStart);
    bVar18 = true;
  }
  iVar22 = -(param_2 - param_1);
  if (iVar22 < 0) {
    iVar22 = param_2 - param_1;
  }
  if (((iVar22 == 1) &&
      (cVar19 = (**(code **)(this->_padding_ + 0x28))(this,param_1), cVar19 != '\0')) &&
     (cVar19 = (**(code **)(this->_padding_ + 0x28))(this,param_2), cVar19 != '\0')) {
    iVar22 = param_5->ArrayNum;
    lVar30 = (longlong)iVar22;
    if (param_1 < param_2) {
      plVar26 = (longlong *)(**(code **)(this->_padding_ + 0xe0))(this,local_100);
    }
    else {
      plVar26 = (longlong *)(**(code **)(this->_padding_ + 0xe8))(this,local_f0,param_2);
    }
    local_110 = *plVar26;
    lStack_108 = plVar26[1];
    if ((int)plVar26[1] == iVar22) {
      if (0 < iVar22) {
        pfVar31 = (float *)(local_110 + 0xc);
        lVar28 = plVar26[1];
        do {
          uVar23 = 0;
          if ((int)uVar32 < (int)lVar28) {
            uVar23 = ~uVar32 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar20)) {
            pcVar15 = (code *)swi(3);
            uVar21 = (*pcVar15)();
            return (bool)uVar21;
          }
          uVar12 = *(ushort *)(pfVar31 + 9);
          uVar13 = *(ushort *)((longlong)pfVar31 + 0x26);
          uVar14 = *(ushort *)(pfVar31 + 10);
          pTVar27 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[](param_3,(uint)uVar12)
          ;
          local_16c = pfVar31[-3];
          local_15c = local_16c * *(float *)pTVar27;
          local_168 = local_16c * *(float *)&pTVar27->field_0x4;
          local_16c = local_16c * *(float *)&pTVar27->field_0x8;
          pTVar27 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[](param_4,(uint)uVar12)
          ;
          fVar35 = *pfVar31;
          local_160 = fVar35 * *(float *)pTVar27;
          local_164 = fVar35 * *(float *)&pTVar27->field_0x4;
          fVar36 = *(float *)&pTVar27->field_0x8;
          pTVar27 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[](param_3,(uint)uVar13)
          ;
          fVar39 = pfVar31[-2];
          fVar1 = *(float *)pTVar27;
          fVar2 = *(float *)&pTVar27->field_0x4;
          fVar40 = *(float *)&pTVar27->field_0x8;
          pTVar27 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[](param_4,(uint)uVar13)
          ;
          fVar41 = *pfVar31;
          fVar3 = *(float *)pTVar27;
          fVar4 = *(float *)&pTVar27->field_0x4;
          fVar5 = *(float *)&pTVar27->field_0x8;
          pTVar27 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[](param_3,(uint)uVar14)
          ;
          fVar6 = pfVar31[-1];
          fVar7 = *(float *)pTVar27;
          fVar8 = *(float *)&pTVar27->field_0x4;
          fVar9 = *(float *)&pTVar27->field_0x8;
          pTVar27 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[](param_4,(uint)uVar14)
          ;
          fVar10 = *pfVar31;
          fVar37 = local_16c + fVar35 * fVar36;
          fVar35 = *(float *)&pTVar27->field_0x8;
          fVar38 = local_168 + local_164;
          fVar36 = *(float *)pTVar27;
          fVar11 = *(float *)&pTVar27->field_0x4;
          fVar34 = local_160 + local_15c;
          pTVar27 = TArrayView<Chaos::TVector<float,3>,int>::operator[](param_5,uVar32);
          *(float *)pTVar27 =
               fVar6 * fVar7 + fVar41 * fVar3 + fVar10 * fVar36 + fVar34 + fVar39 * fVar1;
          *(float *)&pTVar27->field_0x4 =
               fVar10 * fVar11 + fVar38 + fVar6 * fVar8 + fVar41 * fVar4 + fVar39 * fVar2;
          *(float *)&pTVar27->field_0x8 =
               fVar10 * fVar35 + fVar37 + fVar6 * fVar9 + fVar41 * fVar5 + fVar39 * fVar40;
          pTVar27 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[](param_4,(uint)uVar12)
          ;
          fVar35 = pfVar31[-3];
          fVar36 = *(float *)pTVar27;
          fVar39 = *(float *)&pTVar27->field_0x4;
          fVar1 = *(float *)&pTVar27->field_0x8;
          pTVar27 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[](param_4,(uint)uVar13)
          ;
          fVar2 = pfVar31[-2];
          fVar40 = *(float *)pTVar27;
          fVar41 = *(float *)&pTVar27->field_0x4;
          fVar3 = *(float *)&pTVar27->field_0x8;
          pTVar27 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[](param_4,(uint)uVar14)
          ;
          fVar4 = pfVar31[-1];
          fVar40 = fVar4 * *(float *)pTVar27 + fVar2 * fVar40 + fVar35 * fVar36;
          fVar41 = fVar4 * *(float *)&pTVar27->field_0x4 + fVar2 * fVar41 + fVar35 * fVar39;
          local_120 = fVar4 * *(float *)&pTVar27->field_0x8 + fVar2 * fVar3 + fVar35 * fVar1;
          fVar39 = fVar40 * fVar40 + fVar41 * fVar41 + local_120 * local_120;
          fVar35 = fVar40;
          fVar36 = fVar41;
          local_150 = local_120;
          if (fVar39 == __real_3f800000) {
LAB_14dc24b4b:
            local_158 = CONCAT44(fVar36,fVar35);
          }
          else {
            if (__real_322bcc77 <= fVar39) {
              fVar39 = __real_3f800000 / SQRT(fVar39);
              fVar35 = fVar39 * fVar40;
              fVar36 = fVar39 * fVar41;
              local_150 = fVar39 * local_120;
              goto LAB_14dc24b4b;
            }
            fVar35 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            fVar36 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                            0x20);
            local_158 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            local_150 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          }
          fVar39 = local_150;
          _local_128 = CONCAT44(fVar41,fVar40);
          pTVar27 = TArrayView<Chaos::TVector<float,3>,int>::operator[](param_6,uVar32);
          uVar32 = uVar32 + 1;
          pfVar31 = pfVar31 + 0x10;
          *(ulonglong *)pTVar27 = CONCAT44(fVar36,fVar35);
          *(float *)&pTVar27->field_0x8 = fVar39;
          lVar30 = lVar30 + -1;
          lVar28 = lStack_108;
          FVar29 = local_140;
        } while (lVar30 != 0);
      }
      bVar20 = true;
      goto LAB_14dc24bf8;
    }
  }
  bVar20 = false;
LAB_14dc24bf8:
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FThreadStats::AddMessage(FVar29,CycleScopeEnd);
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar20;
}

// WrapDeformLOD @ 14dc24c80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::FClothingSimulationMesh::WrapDeformLOD
          (FClothingSimulationMesh *this,int param_1,int param_2,TVector<float,3> *param_3,
          TVector<float,3> *param_4,TVector<float,3> *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  code *pcVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  char cVar24;
  bool bVar25;
  undefined1 uVar26;
  int iVar27;
  uint uVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothWrapDeformMesh> FVar30;
  longlong *plVar31;
  longlong lVar32;
  FName FVar33;
  uint uVar34;
  longlong lVar35;
  ushort *puVar36;
  bool bVar37;
  FColor_u_0 local_res10 [2];
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  longlong local_80;
  longlong lStack_78;
  undefined1 local_70 [16];
  undefined1 local_60 [56];
  
  bVar37 = -1 < CpuChannel->Enabled;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId44,"FClothingSimulationMesh_WrapDeformLOD",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationMesh.cpp"
               ,0x2c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId44);
  }
  FVar30 = StatPtr_STAT_ChaosClothWrapDeformMesh;
  if (StatPtr_STAT_ChaosClothWrapDeformMesh ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothWrapDeformMesh>)0x0) {
    pFVar29 = ::FName::FName(&local_98,"STAT_ChaosClothWrapDeformMesh");
    FVar30 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothWrapDeformMesh>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothWrapDeformMesh,*pFVar29
                        ,L"Chaos Cloth Wrap Deform Mesh","STATGROUP_ChaosCloth","STATCAT_Advanced",
                        L"ChaosCloth",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  bVar21 = false;
  bVar23 = false;
  FVar33 = *(FName *)FVar30;
  if ((FVar33.ComparisonIndex.Value.Value == 0) && (FVar33.Number == 0)) {
LAB_14dc24e21:
    bVar22 = false;
    FVar33 = local_90;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
      bVar21 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_a8.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationMesh.cpp"
                   ,0x2d);
        bVar21 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dc24e21;
    local_a0 = FVar33;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar22 = true;
  }
  iVar27 = -(param_2 - param_1);
  if (iVar27 < 0) {
    iVar27 = param_2 - param_1;
  }
  if (((iVar27 == 1) &&
      (cVar24 = (**(code **)(this->_padding_ + 0x28))(this,param_1), cVar24 != '\0')) &&
     (cVar24 = (**(code **)(this->_padding_ + 0x28))(this,param_2), cVar24 != '\0')) {
    iVar27 = (**(code **)(this->_padding_ + 0x30))(this,param_2);
    lVar35 = (longlong)iVar27;
    if (param_1 < param_2) {
      plVar31 = (longlong *)(**(code **)(this->_padding_ + 0xe0))(this,local_70);
    }
    else {
      plVar31 = (longlong *)(**(code **)(this->_padding_ + 0xe8))(this,local_60,param_2);
    }
    local_80 = *plVar31;
    lStack_78 = plVar31[1];
    if ((int)plVar31[1] == iVar27) {
      uVar34 = 0;
      if (0 < iVar27) {
        local_a0 = (FName)&param_5->field_0x8;
        puVar36 = (ushort *)(local_80 + 0x34);
        lVar32 = plVar31[1];
        do {
          uVar28 = 0;
          if ((int)uVar34 < (int)lVar32) {
            uVar28 = ~uVar34 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar25)) {
            pcVar20 = (code *)swi(3);
            uVar26 = (*pcVar20)();
            return (bool)uVar26;
          }
          fVar1 = *(float *)(puVar36 + -0x1a);
          uVar34 = uVar34 + 1;
          fVar2 = *(float *)(puVar36 + -0x14);
          fVar3 = *(float *)(puVar36 + -0x18);
          fVar4 = *(float *)(puVar36 + -0x16);
          uVar17 = puVar36[-2];
          uVar18 = puVar36[-1];
          fVar5 = *(float *)&param_4[uVar17].field_0x8;
          fVar6 = *(float *)&param_3[uVar17].field_0x8;
          fVar7 = *(float *)&param_3[uVar17].field_0x4;
          fVar8 = *(float *)&param_3[uVar18].field_0x8;
          fVar9 = *(float *)&param_3[uVar18].field_0x4;
          uVar19 = *puVar36;
          puVar36 = puVar36 + 0x20;
          fVar10 = *(float *)&param_4[uVar19].field_0x8;
          fVar11 = *(float *)&param_3[uVar19].field_0x8;
          fVar12 = *(float *)&param_3[uVar19].field_0x4;
          fVar13 = *(float *)&param_4[uVar18].field_0x8;
          fVar14 = *(float *)&param_4[uVar17].field_0x4;
          fVar15 = *(float *)&param_4[uVar18].field_0x4;
          fVar16 = *(float *)&param_4[uVar19].field_0x4;
          *(float *)((longlong)local_a0 + -8) =
               (*(float *)(param_3 + uVar18) + *(float *)(param_3 + uVar17) +
               *(float *)(param_3 + uVar19)) * fVar2 + fVar1 * *(float *)(param_4 + uVar17) +
               fVar4 * *(float *)(param_4 + uVar19) + fVar3 * *(float *)(param_4 + uVar18);
          *(float *)((longlong)local_a0 + -4) =
               (fVar7 + fVar9 + fVar12) * fVar2 + fVar1 * fVar14 + fVar4 * fVar16 + fVar3 * fVar15;
          *(float *)local_a0 =
               (fVar6 + fVar8 + fVar11) * fVar2 + fVar1 * fVar5 + fVar4 * fVar10 + fVar3 * fVar13;
          local_a0 = (FName)((longlong)local_a0 + 0xc);
          lVar35 = lVar35 + -1;
          lVar32 = lStack_78;
        } while (lVar35 != 0);
      }
      bVar25 = true;
      goto LAB_14dc25087;
    }
  }
  bVar25 = false;
LAB_14dc25087:
  if (bVar23) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar22) {
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar25;
}

// WrapDeformLOD @ 14dc25110

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::FClothingSimulationMesh::WrapDeformLOD
          (FClothingSimulationMesh *this,int param_1,int param_2,TVector<float,3> *param_3,
          FPAndInvM *param_4,TVector<float,3> *param_5,FPAndInvM *param_6,TVector<float,3> *param_7,
          TVector<float,3> *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  code *pcVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  char cVar24;
  bool bVar25;
  undefined1 uVar26;
  int iVar27;
  uint uVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothWrapDeformClothLOD> FVar30;
  longlong *plVar31;
  longlong lVar32;
  FName FVar33;
  bool bVar34;
  uint uVar35;
  float *pfVar36;
  longlong lVar37;
  float *pfVar38;
  bool bVar39;
  longlong local_c8;
  FColor_u_0 local_c0 [2];
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_98;
  longlong local_90;
  longlong lStack_88;
  undefined1 local_80 [16];
  undefined1 local_70 [56];
  
  bVar39 = -1 < CpuChannel->Enabled;
  if (bVar39) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId90,"FClothingSimulationMesh_WrapDeformLOD",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationMesh.cpp"
               ,0x5a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId90);
  }
  uVar35 = 0;
  FVar30 = StatPtr_STAT_ChaosClothWrapDeformClothLOD;
  if (StatPtr_STAT_ChaosClothWrapDeformClothLOD ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothWrapDeformClothLOD>)0x0) {
    pFVar29 = ::FName::FName(&local_98,"STAT_ChaosClothWrapDeformClothLOD");
    FVar30 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothWrapDeformClothLOD>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothWrapDeformClothLOD,
                        *pFVar29,L"Chaos Cloth Wrap Deform Cloth LOD","STATGROUP_ChaosCloth",
                        "STATCAT_Advanced",L"ChaosCloth",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar30;
  bVar25 = false;
  bVar22 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  bVar34 = false;
  bVar23 = false;
  if ((FVar33.ComparisonIndex.Value.Value == 0) && (FVar33.Number == 0)) {
LAB_14dc252e7:
    bVar21 = false;
    local_b0 = local_a8;
    FVar33 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c0[0]._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
      bVar25 = false;
      bVar22 = true;
      bVar34 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_b8.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationMesh.cpp"
                   ,0x5b);
        bVar25 = true;
        bVar22 = true;
        bVar34 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dc252e7;
    local_b0 = FVar33;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar21 = true;
    bVar34 = bVar25;
    bVar23 = bVar22;
  }
  iVar27 = -(param_2 - param_1);
  if (iVar27 < 0) {
    iVar27 = param_2 - param_1;
  }
  if (((iVar27 == 1) &&
      (cVar24 = (**(code **)(this->_padding_ + 0x28))(this,param_1), cVar24 != '\0')) &&
     (cVar24 = (**(code **)(this->_padding_ + 0x28))(this,param_2), cVar24 != '\0')) {
    iVar27 = (**(code **)(this->_padding_ + 0x30))(this,param_2);
    local_c8 = (longlong)iVar27;
    if (param_1 < param_2) {
      plVar31 = (longlong *)(**(code **)(this->_padding_ + 0xe0))(this,local_80);
    }
    else {
      plVar31 = (longlong *)(**(code **)(this->_padding_ + 0xe8))(this,local_70,param_2);
    }
    local_90 = *plVar31;
    lStack_88 = plVar31[1];
    if ((int)plVar31[1] == iVar27) {
      if (0 < iVar27) {
        pfVar38 = (float *)(local_90 + 0xc);
        lVar37 = (longlong)param_8 - (longlong)param_7;
        pfVar36 = (float *)&param_7->field_0x8;
        lVar32 = plVar31[1];
        do {
          uVar28 = 0;
          if ((int)uVar35 < (int)lVar32) {
            uVar28 = ~uVar35 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar25)) {
            pcVar20 = (code *)swi(3);
            uVar26 = (*pcVar20)();
            return (bool)uVar26;
          }
          fVar1 = *pfVar38;
          fVar2 = pfVar38[-2];
          fVar3 = pfVar38[-1];
          uVar17 = *(ushort *)(pfVar38 + 9);
          fVar4 = pfVar38[-3];
          uVar18 = *(ushort *)((longlong)pfVar38 + 0x26);
          fVar5 = *(float *)&param_4[uVar17].P.field_0x8;
          uVar19 = *(ushort *)(pfVar38 + 10);
          fVar6 = *(float *)&param_3[uVar18].field_0x8;
          fVar7 = *(float *)&param_3[uVar17].field_0x8;
          fVar8 = *(float *)&param_3[uVar18].field_0x4;
          fVar9 = *(float *)&param_3[uVar17].field_0x4;
          fVar10 = *(float *)&param_4[uVar19].P.field_0x8;
          fVar11 = *(float *)&param_3[uVar19].field_0x4;
          fVar12 = *(float *)&param_3[uVar19].field_0x8;
          fVar13 = *(float *)&param_4[uVar18].P.field_0x8;
          fVar14 = *(float *)&param_4[uVar17].P.field_0x4;
          fVar15 = *(float *)&param_4[uVar18].P.field_0x4;
          fVar16 = *(float *)&param_4[uVar19].P.field_0x4;
          pfVar36[-2] = (*(float *)(param_3 + uVar17) + *(float *)(param_3 + uVar18) +
                        *(float *)(param_3 + uVar19)) * fVar1 + fVar4 * *(float *)&param_4[uVar17].P
                        + fVar2 * *(float *)&param_4[uVar18].P +
                          fVar3 * *(float *)&param_4[uVar19].P;
          pfVar36[-1] = (fVar8 + fVar9 + fVar11) * fVar1 + fVar4 * fVar14 +
                        fVar3 * fVar16 + fVar2 * fVar15;
          *pfVar36 = (fVar6 + fVar7 + fVar12) * fVar1 + fVar4 * fVar5 +
                     fVar3 * fVar10 + fVar2 * fVar13;
          fVar1 = pfVar36[-1];
          *(float *)&(param_6->P).field_0x0 = pfVar36[-2];
          *(float *)&(param_6->P).field_0x4 = fVar1;
          *(float *)&(param_6->P).field_0x8 = *pfVar36;
          fVar1 = pfVar38[-3];
          fVar2 = pfVar38[-2];
          fVar3 = *(float *)&param_5[uVar17].field_0x8;
          fVar4 = *(float *)&param_5[uVar18].field_0x8;
          fVar5 = pfVar38[-1];
          fVar6 = *(float *)&param_5[uVar18].field_0x4;
          fVar7 = *(float *)&param_5[uVar19].field_0x8;
          fVar8 = *(float *)&param_5[uVar17].field_0x4;
          fVar9 = *(float *)&param_5[uVar19].field_0x4;
          uVar35 = uVar35 + 1;
          pfVar38 = pfVar38 + 0x10;
          param_6 = param_6 + 1;
          *(float *)(lVar37 + -8 + (longlong)pfVar36) =
               fVar1 * *(float *)(param_5 + uVar17) + fVar2 * *(float *)(param_5 + uVar18) +
               fVar5 * *(float *)(param_5 + uVar19);
          *(float *)(lVar37 + -4 + (longlong)pfVar36) =
               fVar2 * fVar6 + fVar1 * fVar8 + fVar5 * fVar9;
          *(float *)(lVar37 + (longlong)pfVar36) = fVar2 * fVar4 + fVar1 * fVar3 + fVar5 * fVar7;
          pfVar36 = pfVar36 + 3;
          local_c8 = local_c8 + -1;
          lVar32 = lStack_88;
          FVar33 = local_b0;
          bVar25 = bVar34;
          bVar22 = bVar23;
        } while (local_c8 != 0);
      }
      bVar34 = true;
      goto LAB_14dc25634;
    }
  }
  bVar34 = false;
LAB_14dc25634:
  if (bVar22) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  if (bVar39) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar34;
}

