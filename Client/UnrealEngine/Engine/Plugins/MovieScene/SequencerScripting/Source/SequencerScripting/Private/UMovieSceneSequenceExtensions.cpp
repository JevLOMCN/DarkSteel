// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 142

// StaticClass @ 14c6951c0

UClass * __cdecl UMovieSceneSequenceExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneSequenceExtensions",
               &Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneSequenceExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSequenceExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneSequenceExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.InnerSingleton;
}

// UMovieSceneSequenceExtensions @ 14c698bc0

UMovieSceneSequenceExtensions * __thiscall
UMovieSceneSequenceExtensions::UMovieSceneSequenceExtensions
          (UMovieSceneSequenceExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneSequenceExtensions__6B_;
  return this;
}

// UMovieSceneSequenceExtensions @ 14c698bf0

UMovieSceneSequenceExtensions * __thiscall
UMovieSceneSequenceExtensions::UMovieSceneSequenceExtensions
          (UMovieSceneSequenceExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneSequenceExtensions__6B_;
  return this;
}

// ~UMovieSceneSequenceExtensions @ 14c698fa0

void __thiscall
UMovieSceneSequenceExtensions::~UMovieSceneSequenceExtensions(UMovieSceneSequenceExtensions *this)

{
  *(undefined ***)this = &___7UMovieSceneSequenceExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddMarkedFrameToSequence @ 14c69a330

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UMovieSceneSequenceExtensions::AddMarkedFrameToSequence
          (UMovieSceneSequence *param_1,FMovieSceneMarkedFrame *param_2,EMovieSceneTimeUnit param_3)

{
  int iVar1;
  UMovieScene *this;
  FFrameRate local_res8;
  FMovieSceneMarkedFrame local_28;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    local_res8.Numerator = 0;
    local_res8.Denominator = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call AddMarkedFrame on a null sequence",Error,(FName)0x0);
    return -1;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this == (UMovieScene *)0x0) {
    return -1;
  }
  local_28.FrameNumber.Value = (param_2->FrameNumber).Value;
  ::FString::FString(&local_28.Label,&param_2->Label);
  local_28.bIsDeterminismFence = param_2->bIsDeterminismFence;
  local_28.bIsInclusiveTime = param_2->bIsInclusiveTime;
  if (param_3 == DisplayRate) {
    local_res8.Denominator = 0;
    local_res8.Numerator = local_28.FrameNumber.Value;
    ConvertFrameTime((FFrameTime)&local_res8,local_res8,this->DisplayRate);
    local_28.FrameNumber.Value = local_res8.Numerator;
    if (__real_3f000000 <= (float)local_res8.Denominator) {
      local_28.FrameNumber.Value = local_res8.Numerator + 1;
    }
  }
  iVar1 = UMovieScene::AddMarkedFrame(this,&local_28);
  if (local_28.Label.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Label.Data.AllocatorInstance.Data);
  }
  return iVar1;
}

// AddPossessable @ 14c69a450

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneBindingProxy * __cdecl
UMovieSceneSequenceExtensions::AddPossessable
          (FMovieSceneBindingProxy *__return_storage_ptr__,UMovieSceneSequence *param_1,
          UObject *param_2)

{
  wchar_t *pwVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    pwVar1 = L"Cannot call AddPossessable on a null sequence";
  }
  else {
    if (param_2 != (UObject *)0x0) {
      (**(code **)(param_1->_padding_ + 0x348))(param_1,&local_18);
      (__return_storage_ptr__->BindingID).A = (undefined4)local_18;
      (__return_storage_ptr__->BindingID).B = local_18._4_4_;
      (__return_storage_ptr__->BindingID).C = (undefined4)uStack_10;
      (__return_storage_ptr__->BindingID).D = uStack_10._4_4_;
      (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      return __return_storage_ptr__;
    }
    pwVar1 = L"Cannot call AddPossessable on a null object";
  }
  FFrame::KismetExecutionMessage(pwVar1,Error,(FName)0x0);
  (__return_storage_ptr__->BindingID).A = 0;
  (__return_storage_ptr__->BindingID).B = 0;
  (__return_storage_ptr__->BindingID).C = 0;
  (__return_storage_ptr__->BindingID).D = 0;
  (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = (UMovieSceneSequence *)0x0;
  return __return_storage_ptr__;
}

// AddRootFolderToSequence @ 14c69a4f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneFolder * __cdecl
UMovieSceneSequenceExtensions::AddRootFolderToSequence
          (UMovieSceneSequence *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call AddRootFolderToSequence on a null sequence",Error,(FName)0x0);
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
  }
  else {
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (UMovieSceneFolder *)0x0;
}

// AddSpawnableFromClass @ 14c69a5b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneBindingProxy * __cdecl
UMovieSceneSequenceExtensions::AddSpawnableFromClass
          (FMovieSceneBindingProxy *__return_storage_ptr__,UMovieSceneSequence *param_1,
          UClass *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    pwVar5 = L"Cannot call AddSpawnableFromClass on a null sequence";
  }
  else {
    if (param_2 != (UClass *)0x0) {
      cVar3 = (**(code **)(param_1->_padding_ + 0x308))(param_1);
      if (cVar3 == '\0') {
        puVar4 = &local_28;
        local_28 = 0;
        uStack_20 = 0;
      }
      else {
        puVar4 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x350))(param_1,local_18,param_2);
      }
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      (__return_storage_ptr__->BindingID).A = (int)uVar1;
      (__return_storage_ptr__->BindingID).B = (int)((ulonglong)uVar1 >> 0x20);
      (__return_storage_ptr__->BindingID).C = (int)uVar2;
      (__return_storage_ptr__->BindingID).D = (int)((ulonglong)uVar2 >> 0x20);
      (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      return __return_storage_ptr__;
    }
    pwVar5 = L"Cannot call AddSpawnableFromClass on a null class";
  }
  FFrame::KismetExecutionMessage(pwVar5,Error,(FName)0x0);
  (__return_storage_ptr__->BindingID).A = 0;
  (__return_storage_ptr__->BindingID).B = 0;
  (__return_storage_ptr__->BindingID).C = 0;
  (__return_storage_ptr__->BindingID).D = 0;
  (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = (UMovieSceneSequence *)0x0;
  return __return_storage_ptr__;
}

// AddSpawnableFromInstance @ 14c69a680

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneBindingProxy * __cdecl
UMovieSceneSequenceExtensions::AddSpawnableFromInstance
          (FMovieSceneBindingProxy *__return_storage_ptr__,UMovieSceneSequence *param_1,
          UObject *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    pwVar5 = L"Cannot call AddSpawnableFromInstance on a null sequence";
  }
  else {
    if (param_2 != (UObject *)0x0) {
      cVar3 = (**(code **)(param_1->_padding_ + 0x308))(param_1);
      if (cVar3 == '\0') {
        puVar4 = &local_28;
        local_28 = 0;
        uStack_20 = 0;
      }
      else {
        puVar4 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x350))(param_1,local_18,param_2);
      }
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      (__return_storage_ptr__->BindingID).A = (int)uVar1;
      (__return_storage_ptr__->BindingID).B = (int)((ulonglong)uVar1 >> 0x20);
      (__return_storage_ptr__->BindingID).C = (int)uVar2;
      (__return_storage_ptr__->BindingID).D = (int)((ulonglong)uVar2 >> 0x20);
      (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      return __return_storage_ptr__;
    }
    pwVar5 = L"Cannot call AddSpawnableFromInstance on a null object";
  }
  FFrame::KismetExecutionMessage(pwVar5,Error,(FName)0x0);
  (__return_storage_ptr__->BindingID).A = 0;
  (__return_storage_ptr__->BindingID).B = 0;
  (__return_storage_ptr__->BindingID).C = 0;
  (__return_storage_ptr__->BindingID).D = 0;
  (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = (UMovieSceneSequence *)0x0;
  return __return_storage_ptr__;
}

// AddTrack @ 14c69a8c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneTrack * __cdecl
UMovieSceneSequenceExtensions::AddTrack
          (UMovieSceneSequence *param_1,TSubclassOf<UMovieSceneTrack> param_2)

{
  int iVar1;
  bool bVar2;
  UMovieScene *this;
  UClass *pUVar3;
  UMovieSceneTrack *pUVar4;
  longlong lVar5;
  UObject *local_res8;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    local_res8 = (UObject *)0x0;
    FFrame::KismetExecutionMessage(L"Cannot call AddTrack on a null sequence",Error,(FName)0x0);
    return (UMovieSceneTrack *)0x0;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this == (UMovieScene *)0x0) {
    return (UMovieSceneTrack *)0x0;
  }
  lVar5 = *(longlong *)param_2.Class.field0_0x0;
  if (lVar5 != 0) {
    pUVar3 = Z_Construct_UClass_UMovieSceneTrack_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar5 = *(longlong *)param_2.Class.field0_0x0;
        goto LAB_14c69a94e;
      }
    }
  }
  lVar5 = 0;
LAB_14c69a94e:
  pUVar3 = Z_Construct_UClass_UMovieSceneCameraCutTrack_NoRegister();
  if (pUVar3 == (UClass *)0x0) {
    local_res8 = *(UObject **)param_2.Class.field0_0x0;
  }
  else {
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    local_res8 = *(UObject **)param_2.Class.field0_0x0;
    if (bVar2) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res8);
      }
      pUVar4 = UMovieScene::AddCameraCutTrack(this,(TSubclassOf<UMovieSceneTrack>)&local_res8);
      return pUVar4;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pUVar4 = UMovieScene::AddTrack(this,(TSubclassOf<UMovieSceneTrack>)&local_res8);
  return pUVar4;
}

// AreMarkedFramesLocked @ 14c69aa10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UMovieSceneSequenceExtensions::AreMarkedFramesLocked(UMovieSceneSequence *param_1)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call AreMarkedFramesLocked on a null sequence",Error,(FName)0x0);
  }
  return false;
}

// DeleteMarkedFrame @ 14c69ad40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::DeleteMarkedFrame(UMovieSceneSequence *param_1,int param_2)

{
  UMovieScene *this;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call DeleteMarkedFrame on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    UMovieScene::DeleteMarkedFrame(this,param_2);
    return;
  }
  return;
}

// DeleteMarkedFrames @ 14c69ada0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneSequenceExtensions::DeleteMarkedFrames(UMovieSceneSequence *param_1)

{
  UMovieScene *this;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call DeleteMarkedFrames on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    UMovieScene::DeleteMarkedFrames(this);
    return;
  }
  return;
}

// FilterTracks @ 14c69b5d0

TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneSequenceExtensions::FilterTracks
          (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<UMovieSceneTrack_*_const,int> *param_1,UClass *param_2,bool param_3)

{
  UMovieSceneTrack **ppUVar1;
  UClass *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *pTVar7;
  UMovieSceneTrack **ppUVar8;
  UMovieSceneTrack *local_28 [2];
  
  ppUVar8 = param_1->DataPtr;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ppUVar1 = ppUVar8 + param_1->ArrayNum;
  if (ppUVar8 != ppUVar1) {
    if (param_2 == (UClass *)0x0) {
      do {
        local_28[0] = *ppUVar8;
        if (local_28[0]->_padding_ == 0) {
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 <
               pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar7;
          }
          iVar6 = __return_storage_ptr__->ArrayNum;
          if (iVar6 == __return_storage_ptr__->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
          *(UMovieSceneTrack **)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
        }
        ppUVar8 = ppUVar8 + 1;
      } while (ppUVar8 != ppUVar1);
    }
    else {
      do {
        local_28[0] = *ppUVar8;
        pUVar2 = (UClass *)local_28[0]->_padding_;
        if ((pUVar2 == param_2) ||
           (((!param_3 && (iVar6 = (int)param_2->_padding_, iVar6 <= (int)pUVar2->_padding_)) &&
            ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar6 * 8) ==
             &param_2->_padding_)))) {
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 <
               pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar7;
          }
          iVar6 = __return_storage_ptr__->ArrayNum;
          if (iVar6 == __return_storage_ptr__->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
          *(UMovieSceneTrack **)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28[0];
        }
        ppUVar8 = ppUVar8 + 1;
      } while (ppUVar8 != ppUVar1);
    }
  }
  return __return_storage_ptr__;
}

// FindBindingById @ 14c69b7f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneBindingProxy * __cdecl
UMovieSceneSequenceExtensions::FindBindingById
          (FMovieSceneBindingProxy *__return_storage_ptr__,UMovieSceneSequence *param_1,
          FGuid *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  UMovieScene *this;
  FMovieSceneBinding *pFVar4;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call FindBindingById on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    if ((this != (UMovieScene *)0x0) &&
       (pFVar4 = UMovieScene::FindBinding(this,param_2), pFVar4 != (FMovieSceneBinding *)0x0)) {
      uVar1 = (pFVar4->ObjectGuid).B;
      uVar2 = (pFVar4->ObjectGuid).C;
      uVar3 = (pFVar4->ObjectGuid).D;
      (__return_storage_ptr__->BindingID).A = (pFVar4->ObjectGuid).A;
      (__return_storage_ptr__->BindingID).B = uVar1;
      (__return_storage_ptr__->BindingID).C = uVar2;
      (__return_storage_ptr__->BindingID).D = uVar3;
      (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        return __return_storage_ptr__;
      }
      UE::GC::MarkAsReachable((UObject *)param_1);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = (UMovieSceneSequence *)0x0;
  (__return_storage_ptr__->BindingID).C = 0;
  (__return_storage_ptr__->BindingID).D = 0;
  (__return_storage_ptr__->BindingID).A = 0;
  (__return_storage_ptr__->BindingID).B = 0;
  return __return_storage_ptr__;
}

// FindBindingByName @ 14c69b8a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneBindingProxy * __cdecl
UMovieSceneSequenceExtensions::FindBindingByName
          (FMovieSceneBindingProxy *__return_storage_ptr__,UMovieSceneSequence *param_1,
          FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  UMovieScene *this;
  FMovieScenePossessable *pFVar7;
  FMovieSceneSpawnable *pFVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call FindBindingByName on a null sequence",Error,(FName)0x0);
    (__return_storage_ptr__->BindingID).A = 0;
    (__return_storage_ptr__->BindingID).B = 0;
    (__return_storage_ptr__->BindingID).C = 0;
    (__return_storage_ptr__->BindingID).D = 0;
    (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = (UMovieSceneSequence *)0x0;
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
      return __return_storage_ptr__;
    }
  }
  else {
    this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    iVar10 = 0;
    if (this != (UMovieScene *)0x0) {
      iVar6 = UMovieScene::GetPossessableCount(this);
      iVar9 = iVar10;
      if (0 < iVar6) {
        do {
          pFVar7 = UMovieScene::GetPossessable(this,iVar9);
          iVar6 = (param_2->Data).ArrayNum;
          iVar1 = (pFVar7->Name).Data.ArrayNum;
          if (iVar1 == iVar6) {
            if (1 < iVar1) {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar7->Name).Data.AllocatorInstance.Data,
                                 (wchar_t *)(param_2->Data).AllocatorInstance.Data);
              bVar11 = iVar6 == 0;
              goto LAB_14c69b964;
            }
LAB_14c69b9b2:
            uVar3 = (pFVar7->Guid).B;
            uVar4 = (pFVar7->Guid).C;
            uVar5 = (pFVar7->Guid).D;
            (__return_storage_ptr__->BindingID).A = (pFVar7->Guid).A;
            (__return_storage_ptr__->BindingID).B = uVar3;
            (__return_storage_ptr__->BindingID).C = uVar4;
            (__return_storage_ptr__->BindingID).D = uVar5;
            (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = param_1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            goto LAB_14c69ba07;
          }
          bVar11 = iVar1 + iVar6 == 1;
LAB_14c69b964:
          if (bVar11) goto LAB_14c69b9b2;
          iVar9 = iVar9 + 1;
          iVar6 = UMovieScene::GetPossessableCount(this);
        } while (iVar9 < iVar6);
      }
      iVar9 = UMovieScene::GetSpawnableCount(this);
      if (0 < iVar9) {
        do {
          pFVar8 = UMovieScene::GetSpawnable(this,iVar10);
          iVar9 = (param_2->Data).ArrayNum;
          iVar6 = (pFVar8->Name).Data.ArrayNum;
          if (iVar6 == iVar9) {
            if (1 < iVar6) {
              iVar9 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar8->Name).Data.AllocatorInstance.Data,
                                 (wchar_t *)(param_2->Data).AllocatorInstance.Data);
              bVar11 = iVar9 == 0;
              goto LAB_14c69b9e7;
            }
LAB_14c69ba31:
            uVar3 = (pFVar8->Guid).B;
            uVar4 = (pFVar8->Guid).C;
            uVar5 = (pFVar8->Guid).D;
            (__return_storage_ptr__->BindingID).A = (pFVar8->Guid).A;
            (__return_storage_ptr__->BindingID).B = uVar3;
            (__return_storage_ptr__->BindingID).C = uVar4;
            (__return_storage_ptr__->BindingID).D = uVar5;
            (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = param_1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            goto LAB_14c69ba07;
          }
          bVar11 = iVar6 + iVar9 == 1;
LAB_14c69b9e7:
          if (bVar11) goto LAB_14c69ba31;
          iVar10 = iVar10 + 1;
          iVar9 = UMovieScene::GetSpawnableCount(this);
        } while (iVar10 < iVar9);
      }
    }
    (__return_storage_ptr__->BindingID).A = 0;
    (__return_storage_ptr__->BindingID).B = 0;
    (__return_storage_ptr__->BindingID).C = 0;
    (__return_storage_ptr__->BindingID).D = 0;
    (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = (UMovieSceneSequence *)0x0;
LAB_14c69ba07:
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  return __return_storage_ptr__;
}

// FindMarkedFrameByFrameNumberInSequence @ 14c69ba60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UMovieSceneSequenceExtensions::FindMarkedFrameByFrameNumberInSequence
          (UMovieSceneSequence *param_1,FFrameNumber param_2,EMovieSceneTimeUnit param_3)

{
  int iVar1;
  UMovieScene *this;
  FFrameRate local_res8;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    local_res8.Numerator = 0;
    local_res8.Denominator = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call FindMarkedFrameByFrameNumber on a null sequence",Error,(FName)0x0);
    return -1;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    if (param_3 == DisplayRate) {
      local_res8.Denominator = 0;
      local_res8.Numerator = param_2.Value;
      ConvertFrameTime((FFrameTime)&local_res8,local_res8,this->DisplayRate);
      param_2.Value = local_res8.Numerator;
      if (__real_3f000000 <= (float)local_res8.Denominator) {
        param_2.Value = local_res8.Numerator + 1;
      }
    }
    iVar1 = UMovieScene::FindMarkedFrameByFrameNumber(this,param_2);
    return iVar1;
  }
  return -1;
}

// FindMarkedFrameByLabel @ 14c69bb30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UMovieSceneSequenceExtensions::FindMarkedFrameByLabel(UMovieSceneSequence *param_1,FString *param_2)

{
  int iVar1;
  UMovieScene *this;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call FindMarkedFrameByLabel on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
    if (this != (UMovieScene *)0x0) {
      iVar1 = UMovieScene::FindMarkedFrameByLabel(this,param_2);
      return iVar1;
    }
  }
  return -1;
}

// FindNextMarkedFrameInSequence @ 14c69bb90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UMovieSceneSequenceExtensions::FindNextMarkedFrameInSequence
          (UMovieSceneSequence *param_1,FFrameNumber param_2,bool param_3,
          EMovieSceneTimeUnit param_4)

{
  int iVar1;
  UMovieScene *this;
  FFrameRate local_res8;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    local_res8.Numerator = 0;
    local_res8.Denominator = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call FindNextMarkedFrame on a null sequence",Error,(FName)0x0);
    return -1;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this == (UMovieScene *)0x0) {
    iVar1 = -1;
  }
  else {
    if (param_4 == DisplayRate) {
      local_res8.Denominator = 0;
      local_res8.Numerator = param_2.Value;
      ConvertFrameTime((FFrameTime)&local_res8,local_res8,this->DisplayRate);
      param_2.Value = local_res8.Numerator;
      if (__real_3f000000 <= (float)local_res8.Denominator) {
        param_2.Value = local_res8.Numerator + 1;
      }
    }
    iVar1 = UMovieScene::FindNextMarkedFrame(this,param_2,param_3);
  }
  return iVar1;
}

// FindTracksByExactType @ 14c69bf00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneSequenceExtensions::FindTracksByExactType
          (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieSceneSequence *param_1,TSubclassOf<UMovieSceneTrack> param_2)

{
  UMovieSceneTrack **ppUVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UMovieScene *this;
  UClass *pUVar7;
  TArrayView<UMovieSceneTrack_*_const,int> *pTVar8;
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  UMovieSceneTrack **ppUVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  UMovieSceneTrack *local_68;
  UMovieSceneTrack *local_60;
  ForAnyElementType local_58;
  uint local_50;
  uint uStack_4c;
  TArrayView<UMovieSceneTrack_*_const,int> local_48;
  UMovieSceneTrack **local_38;
  undefined8 uStack_30;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call FindTracksByExactType on a null sequence",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  pFVar10 = (FScriptContainerElement *)0x0;
  pFVar13 = pFVar10;
  if ((lVar3 != 0) &&
     (pUVar7 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pFVar13 = *(FScriptContainerElement **)param_2.Class.field0_0x0;
    }
  }
  if ((this == (UMovieScene *)0x0) || (pFVar13 == (FScriptContainerElement *)0x0)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    lVar3 = *(longlong *)param_2.Class.field0_0x0;
    pFVar14 = pFVar10;
    if ((lVar3 != 0) &&
       (pUVar7 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        pFVar14 = *(FScriptContainerElement **)param_2.Class.field0_0x0;
      }
    }
    pTVar8 = TArrayView<UMovieSceneTrack_*_const,int>::
             TArrayView<UMovieSceneTrack_*_const,int><TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_>
                       (&local_48,
                        (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)&this->Tracks);
    ppUVar12 = pTVar8->DataPtr;
    uStack_30 = *(undefined8 *)&pTVar8->ArrayNum;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    uStack_4c = 0;
    ppUVar1 = ppUVar12 + (int)uStack_30;
    local_38 = ppUVar12;
    if (ppUVar12 != ppUVar1) {
      FVar11.Data = pFVar10;
      if (pFVar14 == (FScriptContainerElement *)0x0) {
        do {
          local_68 = *ppUVar12;
          if (local_68->_padding_ == 0) {
            uVar6 = (uint)pFVar10;
            if (((FVar11.Data <= (FScriptContainerElement *)&local_68) &&
                ((FScriptContainerElement *)&local_68 < FVar11.Data + (longlong)(int)uStack_4c * 8))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), FVar11.Data = local_58.Data, uVar6 = local_50, bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar9 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar9;
            }
            if (uVar6 == uStack_4c) {
              uVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_58,(int *)&uStack_4c);
              FVar11.Data = local_58.Data;
            }
            local_50 = uVar6 + 1;
            *(UMovieSceneTrack **)(FVar11.Data + (longlong)(int)uVar6 * 8) = local_68;
            pFVar10 = (FScriptContainerElement *)(ulonglong)local_50;
            FVar11.Data = local_58.Data;
          }
          ppUVar12 = ppUVar12 + 1;
        } while (ppUVar12 != ppUVar1);
      }
      else {
        do {
          local_68 = *ppUVar12;
          if ((FScriptContainerElement *)local_68->_padding_ == pFVar14) {
            uVar6 = (uint)pFVar10;
            if (((FVar11.Data <= (FScriptContainerElement *)&local_68) &&
                ((FScriptContainerElement *)&local_68 < FVar11.Data + (longlong)(int)uStack_4c * 8))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), FVar11.Data = local_58.Data, uVar6 = local_50, bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar9 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar9;
            }
            if (uVar6 == uStack_4c) {
              uVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_58,(int *)&uStack_4c);
              FVar11.Data = local_58.Data;
            }
            local_50 = uVar6 + 1;
            *(UMovieSceneTrack **)(FVar11.Data + (longlong)(int)uVar6 * 8) = local_68;
            pFVar10 = (FScriptContainerElement *)(ulonglong)local_50;
            FVar11.Data = local_58.Data;
          }
          ppUVar12 = ppUVar12 + 1;
        } while (ppUVar12 != ppUVar1);
      }
    }
    local_60 = UMovieScene::GetCameraCutTrack(this);
    if ((local_60 != (UMovieSceneTrack *)0x0) &&
       ((FScriptContainerElement *)local_60->_padding_ == pFVar13)) {
      if ((local_58.Data <= (FScriptContainerElement *)&local_60) &&
         (((FScriptContainerElement *)&local_60 < local_58.Data + (longlong)(int)uStack_4c * 8 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      if (local_50 == uStack_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_58,(int *)&uStack_4c);
      }
      *(UMovieSceneTrack **)(local_58.Data + (longlong)(int)local_50 * 8) = local_60;
      local_50 = local_50 + 1;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_58.Data;
    __return_storage_ptr__->ArrayNum = local_50;
    __return_storage_ptr__->ArrayMax = uStack_4c;
  }
  return __return_storage_ptr__;
}

// FindTracksByType @ 14c69c590

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneSequenceExtensions::FindTracksByType
          (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieSceneSequence *param_1,TSubclassOf<UMovieSceneTrack> param_2)

{
  UMovieSceneTrack **ppUVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UMovieScene *this;
  UClass *pUVar8;
  TArrayView<UMovieSceneTrack_*_const,int> *pTVar9;
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *pTVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  UMovieSceneTrack **ppUVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  UMovieSceneTrack *local_68;
  UMovieSceneTrack *local_60;
  ForAnyElementType local_58;
  uint local_50;
  uint uStack_4c;
  TArrayView<UMovieSceneTrack_*_const,int> local_48;
  UMovieSceneTrack **local_38;
  undefined8 uStack_30;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call FindTracksByType on a null sequence",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  FVar11.Data = (FScriptContainerElement *)0x0;
  pFVar15 = FVar11.Data;
  if ((lVar3 != 0) &&
     (pUVar8 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar8->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pFVar15 = *(FScriptContainerElement **)param_2.Class.field0_0x0;
    }
  }
  if ((this == (UMovieScene *)0x0) || (pFVar15 == (FScriptContainerElement *)0x0)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    lVar3 = *(longlong *)param_2.Class.field0_0x0;
    pFVar12 = FVar11.Data;
    if ((lVar3 != 0) &&
       (pUVar8 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar8 != (UClass *)0x0)) {
      iVar2 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar8->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        pFVar12 = *(FScriptContainerElement **)param_2.Class.field0_0x0;
      }
    }
    pTVar9 = TArrayView<UMovieSceneTrack_*_const,int>::
             TArrayView<UMovieSceneTrack_*_const,int><TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_>
                       (&local_48,
                        (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)&this->Tracks);
    ppUVar13 = pTVar9->DataPtr;
    uStack_30 = *(undefined8 *)&pTVar9->ArrayNum;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    uStack_4c = 0;
    ppUVar1 = ppUVar13 + (int)uStack_30;
    local_38 = ppUVar13;
    if (ppUVar13 != ppUVar1) {
      pFVar14 = FVar11.Data;
      if (pFVar12 == (FScriptContainerElement *)0x0) {
        do {
          local_68 = *ppUVar13;
          if (local_68->_padding_ == 0) {
            uVar7 = (uint)pFVar14;
            if (((FVar11.Data <= (FScriptContainerElement *)&local_68) &&
                ((FScriptContainerElement *)&local_68 < FVar11.Data + (longlong)(int)uStack_4c * 8))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), FVar11.Data = local_58.Data, uVar7 = local_50, bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar10 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar10;
            }
            if (uVar7 == uStack_4c) {
              uVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_58,(int *)&uStack_4c);
              FVar11.Data = local_58.Data;
            }
            local_50 = uVar7 + 1;
            *(UMovieSceneTrack **)(FVar11.Data + (longlong)(int)uVar7 * 8) = local_68;
            pFVar14 = (FScriptContainerElement *)(ulonglong)local_50;
            FVar11.Data = local_58.Data;
          }
          ppUVar13 = ppUVar13 + 1;
        } while (ppUVar13 != ppUVar1);
      }
      else {
        do {
          local_68 = *ppUVar13;
          pFVar4 = (FScriptContainerElement *)local_68->_padding_;
          if ((pFVar4 == pFVar12) ||
             ((*(int *)(pFVar12 + 0x38) <= *(int *)(pFVar4 + 0x38) &&
              (*(FScriptContainerElement **)
                (*(longlong *)(pFVar4 + 0x30) + (longlong)*(int *)(pFVar12 + 0x38) * 8) ==
               pFVar12 + 0x30)))) {
            uVar7 = (uint)pFVar14;
            if ((FVar11.Data <= (FScriptContainerElement *)&local_68) &&
               (((FScriptContainerElement *)&local_68 < FVar11.Data + (longlong)(int)uStack_4c * 8
                && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), FVar11.Data = local_58.Data, uVar7 = local_50, bVar6)))) {
              pcVar5 = (code *)swi(3);
              pTVar10 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar10;
            }
            if (uVar7 == uStack_4c) {
              uVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_58,(int *)&uStack_4c);
              FVar11.Data = local_58.Data;
            }
            local_50 = uVar7 + 1;
            *(UMovieSceneTrack **)(FVar11.Data + (longlong)(int)uVar7 * 8) = local_68;
            pFVar14 = (FScriptContainerElement *)(ulonglong)local_50;
            FVar11.Data = local_58.Data;
          }
          ppUVar13 = ppUVar13 + 1;
        } while (ppUVar13 != ppUVar1);
      }
    }
    local_60 = UMovieScene::GetCameraCutTrack(this);
    if (local_60 != (UMovieSceneTrack *)0x0) {
      if ((*(int *)(pFVar15 + 0x38) <= *(int *)(local_60->_padding_ + 0x38)) &&
         (*(FScriptContainerElement **)
           (*(longlong *)(local_60->_padding_ + 0x30) + (longlong)*(int *)(pFVar15 + 0x38) * 8) ==
          pFVar15 + 0x30)) {
        if ((local_58.Data <= (FScriptContainerElement *)&local_60) &&
           (((FScriptContainerElement *)&local_60 < local_58.Data + (longlong)(int)uStack_4c * 8 &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)))) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        if (local_50 == uStack_4c) {
          local_50 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_58,(int *)&uStack_4c);
        }
        *(UMovieSceneTrack **)(local_58.Data + (longlong)(int)local_50 * 8) = local_60;
        local_50 = local_50 + 1;
      }
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_58.Data;
    __return_storage_ptr__->ArrayNum = local_50;
    __return_storage_ptr__->ArrayMax = uStack_4c;
  }
  return __return_storage_ptr__;
}

