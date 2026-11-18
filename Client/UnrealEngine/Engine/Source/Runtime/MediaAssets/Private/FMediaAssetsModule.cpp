// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 14

// Exec_Runtime @ 146c12560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FMediaAssetsModule::Exec_Runtime
          (FMediaAssetsModule *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  wchar_t *local_res18 [2];
  FString local_48;
  TObjectIterator<UMediaPlayer> local_38;
  TObjectIterator<UMediaPlayer> local_20;
  
  local_res18[0] = param_2;
  bVar2 = FParse::Command(local_res18,L"MEDIA",true);
  if (!bVar2) {
    return false;
  }
  FParse::Token(&local_48,local_res18,false);
  iVar4 = ::FString::Find(&local_48,L"PLAY",4,IgnoreCase,FromStart,-1);
  if (iVar4 == -1) {
    iVar4 = ::FString::Find(&local_48,L"PAUSE",5,IgnoreCase,FromStart,-1);
    if (iVar4 == -1) goto LAB_146c1276b;
    local_20.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_20.ObjectArray.ArrayNum = 0;
    local_20.ObjectArray.ArrayMax = 0;
    local_20.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar7 = UMediaPlayer::StaticClass();
    GetObjectsOfClass(pUVar7,&local_20.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UMediaPlayer>::Advance(&local_20);
      lVar9 = (longlong)local_20.Index;
      FVar8.Data = local_20.ObjectArray.AllocatorInstance.Data;
      if ((local_20.Index < 0) || (local_20.ObjectArray.ArrayNum <= local_20.Index)) break;
      uVar6 = 0;
      if (local_20.Index < local_20.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_20.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      UMediaPlayer::Pause(*(UMediaPlayer **)
                           (local_20.ObjectArray.AllocatorInstance.Data + lVar9 * 8));
    }
  }
  else {
    local_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ObjectArray.ArrayNum = 0;
    local_38.ObjectArray.ArrayMax = 0;
    local_38.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar7 = UMediaPlayer::StaticClass();
    GetObjectsOfClass(pUVar7,&local_38.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UMediaPlayer>::Advance(&local_38);
      lVar9 = (longlong)local_38.Index;
      FVar8.Data = local_38.ObjectArray.AllocatorInstance.Data;
      if ((local_38.Index < 0) || (local_38.ObjectArray.ArrayNum <= local_38.Index)) break;
      uVar6 = 0;
      if (local_38.Index < local_38.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_38.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      UMediaPlayer::Play(*(UMediaPlayer **)(local_38.ObjectArray.AllocatorInstance.Data + lVar9 * 8)
                        );
    }
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
LAB_146c1276b:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return true;
}

// RegisterGetPlayerFromObject @ 146c127a0

int __thiscall
FMediaAssetsModule::RegisterGetPlayerFromObject
          (FMediaAssetsModule *this,
          TDelegate<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)&(this->GetPlayerFromObjectDelegates).AllocatorInstance.Data;
  if (((TDelegate<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy> *)
       this->_padding_ <= param_1) &&
     (param_1 < (TDelegate<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
                 *)this->_padding_ +
                *(int *)((longlong)&(this->GetPlayerFromObjectDelegates).AllocatorInstance.Data + 4)
     )) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar5 = *(int *)&(this->GetPlayerFromObjectDelegates).AllocatorInstance.Data;
  piVar1 = (int *)((longlong)&(this->GetPlayerFromObjectDelegates).AllocatorInstance.Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&(this->GetPlayerFromObjectDelegates).AllocatorInstance.Data = iVar5 + 1;
  TDelegate<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>::
  TDelegate<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>
            ((TDelegate<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy> *)
             (this->_padding_ + (longlong)iVar5 * 0x18),param_1);
  return iVar4;
}

// UnregisterGetPlayerFromObject @ 146c12870

void __thiscall
FMediaAssetsModule::UnregisterGetPlayerFromObject(FMediaAssetsModule *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->GetPlayerFromObjectDelegates).AllocatorInstance.Data) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             (this->_padding_ + (longlong)param_1 * 0x18));
  return;
}

