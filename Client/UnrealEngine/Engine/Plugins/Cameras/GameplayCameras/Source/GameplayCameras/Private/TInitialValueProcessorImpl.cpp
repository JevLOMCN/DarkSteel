// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// Finalize @ 14d6160c0

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::Finalize(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this)

{
  int *piVar1;
  
  piVar1 = &(this->ValuesByChannel).Pairs.ArrayMax;
  (this->ValuesByChannel).Pairs.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&this->ValuesByChannel,0,piVar1);
    this->Interrogation = (IInterrogationExtension *)0x0;
    this->CacheStorage =
         (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
          *)0x0;
    return;
  }
  this->Interrogation = (IInterrogationExtension *)0x0;
  this->CacheStorage =
       (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
        *)0x0;
  return;
}

// Initialize @ 14d61f680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::Initialize(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
             *this,UMovieSceneEntitySystemLinker *param_1,FInitialValueCache *param_2)

{
  longlong lVar1;
  uint uVar2;
  ICustomPropertyRegistration *pIVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  TEntitySystemLinkerExtensionID<UE::MovieScene::IInterrogationExtension> TVar7;
  undefined4 extraout_var;
  FEntityAllocationWriteContext *pFVar8;
  undefined8 *puVar9;
  IInterrogationExtension IVar10;
  int iVar11;
  IInterrogationExtension IVar12;
  undefined1 *puVar13;
  IInterrogationExtension IVar14;
  TComponentTypeID<FCameraFramingZone> local_res8 [8];
  TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_&&>
  local_res18;
  FEntityAllocationWriteContext local_68;
  TComponentTypeID<FCameraFramingZone> *local_60;
  TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>
  **local_58;
  undefined1 local_50 [32];
  
  TVar7 = IInterrogationExtension::GetExtensionID();
  IVar14 = (IInterrogationExtension)0x0;
  uVar2 = *(uint *)CONCAT44(extraout_var,TVar7);
  IVar12 = IVar14;
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)&(param_1->ExtensionsByID).field_0x28)) {
    if ((*(int *)&(param_1->ExtensionsByID).field_0x28 <= (int)uVar2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar13 = *(undefined1 **)&(param_1->ExtensionsByID).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(param_1->ExtensionsByID).field_0x10;
    }
    if ((*(uint *)(puVar13 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      IVar12 = *(IInterrogationExtension *)
                (*(longlong *)&param_1->ExtensionsByID + (longlong)(int)uVar2 * 8);
    }
  }
  this->Interrogation = (IInterrogationExtension *)IVar12;
  pFVar8 = FEntityAllocationWriteContext::FEntityAllocationWriteContext
                     (&local_68,&param_1->EntityManager);
  (this->WriteContext).SystemSerial = pFVar8->SystemSerial;
  pIVar3 = this->CustomPropertyRegistration;
  if (pIVar3 != (ICustomPropertyRegistration *)0x0) {
    puVar9 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_50);
    uVar5 = puVar9[1];
    (this->CustomAccessors).Base = (uchar *)*puVar9;
    (this->CustomAccessors).ViewNum = (int)uVar5;
    (this->CustomAccessors).Stride = (int)((ulonglong)uVar5 >> 0x20);
  }
  if (param_2 != (FInitialValueCache *)0x0) {
    local_res8[0] = this->InitialValueType;
    if (*(int *)&(param_2->StorageByComponent).field_0x8 !=
        *(int *)&(param_2->StorageByComponent).field_0x34) {
      puVar13 = *(undefined1 **)&(param_2->StorageByComponent).field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(param_2->StorageByComponent).field_0x38;
      }
      iVar11 = *(int *)(puVar13 +
                       ((ulonglong)(*(int *)&(param_2->StorageByComponent).field_0x48 - 1) &
                       (ulonglong)(ushort)local_res8[0]) * 4);
      if (iVar11 != -1) {
        do {
          lVar1 = *(longlong *)&param_2->StorageByComponent + (longlong)iVar11 * 0x18;
          if (*(TComponentTypeID<FCameraFramingZone> *)
               (*(longlong *)&param_2->StorageByComponent + (longlong)iVar11 * 0x18) ==
              local_res8[0]) {
            IVar12 = (IInterrogationExtension)(lVar1 + 8);
            if (lVar1 == 0) {
              IVar12 = IVar14;
            }
            if (IVar12 != (IInterrogationExtension)0x0) {
              if ((*(IInterrogationExtension *)IVar12 == (IInterrogationExtension)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Existing->IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                                     ,0x86,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              IVar12 = *(IInterrogationExtension *)IVar12;
              if (IVar12 != (IInterrogationExtension)0x0) goto LAB_14d61f8d3;
            }
            break;
          }
          iVar11 = *(int *)(lVar1 + 0x10);
        } while (iVar11 != -1);
      }
    }
    IVar10 = (IInterrogationExtension)::operator_new(0x98);
    IVar12 = IVar14;
    if (IVar10 != (IInterrogationExtension)0x0) {
      *(longlong *)IVar10 = 0;
      *(longlong *)((longlong)IVar10 + 8) = 0;
      *(longlong *)((longlong)IVar10 + 0x10) = 0;
      *(longlong *)((longlong)IVar10 + 0x18) = 0;
      *(longlong *)((longlong)IVar10 + 0x20) = 0;
      *(longlong *)((longlong)IVar10 + 0x28) = 0;
      *(longlong *)((longlong)IVar10 + 0x30) = 0;
      *(longlong *)((longlong)IVar10 + 0x38) = 0;
      *(longlong *)((longlong)IVar10 + 0x40) = 0;
      *(longlong *)((longlong)IVar10 + 0x48) = 0;
      *(longlong *)((longlong)IVar10 + 0x50) = 0;
      *(longlong *)((longlong)IVar10 + 0x58) = 0;
      *(longlong *)((longlong)IVar10 + 0x60) = 0;
      *(longlong *)((longlong)IVar10 + 0x68) = 0;
      *(longlong *)((longlong)IVar10 + 0x70) = 0;
      *(longlong *)((longlong)IVar10 + 0x78) = 0;
      *(longlong *)((longlong)IVar10 + 0x80) = 0;
      *(longlong *)((longlong)IVar10 + 0x88) = 0;
      *(longlong *)((longlong)IVar10 + 0x90) = 0;
      *(undefined ***)IVar10 =
           &
           ___7__TPropertyValueStorage_U__TPropertyTraits_UFCameraFramingZone__U1__00_MovieScene_UE___MovieScene_UE__6B_
      ;
      *(undefined4 *)((longlong)IVar10 + 0x34) = 0x80;
      *(undefined4 *)((longlong)IVar10 + 0x38) = 0xffffffff;
      *(undefined4 *)((longlong)IVar10 + 0x6c) = 0x80;
      *(undefined4 *)((longlong)IVar10 + 0x70) = 0xffffffff;
      IVar12 = IVar10;
    }
    local_60 = local_res8;
    local_58 = &local_res18.Value;
    local_res18.Value =
         (TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>
          *)IVar12;
    TSet<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_&&>_>
              ((TSet<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>,0>,FDefaultSetAllocator>
                *)param_2,&local_res18,(bool *)&local_60);
    if ((IInterrogationExtension)local_res18.Value != (IInterrogationExtension)0x0) {
      (*(code *)*(local_res18.Value)->Ptr)(local_res18.Value,1);
    }
LAB_14d61f8d3:
    this->CacheStorage =
         (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
          *)IVar12;
  }
  return;
}

// PopulateFilter @ 14d62e380

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::PopulateFilter(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
                 *this,FEntityComponentFilter *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *this_00;
  FComponentTypeID local_res8;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> local_resa;
  FComponentTypeID local_resc [14];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_res8.Value = *(ushort *)&this->BuiltInComponents->BoundObject;
  local_resa = (this->BuiltInComponents->Interrogation).OutputKey;
  piVar1 = &(param_1->ComplexMasks).ArrayMax;
  iVar2 = (param_1->ComplexMasks).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&(param_1->ComplexMasks).AllocatorInstance,piVar1);
  }
  (param_1->ComplexMasks).ArrayNum = iVar2 + 1;
  local_18._First = &local_res8;
  this_00 = (param_1->ComplexMasks).AllocatorInstance.Data + (longlong)iVar2 * 0x3c;
  local_18._Last = local_resc;
  *(int *)(this_00 + 0x30) = 0;
  *(int *)(this_00 + 0x34) = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  FComponentMask::SetAll((FComponentMask *)this_00,&local_18);
  return;
}

// Process @ 14d62e600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::Process(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
          *this,FEntityAllocation *param_1,FComponentMask *param_2)