// GetBindingID @ 14c69d4b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneObjectBindingID * __cdecl
UMovieSceneSequenceExtensions::GetBindingID
          (FMovieSceneObjectBindingID *__return_storage_ptr__,UMovieSceneSequence *param_1,
          FMovieSceneBindingProxy *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (param_2->BindingID).A;
  uVar2 = (param_2->BindingID).B;
  uVar3 = (param_2->BindingID).C;
  uVar4 = (param_2->BindingID).D;
  __return_storage_ptr__->SequenceID = 0;
  __return_storage_ptr__->ResolveParentIndex = 0;
  (__return_storage_ptr__->Guid).A = uVar1;
  (__return_storage_ptr__->Guid).B = uVar2;
  (__return_storage_ptr__->Guid).C = uVar3;
  (__return_storage_ptr__->Guid).D = uVar4;
  return __return_storage_ptr__;
}

// GetBindings @ 14c69d4d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FMovieSceneBindingProxy,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneSequenceExtensions::GetBindings
          (TArray<FMovieSceneBindingProxy,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieSceneSequence *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 local_res10;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  if (param_1 != (UMovieSceneSequence *)0x0) {
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    lVar4 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x98);
      iVar1 = *(int *)(lVar4 + 0xa0);
      puVar6 = (undefined8 *)(lVar5 + 0x10);
      lVar7 = (longlong)iVar1 * 0x40 + lVar5;
      while( true ) {
        if (*(int *)(lVar4 + 0xa0) != iVar1) {
          `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
        }
        if (lVar5 == lVar7) break;
        iVar3 = (int)local_30;
        if ((int)local_30 == local_30._4_4_) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_38,(int *)((longlong)&local_30 + 4));
        }
        local_30 = CONCAT44(local_30._4_4_,iVar3 + 1);
        uVar2 = puVar6[1];
        *(undefined8 *)(local_38.Data + (longlong)iVar3 * 0x18) = *puVar6;
        *(undefined8 *)(local_38.Data + (longlong)iVar3 * 0x18 + 8) = uVar2;
        *(UMovieSceneSequence **)(local_38.Data + (longlong)iVar3 * 0x18 + 0x10) = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        lVar5 = lVar5 + 0x40;
        puVar6 = puVar6 + 8;
      }
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_38.Data;
    __return_storage_ptr__->ArrayNum = (int)local_30;
    __return_storage_ptr__->ArrayMax = local_30._4_4_;
    return __return_storage_ptr__;
  }
  local_res10 = 0;
  FFrame::KismetExecutionMessage(L"Cannot call GetBindings on a null sequence",Error,(FName)0x0);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetClockSource @ 14c69e3c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EUpdateClockSource __cdecl
UMovieSceneSequenceExtensions::GetClockSource(UMovieSceneSequence *param_1)

{
  longlong lVar1;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetClockSource on a null sequence",Error,(FName)0x0);
  }
  else {
    lVar1 = (**(code **)(param_1->_padding_ + 0x2f8))();
    if (lVar1 != 0) {
      return *(EUpdateClockSource *)(lVar1 + 0x149);
    }
  }
  return Tick;
}

// GetCustomClock @ 14c69e460

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneClock * __cdecl
UMovieSceneSequenceExtensions::GetCustomClock(UMovieSceneSequence *param_1)

{
  longlong lVar1;
  UMovieSceneClock *pUVar2;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetCustomClock on a null sequence",Error,(FName)0x0);
  }
  else {
    lVar1 = (**(code **)(param_1->_padding_ + 0x2f8))();
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x149) == '\x06') {
        pUVar2 = *(UMovieSceneClock **)(lVar1 + 0x110);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar2 != (UMovieSceneClock *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
          return pUVar2;
        }
      }
      else {
        pUVar2 = (UMovieSceneClock *)0x0;
      }
      return pUVar2;
    }
  }
  return (UMovieSceneClock *)0x0;
}

// GetDisplayRate @ 14c69ea90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FFrameRate __cdecl UMovieSceneSequenceExtensions::GetDisplayRate(UMovieSceneSequence *param_1)

{
  longlong lVar1;
  undefined1 in_DL;
  undefined7 in_register_00000011;
  
  if (CONCAT71(in_register_00000011,in_DL) == 0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetDisplayRate on a null sequence",Error,(FName)0x0);
    *(undefined4 *)&param_1->_padding_ = 60000;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
    return (FFrameRate)param_1;
  }
  lVar1 = (**(code **)(*(longlong *)CONCAT71(in_register_00000011,in_DL) + 0x2f8))();
  if (lVar1 != 0) {
    param_1->_padding_ = *(longlong *)(lVar1 + 0x140);
    return (FFrameRate)param_1;
  }
  param_1->_padding_ = 0x10000ea60;
  return (FFrameRate)param_1;
}

// GetEvaluationType @ 14c69ee40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EMovieSceneEvaluationType __cdecl
UMovieSceneSequenceExtensions::GetEvaluationType(UMovieSceneSequence *param_1)

{
  longlong lVar1;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetEvaluationType on a null sequence",Error,(FName)0x0);
  }
  else {
    lVar1 = (**(code **)(param_1->_padding_ + 0x2f8))();
    if (lVar1 != 0) {
      return *(EMovieSceneEvaluationType *)(lVar1 + 0x148);
    }
  }
  return WithSubFrames;
}

// GetMarkedFramesFromSequence @ 14c6a0150

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FMovieSceneMarkedFrame,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneSequenceExtensions::GetMarkedFramesFromSequence
          (TArray<FMovieSceneMarkedFrame,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieSceneSequence *param_1,EMovieSceneTimeUnit param_2)

{
  int iVar1;
  FMovieSceneMarkedFrame *pFVar2;
  FFrameRate FVar3;
  FFrameRate FVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  undefined8 local_res10;
  uint local_res20;
  float local_res24;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  if (param_1 != (UMovieSceneSequence *)0x0) {
    lVar7 = (**(code **)(param_1->_padding_ + 0x2f8))();
    if (lVar7 == 0) {
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      iVar1 = *(int *)(lVar7 + 0x158);
      pFVar2 = *(FMovieSceneMarkedFrame **)(lVar7 + 0x150);
      local_50.Data = (FScriptContainerElement *)0x0;
      local_48 = CONCAT44(local_48._4_4_,iVar1);
      if (iVar1 == 0) {
        local_48 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar1,0,&local_50,iVar1,(int *)((longlong)&local_48 + 4));
        ConstructItems<FMovieSceneMarkedFrame,FMovieSceneMarkedFrame,int>
                  (local_50.Data,pFVar2,iVar1);
      }
      fVar5 = __real_3f000000;
      if (param_2 == DisplayRate) {
        iVar1 = (int)local_48;
        FVar3 = *(FFrameRate *)(lVar7 + 0x138);
        pFVar9 = local_50.Data + (longlong)(int)local_48 * 0x20;
        FVar8.Data = local_50.Data;
        while( true ) {
          if ((int)local_48 != iVar1) {
            `TCheckedPointerIterator<FMovieSceneMarkedFrame,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_res10);
          }
          if (FVar8.Data == pFVar9) break;
          FVar4.Denominator = 0;
          FVar4.Numerator = *(uint *)FVar8.Data;
          ConvertFrameTime((FFrameTime)&local_res20,FVar4,FVar3);
          uVar6 = local_res20;
          if (fVar5 <= local_res24) {
            uVar6 = local_res20 + 1;
          }
          *(uint *)FVar8.Data = uVar6;
          FVar8.Data = FVar8.Data + 0x20;
        }
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_50.Data;
      __return_storage_ptr__->ArrayNum = (int)local_48;
      __return_storage_ptr__->ArrayMax = local_48._4_4_;
      local_48 = 0;
      local_50.Data = (FScriptContainerElement *)0x0;
      DestructItems<FMovieSceneMarkedFrame,int>((FMovieSceneMarkedFrame *)0x0,0);
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
    }
    return __return_storage_ptr__;
  }
  local_res10 = 0;
  FFrame::KismetExecutionMessage(L"Cannot call GetMarkedFrames on a null sequence",Error,(FName)0x0)
  ;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetMovieScene @ 14c6a0470

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScene * __cdecl UMovieSceneSequenceExtensions::GetMovieScene(UMovieSceneSequence *param_1)

{
  UMovieScene *pUVar1;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetMovieScene on a null sequence",Error,(FName)0x0)
    ;
    return (UMovieScene *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c6a049f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  return pUVar1;
}

// GetPlaybackEnd @ 14c6a09a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UMovieSceneSequenceExtensions::GetPlaybackEnd(UMovieSceneSequence *param_1)

{
  int iVar1;
  code *pcVar2;
  FFrameRate FVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  FFrameTime FVar8;
  char cVar9;
  FFrameRate FVar10;
  undefined1 local_res18 [8];
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetPlaybackEnd on a null sequence",Error,(FName)0x0);
  }
  else {
    lVar6 = (**(code **)(param_1->_padding_ + 0x2f8))();
    if (lVar6 != 0) {
      (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
      FVar10.Numerator = 60000;
      FVar10.Denominator = 1;
      lVar7 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
      if (lVar7 != 0) {
        FVar10 = *(FFrameRate *)(lVar7 + 0x138);
      }
      iVar5 = *(int *)(lVar6 + 0x134);
      cVar9 = (char)*(undefined4 *)(lVar6 + 0x130);
      if ((cVar9 == '\x02') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InUpperBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x44,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      lVar6 = 0;
      if (cVar9 == '\x01') {
        lVar6 = 4;
      }
      iVar1 = *(int *)((longlong)
                       &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                        ::__l2::Offsets + lVar6);
      if ((cVar9 == '\x02') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      FVar3.Denominator = 0;
      FVar3.Numerator = iVar5 + iVar1;
      FVar8 = ConvertFrameTime((FFrameTime)local_res18,FVar3,FVar10);
      return *(int *)FVar8;
    }
  }
  return -1;
}

// GetPlaybackEndSeconds @ 14c6a0b10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl UMovieSceneSequenceExtensions::GetPlaybackEndSeconds(UMovieSceneSequence *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  FFrameRate FVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  FFrameTime FVar8;
  char cVar9;
  FFrameRate FVar10;
  float fVar11;
  undefined8 local_res18;
  float fStackX_24;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetPlaybackEndSeconds on a null sequence",Error,(FName)0x0);
  }
  else {
    lVar6 = (**(code **)(param_1->_padding_ + 0x2f8))();
    if (lVar6 != 0) {
      lVar7 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
      FVar10.Numerator = 60000;
      FVar10.Denominator = 1;
      if (lVar7 == 0) {
        local_res18 = 0x10000ea60;
      }
      else {
        local_res18 = *(undefined8 *)(lVar7 + 0x140);
      }
      lVar7 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
      if (lVar7 != 0) {
        FVar10 = *(FFrameRate *)(lVar7 + 0x138);
      }
      local_50 = *(undefined4 *)(lVar6 + 0x128);
      uStack_4c = *(undefined4 *)(lVar6 + 300);
      uStack_48 = *(undefined4 *)(lVar6 + 0x130);
      iVar3 = *(int *)(lVar6 + 0x134);
      cVar9 = (char)uStack_48;
      iStack_44 = iVar3;
      if (cVar9 == '\x02') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InUpperBound.IsOpen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                           ,0x44,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          fVar11 = (float)(*pcVar2)();
          return fVar11;
        }
      }
      lVar6 = 0;
      if (cVar9 == '\x01') {
        lVar6 = 4;
      }
      iVar1 = *(int *)((longlong)
                       &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                        ::__l2::Offsets + lVar6);
      if (cVar9 == '\x02') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          fVar11 = (float)(*pcVar2)();
          return fVar11;
        }
      }
      FVar4.Denominator = 0;
      FVar4.Numerator = iVar3 + iVar1;
      FVar8 = ConvertFrameTime((FFrameTime)local_58,FVar4,FVar10);
      fStackX_24 = (float)((ulonglong)*(undefined8 *)FVar8 >> 0x20);
      return ((float)local_res18._4_4_ * fStackX_24 +
             (float)((longlong)(int)*(undefined8 *)FVar8 * (longlong)local_res18._4_4_)) /
             (float)(int)local_res18;
    }
  }
  return __real_bf800000;
}

// GetPlaybackRange @ 14c6a0d00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSequencerScriptingRange * __cdecl
UMovieSceneSequenceExtensions::GetPlaybackRange
          (FSequencerScriptingRange *__return_storage_ptr__,UMovieSceneSequence *param_1)

{
  longlong lVar1;
  longlong lVar2;
  FFrameRate FVar3;
  FFrameRate FVar4;
  TRange<FFrameNumber> local_28;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetPlaybackRange on a null sequence",Error,(FName)0x0);
    __return_storage_ptr__->bHasStart = '\0';
    __return_storage_ptr__->bHasEnd = '\0';
    __return_storage_ptr__->InclusiveStart = 0;
    __return_storage_ptr__->ExclusiveEnd = 0;
    (__return_storage_ptr__->InternalRate).Numerator = 60000;
    (__return_storage_ptr__->InternalRate).Denominator = 1;
    return __return_storage_ptr__;
  }
  lVar1 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  if (lVar1 != 0) {
    lVar2 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    FVar4.Numerator = 60000;
    FVar4.Denominator = 1;
    if (lVar2 == 0) {
      FVar3.Numerator = 60000;
      FVar3.Denominator = 1;
    }
    else {
      FVar3 = *(FFrameRate *)(lVar2 + 0x140);
    }
    lVar2 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    if (lVar2 != 0) {
      FVar4 = *(FFrameRate *)(lVar2 + 0x138);
    }
    local_28.LowerBound = *(TRangeBound<FFrameNumber> *)(lVar1 + 0x128);
    local_28.UpperBound = *(TRangeBound<FFrameNumber> *)(lVar1 + 0x130);
    FSequencerScriptingRange::FromNative(__return_storage_ptr__,&local_28,FVar4,FVar3);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bHasStart = '\0';
  __return_storage_ptr__->bHasEnd = '\0';
  __return_storage_ptr__->InclusiveStart = 0;
  __return_storage_ptr__->ExclusiveEnd = 0;
  (__return_storage_ptr__->InternalRate).Numerator = 60000;
  (__return_storage_ptr__->InternalRate).Denominator = 1;
  return __return_storage_ptr__;
}

// GetPlaybackStart @ 14c6a0e20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UMovieSceneSequenceExtensions::GetPlaybackStart(UMovieSceneSequence *param_1)

{
  int iVar1;
  code *pcVar2;
  FFrameRate FVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  FFrameTime FVar8;
  char cVar9;
  FFrameRate FVar10;
  undefined1 local_res18 [8];
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetPlaybackStart on a null sequence",Error,(FName)0x0);
  }
  else {
    lVar6 = (**(code **)(param_1->_padding_ + 0x2f8))();
    if (lVar6 != 0) {
      (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
      FVar10.Numerator = 60000;
      FVar10.Denominator = 1;
      lVar7 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
      if (lVar7 != 0) {
        FVar10 = *(FFrameRate *)(lVar7 + 0x138);
      }
      iVar5 = *(int *)(lVar6 + 300);
      cVar9 = (char)*(undefined4 *)(lVar6 + 0x128);
      if ((cVar9 == '\x02') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InLowerBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x2c,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      lVar6 = 0;
      if (cVar9 == '\0') {
        lVar6 = 4;
      }
      iVar1 = *(int *)((longlong)
                       &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                        ::__l2::Offsets + lVar6);
      if ((cVar9 == '\x02') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      FVar3.Denominator = 0;
      FVar3.Numerator = iVar5 + iVar1;
      FVar8 = ConvertFrameTime((FFrameTime)local_res18,FVar3,FVar10);
      return *(int *)FVar8;
    }
  }
  return -1;
}

// GetPlaybackStartSeconds @ 14c6a0f90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl UMovieSceneSequenceExtensions::GetPlaybackStartSeconds(UMovieSceneSequence *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  FFrameRate FVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  FFrameTime FVar8;
  char cVar9;
  FFrameRate FVar10;
  float fVar11;
  undefined8 local_res18;
  float fStackX_24;
  undefined1 local_58 [8];
  undefined4 local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetPlaybackStartSeconds on a null sequence",Error,(FName)0x0);
  }
  else {
    lVar6 = (**(code **)(param_1->_padding_ + 0x2f8))();
    if (lVar6 != 0) {
      lVar7 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
      FVar10.Numerator = 60000;
      FVar10.Denominator = 1;
      if (lVar7 == 0) {
        local_res18 = 0x10000ea60;
      }
      else {
        local_res18 = *(undefined8 *)(lVar7 + 0x140);
      }
      lVar7 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
      if (lVar7 != 0) {
        FVar10 = *(FFrameRate *)(lVar7 + 0x138);
      }
      local_50 = *(undefined4 *)(lVar6 + 0x128);
      iVar3 = *(int *)(lVar6 + 300);
      uStack_48 = *(undefined4 *)(lVar6 + 0x130);
      uStack_44 = *(undefined4 *)(lVar6 + 0x134);
      cVar9 = (char)local_50;
      iStack_4c = iVar3;
      if (cVar9 == '\x02') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InLowerBound.IsOpen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                           ,0x2c,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          fVar11 = (float)(*pcVar2)();
          return fVar11;
        }
      }
      lVar6 = 0;
      if (cVar9 == '\0') {
        lVar6 = 4;
      }
      iVar1 = *(int *)((longlong)
                       &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                        ::__l2::Offsets + lVar6);
      if (cVar9 == '\x02') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          fVar11 = (float)(*pcVar2)();
          return fVar11;
        }
      }
      FVar4.Denominator = 0;
      FVar4.Numerator = iVar3 + iVar1;
      FVar8 = ConvertFrameTime((FFrameTime)local_58,FVar4,FVar10);
      fStackX_24 = (float)((ulonglong)*(undefined8 *)FVar8 >> 0x20);
      return ((float)local_res18._4_4_ * fStackX_24 +
             (float)((longlong)(int)*(undefined8 *)FVar8 * (longlong)local_res18._4_4_)) /
             (float)(int)local_res18;
    }
  }
  return __real_bf800000;
}

// GetPortableBindingID @ 14c6a1180

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneObjectBindingID * __cdecl
UMovieSceneSequenceExtensions::GetPortableBindingID
          (FMovieSceneObjectBindingID *__return_storage_ptr__,UMovieSceneSequence *param_1,
          UMovieSceneSequence *param_2,FMovieSceneBindingProxy *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  UMovieSceneSequence *pUVar4;
  code *pcVar5;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *pTVar8;
  bool bVar9;
  UMovieSceneCompiledDataManager *this;
  FMovieSceneObjectBindingID *pFVar10;
  UMovieSceneSequence *pUVar11;
  FRelativeObjectBindingID *pFVar12;
  bool bVar13;
  longlong lVar14;
  int iVar15;
  uint *puVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  TObjectPtr<UMovieSceneCompiledData>_u_0 TVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  bool bVar22;
  uint local_194;
  undefined1 local_190 [4];
  FMovieSceneSequenceID local_18c;
  FMovieSceneSequenceID local_188;
  FMovieSceneSequenceHierarchy *local_180;
  FMovieSceneCompiledDataID local_178;
  ForElementType<unsigned_int> local_170;
  uint local_168 [2];
  longlong local_160;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *local_158;
  int iStack_150;
  uint uStack_14c;
  undefined1 *local_148;
  undefined4 uStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  uint local_120 [2];
  TObjectPtr<UMovieSceneCompiledData>_u_0 local_118;
  int local_110;
  FString local_108;
  FString local_f8;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FRelativeObjectBindingID local_68;
  
  if (((param_1 == (UMovieSceneSequence *)0x0) || (param_2 == (UMovieSceneSequence *)0x0)) ||
     (pUVar11 = (param_3->Sequence).field0_0x0.DebugPtr, pUVar11 == (UMovieSceneSequence *)0x0)) {
    local_160 = 0;
    FFrame::KismetExecutionMessage(L"Invalid sequence specified.",Error,(FName)0x0);
    (__return_storage_ptr__->Guid).A = 0;
    (__return_storage_ptr__->Guid).B = 0;
    (__return_storage_ptr__->Guid).C = 0;
    (__return_storage_ptr__->Guid).D = 0;
    __return_storage_ptr__->SequenceID = 0;
    __return_storage_ptr__->ResolveParentIndex = -1;
    return __return_storage_ptr__;
  }
  local_18c.Value = local_168[0];
  if (param_1 == param_2) {
    if (pUVar11 == param_1) {
      uVar18 = (param_3->BindingID).A;
      uVar3 = (param_3->BindingID).B;
      uVar21 = (param_3->BindingID).C;
      uVar6 = (param_3->BindingID).D;
      __return_storage_ptr__->SequenceID = 0;
      __return_storage_ptr__->ResolveParentIndex = 0;
      (__return_storage_ptr__->Guid).A = uVar18;
      (__return_storage_ptr__->Guid).B = uVar3;
      (__return_storage_ptr__->Guid).C = uVar21;
      (__return_storage_ptr__->Guid).D = uVar6;
      return __return_storage_ptr__;
    }
    local_188.Value = 0;
  }
  else {
    local_188.Value = local_120[0];
    if (pUVar11 == param_1) {
      local_18c.Value = 0;
    }
  }
  bVar13 = param_1 == param_2;
  iVar15 = 0;
  bVar22 = pUVar11 == param_1;
  this = UMovieSceneCompiledDataManager::GetPrecompiledData();
  UMovieSceneCompiledDataManager::Compile(this,(UMovieSceneSequence *)&local_178);
  local_180 = UMovieSceneCompiledDataManager::FindHierarchy(this,local_178);
  local_138 = 0;
  if (local_180 == (FMovieSceneSequenceHierarchy *)0x0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_b8,(UObject *)0x0);
    ::FString::PrintfImpl
              ((FString *)&local_118.ObjectPtr,
               L"Root Sequence (\'%s\') does not have any sub-sequences.");
    TVar19 = (TObjectPtr<UMovieSceneCompiledData>_u_0)L"";
    if (local_110 != 0) {
      TVar19 = local_118;
    }
    FFrame::KismetExecutionMessage((wchar_t *)TVar19.DebugPtr,Error,(FName)0x0);
    if (local_118.DebugPtr != (UMovieSceneCompiledData *)0x0) {
      FMemory::Free(local_118.DebugPtr);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    (__return_storage_ptr__->Guid).A = 0;
    (__return_storage_ptr__->Guid).B = 0;
    (__return_storage_ptr__->Guid).C = 0;
    (__return_storage_ptr__->Guid).D = 0;
    __return_storage_ptr__->SequenceID = 0;
    __return_storage_ptr__->ResolveParentIndex = -1;
    return __return_storage_ptr__;
  }
  local_158 = &local_180->SubSequences;
  local_170 = (ForElementType<unsigned_int>)&(local_180->SubSequences).field_0x10;
  uStack_14c = 1;
  iVar2 = *(int *)&(local_180->SubSequences).field_0x28;
  iStack_13c = local_138;
  iStack_150 = iVar15;
  if (iVar2 != 0) {
    puVar16 = *(uint **)&(local_180->SubSequences).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)local_170;
    }
    uVar18 = *puVar16;
    local_138 = iVar15;
    while (uVar18 == 0) {
      lVar14 = (longlong)iStack_150;
      local_138 = local_138 + 0x20;
      iStack_150 = iStack_150 + 1;
      iStack_13c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_150) goto LAB_14c6a13a3;
      uVar18 = (puVar16 + 1)[lVar14];
    }
    uStack_14c = -uVar18 & uVar18;
    uVar1 = (ulonglong)uStack_14c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_128 = (int)lVar14;
    iStack_13c = local_128 + -1 + local_138;
    if (iVar2 < iStack_13c) {
      iStack_13c = iVar2;
    }
  }
LAB_14c6a13a3:
  local_194 = *(uint *)&(local_180->SubSequences).field_0x28;
  iStack_130 = *(int *)&(local_180->SubSequences).field_0x8 -
               *(int *)&(local_180->SubSequences).field_0x34;
  uVar18 = local_194 & 0xffffffe0;
  uStack_140 = 0xffffffff;
  TStack_e0.CurrentBitIndex = iStack_13c;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._padding_ = CONCAT44(uStack_14c,iStack_150);
  iVar15 = (int)local_194 >> 5;
  TStack_e0._28_4_ = iStack_13c;
  TStack_e0.BaseBitIndex = local_138;
  uStack_c0 = CONCAT44(uStack_12c,iStack_130);
  local_148 = (undefined1 *)local_170;
  iStack_134 = iStack_13c;
  local_e8 = local_158;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_170;
  if ((((int)local_194 < 0) || (iVar2 < (int)local_194)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FMovieSceneObjectBindingID *)(*pcVar5)();
    return pFVar10;
  }
  FVar7 = local_170;
  uVar3 = *(int *)((longlong)local_170 + 0x18);
  if (local_194 != uVar3) {
    FVar17 = *(ForElementType<unsigned_int> *)((longlong)local_170 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_170 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar17 = local_170;
    }
    uVar21 = -1 << ((byte)local_194 & 0x1f) & *(uint *)((longlong)FVar17 + (longlong)iVar15 * 4);
    while (uVar21 == 0) {
      lVar14 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      local_194 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14c6a14e0;
      uVar21 = *(uint *)((undefined1 *)((longlong)FVar17 + 4) + lVar14 * 4);
    }
    uVar1 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_194 = (int)lVar14 + -1 + uVar18;
    if ((int)uVar3 < (int)local_194) {
      local_194 = uVar3;
    }
  }
