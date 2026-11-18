// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 1

// Update @ 14d9aa1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAudioGameplayVolumeListener::Update
          (FAudioGameplayVolumeListener *this,FAudioProxyMutatorSearchResult *param_1,
          TVector<double> *param_2,uint param_3)

{
  int *piVar1;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_01;
  TArray<TSharedPtr<FProxyVolumeMutator,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TSharedPtr<FProxyVolumeMutator,1> *pTVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_128 [32];
  undefined1 local_e8;
  undefined1 local_e7 [15];
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> local_d8;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar7 = IsInAudioThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\AudioGameplayVolumeListener.cpp"
                       ,0x3d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  this_00 = &this->PreviousProxies;
  (this->Position).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar6;
  this_01 = &this->CurrentProxies;
  (this->Position).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  if (this_00 != this_01) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Move<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>_>(this_00,this_01);
  }
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::operator=
            (this_01,&param_1->VolumeSet);
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Difference
            (this_01,&local_88,this_00);
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Difference
            (this_00,&local_d8,this_01);
  if (((this->OwningDeviceId != param_3) || (local_88.Elements._8_4_ != local_88.Elements._52_4_))
     || (local_d8.Elements._8_4_ != local_d8.Elements._52_4_)) {
    this->OwningDeviceId = param_3;
    pTVar2 = &this->ActiveMutators;
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    iVar3 = (this->ActiveMutators).ArrayNum;
    pFVar10 = pFVar9 + (longlong)iVar3 * 0x10;
    while( true ) {
      iVar8 = (this->ActiveMutators).ArrayNum;
      if (iVar8 != iVar3) {
        local_e8 = 0;
        `TCheckedPointerIterator<TSharedPtr<FProxyVolumeMutator,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_e8);
        iVar8 = (this->ActiveMutators).ArrayNum;
      }
      if (pFVar9 == pFVar10) break;
      if (*(longlong *)pFVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      (**(code **)(**(longlong **)pFVar9 + 0x30))(*(longlong **)pFVar9,this);
      pFVar9 = pFVar9 + 0x10;
    }
    if (pTVar2 != &param_1->MatchingMutators) {
      DestructItems<TSharedPtr<FProxyVolumeMutator,1>,int>
                ((TSharedPtr<FProxyVolumeMutator,1> *)(pTVar2->AllocatorInstance).Data,iVar8);
      iVar3 = (param_1->MatchingMutators).ArrayNum;
      piVar1 = &(this->ActiveMutators).ArrayMax;
      pTVar4 = (TSharedPtr<FProxyVolumeMutator,1> *)
               (param_1->MatchingMutators).AllocatorInstance.Data;
      (this->ActiveMutators).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
        ConstructItems<TSharedPtr<FProxyVolumeMutator,1>,TSharedPtr<FProxyVolumeMutator,1>,int>
                  ((pTVar2->AllocatorInstance).Data,pTVar4,iVar3);
      }
    }
    iVar3 = (this->ActiveMutators).ArrayNum;
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    pFVar10 = pFVar9 + (longlong)iVar3 * 0x10;
    while( true ) {
      if ((this->ActiveMutators).ArrayNum != iVar3) {
        local_e7[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FProxyVolumeMutator,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_e7);
      }
      if (pFVar9 == pFVar10) break;
      if (*(longlong *)pFVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      (**(code **)(**(longlong **)pFVar9 + 0x18))(*(longlong **)pFVar9,this);
      pFVar9 = pFVar9 + 0x10;
    }
    FInterpolatedInteriorSettings::Apply(&this->InteriorSettings,&param_1->InteriorSettings);
  }
  FInterpolatedInteriorSettings::UpdateInteriorValues(&this->InteriorSettings);
  local_d8.HashSize = 0;
  if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8.Elements);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return;
}