{
  atomic<int> *paVar1;
  undefined8 *puVar2;
  atomic<int> aVar3;
  uchar uVar4;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> TVar5;
  ushort uVar6;
  EComponentHeaderLockMode EVar7;
  int iVar8;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
  *pTVar9;
  UObject *pUVar10;
  undefined1 *puVar11;
  longlong lVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
  *pTVar17;
  bool bVar18;
  uint uVar19;
  undefined8 *puVar20;
  ushort *puVar21;
  FResolvedPropertyAndFunction *this_00;
  FCameraFramingZone *pFVar22;
  FName *pFVar23;
  int iVar24;
  undefined1 *puVar25;
  wchar_t *pwVar26;
  ulong64 uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ushort *puVar30;
  longlong lVar31;
  FComponentHeader *pFVar32;
  undefined8 *puVar33;
  FComponentHeader *pFVar34;
  FComponentHeader *pFVar35;
  longlong lVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStack_288 [32];
  uchar *puStack_268;
  undefined1 auStack_260 [4];
  undefined1 auStack_25c [14];
  char cStack_24e;
  FWeakObjectPtr FStack_248;
  FWeakObjectPtr FStack_240;
  FWeakObjectPtr FStack_238;
  FWeakObjectPtr FStack_230;
  FComponentHeader *pFStack_228;
  FWeakObjectPtr FStack_220;
  EComponentHeaderLockMode EStack_218;
  EComponentHeaderLockMode EStack_214;
  TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
  *pTStack_210;
  ulonglong uStack_208;
  FComponentHeader *pFStack_200;
  FComponentHeader *pFStack_1f8;
  FComponentHeader *pFStack_1f0;
  undefined8 uStack_1e8;
  ushort *puStack_1e0;
  UObject *pUStack_1d8;
  UObject *pUStack_1d0;
  UObject *pUStack_1c8;
  FName FStack_1c0;
  UObject *pUStack_1b8;
  ulong64 uStack_1b0;
  UObject *pUStack_1a8;
  undefined1 auStack_1a0 [32];
  TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
  TStack_180;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  FName FStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  FKeyType FStack_c8;
  FKeyType FStack_b4;
  undefined1 auStack_a0 [28];
  ushort uStack_84;
  undefined1 uStack_7c;
  FCameraFramingZone aFStack_78 [2];
  
  if ((((this->Interrogation != (IInterrogationExtension *)0x0) &&
       (TVar5 = (this->BuiltInComponents->Interrogation).OutputKey,
       TVar5 != (TComponentTypeID<UE::MovieScene::FInterrogationKey>)0xffff)) &&
      ((int)(uint)(ushort)TVar5 < (param_2->Bits).NumBits)) &&
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[(ushort)TVar5 >> 5].Pad >>
       ((ushort)TVar5 & 0x1f) & 1) != 0)) {
    VisitInterrogationAllocation(this,param_1);
    return;
  }
  if (this->CacheStorage ==
      (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
       *)0x0) {
    VisitAllocation(this,param_1);
    return;
  }
  aFStack_78[0].Bottom = (double)(__security_cookie.value ^ (ulonglong)auStack_288);
  uStack_1b0 = (this->WriteContext).SystemSerial;
  uVar29 = (ulonglong)param_1->Size;
  pFStack_1f8 = param_1->ComponentHeaders;
  pFVar35 = (FComponentHeader *)0x0;
  pFVar34 = pFStack_1f8 + param_1->NumComponents;
  for (; pTStack_210 = this, pFStack_1f8 != pFVar34; pFStack_1f8 = pFStack_1f8 + 1) {
    pFVar32 = pFStack_1f8;
    if ((TComponentTypeID<UE::MovieScene::FInitialValueIndex>)(pFStack_1f8->ComponentType).Value ==
        this->BuiltInComponents->InitialValueIndex) goto LAB_14d63bee0;
  }
  pFStack_1f8 = (FComponentHeader *)0x0;
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar32 = pFVar35;
  if (bVar18) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
LAB_14d63bee0:
  EStack_214 = param_1->LockMode;
  if (EStack_214 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar32->ReadWriteLock);
  }
  LOCK();
  paVar1 = &pFVar32->ScheduledAccessCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar3 != (atomic<int>)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar18)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  puStack_268 = pFVar32->Components;
  FEntityAllocation::WriteComponents<FCameraFramingZone>
            (param_1,(TComponentLock<UE::MovieScene::TWrite<FCameraFramingZone>_> *)auStack_1a0,
             this->InitialValueType,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial
            );
  pFStack_200 = param_1->ComponentHeaders;
  pFVar34 = pFStack_200 + param_1->NumComponents;
  for (; pFStack_200 != pFVar34; pFStack_200 = pFStack_200 + 1) {
    pFVar32 = pFStack_200;
    if ((TComponentTypeID<UObject_*>)(pFStack_200->ComponentType).Value ==
        this->BuiltInComponents->BoundObject) goto LAB_14d63bfb0;
  }
  pFStack_200 = (FComponentHeader *)0x0;
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar32 = pFVar35;
  if (bVar18) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
LAB_14d63bfb0:
  EStack_218 = param_1->LockMode;
  if (EStack_218 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar32->ReadWriteLock);
  }
  LOCK();
  pFVar32->ScheduledAccessCount = (atomic<int>)((int)pFVar32->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar34 = param_1->ComponentHeaders;
  auStack_25c._4_8_ = pFVar32->Components;
  pFVar32 = pFVar34 + param_1->NumComponents;
  for (; pFVar34 != pFVar32; pFVar34 = pFVar34 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FCustomPropertyIndex>)(pFVar34->ComponentType).Value ==
        this->BuiltInComponents->CustomPropertyIndex) {
      EVar7 = param_1->LockMode;
      pFStack_228 = pFVar34;
      if (EVar7 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar34->ReadWriteLock);
      }
      LOCK();
      pFVar34->ScheduledAccessCount = (atomic<int>)((int)pFVar34->ScheduledAccessCount + 1);
      UNLOCK();
      puStack_1e0 = (ushort *)pFVar34->Components;
      uStack_1e8 = CONCAT44(uStack_1e8._4_4_,EVar7);
      pFStack_1f0 = pFVar34;
      goto LAB_14d63c034;
    }
  }
  pFStack_228 = (FComponentHeader *)0x0;
  uStack_1e8 = 0;
  puStack_1e0 = (ushort *)0x0;
  pFStack_1f0 = (FComponentHeader *)0x0;