LAB_14c6a14e0:
  do {
    pTVar8 = local_e8;
    if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_190);
    }
    if (((TStack_e0.CurrentBitIndex == local_194) &&
        ((ForElementType<unsigned_int>)TStack_e0.Array == FVar7)) &&
       (pTVar8 == &local_180->SubSequences)) {
LAB_14c6a15a0:
      if (bVar13) {
        if (bVar22) {
          pFVar12 = UE::MovieScene::FRelativeObjectBindingID::FRelativeObjectBindingID
                              (&local_68,local_188,local_18c,&param_3->BindingID,local_180);
          uVar18 = (pFVar12->Guid).B;
          uVar3 = (pFVar12->Guid).C;
          uVar21 = (pFVar12->Guid).D;
          (__return_storage_ptr__->Guid).A = (pFVar12->Guid).A;
          (__return_storage_ptr__->Guid).B = uVar18;
          (__return_storage_ptr__->Guid).C = uVar3;
          (__return_storage_ptr__->Guid).D = uVar21;
          __return_storage_ptr__->SequenceID = (pFVar12->SequenceID).Value;
          __return_storage_ptr__->ResolveParentIndex = pFVar12->ResolveParentIndex;
          return __return_storage_ptr__;
        }
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0);
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)(param_3->Sequence).field0_0x0.DebugPtr,&local_88,
                   (UObject *)0x0);
        ::FString::PrintfImpl
                  (&local_f8,
                   L"Unable to locate Sequence for InBinding (\'%s\') within Root Sequence hierarchy (\'%s\')."
                  );
        FVar20.Data = (FScriptContainerElement *)L"";
        if (local_f8.Data.ArrayNum != 0) {
          FVar20.Data = local_f8.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar20.Data,Error,(FName)0x0);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_98,(UObject *)0x0);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_a8,(UObject *)0x0);
        ::FString::PrintfImpl
                  (&local_108,
                   L"Unable to locate DestinationSequence (\'%s\') within Root Sequence hierarchy (\'%s\')."
                  );
        FVar20.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar20.Data = local_108.Data.AllocatorInstance.Data;
        }
        FFrame::KismetExecutionMessage((wchar_t *)FVar20.Data,Error,(FName)0x0);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        local_78.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          local_78.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
        }
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      (__return_storage_ptr__->Guid).A = 0;
      (__return_storage_ptr__->Guid).B = 0;
      (__return_storage_ptr__->Guid).C = 0;
      (__return_storage_ptr__->Guid).D = 0;
      __return_storage_ptr__->SequenceID = 0;
      __return_storage_ptr__->ResolveParentIndex = -1;
      return __return_storage_ptr__;
    }
    puVar16 = (uint *)(*(longlong *)pTVar8 + (longlong)TStack_e0.CurrentBitIndex * 0x120);
    pUVar11 = FMovieSceneSubSequenceData::GetSequence((FMovieSceneSubSequenceData *)(puVar16 + 2));
    if (pUVar11 != (UMovieSceneSequence *)0x0) {
      if ((((!bVar22) &&
           (pUVar4 = (param_3->Sequence).field0_0x0.DebugPtr, pUVar4 != (UMovieSceneSequence *)0x0))
          && (pUVar4 == pUVar11)) && (puVar16 != local_168)) {
        local_18c.Value = *puVar16;
        bVar22 = true;
      }
      if (!bVar13) {
        if ((pUVar11 != param_2) || (puVar16 == local_120)) goto LAB_14c6a1585;
        local_188.Value = *puVar16;
        bVar13 = true;
      }
      if (bVar22) goto LAB_14c6a15a0;
    }
LAB_14c6a1585:
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  } while( true );
}

// GetPossessables @ 14c6a17a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FMovieSceneBindingProxy,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneSequenceExtensions::GetPossessables
          (TArray<FMovieSceneBindingProxy,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieSceneSequence *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FMovieSceneBindingReferences *this;
  UMovieScene *this_00;
  FMovieScenePossessable *pFVar5;
  FMovieSceneBindingReference *pFVar6;
  bool bVar7;
  ForAnyElementType local_38;
  undefined8 local_30;
  TArrayView<FMovieSceneBindingReference_const_,int> local_28;
  
  iVar2 = 0;
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetPossessables on a null sequence",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  this = UMovieSceneSequence::GetBindingReferences(param_1);
  if (this == (FMovieSceneBindingReferences *)0x0) {
    this_00 = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    if ((this_00 != (UMovieScene *)0x0) &&
       (iVar3 = UMovieScene::GetPossessableCount(this_00), 0 < iVar3)) {
      do {
        pFVar5 = UMovieScene::GetPossessable(this_00,iVar2);
        iVar4 = (int)local_30;
        if ((int)local_30 == local_30._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_38,(int *)((longlong)&local_30 + 4));
        }
        local_30 = CONCAT44(local_30._4_4_,iVar4 + 1);
        uVar1 = *(undefined8 *)&(pFVar5->Guid).C;
        *(undefined8 *)(local_38.Data + (longlong)iVar4 * 0x18) = *(undefined8 *)&pFVar5->Guid;
        *(undefined8 *)(local_38.Data + (longlong)iVar4 * 0x18 + 8) = uVar1;
        *(UMovieSceneSequence **)(local_38.Data + (longlong)iVar4 * 0x18 + 0x10) = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
  }
  else {
    FMovieSceneBindingReferences::GetAllReferences(this,&local_28);
    uVar1 = local_30;
    for (pFVar6 = local_28.DataPtr; local_30 = uVar1, pFVar6 != local_28.DataPtr + local_28.ArrayNum
        ; pFVar6 = pFVar6 + 1) {
      if ((pFVar6->CustomBinding).field0_0x0.DebugPtr == (UMovieSceneCustomBinding *)0x0) {
        local_30._0_4_ = (int)uVar1;
        local_30._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
        bVar7 = (int)local_30 == local_30._4_4_;
        iVar2 = (int)local_30;
        if (bVar7) {
          iVar2 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_38,(int *)((longlong)&local_30 + 4));
        }
        local_30 = CONCAT44(local_30._4_4_,iVar2 + 1);
        uVar1 = *(undefined8 *)&(pFVar6->ID).C;
        *(undefined8 *)(local_38.Data + (longlong)iVar2 * 0x18) = *(undefined8 *)&pFVar6->ID;
        *(undefined8 *)(local_38.Data + (longlong)iVar2 * 0x18 + 8) = uVar1;
        *(UMovieSceneSequence **)(local_38.Data + (longlong)iVar2 * 0x18 + 0x10) = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
      }
      uVar1 = local_30;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_38.Data;
  __return_storage_ptr__->ArrayNum = (int)local_30;
  __return_storage_ptr__->ArrayMax = local_30._4_4_;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14c6a2350

UClass * __cdecl UMovieSceneSequenceExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneSequenceExtensions",
               &Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneSequenceExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSequenceExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneSequenceExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.InnerSingleton;
}

// GetRootFoldersInSequence @ 14c6a2660

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneFolder_*,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneSequenceExtensions::GetRootFoldersInSequence
          (TArray<UMovieSceneFolder_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieSceneSequence *param_1)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetRootFoldersInSequence on a null sequence",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetSpawnables @ 14c6a2860

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FMovieSceneBindingProxy,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneSequenceExtensions::GetSpawnables
          (TArray<FMovieSceneBindingProxy,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieSceneSequence *param_1)

{
  UMovieSceneCustomBinding *pUVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  UMovieScene *this;
  FMovieSceneSpawnable *pFVar6;
  FMovieSceneBindingReferences *this_00;
  UClass *pUVar7;
  int iVar8;
  FMovieSceneBindingReference *pFVar9;
  ForAnyElementType local_48;
  undefined8 local_40;
  TArrayView<FMovieSceneBindingReference_const_,int> local_38;
  
  iVar8 = 0;
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetSpawnables on a null sequence",Error,(FName)0x0)
    ;
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  if (this != (UMovieScene *)0x0) {
    uVar4 = UMovieScene::GetSpawnableCount(this);
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (local_40._4_4_ < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar4,&local_48,(int)local_40,(int *)((longlong)&local_40 + 4));
    }
    if (0 < (int)uVar4) {
      do {
        pFVar6 = UMovieScene::GetSpawnable(this,iVar8);
        iVar5 = (int)local_40;
        if ((int)local_40 == local_40._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_48,(int *)((longlong)&local_40 + 4));
        }
        local_40 = CONCAT44(local_40._4_4_,iVar5 + 1);
        uVar3 = *(undefined8 *)&(pFVar6->Guid).C;
        *(undefined8 *)(local_48.Data + (longlong)iVar5 * 0x18) = *(undefined8 *)&pFVar6->Guid;
        *(undefined8 *)(local_48.Data + (longlong)iVar5 * 0x18 + 8) = uVar3;
        *(UMovieSceneSequence **)(local_48.Data + (longlong)iVar5 * 0x18 + 0x10) = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar4);
    }
  }
  this_00 = UMovieSceneSequence::GetBindingReferences(param_1);
  if (this_00 != (FMovieSceneBindingReferences *)0x0) {
    FMovieSceneBindingReferences::GetAllReferences(this_00,&local_38);
    pFVar9 = local_38.DataPtr;
    if (local_38.DataPtr != local_38.DataPtr + local_38.ArrayNum) {
      do {
        pUVar1 = (pFVar9->CustomBinding).field0_0x0.DebugPtr;
        if (pUVar1 != (UMovieSceneCustomBinding *)0x0) {
          pUVar7 = Z_Construct_UClass_UMovieSceneSpawnableActorBinding_NoRegister();
          lVar2 = *(longlong *)&pUVar1->field_0x10;
          iVar8 = (int)pUVar7->_padding_;
          if ((iVar8 <= *(int *)(lVar2 + 0x38)) &&
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar8 * 8) ==
              &pUVar7->_padding_)) {
            iVar8 = (int)local_40;
            if ((int)local_40 == local_40._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_48,(int *)((longlong)&local_40 + 4));
            }
            local_40 = CONCAT44(local_40._4_4_,iVar8 + 1);
            uVar3 = *(undefined8 *)&(pFVar9->ID).C;
            *(undefined8 *)(local_48.Data + (longlong)iVar8 * 0x18) = *(undefined8 *)&pFVar9->ID;
            *(undefined8 *)(local_48.Data + (longlong)iVar8 * 0x18 + 8) = uVar3;
            *(UMovieSceneSequence **)(local_48.Data + (longlong)iVar8 * 0x18 + 0x10) = param_1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
          }
        }
        pFVar9 = pFVar9 + 1;
      } while (pFVar9 != local_38.DataPtr + local_38.ArrayNum);
      goto LAB_14c6a2a48;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
LAB_14c6a2a48:
  (__return_storage_ptr__->AllocatorInstance).Data = local_48.Data;
  __return_storage_ptr__->ArrayNum = (int)local_40;
  __return_storage_ptr__->ArrayMax = local_40._4_4_;
  return __return_storage_ptr__;
}

// GetTickResolution @ 14c6a3080

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FFrameRate __cdecl UMovieSceneSequenceExtensions::GetTickResolution(UMovieSceneSequence *param_1)

{
  longlong lVar1;
  undefined1 in_DL;
  undefined7 in_register_00000011;
  
  if (CONCAT71(in_register_00000011,in_DL) == 0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
    *(undefined4 *)&param_1->_padding_ = 60000;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 1;
    return (FFrameRate)param_1;
  }
  lVar1 = (**(code **)(*(longlong *)CONCAT71(in_register_00000011,in_DL) + 0x2f8))();
  if (lVar1 != 0) {
    param_1->_padding_ = *(longlong *)(lVar1 + 0x138);
    return (FFrameRate)param_1;
  }
  param_1->_padding_ = 0x10000ea60;
  return (FFrameRate)param_1;
}

// GetTracks @ 14c6a36f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneSequenceExtensions::GetTracks
          (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieSceneSequence *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  UMovieScene *this;
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *pTVar4;
  UMovieSceneTrack *local_38;
  ForAnyElementType local_30;
  int local_28;
  int aiStack_24 [3];
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetTracks on a null sequence",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  aiStack_24[0] = 0;
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  if (this != (UMovieScene *)0x0) {
    if ((TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *)&local_30 !=
        &this->Tracks) {
      iVar1 = (this->Tracks).ArrayNum;
      _Src = (this->Tracks).AllocatorInstance.Data;
      local_28 = iVar1;
      if (((iVar1 != 0) || (aiStack_24[0] != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,aiStack_24[0],&local_30,iVar1,aiStack_24), iVar1 != 0)) {
        memcpy(local_30.Data,_Src,(longlong)iVar1 << 3);
      }
    }
    local_38 = UMovieScene::GetCameraCutTrack(this);
    if (local_38 != (UMovieSceneTrack *)0x0) {
      if (((local_30.Data <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < local_30.Data + (longlong)aiStack_24[0] * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar4;
      }
      if (local_28 == aiStack_24[0]) {
        local_28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_30,aiStack_24);
      }
      *(UMovieSceneTrack **)(local_30.Data + (longlong)local_28 * 8) = local_38;
      local_28 = local_28 + 1;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_30.Data;
  __return_storage_ptr__->ArrayNum = local_28;
  __return_storage_ptr__->ArrayMax = aiStack_24[0];
  return __return_storage_ptr__;
}

// GetViewRangeEnd @ 14c6a3910

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

double __cdecl UMovieSceneSequenceExtensions::GetViewRangeEnd(UMovieSceneSequence *param_1)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetViewRangeEnd on a null sequence",Error,(FName)0x0);
    return 0.0;
  }
  (**(code **)(param_1->_padding_ + 0x2f8))();
  return 0.0;
}

// GetViewRangeStart @ 14c6a3950

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

double __cdecl UMovieSceneSequenceExtensions::GetViewRangeStart(UMovieSceneSequence *param_1)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetViewRangeStart on a null sequence",Error,(FName)0x0);
    return 0.0;
  }
  (**(code **)(param_1->_padding_ + 0x2f8))();
  return 0.0;
}

// GetWorkRangeEnd @ 14c6a3990

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

double __cdecl UMovieSceneSequenceExtensions::GetWorkRangeEnd(UMovieSceneSequence *param_1)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetWorkRangeEnd on a null sequence",Error,(FName)0x0);
    return 0.0;
  }
  (**(code **)(param_1->_padding_ + 0x2f8))();
  return 0.0;
}

// GetWorkRangeStart @ 14c6a39d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

double __cdecl UMovieSceneSequenceExtensions::GetWorkRangeStart(UMovieSceneSequence *param_1)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetWorkRangeStart on a null sequence",Error,(FName)0x0);
    return 0.0;
  }
  (**(code **)(param_1->_padding_ + 0x2f8))();
  return 0.0;
}

// IsPlaybackRangeLocked @ 14c6a3a90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UMovieSceneSequenceExtensions::IsPlaybackRangeLocked(UMovieSceneSequence *param_1)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call IsPlaybackRangeLocked on a null sequence",Error,(FName)0x0);
  }
  return false;
}

// IsReadOnly @ 14c6a3ac0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UMovieSceneSequenceExtensions::IsReadOnly(UMovieSceneSequence *param_1)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call IsReadOnly on a null sequence",Error,(FName)0x0);
  }
  return false;
}

