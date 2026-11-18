// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// ~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_> @ 14d5ffca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
::
~TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
           *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)(this->Traits)._padding_);
  DestructItems<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>,int>
            ((TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>
              *)(this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data,
             (this->TransientPreAnimatedStorage).Pairs.ArrayNum);
  pFVar3 = (this->TransientPreAnimatedStorage).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
            (&this->PreAnimatedStorage);
  *(undefined4 *)&(this->KeyToStorageIndex).field_0x48 = 0;
  pvVar4 = *(void **)&(this->KeyToStorageIndex).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToStorageIndex);
  this->_padding_ = (longlong)&___7IPreAnimatedStorage_MovieScene_UE__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// AddReferencedObjects @ 14d607790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
::AddReferencedObjects
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
           *this,FReferenceCollector *param_1)

{
  return;
}

// DiscardPreAnimatedStateStorage @ 14d6137c0

/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
::DiscardPreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
           *this,FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  IRestoreMask *pIVar3;
  code *pcVar4;
  bool bVar5;
  EPreAnimatedStorageRequirement EVar6;
  char cVar7;
  int iVar8;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  FPreAnimatedStorageIndex local_res10 [2];
  TTuple<FObjectKey,FName> local_28;
  
  pIVar3 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar3 != (IRestoreMask *)0x0) {
    pcVar4 = *(code **)((longlong)*pIVar3 + 8);
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    cVar7 = (*pcVar4)(pIVar3);
    if (cVar7 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 == Persistent) {
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    puVar1 = (undefined8 *)(*(longlong *)this_00 + (longlong)param_1.Value * 0x50);
    local_28._0_8_ = *puVar1;
    local_28._8_8_ = puVar1[1];
    TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
    ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
              *)&this->KeyToStorageIndex,&local_28);
    if ((param_1.Value == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
    ::RemoveAt(this_00,param_1.Value,1);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    EVar6 = None;
  }
  else {
    if ((param_2 != Transient) &&
       (bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352133>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0x145,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    iVar8 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if (iVar8 == 0) {
      if ((param_1.Value == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      pbVar2 = (byte *)((longlong)param_1.Value * 0x50 + 0x48 + *(longlong *)this_00);
      *pbVar2 = *pbVar2 | 2;
    }
    EVar6 = Persistent;
  }
  return EVar6;
}

// GetOrCreateStorageIndex @ 14d61acc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageIndex __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
::GetOrCreateStorageIndex
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
           *this,TTuple<FObjectKey,FName> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar7;
  byte bVar8;
  ulonglong uVar9;
  TTuple<FObjectKey,FName> *in_R8;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [16];
  undefined8 *local_a8;
  bool local_a0 [8];
  TTuple<FObjectKey,FName> *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60 [2];
  byte local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pTVar7 = TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                   *)&this->KeyToStorageIndex,in_R8);
  if (pTVar7 == (TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
    *(undefined4 *)param_1 = 0xffffffff;
  }
  else {
    iVar6 = *(int *)&pTVar7->field_0x10;
    *(int *)param_1 = iVar6;
    if (iVar6 != -1) goto LAB_14d61af07;
  }
  local_90 = *(undefined8 *)in_R8;
  uStack_88 = *(undefined8 *)&in_R8->field_0x8;
  local_48 = local_48 & 0xfc;
  iVar6 = *(int *)&(this->PreAnimatedStorage).field_0x34;
  local_60[0] = 0;
  local_50 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (iVar6 == 0) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)&this->PreAnimatedStorage,
                       (int *)&(this->PreAnimatedStorage).field_0x8,
                       (int *)&(this->PreAnimatedStorage).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PreAnimatedStorage).field_0x10,false)
    ;
  }
  else {
    iVar5 = *(int *)&(this->PreAnimatedStorage).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->PreAnimatedStorage;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x50);
    *(int *)&(this->PreAnimatedStorage).field_0x30 = iVar1;
    *(int *)&(this->PreAnimatedStorage).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<80,8,FDefaultSparseArrayAllocator> *)&this->PreAnimatedStorage,
             (FSparseArrayAllocationInfo *)(local_b8 + 8),iVar5);
  if (local_a8 != (undefined8 *)0x0) {
    *local_a8 = local_90;
    local_a8[1] = uStack_88;
    local_a8[2] = local_80;
    local_a8[3] = uStack_78;
    local_a8[4] = local_70;
    local_a8[5] = uStack_68;
    uVar9 = (ulonglong)local_50;
    *(byte *)(local_a8 + 8) = local_50;
    if ((2 < local_50) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x105,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return (FPreAnimatedStorageIndex)iVar6;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar9] ==
        Core::Private::TMoveConstructorCaller<UE::MovieScene::FCustomPropertyAccessor_const_*>::
        Construct) {
      local_a8[6] = local_60[0];
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar9])(local_a8 + 6,local_60);
    }
    bVar8 = (*(byte *)(local_a8 + 9) ^ local_48) & 1 ^ *(byte *)(local_a8 + 9);
    *(byte *)(local_a8 + 9) = bVar8;
    *(byte *)(local_a8 + 9) = (bVar8 ^ local_48) & 2 ^ bVar8;
  }
  uVar9 = (ulonglong)local_50;
  *(undefined4 *)param_1 = local_b8._8_4_;
  if ((2 < local_50) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return (FPreAnimatedStorageIndex)iVar6;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9] !=
      Core::Private::TDestructorCaller<UE::MovieScene::FCustomPropertyAccessor_const_*>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(local_60);
  }
  local_98 = param_1;
  TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,
             (TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
              *)local_b8,local_a0);