LAB_14d63c034:
  pFVar34 = pFStack_1f0;
  pTVar17 = pTStack_210;
  uStack_208 = uVar29;
  if (puStack_1e0 == (ushort *)0x0) {
    FEntityAllocation::TryReadComponents<unsigned_short>
              (param_1,(TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_> *)auStack_168
               ,this->BuiltInComponents->FastPropertyOffset);
    if ((ushort *)auStack_168._16_8_ == (ushort *)0x0) {
      FEntityAllocation::TryReadComponents<TSharedPtr<FTrackInstancePropertyBindings,1>_>
                (param_1,&TStack_180,this->BuiltInComponents->SlowProperty);
      if ((TStack_180._16_8_ != 0) && (uVar29 != 0)) {
        lVar31 = 0;
        lVar28 = lVar31;
        lVar36 = lVar31;
        do {
          pTVar9 = this->CacheStorage;
          if ((*(longlong *)(TStack_180._16_8_ + lVar31) == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if (*(int *)(*(longlong *)(TStack_180._16_8_ + lVar31) + 0x58) == 0) {
            pwVar26 = L"";
          }
          else {
            pwVar26 = *(wchar_t **)(*(longlong *)(TStack_180._16_8_ + lVar31) + 0x50);
          }
          ::FName::FName(&FStack_1c0,pwVar26);
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
          ::FindPropertyIndex(pTVar9,(UObject *)(auStack_25c + 0xc),
                              *(FName **)(auStack_25c._4_8_ + lVar36 * 8));
          uVar14 = auStack_25c._4_8_;
          if (cStack_24e == '\0') {
            uVar37 = 0;
            uVar38 = 0;
            uVar39 = 0;
            uVar40 = 0;
            uVar41 = 0;
            uVar42 = 0;
            uVar43 = 0;
            uVar44 = 0;
            this_00 = FTrackInstancePropertyBindings::FindOrAdd
                                (*(FTrackInstancePropertyBindings **)(TStack_180._16_8_ + lVar31),
                                 *(UObject **)(auStack_25c._4_8_ + lVar36 * 8));
            uVar4 = (this_00->ResolvedProperty).TypeIndex;
            if (uVar4 == '\0') {
              pFVar22 = FCachedProperty::GetPropertyAddress<FCameraFramingZone>
                                  ((FCachedProperty *)this_00);
LAB_14d63c66a:
              if (pFVar22 != (FCameraFramingZone *)0x0) {
                uVar37 = *(undefined4 *)&pFVar22->Left;
                uVar38 = *(undefined4 *)((longlong)&pFVar22->Left + 4);
                uVar39 = *(undefined4 *)&pFVar22->Top;
                uVar40 = *(undefined4 *)((longlong)&pFVar22->Top + 4);
                uVar41 = *(undefined4 *)&pFVar22->Right;
                uVar42 = *(undefined4 *)((longlong)&pFVar22->Right + 4);
                uVar43 = *(undefined4 *)&pFVar22->Bottom;
                uVar44 = *(undefined4 *)((longlong)&pFVar22->Bottom + 4);
              }
            }
            else if (uVar4 == '\x01') {
              pFVar22 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
              goto LAB_14d63c66a;
            }
            uStack_150 = CONCAT44(uVar38,uVar37);
            uStack_140 = CONCAT44(uVar42,uVar41);
            uStack_148 = CONCAT44(uVar40,uVar39);
            uStack_138 = CONCAT44(uVar44,uVar43);
            *(ulonglong *)(lVar28 + auStack_1a0._24_8_) = CONCAT44(uVar38,uVar37);
            *(ulonglong *)(lVar28 + 8 + auStack_1a0._24_8_) = CONCAT44(uVar40,uVar39);
            *(ulonglong *)(lVar28 + 0x10 + auStack_1a0._24_8_) = CONCAT44(uVar42,uVar41);
            *(ulonglong *)(lVar28 + 0x18 + auStack_1a0._24_8_) = CONCAT44(uVar44,uVar43);
            pUVar10 = *(UObject **)(uVar14 + lVar36 * 8);
            pTVar9 = this->CacheStorage;
            lVar12 = *(longlong *)(TStack_180._16_8_ + lVar31);
            aFStack_78[0].Left = 0.0;
            if (pUVar10 != (UObject *)0x0) {
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar10);
              }
              FStack_220.ObjectIndex = 0;
              FStack_220.ObjectSerialNumber = 0;
              pUStack_1b8 = pUVar10;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar10);
              }
              FWeakObjectPtr::operator=(&FStack_220,(FObjectPtr)&pUStack_1b8);
              aFStack_78[0].Left = (double)FStack_220;
            }
            iVar8 = *(int *)(lVar12 + 0x58);
            iVar24 = iVar8 + -1;
            if (iVar8 == 0) {
              iVar24 = 0;
            }
            pFVar23 = ::FName::FName(&FStack_130,iVar24,*(wchar_t **)(lVar12 + 0x50),FNAME_Add);
            aFStack_78[0].Top = *(double *)pFVar23;
            aFStack_78[0].Right._0_1_ = 2;
            TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
            ::AddInitialValue(pTVar9,(FKeyType *)auStack_25c,aFStack_78);
            *(undefined2 *)puStack_268 = auStack_25c._0_2_;
            this = pTStack_210;
          }
          else {
            lVar12 = *(longlong *)&this->CacheStorage->PropertyValues;
            puVar33 = (undefined8 *)((ulonglong)(ushort)auStack_25c._12_2_ * 0x20 + lVar12);
            uVar14 = puVar33[1];
            puVar20 = (undefined8 *)((ulonglong)(ushort)auStack_25c._12_2_ * 0x20 + 0x10 + lVar12);
            uVar15 = *puVar20;
            uVar16 = puVar20[1];
            *(undefined8 *)(lVar28 + auStack_1a0._24_8_) = *puVar33;
            ((undefined8 *)(lVar28 + auStack_1a0._24_8_))[1] = uVar14;
            puVar33 = (undefined8 *)(lVar28 + 0x10 + auStack_1a0._24_8_);
            *puVar33 = uVar15;
            puVar33[1] = uVar16;
          }
          puStack_268 = puStack_268 + 2;
          lVar36 = lVar36 + 1;
          lVar28 = lVar28 + 0x20;
          lVar31 = lVar31 + 0x10;
          pFVar34 = pFStack_1f0;
        } while (lVar36 < (longlong)uStack_208);
      }
      if (TStack_180._0_8_ != 0) {
        LOCK();
        *(int *)(TStack_180._0_8_ + 0x30) = *(int *)(TStack_180._0_8_ + 0x30) + -1;
        UNLOCK();
        if (TStack_180._8_4_ == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(TStack_180._0_8_ + 0x20));
        }
      }
    }
    else if (uVar29 != 0) {
      puStack_268 = puStack_268 + -auStack_168._16_8_;
      puVar30 = (ushort *)auStack_168._16_8_;
      puVar33 = (undefined8 *)auStack_1a0._24_8_;
      do {
        pTVar9 = this->CacheStorage;
        uVar6 = *puVar30;
        pUVar10 = *(UObject **)(auStack_25c._4_8_ + (longlong)pFVar35 * 8);
        TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
        ::CleanupStaleEntries(pTVar9);
        FStack_c8.Object.ObjectIndex = 0;
        FStack_c8.Object.ObjectSerialNumber = 0;
        if (pUVar10 != (UObject *)0x0) {
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar10);
          }
          FStack_238.ObjectIndex = 0;
          FStack_238.ObjectSerialNumber = 0;
          pUStack_1d0 = pUVar10;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar10);
          }
          FWeakObjectPtr::operator=(&FStack_238,(FObjectPtr)&pUStack_1d0);
          FStack_c8.Object = (FObjectKey)FStack_238;
        }
        FStack_c8.Property.TypeIndex = '\0';
        FStack_c8.Property._0_2_ = uVar6;
        TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
        ::CleanupStaleEntries(pTVar9);
        uVar19 = MovieScene::GetTypeHash(&FStack_c8);
        if (*(int *)&(pTVar9->KeyToPropertyIndex).field_0x8 !=
            *(int *)&(pTVar9->KeyToPropertyIndex).field_0x34) {
          puVar11 = *(undefined1 **)&(pTVar9->KeyToPropertyIndex).field_0x40;
          puVar25 = &(pTVar9->KeyToPropertyIndex).field_0x38;
          if (puVar11 != (undefined1 *)0x0) {
            puVar25 = puVar11;
          }
          iVar24 = *(int *)(puVar25 +
                           (ulonglong)
                           (*(int *)&(pTVar9->KeyToPropertyIndex).field_0x48 - 1U & uVar19) * 4);
          while (iVar24 != -1) {
            lVar28 = (longlong)iVar24 * 0x20;
            bVar18 = MovieScene::operator==
                               ((FKeyType *)(*(longlong *)&pTVar9->KeyToPropertyIndex + lVar28),
                                &FStack_c8);
            if (bVar18) {
              lVar28 = *(longlong *)&pTVar9->KeyToPropertyIndex + lVar28;
              puVar21 = (ushort *)(lVar28 + 0x14);
              if (lVar28 == 0) {
                puVar21 = (ushort *)0x0;
              }
              if (puVar21 != (ushort *)0x0) {
                lVar28 = *(longlong *)&this->CacheStorage->PropertyValues;
                puVar20 = (undefined8 *)((ulonglong)*puVar21 * 0x20 + lVar28);
                uVar14 = puVar20[1];
                puVar2 = (undefined8 *)((ulonglong)*puVar21 * 0x20 + 0x10 + lVar28);
                uVar15 = *puVar2;
                uVar16 = puVar2[1];
                *puVar33 = *puVar20;
                puVar33[1] = uVar14;
                puVar33[2] = uVar15;
                puVar33[3] = uVar16;
                goto LAB_14d63c4f0;
              }
              break;
            }
            iVar24 = *(int *)(*(longlong *)&pTVar9->KeyToPropertyIndex + 0x18 + lVar28);
          }
        }
        puVar20 = (undefined8 *)
                  ((ulonglong)*puVar30 + *(longlong *)(auStack_25c._4_8_ + (longlong)pFVar35 * 8));
        uStack_108 = *puVar20;
        uStack_100 = puVar20[1];
        uStack_f8 = puVar20[2];
        uStack_f0 = puVar20[3];
        *puVar33 = uStack_108;
        puVar33[1] = uStack_100;
        puVar33[2] = uStack_f8;
        puVar33[3] = uStack_f0;
        pUVar10 = *(UObject **)(auStack_25c._4_8_ + (longlong)pFVar35 * 8);
        pTVar9 = this->CacheStorage;
        uVar6 = *puVar30;
        auStack_a0._20_4_ = 0;
        auStack_a0._24_4_ = 0;
        if (pUVar10 != (UObject *)0x0) {
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar10);
          }
          FStack_230.ObjectIndex = 0;
          FStack_230.ObjectSerialNumber = 0;
          pUStack_1c8 = pUVar10;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar10);
          }
          FWeakObjectPtr::operator=(&FStack_230,(FObjectPtr)&pUStack_1c8);
          auStack_a0._20_8_ = FStack_230;
        }
        uStack_7c = 0;
        uStack_84 = uVar6;
        TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
        ::AddInitialValue(pTVar9,(FKeyType *)(auStack_260 + 2),
                          (FCameraFramingZone *)(auStack_a0 + 0x14));
        *(undefined2 *)(puStack_268 + (longlong)puVar30) = auStack_260._2_2_;
LAB_14d63c4f0:
        pFVar35 = (FComponentHeader *)((longlong)&pFVar35->_padding_ + 1);
        puVar33 = puVar33 + 4;
        puVar30 = puVar30 + 1;
        pFVar34 = pFStack_228;
      } while ((longlong)pFVar35 < (longlong)uStack_208);
    }
    if (auStack_168._0_8_ != 0) {
      LOCK();
      *(int *)(auStack_168._0_8_ + 0x30) = *(int *)(auStack_168._0_8_ + 0x30) + -1;
      UNLOCK();
      if (auStack_168._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(auStack_168._0_8_ + 0x20));
      }
    }
  }
  else if (uVar29 != 0) {
    puStack_268 = puStack_268 + -(longlong)puStack_1e0;
    puVar33 = (undefined8 *)auStack_1a0._24_8_;
    puVar30 = puStack_1e0;
    do {
      pTVar9 = pTVar17->CacheStorage;
      pUVar10 = *(UObject **)(auStack_25c._4_8_ + (longlong)pFVar35 * 8);
      uVar6 = *puVar30;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
      ::CleanupStaleEntries(pTVar9);
      FStack_b4.Object.ObjectIndex = 0;
      FStack_b4.Object.ObjectSerialNumber = 0;
      if (pUVar10 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar10);
        }
        FStack_248.ObjectIndex = 0;
        FStack_248.ObjectSerialNumber = 0;
        pUStack_1a8 = pUVar10;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar10);
        }
        FWeakObjectPtr::operator=(&FStack_248,(FObjectPtr)&pUStack_1a8);
        FStack_b4.Object = (FObjectKey)FStack_248;
      }
      FStack_b4.Property.TypeIndex = '\x01';
      FStack_b4.Property._0_2_ = uVar6;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
      ::CleanupStaleEntries(pTVar9);
      uVar19 = MovieScene::GetTypeHash(&FStack_b4);
      if (*(int *)&(pTVar9->KeyToPropertyIndex).field_0x8 !=
          *(int *)&(pTVar9->KeyToPropertyIndex).field_0x34) {
        puVar11 = *(undefined1 **)&(pTVar9->KeyToPropertyIndex).field_0x40;
        puVar25 = &(pTVar9->KeyToPropertyIndex).field_0x38;
        if (puVar11 != (undefined1 *)0x0) {
          puVar25 = puVar11;
        }
        iVar24 = *(int *)(puVar25 +
                         (ulonglong)(*(int *)&(pTVar9->KeyToPropertyIndex).field_0x48 - 1U & uVar19)
                         * 4);
        while (iVar24 != -1) {
          lVar28 = (longlong)iVar24 * 0x20;
          bVar18 = MovieScene::operator==
                             ((FKeyType *)(*(longlong *)&pTVar9->KeyToPropertyIndex + lVar28),
                              &FStack_b4);
          if (bVar18) {
            lVar28 = *(longlong *)&pTVar9->KeyToPropertyIndex + lVar28;
            puVar21 = (ushort *)(lVar28 + 0x14);
            if (lVar28 == 0) {
              puVar21 = (ushort *)0x0;
            }
            if (puVar21 != (ushort *)0x0) {
              lVar28 = *(longlong *)&pTVar17->CacheStorage->PropertyValues;
              puVar20 = (undefined8 *)((ulonglong)*puVar21 * 0x20 + lVar28);
              uVar14 = puVar20[1];
              puVar2 = (undefined8 *)((ulonglong)*puVar21 * 0x20 + 0x10 + lVar28);
              uVar15 = *puVar2;
              uVar16 = puVar2[1];
              *puVar33 = *puVar20;
              puVar33[1] = uVar14;
              puVar33[2] = uVar15;
              puVar33[3] = uVar16;
              goto LAB_14d63c245;
            }
            break;
          }
          iVar24 = *(int *)(lVar28 + 0x18 + *(longlong *)&pTVar9->KeyToPropertyIndex);
        }
      }
      uVar14 = auStack_25c._4_8_;
      puVar20 = (undefined8 *)
                (**(code **)((pTVar17->CustomAccessors).Base +
                            (longlong)(int)((uint)*puVar30 * (pTVar17->CustomAccessors).Stride) +
                            0x18))(auStack_e8,
                                   *(undefined8 *)(auStack_25c._4_8_ + (longlong)pFVar35 * 8));
      auStack_a0._0_4_ = 0;
      auStack_a0._4_4_ = 0;
      uStack_128 = *puVar20;
      uStack_120 = puVar20[1];
      uStack_118 = puVar20[2];
      uStack_110 = puVar20[3];
      *puVar33 = uStack_128;
      puVar33[1] = uStack_120;
      puVar33[2] = uStack_118;
      puVar33[3] = uStack_110;
      pUVar10 = *(UObject **)(uVar14 + (longlong)pFVar35 * 8);
      pTVar9 = pTVar17->CacheStorage;
      uVar6 = *puVar30;
      if (pUVar10 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar10);
        }
        FStack_240.ObjectIndex = 0;
        FStack_240.ObjectSerialNumber = 0;
        pUStack_1d8 = pUVar10;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar10);
        }
        FWeakObjectPtr::operator=(&FStack_240,(FObjectPtr)&pUStack_1d8);
        auStack_a0._0_8_ = FStack_240;
      }
      auStack_a0[0x10] = 1;
      auStack_a0._8_2_ = uVar6;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
      ::AddInitialValue(pTVar9,(FKeyType *)auStack_260,(FCameraFramingZone *)auStack_a0);
      *(undefined2 *)(puStack_268 + (longlong)puVar30) = auStack_260._0_2_;