// LocateBoundObjects @ 14c6a3b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneSequenceExtensions::LocateBoundObjects
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UMovieSceneSequence *param_1,FMovieSceneBindingProxy *param_2,UObject *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  FWeakObjectPtr *pFVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSharedPlaybackState *pFVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  FMovieSceneObjectCache *pFVar10;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar11;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar12;
  int *piVar13;
  FMovieSceneObjectCache *this;
  ForAnyElementType FVar14;
  longlong *plVar15;
  FWeakObjectPtr *pFVar16;
  FSharedPlaybackState *this_00;
  undefined1 auStack_288 [32];
  undefined1 *local_268;
  FMovieSceneObjectCache *local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  undefined1 local_238 [8];
  ForAnyElementType local_230;
  undefined8 local_228;
  undefined1 local_220 [8];
  FWeakObjectPtr local_218;
  byte local_210;
  undefined8 local_20c;
  FWeakObjectPtr local_200;
  FPlaybackCapabilityPtr local_1f8;
  FSharedPlaybackState *local_1e8;
  TReferenceControllerBase<1> *local_1e0;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_1d8;
  FMovieSceneEvaluationState *local_1c8;
  FMovieSceneBindingProxy *local_1c0;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_1b8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_1b0;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_1a0;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_190;
  FSharedPlaybackStateCreateParams local_180;
  undefined1 local_158 [8];
  undefined1 local_150 [64];
  void *local_110;
  undefined4 local_108;
  undefined1 local_100 [64];
  ForElementType<FSetElementId> local_c0;
  int local_b8;
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_b0;
  int local_78 [2];
  int *local_70;
  undefined4 local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_288;
  FVar14.Data = (FScriptContainerElement *)0x0;
  local_200 = (FWeakObjectPtr)param_1;
  local_1c0 = param_2;
  local_1b8 = __return_storage_ptr__;
  if (param_1 == (UMovieSceneSequence *)0x0) {
    local_20c = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call LocateBoundObjects on a null sequence",Error,(FName)0x0);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_180.RootInstanceHandle = (FRootInstanceHandle)0xffff;
  local_180.Linker.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneEntitySystemLinker>_u_0)0x0;
  local_180.CompiledDataManager = (UMovieSceneCompiledDataManager *)0x0;
  local_180.PlaybackContext = param_3;
  pFVar10 = ::operator_new(0x88);
  if (pFVar10 == (FMovieSceneObjectCache *)0x0) {
    this_00 = (FSharedPlaybackState *)&DAT_00000010;
    pFVar10 = (FMovieSceneObjectCache *)FVar14.Data;
  }
  else {
    *(undefined4 *)&(pFVar10->OnBindingInvalidated).field_0x8 = 1;
    *(undefined4 *)&(pFVar10->OnBindingInvalidated).field_0xc = 1;
    *(undefined ***)&pFVar10->OnBindingInvalidated =
         &
         ___7__TIntrusiveReferenceController_UFSharedPlaybackState_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    UE::MovieScene::FSharedPlaybackState::FSharedPlaybackState
              ((FSharedPlaybackState *)&(pFVar10->OnBindingInvalidated).field_0x10,param_1,
               &local_180);
    this_00 = (FSharedPlaybackState *)&(pFVar10->OnBindingInvalidated).field_0x10;
    if (this_00 == (FSharedPlaybackState *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar11 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar11;
      }
      goto LAB_14c6a3cc2;
    }
  }
  if (((((TWeakPtr<UE::MovieScene::FSharedPlaybackState,1> *)&this_00->_padding_)->Object ==
        (FSharedPlaybackState *)0x0) ||
      (pTVar5 = ((FWeakReferencer<1> *)&this_00->_padding_)->ReferenceController,
      pTVar5 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar5->SharedReferenceCount < 1)) {
    if (pFVar10 != (FMovieSceneObjectCache *)0x0) {
      LOCK();
      puVar2 = &(pFVar10->OnBindingInvalidated).field_0x8;
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    ((TWeakPtr<UE::MovieScene::FSharedPlaybackState,1> *)&this_00->_padding_)->Object = this_00;
    if (pFVar10 != (FMovieSceneObjectCache *)this_00->_padding_) {
      if (pFVar10 != (FMovieSceneObjectCache *)0x0) {
        LOCK();
        puVar2 = &(pFVar10->OnBindingInvalidated).field_0xc;
        *(int *)puVar2 = *(int *)puVar2 + 1;
        UNLOCK();
      }
      plVar15 = (longlong *)this_00->_padding_;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        lVar1 = (longlong)plVar15 + 0xc;
        iVar4 = *(int *)lVar1;
        *(int *)lVar1 = *(int *)lVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
      this_00->_padding_ = (longlong)pFVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
  }
LAB_14c6a3cc2:
  local_158 = (undefined1  [8])&___7FMovieSceneEvaluationState__6B_;
  local_150._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_150._48_8_ = _UNK_150631d98;
  local_100._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_100._48_8_ = _UNK_150631d98;
  local_b0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_b0._48_8_ = _UNK_150631d98;
  local_150._0_8_ = 0;
  local_150._8_8_ = 0;
  local_150._32_8_ = 0;
  local_110 = (void *)0x0;
  local_108 = 0;
  local_100._0_8_ = 0;
  local_100._8_8_ = 0;
  local_100._32_8_ = 0;
  local_c0 = (ForElementType<FSetElementId>)0x0;
  local_b8 = 0;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  local_b0._32_8_ = 0;
  local_70 = (int *)0x0;
  local_68 = 0;
  local_60 = 0;
  bVar9 = IsInGameThread();
  if (!bVar9) {
    local_238[0] = 0;
    `UE::MovieScene::FSharedPlaybackState::AddCapabilityRaw<FMovieSceneEvaluationState>'::__l2::
    <lambda_1>::operator()(local_238);
  }
  local_1c8 = (FMovieSceneEvaluationState *)local_158;
  FMovieSceneEvaluationState::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::
  AddCapability<FMovieSceneEvaluationState_*,FMovieSceneEvaluationState,FMovieSceneEvaluationState_*>
            ((FPlaybackCapabilitiesImpl *)&this_00->Capabilities,&local_1f8,1 << (local_210 & 0x1f),
             &local_1c8);
  if ((local_1f8.Ptr == (longlong *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x3a,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
    return pTVar11;
  }
  plVar15 = local_1f8.Ptr;
  if (local_1f8.StorageMode != Inline) {
    if ((local_1f8.StorageMode == RawPointer) || (local_1f8.StorageMode == SharedPointer)) {
      plVar15 = *(longlong **)local_1f8.Ptr;
    }
    else {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        pTVar11 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar11;
      }
    }
  }
  local_218 = *(FWeakObjectPtr *)(*plVar15 + 8);
  pTVar12 = TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1>::AsShared
                      ((TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1> *)this_00,&local_1a0
                      );
  pTVar5 = (pTVar12->SharedReferenceCount).ReferenceController;
  pFVar6 = pTVar12->Object;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a0.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a0.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e8 = pFVar6;
  local_1e0 = pTVar5;
  (*(code *)local_218)(plVar15,&local_1e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  local_1b0.Object = this_00;
  local_1b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
  if (pFVar10 == (FMovieSceneObjectCache *)0x0) {
    FMovieSceneEvaluationState::AssignSequence
              ((FMovieSceneEvaluationState *)local_158,&MovieSceneSequenceID::Root,
               (UMovieSceneSequence *)local_200,&local_1b0);
  }
  else {
    LOCK();
    puVar2 = &(pFVar10->OnBindingInvalidated).field_0x8;
    *(int *)puVar2 = *(int *)puVar2 + 1;
    UNLOCK();
    FMovieSceneEvaluationState::AssignSequence
              ((FMovieSceneEvaluationState *)local_158,&MovieSceneSequenceID::Root,
               (UMovieSceneSequence *)local_200,&local_1b0);
    LOCK();
    puVar2 = &(pFVar10->OnBindingInvalidated).field_0x8;
    *(int *)puVar2 = *(int *)puVar2 + 1;
    UNLOCK();
  }
  if (local_b0._8_4_ != local_b0._52_4_) {
    piVar13 = local_78;
    if (local_70 != (int *)0x0) {
      piVar13 = local_70;
    }
    iVar4 = *piVar13;
    while (iVar4 != -1) {
      piVar13 = (int *)((longlong)iVar4 * 0x198 + local_b0._0_8_);
      if (*piVar13 == 0) {
        this = (FMovieSceneObjectCache *)(piVar13 + 2);
        if (piVar13 == (int *)0x0) {
          this = (FMovieSceneObjectCache *)FVar14.Data;
        }
        if (this != (FMovieSceneObjectCache *)0x0) {
          if (pFVar10 != (FMovieSceneObjectCache *)0x0) {
            LOCK();
            puVar2 = &(pFVar10->OnBindingInvalidated).field_0x8;
            *(int *)puVar2 = *(int *)puVar2 + 1;
            UNLOCK();
          }
          local_190.Object = this_00;
          local_190.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar10;
          FMovieSceneObjectCache::FindBoundObjects(this,&local_1d8,&local_1c0->BindingID,&local_190)
          ;
          goto LAB_14c6a3f06;
        }
        break;
      }
      iVar4 = piVar13[100];
    }
  }
  local_1d8.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
  local_1d8.ArrayNum = 0;
LAB_14c6a3f06:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  pFVar3 = &local_1d8.DataPtr[local_1d8.ArrayNum].WeakPtr;
  iVar4 = 0;
  iVar8 = 0;
  pFVar16 = &(local_1d8.DataPtr)->WeakPtr;
  pTVar11 = local_1b8;
  do {
    local_1b8 = pTVar11;
    if (pFVar16 == pFVar3) {
      local_230.Data = (FScriptContainerElement *)0x0;
      local_228 = 0;
      (pTVar11->AllocatorInstance).Data = FVar14.Data;
      pTVar11->ArrayNum = iVar4;
      pTVar11->ArrayMax = iVar8;
      local_68 = 0;
      if (local_70 != (int *)0x0) {
        FMemory::Free(local_70);
      }
      TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_b0);
      local_b8 = 0;
      if (local_c0 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_c0);
      }
      TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_100);
      local_108 = 0;
      if (local_110 != (void *)0x0) {
        FMemory::Free(local_110);
      }
      TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_150);
      local_158 = (undefined1  [8])&___7IPlaybackCapability_MovieScene_UE__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar10);
      return pTVar11;
    }
    local_218 = *pFVar16;
    local_230.Data = FVar14.Data;
    local_228._0_4_ = iVar4;
    local_228._4_4_ = iVar8;
    bVar9 = FWeakObjectPtr::IsValid(&local_218);
    if (bVar9) {
      local_220 = (undefined1  [8])FWeakObjectPtr::Get(&local_218);
      if ((local_230.Data <= (FMovieSceneObjectCache *)local_220) &&
         ((FScriptContainerElement *)local_220 < local_230.Data + (longlong)local_228._4_4_ * 8)) {
        local_250 = (longlong)(int)local_228;
        local_248 = 8;
        local_268 = local_220;
        local_260 = (FMovieSceneObjectCache *)local_230.Data;
        local_258 = (longlong)local_228._4_4_;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pTVar11 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
          return pTVar11;
        }
      }
      if ((int)local_228 == local_228._4_4_) {
        local_228._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_230,(int *)((longlong)&local_228 + 4));
      }
      *(undefined1 (*) [8])(local_230.Data + (longlong)(int)local_228 * 8) = local_220;
      local_228._0_4_ = (int)local_228 + 1;
    }
    pFVar16 = pFVar16 + 1;
    FVar14.Data = local_230.Data;
    iVar4 = (int)local_228;
    iVar8 = local_228._4_4_;
    pTVar11 = local_1b8;
  } while( true );
}

// MakeRange @ 14c6a4130

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSequencerScriptingRange * __cdecl
UMovieSceneSequenceExtensions::MakeRange
          (FSequencerScriptingRange *__return_storage_ptr__,UMovieSceneSequence *param_1,int param_2
          ,int param_3)

{
  longlong lVar1;
  FFrameRate FVar2;
  TRange<FFrameNumber> local_18;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call MakeRange on a null sequence",Error,(FName)0x0);
    __return_storage_ptr__->bHasStart = '\0';
    __return_storage_ptr__->bHasEnd = '\0';
    __return_storage_ptr__->InclusiveStart = 0;
    __return_storage_ptr__->ExclusiveEnd = 0;
    (__return_storage_ptr__->InternalRate).Numerator = 60000;
    (__return_storage_ptr__->InternalRate).Denominator = 1;
    return __return_storage_ptr__;
  }
  lVar1 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  if (lVar1 == 0) {
    FVar2.Numerator = 60000;
    FVar2.Denominator = 1;
  }
  else {
    FVar2 = *(FFrameRate *)(lVar1 + 0x140);
  }
  local_18.LowerBound.Type.Value = '\x01';
  local_18.UpperBound.Type.Value = '\0';
  local_18.UpperBound.Value.Value = param_2 + param_3;
  local_18.LowerBound.Value.Value = param_2;
  FSequencerScriptingRange::FromNative(__return_storage_ptr__,&local_18,FVar2,FVar2);
  return __return_storage_ptr__;
}

// MakeRangeSeconds @ 14c6a4210

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSequencerScriptingRange * __cdecl
UMovieSceneSequenceExtensions::MakeRangeSeconds
          (FSequencerScriptingRange *__return_storage_ptr__,UMovieSceneSequence *param_1,
          float param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  int iVar4;
  FFrameRate FVar5;
  double dVar6;
  undefined1 in_register_00001284 [12];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  float fVar10;
  TRange<FFrameNumber> local_48 [4];
  
  auVar7._4_12_ = in_register_00001284;
  auVar7._0_4_ = param_2;
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call MakeRangeSeconds on a null sequence",Error,(FName)0x0);
    __return_storage_ptr__->bHasStart = '\0';
    __return_storage_ptr__->bHasEnd = '\0';
    __return_storage_ptr__->InclusiveStart = 0;
    __return_storage_ptr__->ExclusiveEnd = 0;
    (__return_storage_ptr__->InternalRate).Numerator = 60000;
    (__return_storage_ptr__->InternalRate).Denominator = 1;
    return __return_storage_ptr__;
  }
  lVar3 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  if (lVar3 == 0) {
    FVar5.Numerator = 60000;
    FVar5.Denominator = 1;
  }
  else {
    FVar5 = *(FFrameRate *)(lVar3 + 0x140);
  }
  dVar8 = ((double)(param_2 + param_3) * (double)FVar5.Numerator) / (double)FVar5.Denominator;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar8;
  auVar7 = roundpd(auVar7,auVar1,1);
  dVar6 = auVar7._0_8_;
  dVar8 = dVar8 - dVar6;
  if (__real_41dfffffffc00000 <= dVar6) {
    dVar6 = __real_41dfffffffc00000;
  }
  if (dVar6 <= __real_c1e0000000000000) {
    dVar6 = __real_c1e0000000000000;
  }
  iVar4 = (int)dVar8;
  fVar10 = (float)dVar8 - (float)iVar4;
  if ((0.0 < fVar10) && (::FFrameTime::MaxSubframe <= fVar10)) {
    fVar10 = ::FFrameTime::MaxSubframe;
  }
  if (::FFrameTime::MaxSubframe <= fVar10) {
    fVar10 = ::FFrameTime::MaxSubframe;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  local_48[0].UpperBound.Value.Value = (int)dVar6 + iVar4;
  if (fVar10 != 0.0) {
    local_48[0].UpperBound.Value.Value = local_48[0].UpperBound.Value.Value + 1;
  }
  local_48[0].LowerBound.Type.Value = '\x01';
  local_48[0].UpperBound.Type.Value = '\0';
  dVar9 = ((double)param_2 * (double)FVar5.Numerator) / (double)FVar5.Denominator;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar9;
  auVar7 = roundpd(auVar7,auVar2,1);
  dVar8 = auVar7._0_8_;
  dVar6 = dVar8;
  if (__real_41dfffffffc00000 <= dVar8) {
    dVar6 = __real_41dfffffffc00000;
  }
  if (dVar6 <= __real_c1e0000000000000) {
    dVar6 = __real_c1e0000000000000;
  }
  local_48[0].LowerBound.Value.Value = (int)(dVar9 - dVar8) + (int)dVar6;
  FSequencerScriptingRange::FromNative(__return_storage_ptr__,local_48,FVar5,FVar5);
  return __return_storage_ptr__;
}

// RemoveRootFolderFromSequence @ 14c6a4d90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::RemoveRootFolderFromSequence
          (UMovieSceneSequence *param_1,UMovieSceneFolder *param_2)

{
  UClass *pUVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  FName this;
  ForAnyElementType FVar4;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((param_1 != (UMovieSceneSequence *)0x0) && (param_2 != (UMovieSceneFolder *)0x0)) {
    pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_2,pUVar1);
    pUVar3 = (UObject *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    if (pUVar2 != pUVar3) {
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      this = UMovieSceneFolder::GetFolderName(param_2);
      ::FName::ToString((FName *)this,&local_18);
      ::FString::PrintfImpl(&local_38,L"The folder \'%s\' does not belong to sequence \'%s\'");
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar4.Data = local_38.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar4.Data,Error,(FName)0x0);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FFrame::KismetExecutionMessage
            (L"Cannot call RemoveRootFolderFromSequence on a null sequence or folder",Error,
             (FName)0x0);
  return;
}

// RemoveTrack @ 14c6a4f60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UMovieSceneSequenceExtensions::RemoveTrack(UMovieSceneSequence *param_1,UMovieSceneTrack *param_2)

{
  int iVar1;
  bool bVar2;
  UMovieScene *this;
  UClass *pUVar3;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call RemoveTrack on a null sequence",Error,(FName)0x0);
    return false;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieSceneCameraCutTrack_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      UMovieScene::RemoveCameraCutTrack(this);
      return true;
    }
    bVar2 = UMovieScene::RemoveTrack(this,param_2);
    return bVar2;
  }
  return false;
}

// ResolveBindingID @ 14c6a5010

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneBindingProxy * __cdecl
UMovieSceneSequenceExtensions::ResolveBindingID
          (FMovieSceneBindingProxy *__return_storage_ptr__,UMovieSceneSequence *param_1,
          FMovieSceneObjectBindingID *param_2)

{
  uint uVar1;
  uint uVar2;
  FMovieSceneSequenceID FVar3;
  uint uVar4;
  UMovieSceneCompiledDataManager *pUVar5;
  FMovieSceneSequenceHierarchy *pFVar6;
  undefined4 extraout_var;
  uint *puVar7;
  UMovieSceneSequence *pUVar8;
  FMovieSceneSubSequenceData *this;
  undefined1 *puVar9;
  longlong local_res10;
  undefined1 local_res20 [8];
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    local_res10 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call ResolveBindingID on a null sequence",Error,(FName)0x0);
    (__return_storage_ptr__->BindingID).A = 0;
    (__return_storage_ptr__->BindingID).B = 0;
    (__return_storage_ptr__->BindingID).C = 0;
    (__return_storage_ptr__->BindingID).D = 0;
    (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = (UMovieSceneSequence *)0x0;
    return __return_storage_ptr__;
  }
  pUVar5 = UMovieSceneCompiledDataManager::GetPrecompiledData();
  UMovieSceneCompiledDataManager::Compile(pUVar5,(UMovieSceneSequence *)&local_res10);
  pUVar5 = UMovieSceneCompiledDataManager::GetPrecompiledData();
  pFVar6 = UMovieSceneCompiledDataManager::FindHierarchy(pUVar5,local_res10._0_4_);
  if (pFVar6 != (FMovieSceneSequenceHierarchy *)0x0) {
    FVar3 = FMovieSceneObjectBindingID::ResolveSequenceID
                      (param_2,(uint)local_res20,
                       (FMovieSceneSequenceHierarchy *)(ulonglong)MovieSceneSequenceID::Root.Value);
    uVar1 = *(uint *)CONCAT44(extraout_var,FVar3.Value);
    if ((uVar1 != 0) &&
       (*(int *)&(pFVar6->SubSequences).field_0x8 != *(int *)&(pFVar6->SubSequences).field_0x34)) {
      puVar9 = *(undefined1 **)&(pFVar6->SubSequences).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(pFVar6->SubSequences).field_0x38;
      }
      uVar4 = *(uint *)(puVar9 + (ulonglong)
                                 (*(int *)&(pFVar6->SubSequences).field_0x48 - 1U & uVar1) * 4);
      if (uVar4 != 0xffffffff) {
        do {
          puVar7 = (uint *)((longlong)(int)uVar4 * 0x120 + *(longlong *)&pFVar6->SubSequences);
          if (*puVar7 == uVar1) {
            this = (FMovieSceneSubSequenceData *)(puVar7 + 2);
            if (puVar7 == (uint *)0x0) {
              this = (FMovieSceneSubSequenceData *)0x0;
            }
            if ((this != (FMovieSceneSubSequenceData *)0x0) &&
               (pUVar8 = FMovieSceneSubSequenceData::GetSequence(this),
               pUVar8 != (UMovieSceneSequence *)0x0)) {
              param_1 = pUVar8;
            }
            break;
          }
          uVar4 = puVar7[0x46];
        } while (uVar4 != 0xffffffff);
      }
    }
  }
  uVar1 = (param_2->Guid).B;
  uVar4 = (param_2->Guid).C;
  uVar2 = (param_2->Guid).D;
  (__return_storage_ptr__->BindingID).A = (param_2->Guid).A;
  (__return_storage_ptr__->BindingID).B = uVar1;
  (__return_storage_ptr__->BindingID).C = uVar4;
  (__return_storage_ptr__->BindingID).D = uVar2;
  (__return_storage_ptr__->Sequence).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  return __return_storage_ptr__;
}

// SetClockSource @ 14c6a51a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetClockSource
          (UMovieSceneSequence *param_1,EUpdateClockSource param_2)

{
  UMovieScene *this;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetClockSource on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    UMovieScene::SetClockSource(this,param_2);
    return;
  }
  return;
}

// SetDisplayRate @ 14c6a53f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetDisplayRate(UMovieSceneSequence *param_1,FFrameRate param_2)

{
  longlong lVar1;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetDisplayRate on a null sequence",Error,(FName)0x0);
    return;
  }
  lVar1 = (**(code **)(param_1->_padding_ + 0x2f8))();
  if (lVar1 != 0) {
    *(FFrameRate *)(lVar1 + 0x140) = param_2;
  }
  return;
}

// SetEvaluationType @ 14c6a56d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetEvaluationType
          (UMovieSceneSequence *param_1,EMovieSceneEvaluationType param_2)

{
  longlong lVar1;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetEvaluationType on a null sequence",Error,(FName)0x0);
    return;
  }
  lVar1 = (**(code **)(param_1->_padding_ + 0x2f8))();
  if (((lVar1 != 0) &&
      (*(EMovieSceneEvaluationType *)(lVar1 + 0x148) = param_2, param_2 == FrameLocked)) &&
     (*(char *)(lVar1 + 0x149) == '\0')) {
    *(undefined1 *)(lVar1 + 0x149) = 1;
  }
  return;
}

// SetMarkedFrameInSequence @ 14c6a57c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetMarkedFrameInSequence
          (UMovieSceneSequence *param_1,int param_2,FFrameNumber param_3,EMovieSceneTimeUnit param_4
          )

{
  UMovieScene *this;
  FFrameRate local_res8;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    local_res8.Numerator = 0;
    local_res8.Denominator = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call SetMarkedFrame on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    if (param_4 == DisplayRate) {
      local_res8.Denominator = 0;
      local_res8.Numerator = param_3.Value;
      ConvertFrameTime((FFrameTime)&local_res8,local_res8,this->DisplayRate);
      param_3.Value = local_res8.Numerator;
      if (__real_3f000000 <= (float)local_res8.Denominator) {
        param_3.Value = local_res8.Numerator + 1;
      }
    }
    UMovieScene::SetMarkedFrame(this,param_2,param_3);
  }
  return;
}

// SetMarkedFramesLocked @ 14c6a5890

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetMarkedFramesLocked(UMovieSceneSequence *param_1,bool param_2)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetMarkedFramesLocked on a null sequence",Error,(FName)0x0);
    return;
  }
  return;
}

// SetPlaybackEnd @ 14c6a5b20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneSequenceExtensions::SetPlaybackEnd(UMovieSceneSequence *param_1,int param_2)

{
  code *pcVar1;
  FFrameRate FVar2;
  bool bVar3;
  UMovieScene *this;
  longlong lVar4;
  FFrameTime FVar5;
  FFrameRate FVar6;
  undefined1 local_res20 [8];
  TRange<FFrameNumber> local_38;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetPlaybackEnd on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    lVar4 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    if (lVar4 == 0) {
      FVar6.Numerator = 60000;
      FVar6.Denominator = 1;
    }
    else {
      FVar6 = *(FFrameRate *)(lVar4 + 0x140);
    }
    local_38.LowerBound.Type.Value = (this->PlaybackRange).Value.LowerBound.Type.Value;
    local_38.LowerBound._1_3_ = *(undefined3 *)&(this->PlaybackRange).Value.LowerBound.field_0x1;
    local_38.LowerBound.Value.Value = (this->PlaybackRange).Value.LowerBound.Value.Value;
    local_38.UpperBound.Type.Value = (this->PlaybackRange).Value.UpperBound.Type.Value;
    local_38.UpperBound._1_3_ = *(undefined3 *)&(this->PlaybackRange).Value.UpperBound.field_0x1;
    local_38.UpperBound.Value.Value = (this->PlaybackRange).Value.UpperBound.Value.Value;
    (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    FVar2.Denominator = 0;
    FVar2.Numerator = param_2;
    FVar5 = ConvertFrameTime((FFrameTime)local_res20,FVar2,FVar6);
    if ((local_38.UpperBound.Type.Value == '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,0x73,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38.UpperBound.Value.Value = *(int *)FVar5;
    UMovieScene::SetPlaybackRange(this,&local_38,true);
  }
  return;
}

// SetPlaybackEndSeconds @ 14c6a5c50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetPlaybackEndSeconds(UMovieSceneSequence *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UMovieScene *this;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  double dVar8;
  float fVar9;
  TRange<FFrameNumber> local_28 [2];
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetPlaybackEndSeconds on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    local_28[0].LowerBound.Type.Value = (this->PlaybackRange).Value.LowerBound.Type.Value;
    local_28[0].LowerBound._1_3_ = *(undefined3 *)&(this->PlaybackRange).Value.LowerBound.field_0x1;
    local_28[0].LowerBound.Value.Value = (this->PlaybackRange).Value.LowerBound.Value.Value;
    local_28[0].UpperBound.Type.Value = (this->PlaybackRange).Value.UpperBound.Type.Value;
    local_28[0].UpperBound._1_3_ = *(undefined3 *)&(this->PlaybackRange).Value.UpperBound.field_0x1;
    local_28[0].UpperBound.Value.Value = (this->PlaybackRange).Value.UpperBound.Value.Value;
    lVar4 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    if (lVar4 == 0) {
      uVar5 = 0x10000ea60;
    }
    else {
      uVar5 = *(undefined8 *)(lVar4 + 0x138);
    }
    dVar8 = ((double)(int)uVar5 * (double)param_2) / (double)(int)((ulonglong)uVar5 >> 0x20);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar8;
    auVar7 = roundpd(in_XMM2,auVar7,1);
    dVar6 = auVar7._0_8_;
    dVar8 = dVar8 - dVar6;
    if (__real_41dfffffffc00000 <= dVar6) {
      dVar6 = __real_41dfffffffc00000;
    }
    if (dVar6 <= __real_c1e0000000000000) {
      dVar6 = __real_c1e0000000000000;
    }
    iVar3 = (int)dVar8;
    fVar9 = (float)dVar8 - (float)iVar3;
    if ((0.0 < fVar9) && (::FFrameTime::MaxSubframe <= fVar9)) {
      fVar9 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar9) {
      fVar9 = ::FFrameTime::MaxSubframe;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    iVar3 = (int)dVar6 + iVar3;
    if (__real_3f000000 <= fVar9) {
      iVar3 = iVar3 + 1;
    }
    if (local_28[0].UpperBound.Type.Value == '\x02') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,0x73,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28[0].UpperBound.Value.Value = iVar3;
    UMovieScene::SetPlaybackRange(this,local_28,true);
  }
  return;
}

// SetPlaybackRangeLocked @ 14c6a5dc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetPlaybackRangeLocked(UMovieSceneSequence *param_1,bool param_2)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetPlaybackRangeLocked on a null sequence",Error,(FName)0x0);
    return;
  }
  return;
}

// SetPlaybackStart @ 14c6a5df0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetPlaybackStart(UMovieSceneSequence *param_1,int param_2)

{
  code *pcVar1;
  FFrameRate FVar2;
  bool bVar3;
  UMovieScene *this;
  longlong lVar4;
  FFrameTime FVar5;
  FFrameRate FVar6;
  undefined1 local_res20 [8];
  TRange<FFrameNumber> local_38;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetPlaybackStart on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    lVar4 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    if (lVar4 == 0) {
      FVar6.Numerator = 60000;
      FVar6.Denominator = 1;
    }
    else {
      FVar6 = *(FFrameRate *)(lVar4 + 0x140);
    }
    local_38.LowerBound.Type.Value = (this->PlaybackRange).Value.LowerBound.Type.Value;
    local_38.LowerBound._1_3_ = *(undefined3 *)&(this->PlaybackRange).Value.LowerBound.field_0x1;
    local_38.LowerBound.Value.Value = (this->PlaybackRange).Value.LowerBound.Value.Value;
    local_38.UpperBound.Type.Value = (this->PlaybackRange).Value.UpperBound.Type.Value;
    local_38.UpperBound._1_3_ = *(undefined3 *)&(this->PlaybackRange).Value.UpperBound.field_0x1;
    local_38.UpperBound.Value.Value = (this->PlaybackRange).Value.UpperBound.Value.Value;
    (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    FVar2.Denominator = 0;
    FVar2.Numerator = param_2;
    FVar5 = ConvertFrameTime((FFrameTime)local_res20,FVar2,FVar6);
    if ((local_38.LowerBound.Type.Value == '\x02') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,0x73,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38.LowerBound.Value.Value = *(int *)FVar5;
    UMovieScene::SetPlaybackRange(this,&local_38,true);
  }
  return;
}

// SetPlaybackStartSeconds @ 14c6a5f20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetPlaybackStartSeconds(UMovieSceneSequence *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UMovieScene *this;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  double dVar8;
  float fVar9;
  TRange<FFrameNumber> local_28 [2];
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetPlaybackStartSeconds on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    local_28[0].LowerBound.Type.Value = (this->PlaybackRange).Value.LowerBound.Type.Value;
    local_28[0].LowerBound._1_3_ = *(undefined3 *)&(this->PlaybackRange).Value.LowerBound.field_0x1;
    local_28[0].LowerBound.Value.Value = (this->PlaybackRange).Value.LowerBound.Value.Value;
    local_28[0].UpperBound.Type.Value = (this->PlaybackRange).Value.UpperBound.Type.Value;
    local_28[0].UpperBound._1_3_ = *(undefined3 *)&(this->PlaybackRange).Value.UpperBound.field_0x1;
    local_28[0].UpperBound.Value.Value = (this->PlaybackRange).Value.UpperBound.Value.Value;
    lVar4 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    if (lVar4 == 0) {
      uVar5 = 0x10000ea60;
    }
    else {
      uVar5 = *(undefined8 *)(lVar4 + 0x138);
    }
    dVar8 = ((double)(int)uVar5 * (double)param_2) / (double)(int)((ulonglong)uVar5 >> 0x20);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar8;
    auVar7 = roundpd(in_XMM2,auVar7,1);
    dVar6 = auVar7._0_8_;
    dVar8 = dVar8 - dVar6;
    if (__real_41dfffffffc00000 <= dVar6) {
      dVar6 = __real_41dfffffffc00000;
    }
    if (dVar6 <= __real_c1e0000000000000) {
      dVar6 = __real_c1e0000000000000;
    }
    iVar3 = (int)dVar8;
    fVar9 = (float)dVar8 - (float)iVar3;
    if ((0.0 < fVar9) && (::FFrameTime::MaxSubframe <= fVar9)) {
      fVar9 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar9) {
      fVar9 = ::FFrameTime::MaxSubframe;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    iVar3 = (int)dVar6 + iVar3;
    if (__real_3f000000 <= fVar9) {
      iVar3 = iVar3 + 1;
    }
    if (local_28[0].LowerBound.Type.Value == '\x02') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,0x73,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28[0].LowerBound.Value.Value = iVar3;
    UMovieScene::SetPlaybackRange(this,local_28,true);
  }
  return;
}

// SetReadOnly @ 14c6a6420

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneSequenceExtensions::SetReadOnly(UMovieSceneSequence *param_1,bool param_2)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetReadOnly on a null sequence",Error,(FName)0x0);
    return;
  }
  return;
}

// SetTickResolution @ 14c6a6830

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetTickResolution(UMovieSceneSequence *param_1,FFrameRate param_2)

{
  UMovieScene *pUVar1;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetTickResolution on a null sequence",Error,(FName)0x0);
    return;
  }
  pUVar1 = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (pUVar1 != (UMovieScene *)0x0) {
    UE::MovieScene::TimeHelpers::MigrateFrameTimes(pUVar1->TickResolution,param_2,pUVar1,false);
    return;
  }
  return;
}

// SetTickResolutionDirectly @ 14c6a6890

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetTickResolutionDirectly
          (UMovieSceneSequence *param_1,FFrameRate param_2)

{
  UMovieScene *this;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetTickResolutionDirectly on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    UMovieScene::SetTickResolutionDirectly(this,param_2);
    return;
  }
  return;
}

// SetViewRangeEnd @ 14c6a6f50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetViewRangeEnd(UMovieSceneSequence *param_1,double param_2)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetViewRangeEnd on a null sequence",Error,(FName)0x0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c6a6f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x2f8))();
  return;
}

// SetViewRangeStart @ 14c6a6f80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetViewRangeStart(UMovieSceneSequence *param_1,double param_2)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetViewRangeStart on a null sequence",Error,(FName)0x0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c6a6fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x2f8))();
  return;
}

// SetWorkRangeEnd @ 14c6a6fb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetWorkRangeEnd(UMovieSceneSequence *param_1,double param_2)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetWorkRangeEnd on a null sequence",Error,(FName)0x0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c6a6fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x2f8))();
  return;
}

// SetWorkRangeStart @ 14c6a6fe0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::SetWorkRangeStart(UMovieSceneSequence *param_1,double param_2)

{
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetWorkRangeStart on a null sequence",Error,(FName)0x0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014c6a7000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x2f8))();
  return;
}

// SortMarkedFrames @ 14c6a7010

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneSequenceExtensions::SortMarkedFrames(UMovieSceneSequence *param_1)

{
  UMovieScene *this;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SortMarkedFrames on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    UMovieScene::SortMarkedFrames(this);
    return;
  }
  return;
}

// StaticRegisterNativesUMovieSceneSequenceExtensions @ 14c6a73a0

void __cdecl UMovieSceneSequenceExtensions::StaticRegisterNativesUMovieSceneSequenceExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x46;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddMarkedFrame @ 14c6a9540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execAddMarkedFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UMovieScene *this;
  int *piVar3;
  longlong *local_res10;
  undefined8 local_res18;
  int local_58 [2];
  void *local_50;
  undefined8 uStack_48;
  undefined2 local_40;
  FMovieSceneMarkedFrame local_38;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58[0] = 0;
  local_40 = 0;
  local_50 = (void *)0x0;
  uStack_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  piVar3 = local_58;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call AddMarkedFrame on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(*local_res10 + 0x2f8))();
    if (this != (UMovieScene *)0x0) {
      local_38.FrameNumber.Value = *piVar3;
      ::FString::FString(&local_38.Label,(FString *)(piVar3 + 2));
      local_38.bIsDeterminismFence = (bool)(uchar)piVar3[6];
      local_38.bIsInclusiveTime = *(bool *)((longlong)piVar3 + 0x19);
      iVar2 = UMovieScene::AddMarkedFrame(this,&local_38);
      if (local_38.Label.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Label.Data.AllocatorInstance.Data);
      }
      goto LAB_14c6a9643;
    }
  }
  iVar2 = -1;
LAB_14c6a9643:
  *(int *)param_3 = iVar2;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execAddMarkedFrameToSequence @ 14c6a96c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execAddMarkedFrameToSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  int iVar3;
  UMovieScene *this;
  uint *puVar4;
  char local_res10 [8];
  longlong *local_res18;
  FFrameRate local_res20;
  uint local_68 [2];
  void *local_60;
  undefined8 uStack_58;
  undefined2 local_50;
  FMovieSceneMarkedFrame local_48;
  
  local_res18 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_68[0] = 0;
  local_50 = 0;
  local_60 = (void *)0x0;
  uStack_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_res10[0] = '\0';
  puVar4 = local_68;
  if ((uint *)param_2->MostRecentPropertyAddress != (uint *)0x0) {
    puVar4 = (uint *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (longlong *)0x0) {
    local_res20.Numerator = 0;
    local_res20.Denominator = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call AddMarkedFrame on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(*local_res18 + 0x2f8))();
    if (this != (UMovieScene *)0x0) {
      local_48.FrameNumber.Value = *puVar4;
      ::FString::FString(&local_48.Label,(FString *)(puVar4 + 2));
      local_48.bIsDeterminismFence = (bool)(uchar)puVar4[6];
      local_48.bIsInclusiveTime = *(bool *)((longlong)puVar4 + 0x19);
      if (cVar2 == '\0') {
        local_res20.Denominator = 0;
        local_res20.Numerator = local_48.FrameNumber.Value;
        ConvertFrameTime((FFrameTime)&local_res20,local_res20,this->DisplayRate);
        local_48.FrameNumber.Value = local_res20.Numerator;
        if (__real_3f000000 <= (float)local_res20.Denominator) {
          local_48.FrameNumber.Value = local_res20.Numerator + 1;
        }
      }
      iVar3 = UMovieScene::AddMarkedFrame(this,&local_48);
      if (local_48.Label.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Label.Data.AllocatorInstance.Data);
      }
      goto LAB_14c6a97f1;
    }
  }
  iVar3 = -1;
LAB_14c6a97f1:
  *(int *)param_3 = iVar3;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}

// execAddPossessable @ 14c6a98c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execAddPossessable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res10;
  longlong local_res18 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObject *)0x0) {
    local_res18[1] = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call AddPossessable on a null sequence",Error,(FName)0x0);
    local_38 = 0;
    uStack_30 = 0;
    pUVar2 = (UObject *)0x0;
  }
  else if (local_res18[0] == 0) {
    local_res18[1] = 0;
    FFrame::KismetExecutionMessage(L"Cannot call AddPossessable on a null object",Error,(FName)0x0);
    local_38 = 0;
    uStack_30 = 0;
    pUVar2 = (UObject *)0x0;
  }
  else {
    (**(code **)(*(longlong *)local_res10 + 0x348))(local_res10,&local_48);
    local_38 = CONCAT44(uStack_44,local_48);
    uStack_30 = CONCAT44(uStack_3c,uStack_40);
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14c6a9a00;
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
LAB_14c6a9a00:
  *(undefined4 *)param_3 = local_48;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_44;
  *(undefined4 *)((longlong)param_3 + 8) = uStack_40;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_3c;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(UObject **)((longlong)param_3 + 0x10) = pUVar2;
  return;
}

// execAddRootFolderToSequence @ 14c6a9a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execAddRootFolderToSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  longlong local_res10 [2];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  void *local_28;
  undefined8 local_20;
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_20;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = (int)local_20;
  if ((int)local_20 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,&local_38,(int)local_20,&local_2c);
    memcpy(local_38.Data,_Src,lVar2 * 2);
  }
  if (local_res10[0] == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call AddRootFolderToSequence on a null sequence",Error,(FName)0x0);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  *(undefined8 *)param_3 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execAddSpawnableFromClass @ 14c6a9c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execAddSpawnableFromClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  UObject *pUVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong local_res10;
  UObject *local_res18;
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar6 = local_res18;
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UObject *)0x0) {
    pwVar5 = L"Cannot call AddSpawnableFromClass on a null sequence";
  }
  else {
    if (local_res10 != 0) {
      cVar3 = (**(code **)(*(longlong *)local_res18 + 0x308))(local_res18);
      if (cVar3 == '\0') {
        local_58 = 0;
        puVar4 = &local_58;
        uStack_50 = 0;
      }
      else {
        puVar4 = (undefined8 *)(**(code **)(*(longlong *)pUVar6 + 0x350))(pUVar6,&local_48,lVar2);
      }
      uVar7 = *(undefined4 *)puVar4;
      uVar8 = *(undefined4 *)((longlong)puVar4 + 4);
      local_58 = *puVar4;
      uVar9 = *(undefined4 *)(puVar4 + 1);
      uVar10 = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_50 = puVar4[1];
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
        uVar7 = (undefined4)local_58;
        uVar8 = local_58._4_4_;
        uVar9 = (undefined4)uStack_50;
        uVar10 = uStack_50._4_4_;
      }
      goto LAB_14c6a9dc0;
    }
    pwVar5 = L"Cannot call AddSpawnableFromClass on a null class";
  }
  local_res20 = 0;
  FFrame::KismetExecutionMessage(pwVar5,Error,(FName)0x0);
  local_48 = 0;
  uStack_40 = 0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0;
  pUVar6 = (UObject *)0x0;
  uVar7 = (undefined4)local_48;
  uVar8 = local_48._4_4_;
  uVar9 = (undefined4)uStack_40;
  uVar10 = uStack_40._4_4_;
LAB_14c6a9dc0:
  *(undefined4 *)param_3 = uVar7;
  *(undefined4 *)((longlong)param_3 + 4) = uVar8;
  *(undefined4 *)((longlong)param_3 + 8) = uVar9;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(UObject **)((longlong)param_3 + 0x10) = pUVar6;
  return;
}

// execAddSpawnableFromInstance @ 14c6a9df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execAddSpawnableFromInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  UObject *pUVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong local_res10;
  UObject *local_res18;
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar6 = local_res18;
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UObject *)0x0) {
    pwVar5 = L"Cannot call AddSpawnableFromInstance on a null sequence";
  }
  else {
    if (local_res10 != 0) {
      cVar3 = (**(code **)(*(longlong *)local_res18 + 0x308))(local_res18);
      if (cVar3 == '\0') {
        local_58 = 0;
        puVar4 = &local_58;
        uStack_50 = 0;
      }
      else {
        puVar4 = (undefined8 *)(**(code **)(*(longlong *)pUVar6 + 0x350))(pUVar6,&local_48,lVar2);
      }
      uVar7 = *(undefined4 *)puVar4;
      uVar8 = *(undefined4 *)((longlong)puVar4 + 4);
      local_58 = *puVar4;
      uVar9 = *(undefined4 *)(puVar4 + 1);
      uVar10 = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_50 = puVar4[1];
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
        uVar7 = (undefined4)local_58;
        uVar8 = local_58._4_4_;
        uVar9 = (undefined4)uStack_50;
        uVar10 = uStack_50._4_4_;
      }
      goto LAB_14c6a9f20;
    }
    pwVar5 = L"Cannot call AddSpawnableFromInstance on a null object";
  }
  local_res20 = 0;
  FFrame::KismetExecutionMessage(pwVar5,Error,(FName)0x0);
  local_48 = 0;
  uStack_40 = 0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0;
  pUVar6 = (UObject *)0x0;
  uVar7 = (undefined4)local_48;
  uVar8 = local_48._4_4_;
  uVar9 = (undefined4)uStack_40;
  uVar10 = uStack_40._4_4_;
LAB_14c6a9f20:
  *(undefined4 *)param_3 = uVar7;
  *(undefined4 *)((longlong)param_3 + 4) = uVar8;
  *(undefined4 *)((longlong)param_3 + 8) = uVar9;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(UObject **)((longlong)param_3 + 0x10) = pUVar6;
  return;
}

// execAddTrack @ 14c6aa180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execAddTrack(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  bool bVar3;
  UObject *pUVar4;
  UMovieScene *this;
  UClass *pUVar5;
  UMovieSceneTrack *pUVar6;
  UObject *pUVar7;
  UObject *local_res10;
  longlong *local_res18;
  UObject *local_res20;
  
  pUVar7 = (UObject *)0x0;
  local_res18 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  if (local_res18 == (longlong *)0x0) {
    local_res20 = (UObject *)0x0;
    FFrame::KismetExecutionMessage(L"Cannot call AddTrack on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(*local_res18 + 0x2f8))();
    if (this != (UMovieScene *)0x0) {
      if (pUVar4 != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_UMovieSceneTrack_NoRegister();
        if (pUVar5 != (UClass *)0x0) {
          iVar1 = (int)pUVar5->_padding_;
          if ((*(int *)&pUVar4[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar4[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar7 = pUVar4;
          }
        }
      }
      pUVar5 = Z_Construct_UClass_UMovieSceneCameraCutTrack_NoRegister();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_res20 = pUVar4;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          pUVar6 = UMovieScene::AddCameraCutTrack(this,(TSubclassOf<UMovieSceneTrack>)&local_res20);
          *(UMovieSceneTrack **)param_3 = pUVar6;
          return;
        }
      }
      local_res20 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      pUVar6 = UMovieScene::AddTrack(this,(TSubclassOf<UMovieSceneTrack>)&local_res20);
      *(UMovieSceneTrack **)param_3 = pUVar6;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execAreMarkedFramesLocked @ 14c6aa360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execAreMarkedFramesLocked
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call AreMarkedFramesLocked on a null sequence",Error,(FName)0x0);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execDeleteMarkedFrame @ 14c6aa770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execDeleteMarkedFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UMovieScene *this;
  int local_res10 [4];
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call DeleteMarkedFrame on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(*local_res20 + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    UMovieScene::DeleteMarkedFrame(this,iVar2);
  }
  return;
}

// execDeleteMarkedFrames @ 14c6aa870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execDeleteMarkedFrames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieScene *this;
  longlong *local_res10 [2];
  longlong *local_res20;
  
  local_res10[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (longlong *)0x0) {
    local_res20 = local_res10[0];
    FFrame::KismetExecutionMessage
              (L"Cannot call DeleteMarkedFrames on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(*local_res10[0] + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    UMovieScene::DeleteMarkedFrames(this);
  }
  return;
}

// execFindBindingById @ 14c6aac00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execFindBindingById(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieScene *this;
  FMovieSceneBinding *pFVar2;
  UObject *pUVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  UObject *local_res10;
  undefined8 local_res18;
  undefined8 local_58;
  undefined8 uStack_50;
  FGuid local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58 = 0;
  uStack_50 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pUVar3 = local_res10;
  local_48.A = (uint)local_58;
  local_48.B = local_58._4_4_;
  local_48.C = (uint)uStack_50;
  local_48.D = uStack_50._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObject *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call FindBindingById on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(*(longlong *)local_res10 + 0x2f8))(local_res10);
    if (this != (UMovieScene *)0x0) {
      pFVar2 = UMovieScene::FindBinding(this,&local_48);
      if (pFVar2 != (FMovieSceneBinding *)0x0) {
        uVar4 = (pFVar2->ObjectGuid).A;
        uVar5 = (pFVar2->ObjectGuid).B;
        uVar6 = (pFVar2->ObjectGuid).C;
        uVar7 = (pFVar2->ObjectGuid).D;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        goto LAB_14c6aacf8;
      }
    }
  }
  local_38 = 0;
  uStack_30 = 0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  uStack_30._0_4_ = 0;
  uStack_30._4_4_ = 0;
  pUVar3 = (UObject *)0x0;
  uVar4 = (uint)local_38;
  uVar5 = local_38._4_4_;
  uVar6 = (uint)uStack_30;
  uVar7 = uStack_30._4_4_;
LAB_14c6aacf8:
  *(uint *)param_3 = uVar4;
  *(uint *)((longlong)param_3 + 4) = uVar5;
  *(uint *)((longlong)param_3 + 8) = uVar6;
  *(uint *)((longlong)param_3 + 0xc) = uVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(UObject **)((longlong)param_3 + 0x10) = pUVar3;
  return;
}

// execFindBindingByName @ 14c6aad70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execFindBindingByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  int iVar2;
  UMovieScene *this;
  FMovieScenePossessable *pFVar3;
  FMovieSceneSpawnable *pFVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar10;
  UObject *local_res10;
  undefined8 local_res18;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  void *local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  UObject *pUVar9;
  
  pUVar5 = (UObject *)0x0;
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  _Src = local_58;
  local_68.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = (longlong)(int)local_50;
  local_60 = (int)local_50;
  if ((int)local_50 == 0) {
    local_5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,&local_68,(int)local_50,&local_5c);
    memcpy(local_68.Data,_Src,lVar8 * 2);
  }
  pUVar6 = local_res10;
  if (local_res10 == (UObject *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call FindBindingByName on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(*(longlong *)local_res10 + 0x2f8))(local_res10);
    if (this != (UMovieScene *)0x0) {
      iVar2 = UMovieScene::GetPossessableCount(this);
      pUVar9 = pUVar5;
      if (0 < iVar2) {
        do {
          pFVar3 = UMovieScene::GetPossessable(this,(int)pUVar9);
          iVar2 = (pFVar3->Name).Data.ArrayNum;
          if (iVar2 == local_60) {
            if (1 < iVar2) {
              iVar2 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar3->Name).Data.AllocatorInstance.Data,
                                 (wchar_t *)local_68.Data);
              bVar10 = iVar2 == 0;
              goto LAB_14c6aaf52;
            }
LAB_14c6aafa1:
            local_48 = (pFVar3->Guid).A;
            uStack_44 = (pFVar3->Guid).B;
            uStack_40 = (pFVar3->Guid).C;
            uStack_3c = (pFVar3->Guid).D;
            goto LAB_14c6aafa6;
          }
          bVar10 = iVar2 + local_60 == 1;
LAB_14c6aaf52:
          if (bVar10) goto LAB_14c6aafa1;
          uVar7 = (int)pUVar9 + 1;
          pUVar9 = (UObject *)(ulonglong)uVar7;
          iVar2 = UMovieScene::GetPossessableCount(this);
        } while ((int)uVar7 < iVar2);
      }
      iVar2 = UMovieScene::GetSpawnableCount(this);
      pUVar9 = pUVar5;
      if (0 < iVar2) {
        do {
          pFVar4 = UMovieScene::GetSpawnable(this,(int)pUVar9);
          iVar2 = (pFVar4->Name).Data.ArrayNum;
          if (iVar2 == local_60) {
            if (1 < iVar2) {
              iVar2 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar4->Name).Data.AllocatorInstance.Data,
                                 (wchar_t *)local_68.Data);
              bVar10 = iVar2 == 0;
              goto LAB_14c6aafeb;
            }
LAB_14c6ab005:
            local_48 = (pFVar4->Guid).A;
            uStack_44 = (pFVar4->Guid).B;
            uStack_40 = (pFVar4->Guid).C;
            uStack_3c = (pFVar4->Guid).D;
LAB_14c6aafa6:
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar6);
            }
            if (local_68.Data == (FScriptContainerElement *)0x0) goto LAB_14c6aaeae;
            goto LAB_14c6aaea5;
          }
          bVar10 = iVar2 + local_60 == 1;
LAB_14c6aafeb:
          if (bVar10) goto LAB_14c6ab005;
          uVar7 = (int)pUVar9 + 1;
          pUVar9 = (UObject *)(ulonglong)uVar7;
          iVar2 = UMovieScene::GetSpawnableCount(this);
        } while ((int)uVar7 < iVar2);
      }
    }
  }
  uStack_40 = 0;
  uStack_3c = 0;
  local_48 = 0;
  uStack_44 = 0;
  pUVar6 = pUVar5;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
LAB_14c6aaea5:
    FMemory::Free(local_68.Data);
  }
LAB_14c6aaeae:
  *(uint *)param_3 = local_48;
  *(uint *)((longlong)param_3 + 4) = uStack_44;
  *(uint *)((longlong)param_3 + 8) = uStack_40;
  *(uint *)((longlong)param_3 + 0xc) = uStack_3c;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(UObject **)((longlong)param_3 + 0x10) = pUVar6;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execFindMarkedFrameByFrameNumber @ 14c6ab020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execFindMarkedFrameByFrameNumber
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameNumber FVar2;
  int iVar3;
  UMovieScene *this;
  FFrameNumber local_res10 [2];
  longlong *local_res18;
  undefined8 local_res20;
  
  local_res18 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0].Value = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2.Value = local_res10[0].Value;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (longlong *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call FindMarkedFrameByFrameNumber on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(*local_res18 + 0x2f8))();
    if (this != (UMovieScene *)0x0) {
      iVar3 = UMovieScene::FindMarkedFrameByFrameNumber(this,FVar2);
      *(int *)param_3 = iVar3;
      return;
    }
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execFindMarkedFrameByFrameNumberInSequence @ 14c6ab120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execFindMarkedFrameByFrameNumberInSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  int iVar3;
  UMovieScene *this;
  FFrameNumber FVar4;
  char local_res10 [8];
  uint local_res18 [2];
  longlong *local_res20;
  FFrameRate local_28;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar4.Value = local_res18[0];
  cVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    local_28.Numerator = 0;
    local_28.Denominator = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call FindMarkedFrameByFrameNumber on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(*local_res20 + 0x2f8))();
    if (this != (UMovieScene *)0x0) {
      if (cVar2 == '\0') {
        local_28.Denominator = 0;
        local_28.Numerator = FVar4.Value;
        ConvertFrameTime((FFrameTime)&local_28,local_28,this->DisplayRate);
        FVar4.Value = local_28.Numerator;
        if (__real_3f000000 <= (float)local_28.Denominator) {
          FVar4.Value = local_28.Numerator + 1;
        }
      }
      iVar3 = UMovieScene::FindMarkedFrameByFrameNumber(this,FVar4);
      *(int *)param_3 = iVar3;
      return;
    }
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execFindMarkedFrameByLabel @ 14c6ab2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execFindMarkedFrameByLabel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UMovieScene *this;
  longlong *local_res10;
  undefined8 local_res18;
  FString local_18;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call FindMarkedFrameByLabel on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(*local_res10 + 0x2f8))();
    if (this != (UMovieScene *)0x0) {
      iVar2 = UMovieScene::FindMarkedFrameByLabel(this,&local_18);
      goto LAB_14c6ab393;
    }
  }
  iVar2 = -1;
LAB_14c6ab393:
  *(int *)param_3 = iVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execFindNextMarkedFrame @ 14c6ab3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execFindNextMarkedFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameNumber FVar2;
  int iVar3;
  UMovieScene *this;
  bool bVar4;
  int local_res10 [2];
  FFrameNumber local_res18 [2];
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0].Value = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2.Value = local_res18[0].Value;
  bVar4 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call FindNextMarkedFrame on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(*local_res20 + 0x2f8))();
    if (this != (UMovieScene *)0x0) {
      iVar3 = UMovieScene::FindNextMarkedFrame(this,FVar2,bVar4);
      *(int *)param_3 = iVar3;
      return;
    }
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execFindNextMarkedFrameInSequence @ 14c6ab540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execFindNextMarkedFrameInSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  int iVar3;
  UMovieScene *this;
  FFrameNumber FVar4;
  bool bVar5;
  char local_res10 [8];
  int local_res18 [2];
  uint local_res20 [2];
  longlong *local_38;
  FFrameRate local_30;
  
  local_38 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar5 = local_res18[0] != 0;
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar4.Value = local_res20[0];
  cVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_38 == (longlong *)0x0) {
    local_30.Numerator = 0;
    local_30.Denominator = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call FindNextMarkedFrame on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(*local_38 + 0x2f8))();
    if (this != (UMovieScene *)0x0) {
      if (cVar2 == '\0') {
        local_30.Denominator = 0;
        local_30.Numerator = FVar4.Value;
        ConvertFrameTime((FFrameTime)&local_30,local_30,this->DisplayRate);
        FVar4.Value = local_30.Numerator;
        if (__real_3f000000 <= (float)local_30.Denominator) {
          FVar4.Value = local_30.Numerator + 1;
        }
      }
      iVar3 = UMovieScene::FindNextMarkedFrame(this,FVar4,bVar5);
      *(int *)param_3 = iVar3;
      return;
    }
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execFindTracksByExactType @ 14c6ab870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execFindTracksByExactType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UMovieSceneTrack **ppUVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMovieScene *this;
  UClass *pUVar6;
  TArrayView<UMovieSceneTrack_*_const,int> *pTVar7;
  ForAnyElementType FVar8;
  undefined4 uVar9;
  UMovieSceneTrack **ppUVar10;
  undefined4 uVar11;
  UObject *pUVar12;
  UObject *pUVar13;
  UObject *pUVar14;
  UObject *pUVar15;
  UObject *local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined1 local_88 [8];
  UMovieSceneTrack *local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TArrayView<UMovieSceneTrack_*_const,int> local_68;
  UMovieSceneTrack **local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  
  pUVar14 = (UObject *)0x0;
  uVar9 = 0;
  local_res18 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar12 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  FVar8.Data = (FScriptContainerElement *)pUVar14;
  if (local_res18 == (longlong *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call FindTracksByExactType on a null sequence",Error,(FName)0x0);
    uVar9 = 0;
    uVar11 = 0;
    goto LAB_14c6abcd9;
  }
  this = (UMovieScene *)(**(code **)(*local_res18 + 0x2f8))();
  if ((pUVar12 == (UObject *)0x0) ||
     (pUVar6 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_14c6ab9c0:
    pUVar15 = pUVar14;
  }
  else {
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)&pUVar12[1].field_0x10 < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar12[1].field_0x8 + (longlong)iVar5 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pUVar15 = pUVar12;
    if (!bVar4) goto LAB_14c6ab9c0;
  }
  uVar11 = uVar9;
  if ((this == (UMovieScene *)0x0) || (pUVar15 == (UObject *)0x0)) goto LAB_14c6abcd9;
  if ((pUVar12 == (UObject *)0x0) ||
     (pUVar6 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_14c6aba08:
    pUVar12 = pUVar14;
  }
  else {
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)&pUVar12[1].field_0x10 < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar12[1].field_0x8 + (longlong)iVar5 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14c6aba08;
  }
  pTVar7 = TArrayView<UMovieSceneTrack_*_const,int>::
           TArrayView<UMovieSceneTrack_*_const,int><TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_>
                     (&local_68,
                      (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)&this->Tracks);
  ppUVar10 = pTVar7->DataPtr;
  uStack_50 = *(undefined8 *)&pTVar7->ArrayNum;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  ppUVar1 = ppUVar10 + (int)uStack_50;
  local_58 = ppUVar10;
  if (ppUVar10 != ppUVar1) {
    pUVar13 = pUVar14;
    if (pUVar12 == (UObject *)0x0) {
      do {
        local_88 = (undefined1  [8])*ppUVar10;
        if (((UMovieSceneTrack *)local_88)->_padding_ == 0) {
          iVar5 = (int)pUVar13;
          if ((FVar8.Data <= (UObject *)local_88) &&
             (local_88 <
              (UMovieSceneTrack **)
              ((longlong)&((UObject *)FVar8.Data)->field_0x0 + (longlong)local_70._4_4_ * 8))) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar8.Data = local_78.Data;
            iVar5 = (int)local_70;
          }
          if (iVar5 == local_70._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_78,(int *)((longlong)&local_70 + 4));
            FVar8.Data = local_78.Data;
          }
          local_70._0_4_ = iVar5 + 1U;
          *(undefined1 (*) [8])((longlong)&((UObject *)FVar8.Data)->field_0x0 + (longlong)iVar5 * 8)
               = local_88;
          pUVar13 = (UObject *)(ulonglong)(iVar5 + 1U);
          FVar8.Data = local_78.Data;
        }
        ppUVar10 = ppUVar10 + 1;
      } while (ppUVar10 != ppUVar1);
    }
    else {
      do {
        local_88 = (undefined1  [8])*ppUVar10;
        if ((UObject *)((UMovieSceneTrack *)local_88)->_padding_ == pUVar12) {
          iVar5 = (int)pUVar13;
          if ((FVar8.Data <= (UObject *)local_88) &&
             (local_88 <
              (UMovieSceneTrack **)
              ((longlong)&((UObject *)FVar8.Data)->field_0x0 + (longlong)local_70._4_4_ * 8))) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar8.Data = local_78.Data;
            iVar5 = (int)local_70;
          }
          if (iVar5 == local_70._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_78,(int *)((longlong)&local_70 + 4));
            FVar8.Data = local_78.Data;
          }
          local_70._0_4_ = iVar5 + 1U;
          *(undefined1 (*) [8])((longlong)&((UObject *)FVar8.Data)->field_0x0 + (longlong)iVar5 * 8)
               = local_88;
          pUVar13 = (UObject *)(ulonglong)(iVar5 + 1U);
          FVar8.Data = local_78.Data;
        }
        ppUVar10 = ppUVar10 + 1;
      } while (ppUVar10 != ppUVar1);
    }
  }
  local_80 = UMovieScene::GetCameraCutTrack(this);
  if ((local_80 != (UMovieSceneTrack *)0x0) && ((UObject *)local_80->_padding_ == pUVar15)) {
    if ((local_78.Data <= (UObject *)&local_80) &&
       (((FScriptContainerElement *)&local_80 < local_78.Data + (longlong)local_70._4_4_ * 8 &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (int)local_70;
    if ((int)local_70 == local_70._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_78,(int *)((longlong)&local_70 + 4));
    }
    local_70._0_4_ = iVar5 + 1;
    *(UMovieSceneTrack **)(local_78.Data + (longlong)iVar5 * 8) = local_80;
  }
  FVar8.Data = local_78.Data;
  uVar9 = (int)local_70;
  uVar11 = local_70._4_4_;
LAB_14c6abcd9:
  if (param_3 != local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar8.Data;
    *(undefined4 *)((longlong)param_3 + 8) = uVar9;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar11;
    FVar8.Data = (FScriptContainerElement *)pUVar14;
  }
  if ((UObject *)FVar8.Data != (UObject *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return;
}

// execFindTracksByType @ 14c6abe90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execFindTracksByType(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMovieSceneTrack **ppUVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieScene *this;
  UClass *pUVar7;
  TArrayView<UMovieSceneTrack_*_const,int> *pTVar8;
  ForAnyElementType FVar9;
  undefined4 uVar10;
  UMovieSceneTrack **ppUVar11;
  undefined4 uVar12;
  UObject *pUVar13;
  UObject *pUVar14;
  UObject *pUVar15;
  UObject *pUVar16;
  UObject *local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined1 local_88 [8];
  UMovieSceneTrack *local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TArrayView<UMovieSceneTrack_*_const,int> local_68;
  UMovieSceneTrack **local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  
  pUVar15 = (UObject *)0x0;
  uVar10 = 0;
  local_res18 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar13 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  FVar9.Data = (FScriptContainerElement *)pUVar15;
  if (local_res18 == (longlong *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call FindTracksByType on a null sequence",Error,(FName)0x0);
    uVar10 = 0;
    uVar12 = 0;
    goto LAB_14c6ac332;
  }
  this = (UMovieScene *)(**(code **)(*local_res18 + 0x2f8))();
  if ((pUVar13 == (UObject *)0x0) ||
     (pUVar7 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_14c6abfe0:
    pUVar16 = pUVar15;
  }
  else {
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)&pUVar13[1].field_0x10 < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar13[1].field_0x8 + (longlong)iVar6 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pUVar16 = pUVar13;
    if (!bVar5) goto LAB_14c6abfe0;
  }
  uVar12 = uVar10;
  if ((this == (UMovieScene *)0x0) || (pUVar16 == (UObject *)0x0)) goto LAB_14c6ac332;
  if ((pUVar13 == (UObject *)0x0) ||
     (pUVar7 = Z_Construct_UClass_UMovieSceneTrack_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_14c6ac028:
    pUVar13 = pUVar15;
  }
  else {
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)&pUVar13[1].field_0x10 < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar13[1].field_0x8 + (longlong)iVar6 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14c6ac028;
  }
  pTVar8 = TArrayView<UMovieSceneTrack_*_const,int>::
           TArrayView<UMovieSceneTrack_*_const,int><TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>_>
                     (&local_68,
                      (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *)&this->Tracks);
  ppUVar11 = pTVar8->DataPtr;
  uStack_50 = *(undefined8 *)&pTVar8->ArrayNum;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  ppUVar1 = ppUVar11 + (int)uStack_50;
  local_58 = ppUVar11;
  if (ppUVar11 != ppUVar1) {
    pUVar14 = pUVar15;
    if (pUVar13 == (UObject *)0x0) {
      do {
        local_88 = (undefined1  [8])*ppUVar11;
        if (((UMovieSceneTrack *)local_88)->_padding_ == 0) {
          iVar6 = (int)pUVar14;
          if ((FVar9.Data <= (UObject *)local_88) &&
             (local_88 <
              (UMovieSceneTrack **)
              ((longlong)&((UObject *)FVar9.Data)->field_0x0 + (longlong)local_70._4_4_ * 8))) {
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
            FVar9.Data = local_78.Data;
            iVar6 = (int)local_70;
          }
          if (iVar6 == local_70._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_78,(int *)((longlong)&local_70 + 4));
            FVar9.Data = local_78.Data;
          }
          local_70._0_4_ = iVar6 + 1U;
          *(undefined1 (*) [8])((longlong)&((UObject *)FVar9.Data)->field_0x0 + (longlong)iVar6 * 8)
               = local_88;
          pUVar14 = (UObject *)(ulonglong)(iVar6 + 1U);
          FVar9.Data = local_78.Data;
        }
        ppUVar11 = ppUVar11 + 1;
      } while (ppUVar11 != ppUVar1);
    }
    else {
      do {
        local_88 = (undefined1  [8])*ppUVar11;
        pUVar3 = (UObject *)((UMovieSceneTrack *)local_88)->_padding_;
        if ((pUVar3 == pUVar13) ||
           ((*(int *)&pUVar13[1].field_0x10 <= *(int *)&pUVar3[1].field_0x10 &&
            (*(undefined1 **)
              (*(longlong *)&pUVar3[1].field_0x8 + (longlong)*(int *)&pUVar13[1].field_0x10 * 8) ==
             &pUVar13[1].field_0x8)))) {
          iVar6 = (int)pUVar14;
          if ((FVar9.Data <= (UObject *)local_88) &&
             (local_88 <
              (UMovieSceneTrack **)
              ((longlong)&((UObject *)FVar9.Data)->field_0x0 + (longlong)local_70._4_4_ * 8))) {
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
            FVar9.Data = local_78.Data;
            iVar6 = (int)local_70;
          }
          if (iVar6 == local_70._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_78,(int *)((longlong)&local_70 + 4));
            FVar9.Data = local_78.Data;
          }
          local_70._0_4_ = iVar6 + 1U;
          *(undefined1 (*) [8])((longlong)&((UObject *)FVar9.Data)->field_0x0 + (longlong)iVar6 * 8)
               = local_88;
          pUVar14 = (UObject *)(ulonglong)(iVar6 + 1U);
          FVar9.Data = local_78.Data;
        }
        ppUVar11 = ppUVar11 + 1;
      } while (ppUVar11 != ppUVar1);
    }
  }
  local_80 = UMovieScene::GetCameraCutTrack(this);
  if (local_80 != (UMovieSceneTrack *)0x0) {
    if ((*(int *)&pUVar16[1].field_0x10 <= *(int *)(local_80->_padding_ + 0x38)) &&
       (*(undefined1 **)
         (*(longlong *)(local_80->_padding_ + 0x30) + (longlong)*(int *)&pUVar16[1].field_0x10 * 8)
        == &pUVar16[1].field_0x8)) {
      if ((local_78.Data <= (UObject *)&local_80) &&
         (((FScriptContainerElement *)&local_80 < local_78.Data + (longlong)local_70._4_4_ * 8 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (int)local_70;
      if ((int)local_70 == local_70._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_78,(int *)((longlong)&local_70 + 4));
      }
      local_70._0_4_ = iVar6 + 1;
      *(UMovieSceneTrack **)(local_78.Data + (longlong)iVar6 * 8) = local_80;
    }
  }
  FVar9.Data = local_78.Data;
  uVar10 = (int)local_70;
  uVar12 = local_70._4_4_;
LAB_14c6ac332:
  if (param_3 != local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar9.Data;
    *(undefined4 *)((longlong)param_3 + 8) = uVar10;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar12;
    FVar9.Data = (FScriptContainerElement *)pUVar15;
  }
  if ((UObject *)FVar9.Data != (UObject *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  return;
}

// execGetBindingID @ 14c6ad080

void __cdecl
UMovieSceneSequenceExtensions::execGetBindingID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  uchar *puVar3;
  undefined8 local_res10;
  uchar local_28 [32];
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  local_28[0x14] = '\0';
  local_28[0x15] = '\0';
  local_28[0x16] = '\0';
  local_28[0x17] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar3 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)param_3 = *(undefined8 *)puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  return;
}

// execGetBindings @ 14c6ad180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetBindings(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  UObject *pUVar4;
  int iVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 local_res10;
  UObject *local_res18 [2];
  ForAnyElementType local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  
  local_res18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pUVar4 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] == (UObject *)0x0) {
    local_res10 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call GetBindings on a null sequence",Error,(FName)0x0);
    FVar7.Data = (FScriptContainerElement *)0x0;
    uVar8 = 0;
    uVar10 = 0;
  }
  else {
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    lVar6 = (**(code **)(*(longlong *)local_res18[0] + 0x2f8))(local_res18[0]);
    if (lVar6 != 0) {
      lVar9 = *(longlong *)(lVar6 + 0x98);
      iVar1 = *(int *)(lVar6 + 0xa0);
      puVar11 = (undefined8 *)(lVar9 + 0x10);
      lVar12 = (longlong)iVar1 * 0x40 + lVar9;
      while( true ) {
        if (*(int *)(lVar6 + 0xa0) != iVar1) {
          `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
        }
        if (lVar9 == lVar12) break;
        iVar5 = (int)local_50;
        if ((int)local_50 == local_50._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_58,(int *)((longlong)&local_50 + 4));
        }
        local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
        uVar3 = puVar11[1];
        *(undefined8 *)(local_58.Data + (longlong)iVar5 * 0x18) = *puVar11;
        *(undefined8 *)(local_58.Data + (longlong)iVar5 * 0x18 + 8) = uVar3;
        *(UObject **)(local_58.Data + (longlong)iVar5 * 0x18 + 0x10) = pUVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        lVar9 = lVar9 + 0x40;
        puVar11 = puVar11 + 8;
      }
    }
    FVar7.Data = local_58.Data;
    uVar8 = (int)local_50;
    uVar10 = local_50._4_4_;
  }
  if (param_3 != local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar7.Data;
    *(undefined4 *)((longlong)param_3 + 8) = uVar8;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar10;
    FVar7.Data = (FScriptContainerElement *)0x0;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return;
}

