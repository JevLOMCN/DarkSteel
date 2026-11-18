// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 5

// FAudioGameplayVolumeProxyInfo @ 14d99edd0

FAudioGameplayVolumeProxyInfo * __thiscall
FAudioGameplayVolumeProxyInfo::FAudioGameplayVolumeProxyInfo
          (FAudioGameplayVolumeProxyInfo *this,FAudioGameplayVolumeProxyInfo *param_1)

{
  *(undefined8 *)&(this->CurrentProxies).Elements = 0;
  *(undefined8 *)&(this->CurrentProxies).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CurrentProxies).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CurrentProxies).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentProxies).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentProxies).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentProxies).Elements.field_0x34 = 0;
  (this->CurrentProxies).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CurrentProxies).HashSize = 0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Move<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>_>
            (&this->CurrentProxies,&param_1->CurrentProxies);
  *(undefined8 *)&(this->PreviousProxies).Elements = 0;
  *(undefined8 *)&(this->PreviousProxies).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PreviousProxies).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PreviousProxies).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PreviousProxies).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PreviousProxies).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreviousProxies).Elements.field_0x34 = 0;
  (this->PreviousProxies).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PreviousProxies).HashSize = 0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Move<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>_>
            (&this->PreviousProxies,&param_1->PreviousProxies);
  (this->ListenerIndexes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ListenerIndexes).AllocatorInstance.Data = (param_1->ListenerIndexes).AllocatorInstance.Data
  ;
  (param_1->ListenerIndexes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ListenerIndexes).ArrayNum = (param_1->ListenerIndexes).ArrayNum;
  (this->ListenerIndexes).ArrayMax = (param_1->ListenerIndexes).ArrayMax;
  (param_1->ListenerIndexes).ArrayNum = 0;
  (param_1->ListenerIndexes).ArrayMax = 0;
  return this;
}

// ~FAudioGameplayVolumeProxyInfo @ 14d9a00f0

void __thiscall
FAudioGameplayVolumeProxyInfo::~FAudioGameplayVolumeProxyInfo(FAudioGameplayVolumeProxyInfo *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  pFVar1 = (this->ListenerIndexes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PreviousProxies).HashSize = 0;
  FVar2 = (this->PreviousProxies).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PreviousProxies).Elements);
  (this->CurrentProxies).HashSize = 0;
  FVar2 = (this->CurrentProxies).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AddListenerIndex @ 14d9a1d20

void __thiscall
FAudioGameplayVolumeProxyInfo::AddListenerIndex(FAudioGameplayVolumeProxyInfo *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->ListenerIndexes).ArrayNum;
  piVar1 = &(this->ListenerIndexes).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->ListenerIndexes).AllocatorInstance,piVar1);
  }
  (this->ListenerIndexes).ArrayNum = iVar2 + 1;
  *(int *)((this->ListenerIndexes).AllocatorInstance.Data + (longlong)iVar2 * 4) = param_1;
  return;
}

// IsVolumeInCurrentList @ 14d9a79b0

bool __thiscall
FAudioGameplayVolumeProxyInfo::IsVolumeInCurrentList
          (FAudioGameplayVolumeProxyInfo *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->CurrentProxies).Elements.field_0x8 !=
      *(int *)&(this->CurrentProxies).Elements.field_0x34) {
    FVar3 = (this->CurrentProxies).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->CurrentProxies).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->CurrentProxies).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->CurrentProxies).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == param_1) goto LAB_14d9a79fc;
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14d9a79fc:
  return iVar2 != -1;
}

// Update @ 14d9aa490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAudioGameplayVolumeProxyInfo::Update
          (FAudioGameplayVolumeProxyInfo *this,
          TArray<FAudioGameplayVolumeListener,TSizedDefaultAllocator<32>_> *param_1,
          FAudioGameplayProxyUpdateResult *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  FAudioGameplayProxyUpdateResult *pFVar5;
  bool bVar6;
  uint uVar7;
  FAudioGameplayProxyUpdateResult *pFVar8;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [8];
  FAudioGameplayProxyUpdateResult *local_f0;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> local_e8;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_f0 = param_2;
  bVar6 = IsInAudioThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeSubsystem.cpp"
                       ,0x90,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar9 = &this->PreviousProxies;
  if ((FAudioGameplayVolumeProxyInfo *)pTVar9 != this) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Move<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>_>
              (pTVar9,&this->CurrentProxies);
  }
  pFVar10 = (this->ListenerIndexes).AllocatorInstance.Data;
  iVar2 = (this->ListenerIndexes).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->ListenerIndexes).ArrayNum != iVar2) {
      local_f8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (pFVar10 == pFVar1) break;
    uVar3 = *(uint *)pFVar10;
    if ((int)uVar3 <= param_1->ArrayNum) {
      uVar7 = 0;
      if ((int)uVar3 < param_1->ArrayNum) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>
                (&this->CurrentProxies,
                 (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                 ((param_1->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x138 + 0x88));
    }
    pFVar10 = pFVar10 + 4;
  }
  (this->ListenerIndexes).ArrayNum = 0;
  if ((this->ListenerIndexes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ListenerIndexes).AllocatorInstance,0,&(this->ListenerIndexes).ArrayMax)
    ;
  }
  pFVar8 = (FAudioGameplayProxyUpdateResult *)
           TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Difference
                     (&this->CurrentProxies,&local_e8,pTVar9);
  pFVar5 = local_f0;
  if (local_f0 != pFVar8) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Move<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>_>
              (&local_f0->EnteredProxies,
               (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)pFVar8);
  }
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  pTVar9 = TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Difference
                     (pTVar9,&local_98,&this->CurrentProxies);
  if (&pFVar5->ExitedProxies != pTVar9) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Move<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>_>
              (&pFVar5->ExitedProxies,pTVar9);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

