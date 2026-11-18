// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 68

// FindOrAddTrack<unsigned_int> @ 14a2155d0

TSharedPtr<FSampleTrack<unsigned_int>,1> * __thiscall
FSampleTrackContainer::FindOrAddTrack<unsigned_int>
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<unsigned_int>,1> *__return_storage_ptr__,FName *param_1,
          ETrackType param_2,UScriptStruct *param_3)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FSampleTrack<unsigned_int>,1> *pTVar6;
  TSharedPtr<FSampleTrackBase,1> *pTVar7;
  TSharedPtr<FSampleTrackBase,1> local_e8;
  FSampleTrackBase local_d8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  memset(&local_d8,0,200);
  FSampleTrackBase::FSampleTrackBase(&local_d8);
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_d8._padding_ = (longlong)&___7FSampleTrackBase__6B_;
  if (local_d8.AtlasStorage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AtlasStorage.AllocatorInstance.Data);
  }
  if (local_d8.TimeIndicesStorage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.TimeIndicesStorage.AllocatorInstance.Data);
  }
  if (local_d8.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Names.AllocatorInstance.Data);
  }
  if ((longlong *)local_d8._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_d8._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_d8._padding_ + 8))(local_d8._padding_,1);
    }
  }
  if (param_2 != ETrackType_Uint32) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FSampleTrack<T>().GetTrackType() == InTrackType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrackContainer.h"
                       ,0x5b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FSampleTrack<unsigned_int>,1> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pTVar7 = FindOrAddTrack(this,&local_e8,param_1,param_2,param_3);
  __return_storage_ptr__->Object = (FSampleTrack<unsigned_int> *)pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FindOrAddTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> @ 14a215730

TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1> * __thiscall
FSampleTrackContainer::FindOrAddTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1>
          *__return_storage_ptr__,FName *param_1,ETrackType param_2,UScriptStruct *param_3)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1> *pTVar6;
  TSharedPtr<FSampleTrackBase,1> *pTVar7;
  TSharedPtr<FSampleTrackBase,1> local_e8;
  FSampleTrackBase local_d8;
  void *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  memset(&local_d8,0,200);
  FSampleTrackBase::FSampleTrackBase(&local_d8);
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_d8._padding_ =
       (longlong)
       &
       ___7__FSampleTrackShared_V__TArray_UFRigElementKey__V__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
  ;
  DestructItems<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)0x0,0);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  local_d8._padding_ = (longlong)&___7FSampleTrackBase__6B_;
  if (local_d8.AtlasStorage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AtlasStorage.AllocatorInstance.Data);
  }
  if (local_d8.TimeIndicesStorage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.TimeIndicesStorage.AllocatorInstance.Data);
  }
  if (local_d8.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Names.AllocatorInstance.Data);
  }
  if ((longlong *)local_d8._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_d8._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_d8._padding_ + 8))(local_d8._padding_,1);
    }
  }
  if (param_2 != ETrackType_ElementKeyArray) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FSampleTrack<T>().GetTrackType() == InTrackType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrackContainer.h"
                       ,0x5b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1> *)
               (*pcVar4)();
      return pTVar6;
    }
  }
  pTVar7 = FindOrAddTrack(this,&local_e8,param_1,param_2,param_3);
  __return_storage_ptr__->Object =
       (FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *)pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FindOrAddTrack<float> @ 14a398340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FSampleTrack<float>,1> * __thiscall
FSampleTrackContainer::FindOrAddTrack<float>
          (FSampleTrackContainer *this,TSharedPtr<FSampleTrack<float>,1> *__return_storage_ptr__,
          FName *param_1,ETrackType param_2,UScriptStruct *param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<FSampleTrack<float>,1> *pTVar6;
  TTuple<FName,int> *pTVar7;
  TSharedPtr<FSampleTrackBase,1> *pTVar8;
  uint *puVar9;
  FSharedReferencer<1> FVar10;
  FSampleTrack<float> *pFVar11;
  TSharedPtr<FSampleTrackBase,1> local_118;
  undefined **local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b7;
  undefined2 local_b3;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  TSharedPtr<FSampleTrackBase,1> local_40;
  
  local_f0 = 0;
  local_b7 = 0;
  local_b3 = 0;
  local_b1 = 0;
  local_98 = 0;
  local_78 = 0;
  local_70 = 0;
  local_48 = 0;
  local_b8 = 0;
  local_c8 = 0xffffffffffffffff;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_58 = 0;
  local_50 = 0;
  local_108 = &___7FSampleTrackBase__6B_;
  local_100 = 0;
  uStack_f8 = 0;
  local_e8 = ___xmm_ffffffffffffffff0000000000000000;
  uStack_e0 = _UNK_15076cb68;
  local_68 = 0;
  uStack_60 = 0;
  local_d8 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_d0 = _UNK_15060db28;
  if ((param_2 != ETrackType_Float) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FSampleTrack<T>().GetTrackType() == InTrackType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Tracks\\SampleTrackContainer.h"
                         ,0x5b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FSampleTrack<float>,1> *)(*pcVar3)();
    return pTVar6;
  }
  pTVar7 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->NameToIndex,*param_1);
  puVar9 = (uint *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<FName,int> *)0x0) {
    puVar9 = (uint *)0x0;
  }
  if (puVar9 == (uint *)0x0) {
LAB_14a3984c0:
    pFVar11 = (FSampleTrack<float> *)0x0;
    local_118.Object = (FSampleTrackBase *)0x0;
    local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar1 = *puVar9;
    if (((int)uVar1 < 0) || ((this->Tracks).ArrayNum <= (int)uVar1)) goto LAB_14a3984c0;
    uVar5 = 0;
    if ((int)uVar1 < (this->Tracks).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FSampleTrack<float>,1> *)(*pcVar3)();
      return pTVar6;
    }
    pFVar2 = (this->Tracks).AllocatorInstance.Data;
    FVar10.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar1 * 0x10 + 8);
    pFVar11 = *(FSampleTrack<float> **)(pFVar2 + (longlong)(int)uVar1 * 0x10);
    if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_118.SharedReferenceCount.ReferenceController = FVar10.ReferenceController;
    if (pFVar11 != (FSampleTrack<float> *)0x0) goto LAB_14a39852d;
  }
  FVar10.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
  pTVar8 = AddTrack(this,&local_40,param_1,param_2,param_3);
  if (&local_118 != pTVar8) {
    local_118.Object = pTVar8->Object;
    pTVar8->Object = (FSampleTrackBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_118.SharedReferenceCount,&pTVar8->SharedReferenceCount);
    FVar10.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
    pFVar11 = (FSampleTrack<float> *)local_118.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
LAB_14a39852d:
  __return_storage_ptr__->Object = pFVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar10.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  return __return_storage_ptr__;
}

// FSampleTrackContainer @ 14a3b8240

FSampleTrackContainer * __thiscall
FSampleTrackContainer::FSampleTrackContainer(FSampleTrackContainer *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->NameToIndex = 0;
  *(undefined8 *)&(this->NameToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->NameToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->NameToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->NameToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->NameToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->NameToIndex).field_0x48 = 0;
  (this->Tracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tracks).ArrayNum = 0;
  (this->Tracks).ArrayMax = 0;
  this->bForceToUseCompression = false;
  FSampleTrackIndex::MakeSingleton(&this->TimeSampleTrackIndex);
  return this;
}

// ~FSampleTrackContainer @ 14a3bcd70

void __thiscall FSampleTrackContainer::~FSampleTrackContainer(FSampleTrackContainer *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<int> FVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  longlong *plVar6;
  
  FVar3 = (this->TimeSampleTrackIndex).Samples.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  DestructItems<TSharedPtr<FSampleTrackBase,1>,int>
            ((TSharedPtr<FSampleTrackBase,1> *)(this->Tracks).AllocatorInstance.Data,
             (this->Tracks).ArrayNum);
  pFVar4 = (this->Tracks).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->NameToIndex).field_0x48 = 0;
  pvVar5 = *(void **)&(this->NameToIndex).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameToIndex);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  return;
}

// AddBoolArrayTrack @ 14a3da3d0

TSharedPtr<FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>,1> * __thiscall
FSampleTrackContainer::AddBoolArrayTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>,1>
          *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedPtr<FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 =
         &___7__FSampleTrack_V__TArray__NV__TSizedDefaultAllocator__0CA_______6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>,1>::
  TSharedPtr<FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>,1><FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddBoolTrack @ 14a3da700

TSharedPtr<FSampleTrack<bool>,1> * __thiscall
FSampleTrackContainer::AddBoolTrack
          (FSampleTrackContainer *this,TSharedPtr<FSampleTrack<bool>,1> *__return_storage_ptr__,
          FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<bool> *this_00;
  TSharedPtr<FSampleTrack<bool>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<bool>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<bool> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 = &___7__FSampleTrack__N__6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<bool>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<bool>,1>::TSharedPtr<FSampleTrack<bool>,1><FSampleTrack<bool>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddFloatArrayTrack @ 14a3de2c0

TSharedPtr<FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>,1> * __thiscall
FSampleTrackContainer::AddFloatArrayTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>,1>
          *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedPtr<FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 =
         &___7__FSampleTrack_V__TArray_MV__TSizedDefaultAllocator__0CA_______6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>,1> *)(*pcVar1)()
      ;
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>,1>::
  TSharedPtr<FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>,1><FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddFloatTrack @ 14a3de3c0