// execGetClockSource @ 14c6adda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetClockSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong *local_res10;
  longlong *local_res18;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = local_res10;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetClockSource on a null sequence",Error,(FName)0x0);
  }
  else {
    lVar2 = (**(code **)(*local_res10 + 0x2f8))();
    if (lVar2 != 0) {
      *(undefined1 *)param_3 = *(undefined1 *)(lVar2 + 0x149);
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetCustomClock @ 14c6adf00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetCustomClock(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  UObject *pUVar3;
  longlong *local_res10;
  undefined8 local_res18;
  
  pUVar3 = (UObject *)0x0;
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetCustomClock on a null sequence",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
    return;
  }
  lVar2 = (**(code **)(*local_res10 + 0x2f8))();
  if ((((lVar2 != 0) && (*(char *)(lVar2 + 0x149) == '\x06')) &&
      (pUVar3 = *(UObject **)(lVar2 + 0x110), UE::GC::GIsIncrementalReachabilityPending != false))
     && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(UObject **)param_3 = pUVar3;
  return;
}

// execGetDisplayRate @ 14c6ae520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetDisplayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong *local_res10;
  longlong *local_res18;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = local_res10;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetDisplayRate on a null sequence",Error,(FName)0x0);
  }
  else {
    lVar2 = (**(code **)(*local_res10 + 0x2f8))();
    if (lVar2 != 0) {
      *(undefined8 *)param_3 = *(undefined8 *)(lVar2 + 0x140);
      return;
    }
  }
  *(undefined8 *)param_3 = 0x10000ea60;
  return;
}