LAB_14d63c245:
      pFVar35 = (FComponentHeader *)((longlong)&pFVar35->_padding_ + 1);
      puVar33 = puVar33 + 4;
      puVar30 = puVar30 + 1;
      pFVar34 = pFStack_228;
    } while ((longlong)pFVar35 < (longlong)uStack_208);
  }
  if (pFVar34 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar34->ScheduledAccessCount = (atomic<int>)((int)pFVar34->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)uStack_1e8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar34->ReadWriteLock);
    }
  }
  LOCK();
  pFStack_200->ScheduledAccessCount = (atomic<int>)((int)pFStack_200->ScheduledAccessCount + -1);
  UNLOCK();
  if (EStack_218 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFStack_200->ReadWriteLock);
  }
  if (auStack_1a0._0_8_ != 0) {
    if ((ulonglong)auStack_1a0._8_8_ < *(ulonglong *)(auStack_1a0._0_8_ + 0x28)) {
      auStack_1a0._8_8_ = *(ulonglong *)(auStack_1a0._0_8_ + 0x28);
    }
    *(undefined8 *)(auStack_1a0._0_8_ + 0x28) = auStack_1a0._8_8_;
    LOCK();
    *(int *)(auStack_1a0._0_8_ + 0x30) = *(int *)(auStack_1a0._0_8_ + 0x30) + -1;
    UNLOCK();
    if (auStack_1a0._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(auStack_1a0._0_8_ + 0x20));
    }
  }
  uVar27 = uStack_1b0;
  if (uStack_1b0 < pFStack_1f8->SerialNumber) {
    uVar27 = pFStack_1f8->SerialNumber;
  }
  pFStack_1f8->SerialNumber = uVar27;
  LOCK();
  pFStack_1f8->ScheduledAccessCount = (atomic<int>)((int)pFStack_1f8->ScheduledAccessCount + -1);
  UNLOCK();
  if (EStack_214 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pFStack_1f8->ReadWriteLock);
  }
  return;
}

// VisitAllocation @ 14d63ba60

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::VisitAllocation(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
                  *this,FEntityAllocation *param_1)

{
  uchar uVar1;
  EComponentHeaderLockMode EVar2;
  uchar *puVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  FResolvedPropertyAndFunction *this_00;
  FCameraFramingZone *pFVar9;
  ulonglong uVar10;
  FComponentHeader *pFVar11;
  FComponentHeader *pFVar12;
  undefined8 *puVar13;
  FComponentHeader *pFVar14;
  FComponentHeader *pFVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  EComponentHeaderLockMode local_res8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [24];
  TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_> local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_80 [72];
  
  uVar16 = (ulonglong)param_1->Size;
  FEntityAllocation::WriteComponents<FCameraFramingZone>
            (param_1,(TComponentLock<UE::MovieScene::TWrite<FCameraFramingZone>_> *)local_e8,
             this->InitialValueType,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial
            );
  pFVar11 = (FComponentHeader *)0x0;
  pFVar14 = param_1->ComponentHeaders;
  pFVar15 = pFVar14 + param_1->NumComponents;
  for (; pFVar14 != pFVar15; pFVar14 = pFVar14 + 1) {
    if ((TComponentTypeID<UObject_*>)(pFVar14->ComponentType).Value ==
        this->BuiltInComponents->BoundObject) goto LAB_14d63bb09;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar14 = pFVar11;
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14d63bb09:
  EVar2 = param_1->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
  }
  LOCK();
  pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar15 = param_1->ComponentHeaders;
  puVar3 = pFVar14->Components;
  pFVar12 = pFVar15 + param_1->NumComponents;
  for (; pFVar15 != pFVar12; pFVar15 = pFVar15 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FCustomPropertyIndex>)(pFVar15->ComponentType).Value ==
        this->BuiltInComponents->CustomPropertyIndex) {
      local_res8 = param_1->LockMode;
      if (local_res8 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
      }
      LOCK();
      pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + 1);
      UNLOCK();
      pFVar12 = (FComponentHeader *)pFVar15->Components;
      goto LAB_14d63bb7c;
    }
  }
  local_98 = 0;
  uStack_90 = 0;
  local_res8 = LockFree;
  pFVar12 = pFVar11;
  pFVar15 = pFVar11;
LAB_14d63bb7c:
  if (pFVar12 == (FComponentHeader *)0x0) {
    FEntityAllocation::TryReadComponents<unsigned_short>
              (param_1,&local_b0,this->BuiltInComponents->FastPropertyOffset);
    if (local_b0._16_8_ == 0) {
      FEntityAllocation::TryReadComponents<TSharedPtr<FTrackInstancePropertyBindings,1>_>
                (param_1,(TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                          *)local_c8,this->BuiltInComponents->SlowProperty);
      if (((undefined8 *)local_c8._16_8_ != (undefined8 *)0x0) &&
         (puVar13 = (undefined8 *)local_e8._24_8_, puVar8 = (undefined8 *)local_c8._16_8_,
         uVar16 != 0)) {
        do {
          uVar17 = 0;
          uVar18 = 0;
          uVar19 = 0;
          uVar20 = 0;
          uVar21 = 0;
          uVar22 = 0;
          uVar23 = 0;
          uVar24 = 0;
          this_00 = FTrackInstancePropertyBindings::FindOrAdd
                              ((FTrackInstancePropertyBindings *)*puVar8,
                               *(UObject **)(puVar3 + (longlong)pFVar11 * 8));
          uVar1 = (this_00->ResolvedProperty).TypeIndex;
          if (uVar1 == '\0') {
            pFVar9 = FCachedProperty::GetPropertyAddress<FCameraFramingZone>
                               ((FCachedProperty *)this_00);
LAB_14d63bcf3:
            if (pFVar9 != (FCameraFramingZone *)0x0) {
              uVar17 = *(undefined4 *)&pFVar9->Left;
              uVar18 = *(undefined4 *)((longlong)&pFVar9->Left + 4);
              uVar19 = *(undefined4 *)&pFVar9->Top;
              uVar20 = *(undefined4 *)((longlong)&pFVar9->Top + 4);
              uVar21 = *(undefined4 *)&pFVar9->Right;
              uVar22 = *(undefined4 *)((longlong)&pFVar9->Right + 4);
              uVar23 = *(undefined4 *)&pFVar9->Bottom;
              uVar24 = *(undefined4 *)((longlong)&pFVar9->Bottom + 4);
            }
          }
          else if (uVar1 == '\x01') {
            pFVar9 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
            goto LAB_14d63bcf3;
          }
          *(undefined4 *)puVar13 = uVar17;
          *(undefined4 *)((longlong)puVar13 + 4) = uVar18;
          *(undefined4 *)(puVar13 + 1) = uVar19;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uVar20;
          pFVar11 = (FComponentHeader *)((longlong)&pFVar11->_padding_ + 1);
          *(undefined4 *)(puVar13 + 2) = uVar21;
          *(undefined4 *)((longlong)puVar13 + 0x14) = uVar22;
          *(undefined4 *)(puVar13 + 3) = uVar23;
          *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar24;
          puVar13 = puVar13 + 4;
          puVar8 = puVar8 + 2;
        } while ((longlong)pFVar11 < (longlong)uVar16);
      }
      if (local_c8._0_8_ != 0) {
        LOCK();
        *(int *)(local_c8._0_8_ + 0x30) = *(int *)(local_c8._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_c8._8_4_ == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_c8._0_8_ + 0x20));
        }
      }
    }
    else if (uVar16 != 0) {
      do {
        uVar10 = (ulonglong)*(ushort *)(local_b0._16_8_ + (longlong)pFVar11 * 2);
        lVar4 = *(longlong *)(puVar3 + (longlong)pFVar11 * 8);
        pFVar11 = (FComponentHeader *)((longlong)&pFVar11->_padding_ + 1);
        puVar13 = (undefined8 *)(uVar10 + lVar4);
        uVar6 = puVar13[1];
        *(undefined8 *)local_e8._24_8_ = *puVar13;
        *(undefined8 *)(local_e8._24_8_ + 8) = uVar6;
        puVar13 = (undefined8 *)(uVar10 + 0x10 + lVar4);
        uVar6 = puVar13[1];
        *(undefined8 *)(local_e8._24_8_ + 0x10) = *puVar13;
        *(undefined8 *)(local_e8._24_8_ + 0x18) = uVar6;
        local_e8._24_8_ = (undefined8 *)(local_e8._24_8_ + 0x20);
      } while ((longlong)pFVar11 < (longlong)uVar16);
    }
    if (local_b0._0_8_ != 0) {
      LOCK();
      *(int *)(local_b0._0_8_ + 0x30) = *(int *)(local_b0._0_8_ + 0x30) + -1;
      UNLOCK();
      if (local_b0._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_b0._0_8_ + 0x20));
      }
    }
  }
  else {
    puVar13 = (undefined8 *)local_e8._24_8_;
    if (uVar16 != 0) {
      do {
        puVar8 = (undefined8 *)
                 (**(code **)((this->CustomAccessors).Base +
                             (longlong)
                             (int)((uint)(ushort)pFVar12->_padding_ * (this->CustomAccessors).Stride
                                  ) + 0x18))
                           (local_80,*(undefined8 *)(puVar3 + (longlong)pFVar11 * 8));
        pFVar11 = (FComponentHeader *)((longlong)&pFVar11->_padding_ + 1);
        pFVar12 = (FComponentHeader *)((longlong)&pFVar12->_padding_ + 2);
        uVar6 = puVar8[1];
        *puVar13 = *puVar8;
        puVar13[1] = uVar6;
        uVar6 = puVar8[3];
        puVar13[2] = puVar8[2];
        puVar13[3] = uVar6;
        puVar13 = puVar13 + 4;
      } while ((longlong)pFVar11 < (longlong)uVar16);
    }
  }
  if (pFVar15 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_res8 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
    }
  }
  LOCK();
  pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
  }
  if (local_e8._0_8_ != 0) {
    if ((ulonglong)local_e8._8_8_ < *(ulonglong *)(local_e8._0_8_ + 0x28)) {
      local_e8._8_8_ = *(ulonglong *)(local_e8._0_8_ + 0x28);
    }
    *(undefined8 *)(local_e8._0_8_ + 0x28) = local_e8._8_8_;
    LOCK();
    *(int *)(local_e8._0_8_ + 0x30) = *(int *)(local_e8._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_e8._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_e8._0_8_ + 0x20));
    }
  }
  return;
}