// GetPlayerFromObject @ 146c128f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UMediaPlayer * __thiscall
FMediaAssetsModule::GetPlayerFromObject(FMediaAssetsModule *this,UObject *param_1,UObject **param_2)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  UMediaPlayer *pUVar5;
  atomic<unsigned___int64> aVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  undefined1 local_res8 [8];
  UObject *local_res10;
  UObject **local_res18;
  FReadAccessScope local_58;
  
  pUVar5 = (UMediaPlayer *)0x0;
  *param_2 = (UObject *)0x0;
  iVar2 = *(int *)&(this->GetPlayerFromObjectDelegates).AllocatorInstance.Data;
  this_00 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this->_padding_;
  pTVar1 = this_00 + (longlong)iVar2 * 3;
  local_res10 = param_1;
  local_res18 = param_2;
  do {
    if (*(int *)&(this->GetPlayerFromObjectDelegates).AllocatorInstance.Data != iVar2) {
      `TCheckedPointerIterator<TDelegate<UMediaPlayer_*___cdecl(UObject_*,UObject_*_&),FDefaultDelegateUserPolicy>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pTVar1) {
      return pUVar5;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_58);
    if (((*(int *)&this_00[2].AccessDetector.State == 0) ||
        (aVar6 = this_00[1].AccessDetector.State, aVar6 == (atomic<unsigned___int64>)0x0)) ||
       (cVar4 = (**(code **)(*(longlong *)aVar6 + 0x38))(), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_58);
      if (*(int *)&this_00[2].AccessDetector.State == 0) {
        aVar6 = (atomic<unsigned___int64>)0x0;
      }
      else {
        aVar6 = this_00[1].AccessDetector.State;
      }
      pUVar5 = (UMediaPlayer *)
               (**(code **)(*(longlong *)aVar6 + 0x60))(aVar6,local_res10,local_res18);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      if (pUVar5 != (UMediaPlayer *)0x0) {
        return pUVar5;
      }
    }
    this_00 = this_00 + 3;
  } while( true );
}

// RegisterCreateMediaSourceRenderer @ 146c12a10

void __thiscall
FMediaAssetsModule::RegisterCreateMediaSourceRenderer
          (FMediaAssetsModule *this,
          TDelegate<UObject_*___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  int *this_00;
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  this_00 = &(this->FileExtensions).ArrayNum;
  if (param_1 != (TDelegate<UObject_*___cdecl(void),FDefaultDelegateUserPolicy> *)this_00) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// UnregisterCreateMediaSourceRenderer @ 146c12b10

void __thiscall FMediaAssetsModule::UnregisterCreateMediaSourceRenderer(FMediaAssetsModule *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FileExtensions).ArrayNum);
  return;
}

// RegisterOnMediaStateChangedEvent @ 146c12b20

FDelegateHandle __thiscall
FMediaAssetsModule::RegisterOnMediaStateChangedEvent
          (FMediaAssetsModule *this,
          TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,unsigned_char,bool),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R8;
  
  TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,unsigned_char,bool),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,unsigned_char,bool),FDefaultDelegateUserPolicy>
         *)&(this->CreateMediaSourceRendererDelegate).field_0x10,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(in_R8);
  if (*(void **)&in_R8->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&in_R8->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)in_R8)
  ;
  return (FDelegateHandle)(ulong64)param_1;
}

// UnregisterOnMediaStateChangedEvent @ 146c12b70

void __thiscall
FMediaAssetsModule::UnregisterOnMediaStateChangedEvent
          (FMediaAssetsModule *this,FDelegateHandle param_1)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 *puVar4;
  ForAnyElementType *this_01;
  uint uVar5;
  longlong lVar6;
  FDestructionSentinel local_38;
  
  if (param_1.ID != 0) {
    this_00 = &(this->CreateMediaSourceRendererDelegate).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_38);
    uVar5 = 0;
    if (0 < *(int *)&(this->OnMediaStateChanged).field_0x8) {
      lVar6 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar5 < *(int *)&(this->OnMediaStateChanged).field_0x8) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_01 = (ForAnyElementType *)(*(longlong *)&this->OnMediaStateChanged + lVar6);
        if (((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0))
           && (puVar4 = (ulong64 *)(**(code **)(*(longlong *)this_01->Data + 0x40))(),
              *puVar4 == param_1.ID)) {
          if ((*(int *)&this_01[1].Data != 0) && (this_01->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_01->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_01,0,0,0x10);
            *(undefined4 *)&this_01[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
          break;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x10;
      } while ((int)uVar5 < *(int *)&(this->OnMediaStateChanged).field_0x8);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// BroadcastOnMediaStateChangedEvent @ 146c12ce0

void __thiscall
FMediaAssetsModule::BroadcastOnMediaStateChangedEvent
          (FMediaAssetsModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          uchar param_2,bool param_3)

{
  undefined1 *this_00;
  undefined1 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_48;
  
  this_00 = &(this->CreateMediaSourceRendererDelegate).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnMediaStateChanged).field_0x14;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar4 = false;
  uVar8 = *(int *)&(this->OnMediaStateChanged).field_0x8 - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < *(int *)&(this->OnMediaStateChanged).field_0x8) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(int *)(*(longlong *)&this->OnMediaStateChanged + 8 + lVar9) == 0) ||
          (plVar2 = *(longlong **)(*(longlong *)&this->OnMediaStateChanged + lVar9),
          plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2,param_3), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  puVar1 = &(this->OnMediaStateChanged).field_0x14;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// CreateMediaSourceRenderer @ 146c12e40

UObject * __thiscall FMediaAssetsModule::CreateMediaSourceRenderer(FMediaAssetsModule *this)

{
  int *this_00;
  char cVar1;
  UObject *pUVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  this_00 = &(this->FileExtensions).ArrayNum;
  plVar3 = (longlong *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if ((*(int *)&(this->CreateMediaSourceRendererDelegate).field_0x8 != 0) &&
     (*(longlong **)&this->CreateMediaSourceRendererDelegate != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)&this->CreateMediaSourceRendererDelegate + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      if (*(int *)&(this->CreateMediaSourceRendererDelegate).field_0x8 != 0) {
        plVar3 = *(longlong **)&this->CreateMediaSourceRendererDelegate;
      }
      pUVar2 = (UObject *)(**(code **)(*plVar3 + 0x60))(plVar3);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return pUVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (UObject *)0x0;
}

// StartupModule @ 146c12ee0

void __thiscall FMediaAssetsModule::StartupModule(FMediaAssetsModule *this)

{
  int iVar1;
  ForAnyElementType FVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  ForAnyElementType local_b0;
  int local_a8;
  FDestructionSentinel local_a0;
  FDelegateAllocation *local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType local_78;
  int local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  longlong local_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_48;
  
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_a0);
  local_88 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6APEAVUMediaSource__AEBVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVUMediaSource__AEBVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = SpawnMediaSourceForString;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  iVar1 = *(int *)&(this->FileExtensions).AllocatorInstance.Data;
  lVar6 = *(longlong *)&(this->GetPlayerFromObjectDelegates).ArrayNum;
  lVar7 = (longlong)iVar1 * 0x10 + lVar6;
  do {
    if (*(int *)&(this->FileExtensions).AllocatorInstance.Data != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (lVar6 == lVar7) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_68,(FWriteAccessScope *)&local_a0);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
      return;
    }
    local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = 0;
    local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_a0);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x50))
                (local_60.DelegateAllocator,&local_80);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_80,(FWriteAccessScope *)&local_a0);
    iVar3 = local_70;
    FVar2.Data = local_78.Data;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_a0);
    if (local_a8 == 0) {
LAB_146c1306d:
      if (local_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data);
      }
    }
    else if (local_b0.Data != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)local_b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,0x10);
      local_a8 = 0;
      goto LAB_146c1306d;
    }
    local_b0.Data = FVar2.Data;
    local_a8 = iVar3;
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_80,(FWriteAccessScope *)&local_a0);
    if ((local_70 != 0) && (local_78.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_78.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,0x10);
      local_70 = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
    this_00 = (TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
               *)UMediaSource::GetSpawnFromFileExtensionDelegates();
    local_48 = &local_b8;
    local_50 = lVar6;
    TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_const_&,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_&>_>
              (this_00,(TPairInitializer<FString_const_&,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_&>
                        *)(local_res8 + 8),(bool *)&local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_a0);
    if ((local_a8 != 0) && (local_b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,0x10);
      local_a8 = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
    lVar6 = lVar6 + 0x10;
  } while( true );
}

// ShutdownModule @ 146c13240

void __thiscall FMediaAssetsModule::ShutdownModule(FMediaAssetsModule *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  *this_00;
  int iVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  FString *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)&(this->FileExtensions).AllocatorInstance.Data;
  pFVar6 = *(FString **)&(this->GetPlayerFromObjectDelegates).ArrayNum;
  pFVar7 = pFVar6 + iVar1;
  while( true ) {
    if (*(int *)&(this->FileExtensions).AllocatorInstance.Data != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar7) break;
    this_00 = (TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
               *)UMediaSource::GetSpawnFromFileExtensionDelegates();
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      iVar2 = (pFVar6->Data).ArrayNum;
      iVar4 = iVar2 + -1;
      if (iVar2 == 0) {
        pwVar5 = L"";
        iVar4 = 0;
      }
      else {
        pwVar5 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
      TSet<TTuple<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<UMediaSource_*___cdecl(FString_const_&,UObject_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FString>(this_00,uVar3,pFVar6);
    }
    pFVar6 = pFVar6 + 1;
  }
  return;
}

// SupportsDynamicReloading @ 146c132f0

bool __thiscall FMediaAssetsModule::SupportsDynamicReloading(FMediaAssetsModule *this)

{
  return false;
}

// SpawnMediaSourceForString @ 146c37b60

UMediaSource * __cdecl
FMediaAssetsModule::SpawnMediaSourceForString(FString *param_1,UObject *param_2)

{
  UFileMediaSource *this;
  
  this = NewObject<UFileMediaSource>
                   (param_2,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                    (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UFileMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  UFileMediaSource::SetFilePath(this,param_1);
  return (UMediaSource *)this;
}