// execGetEvaluationType @ 14c6ae9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetEvaluationType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong *local_res10;
  longlong *local_res18;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = local_res10;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetEvaluationType on a null sequence",Error,(FName)0x0);
  }
  else {
    lVar2 = (**(code **)(*local_res10 + 0x2f8))();
    if (lVar2 != 0) {
      *(undefined1 *)param_3 = *(undefined1 *)(lVar2 + 0x148);
      return;
    }
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execGetMarkedFrames @ 14c6af190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetMarkedFrames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMovieSceneMarkedFrame *pFVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *local_res10;
  undefined8 local_res18;
  ForAnyElementType local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  ForAnyElementType FVar6;
  
  FVar6.Data = (FScriptContainerElement *)0x0;
  iVar4 = 0;
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar5 = 0;
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetMarkedFrames on a null sequence",Error,(FName)0x0);
  }
  else {
    lVar3 = (**(code **)(*local_res10 + 0x2f8))();
    if (lVar3 != 0) {
      iVar4 = *(int *)(lVar3 + 0x158);
      pFVar2 = *(FMovieSceneMarkedFrame **)(lVar3 + 0x150);
      local_48.Data = (FScriptContainerElement *)0x0;
      uVar5 = 0;
      if (iVar4 != 0) {
        local_40._0_4_ = iVar4;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar4,0,&local_48,iVar4,(int *)((longlong)&local_40 + 4));
        ConstructItems<FMovieSceneMarkedFrame,FMovieSceneMarkedFrame,int>
                  (local_48.Data,pFVar2,iVar4);
        FVar6.Data = local_48.Data;
        uVar5 = local_40._4_4_;
        iVar4 = (int)local_40;
      }
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      DestructItems<FMovieSceneMarkedFrame,int>((FMovieSceneMarkedFrame *)0x0,0);
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
    }
  }
  if (param_3 == local_38) {
    DestructItems<FMovieSceneMarkedFrame,int>((FMovieSceneMarkedFrame *)FVar6.Data,iVar4);
    if ((FMovieSceneMarkedFrame *)FVar6.Data != (FMovieSceneMarkedFrame *)0x0) {
      FMemory::Free(FVar6.Data);
    }
  }
  else {
    DestructItems<FMovieSceneMarkedFrame,int>
              (*(FMovieSceneMarkedFrame **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar6.Data;
    *(int *)((longlong)param_3 + 8) = iVar4;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar5;
    DestructItems<FMovieSceneMarkedFrame,int>((FMovieSceneMarkedFrame *)0x0,0);
  }
  return;
}

// execGetMarkedFramesFromSequence @ 14c6af360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetMarkedFramesFromSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  FFrameRate FVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  undefined4 uVar11;
  FMovieSceneMarkedFrame *pFVar12;
  FMovieSceneMarkedFrame *pFVar13;
  char local_res10 [8];
  undefined8 local_res18;
  longlong *local_res20;
  int local_78;
  float local_74;
  uint local_70;
  undefined4 uStack_6c;
  ForAnyElementType local_68;
  undefined8 local_60;
  undefined1 local_58 [32];
  
  pFVar12 = (FMovieSceneMarkedFrame *)0x0;
  iVar8 = 0;
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar11 = 0;
  FVar10.Data = (FScriptContainerElement *)pFVar12;
  if (local_res20 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetMarkedFrames on a null sequence",Error,(FName)0x0);
  }
  else {
    lVar7 = (**(code **)(*local_res20 + 0x2f8))();
    if (lVar7 != 0) {
      iVar8 = *(int *)(lVar7 + 0x158);
      pFVar13 = *(FMovieSceneMarkedFrame **)(lVar7 + 0x150);
      local_68.Data = (FScriptContainerElement *)0x0;
      local_60 = CONCAT44(local_60._4_4_,iVar8);
      if (iVar8 == 0) {
        local_60 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar8,0,&local_68,iVar8,(int *)((longlong)&local_60 + 4));
        ConstructItems<FMovieSceneMarkedFrame,FMovieSceneMarkedFrame,int>
                  (local_68.Data,pFVar13,iVar8);
      }
      fVar4 = __real_3f000000;
      FVar10.Data = local_68.Data;
      if (cVar5 == '\0') {
        iVar8 = (int)local_60;
        FVar2 = *(FFrameRate *)(lVar7 + 0x138);
        pFVar13 = (FMovieSceneMarkedFrame *)(local_68.Data + (longlong)(int)local_60 * 0x20);
        FVar9.Data = local_68.Data;
        while( true ) {
          if ((int)local_60 != iVar8) {
            `TCheckedPointerIterator<FMovieSceneMarkedFrame,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_res18);
          }
          FVar10.Data = local_68.Data;
          if ((FMovieSceneMarkedFrame *)FVar9.Data == pFVar13) break;
          local_70 = (((FMovieSceneMarkedFrame *)FVar9.Data)->FrameNumber).Value;
          uStack_6c = 0;
          FVar3.Denominator = 0;
          FVar3.Numerator = local_70;
          ConvertFrameTime((FFrameTime)&local_78,FVar3,FVar2);
          iVar6 = local_78;
          if (fVar4 <= local_74) {
            iVar6 = local_78 + 1;
          }
          (((FMovieSceneMarkedFrame *)FVar9.Data)->FrameNumber).Value = iVar6;
          FVar9.Data = FVar9.Data + 0x20;
        }
      }
      iVar8 = (int)local_60;
      uVar11 = local_60._4_4_;
      local_60 = 0;
      local_68.Data = (FScriptContainerElement *)0x0;
      DestructItems<FMovieSceneMarkedFrame,int>((FMovieSceneMarkedFrame *)0x0,0);
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
    }
  }
  if (param_3 != local_58) {
    DestructItems<FMovieSceneMarkedFrame,int>
              (*(FMovieSceneMarkedFrame **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar10.Data;
    *(int *)((longlong)param_3 + 8) = iVar8;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar11;
    FVar10.Data = (FScriptContainerElement *)pFVar12;
    iVar8 = 0;
  }
  DestructItems<FMovieSceneMarkedFrame,int>((FMovieSceneMarkedFrame *)FVar10.Data,iVar8);
  if ((FMovieSceneMarkedFrame *)FVar10.Data != (FMovieSceneMarkedFrame *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  return;
}

// execGetMovieScene @ 14c6af910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetMovieScene(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  longlong *local_res10;
  undefined8 local_res18;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call GetMovieScene on a null sequence",Error,(FName)0x0)
    ;
    *(undefined8 *)param_3 = 0;
    return;
  }
  uVar2 = (**(code **)(*local_res10 + 0x2f8))();
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execGetPlaybackEnd @ 14c6b0240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetPlaybackEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  FFrameRate FVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  FFrameTime FVar10;
  char cVar11;
  FFrameRate FVar12;
  longlong lVar13;
  longlong *local_res10;
  undefined8 local_res18;
  uint local_res20;
  undefined4 uStackX_24;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  lVar13 = 0;
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  plVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetPlaybackEnd on a null sequence",Error,(FName)0x0);
    *(undefined4 *)param_3 = 0xffffffff;
    return;
  }
  lVar8 = (**(code **)(*local_res10 + 0x2f8))(local_res10);
  if (lVar8 == 0) {
    *(undefined4 *)param_3 = 0xffffffff;
    return;
  }
  (**(code **)(*plVar6 + 0x2f8))(plVar6);
  FVar12.Numerator = 60000;
  FVar12.Denominator = 1;
  lVar9 = (**(code **)(*plVar6 + 0x2f8))(plVar6);
  if (lVar9 != 0) {
    FVar12 = *(FFrameRate *)(lVar9 + 0x138);
  }
  local_50 = *(undefined4 *)(lVar8 + 0x128);
  uStack_4c = *(undefined4 *)(lVar8 + 300);
  uStack_48 = *(undefined4 *)(lVar8 + 0x130);
  iVar4 = *(int *)(lVar8 + 0x134);
  cVar11 = (char)uStack_48;
  iStack_44 = iVar4;
  if ((cVar11 == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InUpperBound.IsOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                         ,0x44,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cVar11 == '\x01') {
    lVar13 = 4;
  }
  iVar1 = *(int *)((longlong)
                   &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                    ::__l2::Offsets + lVar13);
  if ((cVar11 == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStackX_24 = 0;
  local_res20 = iVar4 + iVar1;
  FVar5.Denominator = 0;
  FVar5.Numerator = local_res20;
  FVar10 = ConvertFrameTime((FFrameTime)local_58,FVar5,FVar12);
  *(undefined4 *)param_3 = *(undefined4 *)FVar10;
  return;
}

// execGetPlaybackEndSeconds @ 14c6b0460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetPlaybackEndSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  FFrameRate FVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  FFrameTime FVar10;
  char cVar11;
  FFrameRate FVar12;
  longlong lVar13;
  float fVar14;
  longlong *local_res10;
  undefined8 local_res18;
  uint local_res20;
  undefined4 uStackX_24;
  undefined8 local_68;
  float fStack_5c;
  undefined1 local_50 [24];
  
  lVar13 = 0;
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  plVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetPlaybackEndSeconds on a null sequence",Error,(FName)0x0);
    *(float *)param_3 = __real_bf800000;
    return;
  }
  lVar8 = (**(code **)(*local_res10 + 0x2f8))(local_res10);
  fVar14 = __real_bf800000;
  if (lVar8 != 0) {
    lVar9 = (**(code **)(*plVar6 + 0x2f8))(plVar6);
    FVar12.Numerator = 60000;
    FVar12.Denominator = 1;
    if (lVar9 == 0) {
      local_68 = 0x10000ea60;
    }
    else {
      local_68 = *(undefined8 *)(lVar9 + 0x140);
    }
    lVar9 = (**(code **)(*plVar6 + 0x2f8))(plVar6);
    if (lVar9 != 0) {
      FVar12 = *(FFrameRate *)(lVar9 + 0x138);
    }
    iVar4 = *(int *)(lVar8 + 0x134);
    cVar11 = (char)*(undefined4 *)(lVar8 + 0x130);
    if ((cVar11 == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InUpperBound.IsOpen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                           ,0x44,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (cVar11 == '\x01') {
      lVar13 = 4;
    }
    iVar1 = *(int *)((longlong)
                     &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                      ::__l2::Offsets + lVar13);
    if ((cVar11 == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStackX_24 = 0;
    local_res20 = iVar4 + iVar1;
    FVar5.Denominator = 0;
    FVar5.Numerator = local_res20;
    FVar10 = ConvertFrameTime((FFrameTime)local_50,FVar5,FVar12);
    fStack_5c = (float)((ulonglong)*(undefined8 *)FVar10 >> 0x20);
    fVar14 = ((float)local_68._4_4_ * fStack_5c +
             (float)((longlong)local_68._4_4_ * (longlong)(int)*(undefined8 *)FVar10)) /
             (float)(int)local_68;
  }
  *(float *)param_3 = fVar14;
  return;
}

// execGetPlaybackRange @ 14c6b06d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetPlaybackRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  longlong *local_res10;
  undefined8 local_res18;
  TRange<FFrameNumber> local_48;
  FSequencerScriptingRange local_38;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  plVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetPlaybackRange on a null sequence",Error,(FName)0x0);
    local_38.bHasEnd = '\0';
    local_38.bHasStart = '\0';
    local_38.InclusiveStart = (int)___xmm_000000010000ea600000000000000000;
    local_38.ExclusiveEnd = (int)((ulonglong)___xmm_000000010000ea600000000000000000 >> 0x20);
    local_38.InternalRate.Numerator = (int)_UNK_1528a8c88;
    local_38.InternalRate.Denominator = (int)((ulonglong)_UNK_1528a8c88 >> 0x20);
  }
  else {
    lVar3 = (**(code **)(*local_res10 + 0x2f8))(local_res10);
    if (lVar3 == 0) {
      local_38.bHasEnd = '\0';
      local_38.bHasStart = '\0';
      local_38.InclusiveStart = (int)___xmm_000000010000ea600000000000000000;
      local_38.ExclusiveEnd = (int)((ulonglong)___xmm_000000010000ea600000000000000000 >> 0x20);
      local_38.InternalRate.Numerator = (int)_UNK_1528a8c88;
      local_38.InternalRate.Denominator = (int)((ulonglong)_UNK_1528a8c88 >> 0x20);
    }
    else {
      lVar4 = (**(code **)(*plVar2 + 0x2f8))(plVar2);
      FVar6.Numerator = 60000;
      FVar6.Denominator = 1;
      if (lVar4 == 0) {
        FVar5.Numerator = 60000;
        FVar5.Denominator = 1;
      }
      else {
        FVar5 = *(FFrameRate *)(lVar4 + 0x140);
      }
      lVar4 = (**(code **)(*plVar2 + 0x2f8))(plVar2);
      if (lVar4 != 0) {
        FVar6 = *(FFrameRate *)(lVar4 + 0x138);
      }
      local_48.LowerBound = *(TRangeBound<FFrameNumber> *)(lVar3 + 0x128);
      local_48.UpperBound = *(TRangeBound<FFrameNumber> *)(lVar3 + 0x130);
      FSequencerScriptingRange::FromNative(&local_38,&local_48,FVar6,FVar5);
    }
  }
  *(ulonglong *)param_3 = CONCAT44(local_38.InclusiveStart,local_38._0_4_);
  *(ulonglong *)((longlong)param_3 + 8) =
       CONCAT44(local_38.InternalRate.Numerator,local_38.ExclusiveEnd);
  *(int *)((longlong)param_3 + 0x10) = local_38.InternalRate.Denominator;
  return;
}

// execGetPlaybackStart @ 14c6b0840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetPlaybackStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  FFrameRate FVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  FFrameTime FVar10;
  char cVar11;
  FFrameRate FVar12;
  longlong lVar13;
  longlong *local_res10;
  undefined8 local_res18;
  uint local_res20;
  undefined4 uStackX_24;
  undefined1 local_58 [8];
  undefined4 local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar13 = 0;
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  plVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetPlaybackStart on a null sequence",Error,(FName)0x0);
    *(undefined4 *)param_3 = 0xffffffff;
    return;
  }
  lVar8 = (**(code **)(*local_res10 + 0x2f8))(local_res10);
  if (lVar8 == 0) {
    *(undefined4 *)param_3 = 0xffffffff;
    return;
  }
  (**(code **)(*plVar6 + 0x2f8))(plVar6);
  FVar12.Numerator = 60000;
  FVar12.Denominator = 1;
  lVar9 = (**(code **)(*plVar6 + 0x2f8))(plVar6);
  if (lVar9 != 0) {
    FVar12 = *(FFrameRate *)(lVar9 + 0x138);
  }
  local_50 = *(undefined4 *)(lVar8 + 0x128);
  iVar4 = *(int *)(lVar8 + 300);
  uStack_48 = *(undefined4 *)(lVar8 + 0x130);
  uStack_44 = *(undefined4 *)(lVar8 + 0x134);
  cVar11 = (char)local_50;
  iStack_4c = iVar4;
  if ((cVar11 == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InLowerBound.IsOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                         ,0x2c,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cVar11 == '\0') {
    lVar13 = 4;
  }
  iVar1 = *(int *)((longlong)
                   &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                    ::__l2::Offsets + lVar13);
  if ((cVar11 == '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStackX_24 = 0;
  local_res20 = iVar4 + iVar1;
  FVar5.Denominator = 0;
  FVar5.Numerator = local_res20;
  FVar10 = ConvertFrameTime((FFrameTime)local_58,FVar5,FVar12);
  *(undefined4 *)param_3 = *(undefined4 *)FVar10;
  return;
}

// execGetPlaybackStartSeconds @ 14c6b0a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetPlaybackStartSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  FFrameRate FVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  FFrameTime FVar10;
  char cVar11;
  FFrameRate FVar12;
  longlong lVar13;
  float fVar14;
  longlong *local_res10;
  undefined8 local_res18;
  uint local_res20;
  undefined4 uStackX_24;
  undefined8 local_68;
  float fStack_5c;
  undefined1 local_50 [24];
  
  lVar13 = 0;
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  plVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetPlaybackStartSeconds on a null sequence",Error,(FName)0x0);
    *(float *)param_3 = __real_bf800000;
    return;
  }
  lVar8 = (**(code **)(*local_res10 + 0x2f8))(local_res10);
  fVar14 = __real_bf800000;
  if (lVar8 != 0) {
    lVar9 = (**(code **)(*plVar6 + 0x2f8))(plVar6);
    FVar12.Numerator = 60000;
    FVar12.Denominator = 1;
    if (lVar9 == 0) {
      local_68 = 0x10000ea60;
    }
    else {
      local_68 = *(undefined8 *)(lVar9 + 0x140);
    }
    lVar9 = (**(code **)(*plVar6 + 0x2f8))(plVar6);
    if (lVar9 != 0) {
      FVar12 = *(FFrameRate *)(lVar9 + 0x138);
    }
    iVar4 = *(int *)(lVar8 + 300);
    cVar11 = (char)*(undefined4 *)(lVar8 + 0x128);
    if ((cVar11 == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InLowerBound.IsOpen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                           ,0x2c,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (cVar11 == '\0') {
      lVar13 = 4;
    }
    iVar1 = *(int *)((longlong)
                     &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                      ::__l2::Offsets + lVar13);
    if ((cVar11 == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStackX_24 = 0;
    local_res20 = iVar4 + iVar1;
    FVar5.Denominator = 0;
    FVar5.Numerator = local_res20;
    FVar10 = ConvertFrameTime((FFrameTime)local_50,FVar5,FVar12);
    fStack_5c = (float)((ulonglong)*(undefined8 *)FVar10 >> 0x20);
    fVar14 = ((float)local_68._4_4_ * fStack_5c +
             (float)((longlong)local_68._4_4_ * (longlong)(int)*(undefined8 *)FVar10)) /
             (float)(int)local_68;
  }
  *(float *)param_3 = fVar14;
  return;
}

// execGetPortableBindingID @ 14c6b0cd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetPortableBindingID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FProperty *pFVar5;
  code *pcVar6;
  UMovieSceneSequence *pUVar7;
  ForElementType<unsigned_int> FVar8;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *pTVar9;
  bool bVar10;
  UMovieSceneCompiledDataManager *this;
  FMovieSceneSequenceHierarchy *pFVar11;
  UMovieSceneSequence *pUVar12;
  FRelativeObjectBindingID *pFVar13;
  longlong lVar14;
  int iVar15;
  FMovieSceneSequenceID *pFVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  ForElementType<unsigned_int> FVar19;
  uint *puVar20;
  FGuid *pFVar21;
  bool bVar22;
  uint uVar23;
  bool bVar24;
  undefined1 local_res20 [8];
  uint local_1c8;
  FMovieSceneSequenceID local_1c4;
  uint local_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  undefined8 local_1b0;
  FMovieSceneSequenceID local_1a0 [2];
  FMovieSceneCompiledDataID local_198;
  UMovieSceneSequence *local_190;
  UMovieSceneSequence *local_188;
  ForElementType<unsigned_int> local_180;
  longlong local_178;
  FGuid local_170;
  longlong local_160;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *local_158;
  int iStack_150;
  uint uStack_14c;
  undefined1 *local_148;
  undefined4 uStack_140;
  int iStack_13c;
  TObjectPtr<UMovieSceneCompiledData>_u_0 local_138;
  int iStack_130;
  undefined4 uStack_12c;
  int local_128;
  UMovieSceneSequence *local_120;
  FMovieSceneSequenceID local_118 [2];
  UMovieSceneSequence *local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FRelativeObjectBindingID local_58;
  
  local_188 = (UMovieSceneSequence *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_190 = (UMovieSceneSequence *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  local_170.A = 0;
  local_170.B = 0;
  local_170.C = 0;
  local_170.D = 0;
  local_160 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  pUVar7 = local_188;
  pFVar21 = &local_170;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    pFVar21 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  local_110 = local_188;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_120 = local_190;
  if (((local_188 != (UMovieSceneSequence *)0x0) && (local_190 != (UMovieSceneSequence *)0x0)) &&
     (pUVar12 = *(UMovieSceneSequence **)(pFVar21 + 1), pUVar12 != (UMovieSceneSequence *)0x0)) {
    if ((local_188 == local_190) && (pUVar12 == local_188)) {
      local_1c0 = pFVar21->A;
      uStack_1bc = pFVar21->B;
      uStack_1b8 = pFVar21->C;
      uStack_1b4 = pFVar21->D;
      local_1b0 = 0;
      goto LAB_14c6b132c;
    }
    bVar24 = local_188 == local_190;
    if (bVar24) {
      local_1a0[0].Value = 0;
    }
    if (pUVar12 != local_188) {
      local_1c4.Value = local_118[0].Value;
    }
    else {
      local_1c4.Value = 0;
    }
    bVar22 = pUVar12 == local_188;
    this = UMovieSceneCompiledDataManager::GetPrecompiledData();
    UMovieSceneCompiledDataManager::Compile(this,(UMovieSceneSequence *)&local_198);
    pFVar11 = UMovieSceneCompiledDataManager::FindHierarchy(this,local_198);
    if (pFVar11 != (FMovieSceneSequenceHierarchy *)0x0) {
      local_180 = (ForElementType<unsigned_int>)&(pFVar11->SubSequences).field_0x10;
      iStack_150 = 0;
      iVar3 = *(int *)&(pFVar11->SubSequences).field_0x28;
      local_158 = &pFVar11->SubSequences;
      local_138._0_4_ = 0;
      uStack_14c = 1;
      iStack_13c = 0;
      if (iVar3 != 0) {
        puVar20 = *(uint **)&(pFVar11->SubSequences).field_0x20;
        if (puVar20 == (uint *)0x0) {
          puVar20 = (uint *)local_180;
        }
        uVar23 = *puVar20;
        while (uVar23 == 0) {
          lVar14 = (longlong)iStack_150;
          local_138._0_4_ = local_138._0_4_ + 0x20;
          iStack_150 = iStack_150 + 1;
          iStack_13c = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_150)
          goto LAB_14c6b0f72;
          uVar23 = puVar20[lVar14 + 1];
        }
        uStack_14c = -uVar23 & uVar23;
        uVar2 = (ulonglong)uStack_14c * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_128 = (int)lVar14;
        iStack_13c = local_128 + -1 + local_138._0_4_;
        if (iVar3 < iStack_13c) {
          iStack_13c = iVar3;
        }
      }
LAB_14c6b0f72:
      local_1c8 = *(uint *)&(pFVar11->SubSequences).field_0x28;
      iStack_130 = *(int *)&(pFVar11->SubSequences).field_0x8 -
                   *(int *)&(pFVar11->SubSequences).field_0x34;
      uVar23 = local_1c8 & 0xffffffe0;
      uStack_140 = 0xffffffff;
      TStack_d0.CurrentBitIndex = iStack_13c;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      TStack_d0._padding_ = CONCAT44(uStack_14c,iStack_150);
      iVar15 = (int)local_1c8 >> 5;
      TStack_d0._28_4_ = iStack_13c;
      TStack_d0.BaseBitIndex = local_138._0_4_;
      uStack_b0 = CONCAT44(uStack_12c,iStack_130);
      local_148 = (undefined1 *)local_180;
      local_138._4_4_ = iStack_13c;
      local_d8 = local_158;
      TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_180;
      if ((((int)local_1c8 < 0) || (iVar3 < (int)local_1c8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar7 = local_120;
      FVar8 = local_180;
      uVar4 = *(int *)((longlong)local_180 + 0x18);
      if (local_1c8 != uVar4) {
        FVar19 = *(ForElementType<unsigned_int> *)((longlong)local_180 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_180 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar19 = local_180;
        }
        uVar17 = -1 << ((byte)local_1c8 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar15 * 4)
        ;
        while (uVar17 == 0) {
          lVar14 = (longlong)iVar15;
          uVar23 = uVar23 + 0x20;
          iVar15 = iVar15 + 1;
          local_1c8 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_14c6b10b0;
          uVar17 = *(uint *)((undefined1 *)((longlong)FVar19 + 4) + lVar14 * 4);
        }
        uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_1c8 = (int)lVar14 + -1 + uVar23;
        if ((int)uVar4 < (int)local_1c8) {
          local_1c8 = uVar4;
        }
      }
LAB_14c6b10b0:
      do {
        pTVar9 = local_d8;
        if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
          `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_d0.CurrentBitIndex == local_1c8) &&
            ((ForElementType<unsigned_int>)TStack_d0.Array == FVar8)) &&
           (pTVar9 == &pFVar11->SubSequences)) goto LAB_14c6b1172;
        pFVar16 = (FMovieSceneSequenceID *)
                  (*(longlong *)pTVar9 + (longlong)TStack_d0.CurrentBitIndex * 0x120);
        pUVar12 = FMovieSceneSubSequenceData::GetSequence
                            ((FMovieSceneSubSequenceData *)(pFVar16 + 2));
        if (pUVar12 != (UMovieSceneSequence *)0x0) {
          if (((!bVar22) && (*(UMovieSceneSequence **)(pFVar21 + 1) != (UMovieSceneSequence *)0x0))
             && ((*(UMovieSceneSequence **)(pFVar21 + 1) == pUVar12 && (pFVar16 != local_118)))) {
            local_1c4.Value = pFVar16->Value;
            bVar22 = true;
          }
          if (!bVar24) {
            if ((pUVar12 != pUVar7) || (pFVar16 == local_1a0)) goto LAB_14c6b1157;
            local_1a0[0].Value = pFVar16->Value;
            bVar24 = true;
          }
          if (bVar22) goto LAB_14c6b1172;
        }
LAB_14c6b1157:
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
      } while( true );
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_a8,(UObject *)0x0);
    ::FString::PrintfImpl(&local_108,L"Root Sequence (\'%s\') does not have any sub-sequences.");
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar18.Data = local_108.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar18.Data,Error,(FName)0x0);
    local_68.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
      local_68.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    }
    goto LAB_14c6b12ad;
  }
  local_178 = 0;
  FFrame::KismetExecutionMessage(L"Invalid sequence specified.",Error,(FName)0x0);