// VisitAllocationCached @ 14d63be20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::VisitAllocationCached
          (TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,FEntityAllocation *param_1)

{
  atomic<int> *paVar1;
  undefined8 *puVar2;
  atomic<int> aVar3;
  uchar uVar4;
  ushort uVar5;
  EComponentHeaderLockMode EVar6;
  int iVar7;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
  *pTVar8;
  UObject *pUVar9;
  undefined1 *puVar10;
  longlong lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
  *pTVar16;
  bool bVar17;
  uint uVar18;
  undefined8 *puVar19;
  ushort *puVar20;
  FResolvedPropertyAndFunction *this_00;
  FCameraFramingZone *pFVar21;
  FName *pFVar22;
  int iVar23;
  undefined1 *puVar24;
  wchar_t *pwVar25;
  ulong64 uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ushort *puVar29;
  longlong lVar30;
  FComponentHeader *pFVar31;
  undefined8 *puVar32;
  FComponentHeader *pFVar33;
  FComponentHeader *pFVar34;
  longlong lVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auStack_288 [32];
  uchar *local_268;
  undefined1 local_260 [4];
  undefined1 local_25c [14];
  char local_24e;
  FWeakObjectPtr local_248;
  FWeakObjectPtr local_240;
  FWeakObjectPtr local_238;
  FWeakObjectPtr local_230;
  FComponentHeader *local_228;
  FWeakObjectPtr local_220;
  EComponentHeaderLockMode local_218;
  EComponentHeaderLockMode local_214;
  TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
  *local_210;
  ulonglong local_208;
  FComponentHeader *local_200;
  FComponentHeader *local_1f8;
  FComponentHeader *local_1f0;
  undefined8 local_1e8;
  ushort *puStack_1e0;
  UObject *local_1d8;
  UObject *local_1d0;
  UObject *local_1c8;
  FName local_1c0;
  UObject *local_1b8;
  ulong64 local_1b0;
  UObject *local_1a8;
  undefined1 local_1a0 [32];
  TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
  local_180;
  undefined1 local_168 [24];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  FName local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [32];
  FKeyType local_c8;
  FKeyType local_b4;
  undefined1 local_a0 [28];
  ushort local_84;
  undefined1 local_7c;
  FCameraFramingZone local_78 [2];
  
  local_78[0].Bottom = (double)(__security_cookie.value ^ (ulonglong)auStack_288);
  local_1b0 = (this->WriteContext).SystemSerial;
  uVar28 = (ulonglong)param_1->Size;
  local_1f8 = param_1->ComponentHeaders;
  pFVar34 = (FComponentHeader *)0x0;
  pFVar33 = local_1f8 + param_1->NumComponents;
  for (; local_210 = this, local_1f8 != pFVar33; local_1f8 = local_1f8 + 1) {
    pFVar31 = local_1f8;
    if ((TComponentTypeID<UE::MovieScene::FInitialValueIndex>)(local_1f8->ComponentType).Value ==
        this->BuiltInComponents->InitialValueIndex) goto LAB_14d63bee0;
  }
  local_1f8 = (FComponentHeader *)0x0;
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar31 = pFVar34;
  if (bVar17) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
LAB_14d63bee0:
  local_214 = param_1->LockMode;
  if (local_214 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar31->ReadWriteLock);
  }
  LOCK();
  paVar1 = &pFVar31->ScheduledAccessCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar3 != (atomic<int>)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_268 = pFVar31->Components;
  FEntityAllocation::WriteComponents<FCameraFramingZone>
            (param_1,(TComponentLock<UE::MovieScene::TWrite<FCameraFramingZone>_> *)local_1a0,
             this->InitialValueType,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial
            );
  local_200 = param_1->ComponentHeaders;
  pFVar33 = local_200 + param_1->NumComponents;
  for (; local_200 != pFVar33; local_200 = local_200 + 1) {
    pFVar31 = local_200;
    if ((TComponentTypeID<UObject_*>)(local_200->ComponentType).Value ==
        this->BuiltInComponents->BoundObject) goto LAB_14d63bfb0;
  }
  local_200 = (FComponentHeader *)0x0;
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar31 = pFVar34;
  if (bVar17) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
LAB_14d63bfb0:
  local_218 = param_1->LockMode;
  if (local_218 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar31->ReadWriteLock);
  }
  LOCK();
  pFVar31->ScheduledAccessCount = (atomic<int>)((int)pFVar31->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar33 = param_1->ComponentHeaders;
  local_25c._4_8_ = pFVar31->Components;
  pFVar31 = pFVar33 + param_1->NumComponents;
  for (; pFVar33 != pFVar31; pFVar33 = pFVar33 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FCustomPropertyIndex>)(pFVar33->ComponentType).Value ==
        this->BuiltInComponents->CustomPropertyIndex) {
      EVar6 = param_1->LockMode;
      local_228 = pFVar33;
      if (EVar6 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar33->ReadWriteLock);
      }
      LOCK();
      pFVar33->ScheduledAccessCount = (atomic<int>)((int)pFVar33->ScheduledAccessCount + 1);
      UNLOCK();
      puStack_1e0 = (ushort *)pFVar33->Components;
      local_1e8 = CONCAT44(local_1e8._4_4_,EVar6);
      local_1f0 = pFVar33;
      goto LAB_14d63c034;
    }
  }
  local_228 = (FComponentHeader *)0x0;
  local_1e8 = 0;
  puStack_1e0 = (ushort *)0x0;
  local_1f0 = (FComponentHeader *)0x0;
