// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 147510d20

UScriptStruct * __cdecl FAnimSubsystemInstance_NodeRelevancy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy,
                         (UObject *)pUVar1,L"AnimSubsystemInstance_NodeRelevancy");
  }
  return Z_Registration_Info_UScriptStruct_FAnimSubsystemInstance_NodeRelevancy.OuterSingleton;
}

// Initialize_WorkerThread @ 147510d60

void __thiscall
FAnimSubsystemInstance_NodeRelevancy::Initialize_WorkerThread
          (FAnimSubsystemInstance_NodeRelevancy *this)

{
  TMap<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->NodeTrackers;
  bVar3 = 1 < *(int *)&(this->NodeTrackers).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker>,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker>,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->NodeTrackers).field_0xc;
  *(undefined4 *)&(this->NodeTrackers).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NodeTrackers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeTrackers).field_0x34 = 0;
  iVar2 = *(int *)&(this->NodeTrackers).field_0x2c;
  *(undefined4 *)&(this->NodeTrackers).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->NodeTrackers).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NodeTrackers).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->NodeTrackers).field_0x48 = 1;
    TSet<TTuple<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker>,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker>,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// ~FAnimSubsystemInstance_NodeRelevancy @ 1475331b0

void __thiscall
FAnimSubsystemInstance_NodeRelevancy::~FAnimSubsystemInstance_NodeRelevancy
          (FAnimSubsystemInstance_NodeRelevancy *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->NodeInitTrackers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NodeInitTrackers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FAnimNode_Base_const_*,enum_EAnimNodeInitializationStatus>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAnimNode_Base_const_*,enum_EAnimNodeInitializationStatus>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->NodeInitTrackers);
  *(undefined4 *)&(this->NodeTrackers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NodeTrackers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeTrackers);
  this->_padding_ = (longlong)&___7FAnimSubsystemInstance__6B_;
  return;
}

// GetNodeInitializationStatus @ 14755d940

EAnimNodeInitializationStatus __thiscall
FAnimSubsystemInstance_NodeRelevancy::GetNodeInitializationStatus
          (FAnimSubsystemInstance_NodeRelevancy *this,FAnimNode_Base *param_1)

{
  TTuple<FAnimNode_Base_const_*,EAnimNodeInitializationStatus> *pTVar1;
  
  pTVar1 = TSet<TTuple<FAnimNode_Base_const_*,enum_EAnimNodeInitializationStatus>,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,enum_EAnimNodeInitializationStatus,0>,FDefaultSetAllocator>
           ::Find(&this->NodeInitTrackers,param_1);
  if (pTVar1 != (TTuple<FAnimNode_Base_const_*,EAnimNodeInitializationStatus> *)0x0) {
    return *(EAnimNodeInitializationStatus *)&pTVar1->field_0x8;
  }
  return NotUpdated;
}

// GetNodeRelevancy @ 14755d970

FAnimNodeRelevancyStatus __thiscall
FAnimSubsystemInstance_NodeRelevancy::GetNodeRelevancy
          (FAnimSubsystemInstance_NodeRelevancy *this,FAnimNode_Base *param_1)

{
  FTracker *pFVar1;
  FAnimNode_Base *in_R8;
  
  pFVar1 = TMapBase<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,0>_>
           ::Find((TMapBase<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,0>_>
                   *)&this->NodeTrackers,in_R8);
  if (pFVar1 != (FTracker *)0x0) {
    param_1->_padding_ = (longlong)pFVar1->Status;
    return (FAnimNodeRelevancyStatus)param_1;
  }
  param_1->_padding_ = 0;
  return (FAnimNodeRelevancyStatus)param_1;
}

// UpdateNodeInitializationStatus @ 1475822f0

EAnimNodeInitializationStatus __thiscall
FAnimSubsystemInstance_NodeRelevancy::UpdateNodeInitializationStatus
          (FAnimSubsystemInstance_NodeRelevancy *this,FAnimationUpdateContext *param_1,
          FAnimNode_Base *param_2)