LAB_14c6b131a:
  local_1c0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  local_1b0 = 0xffffffff00000000;
LAB_14c6b132c:
  *(uint *)param_3 = local_1c0;
  *(uint *)((longlong)param_3 + 4) = uStack_1bc;
  *(uint *)((longlong)param_3 + 8) = uStack_1b8;
  *(uint *)((longlong)param_3 + 0xc) = uStack_1b4;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_1b0;
  return;
LAB_14c6b1172:
  if (bVar24) {
    if (bVar22) {
      pFVar13 = UE::MovieScene::FRelativeObjectBindingID::FRelativeObjectBindingID
                          (&local_58,local_1a0[0],local_1c4,pFVar21,pFVar11);
      local_1c0 = (pFVar13->Guid).A;
      uStack_1bc = (pFVar13->Guid).B;
      uStack_1b8 = (pFVar13->Guid).C;
      uStack_1b4 = (pFVar13->Guid).D;
      local_1b0._0_4_ = pFVar13->SequenceID;
      local_1b0._4_4_ = pFVar13->ResolveParentIndex;
      goto LAB_14c6b132c;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_110,&local_68,(UObject *)0x0);
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)(pFVar21 + 1),&local_78,(UObject *)0x0);
    ::FString::PrintfImpl
              (&local_e8,
               L"Unable to locate Sequence for InBinding (\'%s\') within Root Sequence hierarchy (\'%s\')."
              );
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar18.Data = local_e8.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar18.Data,Error,(FName)0x0);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  else {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_110,&local_88,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_98,(UObject *)0x0);
    ::FString::PrintfImpl
              (&local_f8,
               L"Unable to locate DestinationSequence (\'%s\') within Root Sequence hierarchy (\'%s\')."
              );
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar18.Data = local_f8.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar18.Data,Error,(FName)0x0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
      local_68.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    }
  }
LAB_14c6b12ad:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  goto LAB_14c6b131a;
}

// execGetPossessables @ 14c6b1370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetPossessables(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UMovieSceneSequence *pUVar3;
  int iVar4;
  int iVar5;
  FMovieSceneBindingReferences *this;
  UMovieScene *this_00;
  FMovieScenePossessable *pFVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  undefined4 uVar9;
  FMovieSceneBindingReference *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined4 uVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  UMovieSceneSequence *local_res10;
  undefined8 local_res18;
  ForAnyElementType local_68;
  undefined8 local_60;
  TArrayView<FMovieSceneBindingReference_const_,int> local_58;
  undefined1 local_48 [16];
  
  pFVar13 = (FScriptContainerElement *)0x0;
  local_res10 = (UMovieSceneSequence *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieSceneSequence *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetPossessables on a null sequence",Error,(FName)0x0);
    FVar7.Data = pFVar13;
    uVar9 = 0;
    uVar12 = 0;
  }
  else {
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    this = UMovieSceneSequence::GetBindingReferences(local_res10);
    if (this == (FMovieSceneBindingReferences *)0x0) {
      this_00 = (UMovieScene *)(**(code **)(pUVar3->_padding_ + 0x2f8))(pUVar3);
      if ((this_00 != (UMovieScene *)0x0) &&
         (iVar4 = UMovieScene::GetPossessableCount(this_00), pFVar11 = pFVar13, 0 < iVar4)) {
        do {
          pFVar6 = UMovieScene::GetPossessable(this_00,(int)pFVar11);
          iVar5 = (int)local_60;
          if ((int)local_60 == local_60._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_68,(int *)((longlong)&local_60 + 4));
          }
          local_60 = CONCAT44(local_60._4_4_,iVar5 + 1);
          uVar2 = *(undefined8 *)&(pFVar6->Guid).C;
          *(undefined8 *)(local_68.Data + (longlong)iVar5 * 0x18) = *(undefined8 *)&pFVar6->Guid;
          *(undefined8 *)(local_68.Data + (longlong)iVar5 * 0x18 + 8) = uVar2;
          *(UMovieSceneSequence **)(local_68.Data + (longlong)iVar5 * 0x18 + 0x10) = pUVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
          uVar8 = (int)pFVar11 + 1;
          pFVar11 = (FScriptContainerElement *)(ulonglong)uVar8;
        } while ((int)uVar8 < iVar4);
      }
    }
    else {
      FMovieSceneBindingReferences::GetAllReferences(this,&local_58);
      uVar2 = local_60;
      for (pFVar10 = local_58.DataPtr; local_60 = uVar2,
          pFVar10 != local_58.DataPtr + local_58.ArrayNum; pFVar10 = pFVar10 + 1) {
        if ((pFVar10->CustomBinding).field0_0x0.DebugPtr == (UMovieSceneCustomBinding *)0x0) {
          local_60._0_4_ = (int)uVar2;
          local_60._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
          bVar14 = (int)local_60 == local_60._4_4_;
          iVar4 = (int)local_60;
          if (bVar14) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_68,(int *)((longlong)&local_60 + 4));
          }
          local_60 = CONCAT44(local_60._4_4_,iVar4 + 1);
          uVar2 = *(undefined8 *)&(pFVar10->ID).C;
          *(undefined8 *)(local_68.Data + (longlong)iVar4 * 0x18) = *(undefined8 *)&pFVar10->ID;
          *(undefined8 *)(local_68.Data + (longlong)iVar4 * 0x18 + 8) = uVar2;
          *(UMovieSceneSequence **)(local_68.Data + (longlong)iVar4 * 0x18 + 0x10) = pUVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar3);
          }
        }
        uVar2 = local_60;
      }
    }
    FVar7.Data = local_68.Data;
    uVar9 = (int)local_60;
    uVar12 = local_60._4_4_;
  }
  if (param_3 != local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar7.Data;
    *(undefined4 *)((longlong)param_3 + 8) = uVar9;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar12;
    FVar7.Data = pFVar13;
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return;
}

// execGetRootFoldersInSequence @ 14c6b1860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetRootFoldersInSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [2];
  undefined1 local_18 [16];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetRootFoldersInSequence on a null sequence",Error,(FName)0x0);
  }
  if (param_3 != local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
  }
  return;
}

// execGetSpawnables @ 14c6b1cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetSpawnables(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneCustomBinding *pUVar2;
  longlong lVar3;
  undefined8 uVar4;
  UMovieSceneSequence *this;
  uint uVar5;
  int iVar6;
  UMovieScene *this_00;
  FMovieSceneSpawnable *pFVar7;
  FMovieSceneBindingReferences *this_01;
  UClass *pUVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FMovieSceneBindingReference *pFVar11;
  ForAnyElementType FVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  FScriptContainerElement *pFVar15;
  UMovieSceneSequence *local_res10 [2];
  undefined8 local_res20;
  ForAnyElementType local_68;
  undefined8 local_60;
  TArrayView<FMovieSceneBindingReference_const_,int> local_58;
  undefined1 local_48 [16];
  
  pFVar15 = (FScriptContainerElement *)0x0;
  local_res10[0] = (UMovieSceneSequence *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (UMovieSceneSequence *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call GetSpawnables on a null sequence",Error,(FName)0x0)
    ;
    FVar12.Data = pFVar15;
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    this_00 = (UMovieScene *)(**(code **)(local_res10[0]->_padding_ + 0x2f8))(local_res10[0]);
    if (this_00 != (UMovieScene *)0x0) {
      uVar5 = UMovieScene::GetSpawnableCount(this_00);
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      if (local_60._4_4_ < (int)uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar5,&local_68,(int)local_60,(int *)((longlong)&local_60 + 4));
      }
      pFVar10 = pFVar15;
      if (0 < (int)uVar5) {
        do {
          pFVar7 = UMovieScene::GetSpawnable(this_00,(int)pFVar10);
          iVar6 = (int)local_60;
          if ((int)local_60 == local_60._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_68,(int *)((longlong)&local_60 + 4));
          }
          local_60 = CONCAT44(local_60._4_4_,iVar6 + 1);
          uVar4 = *(undefined8 *)&(pFVar7->Guid).C;
          *(undefined8 *)(local_68.Data + (longlong)iVar6 * 0x18) = *(undefined8 *)&pFVar7->Guid;
          *(undefined8 *)(local_68.Data + (longlong)iVar6 * 0x18 + 8) = uVar4;
          *(UMovieSceneSequence **)(local_68.Data + (longlong)iVar6 * 0x18 + 0x10) = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          uVar9 = (int)pFVar10 + 1;
          pFVar10 = (FScriptContainerElement *)(ulonglong)uVar9;
        } while ((int)uVar9 < (int)uVar5);
      }
    }
    this_01 = UMovieSceneSequence::GetBindingReferences(this);
    if (this_01 != (FMovieSceneBindingReferences *)0x0) {
      FMovieSceneBindingReferences::GetAllReferences(this_01,&local_58);
      for (pFVar11 = local_58.DataPtr; pFVar11 != local_58.DataPtr + local_58.ArrayNum;
          pFVar11 = pFVar11 + 1) {
        pUVar2 = (pFVar11->CustomBinding).field0_0x0.DebugPtr;
        if (pUVar2 != (UMovieSceneCustomBinding *)0x0) {
          pUVar8 = Z_Construct_UClass_UMovieSceneSpawnableActorBinding_NoRegister();
          lVar3 = *(longlong *)&pUVar2->field_0x10;
          iVar6 = (int)pUVar8->_padding_;
          if ((iVar6 <= *(int *)(lVar3 + 0x38)) &&
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) ==
              &pUVar8->_padding_)) {
            iVar6 = (int)local_60;
            if ((int)local_60 == local_60._4_4_) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_68,(int *)((longlong)&local_60 + 4));
            }
            local_60 = CONCAT44(local_60._4_4_,iVar6 + 1);
            uVar4 = *(undefined8 *)&(pFVar11->ID).C;
            *(undefined8 *)(local_68.Data + (longlong)iVar6 * 0x18) = *(undefined8 *)&pFVar11->ID;
            *(undefined8 *)(local_68.Data + (longlong)iVar6 * 0x18 + 8) = uVar4;
            *(UMovieSceneSequence **)(local_68.Data + (longlong)iVar6 * 0x18 + 0x10) = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
          }
        }
      }
    }
    FVar12.Data = local_68.Data;
    uVar14 = (int)local_60;
    uVar13 = local_60._4_4_;
  }
  if (param_3 != local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar12.Data;
    *(undefined4 *)((longlong)param_3 + 8) = uVar14;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar13;
    FVar12.Data = pFVar15;
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return;
}

// execGetTickResolution @ 14c6b2360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetTickResolution(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  longlong *local_res10;
  longlong *local_res18;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = local_res10;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
  }
  else {
    lVar2 = (**(code **)(*local_res10 + 0x2f8))();
    if (lVar2 != 0) {
      *(undefined8 *)param_3 = *(undefined8 *)(lVar2 + 0x138);
      return;
    }
  }
  *(undefined8 *)param_3 = 0x10000ea60;
  return;
}

// execGetTracks @ 14c6b28c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetTracks(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UMovieScene *this;
  ForAnyElementType FVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *local_res10;
  undefined8 local_res18;
  UMovieSceneTrack *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call GetTracks on a null sequence",Error,(FName)0x0);
    FVar5.Data = (FScriptContainerElement *)0x0;
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    this = (UMovieScene *)(**(code **)(*local_res10 + 0x2f8))();
    if (this != (UMovieScene *)0x0) {
      if ((TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *)&local_50 !=
          &this->Tracks) {
        iVar4 = (this->Tracks).ArrayNum;
        _Src = (this->Tracks).AllocatorInstance.Data;
        local_48 = CONCAT44(local_48._4_4_,iVar4);
        if (((iVar4 != 0) || (local_48._4_4_ != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar4,local_48._4_4_,&local_50,iVar4,(int *)((longlong)&local_48 + 4)),
           iVar4 != 0)) {
          memcpy(local_50.Data,_Src,(longlong)iVar4 << 3);
        }
      }
      local_58 = UMovieScene::GetCameraCutTrack(this);
      if (local_58 != (UMovieSceneTrack *)0x0) {
        if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (int)local_48;
        if ((int)local_48 == local_48._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_50,(int *)((longlong)&local_48 + 4));
        }
        local_48 = CONCAT44(local_48._4_4_,iVar4 + 1);
        *(UMovieSceneTrack **)(local_50.Data + (longlong)iVar4 * 8) = local_58;
      }
    }
    FVar5.Data = local_50.Data;
    uVar6 = (int)local_48;
    uVar7 = local_48._4_4_;
  }
  if (param_3 != local_40) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar5.Data;
    *(undefined4 *)((longlong)param_3 + 8) = uVar6;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar7;
    FVar5.Data = (FScriptContainerElement *)0x0;
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// execGetViewRangeEnd @ 14c6b3070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetViewRangeEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *local_res10;
  undefined8 local_res18;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetViewRangeEnd on a null sequence",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
    return;
  }
  (**(code **)(*local_res10 + 0x2f8))();
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetViewRangeStart @ 14c6b3130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetViewRangeStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *local_res10;
  undefined8 local_res18;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetViewRangeStart on a null sequence",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
    return;
  }
  (**(code **)(*local_res10 + 0x2f8))();
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetWorkRangeEnd @ 14c6b31f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetWorkRangeEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *local_res10;
  undefined8 local_res18;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetWorkRangeEnd on a null sequence",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
    return;
  }
  (**(code **)(*local_res10 + 0x2f8))();
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetWorkRangeStart @ 14c6b32b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execGetWorkRangeStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *local_res10;
  undefined8 local_res18;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetWorkRangeStart on a null sequence",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
    return;
  }
  (**(code **)(*local_res10 + 0x2f8))();
  *(undefined8 *)param_3 = 0;
  return;
}

// execIsPlaybackRangeLocked @ 14c6b36b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execIsPlaybackRangeLocked
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call IsPlaybackRangeLocked on a null sequence",Error,(FName)0x0);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsReadOnly @ 14c6b3750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execIsReadOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    local_res10[1] = 0;
    FFrame::KismetExecutionMessage(L"Cannot call IsReadOnly on a null sequence",Error,(FName)0x0);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execLocateBoundObjects @ 14c6b38e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execLocateBoundObjects
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  FProperty *pFVar4;
  FSharedPlaybackState *pFVar5;
  code *pcVar6;
  UMovieSceneSequence *pUVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar10;
  int *piVar11;
  FMovieSceneObjectCache *this;
  ForAnyElementType FVar12;
  longlong *plVar13;
  FWeakObjectPtr *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  FSharedPlaybackState *this_00;
  TReferenceControllerBase<1> *pTVar18;
  undefined1 auStack_2a8 [32];
  TReferenceControllerBase<1> *local_288;
  TReferenceControllerBase<1> *local_280;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  undefined1 local_258 [8];
  ForAnyElementType local_250;
  undefined8 local_248;
  TReferenceControllerBase<1> local_240;
  UMovieSceneSequence *local_230;
  UObject *local_228;
  undefined8 local_220;
  UMovieSceneSequence *local_218;
  FWeakObjectPtr local_210;
  FGuid local_208;
  undefined8 local_1f8;
  FPlaybackCapabilityPtr local_1f0;
  FSharedPlaybackState *local_1e0;
  TReferenceControllerBase<1> *local_1d8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_1d0;
  FMovieSceneEvaluationState *local_1c0;
  FGuid *local_1b8;
  undefined8 *local_1b0;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_1a8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_198;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_188;
  FSharedPlaybackStateCreateParams local_178;
  undefined8 local_158 [2];
  undefined1 local_148 [8];
  undefined1 local_140 [64];
  void *local_100;
  undefined4 local_f8;
  undefined1 local_f0 [64];
  void *local_b0;
  undefined4 local_a8;
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  int local_68 [2];
  int *local_60;
  undefined4 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  FVar12.Data = (FScriptContainerElement *)0x0;
  local_230 = (UMovieSceneSequence *)0x0;
  local_1b0 = param_3;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_230,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_230);
  }
  local_208.A = 0;
  local_208.B = 0;
  local_208.C = 0;
  local_208.D = 0;
  local_1f8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_208,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_208);
  }
  local_228 = (UObject *)0x0;
  local_1b8 = &local_208;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    local_1b8 = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
  }
  pUVar7 = local_230;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_218 = local_230;
  uVar16 = 0;
  if (local_230 == (UMovieSceneSequence *)0x0) {
    local_220 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call LocateBoundObjects on a null sequence",Error,(FName)0x0);
    uVar17 = uVar16;
    goto LAB_14c6b3f2d;
  }
  local_178.PlaybackContext = local_228;
  local_178.Linker.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneEntitySystemLinker>_u_0)0x0;
  local_178.CompiledDataManager = (UMovieSceneCompiledDataManager *)0x0;
  local_178.RootInstanceHandle = (FRootInstanceHandle)0xffff;
  pTVar9 = ::operator_new(0x88);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    this_00 = (FSharedPlaybackState *)&DAT_00000010;