LAB_14d63c034:
  pFVar33 = local_1f0;
  pTVar16 = local_210;
  local_208 = uVar28;
  if (puStack_1e0 == (ushort *)0x0) {
    FEntityAllocation::TryReadComponents<unsigned_short>
              (param_1,(TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_> *)local_168,
               this->BuiltInComponents->FastPropertyOffset);
    if ((ushort *)local_168._16_8_ == (ushort *)0x0) {
      FEntityAllocation::TryReadComponents<TSharedPtr<FTrackInstancePropertyBindings,1>_>
                (param_1,&local_180,this->BuiltInComponents->SlowProperty);
      if ((local_180._16_8_ != 0) && (uVar28 != 0)) {
        lVar30 = 0;
        lVar27 = lVar30;
        lVar35 = lVar30;
        do {
          pTVar8 = this->CacheStorage;
          if ((*(longlong *)(local_180._16_8_ + lVar30) == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar17)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (*(int *)(*(longlong *)(local_180._16_8_ + lVar30) + 0x58) == 0) {
            pwVar25 = L"";
          }
          else {
            pwVar25 = *(wchar_t **)(*(longlong *)(local_180._16_8_ + lVar30) + 0x50);
          }
          ::FName::FName(&local_1c0,pwVar25);
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
          ::FindPropertyIndex(pTVar8,(UObject *)(local_25c + 0xc),
                              *(FName **)(local_25c._4_8_ + lVar35 * 8));
          uVar13 = local_25c._4_8_;
          if (local_24e == '\0') {
            uVar36 = 0;
            uVar37 = 0;
            uVar38 = 0;
            uVar39 = 0;
            uVar40 = 0;
            uVar41 = 0;
            uVar42 = 0;
            uVar43 = 0;
            this_00 = FTrackInstancePropertyBindings::FindOrAdd
                                (*(FTrackInstancePropertyBindings **)(local_180._16_8_ + lVar30),
                                 *(UObject **)(local_25c._4_8_ + lVar35 * 8));
            uVar4 = (this_00->ResolvedProperty).TypeIndex;
            if (uVar4 == '\0') {
              pFVar21 = FCachedProperty::GetPropertyAddress<FCameraFramingZone>
                                  ((FCachedProperty *)this_00);
LAB_14d63c66a:
              if (pFVar21 != (FCameraFramingZone *)0x0) {
                uVar36 = *(undefined4 *)&pFVar21->Left;
                uVar37 = *(undefined4 *)((longlong)&pFVar21->Left + 4);
                uVar38 = *(undefined4 *)&pFVar21->Top;
                uVar39 = *(undefined4 *)((longlong)&pFVar21->Top + 4);
                uVar40 = *(undefined4 *)&pFVar21->Right;
                uVar41 = *(undefined4 *)((longlong)&pFVar21->Right + 4);
                uVar42 = *(undefined4 *)&pFVar21->Bottom;
                uVar43 = *(undefined4 *)((longlong)&pFVar21->Bottom + 4);
              }
            }
            else if (uVar4 == '\x01') {
              pFVar21 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
              goto LAB_14d63c66a;
            }
            local_150 = CONCAT44(uVar37,uVar36);
            local_140 = CONCAT44(uVar41,uVar40);
            local_148 = CONCAT44(uVar39,uVar38);
            local_138 = CONCAT44(uVar43,uVar42);
            *(ulonglong *)(lVar27 + local_1a0._24_8_) = CONCAT44(uVar37,uVar36);
            *(ulonglong *)(lVar27 + 8 + local_1a0._24_8_) = CONCAT44(uVar39,uVar38);
            *(ulonglong *)(lVar27 + 0x10 + local_1a0._24_8_) = CONCAT44(uVar41,uVar40);
            *(ulonglong *)(lVar27 + 0x18 + local_1a0._24_8_) = CONCAT44(uVar43,uVar42);
            pUVar9 = *(UObject **)(uVar13 + lVar35 * 8);
            pTVar8 = this->CacheStorage;
            lVar11 = *(longlong *)(local_180._16_8_ + lVar30);
            local_78[0].Left = 0.0;
            if (pUVar9 != (UObject *)0x0) {
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar9);
              }
              local_220.ObjectIndex = 0;
              local_220.ObjectSerialNumber = 0;
              local_1b8 = pUVar9;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar9);
              }
              FWeakObjectPtr::operator=(&local_220,(FObjectPtr)&local_1b8);
              local_78[0].Left = (double)local_220;
            }
            iVar7 = *(int *)(lVar11 + 0x58);
            iVar23 = iVar7 + -1;
            if (iVar7 == 0) {
              iVar23 = 0;
            }
            pFVar22 = ::FName::FName(&local_130,iVar23,*(wchar_t **)(lVar11 + 0x50),FNAME_Add);
            local_78[0].Top = *(double *)pFVar22;
            local_78[0].Right._0_1_ = 2;
            TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
            ::AddInitialValue(pTVar8,(FKeyType *)local_25c,local_78);
            *(undefined2 *)local_268 = local_25c._0_2_;
            this = local_210;
          }
          else {
            lVar11 = *(longlong *)&this->CacheStorage->PropertyValues;
            puVar32 = (undefined8 *)((ulonglong)(ushort)local_25c._12_2_ * 0x20 + lVar11);
            uVar13 = puVar32[1];
            puVar19 = (undefined8 *)((ulonglong)(ushort)local_25c._12_2_ * 0x20 + 0x10 + lVar11);
            uVar14 = *puVar19;
            uVar15 = puVar19[1];
            *(undefined8 *)(lVar27 + local_1a0._24_8_) = *puVar32;
            ((undefined8 *)(lVar27 + local_1a0._24_8_))[1] = uVar13;
            puVar32 = (undefined8 *)(lVar27 + 0x10 + local_1a0._24_8_);
            *puVar32 = uVar14;
            puVar32[1] = uVar15;
          }
          local_268 = local_268 + 2;
          lVar35 = lVar35 + 1;
          lVar27 = lVar27 + 0x20;
          lVar30 = lVar30 + 0x10;
          pFVar33 = local_1f0;
        } while (lVar35 < (longlong)local_208);
      }
      if (local_180._0_8_ != 0) {
        LOCK();
        *(int *)(local_180._0_8_ + 0x30) = *(int *)(local_180._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_180._8_4_ == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_180._0_8_ + 0x20));
        }
      }
    }
    else if (uVar28 != 0) {
      local_268 = local_268 + -local_168._16_8_;
      puVar29 = (ushort *)local_168._16_8_;
      puVar32 = (undefined8 *)local_1a0._24_8_;
      do {
        pTVar8 = this->CacheStorage;
        uVar5 = *puVar29;
        pUVar9 = *(UObject **)(local_25c._4_8_ + (longlong)pFVar34 * 8);
        TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
        ::CleanupStaleEntries(pTVar8);
        local_c8.Object.ObjectIndex = 0;
        local_c8.Object.ObjectSerialNumber = 0;
        if (pUVar9 != (UObject *)0x0) {
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar9);
          }
          local_238.ObjectIndex = 0;
          local_238.ObjectSerialNumber = 0;
          local_1d0 = pUVar9;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar9);
          }
          FWeakObjectPtr::operator=(&local_238,(FObjectPtr)&local_1d0);
          local_c8.Object = (FObjectKey)local_238;
        }
        local_c8.Property.TypeIndex = '\0';
        local_c8.Property._0_2_ = uVar5;
        TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
        ::CleanupStaleEntries(pTVar8);
        uVar18 = MovieScene::GetTypeHash(&local_c8);
        if (*(int *)&(pTVar8->KeyToPropertyIndex).field_0x8 !=
            *(int *)&(pTVar8->KeyToPropertyIndex).field_0x34) {
          puVar10 = *(undefined1 **)&(pTVar8->KeyToPropertyIndex).field_0x40;
          puVar24 = &(pTVar8->KeyToPropertyIndex).field_0x38;
          if (puVar10 != (undefined1 *)0x0) {
            puVar24 = puVar10;
          }
          iVar23 = *(int *)(puVar24 +
                           (ulonglong)
                           (*(int *)&(pTVar8->KeyToPropertyIndex).field_0x48 - 1U & uVar18) * 4);
          while (iVar23 != -1) {
            lVar27 = (longlong)iVar23 * 0x20;
            bVar17 = MovieScene::operator==
                               ((FKeyType *)(*(longlong *)&pTVar8->KeyToPropertyIndex + lVar27),
                                &local_c8);
            if (bVar17) {
              lVar27 = *(longlong *)&pTVar8->KeyToPropertyIndex + lVar27;
              puVar20 = (ushort *)(lVar27 + 0x14);
              if (lVar27 == 0) {
                puVar20 = (ushort *)0x0;
              }
              if (puVar20 != (ushort *)0x0) {
                lVar27 = *(longlong *)&this->CacheStorage->PropertyValues;
                puVar19 = (undefined8 *)((ulonglong)*puVar20 * 0x20 + lVar27);
                uVar13 = puVar19[1];
                puVar2 = (undefined8 *)((ulonglong)*puVar20 * 0x20 + 0x10 + lVar27);
                uVar14 = *puVar2;
                uVar15 = puVar2[1];
                *puVar32 = *puVar19;
                puVar32[1] = uVar13;
                puVar32[2] = uVar14;
                puVar32[3] = uVar15;
                goto LAB_14d63c4f0;
              }
              break;
            }
            iVar23 = *(int *)(*(longlong *)&pTVar8->KeyToPropertyIndex + 0x18 + lVar27);
          }
        }
        puVar19 = (undefined8 *)
                  ((ulonglong)*puVar29 + *(longlong *)(local_25c._4_8_ + (longlong)pFVar34 * 8));
        local_108 = *puVar19;
        uStack_100 = puVar19[1];
        local_f8 = puVar19[2];
        uStack_f0 = puVar19[3];
        *puVar32 = local_108;
        puVar32[1] = uStack_100;
        puVar32[2] = local_f8;
        puVar32[3] = uStack_f0;
        pUVar9 = *(UObject **)(local_25c._4_8_ + (longlong)pFVar34 * 8);
        pTVar8 = this->CacheStorage;
        uVar5 = *puVar29;
        local_a0._20_4_ = 0;
        local_a0._24_4_ = 0;
        if (pUVar9 != (UObject *)0x0) {
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar9);
          }
          local_230.ObjectIndex = 0;
          local_230.ObjectSerialNumber = 0;
          local_1c8 = pUVar9;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar9);
          }
          FWeakObjectPtr::operator=(&local_230,(FObjectPtr)&local_1c8);
          local_a0._20_8_ = local_230;
        }
        local_7c = 0;
        local_84 = uVar5;
        TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
        ::AddInitialValue(pTVar8,(FKeyType *)(local_260 + 2),(FCameraFramingZone *)(local_a0 + 0x14)
                         );
        *(undefined2 *)(local_268 + (longlong)puVar29) = local_260._2_2_;