TSharedPtr<FSampleTrack<float>,1> * __thiscall
FSampleTrackContainer::AddFloatTrack
          (FSampleTrackContainer *this,TSharedPtr<FSampleTrack<float>,1> *__return_storage_ptr__,
          FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<float> *this_00;
  TSharedPtr<FSampleTrack<float>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<float>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<float> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 = &___7__FSampleTrack_M__6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<float>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<float>,1>::TSharedPtr<FSampleTrack<float>,1><FSampleTrack<float>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddInt32ArrayTrack @ 14a3de690

TSharedPtr<FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>,1> * __thiscall
FSampleTrackContainer::AddInt32ArrayTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>,1>
          *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedPtr<FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 =
         &___7__FSampleTrack_V__TArray_HV__TSizedDefaultAllocator__0CA_______6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>,1>::
  TSharedPtr<FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>,1><FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddInt32Track @ 14a3de790

TSharedPtr<FSampleTrack<int>,1> * __thiscall
FSampleTrackContainer::AddInt32Track
          (FSampleTrackContainer *this,TSharedPtr<FSampleTrack<int>,1> *__return_storage_ptr__,
          FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<int> *this_00;
  TSharedPtr<FSampleTrack<int>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<int>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<int> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 = &___7__FSampleTrack_H__6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<int>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<int>,1>::TSharedPtr<FSampleTrack<int>,1><FSampleTrack<int>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddLinearColorArrayTrack @ 14a3deea0

TSharedPtr<FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>,1> * __thiscall
FSampleTrackContainer::AddLinearColorArrayTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>,1>
          *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedPtr<FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 =
         &___7__FSampleTrack_V__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA_______6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>,1> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>,1>::
  TSharedPtr<FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>,1><FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddLinearColorTrack @ 14a3defa0

TSharedPtr<FSampleTrack<FLinearColor>,1> * __thiscall
FSampleTrackContainer::AddLinearColorTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<FLinearColor>,1> *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<FLinearColor> *this_00;
  TSharedPtr<FSampleTrack<FLinearColor>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<FLinearColor>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<FLinearColor> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 = &___7__FSampleTrack_UFLinearColor____6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<FLinearColor>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<FLinearColor>,1>::
  TSharedPtr<FSampleTrack<FLinearColor>,1><FSampleTrack<FLinearColor>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddNameArrayTrack @ 14a3df570

TSharedPtr<FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>,1> * __thiscall
FSampleTrackContainer::AddNameArrayTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>,1>
          *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedPtr<FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 =
         &___7__FSampleTrack_V__TArray_VFName__V__TSizedDefaultAllocator__0CA_______6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>,1> *)(*pcVar1)()
      ;
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>,1>::
  TSharedPtr<FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>,1><FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddNameTrack @ 14a3df670

TSharedPtr<FSampleTrack<FName>,1> * __thiscall
FSampleTrackContainer::AddNameTrack
          (FSampleTrackContainer *this,TSharedPtr<FSampleTrack<FName>,1> *__return_storage_ptr__,
          FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<FName> *this_00;
  TSharedPtr<FSampleTrack<FName>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<FName>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<FName> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 = &___7__FSampleTrack_VFName____6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<FName>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<FName>,1>::TSharedPtr<FSampleTrack<FName>,1><FSampleTrack<FName>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddQuatArrayTrack @ 14a3df770

TSharedPtr<FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>,1> * __thiscall
FSampleTrackContainer::AddQuatArrayTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>,1>
          *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedPtr<FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>_>
  local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 =
         &___7__FSampleTrack_V__TArray_U__TQuat_M_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>,1>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>,1>::
  TSharedPtr<FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>,1><FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddQuatTrack @ 14a3df870

TSharedPtr<FSampleTrack<UE::Math::TQuat<float>_>,1> * __thiscall
FSampleTrackContainer::AddQuatTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<UE::Math::TQuat<float>_>,1> *__return_storage_ptr__,FName *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<UE::Math::TQuat<float>_> *this_00;
  TSharedPtr<FSampleTrack<UE::Math::TQuat<float>_>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<UE::Math::TQuat<float>_>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<UE::Math::TQuat<float>_> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 = &___7__FSampleTrack_U__TQuat_M_Math_UE____6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<UE::Math::TQuat<float>_>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<UE::Math::TQuat<float>_>,1>::
  TSharedPtr<FSampleTrack<UE::Math::TQuat<float>_>,1><FSampleTrack<UE::Math::TQuat<float>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddRigComponentKeyArrayTrack @ 14a3dffe0

TSharedPtr<FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>,1> * __thiscall
FSampleTrackContainer::AddRigComponentKeyArrayTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>,1>
          *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedPtr<FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 =
         &___7__FSampleTrack_V__TArray_UFRigComponentKey__V__TSizedDefaultAllocator__0CA_______6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>,1> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>,1>::
  TSharedPtr<FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>,1><FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddRigComponentKeyTrack @ 14a3e00e0

TSharedPtr<FSampleTrack<FRigComponentKey>,1> * __thiscall
FSampleTrackContainer::AddRigComponentKeyTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<FRigComponentKey>,1> *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<FRigComponentKey> *this_00;
  TSharedPtr<FSampleTrack<FRigComponentKey>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<FRigComponentKey>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<FRigComponentKey> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 = &___7__FSampleTrack_UFRigComponentKey____6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<FRigComponentKey>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<FRigComponentKey>,1>::
  TSharedPtr<FSampleTrack<FRigComponentKey>,1><FSampleTrack<FRigComponentKey>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddRigElementKeyArrayTrack @ 14a3e01e0

TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1> * __thiscall
FSampleTrackContainer::AddRigElementKeyArrayTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1>
          *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 =
         &___7__FSampleTrack_V__TArray_UFRigElementKey__V__TSizedDefaultAllocator__0CA_______6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1>::
  TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1><FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddRigElementKeyTrack @ 14a3e02e0

TSharedPtr<FSampleTrack<FRigElementKey>,1> * __thiscall
FSampleTrackContainer::AddRigElementKeyTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<FRigElementKey>,1> *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<FRigElementKey> *this_00;
  TSharedPtr<FSampleTrack<FRigElementKey>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<FRigElementKey>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<FRigElementKey> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 = &___7__FSampleTrack_UFRigElementKey____6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<FRigElementKey>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<FRigElementKey>,1>::
  TSharedPtr<FSampleTrack<FRigElementKey>,1><FSampleTrack<FRigElementKey>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddStringArrayTrack @ 14a3e4e80

TSharedPtr<FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>,1> * __thiscall
FSampleTrackContainer::AddStringArrayTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>,1>
          *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedPtr<FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 =
         &___7__FSampleTrack_V__TArray_VFString__V__TSizedDefaultAllocator__0CA_______6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>,1> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>,1>::
  TSharedPtr<FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>,1><FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddStringTrack @ 14a3e4f80

TSharedPtr<FSampleTrack<FString>,1> * __thiscall
FSampleTrackContainer::AddStringTrack
          (FSampleTrackContainer *this,TSharedPtr<FSampleTrack<FString>,1> *__return_storage_ptr__,
          FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<FString> *this_00;
  TSharedPtr<FSampleTrack<FString>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<FString>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<FString> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 = &___7__FSampleTrack_VFString____6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<FString>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<FString>,1>::TSharedPtr<FSampleTrack<FString>,1><FSampleTrack<FString>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddStructArrayTrack @ 14a3e5080

TSharedPtr<FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>,1> * __thiscall
FSampleTrackContainer::AddStructArrayTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>,1>
          *__return_storage_ptr__,FName *param_1,UScriptStruct *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>,1> *pTVar3;
  FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_> *this_00;
  TRawPtrProxy<FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_28;
  
  if ((param_2 == (UScriptStruct *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InScriptStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackContainer.cpp"
                         ,0x23b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedPtr<FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>,1> *)
             (*pcVar1)();
    return pTVar3;
  }
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 =
         &___7__FSampleTrack_V__TArray_UFInstancedStruct__V__TSizedDefaultAllocator__0CA_______6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>,1> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>,1>::
  TSharedPtr<FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>,1><FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>_>
            (__return_storage_ptr__,&local_res10);
  if ((__return_storage_ptr__->Object ==
       (FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedPtr<FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>,1> *)
             (*pcVar1)();
    return pTVar3;
  }
  *(UScriptStruct **)&__return_storage_ptr__->Object->field_0x48 = param_2;
  local_28.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_28,true);
  return __return_storage_ptr__;
}

// AddStructTrack @ 14a3e51e0

TSharedPtr<FSampleTrack<FInstancedStruct>,1> * __thiscall
FSampleTrackContainer::AddStructTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<FInstancedStruct>,1> *__return_storage_ptr__,FName *param_1,
          UScriptStruct *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FSampleTrack<FInstancedStruct>,1> *pTVar3;
  FSampleTrack<FInstancedStruct> *this_00;
  TRawPtrProxy<FSampleTrack<FInstancedStruct>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_28;
  
  if ((param_2 == (UScriptStruct *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InScriptStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackContainer.cpp"
                         ,0x1de,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedPtr<FSampleTrack<FInstancedStruct>,1> *)(*pcVar1)();
    return pTVar3;
  }
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<FInstancedStruct> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 = &___7__FSampleTrack_UFInstancedStruct____6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<FInstancedStruct>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<FInstancedStruct>,1>::
  TSharedPtr<FSampleTrack<FInstancedStruct>,1><FSampleTrack<FInstancedStruct>_>
            (__return_storage_ptr__,&local_res10);
  if ((__return_storage_ptr__->Object == (FSampleTrack<FInstancedStruct> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedPtr<FSampleTrack<FInstancedStruct>,1> *)(*pcVar1)();
    return pTVar3;
  }
  *(UScriptStruct **)&__return_storage_ptr__->Object->field_0x48 = param_2;
  local_28.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_28,true);
  return __return_storage_ptr__;
}

// AddTimeSample @ 14a3e5cc0

int __thiscall
FSampleTrackContainer::AddTimeSample(FSampleTrackContainer *this,float param_1,float param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  float local_res10 [2];
  float local_res18 [2];
  FName local_res20;
  FName local_48;
  TSharedPtr<FSampleTrack<float>,1> local_40;
  TSharedPtr<FSampleTrack<float>,1> local_30 [2];
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  FLazyName::Resolve(&AbsoluteTimeName);
  FindOrAddTrack<float>(this,local_30,&local_res20,ETrackType_Float,(UScriptStruct *)0x0);
  FLazyName::Resolve(&DeltaTimeName);
  FindOrAddTrack<float>(this,&local_40,&local_48,ETrackType_Float,(UScriptStruct *)0x0);
  if (local_30[0].Object == (FSampleTrack<float> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  uVar2 = __real_38d1b717;
  iVar4 = *(int *)&(local_30[0].Object)->field_0x98;
  (**(code **)(*(longlong *)local_30[0].Object + 0xd8))
            (local_30[0].Object,local_res10,__real_38d1b717);
  if (local_40.Object == (FSampleTrack<float> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  (**(code **)(*(longlong *)local_40.Object + 0xd8))(local_40.Object,local_res18,uVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30[0].SharedReferenceCount.ReferenceController);
  return iVar4;
}

// AddTimeSampleFromDeltaTime @ 14a3e5e20

int __thiscall
FSampleTrackContainer::AddTimeSampleFromDeltaTime(FSampleTrackContainer *this,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = GetLastAbsoluteTime(this);
  fVar3 = GetLastDeltaTime(this);
  iVar1 = AddTimeSample(this,fVar2 + fVar3,param_1);
  return iVar1;
}

// AddTrack @ 14a3e6120

void __thiscall
FSampleTrackContainer::AddTrack
          (FSampleTrackContainer *this,TSharedPtr<FSampleTrackBase,1> *param_1,bool param_2)

{
  int *piVar1;
  ETrackType EVar2;
  FSampleTrackBase *pFVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  TSharedPtr<FSampleTrackBase,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  FString *pFVar16;
  FString *pFVar17;
  FName *pFVar18;
  ForAnyElementType FVar19;
  undefined1 *puVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  uint uVar23;
  int local_108 [2];
  ForAnyElementType local_100;
  undefined8 local_f8;
  FName local_f0;
  TSharedPtr<FSampleTrackBase,1> local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  void *local_d0;
  int local_c8;
  FName local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FScriptContainerElement *local_88;
  int *local_80;
  void *local_78 [2];
  FString local_68;
  void *local_58 [2];
  TSharedPtr<FSampleTrackBase,1> local_48;
  
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 0;
  if ((param_1->Object == (FSampleTrackBase *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  cVar12 = (**(code **)(param_1->Object->_padding_ + 0x48))();
  if ((cVar12 != '\0') && (param_2)) {
    if ((param_1->Object == (FSampleTrackBase *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (**(code **)(param_1->Object->_padding_ + 0x50))(param_1->Object,&local_d0);
    uVar23 = 0;
    if (0 < local_c8) {
      lVar22 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar23 < local_c8) {
          uVar14 = ~uVar23 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        EVar2 = *(ETrackType *)((longlong)local_d0 + lVar22);
        if ((param_1->Object == (FSampleTrackBase *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar16 = (FString *)
                  (**(code **)(param_1->Object->_padding_ + 0x58))(param_1->Object,local_78,uVar23);
        ::FString::ConcatCF(&local_b8,L"ChildTrack_",pFVar16);
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_b8.Data.ArrayNum != 0) {
          FVar19.Data = local_b8.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_f0,(wchar_t *)FVar19.Data);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_78[0] != (void *)0x0) {
          FMemory::Free(local_78[0]);
        }
        if ((param_1->Object == (FSampleTrackBase *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((param_1->Object->Names).ArrayNum != 0) {
          if ((param_1->Object == (FSampleTrackBase *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar16 = (FString *)
                    (**(code **)(param_1->Object->_padding_ + 0x58))
                              (param_1->Object,local_58,uVar23);
          if ((param_1->Object == (FSampleTrackBase *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar3 = param_1->Object;
          iVar13 = (pFVar3->Names).ArrayNum;
          if (iVar13 == 0) {
            pFVar18 = &InvalidName;
          }
          else {
            if ((iVar13 < 1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar18 = (FName *)(pFVar3->Names).AllocatorInstance.Data;
          }
          pFVar17 = ::FName::ToString(pFVar18,&local_68);
          ::FString::ConcatFC(&local_98,pFVar17,L"_");
          ::FString::ConcatFF(&local_a8,&local_98,pFVar16);
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_a8.Data.ArrayNum != 0) {
            FVar19.Data = local_a8.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_c0,(wchar_t *)FVar19.Data);
          local_f0 = local_c0;
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58[0] != (void *)0x0) {
            FMemory::Free(local_58[0]);
          }
        }
        MakeTrack(&local_e8,EVar2);
        pFVar3 = local_e8.Object;
        if ((local_e8.Object == (FSampleTrackBase *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        (pFVar3->Names).ArrayNum = 0;
        if ((pFVar3->Names).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&(pFVar3->Names).AllocatorInstance,0,&(pFVar3->Names).ArrayMax);
        }
        pFVar3 = local_e8.Object;
        if ((local_e8.Object == (FSampleTrackBase *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar18 = (FName *)(pFVar3->Names).AllocatorInstance.Data;
        if (((pFVar18 <= &local_f0) && (&local_f0 < pFVar18 + (pFVar3->Names).ArrayMax)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar13 = (pFVar3->Names).ArrayNum;
        piVar1 = &(pFVar3->Names).ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&(pFVar3->Names).AllocatorInstance,piVar1);
        }
        FVar10.ReferenceController = local_e8.SharedReferenceCount.ReferenceController;
        (pFVar3->Names).ArrayNum = iVar13 + 1;
        local_48.Object = local_e8.Object;
        local_48.SharedReferenceCount.ReferenceController =
             local_e8.SharedReferenceCount.ReferenceController;
        *(FName *)((pFVar3->Names).AllocatorInstance.Data + (longlong)iVar13 * 8) = local_f0;
        if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        AddTrack(this,&local_48,true);
        if ((pFVar3 == (FSampleTrackBase *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_108[0] = pFVar3->TrackIndex;
        if (((local_100.Data <= (FScriptContainerElement *)local_108) &&
            ((FScriptContainerElement *)local_108 < local_100.Data + (longlong)local_f8._4_4_ * 4))
           && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar13 = (int)local_f8;
        if ((int)local_f8 == local_f8._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_100,(int *)((longlong)&local_f8 + 4));
        }
        local_f8 = CONCAT44(local_f8._4_4_,iVar13 + 1);
        *(int *)(local_100.Data + (longlong)iVar13 * 4) = local_108[0];
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar10.ReferenceController);
        uVar23 = uVar23 + 1;
        lVar22 = lVar22 + 1;
      } while ((int)uVar23 < local_c8);
    }
    if (local_d0 != (void *)0x0) {
      FMemory::Free(local_d0);
    }
  }
  iVar13 = (this->Tracks).ArrayNum;
  if ((param_1->Object == (FSampleTrackBase *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  param_1->Object->TrackIndex = iVar13;
  if ((param_1->Object == (FSampleTrackBase *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  param_1->Object->Container = this;
  if ((param_1->Object == (FSampleTrackBase *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (**(code **)(param_1->Object->_padding_ + 0x88))(param_1->Object,&local_100);
  uVar23 = 0;
  lVar22 = 0;
  do {
    if ((param_1->Object == (FSampleTrackBase *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((param_1->Object->Names).ArrayNum <= (int)uVar23) {
      pTVar7 = (TSharedPtr<FSampleTrackBase,1> *)(this->Tracks).AllocatorInstance.Data;
      if (((pTVar7 <= param_1) && (param_1 < pTVar7 + (this->Tracks).ArrayMax)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar13 = (this->Tracks).ArrayNum;
      piVar1 = &(this->Tracks).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this->Tracks).AllocatorInstance,piVar1);
      }
      (this->Tracks).ArrayNum = iVar13 + 1;
      pFVar21 = (this->Tracks).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
      *(FSampleTrackBase **)pFVar21 = param_1->Object;
      pTVar8 = (param_1->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar21 + 8) = pTVar8;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_100.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    if ((param_1->Object == (FSampleTrackBase *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar3 = param_1->Object;
    uVar14 = 0;
    if ((int)uVar23 < (pFVar3->Names).ArrayNum) {
      uVar14 = ~uVar23 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar21 = (pFVar3->Names).AllocatorInstance.Data + lVar22;
    if (*(longlong *)pFVar21 != 0) {
      iVar13 = 3;
      while( true ) {
        lVar4 = *(longlong *)pFVar21;
        uVar14 = ::GetTypeHash((FNameEntryId)(uint)lVar4);
        if (*(int *)&(this->NameToIndex).field_0x8 == *(int *)&(this->NameToIndex).field_0x34)
        break;
        puVar5 = *(undefined1 **)&(this->NameToIndex).field_0x40;
        puVar20 = &(this->NameToIndex).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar20 = puVar5;
        }
        iVar15 = *(int *)(puVar20 +
                         (ulonglong)
                         (*(int *)&(this->NameToIndex).field_0x48 - 1U &
                         (int)((ulonglong)lVar4 >> 0x20) + uVar14) * 4);
        if (iVar15 == -1) break;
        lVar6 = *(longlong *)&(this->NameToIndex).field_0x0;
        while (*(longlong *)(lVar6 + (longlong)iVar15 * 0x14) != lVar4) {
          iVar15 = *(int *)(lVar6 + 0xc + (longlong)iVar15 * 0x14);
          if (iVar15 == -1) goto LAB_14a3e68b6;
        }
        if (iVar13 == 3) {
          local_d8 = *(undefined4 *)pFVar21;
          iVar13 = 4;
          *(longlong *)pFVar21 = CONCAT44(3,local_d8);
          uStack_d4 = 3;
        }
        else {
          *(int *)(pFVar21 + 4) = iVar13;
          iVar13 = iVar13 + 1;
        }
      }
LAB_14a3e68b6:
      if ((param_1->Object == (FSampleTrackBase *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_80 = &param_1->Object->TrackIndex;
      local_88 = pFVar21;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->NameToIndex,
                 (TPairInitializer<FName_const_&,int_const_&> *)&stack0x00000020,(bool *)&local_88);
    }
    uVar23 = uVar23 + 1;
    lVar22 = lVar22 + 8;
  } while( true );
}

// AddTrack @ 14a3e6a20

TSharedPtr<FSampleTrackBase,1> * __thiscall
FSampleTrackContainer::AddTrack
          (FSampleTrackContainer *this,TSharedPtr<FSampleTrackBase,1> *__return_storage_ptr__,
          FName *param_1,ETrackType param_2,UScriptStruct *param_3)

{
  int *piVar1;
  FSampleTrackBase *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<FSampleTrackBase,1> *pTVar7;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  MakeTrack(__return_storage_ptr__,param_2);
  if (__return_storage_ptr__->Object == (FSampleTrackBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FSampleTrackBase,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  (pFVar2->Names).ArrayNum = 0;
  if ((pFVar2->Names).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(pFVar2->Names).AllocatorInstance,0,&(pFVar2->Names).ArrayMax);
  }
  if (__return_storage_ptr__->Object == (FSampleTrackBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FSampleTrackBase,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  pFVar3 = (FName *)(pFVar2->Names).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (pFVar2->Names).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FSampleTrackBase,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  iVar6 = (pFVar2->Names).ArrayNum;
  piVar1 = &(pFVar2->Names).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(pFVar2->Names).AllocatorInstance,piVar1);
  }
  (pFVar2->Names).ArrayNum = iVar6 + 1;
  *(FName *)((pFVar2->Names).AllocatorInstance.Data + (longlong)iVar6 * 8) = *param_1;
  if (__return_storage_ptr__->Object == (FSampleTrackBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FSampleTrackBase,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object->ScriptStruct = param_3;
  local_18.Object = __return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddTransformArrayTrack @ 14a3e6bf0

TSharedPtr<FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>,1> *
__thiscall
FSampleTrackContainer::AddTransformArrayTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>,1>
          *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedPtr<FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>,1>
  *pTVar3;
  TRawPtrProxy<FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>_>
  local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 !=
      (FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 =
         &
         ___7__FSampleTrack_V__TArray_U__TTransform_M_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
    ;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>,1>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>,1>::
  TSharedPtr<FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>,1><FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddTransformTrack @ 14a3e7170

TSharedPtr<FSampleTrack<UE::Math::TTransform<float>_>,1> * __thiscall
FSampleTrackContainer::AddTransformTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<UE::Math::TTransform<float>_>,1> *__return_storage_ptr__,
          FName *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FComposedSampleTrack<UE::Math::TTransform<float>_> *this_00;
  TSharedPtr<FSampleTrack<UE::Math::TTransform<float>_>,1> *pTVar5;
  TRawPtrProxy<FComposedSampleTrack<UE::Math::TTransform<float>_>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(0xe8);
  if (this_00 == (FComposedSampleTrack<UE::Math::TTransform<float>_> *)0x0) {
    this_00 = (FComposedSampleTrack<UE::Math::TTransform<float>_> *)0x0;
  }
  else {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined1 *)&this_00->_padding_ = 1;
    (((TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)&this_00->_padding_)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    piVar1 = (int *)((longlong)&this_00->_padding_ + 4);
    *(int *)&this_00->_padding_ = 0;
    *piVar1 = 0;
    ((TArrayView<UE::Math::TTransform<float>,int> *)&this_00->_padding_)->DataPtr =
         (TTransform<float> *)0x0;
    *(int *)&this_00->_padding_ = 0;
    this_00->_padding_ = (longlong)&___7__FComposedSampleTrack_U__TTransform_M_Math_UE____6B_;
    (this_00->ChildTrackIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->ChildTrackIndices).ArrayNum = 0;
    (this_00->ChildTrackIndices).ArrayMax = 0;
    (this_00->ChildTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->ChildTracks).ArrayNum = 0;
    (this_00->ChildTracks).ArrayMax = 0;
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,1,(ForAnyElementType *)&this_00->_padding_,
                       (int *)&this_00->_padding_,piVar1);
    DefaultConstructItems<UE::Math::TTransform<float>,int>
              ((((TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)
                &this_00->_padding_)->AllocatorInstance).Data + (longlong)iVar4 * 0x30,1);
    UE::ControlRig::Internal::FSampleTrackShared<UE::Math::TTransform<float>_>::UpdateValueArrayView
              ((FSampleTrackShared<UE::Math::TTransform<float>_> *)this_00);
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FSampleTrack<UE::Math::TTransform<float>_>,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<UE::Math::TTransform<float>_>,1>::
  TSharedPtr<FSampleTrack<UE::Math::TTransform<float>_>,1><FComposedSampleTrack<UE::Math::TTransform<float>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddUint32ArrayTrack @ 14a3e72f0

TSharedPtr<FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,1> * __thiscall
FSampleTrackContainer::AddUint32ArrayTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,1>
          *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedPtr<FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 =
         &___7__FSampleTrack_V__TArray_IV__TSizedDefaultAllocator__0CA_______6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,1> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,1>::
  TSharedPtr<FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,1><FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddUint32Track @ 14a3e73f0

TSharedPtr<FSampleTrack<unsigned_int>,1> * __thiscall
FSampleTrackContainer::AddUint32Track
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<unsigned_int>,1> *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<unsigned_int> *this_00;
  TSharedPtr<FSampleTrack<unsigned_int>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<unsigned_int>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<unsigned_int> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 = &___7__FSampleTrack_I__6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<unsigned_int>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<unsigned_int>,1>::
  TSharedPtr<FSampleTrack<unsigned_int>,1><FSampleTrack<unsigned_int>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddVectorArrayTrack @ 14a3e85f0

TSharedPtr<FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>,1> *
__thiscall
FSampleTrackContainer::AddVectorArrayTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>,1>
          *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *this_00;
  TSharedPtr<FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>
  local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 =
         &
         ___7__FSampleTrack_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
    ;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>,1>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>,1>::
  TSharedPtr<FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>,1><FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// AddVectorTrack @ 14a3e8a30

TSharedPtr<FSampleTrack<UE::Math::TVector<float>_>,1> * __thiscall
FSampleTrackContainer::AddVectorTrack
          (FSampleTrackContainer *this,
          TSharedPtr<FSampleTrack<UE::Math::TVector<float>_>,1> *__return_storage_ptr__,
          FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<UE::Math::TVector<float>_> *this_00;
  TSharedPtr<FSampleTrack<UE::Math::TVector<float>_>,1> *pTVar3;
  TRawPtrProxy<FSampleTrack<UE::Math::TVector<float>_>_> local_res10;
  TSharedPtr<FSampleTrackBase,1> local_18;
  
  this_00 = ::operator_new(200);
  if (this_00 != (FSampleTrack<UE::Math::TVector<float>_> *)0x0) {
    FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this_00,param_1);
    *(undefined8 *)&this_00->field_0xa8 = 0;
    *(undefined8 *)&this_00->field_0xb0 = 0;
    *(undefined8 *)&this_00->field_0xb8 = 0;
    *(undefined4 *)&this_00->field_0xc0 = 0;
    *(undefined ***)this_00 = &___7__FSampleTrack_U__TVector_M_Math_UE____6B_;
    if ((((*(longlong *)&this_00->field_0x8 != 0) && (*(longlong *)&this_00->field_0x10 != 0)) &&
        (0 < *(int *)(*(longlong *)&this_00->field_0x10 + 8))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FSampleTrack<UE::Math::TVector<float>_>,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res10.Object = this_00;
  TSharedPtr<FSampleTrack<UE::Math::TVector<float>_>,1>::
  TSharedPtr<FSampleTrack<UE::Math::TVector<float>_>,1><FSampleTrack<UE::Math::TVector<float>_>_>
            (__return_storage_ptr__,&local_res10);
  local_18.Object = (FSampleTrackBase *)__return_storage_ptr__->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddTrack(this,&local_18,true);
  return __return_storage_ptr__;
}

// Compact @ 14a3f2c90

void __thiscall FSampleTrackContainer::Compact(FSampleTrackContainer *this,float param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48;
  undefined1 local_47 [47];
  
  RemoveInvalidTracks(this,false);
  RemoveRedundantTracks(this,false,param_1);
  MergeTypedTracks(this,false,param_1);
  uVar3 = __real_38d1b717;
  iVar1 = (this->Tracks).ArrayNum;
  pFVar5 = (this->Tracks).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (*(longlong *)pFVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar5 + 0xb8))(*(longlong **)pFVar5,0,uVar3);
    pFVar5 = pFVar5 + 0x10;
  }
  iVar1 = (this->Tracks).ArrayNum;
  pFVar5 = (this->Tracks).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (pFVar5 == pFVar6) break;
    if (*(longlong *)pFVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar5 + 0xb0))();
    pFVar5 = pFVar5 + 0x10;
  }
  iVar1 = (this->Tracks).ArrayNum;
  pFVar5 = (this->Tracks).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    if (pFVar5 == pFVar6) break;
    if (*(longlong *)pFVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar5 + 0xa0))(*(longlong **)pFVar5,0,param_1);
    pFVar5 = pFVar5 + 0x10;
  }
  UpdateNameToIndexMap(this);
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Shrink
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->NameToIndex);
  iVar1 = (this->Tracks).ArrayNum;
  pFVar5 = (this->Tracks).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar1) {
      local_48 = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_48);
    }
    if (pFVar5 == pFVar6) break;
    if (*(longlong *)pFVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar5 + 0x30))();
    pFVar5 = pFVar5 + 0x10;
  }
  iVar1 = (this->Tracks).ArrayNum;
  pFVar5 = (this->Tracks).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar1) {
      local_47[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_47);
    }
    if (pFVar5 == pFVar6) break;
    if (*(longlong *)pFVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar5 + 0x70))();
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// ConvertTracksToComplete @ 14a3feb80

void __thiscall FSampleTrackContainer::ConvertTracksToComplete(FSampleTrackContainer *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Tracks).ArrayNum;
  pFVar4 = (this->Tracks).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar4 + 0xb0))(*(longlong **)pFVar4,0);
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// ConvertTracksToSampled @ 14a3fec30

void __thiscall
FSampleTrackContainer::ConvertTracksToSampled(FSampleTrackContainer *this,float param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Tracks).ArrayNum;
  pFVar4 = (this->Tracks).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar4 + 0xb8))(*(longlong **)pFVar4,0,param_1);
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// EnableTrackAtlas @ 14a404eb0

void __thiscall FSampleTrackContainer::EnableTrackAtlas(FSampleTrackContainer *this,float param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Tracks).ArrayNum;
  pFVar4 = (this->Tracks).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar4 + 0xa0))(*(longlong **)pFVar4,0,param_1);
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// FindOrAddTrack @ 14a40c4b0

TSharedPtr<FSampleTrackBase,1> * __thiscall
FSampleTrackContainer::FindOrAddTrack
          (FSampleTrackContainer *this,TSharedPtr<FSampleTrackBase,1> *__return_storage_ptr__,
          FName *param_1,ETrackType param_2,UScriptStruct *param_3)

{
  int iVar1;
  TTuple<FName,int> *pTVar2;
  TSharedPtr<FSampleTrackBase,1> *pTVar3;
  int *piVar4;
  TSharedPtr<FSampleTrackBase,1> local_28;
  
  pTVar2 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->NameToIndex,*param_1);
  piVar4 = (int *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,int> *)0x0) {
    piVar4 = (int *)0x0;
  }
  if (((piVar4 == (int *)0x0) || (iVar1 = *piVar4, iVar1 < 0)) || ((this->Tracks).ArrayNum <= iVar1)
     ) {
    __return_storage_ptr__->Object = (FSampleTrackBase *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    GetTrack(this,__return_storage_ptr__,iVar1);
  }
  if (__return_storage_ptr__->Object == (FSampleTrackBase *)0x0) {
    pTVar3 = AddTrack(this,&local_28,param_1,param_2,param_3);
    if (__return_storage_ptr__ != pTVar3) {
      __return_storage_ptr__->Object = pTVar3->Object;
      pTVar3->Object = (FSampleTrackBase *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar3->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// FindTrack @ 14a40d6d0

TSharedPtr<FSampleTrackBase,1> * __thiscall
FSampleTrackContainer::FindTrack
          (FSampleTrackContainer *this,TSharedPtr<FSampleTrackBase,1> *__return_storage_ptr__,
          FName *param_1)

{
  int iVar1;
  TTuple<FName,int> *pTVar2;
  int *piVar3;
  
  pTVar2 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->NameToIndex,*param_1);
  piVar3 = (int *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,int> *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (((piVar3 != (int *)0x0) && (iVar1 = *piVar3, -1 < iVar1)) && (iVar1 < (this->Tracks).ArrayNum)
     ) {
    GetTrack(this,__return_storage_ptr__,iVar1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FSampleTrackBase *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FindTrack @ 14a40d740

TSharedPtr<FSampleTrackBase_const_,1> * __thiscall
FSampleTrackContainer::FindTrack
          (FSampleTrackContainer *this,TSharedPtr<FSampleTrackBase_const_,1> *__return_storage_ptr__
          ,FName *param_1)

{
  int iVar1;
  TTuple<FName,int> *pTVar2;
  int *piVar3;
  
  pTVar2 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->NameToIndex,*param_1);
  piVar3 = (int *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,int> *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (((piVar3 != (int *)0x0) && (iVar1 = *piVar3, -1 < iVar1)) && (iVar1 < (this->Tracks).ArrayNum)
     ) {
    GetTrack(this,__return_storage_ptr__,iVar1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FSampleTrackBase *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetAbsoluteTime @ 14a4107b0

float __thiscall FSampleTrackContainer::GetAbsoluteTime(FSampleTrackContainer *this,int param_1)

{
  float fVar1;
  
  fVar1 = GetAbsoluteTime(this,param_1,&this->TimeSampleTrackIndex);
  return fVar1;
}

// GetAbsoluteTime @ 14a4107c0

float __thiscall
FSampleTrackContainer::GetAbsoluteTime
          (FSampleTrackContainer *this,int param_1,FSampleTrackIndex *param_2)

{
  int iVar1;
  TTuple<FName,int> *pTVar2;
  FSharedReferencer<1> FVar3;
  TReferenceControllerBase<1> *pTVar4;
  float fVar5;
  FName local_res8;
  TSharedPtr<FSampleTrackBase_const_,1> local_28 [2];
  
  FLazyName::Resolve(&AbsoluteTimeName);
  pTVar2 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->NameToIndex,local_res8);
  FVar3.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = (TReferenceControllerBase<1> *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,int> *)0x0) {
    pTVar4 = FVar3.ReferenceController;
  }
  if (((pTVar4 != (TReferenceControllerBase<1> *)0x0) &&
      (iVar1 = (int)pTVar4->_padding_, -1 < iVar1)) && (iVar1 < (this->Tracks).ArrayNum)) {
    GetTrack(this,local_28,iVar1);
    if (local_28[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28[0].SharedReferenceCount.ReferenceController);
    FVar3.ReferenceController = local_28[0].SharedReferenceCount.ReferenceController;
    if ((local_28[0].Object != (FSampleTrackBase *)0x0) &&
       ((local_28[0].Object)->NumTimesInContainer != 0)) {
      fVar5 = (float)(**(code **)((local_28[0].Object)->_padding_ + 200))
                               (local_28[0].Object,param_1,param_2);
      goto LAB_14a41086c;
    }
  }
  fVar5 = 0.0;
LAB_14a41086c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return fVar5;
}

// GetDeltaTime @ 14a4138d0

float __thiscall FSampleTrackContainer::GetDeltaTime(FSampleTrackContainer *this,int param_1)

{
  float fVar1;
  
  fVar1 = GetDeltaTime(this,param_1,&this->TimeSampleTrackIndex);
  return fVar1;
}

// GetDeltaTime @ 14a4138e0

float __thiscall
FSampleTrackContainer::GetDeltaTime
          (FSampleTrackContainer *this,int param_1,FSampleTrackIndex *param_2)

{
  int iVar1;
  TTuple<FName,int> *pTVar2;
  FSharedReferencer<1> FVar3;
  TReferenceControllerBase<1> *pTVar4;
  float fVar5;
  FName local_res8;
  TSharedPtr<FSampleTrackBase_const_,1> local_28 [2];
  
  FLazyName::Resolve(&DeltaTimeName);
  pTVar2 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->NameToIndex,local_res8);
  FVar3.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = (TReferenceControllerBase<1> *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,int> *)0x0) {
    pTVar4 = FVar3.ReferenceController;
  }
  if (((pTVar4 != (TReferenceControllerBase<1> *)0x0) &&
      (iVar1 = (int)pTVar4->_padding_, -1 < iVar1)) && (iVar1 < (this->Tracks).ArrayNum)) {
    GetTrack(this,local_28,iVar1);
    if (local_28[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28[0].SharedReferenceCount.ReferenceController);
    FVar3.ReferenceController = local_28[0].SharedReferenceCount.ReferenceController;
    if ((local_28[0].Object != (FSampleTrackBase *)0x0) &&
       ((local_28[0].Object)->NumTimesInContainer != 0)) {
      fVar5 = (float)(**(code **)((local_28[0].Object)->_padding_ + 200))
                               (local_28[0].Object,param_1,param_2);
      goto LAB_14a41398c;
    }
  }
  fVar5 = 0.0;
LAB_14a41398c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return fVar5;
}

// GetLastAbsoluteTime @ 14a415770

float __thiscall FSampleTrackContainer::GetLastAbsoluteTime(FSampleTrackContainer *this)

{
  EMode EVar1;
  int iVar2;
  TTuple<FName,int> *pTVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  float fVar8;
  FName local_res8;
  TSharedPtr<FSampleTrackBase_const_,1> local_28 [2];
  
  FLazyName::Resolve(&AbsoluteTimeName);
  pTVar3 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->NameToIndex,local_res8);
  iVar5 = 0;
  piVar6 = (int *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,int> *)0x0) {
    piVar6 = (int *)0x0;
  }
  if (((piVar6 == (int *)0x0) || (iVar2 = *piVar6, iVar2 < 0)) || ((this->Tracks).ArrayNum <= iVar2)
     ) {
    local_28[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    GetTrack(this,local_28,iVar2);
    if (local_28[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28[0].SharedReferenceCount.ReferenceController);
    if (local_28[0].Object != (FSampleTrackBase *)0x0) {
      EVar1 = (local_28[0].Object)->Mode;
      if (EVar1 == EMode_Singleton) {
        pcVar7 = *(code **)((local_28[0].Object)->_padding_ + 0xd0);
LAB_14a41586a:
        iVar5 = 1;
      }
      else {
        if (EVar1 == EMode_Sampled) {
          iVar2 = ((local_28[0].Object)->TimeIndices).ArrayNum;
        }
        else {
          if (EVar1 != EMode_Complete) goto LAB_14a41587e;
          iVar2 = (local_28[0].Object)->NumTimesInContainer;
        }
        if (iVar2 == 0) goto LAB_14a41587e;
        pcVar7 = *(code **)((local_28[0].Object)->_padding_ + 0xd0);
        if (EVar1 == EMode_Singleton) goto LAB_14a41586a;
        if (EVar1 == EMode_Sampled) {
          pfVar4 = (float *)(*pcVar7)(local_28[0].Object,
                                      ((local_28[0].Object)->TimeIndices).ArrayNum + -1);
          fVar8 = *pfVar4;
          goto LAB_14a415881;
        }
        if (EVar1 == EMode_Complete) {
          pfVar4 = (float *)(*pcVar7)(local_28[0].Object,
                                      (local_28[0].Object)->NumTimesInContainer + -1);
          fVar8 = *pfVar4;
          goto LAB_14a415881;
        }
      }
      pfVar4 = (float *)(*pcVar7)(local_28[0].Object,iVar5 + -1);
      fVar8 = *pfVar4;
      goto LAB_14a415881;
    }
  }
LAB_14a41587e:
  fVar8 = 0.0;
LAB_14a415881:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return fVar8;
}

// GetLastDeltaTime @ 14a4158c0

float __thiscall FSampleTrackContainer::GetLastDeltaTime(FSampleTrackContainer *this)

{
  EMode EVar1;
  int iVar2;
  TTuple<FName,int> *pTVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  float fVar8;
  FName local_res8;
  TSharedPtr<FSampleTrackBase_const_,1> local_28 [2];
  
  FLazyName::Resolve(&DeltaTimeName);
  pTVar3 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->NameToIndex,local_res8);
  iVar5 = 0;
  piVar6 = (int *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,int> *)0x0) {
    piVar6 = (int *)0x0;
  }
  if (((piVar6 == (int *)0x0) || (iVar2 = *piVar6, iVar2 < 0)) || ((this->Tracks).ArrayNum <= iVar2)
     ) {
    local_28[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    GetTrack(this,local_28,iVar2);
    if (local_28[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28[0].SharedReferenceCount.ReferenceController);
    if (local_28[0].Object != (FSampleTrackBase *)0x0) {
      EVar1 = (local_28[0].Object)->Mode;
      if (EVar1 == EMode_Singleton) {
        pcVar7 = *(code **)((local_28[0].Object)->_padding_ + 0xd0);
LAB_14a4159ba:
        iVar5 = 1;
      }
      else {
        if (EVar1 == EMode_Sampled) {
          iVar2 = ((local_28[0].Object)->TimeIndices).ArrayNum;
        }
        else {
          if (EVar1 != EMode_Complete) goto LAB_14a4159ce;
          iVar2 = (local_28[0].Object)->NumTimesInContainer;
        }
        if (iVar2 == 0) goto LAB_14a4159ce;
        pcVar7 = *(code **)((local_28[0].Object)->_padding_ + 0xd0);
        if (EVar1 == EMode_Singleton) goto LAB_14a4159ba;
        if (EVar1 == EMode_Sampled) {
          pfVar4 = (float *)(*pcVar7)(local_28[0].Object,
                                      ((local_28[0].Object)->TimeIndices).ArrayNum + -1);
          fVar8 = *pfVar4;
          goto LAB_14a4159d1;
        }
        if (EVar1 == EMode_Complete) {
          pfVar4 = (float *)(*pcVar7)(local_28[0].Object,
                                      (local_28[0].Object)->NumTimesInContainer + -1);
          fVar8 = *pfVar4;
          goto LAB_14a4159d1;
        }
      }
      pfVar4 = (float *)(*pcVar7)(local_28[0].Object,iVar5 + -1);
      fVar8 = *pfVar4;
      goto LAB_14a4159d1;
    }
  }
LAB_14a4159ce:
  fVar8 = 0.0;
LAB_14a4159d1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return fVar8;
}

// GetNumTimes @ 14a416840

int __thiscall FSampleTrackContainer::GetNumTimes(FSampleTrackContainer *this)

{
  TTuple<FName,int> *pTVar1;
  int iVar2;
  int *piVar3;
  FName local_res8;
  TSharedPtr<FSampleTrackBase_const_,1> local_18;
  
  FLazyName::Resolve(&AbsoluteTimeName);
  pTVar1 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->NameToIndex,local_res8);
  piVar3 = (int *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,int> *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (((piVar3 == (int *)0x0) || (iVar2 = *piVar3, iVar2 < 0)) || ((this->Tracks).ArrayNum <= iVar2)
     ) {
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    GetTrack(this,&local_18,iVar2);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if ((local_18.Object != (FSampleTrackBase *)0x0) &&
       (iVar2 = (local_18.Object)->NumTimesInContainer, iVar2 != 0)) goto LAB_14a4168cf;
  }
  iVar2 = 0;
LAB_14a4168cf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return iVar2;
}

// GetTimeIndex @ 14a419d50

int __thiscall FSampleTrackContainer::GetTimeIndex(FSampleTrackContainer *this,float param_1)

{
  int iVar1;
  
  iVar1 = GetTimeIndex(this,param_1,&this->TimeSampleTrackIndex);
  return iVar1;
}

// GetTimeIndex @ 14a419d60

int __thiscall
FSampleTrackContainer::GetTimeIndex
          (FSampleTrackContainer *this,float param_1,FSampleTrackIndex *param_2)

{
  EMode EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<FName,int> *pTVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  FSampleTrackBase *pFVar12;
  int *piVar13;
  FSharedReferencer<1> FVar14;
  float fVar15;
  FName local_res8;
  TSharedPtr<FSampleTrackBase_const_,1> local_48 [3];
  
  FLazyName::Resolve(&AbsoluteTimeName);
  pTVar5 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->NameToIndex,local_res8);
  piVar11 = (int *)0x0;
  uVar10 = 0;
  piVar13 = (int *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,int> *)0x0) {
    piVar13 = piVar11;
  }
  if (((piVar13 == (int *)0x0) || (iVar4 = *piVar13, iVar4 < 0)) ||
     ((this->Tracks).ArrayNum <= iVar4)) {
    pFVar12 = (FSampleTrackBase *)0x0;
    FVar14.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    GetTrack(this,local_48,iVar4);
    if (local_48[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_48[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48[0].SharedReferenceCount.ReferenceController);
    pFVar12 = local_48[0].Object;
    FVar14.ReferenceController = local_48[0].SharedReferenceCount.ReferenceController;
    if ((local_48[0].Object != (FSampleTrackBase *)0x0) &&
       (0 < (local_48[0].Object)->NumTimesInContainer)) goto LAB_14a419e4e;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("AbsoluteTimeTrack.IsValid() && AbsoluteTimeTrack->NumTimes() > 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackContainer.cpp"
                     ,0x28e,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if ((pFVar12 == (FSampleTrackBase *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14a419e4e:
  puVar6 = (uint *)FSampleTrackIndex::GetSample(param_2,pFVar12->TrackIndex);
  EVar1 = pFVar12->Mode;
  if (EVar1 == EMode_Singleton) {
    *puVar6 = 0;
  }
  else {
    if (EVar1 == EMode_Singleton) {
      uVar10 = 1;
    }
    else if (EVar1 == EMode_Sampled) {
      uVar10 = (pFVar12->TimeIndices).ArrayNum;
    }
    else if (EVar1 == EMode_Complete) {
      uVar10 = pFVar12->NumTimesInContainer;
    }
    uVar10 = uVar10 - 1;
    uVar9 = uVar10;
    if ((int)*puVar6 < (int)uVar10) {
      uVar9 = *puVar6;
    }
    if (0 < (int)uVar9) {
      piVar11 = (int *)(ulonglong)uVar9;
    }
    *puVar6 = (uint)piVar11;
    if (1 < (int)(uint)piVar11) {
      fVar15 = param_1 - __real_322bcc77;
      do {
        pfVar7 = (float *)(**(code **)(pFVar12->_padding_ + 0xd0))(pFVar12,piVar11);
        if (*pfVar7 <= fVar15) break;
        *puVar6 = *puVar6 - 1;
        piVar11 = (int *)(ulonglong)*puVar6;
      } while (1 < (int)*puVar6);
    }
    uVar9 = *puVar6;
    if ((int)uVar9 < (int)uVar10) {
      fVar15 = param_1 + __real_322bcc77;
      do {
        pfVar7 = (float *)(**(code **)(pFVar12->_padding_ + 0xd0))(pFVar12,uVar9 + 1);
        if (fVar15 < *pfVar7) break;
        *puVar6 = *puVar6 + 1;
        uVar9 = *puVar6;
      } while ((int)uVar9 < (int)uVar10);
    }
    if (pFVar12->Mode == EMode_Sampled) {
      puVar8 = (uint *)TArrayView<int,int>::operator[](&pFVar12->TimeIndices,*puVar6);
      *puVar6 = *puVar8;
    }
    uVar10 = *puVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  return uVar10;
}

// GetTimeRange @ 14a419f80

TVector2<float> __thiscall FSampleTrackContainer::GetTimeRange(FSampleTrackContainer *this)

{
  undefined4 uVar1;
  EMode EVar2;
  int iVar3;
  TTuple<FName,int> *pTVar4;
  undefined4 *puVar5;
  float *pfVar6;
  TVector2<float>_u_0 in_RDX;
  int iVar7;
  int *piVar8;
  FName local_res8;
  TSharedPtr<FSampleTrackBase_const_,1> local_28 [2];
  
  FLazyName::Resolve(&AbsoluteTimeName);
  pTVar4 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->NameToIndex,local_res8);
  iVar7 = 0;
  piVar8 = (int *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,int> *)0x0) {
    piVar8 = (int *)0x0;
  }
  if (((piVar8 == (int *)0x0) || (iVar3 = *piVar8, iVar3 < 0)) || ((this->Tracks).ArrayNum <= iVar3)
     ) {
    local_28[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    GetTrack(this,local_28,iVar3);
    if (local_28[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28[0].SharedReferenceCount.ReferenceController);
    if (local_28[0].Object != (FSampleTrackBase *)0x0) {
      EVar2 = (local_28[0].Object)->Mode;
      if (EVar2 != EMode_Singleton) {
        if (EVar2 == EMode_Sampled) {
          iVar3 = ((local_28[0].Object)->TimeIndices).ArrayNum;
        }
        else {
          if (EVar2 != EMode_Complete) goto LAB_14a41a0a5;
          iVar3 = (local_28[0].Object)->NumTimesInContainer;
        }
        if (iVar3 == 0) goto LAB_14a41a0a5;
      }
      puVar5 = (undefined4 *)
               (**(code **)((local_28[0].Object)->_padding_ + 0xd0))(local_28[0].Object,0);
      EVar2 = (local_28[0].Object)->Mode;
      uVar1 = *puVar5;
      if (EVar2 == EMode_Singleton) {
        iVar7 = 1;
      }
      else if (EVar2 == EMode_Sampled) {
        iVar7 = ((local_28[0].Object)->TimeIndices).ArrayNum;
      }
      else if (EVar2 == EMode_Complete) {
        iVar7 = (local_28[0].Object)->NumTimesInContainer;
      }
      pfVar6 = (float *)(**(code **)((local_28[0].Object)->_padding_ + 0xd0))
                                  (local_28[0].Object,iVar7 + -1);
      *(undefined4 *)in_RDX = uVar1;
      *(float *)((longlong)in_RDX + 4) = *pfVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28[0].SharedReferenceCount.ReferenceController);
      return (TVector2<float>)in_RDX;
    }
  }
LAB_14a41a0a5:
  *(TVector2<float>_u_0 *)in_RDX =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return (TVector2<float>)in_RDX;
}

// GetTrack @ 14a41a2b0

TSharedPtr<FSampleTrackBase,1> * __thiscall
FSampleTrackContainer::GetTrack
          (FSampleTrackContainer *this,TSharedPtr<FSampleTrackBase,1> *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedPtr<FSampleTrackBase,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  uVar4 = 0;
  if (param_1 < (this->Tracks).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FSampleTrackBase,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar6 = (this->Tracks).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  __return_storage_ptr__->Object = *(FSampleTrackBase **)pFVar6;
  pTVar1 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetTrack @ 14a41a350

TSharedPtr<FSampleTrackBase_const_,1> * __thiscall
FSampleTrackContainer::GetTrack
          (FSampleTrackContainer *this,TSharedPtr<FSampleTrackBase_const_,1> *__return_storage_ptr__
          ,int param_1)

{
  FScriptContainerElement *pFVar1;
  FSampleTrackBase *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedPtr<FSampleTrackBase_const_,1> *pTVar7;
  
  uVar6 = 0;
  if (param_1 < (this->Tracks).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FSampleTrackBase_const_,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar1 = (this->Tracks).AllocatorInstance.Data;
  pFVar2 = *(FSampleTrackBase **)(pFVar1 + (longlong)param_1 * 0x10);
  pTVar3 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_1 * 0x10 + 8);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetTrackIndex @ 14a41a400

int __thiscall FSampleTrackContainer::GetTrackIndex(FSampleTrackContainer *this,FName *param_1)

{
  TTuple<FName,int> *pTVar1;
  int *piVar2;
  
  pTVar1 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->NameToIndex,*param_1);
  piVar2 = (int *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,int> *)0x0) {
    piVar2 = (int *)0x0;
  }
  if (piVar2 != (int *)0x0) {
    return *piVar2;
  }
  return -1;
}

// IsEditable @ 14a425570

bool __thiscall FSampleTrackContainer::IsEditable(FSampleTrackContainer *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Tracks).ArrayNum;
  pFVar5 = (this->Tracks).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) {
      return true;
    }
    if ((*(longlong *)pFVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(int *)(*(longlong *)pFVar5 + 0x2c) != -1) {
      return false;
    }
    if ((*(longlong *)pFVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) break;
    if (*(int *)(*(longlong *)pFVar5 + 0x90) != 0) {
      return false;
    }
    if ((*(longlong *)pFVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(char *)(*(longlong *)pFVar5 + 0x50) != '\x03') {
      if ((*(longlong *)pFVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(char *)(*(longlong *)pFVar5 + 0x50) != '\x01') {
        return false;
      }
    }
    pFVar5 = pFVar5 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// MakeEditable @ 14a42abc0

bool __thiscall FSampleTrackContainer::MakeEditable(FSampleTrackContainer *this)

{
  TArray<TSharedPtr<FSampleTrackBase,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_58 [2];
  ForAnyElementType local_50;
  int local_48;
  int aiStack_44 [3];
  
  iVar3 = (this->Tracks).ArrayNum;
  pTVar1 = &this->Tracks;
  pFVar17 = (pTVar1->AllocatorInstance).Data;
  pFVar20 = pFVar17 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar17 == pFVar20) {
      return true;
    }
    if (*(longlong *)pFVar17 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    if (*(int *)(*(longlong *)pFVar17 + 0x2c) != -1) break;
    if (*(longlong *)pFVar17 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    if (*(int *)(*(longlong *)pFVar17 + 0x90) != 0) break;
    if (*(longlong *)pFVar17 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    if (*(char *)(*(longlong *)pFVar17 + 0x50) != '\x03') {
      if (*(longlong *)pFVar17 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      if (*(char *)(*(longlong *)pFVar17 + 0x50) != '\x01') break;
    }
    pFVar17 = pFVar17 + 0x10;
  }
  bVar7 = false;
  uVar15 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  aiStack_44[0] = 0;
  uVar21 = 0;
  local_58[0] = 0;
  uVar11 = 0;
  if (0 < (this->Tracks).ArrayNum) {
    uVar18 = uVar15;
    bVar7 = false;
    do {
      uVar16 = (uint)uVar18;
      uVar12 = uVar21;
      if ((int)uVar16 < (this->Tracks).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      pFVar17 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x10;
      if (*(longlong *)pFVar17 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      if (*(char *)(*(longlong *)pFVar17 + 0x50) == '\x04') {
        if ((local_50.Data <= (FScriptContainerElement *)local_58) &&
           ((FScriptContainerElement *)local_58 < local_50.Data + (longlong)aiStack_44[0] * 4)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
        }
        if (local_48 == aiStack_44[0]) {
          local_48 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_50,aiStack_44);
        }
        lVar14 = (longlong)local_48;
        local_48 = local_48 + 1;
        *(uint *)(local_50.Data + lVar14 * 4) = local_58[0];
      }
      lVar14 = (longlong)(int)local_58[0];
      uVar12 = uVar21;
      if ((int)local_58[0] < (this->Tracks).ArrayNum) {
        uVar12 = ~local_58[0] >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      pFVar17 = (pTVar1->AllocatorInstance).Data + lVar14 * 0x10;
      if (*(longlong *)pFVar17 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      (**(code **)(**(longlong **)pFVar17 + 0x70))();
      lVar14 = (longlong)(int)local_58[0];
      uVar12 = uVar21;
      if ((int)local_58[0] < (this->Tracks).ArrayNum) {
        uVar12 = ~local_58[0] >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      pFVar17 = (pTVar1->AllocatorInstance).Data + lVar14 * 0x10;
      if (*(longlong *)pFVar17 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      cVar10 = (**(code **)(**(longlong **)pFVar17 + 0xc0))();
      lVar14 = (longlong)(int)local_58[0];
      if (cVar10 != '\0') {
        bVar7 = true;
      }
      uVar12 = uVar11;
      if ((int)local_58[0] < (this->Tracks).ArrayNum) {
        uVar12 = ~local_58[0] >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      pFVar17 = (pTVar1->AllocatorInstance).Data + lVar14 * 0x10;
      if (*(longlong *)pFVar17 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      cVar10 = (**(code **)(**(longlong **)pFVar17 + 0xa8))();
      lVar14 = (longlong)(int)local_58[0];
      if (cVar10 != '\0') {
        bVar7 = true;
      }
      uVar12 = uVar11;
      if ((int)local_58[0] < (this->Tracks).ArrayNum) {
        uVar12 = ~local_58[0] >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      pFVar17 = (pTVar1->AllocatorInstance).Data + lVar14 * 0x10;
      if (*(longlong *)pFVar17 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      plVar5 = *(longlong **)pFVar17;
      cVar10 = (**(code **)(*plVar5 + 0xb0))(plVar5,1);
      if (cVar10 != '\0') {
        bVar7 = true;
      }
      local_58[0] = local_58[0] + 1;
      uVar18 = (ulonglong)local_58[0];
    } while ((int)local_58[0] < (this->Tracks).ArrayNum);
  }
  iVar3 = local_48;
  if (0 < local_48 / 2) {
    pFVar17 = local_50.Data + (longlong)(local_48 + -1) * 4;
    do {
      uVar4 = *(undefined4 *)(local_50.Data + uVar15 * 4);
      *(undefined4 *)(local_50.Data + uVar15 * 4) = *(undefined4 *)pFVar17;
      uVar15 = uVar15 + 1;
      *(undefined4 *)pFVar17 = uVar4;
      pFVar17 = pFVar17 + -4;
    } while ((longlong)uVar15 < (longlong)(local_48 / 2));
  }
  pFVar17 = local_50.Data + (longlong)local_48 * 4;
  FVar19.Data = local_50.Data;
  while( true ) {
    if (local_48 != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar19.Data == pFVar17) break;
    uVar21 = *(uint *)FVar19.Data;
    uVar12 = uVar11;
    if ((int)uVar21 < (this->Tracks).ArrayNum) {
      uVar12 = ~uVar21 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    pFVar20 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar20 + 8));
    iVar13 = (this->Tracks).ArrayNum + ~uVar21;
    if (iVar13 != 0) {
      memmove(pFVar20,pFVar20 + 0x10,(longlong)iVar13 << 4);
    }
    piVar2 = &(this->Tracks).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&pTVar1->AllocatorInstance,(this->Tracks).ArrayNum,&(this->Tracks).ArrayMax);
    FVar19.Data = FVar19.Data + 4;
    bVar7 = true;
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return bVar7;
}

// MakeTrack @ 14a42b590

TSharedPtr<FSampleTrackBase,1> * __cdecl
FSampleTrackContainer::MakeTrack
          (TSharedPtr<FSampleTrackBase,1> *__return_storage_ptr__,ETrackType param_1)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrack<int> *this;
  FSampleTrack<float> *this_00;
  FComposedSampleTrack<UE::Math::TTransform<float>_> *this_01;
  TRawPtrProxy<FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>_> TVar3;
  TRawPtrProxy<FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_> TVar4;
  TRawPtrProxy<FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>_> TVar5;
  TRawPtrProxy<FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>_> TVar6;
  TRawPtrProxy<FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>_> TVar7;
  TRawPtrProxy<FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_> TVar8;
  TRawPtrProxy<FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>_> TVar9;
  TRawPtrProxy<FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>_>
  TVar10;
  TRawPtrProxy<FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>_> TVar11;
  TRawPtrProxy<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_> TVar12;
  TRawPtrProxy<FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>_> TVar13;
  FSampleTrackBase *pFVar14;
  TRawPtrProxy<FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>_> TVar15;
  TSharedPtr<FSampleTrackBase,1> *pTVar16;
  TRawPtrProxy<FSampleTrack<bool>_> local_res18;
  TRawPtrProxy<FSampleTrack<int>_> local_res20;
  TRawPtrProxy<FSampleTrack<unsigned_int>_> local_d8;
  TRawPtrProxy<FSampleTrack<float>_> local_d0;
  TRawPtrProxy<FSampleTrack<FName>_> local_c8;
  TRawPtrProxy<FSampleTrack<FString>_> local_c0;
  TRawPtrProxy<FSampleTrack<UE::Math::TVector<float>_>_> local_b8;
  TRawPtrProxy<FSampleTrack<UE::Math::TQuat<float>_>_> local_b0;
  TRawPtrProxy<FComposedSampleTrack<UE::Math::TTransform<float>_>_> local_a8;
  TRawPtrProxy<FSampleTrack<FLinearColor>_> local_a0;
  TRawPtrProxy<FSampleTrack<FRigElementKey>_> local_98;
  TRawPtrProxy<FSampleTrack<FRigComponentKey>_> local_90;
  TRawPtrProxy<FSampleTrack<FInstancedStruct>_> local_88;
  TRawPtrProxy<FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>_> local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  switch(param_1) {
  case ETrackType_Bool:
    local_res18.Object = ::operator_new(200);
    if (local_res18.Object == (FSampleTrack<bool> *)0x0) {
      local_res18.Object = (FSampleTrack<bool> *)0x0;
    }
    else {
      *(undefined4 *)&(local_res18.Object)->field_0x51 = 0;
      *(undefined2 *)&(local_res18.Object)->field_0x55 = 0;
      (local_res18.Object)->field_0x57 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0x70 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0x90 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0x98 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0xc0 = 0;
      (local_res18.Object)->field_0x50 = 0;
      *(undefined ***)local_res18.Object = &___7__FSampleTrack__N__6B_;
      *(undefined8 *)&(local_res18.Object)->field_0x8 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0x10 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0x18 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0x20 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0x28 = 0xffffffffffffffff;
      *(undefined8 *)&(local_res18.Object)->field_0x30 = 0xffffffffffffffff;
      *(undefined8 *)&(local_res18.Object)->field_0x38 = 0xffffffffffffffff;
      *(undefined8 *)&(local_res18.Object)->field_0x40 = 0xffffffffffffffff;
      *(undefined8 *)&(local_res18.Object)->field_0x48 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0x58 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0x60 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0x68 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0x78 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0x80 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0x88 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0xa0 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0xa8 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0xb0 = 0;
      *(undefined8 *)&(local_res18.Object)->field_0xb8 = 0;
    }
    TSharedPtr<FSampleTrackBase,1>::TSharedPtr<FSampleTrackBase,1><FSampleTrack<bool>_>
              (__return_storage_ptr__,&local_res18);
    break;
  case ETrackType_Int32:
    this = ::operator_new(200);
    if (this == (FSampleTrack<int> *)0x0) {
      this = (FSampleTrack<int> *)0x0;
    }
    else {
      memset(&this->field_0x8,0,0xa0);
      *(undefined4 *)&this->field_0xc4 = 0;
      FSampleTrackBase::FSampleTrackBase((FSampleTrackBase *)this);
      *(undefined ***)this = &___7__FSampleTrack_H__6B_;
      *(undefined8 *)&this->field_0xa8 = 0;
      *(undefined8 *)&this->field_0xb0 = 0;
      *(undefined8 *)&this->field_0xb8 = 0;
      *(undefined4 *)&this->field_0xc0 = 0;
      if ((((*(longlong *)&this->field_0x8 != 0) && (*(longlong *)&this->field_0x10 != 0)) &&
          (0 < *(int *)(*(longlong *)&this->field_0x10 + 8))) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar16 = (TSharedPtr<FSampleTrackBase,1> *)(*pcVar1)();
        return pTVar16;
      }
    }
    local_res20.Object = this;
    TSharedPtr<FSampleTrackBase,1>::TSharedPtr<FSampleTrackBase,1><FSampleTrack<int>_>
              (__return_storage_ptr__,&local_res20);
    break;
  case ETrackType_Uint32:
    local_d8.Object = ::operator_new(200);
    if (local_d8.Object == (FSampleTrack<unsigned_int> *)0x0) {
      local_d8.Object = (FSampleTrack<unsigned_int> *)0x0;
    }
    else {
      *(undefined4 *)&(local_d8.Object)->field_0x51 = 0;
      *(undefined2 *)&(local_d8.Object)->field_0x55 = 0;
      (local_d8.Object)->field_0x57 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0x70 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0x90 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0x98 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0xc0 = 0;
      (local_d8.Object)->field_0x50 = 0;
      *(undefined ***)local_d8.Object = &___7__FSampleTrack_I__6B_;
      *(undefined8 *)&(local_d8.Object)->field_0x8 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0x10 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0x18 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0x20 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0x28 = 0xffffffffffffffff;
      *(undefined8 *)&(local_d8.Object)->field_0x30 = 0xffffffffffffffff;
      *(undefined8 *)&(local_d8.Object)->field_0x38 = 0xffffffffffffffff;
      *(undefined8 *)&(local_d8.Object)->field_0x40 = 0xffffffffffffffff;
      *(undefined8 *)&(local_d8.Object)->field_0x48 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0x58 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0x60 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0x68 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0x78 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0x80 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0x88 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0xa0 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0xa8 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0xb0 = 0;
      *(undefined8 *)&(local_d8.Object)->field_0xb8 = 0;
    }
    TSharedPtr<FSampleTrackBase,1>::TSharedPtr<FSampleTrackBase,1><FSampleTrack<unsigned_int>_>
              (__return_storage_ptr__,&local_d8);
    break;
  case ETrackType_Float:
    this_00 = ::operator_new(200);
    if (this_00 == (FSampleTrack<float> *)0x0) {
      local_d0.Object = (FSampleTrack<float> *)0x0;
    }
    else {
      memset(this_00,0,200);
      local_d0.Object = FSampleTrack<float>::FSampleTrack<float>(this_00);
      if (((local_d0.Object != (FSampleTrack<float> *)0x0) &&
          (*(longlong *)&(local_d0.Object)->field_0x8 != 0)) &&
         ((*(longlong *)&(local_d0.Object)->field_0x10 != 0 &&
          ((0 < *(int *)(*(longlong *)&(local_d0.Object)->field_0x10 + 8) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InObject || !InObject->DoesSharedInstanceExist()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x7a5,L"Trying to share an already-shared object"), bVar2)))))) {
        pcVar1 = (code *)swi(3);
        pTVar16 = (TSharedPtr<FSampleTrackBase,1> *)(*pcVar1)();
        return pTVar16;
      }
    }
    TSharedPtr<FSampleTrackBase,1>::TSharedPtr<FSampleTrackBase,1><FSampleTrack<float>_>
              (__return_storage_ptr__,&local_d0);
    break;
  case ETrackType_Name:
    local_c8.Object = ::operator_new(200);
    if (local_c8.Object == (FSampleTrack<FName> *)0x0) {
      local_c8.Object = (FSampleTrack<FName> *)0x0;
    }
    else {
      *(undefined4 *)&(local_c8.Object)->field_0x51 = 0;
      *(undefined2 *)&(local_c8.Object)->field_0x55 = 0;
      (local_c8.Object)->field_0x57 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0x70 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0x90 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0x98 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0xc0 = 0;
      (local_c8.Object)->field_0x50 = 0;
      *(undefined ***)local_c8.Object = &___7__FSampleTrack_VFName____6B_;
      *(undefined8 *)&(local_c8.Object)->field_0x8 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0x10 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0x18 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0x20 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0x28 = 0xffffffffffffffff;
      *(undefined8 *)&(local_c8.Object)->field_0x30 = 0xffffffffffffffff;
      *(undefined8 *)&(local_c8.Object)->field_0x38 = 0xffffffffffffffff;
      *(undefined8 *)&(local_c8.Object)->field_0x40 = 0xffffffffffffffff;
      *(undefined8 *)&(local_c8.Object)->field_0x48 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0x58 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0x60 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0x68 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0x78 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0x80 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0x88 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0xa0 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0xa8 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0xb0 = 0;
      *(undefined8 *)&(local_c8.Object)->field_0xb8 = 0;
    }
    TSharedPtr<FSampleTrackBase,1>::TSharedPtr<FSampleTrackBase,1><FSampleTrack<FName>_>
              (__return_storage_ptr__,&local_c8);
    break;
  case ETrackType_String:
    local_c0.Object = ::operator_new(200);
    if (local_c0.Object == (FSampleTrack<FString> *)0x0) {
      local_c0.Object = (FSampleTrack<FString> *)0x0;
    }
    else {
      *(undefined4 *)&(local_c0.Object)->field_0x51 = 0;
      *(undefined2 *)&(local_c0.Object)->field_0x55 = 0;
      (local_c0.Object)->field_0x57 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0x70 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0x90 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0x98 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0xc0 = 0;
      (local_c0.Object)->field_0x50 = 0;
      *(undefined ***)local_c0.Object = &___7__FSampleTrack_VFString____6B_;
      *(undefined8 *)&(local_c0.Object)->field_0x8 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0x10 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0x18 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0x20 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0x28 = 0xffffffffffffffff;
      *(undefined8 *)&(local_c0.Object)->field_0x30 = 0xffffffffffffffff;
      *(undefined8 *)&(local_c0.Object)->field_0x38 = 0xffffffffffffffff;
      *(undefined8 *)&(local_c0.Object)->field_0x40 = 0xffffffffffffffff;
      *(undefined8 *)&(local_c0.Object)->field_0x48 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0x58 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0x60 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0x68 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0x78 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0x80 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0x88 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0xa0 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0xa8 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0xb0 = 0;
      *(undefined8 *)&(local_c0.Object)->field_0xb8 = 0;
    }
    TSharedPtr<FSampleTrackBase,1>::TSharedPtr<FSampleTrackBase,1><FSampleTrack<FString>_>
              (__return_storage_ptr__,&local_c0);
    break;
  case ETrackType_Vector3f:
    local_b8.Object = ::operator_new(200);
    if (local_b8.Object == (FSampleTrack<UE::Math::TVector<float>_> *)0x0) {
      local_b8.Object = (FSampleTrack<UE::Math::TVector<float>_> *)0x0;
    }
    else {
      *(undefined4 *)&(local_b8.Object)->field_0x51 = 0;
      *(undefined2 *)&(local_b8.Object)->field_0x55 = 0;
      (local_b8.Object)->field_0x57 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0x70 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0x90 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0x98 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0xc0 = 0;
      (local_b8.Object)->field_0x50 = 0;
      *(undefined ***)local_b8.Object = &___7__FSampleTrack_U__TVector_M_Math_UE____6B_;
      *(undefined8 *)&(local_b8.Object)->field_0x8 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0x10 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0x18 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0x20 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0x28 = 0xffffffffffffffff;
      *(undefined8 *)&(local_b8.Object)->field_0x30 = 0xffffffffffffffff;
      *(undefined8 *)&(local_b8.Object)->field_0x38 = 0xffffffffffffffff;
      *(undefined8 *)&(local_b8.Object)->field_0x40 = 0xffffffffffffffff;
      *(undefined8 *)&(local_b8.Object)->field_0x48 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0x58 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0x60 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0x68 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0x78 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0x80 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0x88 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0xa0 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0xa8 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0xb0 = 0;
      *(undefined8 *)&(local_b8.Object)->field_0xb8 = 0;
    }
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<UE::Math::TVector<float>_>_>
              (__return_storage_ptr__,&local_b8);
    break;
  case ETrackType_Quatf:
    local_b0.Object = ::operator_new(200);
    if (local_b0.Object == (FSampleTrack<UE::Math::TQuat<float>_> *)0x0) {
      local_b0.Object = (FSampleTrack<UE::Math::TQuat<float>_> *)0x0;
    }
    else {
      *(undefined4 *)&(local_b0.Object)->field_0x51 = 0;
      *(undefined2 *)&(local_b0.Object)->field_0x55 = 0;
      (local_b0.Object)->field_0x57 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0x70 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0x90 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0x98 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0xc0 = 0;
      (local_b0.Object)->field_0x50 = 0;
      *(undefined ***)local_b0.Object = &___7__FSampleTrack_U__TQuat_M_Math_UE____6B_;
      *(undefined8 *)&(local_b0.Object)->field_0x8 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0x10 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0x18 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0x20 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0x28 = 0xffffffffffffffff;
      *(undefined8 *)&(local_b0.Object)->field_0x30 = 0xffffffffffffffff;
      *(undefined8 *)&(local_b0.Object)->field_0x38 = 0xffffffffffffffff;
      *(undefined8 *)&(local_b0.Object)->field_0x40 = 0xffffffffffffffff;
      *(undefined8 *)&(local_b0.Object)->field_0x48 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0x58 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0x60 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0x68 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0x78 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0x80 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0x88 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0xa0 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0xa8 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0xb0 = 0;
      *(undefined8 *)&(local_b0.Object)->field_0xb8 = 0;
    }
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<UE::Math::TQuat<float>_>_>
              (__return_storage_ptr__,&local_b0);
    break;
  case ETrackType_Transformf:
    this_01 = ::operator_new(0xe8);
    if (this_01 == (FComposedSampleTrack<UE::Math::TTransform<float>_> *)0x0) {
      local_a8.Object = (FComposedSampleTrack<UE::Math::TTransform<float>_> *)0x0;
    }
    else {
      local_a8.Object =
           FComposedSampleTrack<UE::Math::TTransform<float>_>::
           FComposedSampleTrack<UE::Math::TTransform<float>_>(this_01);
      if ((((local_a8.Object != (FComposedSampleTrack<UE::Math::TTransform<float>_> *)0x0) &&
           ((local_a8.Object)->_padding_ != 0)) && ((local_a8.Object)->_padding_ != 0)) &&
         ((0 < *(int *)((local_a8.Object)->_padding_ + 8) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar2)))) {
        pcVar1 = (code *)swi(3);
        pTVar16 = (TSharedPtr<FSampleTrackBase,1> *)(*pcVar1)();
        return pTVar16;
      }
    }
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FComposedSampleTrack<UE::Math::TTransform<float>_>_>
              (__return_storage_ptr__,&local_a8);
    break;
  case ETrackType_LinearColor:
    local_a0.Object = ::operator_new(200);
    if (local_a0.Object == (FSampleTrack<FLinearColor> *)0x0) {
      local_a0.Object = (FSampleTrack<FLinearColor> *)0x0;
    }
    else {
      *(undefined4 *)&(local_a0.Object)->field_0x51 = 0;
      *(undefined2 *)&(local_a0.Object)->field_0x55 = 0;
      (local_a0.Object)->field_0x57 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0x70 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0x90 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0x98 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0xc0 = 0;
      (local_a0.Object)->field_0x50 = 0;
      *(undefined ***)local_a0.Object = &___7__FSampleTrack_UFLinearColor____6B_;
      *(undefined8 *)&(local_a0.Object)->field_0x8 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0x10 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0x18 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0x20 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0x28 = 0xffffffffffffffff;
      *(undefined8 *)&(local_a0.Object)->field_0x30 = 0xffffffffffffffff;
      *(undefined8 *)&(local_a0.Object)->field_0x38 = 0xffffffffffffffff;
      *(undefined8 *)&(local_a0.Object)->field_0x40 = 0xffffffffffffffff;
      *(undefined8 *)&(local_a0.Object)->field_0x48 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0x58 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0x60 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0x68 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0x78 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0x80 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0x88 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0xa0 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0xa8 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0xb0 = 0;
      *(undefined8 *)&(local_a0.Object)->field_0xb8 = 0;
    }
    TSharedPtr<FSampleTrackBase,1>::TSharedPtr<FSampleTrackBase,1><FSampleTrack<FLinearColor>_>
              (__return_storage_ptr__,&local_a0);
    break;
  case ETrackType_ElementKey:
    local_98.Object = ::operator_new(200);
    if (local_98.Object == (FSampleTrack<FRigElementKey> *)0x0) {
      local_98.Object = (FSampleTrack<FRigElementKey> *)0x0;
    }
    else {
      *(undefined4 *)&(local_98.Object)->field_0x51 = 0;
      *(undefined2 *)&(local_98.Object)->field_0x55 = 0;
      (local_98.Object)->field_0x57 = 0;
      *(undefined8 *)&(local_98.Object)->field_0x70 = 0;
      *(undefined8 *)&(local_98.Object)->field_0x90 = 0;
      *(undefined8 *)&(local_98.Object)->field_0x98 = 0;
      *(undefined8 *)&(local_98.Object)->field_0xc0 = 0;
      (local_98.Object)->field_0x50 = 0;
      *(undefined ***)local_98.Object = &___7__FSampleTrack_UFRigElementKey____6B_;
      *(undefined8 *)&(local_98.Object)->field_0x8 = 0;
      *(undefined8 *)&(local_98.Object)->field_0x10 = 0;
      *(undefined8 *)&(local_98.Object)->field_0x18 = 0;
      *(undefined8 *)&(local_98.Object)->field_0x20 = 0;
      *(undefined8 *)&(local_98.Object)->field_0x28 = 0xffffffffffffffff;
      *(undefined8 *)&(local_98.Object)->field_0x30 = 0xffffffffffffffff;
      *(undefined8 *)&(local_98.Object)->field_0x38 = 0xffffffffffffffff;
      *(undefined8 *)&(local_98.Object)->field_0x40 = 0xffffffffffffffff;
      *(undefined8 *)&(local_98.Object)->field_0x48 = 0;
      *(undefined8 *)&(local_98.Object)->field_0x58 = 0;
      *(undefined8 *)&(local_98.Object)->field_0x60 = 0;
      *(undefined8 *)&(local_98.Object)->field_0x68 = 0;
      *(undefined8 *)&(local_98.Object)->field_0x78 = 0;
      *(undefined8 *)&(local_98.Object)->field_0x80 = 0;
      *(undefined8 *)&(local_98.Object)->field_0x88 = 0;
      *(undefined8 *)&(local_98.Object)->field_0xa0 = 0;
      *(undefined8 *)&(local_98.Object)->field_0xa8 = 0;
      *(undefined8 *)&(local_98.Object)->field_0xb0 = 0;
      *(undefined8 *)&(local_98.Object)->field_0xb8 = 0;
    }
    TSharedPtr<FSampleTrackBase,1>::TSharedPtr<FSampleTrackBase,1><FSampleTrack<FRigElementKey>_>
              (__return_storage_ptr__,&local_98);
    break;
  case ETrackType_ComponentKey:
    local_90.Object = ::operator_new(200);
    if (local_90.Object == (FSampleTrack<FRigComponentKey> *)0x0) {
      local_90.Object = (FSampleTrack<FRigComponentKey> *)0x0;
    }
    else {
      *(undefined4 *)&(local_90.Object)->field_0x51 = 0;
      *(undefined2 *)&(local_90.Object)->field_0x55 = 0;
      (local_90.Object)->field_0x57 = 0;
      *(undefined8 *)&(local_90.Object)->field_0x70 = 0;
      *(undefined8 *)&(local_90.Object)->field_0x90 = 0;
      *(undefined8 *)&(local_90.Object)->field_0x98 = 0;
      *(undefined8 *)&(local_90.Object)->field_0xc0 = 0;
      (local_90.Object)->field_0x50 = 0;
      *(undefined ***)local_90.Object = &___7__FSampleTrack_UFRigComponentKey____6B_;
      *(undefined8 *)&(local_90.Object)->field_0x8 = 0;
      *(undefined8 *)&(local_90.Object)->field_0x10 = 0;
      *(undefined8 *)&(local_90.Object)->field_0x18 = 0;
      *(undefined8 *)&(local_90.Object)->field_0x20 = 0;
      *(undefined8 *)&(local_90.Object)->field_0x28 = 0xffffffffffffffff;
      *(undefined8 *)&(local_90.Object)->field_0x30 = 0xffffffffffffffff;
      *(undefined8 *)&(local_90.Object)->field_0x38 = 0xffffffffffffffff;
      *(undefined8 *)&(local_90.Object)->field_0x40 = 0xffffffffffffffff;
      *(undefined8 *)&(local_90.Object)->field_0x48 = 0;
      *(undefined8 *)&(local_90.Object)->field_0x58 = 0;
      *(undefined8 *)&(local_90.Object)->field_0x60 = 0;
      *(undefined8 *)&(local_90.Object)->field_0x68 = 0;
      *(undefined8 *)&(local_90.Object)->field_0x78 = 0;
      *(undefined8 *)&(local_90.Object)->field_0x80 = 0;
      *(undefined8 *)&(local_90.Object)->field_0x88 = 0;
      *(undefined8 *)&(local_90.Object)->field_0xa0 = 0;
      *(undefined8 *)&(local_90.Object)->field_0xa8 = 0;
      *(undefined8 *)&(local_90.Object)->field_0xb0 = 0;
      *(undefined8 *)&(local_90.Object)->field_0xb8 = 0;
    }
    TSharedPtr<FSampleTrackBase,1>::TSharedPtr<FSampleTrackBase,1><FSampleTrack<FRigComponentKey>_>
              (__return_storage_ptr__,&local_90);
    break;
  case ETrackType_Struct:
    local_88.Object = ::operator_new(200);
    if (local_88.Object == (FSampleTrack<FInstancedStruct> *)0x0) {
      local_88.Object = (FSampleTrack<FInstancedStruct> *)0x0;
    }
    else {
      *(undefined4 *)&(local_88.Object)->field_0x51 = 0;
      *(undefined2 *)&(local_88.Object)->field_0x55 = 0;
      (local_88.Object)->field_0x57 = 0;
      *(undefined8 *)&(local_88.Object)->field_0x70 = 0;
      *(undefined8 *)&(local_88.Object)->field_0x90 = 0;
      *(undefined8 *)&(local_88.Object)->field_0x98 = 0;
      *(undefined8 *)&(local_88.Object)->field_0xc0 = 0;
      (local_88.Object)->field_0x50 = 0;
      *(undefined ***)local_88.Object = &___7__FSampleTrack_UFInstancedStruct____6B_;
      *(undefined8 *)&(local_88.Object)->field_0x8 = 0;
      *(undefined8 *)&(local_88.Object)->field_0x10 = 0;
      *(undefined8 *)&(local_88.Object)->field_0x18 = 0;
      *(undefined8 *)&(local_88.Object)->field_0x20 = 0;
      *(undefined8 *)&(local_88.Object)->field_0x28 = 0xffffffffffffffff;
      *(undefined8 *)&(local_88.Object)->field_0x30 = 0xffffffffffffffff;
      *(undefined8 *)&(local_88.Object)->field_0x38 = 0xffffffffffffffff;
      *(undefined8 *)&(local_88.Object)->field_0x40 = 0xffffffffffffffff;
      *(undefined8 *)&(local_88.Object)->field_0x48 = 0;
      *(undefined8 *)&(local_88.Object)->field_0x58 = 0;
      *(undefined8 *)&(local_88.Object)->field_0x60 = 0;
      *(undefined8 *)&(local_88.Object)->field_0x68 = 0;
      *(undefined8 *)&(local_88.Object)->field_0x78 = 0;
      *(undefined8 *)&(local_88.Object)->field_0x80 = 0;
      *(undefined8 *)&(local_88.Object)->field_0x88 = 0;
      *(undefined8 *)&(local_88.Object)->field_0xa0 = 0;
      *(undefined8 *)&(local_88.Object)->field_0xa8 = 0;
      *(undefined8 *)&(local_88.Object)->field_0xb0 = 0;
      *(undefined8 *)&(local_88.Object)->field_0xb8 = 0;
    }
    TSharedPtr<FSampleTrackBase,1>::TSharedPtr<FSampleTrackBase,1><FSampleTrack<FInstancedStruct>_>
              (__return_storage_ptr__,&local_88);
    break;
  case ETrackType_BoolArray:
    local_80.Object = ::operator_new(200);
    if (local_80.Object == (FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0) {
      local_80.Object = (FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_> *)0x0;
    }
    else {
      *(undefined4 *)&(local_80.Object)->field_0x51 = 0;
      *(undefined2 *)&(local_80.Object)->field_0x55 = 0;
      (local_80.Object)->field_0x57 = 0;
      *(undefined8 *)&(local_80.Object)->field_0x70 = 0;
      *(undefined8 *)&(local_80.Object)->field_0x90 = 0;
      *(undefined8 *)&(local_80.Object)->field_0x98 = 0;
      *(undefined8 *)&(local_80.Object)->field_0xc0 = 0;
      (local_80.Object)->field_0x50 = 0;
      *(undefined ***)local_80.Object =
           &___7__FSampleTrack_V__TArray__NV__TSizedDefaultAllocator__0CA_______6B_;
      *(undefined8 *)&(local_80.Object)->field_0x8 = 0;
      *(undefined8 *)&(local_80.Object)->field_0x10 = 0;
      *(undefined8 *)&(local_80.Object)->field_0x18 = 0;
      *(undefined8 *)&(local_80.Object)->field_0x20 = 0;
      *(undefined8 *)&(local_80.Object)->field_0x28 = 0xffffffffffffffff;
      *(undefined8 *)&(local_80.Object)->field_0x30 = 0xffffffffffffffff;
      *(undefined8 *)&(local_80.Object)->field_0x38 = 0xffffffffffffffff;
      *(undefined8 *)&(local_80.Object)->field_0x40 = 0xffffffffffffffff;
      *(undefined8 *)&(local_80.Object)->field_0x48 = 0;
      *(undefined8 *)&(local_80.Object)->field_0x58 = 0;
      *(undefined8 *)&(local_80.Object)->field_0x60 = 0;
      *(undefined8 *)&(local_80.Object)->field_0x68 = 0;
      *(undefined8 *)&(local_80.Object)->field_0x78 = 0;
      *(undefined8 *)&(local_80.Object)->field_0x80 = 0;
      *(undefined8 *)&(local_80.Object)->field_0x88 = 0;
      *(undefined8 *)&(local_80.Object)->field_0xa0 = 0;
      *(undefined8 *)&(local_80.Object)->field_0xa8 = 0;
      *(undefined8 *)&(local_80.Object)->field_0xb0 = 0;
      *(undefined8 *)&(local_80.Object)->field_0xb8 = 0;
    }
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
              (__return_storage_ptr__,&local_80);
    break;
  case ETrackType_Int32Array:
    pFVar14 = ::operator_new(200);
    if (pFVar14 != (FSampleTrackBase *)0x0) {
      memset(&pFVar14->_padding_,0,0xa0);
      *(undefined4 *)((longlong)&pFVar14[1].Names.AllocatorInstance.Data + 4) = 0;
      FSampleTrackBase::FSampleTrackBase(pFVar14);
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      *(undefined4 *)&pFVar14[1].Names.AllocatorInstance.Data = 0;
      pFVar14->_padding_ =
           (longlong)&___7__FSampleTrack_V__TArray_HV__TSizedDefaultAllocator__0CA_______6B_;
    }
    TVar3 = MakeShareable<FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>_>
                      ((FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_78);
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>_>
              (__return_storage_ptr__,
               (TRawPtrProxy<FSampleTrack<TArray<int,TSizedDefaultAllocator<32>_>_>_> *)TVar3.Object
              );
    break;
  case ETrackType_Uint32Array:
    pFVar14 = ::operator_new(200);
    if (pFVar14 != (FSampleTrackBase *)0x0) {
      memset(&pFVar14->_padding_,0,0xa0);
      *(undefined4 *)((longlong)&pFVar14[1].Names.AllocatorInstance.Data + 4) = 0;
      FSampleTrackBase::FSampleTrackBase(pFVar14);
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      *(undefined4 *)&pFVar14[1].Names.AllocatorInstance.Data = 0;
      pFVar14->_padding_ =
           (longlong)&___7__FSampleTrack_V__TArray_IV__TSizedDefaultAllocator__0CA_______6B_;
    }
    TVar4 = MakeShareable<FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>
                      ((FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> *)
                       (local_78 + 8));
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>
              (__return_storage_ptr__,
               (TRawPtrProxy<FSampleTrack<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_> *)
               TVar4.Object);
    break;
  case ETrackType_FloatArray:
    pFVar14 = ::operator_new(200);
    if (pFVar14 != (FSampleTrackBase *)0x0) {
      memset(&pFVar14->_padding_,0,0xa0);
      *(undefined4 *)((longlong)&pFVar14[1].Names.AllocatorInstance.Data + 4) = 0;
      FSampleTrackBase::FSampleTrackBase(pFVar14);
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      *(undefined4 *)&pFVar14[1].Names.AllocatorInstance.Data = 0;
      pFVar14->_padding_ =
           (longlong)&___7__FSampleTrack_V__TArray_MV__TSizedDefaultAllocator__0CA_______6B_;
    }
    TVar5 = MakeShareable<FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                      ((FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_68);
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>_>
              (__return_storage_ptr__,
               (TRawPtrProxy<FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>_> *)
               TVar5.Object);
    break;
  case ETrackType_NameArray:
    pFVar14 = ::operator_new(200);
    if (pFVar14 != (FSampleTrackBase *)0x0) {
      memset(&pFVar14->_padding_,0,0xa0);
      *(undefined4 *)((longlong)&pFVar14[1].Names.AllocatorInstance.Data + 4) = 0;
      FSampleTrackBase::FSampleTrackBase(pFVar14);
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      *(undefined4 *)&pFVar14[1].Names.AllocatorInstance.Data = 0;
      pFVar14->_padding_ =
           (longlong)&___7__FSampleTrack_V__TArray_VFName__V__TSizedDefaultAllocator__0CA_______6B_;
    }
    TVar6 = MakeShareable<FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>_>
                      ((FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_> *)(local_68 + 8));
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>_>
              (__return_storage_ptr__,
               (TRawPtrProxy<FSampleTrack<TArray<FName,TSizedDefaultAllocator<32>_>_>_> *)
               TVar6.Object);
    break;
  case ETrackType_StringArray:
    pFVar14 = ::operator_new(200);
    if (pFVar14 != (FSampleTrackBase *)0x0) {
      memset(&pFVar14->_padding_,0,0xa0);
      *(undefined4 *)((longlong)&pFVar14[1].Names.AllocatorInstance.Data + 4) = 0;
      FSampleTrackBase::FSampleTrackBase(pFVar14);
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      *(undefined4 *)&pFVar14[1].Names.AllocatorInstance.Data = 0;
      pFVar14->_padding_ =
           (longlong)
           &___7__FSampleTrack_V__TArray_VFString__V__TSizedDefaultAllocator__0CA_______6B_;
    }
    TVar7 = MakeShareable<FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                      ((FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_> *)local_58);
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
              (__return_storage_ptr__,
               (TRawPtrProxy<FSampleTrack<TArray<FString,TSizedDefaultAllocator<32>_>_>_> *)
               TVar7.Object);
    break;
  case ETrackType_Vector3fArray:
    pFVar14 = ::operator_new(200);
    if (pFVar14 != (FSampleTrackBase *)0x0) {
      memset(&pFVar14->_padding_,0,0xa0);
      *(undefined4 *)((longlong)&pFVar14[1].Names.AllocatorInstance.Data + 4) = 0;
      FSampleTrackBase::FSampleTrackBase(pFVar14);
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      *(undefined4 *)&pFVar14[1].Names.AllocatorInstance.Data = 0;
      pFVar14->_padding_ =
           (longlong)
           &
           ___7__FSampleTrack_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
      ;
    }
    TVar8 = MakeShareable<FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>
                      ((FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                        *)(local_58 + 8));
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>
              (__return_storage_ptr__,
               (TRawPtrProxy<FSampleTrack<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>
                *)TVar8.Object);
    break;
  case ETrackType_QuatfArray:
    pFVar14 = ::operator_new(200);
    if (pFVar14 != (FSampleTrackBase *)0x0) {
      memset(&pFVar14->_padding_,0,0xa0);
      *(undefined4 *)((longlong)&pFVar14[1].Names.AllocatorInstance.Data + 4) = 0;
      FSampleTrackBase::FSampleTrackBase(pFVar14);
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      *(undefined4 *)&pFVar14[1].Names.AllocatorInstance.Data = 0;
      pFVar14->_padding_ =
           (longlong)
           &
           ___7__FSampleTrack_V__TArray_U__TQuat_M_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
      ;
    }
    TVar9 = MakeShareable<FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>_>
                      ((FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> *)
                       local_48);
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>_>
              (__return_storage_ptr__,
               (TRawPtrProxy<FSampleTrack<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>_>
                *)TVar9.Object);
    break;
  case ETrackType_TransformfArray:
    pFVar14 = ::operator_new(200);
    if (pFVar14 != (FSampleTrackBase *)0x0) {
      memset(&pFVar14->_padding_,0,0xa0);
      *(undefined4 *)((longlong)&pFVar14[1].Names.AllocatorInstance.Data + 4) = 0;
      FSampleTrackBase::FSampleTrackBase(pFVar14);
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      *(undefined4 *)&pFVar14[1].Names.AllocatorInstance.Data = 0;
      pFVar14->_padding_ =
           (longlong)
           &
           ___7__FSampleTrack_V__TArray_U__TTransform_M_Math_UE__V__TSizedDefaultAllocator__0CA_______6B_
      ;
    }
    TVar10 = MakeShareable<FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>_>
                       ((FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
                         *)(local_48 + 8));
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>_>
              (__return_storage_ptr__,
               (TRawPtrProxy<FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>_>
                *)TVar10.Object);
    break;
  case ETrackType_LinearColorArray:
    pFVar14 = ::operator_new(200);
    if (pFVar14 != (FSampleTrackBase *)0x0) {
      memset(&pFVar14->_padding_,0,0xa0);
      *(undefined4 *)((longlong)&pFVar14[1].Names.AllocatorInstance.Data + 4) = 0;
      FSampleTrackBase::FSampleTrackBase(pFVar14);
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      *(undefined4 *)&pFVar14[1].Names.AllocatorInstance.Data = 0;
      pFVar14->_padding_ =
           (longlong)
           &___7__FSampleTrack_V__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA_______6B_;
    }
    TVar11 = MakeShareable<FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>_>
                       ((FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *)local_38)
    ;
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>_>
              (__return_storage_ptr__,
               (TRawPtrProxy<FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>_> *)
               TVar11.Object);
    break;
  case ETrackType_ElementKeyArray:
    pFVar14 = ::operator_new(200);
    if (pFVar14 != (FSampleTrackBase *)0x0) {
      memset(&pFVar14->_padding_,0,0xa0);
      *(undefined4 *)((longlong)&pFVar14[1].Names.AllocatorInstance.Data + 4) = 0;
      FSampleTrackBase::FSampleTrackBase(pFVar14);
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      *(undefined4 *)&pFVar14[1].Names.AllocatorInstance.Data = 0;
      pFVar14->_padding_ =
           (longlong)
           &___7__FSampleTrack_V__TArray_UFRigElementKey__V__TSizedDefaultAllocator__0CA_______6B_;
    }
    TVar12 = MakeShareable<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>
                       ((FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *)
                        (local_38 + 8));
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_>
              (__return_storage_ptr__,
               (TRawPtrProxy<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_> *)
               TVar12.Object);
    break;
  case ETrackType_ComponentKeyArray:
    pFVar14 = ::operator_new(200);
    if (pFVar14 != (FSampleTrackBase *)0x0) {
      memset(&pFVar14->_padding_,0,0xa0);
      *(undefined4 *)((longlong)&pFVar14[1].Names.AllocatorInstance.Data + 4) = 0;
      FSampleTrackBase::FSampleTrackBase(pFVar14);
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      *(undefined4 *)&pFVar14[1].Names.AllocatorInstance.Data = 0;
      pFVar14->_padding_ =
           (longlong)
           &___7__FSampleTrack_V__TArray_UFRigComponentKey__V__TSizedDefaultAllocator__0CA_______6B_
      ;
    }
    TVar13 = MakeShareable<FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>_>
                       ((FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_> *)
                        local_28);
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>_>
              (__return_storage_ptr__,
               (TRawPtrProxy<FSampleTrack<TArray<FRigComponentKey,TSizedDefaultAllocator<32>_>_>_> *
               )TVar13.Object);
    break;
  case ETrackType_StructArray:
    pFVar14 = ::operator_new(200);
    if (pFVar14 != (FSampleTrackBase *)0x0) {
      memset(&pFVar14->_padding_,0,0xa0);
      *(undefined4 *)((longlong)&pFVar14[1].Names.AllocatorInstance.Data + 4) = 0;
      FSampleTrackBase::FSampleTrackBase(pFVar14);
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      pFVar14[1]._padding_ = 0;
      *(undefined4 *)&pFVar14[1].Names.AllocatorInstance.Data = 0;
      pFVar14->_padding_ =
           (longlong)
           &___7__FSampleTrack_V__TArray_UFInstancedStruct__V__TSizedDefaultAllocator__0CA_______6B_
      ;
    }
    TVar15 = MakeShareable<FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>_>
                       ((FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_> *)
                        (local_28 + 8));
    TSharedPtr<FSampleTrackBase,1>::
    TSharedPtr<FSampleTrackBase,1><FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>_>
              (__return_storage_ptr__,
               (TRawPtrProxy<FSampleTrack<TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>_> *
               )TVar15.Object);
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackContainer.cpp"
                       ,0x37d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar16 = (TSharedPtr<FSampleTrackBase,1> *)(*pcVar1)();
      return pTVar16;
    }
    __return_storage_ptr__->Object = (FSampleTrackBase *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// MergeTypedTracks @ 14a42d680

void __thiscall
FSampleTrackContainer::MergeTypedTracks(FSampleTrackContainer *this,bool param_1,float param_2)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FSampleTrackBase *pFVar3;
  TSharedPtr<FSampleTrackBase,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  ETrackType EVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  TSharedPtr<FSampleTrackBase,1> *pTVar17;
  longlong *plVar18;
  int iVar19;
  FTrackGroup *pFVar20;
  longlong *plVar21;
  int iVar22;
  ForAnyElementType FVar23;
  undefined8 *puVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  ulonglong uVar27;
  uint uVar28;
  undefined1 local_res20 [8];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5 [5];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  TSharedPtr<FSampleTrackBase,1> local_a8;
  uint local_98;
  FTrackGroup *local_90;
  int local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  FTrackGroup *local_60;
  TSharedPtr<FSampleTrackBase,1> local_58 [2];
  
  uVar28 = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  if ((this->Tracks).ArrayNum < 1) {
LAB_14a42d925:
    FVar23.Data = local_c0.Data;
    uVar27 = (ulonglong)(int)(uint)local_b8;
    local_98 = (uint)local_b8;
    uVar15 = uVar27;
    if ((uint)local_b8 != 0) {
      uVar15 = 0;
      bVar8 = 1 < *(int *)(local_c0.Data + 0x18);
      lVar25 = 0;
      iVar12 = 0;
      do {
        lVar25 = lVar25 + 1;
        iVar22 = iVar12 + 1;
        if (lVar25 < (longlong)uVar27) {
          pFVar16 = FVar23.Data + lVar25 * 0x20 + 0x18;
          do {
            if (bVar8 != 1 < *(int *)pFVar16) break;
            iVar22 = iVar22 + 1;
            lVar25 = lVar25 + 1;
            pFVar16 = pFVar16 + 0x20;
          } while (lVar25 < (longlong)uVar27);
        }
        iVar19 = iVar22 - iVar12;
        if (bVar8 == false) {
          DestructItems<_FSampleTrackContainer::MergeTypedTracks_::__l2::FTrackGroup,int>
                    ((FTrackGroup *)(FVar23.Data + (longlong)iVar12 * 0x20),iVar19);
        }
        else {
          iVar13 = (int)uVar15;
          if (iVar13 != iVar12) {
            memmove(FVar23.Data + (longlong)iVar13 * 0x20,FVar23.Data + (longlong)iVar12 * 0x20,
                    (longlong)iVar19 << 5);
          }
          uVar15 = (ulonglong)(uint)(iVar13 + iVar19);
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar12 = iVar22;
      } while (lVar25 < (longlong)uVar27);
      local_98 = (uint)uVar15;
      local_b8 = CONCAT44(local_b8._4_4_,local_98);
    }
    local_60 = (FTrackGroup *)(local_c0.Data + (longlong)(int)uVar15 * 0x20);
    pFVar16 = local_c0.Data + 0x10;
    FVar23.Data = local_c0.Data;
    do {
      pFVar20 = local_60;
      local_90 = (FTrackGroup *)FVar23.Data;
      local_68 = pFVar16;
      if ((uint)local_b8 != (int)uVar15) {
        local_c8 = 0;
        `TCheckedPointerIterator<`FSampleTrackContainer::MergeTypedTracks'::__l2::FTrackGroup,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_c8);
      }
      if ((FTrackGroup *)FVar23.Data == pFVar20) {
        if (((uint)local_b8 != 0) && (param_1)) {
          UpdateNameToIndexMap(this);
        }
        DestructItems<_FSampleTrackContainer::MergeTypedTracks_::__l2::FTrackGroup,int>
                  ((FTrackGroup *)local_c0.Data,(uint)local_b8);
        if ((FTrackGroup *)local_c0.Data != (FTrackGroup *)0x0) {
          FMemory::Free(local_c0.Data);
        }
        return;
      }
      MakeTrack(&local_a8,((FTrackGroup *)FVar23.Data)->TrackType);
      pFVar3 = local_a8.Object;
      if ((local_a8.Object == (FSampleTrackBase *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = 0;
      (pFVar3->Names).ArrayNum = 0;
      if ((pFVar3->Names).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(pFVar3->Names).AllocatorInstance,0,&(pFVar3->Names).ArrayMax);
      }
      pFVar3 = local_a8.Object;
      if ((local_a8.Object == (FSampleTrackBase *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar3->Mode = EMode_Raw;
      local_58[0].Object = local_a8.Object;
      local_58[0].SharedReferenceCount.ReferenceController =
           local_a8.SharedReferenceCount.ReferenceController;
      pFVar3->ScriptStruct = ((FTrackGroup *)FVar23.Data)->ScriptStruct;
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      AddTrack(this,local_58,true);
      iVar22 = *(int *)(pFVar16 + 8);
      plVar18 = *(longlong **)pFVar16;
      plVar21 = plVar18 + (longlong)iVar22 * 2;
      while( true ) {
        if (*(int *)(pFVar16 + 8) != iVar22) {
          local_c7 = 0;
          `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_c7);
        }
        if (plVar18 == plVar21) break;
        if ((*plVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar25 = *plVar18;
        cVar9 = *(char *)(lVar25 + 0x50);
        if (cVar9 == '\x01') {
          iVar19 = 1;
        }
        else if (cVar9 == '\x02') {
          iVar19 = *(int *)(lVar25 + 0x70);
        }
        else {
          iVar19 = 0;
          if (cVar9 == '\x03') {
            iVar19 = *(int *)(lVar25 + 0x98);
          }
        }
        iVar12 = iVar12 + iVar19;
        if ((lVar25 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(*(longlong *)*plVar18 + 0x10))();
        plVar18 = plVar18 + 2;
      }
      if ((local_a8.Object == (FSampleTrackBase *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (**(code **)((local_a8.Object)->_padding_ + 0x20))(local_a8.Object,iVar12);
      iVar12 = (local_90->Tracks).ArrayNum;
      pFVar16 = (local_90->Tracks).AllocatorInstance.Data;
      pFVar26 = pFVar16 + (longlong)iVar12 * 0x10;
      while( true ) {
        pFVar20 = local_90;
        if ((local_90->Tracks).ArrayNum != iVar12) {
          local_c6 = 0;
          `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_c6);
        }
        if (pFVar16 == pFVar26) break;
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(**(longlong **)pFVar16 + 0xa8))();
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(**(longlong **)pFVar16 + 0xb0))(*(longlong **)pFVar16,0);
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(**(longlong **)pFVar16 + 0x30))();
        if ((local_a8.Object == (FSampleTrackBase *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar3 = local_a8.Object;
        iVar22 = ((local_a8.Object)->TimeIndicesStorage).ArrayNum;
        pTVar2 = &(local_a8.Object)->TimeIndicesStorage;
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar25 = *(longlong *)pFVar16;
        puVar24 = (undefined8 *)(lVar25 + 0x58);
        if ((pTVar2 == (TArray<int,TSizedDefaultAllocator<32>_> *)puVar24) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = *(int *)(lVar25 + 0x60);
        if (iVar19 != 0) {
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,iVar19,&pTVar2->AllocatorInstance,
                              &(pFVar3->TimeIndicesStorage).ArrayNum,
                              &(pFVar3->TimeIndicesStorage).ArrayMax);
          memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 4,(void *)*puVar24,
                 (longlong)iVar19 << 2);
        }
        if ((local_a8.Object == (FSampleTrackBase *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar14 = (**(code **)((local_a8.Object)->_padding_ + 0x78))();
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uStack_84 = *(undefined4 *)(*(longlong *)pFVar16 + 0x60);
        local_88 = iVar22;
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_78 = uVar14;
        uStack_74 = (**(code **)(**(longlong **)pFVar16 + 0x10))();
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(**(longlong **)pFVar16 + 0x38))();
        if ((local_a8.Object == (FSampleTrackBase *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar22 = (local_a8.Object)->TrackIndex;
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(int *)(*(longlong *)pFVar16 + 0x2c) = iVar22;
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_80 = 0xffffffffffffffff;
        *(ulonglong *)(*(longlong *)pFVar16 + 0x30) = CONCAT44(uStack_84,local_88);
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined8 *)(*(longlong *)pFVar16 + 0x38) = local_80;
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(ulonglong *)(*(longlong *)pFVar16 + 0x40) = CONCAT44(uStack_74,local_78);
        if ((*(longlong *)pFVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(**(longlong **)pFVar16 + 0x70))();
        pFVar16 = pFVar16 + 0x10;
      }
      if ((local_a8.Object == (FSampleTrackBase *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      cVar9 = (**(code **)((local_a8.Object)->_padding_ + 0xa0))(local_a8.Object,0,param_2);
      if (cVar9 != '\0') {
        iVar12 = (pFVar20->Tracks).ArrayNum;
        pFVar16 = (pFVar20->Tracks).AllocatorInstance.Data;
        pFVar26 = pFVar16 + (longlong)iVar12 * 0x10;
        while( true ) {
          if ((pFVar20->Tracks).ArrayNum != iVar12) {
            local_c5[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_c5);
          }
          if (pFVar16 == pFVar26) break;
          if ((*(longlong *)pFVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar6 = *(undefined8 *)(*(longlong *)pFVar16 + 0x40);
          if ((*(longlong *)pFVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined8 *)(*(longlong *)pFVar16 + 0x38) = uVar6;
          if ((local_a8.Object == (FSampleTrackBase *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_70 = 0;
          uStack_6c = (**(code **)((local_a8.Object)->_padding_ + 0x10))();
          if ((*(longlong *)pFVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(ulonglong *)(*(longlong *)pFVar16 + 0x40) = CONCAT44(uStack_6c,local_70);
          if ((*(longlong *)pFVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (**(code **)(**(longlong **)pFVar16 + 0x70))();
          pFVar16 = pFVar16 + 0x10;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      FVar23.Data = (FScriptContainerElement *)(pFVar20 + 1);
      uVar15 = (ulonglong)local_98;
      pFVar16 = local_68 + 0x20;
    } while( true );
  }
  lVar25 = 0;
LAB_14a42d6d0:
  uVar11 = 0;
  if ((int)uVar28 < (this->Tracks).ArrayNum) {
    uVar11 = ~uVar28 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar17 = (TSharedPtr<FSampleTrackBase,1> *)((this->Tracks).AllocatorInstance.Data + lVar25);
  pFVar3 = pTVar17->Object;
  if ((((pFVar3 != (FSampleTrackBase *)0x0) && (pFVar3->Mode != EMode_Invalid)) &&
      (pFVar3->ReferencedTrackIndex == -1)) &&
     (cVar9 = (**(code **)(pFVar3->_padding_ + 0x48))(pFVar3), cVar9 == '\0')) {
    if ((pTVar17->Object == (FSampleTrackBase *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar17->Object->TrackIndex = uVar28;
    iVar12 = (uint)local_b8;
    uVar15 = (ulonglong)(int)(uint)local_b8;
    pFVar20 = (FTrackGroup *)(local_c0.Data + uVar15 * 0x20);
    FVar23.Data = local_c0.Data;
    do {
      iVar22 = (int)uVar15;
      if ((int)uVar15 != iVar12) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<`FSampleTrackContainer::MergeTypedTracks'::__l2::FTrackGroup,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        iVar22 = (uint)local_b8;
      }
      if ((FTrackGroup *)FVar23.Data == pFVar20) {
        if (iVar22 == local_b8._4_4_) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_c0,(int *)((longlong)&local_b8 + 4));
        }
        local_b8 = CONCAT44(local_b8._4_4_,iVar22 + 1);
        `FSampleTrackContainer::MergeTypedTracks'::__l2::FTrackGroup::FTrackGroup
                  (local_c0.Data + (longlong)iVar22 * 0x20,pTVar17);
        break;
      }
      if ((pTVar17->Object == (FSampleTrackBase *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      EVar10 = (**(code **)(pTVar17->Object->_padding_ + 8))();
      if (((FTrackGroup *)FVar23.Data)->TrackType == EVar10) {
        if ((pTVar17->Object == (FSampleTrackBase *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((FTrackGroup *)FVar23.Data)->ScriptStruct == pTVar17->Object->ScriptStruct)
        goto LAB_14a42d83c;
      }
      uVar15 = local_b8 & 0xffffffff;
      FVar23.Data = FVar23.Data + 0x20;
    } while( true );
  }
  goto LAB_14a42d914;
LAB_14a42d83c:
  pTVar4 = (TSharedPtr<FSampleTrackBase,1> *)
           (((FTrackGroup *)FVar23.Data)->Tracks).AllocatorInstance.Data;
  if (((pTVar4 <= pTVar17) && (pTVar17 < pTVar4 + (((FTrackGroup *)FVar23.Data)->Tracks).ArrayMax))
     && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar12 = (((FTrackGroup *)FVar23.Data)->Tracks).ArrayNum;
  piVar1 = &(((FTrackGroup *)FVar23.Data)->Tracks).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(((FTrackGroup *)FVar23.Data)->Tracks).AllocatorInstance,piVar1);
  }
  (((FTrackGroup *)FVar23.Data)->Tracks).ArrayNum = iVar12 + 1;
  pFVar16 = (((FTrackGroup *)FVar23.Data)->Tracks).AllocatorInstance.Data;
  *(FSampleTrackBase **)(pFVar16 + (longlong)iVar12 * 0x10) = pTVar17->Object;
  pTVar5 = (pTVar17->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar16 + (longlong)iVar12 * 0x10 + 8) = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_14a42d914:
  uVar28 = uVar28 + 1;
  lVar25 = lVar25 + 0x10;
  if ((this->Tracks).ArrayNum <= (int)uVar28) goto LAB_14a42d925;
  goto LAB_14a42d6d0;
}

// RemoveInvalidTracks @ 14a442be0

void __thiscall FSampleTrackContainer::RemoveInvalidTracks(FSampleTrackContainer *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  byte bVar15;
  int iVar16;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,(this->Tracks).ArrayNum,&local_48.AllocatorInstance,&local_48.ArrayNum,
             &local_48.ArrayMax);
  iVar16 = 0;
  uVar7 = 0;
  if (0 < (this->Tracks).ArrayNum) {
    lVar8 = 0;
    lVar14 = 0;
    do {
      uVar10 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < (this->Tracks).ArrayNum) {
        uVar4 = uVar10;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (*(longlong *)((this->Tracks).AllocatorInstance.Data + lVar14) == 0) {
LAB_14a442d7d:
        uVar4 = 0;
        if ((int)uVar7 < local_48.ArrayNum) {
          uVar4 = uVar10;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        *(undefined4 *)(local_48.AllocatorInstance.Data + lVar8 * 4) = 0xffffffff;
      }
      else {
        uVar4 = 0;
        if ((int)uVar7 < (this->Tracks).ArrayNum) {
          uVar4 = uVar10;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar1 = (this->Tracks).AllocatorInstance.Data;
        if (*(longlong *)(pFVar1 + lVar14) == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (*(char *)(*(longlong *)(pFVar1 + lVar14) + 0x50) == '\0') goto LAB_14a442d7d;
        uVar4 = 0;
        if ((int)uVar7 < local_48.ArrayNum) {
          uVar4 = uVar10;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        *(int *)(local_48.AllocatorInstance.Data + lVar8 * 4) = iVar16;
        iVar16 = iVar16 + 1;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
      lVar14 = lVar14 + 0x10;
    } while ((int)uVar7 < (this->Tracks).ArrayNum);
  }
  iVar16 = (this->Tracks).ArrayNum;
  lVar8 = (longlong)iVar16;
  if (iVar16 != 0) {
    iVar13 = 0;
    pFVar1 = (this->Tracks).AllocatorInstance.Data;
    if ((*(longlong *)pFVar1 == 0) || (*(char *)(*(longlong *)pFVar1 + 0x50) == '\0')) {
      bVar15 = 0;
    }
    else {
      bVar15 = 1;
    }
    lVar14 = 0;
    iVar11 = 0;
    do {
      lVar14 = lVar14 + 1;
      iVar12 = iVar11 + 1;
      if (lVar14 < lVar8) {
        pFVar5 = pFVar1 + lVar14 * 0x10;
        do {
          if ((*(longlong *)pFVar5 == 0) || (*(char *)(*(longlong *)pFVar5 + 0x50) == '\0')) {
            bVar6 = 0;
          }
          else {
            bVar6 = 1;
          }
          if (bVar15 != bVar6) break;
          iVar12 = iVar12 + 1;
          lVar14 = lVar14 + 1;
          pFVar5 = pFVar5 + 0x10;
        } while (lVar14 < lVar8);
      }
      iVar9 = iVar12 - iVar11;
      if (bVar15 == 0) {
        DestructItems<TSharedPtr<FSampleTrackBase,1>,int>
                  ((TSharedPtr<FSampleTrackBase,1> *)(pFVar1 + (longlong)iVar11 * 0x10),iVar9);
      }
      else {
        if (iVar13 != iVar11) {
          memmove(pFVar1 + (longlong)iVar13 * 0x10,pFVar1 + (longlong)iVar11 * 0x10,
                  (longlong)iVar9 << 4);
        }
        iVar13 = iVar13 + iVar9;
      }
      bVar15 = bVar15 ^ 1;
      iVar11 = iVar12;
    } while (lVar14 < lVar8);
    (this->Tracks).ArrayNum = iVar13;
    if (0 < iVar16 - iVar13) {
      UpdateTrackIndices(this,&local_48);
      if (param_1) {
        UpdateNameToIndexMap(this);
      }
    }
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// RemoveRedundantTracks @ 14a44c4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSampleTrackContainer::RemoveRedundantTracks(FSampleTrackContainer *this,bool param_1,float param_2)

{
  longlong *plVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  FSampleTrackContainer *pFVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType *pFVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType *pFVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined1 auStackY_168 [32];
  uint local_118;
  ForAnyElementType local_110;
  int local_108;
  int iStack_104;
  undefined1 local_100;
  bool local_ff;
  uint local_fc;
  int local_f8 [2];
  longlong local_f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_e8;
  longlong local_d8;
  int local_d0;
  ForAnyElementType local_c8;
  int local_c0 [2];
  longlong local_b8;
  uint local_b0;
  uint local_ac;
  longlong local_a8;
  longlong local_a0;
  FScriptContainerElement *local_98;
  longlong local_90;
  longlong local_88;
  FSampleTrackContainer *local_80;
  longlong local_78;
  undefined8 local_70;
  FSharedReferencer<1> FStack_68;
  FScriptContainerElement local_60;
  undefined1 uStack_5f;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar23 = (this->Tracks).ArrayNum;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  iStack_104 = 0;
  local_ff = param_1;
  local_80 = this;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  if (0 < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar23,&local_110,0,&iStack_104);
  }
  iVar10 = (this->Tracks).ArrayNum;
  pFVar12 = (this->Tracks).AllocatorInstance.Data;
  pFVar17 = pFVar12 + (longlong)iVar10 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar10) {
      local_100 = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_100);
    }
    if (pFVar12 == pFVar17) break;
    plVar1 = *(longlong **)pFVar12;
    if ((plVar1 == (longlong *)0x0) || ((char)plVar1[10] == '\0')) {
      uStack_5f = 0;
      if (((local_110.Data <= &local_60) &&
          (&local_60 < local_110.Data + (longlong)iStack_104 * 0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_108 == iStack_104) {
        local_108 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&local_110,&iStack_104);
      }
      lVar11 = (longlong)local_108;
      pFVar12 = pFVar12 + 0x10;
      local_108 = local_108 + 1;
      *(ulonglong *)(local_110.Data + lVar11 * 0xc) =
           CONCAT44(uStack_5c,CONCAT22(uStack_5e,CONCAT11(uStack_5f,local_60)));
      *(undefined4 *)(local_110.Data + lVar11 * 0xc + 8) = local_58;
    }
    else {
      local_60 = (FScriptContainerElement)(**(code **)(*plVar1 + 8))(plVar1);
      if ((*(longlong *)pFVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_5f = *(undefined1 *)(*(longlong *)pFVar12 + 0x50);
      if ((*(longlong *)pFVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_5c = *(undefined4 *)(*(longlong *)pFVar12 + 0x98);
      if ((*(longlong *)pFVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar11 = *(longlong *)pFVar12;
      cVar6 = *(char *)(lVar11 + 0x50);
      if (cVar6 == '\x01') {
        local_58 = 1;
      }
      else if (cVar6 == '\x02') {
        local_58 = *(undefined4 *)(lVar11 + 0x70);
      }
      else {
        local_58 = 0;
        if (cVar6 == '\x03') {
          local_58 = *(undefined4 *)(lVar11 + 0x98);
        }
      }
      if (((local_110.Data <= &local_60) &&
          (&local_60 < local_110.Data + (longlong)iStack_104 * 0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_108 == iStack_104) {
        local_108 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&local_110,&iStack_104);
      }
      pFVar12 = pFVar12 + 0x10;
      *(ulonglong *)(local_110.Data + (longlong)local_108 * 0xc) =
           CONCAT44(uStack_5c,CONCAT22(uStack_5e,CONCAT11(uStack_5f,local_60)));
      *(undefined4 *)(local_110.Data + (longlong)local_108 * 0xc + 8) = local_58;
      local_108 = local_108 + 1;
    }
  }
  iVar10 = (this->Tracks).ArrayNum;
  local_d0 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0[0] = 0;
  local_c0[1] = 0;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar10,&local_c8,local_c0,local_c0 + 1);
  memset(local_c8.Data + iVar7,0,(longlong)iVar10);
  uVar23 = (this->Tracks).ArrayNum;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  if (0 < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar23,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
  }
  iVar10 = (this->Tracks).ArrayNum;
  local_f8[0] = 0;
  if (0 < iVar10) {
    do {
      if (((local_e8.AllocatorInstance.Data <= (FScriptContainerElement *)local_f8) &&
          ((FScriptContainerElement *)local_f8 <
           local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_e8.ArrayNum == local_e8.ArrayMax) {
        local_e8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
      }
      iVar7 = local_e8.ArrayNum + 1;
      *(int *)(local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 4) = local_f8[0];
      iVar10 = (this->Tracks).ArrayNum;
      local_f8[0] = local_f8[0] + 1;
      local_e8.ArrayNum = iVar7;
    } while (local_f8[0] < iVar10);
  }
  local_118 = 0;
  if (0 < iVar10 + -1) {
    local_d8 = 0;
    local_a8 = 0;
    local_a0 = 0;
    do {
      lVar19 = local_a0;
      lVar9 = local_a8;
      lVar11 = local_d8;
      local_fc = ~local_118 >> 0x1f;
      uVar23 = 0;
      if ((int)local_118 < local_c0[0]) {
        uVar23 = local_fc;
      }
      if ((uVar23 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_c8.Data[lVar11] == (FScriptContainerElement)0x0) {
        uVar23 = 0;
        if ((int)local_118 < local_108) {
          uVar23 = local_fc;
        }
        if ((uVar23 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_110.Data[lVar19 + 1] != (FScriptContainerElement)0x0) {
          uVar23 = 0;
          if ((int)local_118 < (this->Tracks).ArrayNum) {
            uVar23 = local_fc;
          }
          if ((uVar23 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_98 = (this->Tracks).AllocatorInstance.Data;
          uVar23 = local_118 + 1;
          lVar20 = local_d8 + 1;
          lVar11 = local_d8;
          local_b0 = uVar23;
          local_90 = lVar20;
          if ((int)uVar23 < (this->Tracks).ArrayNum) {
            local_f0 = lVar9 + 0x10;
            lVar22 = lVar19 + 0xc;
            do {
              uVar25 = ~uVar23 >> 0x1f;
              uVar8 = 0;
              if ((int)uVar23 < local_c0[0]) {
                uVar8 = uVar25;
              }
              local_b0 = uVar23;
              local_ac = uVar25;
              local_90 = lVar20;
              local_88 = lVar22;
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (local_c8.Data[lVar20] == (FScriptContainerElement)0x0) {
                uVar8 = 0;
                if ((int)local_118 < local_108) {
                  uVar8 = local_fc;
                }
                if ((uVar8 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (local_110.Data[lVar19 + 1] != (FScriptContainerElement)0x0) {
                  uVar8 = 0;
                  if ((int)local_118 < local_108) {
                    uVar8 = local_fc;
                  }
                  if ((uVar8 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  FVar3.Data = local_110.Data;
                  uVar8 = 0;
                  if ((int)uVar23 < local_108) {
                    uVar8 = uVar25;
                  }
                  if ((uVar8 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar4 = local_80;
                  lVar11 = local_d8;
                  if ((((FVar3.Data[lVar19] == local_110.Data[lVar22]) &&
                       (FVar3.Data[lVar19 + 1] == local_110.Data[lVar22 + 1])) &&
                      (*(int *)(FVar3.Data + lVar19 + 4) == *(int *)(local_110.Data + lVar22 + 4)))
                     && (*(int *)(FVar3.Data + lVar19 + 8) == *(int *)(local_110.Data + lVar22 + 8))
                     ) {
                    uVar8 = 0;
                    if ((int)uVar23 < (local_80->Tracks).ArrayNum) {
                      uVar8 = uVar25;
                    }
                    if ((uVar8 == 0) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar5)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pFVar17 = local_98;
                    pFVar12 = (pFVar4->Tracks).AllocatorInstance.Data;
                    if ((*(longlong *)(local_98 + lVar9) == 0) &&
                       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar5)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    cVar6 = (**(code **)(**(longlong **)(pFVar17 + lVar9) + 0x18))
                                      (*(longlong **)(pFVar17 + lVar9),
                                       *(undefined8 *)(pFVar12 + local_f0),param_2);
                    lVar11 = local_d8;
                    lVar19 = local_a0;
                    if (cVar6 != '\0') {
                      if ((*(longlong *)(pFVar17 + lVar9) == 0) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar5)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      lVar19 = local_f0;
                      lVar11 = *(longlong *)(pFVar17 + lVar9);
                      pFVar13 = (ForAnyElementType *)(lVar11 + 0x18);
                      if ((*(longlong *)(pFVar12 + local_f0) == 0) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar5)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      lVar9 = *(longlong *)(pFVar12 + lVar19);
                      pFVar18 = (ForAnyElementType *)(lVar9 + 0x18);
                      if ((pFVar13 == pFVar18) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(void*)this != (void*)&Source",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x96e,L""), bVar5)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      iVar10 = *(int *)(lVar9 + 0x20);
                      if (iVar10 != 0) {
                        iVar7 = UE::Core::Private::
                                ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (8,4,iVar10,pFVar13,(int *)(lVar11 + 0x20),
                                           (int *)(lVar11 + 0x24));
                        memcpy(pFVar13->Data + (longlong)iVar7 * 8,pFVar18->Data,
                               (longlong)iVar10 << 3);
                      }
                      pFVar12 = local_98;
                      lVar9 = local_a8;
                      if ((*(longlong *)(local_98 + local_a8) == 0) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar5)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      lVar11 = *(longlong *)(pFVar12 + lVar9);
                      local_b8 = 0;
                      local_78 = lVar11;
                      if (((*(longlong **)(lVar11 + 0x18) <= &local_b8) &&
                          (&local_b8 < *(longlong **)(lVar11 + 0x18) + *(int *)(lVar11 + 0x24))) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar5)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      iVar10 = *(int *)(lVar11 + 0x20);
                      if (iVar10 != 0) {
                        plVar1 = *(longlong **)(lVar11 + 0x18);
                        iVar21 = 0;
                        lVar11 = 0;
                        bVar5 = *plVar1 != local_b8;
                        lVar9 = local_b8;
                        iVar7 = 0;
                        do {
                          iVar16 = iVar7;
                          do {
                            lVar11 = lVar11 + 1;
                            iVar16 = iVar16 + 1;
                            if (iVar10 <= lVar11) break;
                          } while (bVar5 == (plVar1[lVar11] != lVar9));
                          if (bVar5 != false) {
                            if (iVar21 != iVar7) {
                              memmove(plVar1 + iVar21,plVar1 + iVar7,(longlong)(iVar16 - iVar7) << 3
                                     );
                              lVar9 = local_b8;
                            }
                            iVar21 = iVar21 + (iVar16 - iVar7);
                          }
                          bVar5 = (bool)(bVar5 ^ 1);
                          iVar7 = iVar16;
                        } while (lVar11 < iVar10);
                        *(int *)(local_78 + 0x20) = iVar21;
                        lVar9 = local_a8;
                        lVar20 = local_90;
                        lVar22 = local_88;
                        uVar25 = local_ac;
                        uVar23 = local_b0;
                      }
                      uVar8 = 0;
                      if ((int)uVar23 < local_c0[0]) {
                        uVar8 = uVar25;
                      }
                      if ((uVar8 == 0) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar5)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      local_c8.Data[lVar20] = (FScriptContainerElement)0x1;
                      uVar8 = 0;
                      if ((int)uVar23 < local_e8.ArrayNum) {
                        uVar8 = uVar25;
                      }
                      if ((uVar8 == 0) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar5)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      local_d0 = local_d0 + 1;
                      *(uint *)(local_e8.AllocatorInstance.Data + lVar20 * 4) = local_118;
                      lVar11 = local_d8;
                      lVar19 = local_a0;
                    }
                  }
                }
              }
              uVar23 = uVar23 + 1;
              lVar20 = lVar20 + 1;
              lVar22 = lVar22 + 0xc;
              local_f0 = local_f0 + 0x10;
              this = local_80;
              local_b0 = uVar23;
              local_90 = lVar20;
              local_88 = lVar22;
            } while ((int)uVar23 < (local_80->Tracks).ArrayNum);
          }
        }
      }
      iVar10 = (this->Tracks).ArrayNum;
      local_118 = local_118 + 1;
      local_d8 = lVar11 + 1;
      local_a8 = lVar9 + 0x10;
      local_a0 = lVar19 + 0xc;
    } while ((int)local_118 < iVar10 + -1);
    if (local_d0 != 0) {
      uVar14 = 0;
      uVar15 = uVar14;
      uVar24 = uVar14;
      if (0 < iVar10) {
        do {
          uVar25 = (uint)uVar14;
          uVar23 = 0;
          if ((int)uVar25 < local_c0[0]) {
            uVar23 = ~uVar25 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_c8.Data[uVar15] != (FScriptContainerElement)0x0) {
            uVar23 = 0;
            if ((int)uVar25 < (this->Tracks).ArrayNum) {
              uVar23 = ~uVar25 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar12 = (this->Tracks).AllocatorInstance.Data + uVar24;
            local_70 = 0;
            FStack_68.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (pFVar12 != (FScriptContainerElement *)&local_70) {
              *(undefined8 *)pFVar12 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(pFVar12 + 8),&FStack_68);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_68.ReferenceController);
          }
          uVar14 = (ulonglong)(uVar25 + 1);
          uVar15 = uVar15 + 1;
          uVar24 = uVar24 + 0x10;
        } while ((int)(uVar25 + 1) < (this->Tracks).ArrayNum);
      }
      UpdateTrackIndices(this,&local_e8);
      RemoveInvalidTracks(this,local_ff);
    }
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  return;
}

// Reserve @ 14a44f020

void __thiscall FSampleTrackContainer::Reserve(FSampleTrackContainer *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  iVar1 = (this->Tracks).ArrayNum;
  pFVar4 = (this->Tracks).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar4 + 0x20))(*(longlong **)pFVar4,param_1,param_1);
    pFVar4 = pFVar4 + 0x10;
  }
  iVar1 = (this->Tracks).ArrayNum;
  pFVar4 = (this->Tracks).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar4 + 0x70))();
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// Reset @ 14a450000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSampleTrackContainer::Reset(FSampleTrackContainer *this)

{
  int *piVar1;
  TSharedPtr<FSampleTrackBase,1> *pTVar2;
  int iVar3;
  ForElementType<int> FVar4;
  undefined1 auStackY_68 [32];
  ForElementType<int> local_38;
  int local_28;
  int local_24;
  bool local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->NameToIndex);
  piVar1 = &(this->Tracks).ArrayMax;
  pTVar2 = (TSharedPtr<FSampleTrackBase,1> *)(this->Tracks).AllocatorInstance.Data;
  iVar3 = (this->Tracks).ArrayNum;
  if ((this->Tracks).ArrayMax < 0) {
    DestructItems<TSharedPtr<FSampleTrackBase,1>,int>(pTVar2,iVar3);
    (this->Tracks).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Tracks).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FSampleTrackBase,1>,int>(pTVar2,iVar3);
    (this->Tracks).ArrayNum = 0;
  }
  local_38.SecondaryData = (ForElementType<int>)0x0;
  local_28 = 0;
  local_24 = 1;
  local_20 = false;
  iVar3 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,1,&local_38,&local_28,&local_24);
  FVar4 = (ForElementType<int>)&local_38;
  if (local_38.SecondaryData != (ForElementType<int>)0x0) {
    FVar4 = local_38.SecondaryData;
  }
  *(undefined4 *)((longlong)FVar4 + (longlong)iVar3 * 4) = 0;
  local_20 = true;
  if (&this->TimeSampleTrackIndex != (FSampleTrackIndex *)&local_38) {
    if (local_38.SecondaryData == (ForElementType<int>)0x0) {
      *&(this->TimeSampleTrackIndex).Samples.AllocatorInstance.InlineData = local_38.InlineData;
    }
    FVar4 = (this->TimeSampleTrackIndex).Samples.AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    (this->TimeSampleTrackIndex).Samples.AllocatorInstance.SecondaryData = local_38.SecondaryData;
    (this->TimeSampleTrackIndex).Samples.ArrayNum = local_28;
    (this->TimeSampleTrackIndex).Samples.ArrayMax = local_24;
    local_24 = 1;
    local_38.SecondaryData = (ForElementType<int>)0x0;
    local_28 = 0;
  }
  (this->TimeSampleTrackIndex).bIsSingleton = local_20;
  if (local_38.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_38.SecondaryData);
  }
  return;
}

// Serialize @ 14a456be0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FSampleTrackContainer::Serialize(FSampleTrackContainer *this,FArchive *param_1)

{
  int *piVar1;
  byte bVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  uint *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  undefined1 uVar14;
  FNameEntryId FVar15;
  uint uVar16;
  undefined4 extraout_var;
  FSampleTrackMemoryReader *this_00;
  undefined8 uVar17;
  TSharedPtr<FSampleTrackBase,1> *pTVar18;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FSampleTrackMemoryWriter *pFVar19;
  longlong lVar20;
  longlong lVar21;
  FSampleTrackMemoryWriter *pFVar22;
  int iVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  bool local_res8;
  ETrackType local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8;
  undefined1 local_f7 [3];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_e0;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  FSampleTrackMemoryData local_c0;
  int local_90 [2];
  uint local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 uStack_74;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [8];
  TSharedPtr<FSampleTrackBase,1> local_60 [2];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FControlRigObjectVersion::GUID);
  if ((this->bForceToUseCompression == false) &&
     ((((*(uint *)&param_1->field_0x34 & 0x1000) != 0 || ((param_1->field_0x29 & 1) == 0)) ||
      ((param_1->field_0x2b & 0xd) != 0)))) {
    local_res8 = false;
  }
  else {
    local_res8 = true;
  }
  if ((((param_1->field_0x28 & 4) != 0) && (local_res8 != false)) &&
     ((param_1->field_0x29 & 1) != 0)) {
    Compact(this,__real_38d1b717);
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    local_ec = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_ec = (uint)local_res8;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_ec);
    if (1 < local_ec) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      local_res8 = local_ec != 0;
    }
  }
  else {
    local_res8 = *(int *)*puVar3 != 0;
    *puVar3 = (ulonglong)piVar1;
  }
  pFVar19 = (FSampleTrackMemoryWriter *)0x0;
  local_c0.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Buffer.ArrayNum = 0;
  local_c0.Buffer.ArrayMax = 0;
  local_c0.Names.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Names.ArrayNum = 0;
  local_c0.Names.ArrayMax = 0;
  local_c0.ObjectPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ObjectPaths.ArrayNum = 0;
  local_c0.ObjectPaths.ArrayMax = 0;
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  pFVar22 = (FSampleTrackMemoryWriter *)param_1;
  if ((param_1->field_0x28 & 1) == 0) {
    if (local_res8 == false) goto LAB_14a45700e;
    bVar2 = param_1->field_0x29;
    pFVar19 = ::operator_new(0x150);
    if (pFVar19 == (FSampleTrackMemoryWriter *)0x0) goto LAB_14a456ff1;
    pFVar19 = FSampleTrackMemoryWriter::FSampleTrackMemoryWriter
                        (pFVar19,&local_c0,(bool)(bVar2 & 1));
  }
  else {
    Reset(this);
    pFVar19 = (FSampleTrackMemoryWriter *)0x0;
    if (local_res8 == false) goto LAB_14a45700e;
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              (param_1,&local_c0.Buffer);
    TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&local_c0.Names);
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              (param_1,&local_c0.ObjectPaths);
    plVar4 = *(longlong **)&param_1->field_0x8;
    local_f0 = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_f0);
      }
    }
    else {
      local_f0 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    puVar3 = *(ulonglong **)&param_1->field_0x8;
    puVar5 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar5) {
      local_d0 = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_d0);
      if (1 < local_d0) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar24 = local_d0;
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14a456e18;
    }
    else {
      uVar24 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar5;
LAB_14a456e18:
      uVar16 = local_f0;
      if (uVar24 != 0) {
        iVar23 = local_e0.ArrayNum;
        lVar20 = (longlong)(int)local_f0;
        pFVar25 = local_e0.AllocatorInstance.Data;
        uVar17._0_4_ = local_e0.ArrayNum;
        uVar17._4_4_ = local_e0.ArrayMax;
        local_e0.AllocatorInstance.Data = local_c0.Buffer.AllocatorInstance.Data;
        local_e0.ArrayNum = local_c0.Buffer.ArrayNum;
        local_e0.ArrayMax = local_c0.Buffer.ArrayMax;
        local_c0.Buffer.AllocatorInstance.Data = pFVar25;
        local_c0.Buffer._8_8_ = uVar17;
        if (iVar23 < (int)local_f0) {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_f0 - iVar23,(ForAnyElementType *)&local_c0,&local_c0.Buffer.ArrayNum,
                     &local_c0.Buffer.ArrayMax);
        }
        else {
          if ((int)local_f0 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)local_f0);
          }
          if ((int)local_f0 < iVar23) {
            uVar24 = iVar23 - local_f0;
            if (((int)(uVar24 | local_f0) < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar13)) {
              pcVar7 = (code *)swi(3);
              uVar14 = (*pcVar7)();
              return (bool)uVar14;
            }
            if (uVar24 != 0) {
              iVar23 = (local_c0.Buffer.ArrayNum - uVar24) - uVar16;
              if (iVar23 != 0) {
                memmove(local_c0.Buffer.AllocatorInstance.Data + lVar20,
                        local_c0.Buffer.AllocatorInstance.Data + lVar20 + (int)uVar24,
                        (longlong)iVar23);
              }
              iVar23 = local_c0.Buffer.ArrayNum - uVar24;
              local_c0.Buffer.ArrayNum = iVar23;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,(ForAnyElementType *)&local_c0,iVar23,&local_c0.Buffer.ArrayMax);
            }
          }
        }
        FVar12.Data = local_c0.Buffer.AllocatorInstance.Data;
        FVar11.Data = local_e0.AllocatorInstance.Data;
        lVar20 = (longlong)local_e0.ArrayNum;
        lVar21 = (longlong)(int)local_f0;
        FVar15 = FNameEntryId::FromValidEName((EName)local_70);
        uStack_84 = 0;
        local_88 = *(uint *)CONCAT44(extraout_var,FVar15.Value);
        FVar8.Number = 0;
        FVar8.ComparisonIndex.Value = local_88;
        bVar13 = FCompression::UncompressMemory
                           (FVar8,FVar12.Data,lVar21,FVar11.Data,lVar20,COMPRESS_NoFlags,0);
        if ((!bVar13) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("bSuccess",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackContainer.cpp"
                                ,0xfc,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar14 = (*pcVar7)();
          return (bool)uVar14;
        }
      }
    }
    bVar2 = param_1->field_0x29;
    this_00 = ::operator_new(0xc0);
    if (this_00 == (FSampleTrackMemoryReader *)0x0) {
LAB_14a456ff1:
      pFVar19 = (FSampleTrackMemoryWriter *)0x0;
    }
    else {
      pFVar19 = (FSampleTrackMemoryWriter *)
                FSampleTrackMemoryReader::FSampleTrackMemoryReader
                          (this_00,&local_c0,(bool)(bVar2 & 1));
    }
  }
  pcVar7 = *(code **)(pFVar19->_padding_ + 0x68);
  uVar17 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1);
  (*pcVar7)(pFVar19,uVar17);
  pFVar22 = pFVar19;
LAB_14a45700e:
  local_f4 = (this->Tracks).ArrayNum;
  puVar5 = *(uint **)pFVar22->_padding_;
  if ((uint *)((undefined8 *)pFVar22->_padding_)[1] < puVar5 + 1) {
    if ((pFVar22->_padding_ & 0x10000) == 0) {
      (**(code **)(pFVar22->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)pFVar22,&local_f4);
    }
  }
  else {
    local_f4 = *puVar5;
    *(longlong *)pFVar22->_padding_ = *(longlong *)pFVar22->_padding_ + 4;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    iVar23 = (this->Tracks).ArrayNum;
    pFVar25 = (this->Tracks).AllocatorInstance.Data;
    pFVar26 = pFVar25 + (longlong)iVar23 * 0x10;
    while( true ) {
      if ((this->Tracks).ArrayNum != iVar23) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar25 == pFVar26) break;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        uVar14 = (*pcVar7)();
        return (bool)uVar14;
      }
      local_res18[0] = (**(code **)(**(longlong **)pFVar25 + 8))();
      plVar4 = (longlong *)pFVar22->_padding_;
      if ((undefined1 *)plVar4[1] < (undefined1 *)*plVar4 + 1) {
        (**(code **)(pFVar22->_padding_ + 0x188))(pFVar22,local_res18);
        pFVar25 = pFVar25 + 0x10;
      }
      else {
        local_res18[0] = *(undefined1 *)*plVar4;
        *plVar4 = *plVar4 + 1;
        pFVar25 = pFVar25 + 0x10;
      }
    }
    iVar23 = (this->Tracks).ArrayNum;
    pFVar25 = (this->Tracks).AllocatorInstance.Data;
    pFVar26 = pFVar25 + (longlong)iVar23 * 0x10;
    while( true ) {
      if ((this->Tracks).ArrayNum != iVar23) {
        local_f8 = 0;
        `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_f8);
      }
      if (pFVar25 == pFVar26) break;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        uVar14 = (*pcVar7)();
        return (bool)uVar14;
      }
      if (*(char *)(*(longlong *)pFVar25 + 0x50) == '\x04') {
        if ((*(longlong *)pFVar25 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar14 = (*pcVar7)();
          return (bool)uVar14;
        }
        local_cc = *(uint *)(*(longlong *)pFVar25 + 0x28);
        plVar4 = (longlong *)pFVar22->_padding_;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((pFVar22->_padding_ & 0x10000) == 0) {
            (**(code **)(pFVar22->_padding_ + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)pFVar22,&local_cc);
          }
        }
        else {
          local_cc = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        if ((*(longlong *)pFVar25 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar14 = (*pcVar7)();
          return (bool)uVar14;
        }
        (**(code **)(**(longlong **)pFVar25 + 0x40))(*(longlong **)pFVar25,pFVar22);
      }
      pFVar25 = pFVar25 + 0x10;
    }
    iVar23 = (this->Tracks).ArrayNum;
    pFVar25 = (this->Tracks).AllocatorInstance.Data;
    pFVar26 = pFVar25 + (longlong)iVar23 * 0x10;
    while( true ) {
      if ((this->Tracks).ArrayNum != iVar23) {
        local_f7[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_f7);
      }
      if (pFVar25 == pFVar26) break;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        uVar14 = (*pcVar7)();
        return (bool)uVar14;
      }
      if (*(char *)(*(longlong *)pFVar25 + 0x50) != '\x04') {
        if ((*(longlong *)pFVar25 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar14 = (*pcVar7)();
          return (bool)uVar14;
        }
        local_c8 = *(uint *)(*(longlong *)pFVar25 + 0x28);
        plVar4 = (longlong *)pFVar22->_padding_;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((pFVar22->_padding_ & 0x10000) == 0) {
            (**(code **)(pFVar22->_padding_ + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)pFVar22,&local_c8);
          }
        }
        else {
          local_c8 = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        if ((*(longlong *)pFVar25 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar14 = (*pcVar7)();
          return (bool)uVar14;
        }
        (**(code **)(**(longlong **)pFVar25 + 0x40))(*(longlong **)pFVar25,pFVar22);
      }
      pFVar25 = pFVar25 + 0x10;
    }
    if (local_res8 != false) {
      iVar23 = local_c0.Buffer.ArrayNum;
      local_e4 = local_c0.Buffer.ArrayNum;
      FVar15 = FNameEntryId::FromValidEName((EName)local_6c);
      uStack_7c = 0;
      local_80 = *(uint *)CONCAT44(extraout_var_00,FVar15.Value);
      FVar9.Number = 0;
      FVar9.ComparisonIndex.Value = local_80;
      local_90[0] = FCompression::CompressMemoryBound(FVar9,iVar23,COMPRESS_NoFlags,0);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_e0,local_90[0],Default);
      FVar12.Data = local_c0.Buffer.AllocatorInstance.Data;
      FVar11.Data = local_e0.AllocatorInstance.Data;
      iVar23 = local_c0.Buffer.ArrayNum;
      FVar15 = FNameEntryId::FromValidEName((EName)local_68);
      uStack_74 = 0;
      local_78 = *(uint *)CONCAT44(extraout_var_01,FVar15.Value);
      FVar10.Number = 0;
      FVar10.ComparisonIndex.Value = local_78;
      bVar13 = FCompression::CompressMemory
                         (FVar10,FVar11.Data,local_90,FVar12.Data,iVar23,COMPRESS_BiasMemory,0);
      uVar24 = (uint)bVar13;
      if (bVar13) {
        if (local_90[0] < (int)local_e4) {
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_e0,local_90[0],Default);
          if (local_c0.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Buffer.AllocatorInstance.Data);
          }
          local_c0.Buffer.AllocatorInstance.Data = local_e0.AllocatorInstance.Data;
          local_c0.Buffer.ArrayNum = local_e0.ArrayNum;
          local_c0.Buffer.ArrayMax = local_e0.ArrayMax;
          local_e0.ArrayNum = 0;
          local_e0.ArrayMax = 0;
          local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        else {
          uVar24 = 0;
        }
      }
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                (param_1,&local_c0.Buffer);
      TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&local_c0.Names);
      TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                (param_1,&local_c0.ObjectPaths);
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_e4,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_e4);
        }
      }
      else {
        local_e4 = *(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      puVar3 = *(ulonglong **)&param_1->field_0x8;
      if (puVar3[1] < *puVar3 + 4) {
        local_c4 = 0;
        if ((param_1->field_0x28 & 1) == 0) {
          local_c4 = uVar24;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_c4,4);
        if (1 < local_c4) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
      }
      else {
        *puVar3 = *puVar3 + 4;
      }
    }
  }
  else {
    iVar23 = 0;
    if (0 < (int)local_f4) {
      do {
        plVar4 = (longlong *)pFVar22->_padding_;
        local_res10[0] = ETrackType_Unknown;
        if ((ETrackType *)plVar4[1] < (ETrackType *)*plVar4 + 1) {
          (**(code **)(pFVar22->_padding_ + 0x188))(pFVar22,local_res10);
        }
        else {
          local_res10[0] = *(ETrackType *)*plVar4;
          *plVar4 = *plVar4 + 1;
        }
        pTVar18 = MakeTrack(local_60,local_res10[0]);
        AddTrack(this,pTVar18,false);
        iVar23 = iVar23 + 1;
      } while (iVar23 < (int)local_f4);
    }
    iVar23 = 0;
    if (0 < (int)local_f4) {
      do {
        plVar4 = (longlong *)pFVar22->_padding_;
        local_e8 = 0xffffffff;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((pFVar22->_padding_ & 0x10000) == 0) {
            (**(code **)(pFVar22->_padding_ + 0x188))(pFVar22,&local_e8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)pFVar22,&local_e8);
          }
        }
        else {
          local_e8 = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        lVar20 = (longlong)(int)local_e8;
        uVar24 = 0;
        if ((int)local_e8 < (this->Tracks).ArrayNum) {
          uVar24 = ~local_e8 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar14 = (*pcVar7)();
          return (bool)uVar14;
        }
        pFVar25 = (this->Tracks).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar25 + lVar20 * 0x10) == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar14 = (*pcVar7)();
          return (bool)uVar14;
        }
        plVar4 = *(longlong **)(pFVar25 + lVar20 * 0x10);
        (**(code **)(*plVar4 + 0x40))(plVar4,pFVar22);
        iVar23 = iVar23 + 1;
      } while (iVar23 < (int)local_f4);
    }
    uVar24 = 0;
    if (0 < (int)local_f4) {
      lVar20 = 0;
      do {
        uVar16 = 0;
        if ((int)uVar24 < (this->Tracks).ArrayNum) {
          uVar16 = ~uVar24 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar14 = (*pcVar7)();
          return (bool)uVar14;
        }
        pFVar25 = (this->Tracks).AllocatorInstance.Data;
        pTVar6 = *(TReferenceControllerBase<1> **)(pFVar25 + lVar20 + 8);
        plVar4 = *(longlong **)(pFVar25 + lVar20);
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((plVar4 == (longlong *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar14 = (*pcVar7)();
          return (bool)uVar14;
        }
        (**(code **)(*plVar4 + 0x70))(plVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        uVar16 = 0;
        if ((int)uVar24 < (this->Tracks).ArrayNum) {
          uVar16 = ~uVar24 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar14 = (*pcVar7)();
          return (bool)uVar14;
        }
        pFVar25 = (this->Tracks).AllocatorInstance.Data;
        pTVar6 = *(TReferenceControllerBase<1> **)(pFVar25 + lVar20 + 8);
        plVar4 = *(longlong **)(pFVar25 + lVar20);
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((plVar4 == (longlong *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar14 = (*pcVar7)();
          return (bool)uVar14;
        }
        (**(code **)(*plVar4 + 0x90))(plVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        uVar24 = uVar24 + 1;
        lVar20 = lVar20 + 0x10;
      } while ((int)uVar24 < (int)local_f4);
    }
    UpdateNameToIndexMap(this);
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_c0.ObjectPaths.AllocatorInstance.Data,local_c0.ObjectPaths.ArrayNum);
  if (local_c0.ObjectPaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.ObjectPaths.AllocatorInstance.Data);
  }
  if (local_c0.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Names.AllocatorInstance.Data);
  }
  if (local_c0.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Buffer.AllocatorInstance.Data);
  }
  if (pFVar19 != (FSampleTrackMemoryWriter *)0x0) {
    (**(code **)pFVar19->_padding_)(pFVar19,1);
  }
  return true;
}

// SetForceToUseCompression @ 14a4598c0

void __thiscall
FSampleTrackContainer::SetForceToUseCompression(FSampleTrackContainer *this,bool param_1)

{
  this->bForceToUseCompression = param_1;
  return;
}

// Shrink @ 14a45bdf0

void __thiscall FSampleTrackContainer::Shrink(FSampleTrackContainer *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Shrink
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->NameToIndex);
  iVar1 = (this->Tracks).ArrayNum;
  pFVar4 = (this->Tracks).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar4 + 0x30))();
    pFVar4 = pFVar4 + 0x10;
  }
  iVar1 = (this->Tracks).ArrayNum;
  pFVar4 = (this->Tracks).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(**(longlong **)pFVar4 + 0x70))();
    pFVar4 = pFVar4 + 0x10;
  }
  return;
}

// UpdateNameToIndexMap @ 14a462d70

void __thiscall FSampleTrackContainer::UpdateNameToIndexMap(FSampleTrackContainer *this)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  TPairInitializer<FName_const_&,int_const_&> local_res18;
  longlong *local_48;
  uint *local_40;
  
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->NameToIndex);
  local_res10[0] = 0;
  if (0 < (this->Tracks).ArrayNum) {
    do {
      uVar8 = local_res10[0];
      uVar7 = 0;
      if ((int)local_res10[0] < (this->Tracks).ArrayNum) {
        uVar7 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = (this->Tracks).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      if ((*(longlong *)pFVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)(*(longlong *)pFVar12 + 0x28) = uVar8;
      lVar11 = (longlong)(int)local_res10[0];
      uVar8 = 0;
      if ((int)local_res10[0] < (this->Tracks).ArrayNum) {
        uVar8 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = (this->Tracks).AllocatorInstance.Data + lVar11 * 0x10;
      if ((*(longlong *)pFVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar11 = *(longlong *)pFVar12;
      plVar13 = *(longlong **)(lVar11 + 0x18);
      iVar2 = *(int *)(lVar11 + 0x20);
      plVar1 = plVar13 + iVar2;
      while( true ) {
        if (*(int *)(lVar11 + 0x20) != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (plVar13 == plVar1) break;
        lVar3 = *plVar13;
        if (lVar3 != 0) {
          uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
          if (*(int *)&(this->NameToIndex).field_0x8 != *(int *)&(this->NameToIndex).field_0x34) {
            puVar4 = *(undefined1 **)&(this->NameToIndex).field_0x40;
            puVar10 = &(this->NameToIndex).field_0x38;
            if (puVar4 != (undefined1 *)0x0) {
              puVar10 = puVar4;
            }
            iVar9 = *(int *)(puVar10 +
                            (ulonglong)
                            (*(int *)&(this->NameToIndex).field_0x48 - 1U &
                            (int)((ulonglong)lVar3 >> 0x20) + uVar8) * 4);
            if (iVar9 != -1) {
              do {
                if (*(longlong *)(*(longlong *)&this->NameToIndex + (longlong)iVar9 * 0x14) == lVar3
                   ) {
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!NameToIndex.Contains(Name)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackContainer.cpp"
                                     ,0x4d3,L"");
                  if (bVar6) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  break;
                }
                iVar9 = *(int *)(*(longlong *)&this->NameToIndex + 0xc + (longlong)iVar9 * 0x14);
              } while (iVar9 != -1);
            }
          }
          local_40 = local_res10;
          local_48 = plVar13;
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                    ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      *)&this->NameToIndex,&local_res18,(bool *)&local_48);
        }
        plVar13 = plVar13 + 1;
      }
      local_res10[0] = local_res10[0] + 1;
    } while ((int)local_res10[0] < (this->Tracks).ArrayNum);
  }
  return;
}

// UpdateTrackIndices @ 14a464c40

void __thiscall
FSampleTrackContainer::UpdateTrackIndices
          (FSampleTrackContainer *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  undefined4 uVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  local_res20 = (this->Tracks).ArrayNum;
  uVar8 = (ulonglong)(int)local_res20;
  pFVar11 = (this->Tracks).AllocatorInstance.Data;
  pFVar15 = pFVar11 + uVar8 * 0x10;
  while( true ) {
    if ((this->Tracks).ArrayNum != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSampleTrackBase,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar11 == pFVar15) break;
    lVar14 = *(longlong *)pFVar11;
    if ((lVar14 != 0) && (*(char *)(lVar14 + 0x50) != '\0')) {
      if (*(int *)(lVar14 + 0x2c) != -1) {
        uVar2 = *(uint *)(lVar14 + 0x2c);
        uVar7 = 0;
        if ((int)uVar2 < param_1->ArrayNum) {
          uVar7 = ~uVar2 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar3 = *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar2 * 4);
        if (*(longlong *)pFVar11 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        *(undefined4 *)(*(longlong *)pFVar11 + 0x2c) = uVar3;
        if (*(longlong *)pFVar11 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        (**(code **)(**(longlong **)pFVar11 + 0x70))();
      }
      if (*(longlong *)pFVar11 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      cVar6 = (**(code **)(**(longlong **)pFVar11 + 0x48))();
      if (cVar6 != '\0') {
        if (*(longlong *)pFVar11 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        puVar9 = (undefined8 *)(**(code **)(**(longlong **)pFVar11 + 0x80))();
        local_48.Data = (FScriptContainerElement *)0x0;
        local_40 = *(int *)(puVar9 + 1);
        lVar14 = (longlong)local_40;
        _Src = (void *)*puVar9;
        if (local_40 == 0) {
          local_3c = 0;
          iVar12 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_40,0,&local_48,local_40,&local_3c);
          memcpy(local_48.Data,_Src,lVar14 << 2);
          iVar12 = local_40;
        }
        pFVar1 = local_48.Data + (longlong)iVar12 * 4;
        FVar10.Data = local_48.Data;
        iVar13 = iVar12;
        while( true ) {
          if (iVar13 != iVar12) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (FVar10.Data == pFVar1) break;
          uVar2 = *(uint *)FVar10.Data;
          uVar7 = 0;
          if ((int)uVar2 < param_1->ArrayNum) {
            uVar7 = ~uVar2 >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          *(uint *)FVar10.Data =
               *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar2 * 4);
          FVar10.Data = FVar10.Data + 4;
          iVar13 = local_40;
        }
        if (*(longlong *)pFVar11 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        (**(code **)(**(longlong **)pFVar11 + 0x88))(*(longlong **)pFVar11,&local_48);
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
        }
      }
    }
    uVar8 = (ulonglong)local_res20;
    pFVar11 = pFVar11 + 0x10;
  }
  return;
}