LAB_14c6b3ad3:
    pTVar9 = (TReferenceControllerBase<1> *)FVar12.Data;
    if (((this_00->_padding_ == 0) || (*(longlong *)&this_00->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&this_00->_padding_ + 8) < 1)) {
      if ((TReferenceControllerBase<1> *)FVar12.Data != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)FVar12.Data)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)FVar12.Data)->SharedReferenceCount + 1);
        UNLOCK();
      }
      this_00->_padding_ = (longlong)this_00;
      if ((TReferenceControllerBase<1> *)FVar12.Data !=
          *(TReferenceControllerBase<1> **)&this_00->_padding_) {
        if ((TReferenceControllerBase<1> *)FVar12.Data != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          ((TReferenceControllerBase<1> *)FVar12.Data)->WeakReferenceCount =
               (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)FVar12.Data)->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar13 = *(longlong **)&this_00->_padding_;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar11 = (int *)((longlong)plVar13 + 0xc);
          iVar3 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
        *(FScriptContainerElement **)&this_00->_padding_ = FVar12.Data;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar12.Data);
    }
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFSharedPlaybackState_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    UE::MovieScene::FSharedPlaybackState::FSharedPlaybackState
              ((FSharedPlaybackState *)(pTVar9 + 1),pUVar7,&local_178);
    this_00 = (FSharedPlaybackState *)(pTVar9 + 1);
    FVar12.Data = (FScriptContainerElement *)pTVar9;
    if (this_00 != (FSharedPlaybackState *)0x0) goto LAB_14c6b3ad3;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_148 = (undefined1  [8])&___7FMovieSceneEvaluationState__6B_;
  local_140._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_140._48_8_ = _UNK_150631d98;
  local_f0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_f0._48_8_ = _UNK_150631d98;
  local_a0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_a0._48_8_ = _UNK_150631d98;
  local_140._0_8_ = 0;
  local_140._8_8_ = 0;
  local_140._32_8_ = 0;
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_f0._0_8_ = 0;
  local_f0._8_8_ = 0;
  local_f0._32_8_ = 0;
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_a0._32_8_ = 0;
  local_60 = (int *)0x0;
  local_58 = 0;
  local_50 = 0;
  bVar8 = IsInGameThread();
  if (!bVar8) {
    local_258[0] = 0;
    `UE::MovieScene::FSharedPlaybackState::AddCapabilityRaw<FMovieSceneEvaluationState>'::__l2::
    <lambda_1>::operator()(local_258);
  }
  local_1c0 = (FMovieSceneEvaluationState *)local_148;
  FMovieSceneEvaluationState::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::
  AddCapability<FMovieSceneEvaluationState_*,FMovieSceneEvaluationState,FMovieSceneEvaluationState_*>
            ((FPlaybackCapabilitiesImpl *)&this_00->Capabilities,&local_1f0,
             1 << (local_240.SharedReferenceCount._0_1_ & 0x1f),&local_1c0);
  if ((local_1f0.Ptr == (longlong *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x3a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar13 = local_1f0.Ptr;
  if (local_1f0.StorageMode != Inline) {
    if ((local_1f0.StorageMode == RawPointer) || (local_1f0.StorageMode == SharedPointer)) {
      plVar13 = *(longlong **)local_1f0.Ptr;
    }
    else {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  pcVar6 = *(code **)(*plVar13 + 8);
  pTVar10 = TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1>::AsShared
                      ((TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1> *)this_00,&local_198
                      );
  pTVar18 = (pTVar10->SharedReferenceCount).ReferenceController;
  pFVar5 = pTVar10->Object;
  if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e0 = pFVar5;
  local_1d8 = pTVar18;
  (*pcVar6)(plVar13,&local_1e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  local_1a8.Object = this_00;
  local_1a8.SharedReferenceCount.ReferenceController = pTVar9;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    FMovieSceneEvaluationState::AssignSequence
              ((FMovieSceneEvaluationState *)local_148,&MovieSceneSequenceID::Root,local_218,
               &local_1a8);
  }
  else {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    FMovieSceneEvaluationState::AssignSequence
              ((FMovieSceneEvaluationState *)local_148,&MovieSceneSequenceID::Root,local_218,
               &local_1a8);
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_a0._8_4_ != local_a0._52_4_) {
    piVar11 = local_68;
    if (local_60 != (int *)0x0) {
      piVar11 = local_60;
    }
    iVar3 = *piVar11;
    while (iVar3 != -1) {
      piVar11 = (int *)((longlong)iVar3 * 0x198 + local_a0._0_8_);
      if (*piVar11 == 0) {
        this = (FMovieSceneObjectCache *)(piVar11 + 2);
        if (piVar11 == (int *)0x0) {
          this = (FMovieSceneObjectCache *)0x0;
        }
        if (this != (FMovieSceneObjectCache *)0x0) {
          if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_188.Object = this_00;
          local_188.SharedReferenceCount.ReferenceController = pTVar9;
          FMovieSceneObjectCache::FindBoundObjects(this,&local_1d0,local_1b8,&local_188);
          goto LAB_14c6b3d7b;
        }
        break;
      }
      iVar3 = piVar11[100];
    }
  }
  local_1d0.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
  local_1d0.ArrayNum = 0;
LAB_14c6b3d7b:
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  local_250.Data = (FScriptContainerElement *)0x0;
  local_248._0_4_ = 0;
  local_248._4_4_ = 0;
  pFVar2 = &local_1d0.DataPtr[local_1d0.ArrayNum].WeakPtr;
  FVar12.Data = (FScriptContainerElement *)pTVar15;
  pFVar14 = &(local_1d0.DataPtr)->WeakPtr;
  pTVar18 = pTVar15;
  if (&(local_1d0.DataPtr)->WeakPtr != pFVar2) {
    do {
      local_210 = *pFVar14;
      bVar8 = FWeakObjectPtr::IsValid(&local_210);
      if (bVar8) {
        local_240._padding_ = (longlong)FWeakObjectPtr::Get(&local_210);
        if ((local_250.Data <= &local_240) &&
           (&local_240 <
            (TReferenceControllerBase<1> *)(local_250.Data + (longlong)(int)local_248._4_4_ * 8))) {
          local_270 = (longlong)(int)(uint)local_248;
          local_268 = 8;
          local_288 = &local_240;
          local_280 = (TReferenceControllerBase<1> *)local_250.Data;
          local_278 = (longlong)(int)local_248._4_4_;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if ((uint)local_248 == local_248._4_4_) {
          local_248._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_250,(int *)((longlong)&local_248 + 4));
        }
        *(longlong *)(local_250.Data + (longlong)(int)(uint)local_248 * 8) = local_240._padding_;
        local_248._0_4_ = (uint)local_248 + 1;
      }
      pFVar14 = pFVar14 + 1;
    } while (pFVar14 != pFVar2);
    pTVar18 = (TReferenceControllerBase<1> *)(ulonglong)local_248._4_4_;
    pTVar15 = (TReferenceControllerBase<1> *)(ulonglong)(uint)local_248;
    FVar12.Data = local_250.Data;
  }
  uVar17 = SUB84(pTVar18,0);
  uVar16 = SUB84(pTVar15,0);
  local_250.Data = (FScriptContainerElement *)0x0;
  local_248 = 0;
  local_58 = 0;
  if (local_60 != (int *)0x0) {
    FMemory::Free(local_60);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneEvaluationState::FVersionedObjectCache>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a0);
  local_a8 = 0;
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f0);
  local_f8 = 0;
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_140);
  local_148 = (undefined1  [8])&___7IPlaybackCapability_MovieScene_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  param_3 = local_1b0;
LAB_14c6b3f2d:
  if (param_3 != local_158) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = FVar12.Data;
    *(undefined4 *)((longlong)param_3 + 8) = uVar16;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar17;
    FVar12.Data = (FScriptContainerElement *)(TReferenceControllerBase<1> *)0x0;
  }
  if ((TReferenceControllerBase<1> *)FVar12.Data != (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return;
}

// execMakeRange @ 14c6b4000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execMakeRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FFrameNumber FVar3;
  longlong lVar4;
  FFrameRate FVar5;
  int local_res10 [2];
  FFrameNumber local_res18 [2];
  longlong *local_res20;
  TRange<FFrameNumber> local_48;
  FSequencerScriptingRange local_38;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0].Value = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar3.Value = local_res18[0].Value;
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    local_48.LowerBound.Type.Value = '\0';
    local_48.LowerBound._1_3_ = 0;
    local_48.LowerBound.Value.Value = 0;
    FFrame::KismetExecutionMessage(L"Cannot call MakeRange on a null sequence",Error,(FName)0x0);
    local_38.bHasEnd = '\0';
    local_38.bHasStart = '\0';
    local_38.InclusiveStart = (int)___xmm_000000010000ea600000000000000000;
    local_38.ExclusiveEnd = (int)((ulonglong)___xmm_000000010000ea600000000000000000 >> 0x20);
    local_38.InternalRate.Numerator = (int)_UNK_1528a8c88;
    local_38.InternalRate.Denominator = (int)((ulonglong)_UNK_1528a8c88 >> 0x20);
  }
  else {
    lVar4 = (**(code **)(*local_res20 + 0x2f8))();
    if (lVar4 == 0) {
      FVar5.Numerator = 60000;
      FVar5.Denominator = 1;
    }
    else {
      FVar5 = *(FFrameRate *)(lVar4 + 0x140);
    }
    local_48.LowerBound.Type.Value = '\x01';
    local_48.LowerBound.Value.Value = FVar3.Value;
    local_48.UpperBound.Type.Value = '\0';
    local_48.UpperBound.Value.Value = iVar2 + FVar3.Value;
    FSequencerScriptingRange::FromNative(&local_38,&local_48,FVar5,FVar5);
  }
  *(ulonglong *)param_3 = CONCAT44(local_38.InclusiveStart,local_38._0_4_);
  *(ulonglong *)((longlong)param_3 + 8) =
       CONCAT44(local_38.InternalRate.Numerator,local_38.ExclusiveEnd);
  *(int *)((longlong)param_3 + 0x10) = local_38.InternalRate.Denominator;
  return;
}

// execMakeRangeSeconds @ 14c6b41c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execMakeRangeSeconds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  float fVar3;
  longlong lVar4;
  int iVar5;
  FFrameRate FVar6;
  double dVar7;
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  float fVar11;
  float local_res10 [2];
  float local_res18 [2];
  TRangeBound<FFrameNumber> local_res20;
  TRange<FFrameNumber> local_78;
  FSequencerScriptingRange local_68 [4];
  
  local_res20.Type.Value = '\0';
  local_res20._1_3_ = 0;
  local_res20.Value.Value = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res18[0];
  fVar11 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (TRangeBound<FFrameNumber>)0x0) {
    local_78.LowerBound = local_res20;
    FFrame::KismetExecutionMessage
              (L"Cannot call MakeRangeSeconds on a null sequence",Error,(FName)0x0);
    INSERT(local_68[0]._0_4_,'\0',1,1);
    INSERT(local_68[0]._0_4_,'\0',0,1);
    local_68[0].InclusiveStart = (int)___xmm_000000010000ea600000000000000000;
    local_68[0].ExclusiveEnd = (int)((ulonglong)___xmm_000000010000ea600000000000000000 >> 0x20);
    local_68[0].InternalRate.Numerator = (int)_UNK_1528a8c88;
    local_68[0].InternalRate.Denominator = (int)((ulonglong)_UNK_1528a8c88 >> 0x20);
  }
  else {
    lVar4 = (**(code **)(*(longlong *)local_res20 + 0x2f8))();
    if (lVar4 == 0) {
      FVar6.Numerator = 60000;
      FVar6.Denominator = 1;
    }
    else {
      FVar6 = *(FFrameRate *)(lVar4 + 0x140);
    }
    dVar9 = ((double)(fVar11 + fVar3) * (double)FVar6.Numerator) / (double)FVar6.Denominator;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar9;
    auVar8 = roundpd(in_XMM2,auVar8,1);
    dVar7 = auVar8._0_8_;
    dVar9 = dVar9 - dVar7;
    if (__real_41dfffffffc00000 <= dVar7) {
      dVar7 = __real_41dfffffffc00000;
    }
    if (dVar7 <= __real_c1e0000000000000) {
      dVar7 = __real_c1e0000000000000;
    }
    iVar5 = (int)dVar9;
    fVar11 = (float)dVar9 - (float)iVar5;
    if ((0.0 < fVar11) && (::FFrameTime::MaxSubframe <= fVar11)) {
      fVar11 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar11) {
      fVar11 = ::FFrameTime::MaxSubframe;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    local_78.UpperBound.Value.Value = (int)dVar7 + iVar5;
    if (fVar11 != 0.0) {
      local_78.UpperBound.Value.Value = local_78.UpperBound.Value.Value + 1;
    }
    local_78.LowerBound.Type.Value = '\x01';
    local_78.UpperBound.Type.Value = '\0';
    dVar10 = ((double)fVar3 * (double)FVar6.Numerator) / (double)FVar6.Denominator;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar10;
    auVar8 = roundpd(auVar8,auVar2,1);
    dVar9 = auVar8._0_8_;
    dVar7 = dVar9;
    if (__real_41dfffffffc00000 <= dVar9) {
      dVar7 = __real_41dfffffffc00000;
    }
    if (dVar7 <= __real_c1e0000000000000) {
      dVar7 = __real_c1e0000000000000;
    }
    local_78.LowerBound.Value.Value = (int)(dVar10 - dVar9) + (int)dVar7;
    FSequencerScriptingRange::FromNative(local_68,&local_78,FVar6,FVar6);
  }
  *(ulonglong *)param_3 = CONCAT44(local_68[0].InclusiveStart,local_68[0]._0_4_);
  *(ulonglong *)((longlong)param_3 + 8) =
       CONCAT44(local_68[0].InternalRate.Numerator,local_68[0].ExclusiveEnd);
  *(int *)((longlong)param_3 + 0x10) = local_68[0].InternalRate.Denominator;
  return;
}

// execRemoveRootFolderFromSequence @ 14c6b5100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execRemoveRootFolderFromSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneFolder *this;
  longlong *plVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  FName this_00;
  ForAnyElementType FVar6;
  UMovieSceneFolder *local_res10 [2];
  longlong *local_res20;
  FName local_58 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (UMovieSceneFolder *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar2 = local_res20;
  this = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20 == (longlong *)0x0) || (local_res10[0] == (UMovieSceneFolder *)0x0)) {
    local_58[0].ComparisonIndex.Value = 0;
    local_58[0].Number = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call RemoveRootFolderFromSequence on a null sequence or folder",Error,
               (FName)0x0);
  }
  else {
    pUVar3 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
    pUVar5 = (UObject *)(**(code **)(*plVar2 + 0x2f8))(plVar2);
    if (pUVar4 != pUVar5) {
      local_58[0] = *(FName *)(plVar2 + 3);
      ::FName::ToString(local_58,&local_38);
      this_00 = UMovieSceneFolder::GetFolderName(this);
      ::FName::ToString((FName *)this_00,&local_28);
      ::FString::PrintfImpl(&local_48,L"The folder \'%s\' does not belong to sequence \'%s\'");
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar6.Data = local_48.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar6.Data,Error,(FName)0x0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// execRemoveTrack @ 14c6b5510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execRemoveTrack(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  UMovieSceneTrack *pUVar4;
  bool bVar5;
  UMovieScene *this;
  UClass *pUVar6;
  UMovieSceneTrack *local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  
  local_res18 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UMovieSceneTrack *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (longlong *)0x0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"Cannot call RemoveTrack on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(*local_res18 + 0x2f8))();
    if (this != (UMovieScene *)0x0) {
      pUVar6 = Z_Construct_UClass_UMovieSceneCameraCutTrack_NoRegister();
      lVar3 = pUVar4->_padding_;
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        UMovieScene::RemoveCameraCutTrack(this);
        *(undefined1 *)param_3 = 1;
        return;
      }
      bVar5 = UMovieScene::RemoveTrack(this,pUVar4);
      *(bool *)param_3 = bVar5;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execResolveBindingID @ 14c6b5650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execResolveBindingID(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  FMovieSceneSubSequenceData *pFVar3;
  FMovieSceneSequenceID FVar4;
  uint uVar5;
  UMovieSceneCompiledDataManager *pUVar6;
  FMovieSceneSequenceHierarchy *pFVar7;
  undefined4 extraout_var;
  uint *puVar8;
  FMovieSceneSubSequenceData *pFVar9;
  FMovieSceneSubSequenceData *this;
  undefined1 *puVar10;
  longlong local_res10;
  undefined1 local_res18 [8];
  FMovieSceneSubSequenceData *local_res20;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  FGuid local_60;
  int local_50;
  int iStack_4c;
  FMovieSceneObjectBindingID local_48;
  
  pFVar9 = (FMovieSceneSubSequenceData *)0x0;
  local_res20 = (FMovieSceneSubSequenceData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_60.A = 0;
  local_60.B = 0;
  local_60.C = 0;
  local_60.D = 0;
  local_50 = 0;
  iStack_4c = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pFVar3 = local_res20;
  local_48.ResolveParentIndex = iStack_4c;
  local_48.SequenceID = local_50;
  local_48.Guid.A = local_60.A;
  local_48.Guid.B = local_60.B;
  local_48.Guid.C = local_60.C;
  local_48.Guid.D = local_60.D;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (FMovieSceneSubSequenceData *)0x0) {
    local_res10 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call ResolveBindingID on a null sequence",Error,(FName)0x0);
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
  }
  else {
    pUVar6 = UMovieSceneCompiledDataManager::GetPrecompiledData();
    UMovieSceneCompiledDataManager::Compile(pUVar6,(UMovieSceneSequence *)&local_res10);
    pUVar6 = UMovieSceneCompiledDataManager::GetPrecompiledData();
    pFVar7 = UMovieSceneCompiledDataManager::FindHierarchy(pUVar6,local_res10._0_4_);
    if (pFVar7 != (FMovieSceneSequenceHierarchy *)0x0) {
      FVar4 = FMovieSceneObjectBindingID::ResolveSequenceID
                        (&local_48,(uint)local_res18,
                         (FMovieSceneSequenceHierarchy *)(ulonglong)MovieSceneSequenceID::Root.Value
                        );
      uVar1 = *(uint *)CONCAT44(extraout_var,FVar4.Value);
      if ((uVar1 != 0) &&
         (*(int *)&(pFVar7->SubSequences).field_0x8 != *(int *)&(pFVar7->SubSequences).field_0x34))
      {
        puVar10 = *(undefined1 **)&(pFVar7->SubSequences).field_0x40;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &(pFVar7->SubSequences).field_0x38;
        }
        uVar5 = *(uint *)(puVar10 +
                         (ulonglong)(*(int *)&(pFVar7->SubSequences).field_0x48 - 1U & uVar1) * 4);
        if (uVar5 != 0xffffffff) {
          do {
            puVar8 = (uint *)((longlong)(int)uVar5 * 0x120 + *(longlong *)&pFVar7->SubSequences);
            if (*puVar8 == uVar1) {
              this = (FMovieSceneSubSequenceData *)(puVar8 + 2);
              if (puVar8 == (uint *)0x0) {
                this = pFVar9;
              }
              if ((this != (FMovieSceneSubSequenceData *)0x0) &&
                 (pFVar9 = (FMovieSceneSubSequenceData *)
                           FMovieSceneSubSequenceData::GetSequence(this),
                 pFVar9 != (FMovieSceneSubSequenceData *)0x0)) {
                pFVar3 = pFVar9;
              }
              break;
            }
            uVar5 = puVar8[0x46];
          } while (uVar5 != 0xffffffff);
        }
      }
    }
    pFVar9 = pFVar3;
    local_78 = local_48.Guid.A;
    uStack_74 = local_48.Guid.B;
    uStack_70 = local_48.Guid.C;
    uStack_6c = local_48.Guid.D;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pFVar9 != (FMovieSceneSubSequenceData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pFVar9);
    }
  }
  *(uint *)param_3 = local_78;
  *(uint *)((longlong)param_3 + 4) = uStack_74;
  *(uint *)((longlong)param_3 + 8) = uStack_70;
  *(uint *)((longlong)param_3 + 0xc) = uStack_6c;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pFVar9 != (FMovieSceneSubSequenceData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pFVar9);
  }
  *(FMovieSceneSubSequenceData **)((longlong)param_3 + 0x10) = pFVar9;
  return;
}

// execSetClockSource @ 14c6b5970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetClockSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EUpdateClockSource EVar2;
  UMovieScene *this;
  EUpdateClockSource local_res10 [16];
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = Tick;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  EVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetClockSource on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(*local_res20 + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    UMovieScene::SetClockSource(this,EVar2);
  }
  return;
}

// execSetDisplayRate @ 14c6b60f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetDisplayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res10;
  undefined4 uStackX_14;
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 60000;
  uStackX_14 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = CONCAT44(uStackX_14,local_res10);
  if (local_res20 == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetDisplayRate on a null sequence",Error,(FName)0x0);
    return;
  }
  lVar3 = (**(code **)(*local_res20 + 0x2f8))();
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x140) = uVar2;
  }
  return;
}

// execSetEvaluationType @ 14c6b6660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetEvaluationType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  longlong lVar3;
  char local_res10 [16];
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetEvaluationType on a null sequence",Error,(FName)0x0);
    return;
  }
  lVar3 = (**(code **)(*local_res20 + 0x2f8))();
  if (((lVar3 != 0) && (*(char *)(lVar3 + 0x148) = cVar2, cVar2 == '\0')) &&
     (*(char *)(lVar3 + 0x149) == '\0')) {
    *(undefined1 *)(lVar3 + 0x149) = 1;
  }
  return;
}

// execSetMarkedFrame @ 14c6b6a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetMarkedFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FFrameNumber FVar3;
  UMovieScene *this;
  int local_res10 [2];
  FFrameNumber local_res20 [2];
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0].Value = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FVar3.Value = local_res20[0].Value;
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_18 == (longlong *)0x0) {
    local_10 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call SetMarkedFrame on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(*local_18 + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    UMovieScene::SetMarkedFrame(this,iVar2,FVar3);
  }
  return;
}

// execSetMarkedFrameInSequence @ 14c6b6ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetMarkedFrameInSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  int iVar3;
  UMovieScene *this;
  FFrameNumber FVar4;
  char local_res10 [16];
  uint local_res20 [2];
  int local_38 [2];
  longlong *local_30;
  FFrameRate local_28;
  
  local_30 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_38[0];
  FVar4.Value = local_res20[0];
  cVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_30 == (longlong *)0x0) {
    local_28.Numerator = 0;
    local_28.Denominator = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call SetMarkedFrame on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(*local_30 + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    if (cVar2 == '\0') {
      local_28.Denominator = 0;
      local_28.Numerator = FVar4.Value;
      ConvertFrameTime((FFrameTime)&local_28,local_28,this->DisplayRate);
      FVar4.Value = local_28.Numerator;
      if (__real_3f000000 <= (float)local_28.Denominator) {
        FVar4.Value = local_28.Numerator + 1;
      }
    }
    UMovieScene::SetMarkedFrame(this,iVar3,FVar4);
  }
  return;
}

// execSetMarkedFramesLocked @ 14c6b6d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetMarkedFramesLocked
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  longlong local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == 0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetMarkedFramesLocked on a null sequence",Error,(FName)0x0);
  }
  return;
}

// execSetPlaybackEnd @ 14c6b7710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetPlaybackEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FFrameRate FVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  UMovieScene *this;
  longlong lVar7;
  FFrameTime FVar8;
  FFrameRate FVar9;
  uint local_res10 [2];
  longlong *local_res20;
  undefined1 local_38 [8];
  TRange<FFrameNumber> local_30;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar5 = local_res20;
  uVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetPlaybackEnd on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(*local_res20 + 0x2f8))(local_res20);
  if (this != (UMovieScene *)0x0) {
    lVar7 = (**(code **)(*plVar5 + 0x2f8))(plVar5);
    if (lVar7 == 0) {
      FVar9.Numerator = 60000;
      FVar9.Denominator = 1;
    }
    else {
      FVar9 = *(FFrameRate *)(lVar7 + 0x140);
    }
    local_30.LowerBound.Type.Value = (this->PlaybackRange).Value.LowerBound.Type.Value;
    local_30.LowerBound._1_3_ = *(undefined3 *)&(this->PlaybackRange).Value.LowerBound.field_0x1;
    local_30.LowerBound.Value.Value = (this->PlaybackRange).Value.LowerBound.Value.Value;
    local_30.UpperBound.Type.Value = (this->PlaybackRange).Value.UpperBound.Type.Value;
    local_30.UpperBound._1_3_ = *(undefined3 *)&(this->PlaybackRange).Value.UpperBound.field_0x1;
    local_30.UpperBound.Value.Value = (this->PlaybackRange).Value.UpperBound.Value.Value;
    (**(code **)(*plVar5 + 0x2f8))(plVar5);
    FVar3.Denominator = 0;
    FVar3.Numerator = uVar4;
    FVar8 = ConvertFrameTime((FFrameTime)local_38,FVar3,FVar9);
    if ((local_30.UpperBound.Type.Value == '\x02') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,0x73,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_30.UpperBound.Value.Value = *(int *)FVar8;
    UMovieScene::SetPlaybackRange(this,&local_30,true);
  }
  return;
}

// execSetPlaybackEndSeconds @ 14c6b78e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetPlaybackEndSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  UMovieScene *this;
  longlong lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  float local_res10 [2];
  longlong *local_res20;
  TRange<FFrameNumber> local_40 [3];
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar3 = local_res20;
  fVar11 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetPlaybackEndSeconds on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(*local_res20 + 0x2f8))(local_res20);
    if (this != (UMovieScene *)0x0) {
      local_40[0].LowerBound.Type.Value = (this->PlaybackRange).Value.LowerBound.Type.Value;
      local_40[0].LowerBound._1_3_ =
           *(undefined3 *)&(this->PlaybackRange).Value.LowerBound.field_0x1;
      local_40[0].LowerBound.Value.Value = (this->PlaybackRange).Value.LowerBound.Value.Value;
      local_40[0].UpperBound.Type.Value = (this->PlaybackRange).Value.UpperBound.Type.Value;
      local_40[0].UpperBound._1_3_ =
           *(undefined3 *)&(this->PlaybackRange).Value.UpperBound.field_0x1;
      local_40[0].UpperBound.Value.Value = (this->PlaybackRange).Value.UpperBound.Value.Value;
      lVar6 = (**(code **)(*plVar3 + 0x2f8))(plVar3);
      if (lVar6 == 0) {
        uVar7 = 0x10000ea60;
      }
      else {
        uVar7 = *(undefined8 *)(lVar6 + 0x138);
      }
      dVar10 = ((double)(int)uVar7 * (double)fVar11) / (double)(int)((ulonglong)uVar7 >> 0x20);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar10;
      auVar9 = roundpd(in_XMM2,auVar9,1);
      dVar8 = auVar9._0_8_;
      dVar10 = dVar10 - dVar8;
      if (__real_41dfffffffc00000 <= dVar8) {
        dVar8 = __real_41dfffffffc00000;
      }
      if (dVar8 <= __real_c1e0000000000000) {
        dVar8 = __real_c1e0000000000000;
      }
      iVar5 = (int)dVar10;
      fVar11 = (float)dVar10 - (float)iVar5;
      if ((0.0 < fVar11) && (::FFrameTime::MaxSubframe <= fVar11)) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      if (::FFrameTime::MaxSubframe <= fVar11) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      iVar5 = (int)dVar8 + iVar5;
      if (__real_3f000000 <= fVar11) {
        iVar5 = iVar5 + 1;
      }
      if (local_40[0].UpperBound.Type.Value == '\x02') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,0x73,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_40[0].UpperBound.Value.Value = iVar5;
      UMovieScene::SetPlaybackRange(this,local_40,true);
    }
  }
  return;
}

// execSetPlaybackRangeLocked @ 14c6b7b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetPlaybackRangeLocked
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  longlong local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == 0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetPlaybackRangeLocked on a null sequence",Error,(FName)0x0);
  }
  return;
}

// execSetPlaybackStart @ 14c6b7bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetPlaybackStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FFrameRate FVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  UMovieScene *this;
  longlong lVar7;
  FFrameTime FVar8;
  FFrameRate FVar9;
  uint local_res10 [2];
  longlong *local_res20;
  undefined1 local_38 [8];
  TRange<FFrameNumber> local_30;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar5 = local_res20;
  uVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetPlaybackStart on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(*local_res20 + 0x2f8))(local_res20);
  if (this != (UMovieScene *)0x0) {
    lVar7 = (**(code **)(*plVar5 + 0x2f8))(plVar5);
    if (lVar7 == 0) {
      FVar9.Numerator = 60000;
      FVar9.Denominator = 1;
    }
    else {
      FVar9 = *(FFrameRate *)(lVar7 + 0x140);
    }
    local_30.LowerBound.Type.Value = (this->PlaybackRange).Value.LowerBound.Type.Value;
    local_30.LowerBound._1_3_ = *(undefined3 *)&(this->PlaybackRange).Value.LowerBound.field_0x1;
    local_30.LowerBound.Value.Value = (this->PlaybackRange).Value.LowerBound.Value.Value;
    local_30.UpperBound.Type.Value = (this->PlaybackRange).Value.UpperBound.Type.Value;
    local_30.UpperBound._1_3_ = *(undefined3 *)&(this->PlaybackRange).Value.UpperBound.field_0x1;
    local_30.UpperBound.Value.Value = (this->PlaybackRange).Value.UpperBound.Value.Value;
    (**(code **)(*plVar5 + 0x2f8))(plVar5);
    FVar3.Denominator = 0;
    FVar3.Numerator = uVar4;
    FVar8 = ConvertFrameTime((FFrameTime)local_38,FVar3,FVar9);
    if ((local_30.LowerBound.Type.Value == '\x02') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,0x73,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_30.LowerBound.Value.Value = *(int *)FVar8;
    UMovieScene::SetPlaybackRange(this,&local_30,true);
  }
  return;
}

// execSetPlaybackStartSeconds @ 14c6b7da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetPlaybackStartSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  UMovieScene *this;
  longlong lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  float local_res10 [2];
  longlong *local_res20;
  TRange<FFrameNumber> local_40 [3];
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar3 = local_res20;
  fVar11 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetPlaybackStartSeconds on a null sequence",Error,(FName)0x0);
  }
  else {
    this = (UMovieScene *)(**(code **)(*local_res20 + 0x2f8))(local_res20);
    if (this != (UMovieScene *)0x0) {
      local_40[0].LowerBound.Type.Value = (this->PlaybackRange).Value.LowerBound.Type.Value;
      local_40[0].LowerBound._1_3_ =
           *(undefined3 *)&(this->PlaybackRange).Value.LowerBound.field_0x1;
      local_40[0].LowerBound.Value.Value = (this->PlaybackRange).Value.LowerBound.Value.Value;
      local_40[0].UpperBound.Type.Value = (this->PlaybackRange).Value.UpperBound.Type.Value;
      local_40[0].UpperBound._1_3_ =
           *(undefined3 *)&(this->PlaybackRange).Value.UpperBound.field_0x1;
      local_40[0].UpperBound.Value.Value = (this->PlaybackRange).Value.UpperBound.Value.Value;
      lVar6 = (**(code **)(*plVar3 + 0x2f8))(plVar3);
      if (lVar6 == 0) {
        uVar7 = 0x10000ea60;
      }
      else {
        uVar7 = *(undefined8 *)(lVar6 + 0x138);
      }
      dVar10 = ((double)(int)uVar7 * (double)fVar11) / (double)(int)((ulonglong)uVar7 >> 0x20);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar10;
      auVar9 = roundpd(in_XMM2,auVar9,1);
      dVar8 = auVar9._0_8_;
      dVar10 = dVar10 - dVar8;
      if (__real_41dfffffffc00000 <= dVar8) {
        dVar8 = __real_41dfffffffc00000;
      }
      if (dVar8 <= __real_c1e0000000000000) {
        dVar8 = __real_c1e0000000000000;
      }
      iVar5 = (int)dVar10;
      fVar11 = (float)dVar10 - (float)iVar5;
      if ((0.0 < fVar11) && (::FFrameTime::MaxSubframe <= fVar11)) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      if (::FFrameTime::MaxSubframe <= fVar11) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      iVar5 = (int)dVar8 + iVar5;
      if (__real_3f000000 <= fVar11) {
        iVar5 = iVar5 + 1;
      }
      if (local_40[0].LowerBound.Type.Value == '\x02') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,0x73,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_40[0].LowerBound.Value.Value = iVar5;
      UMovieScene::SetPlaybackRange(this,local_40,true);
    }
  }
  return;
}

// execSetReadOnly @ 14c6b8630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetReadOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  longlong local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == 0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetReadOnly on a null sequence",Error,(FName)0x0);
  }
  return;
}

// execSetTickResolution @ 14c6b8fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetTickResolution(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  UMovieScene *pUVar3;
  int local_res10;
  int iStackX_14;
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 60000;
  iStackX_14 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.Denominator = iStackX_14;
  FVar2.Numerator = local_res10;
  if (local_res20 == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetTickResolution on a null sequence",Error,(FName)0x0);
    return;
  }
  pUVar3 = (UMovieScene *)(**(code **)(*local_res20 + 0x2f8))();
  if (pUVar3 != (UMovieScene *)0x0) {
    UE::MovieScene::TimeHelpers::MigrateFrameTimes(pUVar3->TickResolution,FVar2,pUVar3,false);
  }
  return;
}

// execSetTickResolutionDirectly @ 14c6b90b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetTickResolutionDirectly
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  UMovieScene *this;
  int local_res10;
  int iStackX_14;
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 60000;
  iStackX_14 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.Denominator = iStackX_14;
  FVar2.Numerator = local_res10;
  if (local_res20 == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetTickResolutionDirectly on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(*local_res20 + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    UMovieScene::SetTickResolutionDirectly(this,FVar2);
  }
  return;
}

// execSetViewRangeEnd @ 14c6b9a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetViewRangeEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetViewRangeEnd on a null sequence",Error,(FName)0x0);
    return;
  }
  (**(code **)(*local_res10[0] + 0x2f8))();
  return;
}

// execSetViewRangeStart @ 14c6b9b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetViewRangeStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetViewRangeStart on a null sequence",Error,(FName)0x0);
    return;
  }
  (**(code **)(*local_res10[0] + 0x2f8))();
  return;
}

// execSetWorkRangeEnd @ 14c6b9c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetWorkRangeEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetWorkRangeEnd on a null sequence",Error,(FName)0x0);
    return;
  }
  (**(code **)(*local_res10[0] + 0x2f8))();
  return;
}

// execSetWorkRangeStart @ 14c6b9cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSetWorkRangeStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (longlong *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetWorkRangeStart on a null sequence",Error,(FName)0x0);
    return;
  }
  (**(code **)(*local_res10[0] + 0x2f8))();
  return;
}

// execSortMarkedFrames @ 14c6b9dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSequenceExtensions::execSortMarkedFrames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieScene *this;
  longlong *local_res10 [2];
  longlong *local_res20;
  
  local_res10[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (longlong *)0x0) {
    local_res20 = local_res10[0];
    FFrame::KismetExecutionMessage
              (L"Cannot call SortMarkedFrames on a null sequence",Error,(FName)0x0);
    return;
  }
  this = (UMovieScene *)(**(code **)(*local_res10[0] + 0x2f8))();
  if (this != (UMovieScene *)0x0) {
    UMovieScene::SortMarkedFrames(this);
  }
  return;
}