LAB_14d63c4f0:
        pFVar34 = (FComponentHeader *)((longlong)&pFVar34->_padding_ + 1);
        puVar32 = puVar32 + 4;
        puVar29 = puVar29 + 1;
        pFVar33 = local_228;
      } while ((longlong)pFVar34 < (longlong)local_208);
    }
    if (local_168._0_8_ != 0) {
      LOCK();
      *(int *)(local_168._0_8_ + 0x30) = *(int *)(local_168._0_8_ + 0x30) + -1;
      UNLOCK();
      if (local_168._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_168._0_8_ + 0x20));
      }
    }
  }
  else if (uVar28 != 0) {
    local_268 = local_268 + -(longlong)puStack_1e0;
    puVar32 = (undefined8 *)local_1a0._24_8_;
    puVar29 = puStack_1e0;
    do {
      pTVar8 = pTVar16->CacheStorage;
      pUVar9 = *(UObject **)(local_25c._4_8_ + (longlong)pFVar34 * 8);
      uVar5 = *puVar29;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
      ::CleanupStaleEntries(pTVar8);
      local_b4.Object.ObjectIndex = 0;
      local_b4.Object.ObjectSerialNumber = 0;
      if (pUVar9 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar9);
        }
        local_248.ObjectIndex = 0;
        local_248.ObjectSerialNumber = 0;
        local_1a8 = pUVar9;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar9);
        }
        FWeakObjectPtr::operator=(&local_248,(FObjectPtr)&local_1a8);
        local_b4.Object = (FObjectKey)local_248;
      }
      local_b4.Property.TypeIndex = '\x01';
      local_b4.Property._0_2_ = uVar5;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
      ::CleanupStaleEntries(pTVar8);
      uVar18 = MovieScene::GetTypeHash(&local_b4);
      if (*(int *)&(pTVar8->KeyToPropertyIndex).field_0x8 !=
          *(int *)&(pTVar8->KeyToPropertyIndex).field_0x34) {
        puVar10 = *(undefined1 **)&(pTVar8->KeyToPropertyIndex).field_0x40;
        puVar24 = &(pTVar8->KeyToPropertyIndex).field_0x38;
        if (puVar10 != (undefined1 *)0x0) {
          puVar24 = puVar10;
        }
        iVar23 = *(int *)(puVar24 +
                         (ulonglong)(*(int *)&(pTVar8->KeyToPropertyIndex).field_0x48 - 1U & uVar18)
                         * 4);
        while (iVar23 != -1) {
          lVar27 = (longlong)iVar23 * 0x20;
          bVar17 = MovieScene::operator==
                             ((FKeyType *)(*(longlong *)&pTVar8->KeyToPropertyIndex + lVar27),
                              &local_b4);
          if (bVar17) {
            lVar27 = *(longlong *)&pTVar8->KeyToPropertyIndex + lVar27;
            puVar20 = (ushort *)(lVar27 + 0x14);
            if (lVar27 == 0) {
              puVar20 = (ushort *)0x0;
            }
            if (puVar20 != (ushort *)0x0) {
              lVar27 = *(longlong *)&pTVar16->CacheStorage->PropertyValues;
              puVar19 = (undefined8 *)((ulonglong)*puVar20 * 0x20 + lVar27);
              uVar13 = puVar19[1];
              puVar2 = (undefined8 *)((ulonglong)*puVar20 * 0x20 + 0x10 + lVar27);
              uVar14 = *puVar2;
              uVar15 = puVar2[1];
              *puVar32 = *puVar19;
              puVar32[1] = uVar13;
              puVar32[2] = uVar14;
              puVar32[3] = uVar15;
              goto LAB_14d63c245;
            }
            break;
          }
          iVar23 = *(int *)(lVar27 + 0x18 + *(longlong *)&pTVar8->KeyToPropertyIndex);
        }
      }
      uVar13 = local_25c._4_8_;
      puVar19 = (undefined8 *)
                (**(code **)((pTVar16->CustomAccessors).Base +
                            (longlong)(int)((uint)*puVar29 * (pTVar16->CustomAccessors).Stride) +
                            0x18))(local_e8,*(undefined8 *)(local_25c._4_8_ + (longlong)pFVar34 * 8)
                                  );
      local_a0._0_4_ = 0;
      local_a0._4_4_ = 0;
      local_128 = *puVar19;
      uStack_120 = puVar19[1];
      local_118 = puVar19[2];
      uStack_110 = puVar19[3];
      *puVar32 = local_128;
      puVar32[1] = uStack_120;
      puVar32[2] = local_118;
      puVar32[3] = uStack_110;
      pUVar9 = *(UObject **)(uVar13 + (longlong)pFVar34 * 8);
      pTVar8 = pTVar16->CacheStorage;
      uVar5 = *puVar29;
      if (pUVar9 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar9);
        }
        local_240.ObjectIndex = 0;
        local_240.ObjectSerialNumber = 0;
        local_1d8 = pUVar9;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar9);
        }
        FWeakObjectPtr::operator=(&local_240,(FObjectPtr)&local_1d8);
        local_a0._0_8_ = local_240;
      }
      local_a0[0x10] = 1;
      local_a0._8_2_ = uVar5;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
      ::AddInitialValue(pTVar8,(FKeyType *)local_260,(FCameraFramingZone *)local_a0);
      *(undefined2 *)(local_268 + (longlong)puVar29) = local_260._0_2_;
LAB_14d63c245:
      pFVar34 = (FComponentHeader *)((longlong)&pFVar34->_padding_ + 1);
      puVar32 = puVar32 + 4;
      puVar29 = puVar29 + 1;
      pFVar33 = local_228;
    } while ((longlong)pFVar34 < (longlong)local_208);
  }
  if (pFVar33 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar33->ScheduledAccessCount = (atomic<int>)((int)pFVar33->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_1e8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar33->ReadWriteLock);
    }
  }
  LOCK();
  local_200->ScheduledAccessCount = (atomic<int>)((int)local_200->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_218 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_200->ReadWriteLock);
  }
  if (local_1a0._0_8_ != 0) {
    if ((ulonglong)local_1a0._8_8_ < *(ulonglong *)(local_1a0._0_8_ + 0x28)) {
      local_1a0._8_8_ = *(ulonglong *)(local_1a0._0_8_ + 0x28);
    }
    *(undefined8 *)(local_1a0._0_8_ + 0x28) = local_1a0._8_8_;
    LOCK();
    *(int *)(local_1a0._0_8_ + 0x30) = *(int *)(local_1a0._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_1a0._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_1a0._0_8_ + 0x20));
    }
  }
  uVar26 = local_1b0;
  if (local_1b0 < local_1f8->SerialNumber) {
    uVar26 = local_1f8->SerialNumber;
  }
  local_1f8->SerialNumber = uVar26;
  LOCK();
  local_1f8->ScheduledAccessCount = (atomic<int>)((int)local_1f8->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_214 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_1f8->ReadWriteLock);
  }
  return;
}

// VisitInterrogationAllocation @ 14d63c8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::VisitInterrogationAllocation
          (TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,FEntityAllocation *param_1)