{
  TMap<FAnimNode_Base_const_*,EAnimNodeInitializationStatus,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,EAnimNodeInitializationStatus,0>_>
  *this_00;
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 *puVar4;
  int local_res8 [4];
  FAnimNode_Base *local_res18;
  FAnimNode_Base **local_res20;
  
  this_00 = &this->NodeInitTrackers;
  uVar3 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  if (*(int *)&(this->NodeInitTrackers).field_0x8 != *(int *)&(this->NodeInitTrackers).field_0x34) {
    puVar4 = *(undefined1 **)&(this->NodeInitTrackers).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->NodeInitTrackers).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->NodeInitTrackers).field_0x48 - 1U & uVar3)
                              * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)this_00 + (longlong)iVar1 * 0x18;
        if (*(FAnimNode_Base **)(*(longlong *)this_00 + (longlong)iVar1 * 0x18) == param_2) {
          if (lVar2 != 0) goto LAB_1475823b7;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x10);
      } while (iVar1 != -1);
    }
  }
  local_res20 = &local_res18;
  local_res18 = param_2;
  TSet<TTuple<FAnimNode_Base_const_*,enum_EAnimNodeInitializationStatus>,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,enum_EAnimNodeInitializationStatus,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FAnimNode_Base_const_*_&&>_>
            (this_00,(uint)local_res8,(TKeyInitializer<FAnimNode_Base_const_*_&&> *)(ulonglong)uVar3
             ,(bool *)&local_res20);
  lVar2 = *(longlong *)this_00 + (longlong)local_res8[0] * 0x18;
LAB_1475823b7:
  if (*(int *)(lVar2 + 8) == 0) {
    *(undefined4 *)(lVar2 + 8) = 1;
    return InitialUpdate;
  }
  *(undefined4 *)(lVar2 + 8) = 2;
  return Updated;
}

// UpdateNodeRelevancy @ 1475823f0

FAnimNodeRelevancyStatus __thiscall
FAnimSubsystemInstance_NodeRelevancy::UpdateNodeRelevancy
          (FAnimSubsystemInstance_NodeRelevancy *this,FAnimationUpdateContext *param_1,
          FAnimNode_Base *param_2)

{
  TMap<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,0>_>
  *this_00;
  longlong lVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong in_R9;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 *local_res18 [2];
  
  this_00 = &this->NodeTrackers;
  uVar5 = ((uint)(in_R9 >> 0x14) & 0xffff ^ (uint)(in_R9 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (*(int *)&(this->NodeTrackers).field_0x8 != *(int *)&(this->NodeTrackers).field_0x34) {
    puVar6 = *(undefined1 **)&(this->NodeTrackers).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->NodeTrackers).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->NodeTrackers).field_0x48 - 1U & uVar5) * 4
                    );
    if (iVar3 != -1) {
      do {
        lVar7 = *(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x28;
        if (*(ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x28) == in_R9) {
          if (lVar7 != 0) goto LAB_1475824b7;
          break;
        }
        iVar3 = *(int *)(lVar7 + 0x20);
      } while (iVar3 != -1);
    }
  }
  local_res18[0] = local_res10;
  TSet<TTuple<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker>,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FAnimNode_Base_const_*_&&>_>
            ((TSet<TTuple<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker>,TDefaultMapHashableKeyFuncs<FAnimNode_Base_const_*,FAnimSubsystemInstance_NodeRelevancy::FTracker,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res8,
             (TKeyInitializer<FAnimNode_Base_const_*_&&> *)(ulonglong)uVar5,(bool *)local_res18);
  lVar7 = *(longlong *)&this_00->field_0x0 + (longlong)local_res8[0] * 0x28;
LAB_1475824b7:
  if ((*(short *)(lVar7 + 0x10) != -1) && (*(longlong *)(lVar7 + 8) != -1)) {
    if (*(short *)(lVar7 + 0x10) == *(short *)(param_2->_padding_ + 0x5b0)) goto LAB_14758250c;
    sVar2 = *(short *)(lVar7 + 0x10) + 1;
    sVar4 = 0;
    if (sVar2 != -1) {
      sVar4 = sVar2;
    }
    if (((sVar4 != -1) && (GFrameCounter != 0xffffffffffffffff)) &&
       (sVar4 == *(short *)(param_2->_padding_ + 0x5b0))) goto LAB_14758250c;
  }
  *(undefined4 *)(lVar7 + 0x1c) = 0;
LAB_14758250c:
  lVar1 = param_2->_padding_;
  if (((*(short *)(lVar7 + 0x10) == -1) || (*(longlong *)(lVar7 + 8) == -1)) ||
     ((*(short *)(lVar7 + 0x10) != *(short *)(lVar1 + 0x5b0) ||
      (*(longlong *)(lVar7 + 8) != *(longlong *)(lVar1 + 0x5a8))))) {
    *(undefined2 *)(lVar7 + 0x10) = *(undefined2 *)(lVar1 + 0x5b0);
    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar1 + 0x5a8);
    *(undefined2 *)(lVar7 + 0x12) = *(undefined2 *)(lVar1 + 0x5b2);
    *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(lVar7 + 0x1c);
    *(int *)(lVar7 + 0x1c) = (int)param_2[2]._padding_;
  }
  param_1->_padding_ = *(longlong *)(lVar7 + 0x18);
  return (FAnimNodeRelevancyStatus)param_1;
}