LAB_14d61af07:
  return (FPreAnimatedStorageIndex)(int)param_1;
}

// GetStorageType @ 14d61e1e0

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedStorageID __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
::GetStorageType(TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
                 *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->StorageID).TypeID;
  return (FPreAnimatedStorageID)(uint)in_RDX;
}

// Initialize @ 14d61f8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
::Initialize(TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
             *this,FPreAnimatedStorageID param_1,FPreAnimatedStateExtension *param_2)

{
  this->ParentExtension = param_2;
  (this->StorageID).TypeID = param_1.TypeID;
  FBoundObjectPreAnimatedStateTraits::Initialize
            ((FBoundObjectPreAnimatedStateTraits *)&this->Traits,param_1,param_2);
  return;
}

// OnObjectReplaced @ 14d6290e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
::OnObjectReplaced(TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
                   *this,FPreAnimatedStorageIndex param_1,FObjectKey *param_2,FObjectKey *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>
  local_res8;
  FObjectKey local_48;
  undefined8 uStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  FObjectKey *local_28;
  FPreAnimatedStorageIndex **local_20;
  TTuple<FObjectKey,FName> local_18;
  
  if ((param_1.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_40 = *(undefined8 *)
               (*(longlong *)&this->PreAnimatedStorage + (longlong)param_1.Value * 0x50 + 8);
  local_48 = *param_3;
  local_res8.Value._0_4_ = param_1.Value;
  if ((param_1.Value == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)&this->PreAnimatedStorage + (longlong)local_res8.Value._0_4_ * 0x50);
  local_18._0_8_ = *puVar1;
  local_18._8_8_ = puVar1[1];
  local_38 = local_48.ObjectIndex;
  iStack_34 = local_48.ObjectSerialNumber;
  iStack_30 = (int)uStack_40;
  iStack_2c = uStack_40._4_4_;
  if ((local_res8.Value._0_4_ == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar2 = (int *)(*(longlong *)&this->PreAnimatedStorage + (longlong)local_res8.Value._0_4_ * 0x50)
  ;
  *piVar2 = local_38;
  piVar2[1] = iStack_34;
  piVar2[2] = iStack_30;
  piVar2[3] = iStack_2c;
  TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
  ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
            *)&this->KeyToStorageIndex,&local_18);
  local_28 = &local_48;
  local_20 = &local_res8.Value;
  TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TTuple<FObjectKey,FName>_const_&,UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
            ((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
              *)&this->KeyToStorageIndex,&local_res8,(bool *)&local_28);
  return;
}

// RestorePreAnimatedStateStorage @ 14d632c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EPreAnimatedStorageRequirement __thiscall
UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
::RestorePreAnimatedStateStorage
          (TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
           *this,FPreAnimatedStorageIndex param_1,EPreAnimatedStorageRequirement param_2,
          EPreAnimatedStorageRequirement param_3,FRestoreStateParams *param_4)

{
  IRestoreMask *pIVar1;
  code *pcVar2;
  bool bVar3;
  EPreAnimatedStorageRequirement EVar4;
  char cVar5;
  TPreAnimatedPropertyValue<FCameraFramingZone> *pTVar6;
  TTuple<FObjectKey,FName> *pTVar7;
  undefined8 *puVar8;
  TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
  *this_00;
  FPreAnimatedStorageIndex local_res10 [2];
  undefined1 auStackY_118 [32];
  TTuple<FObjectKey,FName> local_e8;
  TPreAnimatedPropertyValue<FCameraFramingZone> local_d8;
  byte local_a0;
  TTuple<FObjectKey,FName> local_98;
  TPreAnimatedPropertyValue<FCameraFramingZone> local_88;
  byte local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pIVar1 = this->RestoreMask;
  local_res10[0].Value = param_1.Value;
  if (pIVar1 != (IRestoreMask *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar1 + 8);
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    cVar5 = (*pcVar2)(pIVar1);
    if (cVar5 == '\0') {
      return NoChange;
    }
  }
  this_00 = &this->PreAnimatedStorage;
  if (param_2 != Persistent) {
    if ((param_2 != Transient) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3111672766223352050>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                           ,0xf2,"SourceRequirement == EPreAnimatedStorageRequirement::Transient"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    pTVar6 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
             ::Find(&this->TransientPreAnimatedStorage,local_res10);
    if (pTVar6 != (TPreAnimatedPropertyValue<FCameraFramingZone> *)0x0) {
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>
      ::RestorePreAnimatedValue
                (&this->Traits,
                 (TTuple<FObjectKey,FName> *)
                 ((longlong)param_1.Value * 0x50 + *(longlong *)&this->PreAnimatedStorage),pTVar6,
                 param_4);
      TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
      ::Remove(&this->TransientPreAnimatedStorage,local_res10);
      return Persistent;
    }
    if (param_3 == None) {
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pTVar7 = (TTuple<FObjectKey,FName> *)((longlong)param_1.Value * 0x50 + *(longlong *)this_00);
      if ((pTVar7[4].field_0x8 & 2) == 0) {
        if ((param_1.Value == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                               ,0x45,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        puVar8 = (undefined8 *)
                 ((longlong)param_1.Value * 0x50 + *(longlong *)&this->PreAnimatedStorage);
        local_98._0_8_ = *puVar8;
        local_98._8_8_ = puVar8[1];
        local_88.Data.Left = (double)puVar8[2];
        local_88.Data.Top = (double)puVar8[3];
        local_88.Data.Right = (double)puVar8[4];
        local_88.Data.Bottom = (double)puVar8[5];
        TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
        ::
        TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                  (&local_88.Binding,
                   (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                    *)(puVar8 + 6));
        local_50 = local_50 & 0xfe | *(byte *)(puVar8 + 9) & 1;
        local_50 = (local_50 ^ *(byte *)(puVar8 + 9)) & 2 ^ local_50;
        TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
        ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
                  *)&this->KeyToStorageIndex,&local_98);
        if ((param_1.Value == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Value != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                               ,0x45,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
        ::RemoveAt(this_00,param_1.Value,1);
        TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
        ::Remove(&this->TransientPreAnimatedStorage,local_res10);
        if ((local_50 & 1) != 0) {
          TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>
          ::RestorePreAnimatedValue(&this->Traits,&local_98,&local_88,param_4);
        }
        if ((2 < local_88.Binding.TypeIndex) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_88.Binding.TypeIndex])(&local_88.Binding);
        return None;
      }
      if ((pTVar7[4].field_0x8 & 1) == 0) {
        return Persistent;
      }
    }
    else {
      if (param_3 != Persistent) {
        return Persistent;
      }
      if ((param_1.Value == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                             ,0x45,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
      pTVar7 = (TTuple<FObjectKey,FName> *)
               ((longlong)param_1.Value * 0x50 + *(longlong *)&this->PreAnimatedStorage);
      if ((pTVar7[4].field_0x8 & 1) == 0) {
        return Persistent;
      }
      pTVar7[4].field_0x8 = pTVar7[4].field_0x8 | 2;
    }
    TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>
    ::RestorePreAnimatedValue
              (&this->Traits,pTVar7,(TPreAnimatedPropertyValue<FCameraFramingZone> *)(pTVar7 + 1),
               param_4);
    return Persistent;
  }
  if (param_3 == None) {
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    puVar8 = (undefined8 *)((longlong)param_1.Value * 0x50 + *(longlong *)this_00);
    local_e8._0_8_ = *puVar8;
    local_e8._8_8_ = puVar8[1];
    local_d8.Data.Left = (double)puVar8[2];
    local_d8.Data.Top = (double)puVar8[3];
    local_d8.Data.Right = (double)puVar8[4];
    local_d8.Data.Bottom = (double)puVar8[5];
    TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
    ::
    TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              (&local_d8.Binding,
               (TVariant<UE::MovieScene::FCustomPropertyAccessor_const_*,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)(puVar8 + 6));
    local_a0 = local_a0 & 0xfe | *(byte *)(puVar8 + 9) & 1;
    local_a0 = (local_a0 ^ *(byte *)(puVar8 + 9)) & 2 ^ local_a0;
    TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
    ::Remove((TMapBase<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>_>
              *)&this->KeyToStorageIndex,&local_e8);
    if ((param_1.Value == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                           ,0x45,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    TSparseArray<UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>::FCachedData,FDefaultSparseArrayAllocator>
    ::RemoveAt(this_00,param_1.Value,1);
    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
    ::Remove(&this->TransientPreAnimatedStorage,local_res10);
    if ((local_a0 & 1) != 0) {
      TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>
      ::RestorePreAnimatedValue(&this->Traits,&local_e8,&local_d8,param_4);
    }
    if ((2 < local_d8.Binding.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCustomPropertyAccessor_const*___ptr64,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_d8.Binding.TypeIndex])(&local_d8.Binding);
    return None;
  }
  if ((param_3 != NoChange) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3111672766223352038>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                         ,0xe6,"TargetRequirement == EPreAnimatedStorageRequirement::NoChange"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  if ((param_1.Value == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateTypes.h"
                         ,0x45,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  pTVar7 = (TTuple<FObjectKey,FName> *)
           ((longlong)param_1.Value * 0x50 + *(longlong *)&this->PreAnimatedStorage);
  if ((pTVar7[4].field_0x8 & 1) != 0) {
    TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>
    ::RestorePreAnimatedValue
              (&this->Traits,pTVar7,(TPreAnimatedPropertyValue<FCameraFramingZone> *)(pTVar7 + 1),
               param_4);
  }
  return NoChange;
}

// operator() @ 1505852e0

bool __thiscall
`UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
::TrackCaptureSource'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3111672766223352684>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3111672766223352684>,
                       &`public:___cdecl_`protected:_void___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>::TrackCaptureSource(UE::MovieScene::FPreAnimatedStateEntry_const&___ptr64,UE::MovieScene::EPreAnimatedCaptureSourceTracking)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150585580

bool __thiscall
`UE::MovieScene::
TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>
::ShouldTrackCaptureSource<UObject_*_&,FName_const_&>'::__l11::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3111672766223352646>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3111672766223352646>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::TPreAnimatedStateStorage<UE::MovieScene::TPreAnimatedPropertyTraits<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,TIntegerSequence<int>_>_>::ShouldTrackCaptureSource<UObject*___ptr64&___ptr64,FName_const&___ptr64>(UE::MovieScene::EPreAnimatedCaptureSourceTracking,UObject*___ptr64&___ptr64,FName_const&___ptr64)___ptr64'::`11'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