{
  TSortedMap<UE::MovieScene::FInterrogationChannel,FCameraFramingZone,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
  *this_00;
  undefined4 *puVar1;
  uchar uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
  *this_01;
  code *pcVar5;
  undefined8 uVar6;
  double dVar7;
  bool bVar8;
  TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
  *this_02;
  FInterrogationChannelInfo *this_03;
  UObject *pUVar9;
  FString *pFVar10;
  FResolvedPropertyAndFunction *this_04;
  double *pdVar11;
  FComponentHeader *pFVar12;
  longlong lVar13;
  uchar *puVar14;
  ulonglong uVar15;
  FCameraFramingZone *pFVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  FComponentHeader *pFVar22;
  longlong lVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex>_> local_1b8;
  FInterrogationChannel local_1b0;
  undefined1 local_1ac [6];
  char local_1a6;
  undefined1 local_1a4 [4];
  FCameraFramingZone local_1a0;
  uchar local_180;
  FInterrogationChannel local_178 [2];
  EComponentHeaderLockMode local_170;
  TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
  *local_168;
  TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
  *local_160;
  FComponentHeader *local_158;
  ulonglong local_150;
  uchar *local_148;
  TComponentLock<UE::MovieScene::TWrite<FCameraFramingZone>_> local_140;
  FCustomAccessorView local_118;
  FString local_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [72];
  undefined4 local_90;
  ForAnyElementType local_88;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  uVar15 = (ulonglong)param_1->Size;
  local_168 = this;
  FEntityAllocation::WriteComponents<FCameraFramingZone>
            (param_1,&local_140,this->InitialValueType,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  pFVar22 = param_1->ComponentHeaders;
  pFVar12 = pFVar22 + param_1->NumComponents;
  for (; pFVar22 != pFVar12; pFVar22 = pFVar22 + 1) {
    local_158 = pFVar22;
    if ((TComponentTypeID<UE::MovieScene::FInterrogationKey>)(pFVar22->ComponentType).Value ==
        (this->BuiltInComponents->Interrogation).OutputKey) goto LAB_14d63c991;
  }
  pFVar22 = (FComponentHeader *)0x0;
  local_158 = (FComponentHeader *)0x0;
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar8) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14d63c991:
  local_170 = param_1->LockMode;
  if (local_170 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar22->ReadWriteLock);
  }
  LOCK();
  pFVar22->ScheduledAccessCount = (atomic<int>)((int)pFVar22->ScheduledAccessCount + 1);
  UNLOCK();
  puVar14 = pFVar22->Components;
  local_148 = puVar14;
  this_02 = (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
             *)(**(code **)*this->Interrogation)();
  local_160 = this_02;
  local_150 = uVar15;
  if (uVar15 != 0) {
    lVar23 = 0;
    lVar21 = 0;
    this_00 = &this->ValuesByChannel;
    do {
      uVar3 = (this->ValuesByChannel).Pairs.ArrayNum;
      iVar18 = 0;
      iVar17 = 0;
      local_1b0.Value = *(int *)(puVar14 + lVar23 * 8);
      pFVar4 = (this_00->Pairs).AllocatorInstance.Data;
      uVar19 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar20 = uVar19 >> 1;
          iVar17 = iVar18;
          if (*(int *)(pFVar4 + (longlong)(int)(uVar20 + iVar18) * 0x28) < local_1b0.Value) {
            iVar17 = uVar20 + iVar18 + (uVar19 & 1);
          }
          uVar19 = uVar20;
          iVar18 = iVar17;
        } while (uVar20 != 0);
      }
      if (((iVar17 < (int)uVar3) &&
          (lVar13 = (longlong)iVar17, *(int *)(pFVar4 + lVar13 * 0x28) <= local_1b0.Value)) &&
         (iVar17 != -1)) {
        if ((iVar17 < 0) &&
           (local_1c8 = lVar13, local_1c0 = (longlong)(int)uVar3,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this_00->Pairs).AllocatorInstance.Data + lVar13 * 0x28 + 8;
        if (pFVar4 == (FScriptContainerElement *)0x0) goto LAB_14d63cac4;
        uVar6 = *(undefined8 *)(pFVar4 + 8);
        uVar24 = *(undefined4 *)(pFVar4 + 0x10);
        uVar25 = *(undefined4 *)(pFVar4 + 0x14);
        uVar26 = *(undefined4 *)(pFVar4 + 0x18);
        uVar27 = *(undefined4 *)(pFVar4 + 0x1c);
        *(undefined8 *)(lVar21 + local_140._24_8_) = *(undefined8 *)pFVar4;
        ((undefined8 *)(lVar21 + local_140._24_8_))[1] = uVar6;
        puVar1 = (undefined4 *)(lVar21 + 0x10 + local_140._24_8_);
        *puVar1 = uVar24;
        puVar1[1] = uVar25;
        puVar1[2] = uVar26;
        puVar1[3] = uVar27;
      }
      else {
LAB_14d63cac4:
        local_178[0].Value = local_1b0.Value;
        this_03 = TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
                  ::Find(this_02,local_178);
        if (((this_03 != (FInterrogationChannelInfo *)0x0) &&
            (pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_03), pUVar9 != (UObject *)0x0)) &&
           (this_02 = local_160, (this_03->PropertyBinding).PropertyName != (FName)0x0)) {
          local_118.Base = (local_168->CustomAccessors).Base;
          local_118.ViewNum = (local_168->CustomAccessors).ViewNum;
          local_118.Stride = (local_168->CustomAccessors).Stride;
          FPropertyRegistry::ResolveFastProperty
                    (&local_1b8,pUVar9,&this_03->PropertyBinding,&local_118);
          this_01 = local_168->CacheStorage;
          if (this_01 ==
              (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
               *)0x0) {
LAB_14d63cc24:
            local_180 = 0;
            if (local_1b8.bIsSet == false) {
              pFVar10 = ::FName::ToString(&(this_03->PropertyBinding).PropertyPath,&local_108);
              FTrackInstancePropertyBindings::FTrackInstancePropertyBindings
                        ((FTrackInstancePropertyBindings *)local_d8,
                         (this_03->PropertyBinding).PropertyName,pFVar10);
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              local_180 = '\x01';
              uVar24 = 0;
              uVar25 = 0;
              uVar26 = 0;
              uVar27 = 0;
              local_1a0.Left = 0.0;
              local_1a0.Top = 0.0;
              local_1a0.Right = 0.0;
              local_1a0.Bottom = 0.0;
              uVar28 = 0;
              uVar29 = 0;
              uVar30 = 0;
              uVar31 = 0;
              this_04 = FTrackInstancePropertyBindings::FindOrAdd
                                  ((FTrackInstancePropertyBindings *)local_d8,pUVar9);
              uVar2 = (this_04->ResolvedProperty).TypeIndex;
              if (uVar2 == '\0') {
                pFVar16 = FCachedProperty::GetPropertyAddress<FCameraFramingZone>
                                    ((FCachedProperty *)this_04);
LAB_14d63cca7:
                if (pFVar16 != (FCameraFramingZone *)0x0) {
                  uVar24 = *(undefined4 *)&pFVar16->Left;
                  uVar25 = *(undefined4 *)((longlong)&pFVar16->Left + 4);
                  uVar26 = *(undefined4 *)&pFVar16->Top;
                  uVar27 = *(undefined4 *)((longlong)&pFVar16->Top + 4);
                  uVar28 = *(undefined4 *)&pFVar16->Right;
                  uVar29 = *(undefined4 *)((longlong)&pFVar16->Right + 4);
                  uVar30 = *(undefined4 *)&pFVar16->Bottom;
                  uVar31 = *(undefined4 *)((longlong)&pFVar16->Bottom + 4);
                }
              }
              else if (uVar2 == '\x01') {
                pFVar16 = FVolatileProperty::ResolvePropertySteps
                                    ((FVolatileProperty *)this_04,false);
                goto LAB_14d63cca7;
              }
              local_1a0.Left = (double)CONCAT44(uVar25,uVar24);
              local_1a0.Top = (double)CONCAT44(uVar27,uVar26);
              local_1a0.Right = (double)CONCAT44(uVar29,uVar28);
              local_1a0.Bottom = (double)CONCAT44(uVar31,uVar30);
              if (local_88.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data);
              }
              local_90 = 0;
              if ((void *)local_d8._64_8_ != (void *)0x0) {
                FMemory::Free((void *)local_d8._64_8_);
              }
              TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_d8);
LAB_14d63cd38:
              if ((local_180 == '\0') &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              if (local_1b8.TypedValue.TypeIndex == '\x01') {
                local_180 = local_1b8.TypedValue.TypeIndex;
                local_1a0.Left = 0.0;
                local_1a0.Top = 0.0;
                local_1a0.Right = 0.0;
                local_1a0.Bottom = 0.0;
                pdVar11 = (double *)
                          (**(code **)((local_168->CustomAccessors).Base +
                                      (longlong)
                                      (int)((uint)(ushort)local_1b8.TypedValue._padding_ *
                                           (local_168->CustomAccessors).Stride) + 0x18))
                                    (local_f8,pUVar9);
                local_1a0.Left = *pdVar11;
                local_1a0.Top = pdVar11[1];
                local_1a0.Right = pdVar11[2];
                local_1a0.Bottom = pdVar11[3];
                goto LAB_14d63cd38;
              }
              if ((local_1b8.TypedValue.TypeIndex != '\0') &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_180 = '\x01';
              local_1a0.Left =
                   *(double *)(&pUVar9->field_0x0 + (ushort)local_1b8.TypedValue._padding_);
              local_1a0.Top =
                   *(double *)
                    ((longlong)(&pUVar9->field_0x0 + (ushort)local_1b8.TypedValue._padding_) + 8);
              local_1a0.Right =
                   *(double *)(&pUVar9->field_0x10 + (ushort)local_1b8.TypedValue._padding_);
              local_1a0.Bottom =
                   *(double *)
                    ((longlong)(&pUVar9->field_0x10 + (ushort)local_1b8.TypedValue._padding_) + 8);
            }
            *(double *)(lVar21 + local_140._24_8_) = local_1a0.Left;
            ((double *)(lVar21 + local_140._24_8_))[1] = local_1a0.Top;
            puVar1 = (undefined4 *)(lVar21 + 0x10 + local_140._24_8_);
            *puVar1 = local_1a0.Right._0_4_;
            puVar1[1] = local_1a0.Right._4_4_;
            puVar1[2] = local_1a0.Bottom._0_4_;
            puVar1[3] = local_1a0.Bottom._4_4_;
            if ((local_180 == '\0') &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar16 = &local_1a0;
          }
          else {
            if (local_1b8.bIsSet == false) {
              TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
              ::FindPropertyIndex(this_01,(UObject *)local_1ac,(FName *)pUVar9);
              if (local_1ac[2] == '\0') goto LAB_14d63cbfb;
              pFVar16 = (FCameraFramingZone *)
                        ((ulonglong)(ushort)local_1ac._0_2_ * 0x20 +
                        *(longlong *)&this_01->PropertyValues);
            }
            else if (local_1b8.TypedValue.TypeIndex == '\x01') {
              TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
              ::FindPropertyIndex(this_01,(UObject *)(local_1ac + 4),
                                  (FCustomPropertyIndex)(ushort)pUVar9);
              if (local_1a6 == '\0') {
LAB_14d63cbfb:
                pFVar16 = (FCameraFramingZone *)0x0;
              }
              else {
                pFVar16 = (FCameraFramingZone *)
                          ((ulonglong)(ushort)local_1ac._4_2_ * 0x20 +
                          *(longlong *)&this_01->PropertyValues);
              }
            }
            else {
              if ((local_1b8.TypedValue.TypeIndex != '\0') &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
              ::FindPropertyIndex(this_01,(UObject *)local_1a4,(ushort)pUVar9);
              if (local_1a4[2] == '\0') goto LAB_14d63cbfb;
              pFVar16 = (FCameraFramingZone *)
                        ((ulonglong)(ushort)local_1a4._0_2_ * 0x20 +
                        *(longlong *)&this_01->PropertyValues);
            }
            if (pFVar16 == (FCameraFramingZone *)0x0) goto LAB_14d63cc24;
            dVar7 = pFVar16->Top;
            uVar24 = *(undefined4 *)&pFVar16->Right;
            uVar25 = *(undefined4 *)((longlong)&pFVar16->Right + 4);
            uVar26 = *(undefined4 *)&pFVar16->Bottom;
            uVar27 = *(undefined4 *)((longlong)&pFVar16->Bottom + 4);
            *(double *)(lVar21 + local_140._24_8_) = pFVar16->Left;
            ((double *)(lVar21 + local_140._24_8_))[1] = dVar7;
            puVar1 = (undefined4 *)(lVar21 + 0x10 + local_140._24_8_);
            *puVar1 = uVar24;
            puVar1[1] = uVar25;
            puVar1[2] = uVar26;
            puVar1[3] = uVar27;
          }
          TSortedMap<UE::MovieScene::FInterrogationChannel,FCameraFramingZone,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
          ::Emplace<UE::MovieScene::FInterrogationChannel_const_&,FCameraFramingZone_const_&>
                    (this_00,&local_1b0,pFVar16);
          this_02 = local_160;
        }
      }
      lVar23 = lVar23 + 1;
      lVar21 = lVar21 + 0x20;
      puVar14 = local_148;
      pFVar22 = local_158;
    } while (lVar23 < (longlong)local_150);
  }
  LOCK();
  pFVar22->ScheduledAccessCount = (atomic<int>)((int)pFVar22->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_170 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar22->ReadWriteLock);
  }
  if (local_140._0_8_ != 0) {
    if ((ulonglong)local_140._8_8_ < *(ulonglong *)(local_140._0_8_ + 0x28)) {
      local_140._8_8_ = *(ulonglong *)(local_140._0_8_ + 0x28);
    }
    *(undefined8 *)(local_140._0_8_ + 0x28) = local_140._8_8_;
    LOCK();
    *(int *)(local_140._0_8_ + 0x30) = *(int *)(local_140._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_140._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_140._0_8_ + 0x20));
    }
  }
  return;
}

