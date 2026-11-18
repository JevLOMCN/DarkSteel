// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// FMovieSceneChannelHandle @ 146093340

FMovieSceneChannelHandle * __thiscall
FMovieSceneChannelHandle::FMovieSceneChannelHandle
          (FMovieSceneChannelHandle *this,TWeakPtr<FMovieSceneChannelProxy,1> *param_1,FName param_2
          ,int param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  (this->WeakChannelProxy).Object = param_1->Object;
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  (this->WeakChannelProxy).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->ChannelTypeName = param_2;
  this->ChannelIndex = param_3;
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return this;
}

// FMovieSceneChannelHandle @ 1460933a0

FMovieSceneChannelHandle * __thiscall
FMovieSceneChannelHandle::FMovieSceneChannelHandle(FMovieSceneChannelHandle *this)

{
  (this->WeakChannelProxy).Object = (FMovieSceneChannelProxy *)0x0;
  (this->WeakChannelProxy).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChannelTypeName).ComparisonIndex = 0;
  (this->ChannelTypeName).Number = 0;
  this->ChannelIndex = -1;
  return this;
}

// Get @ 1460c8fc0

FMovieSceneChannel * __thiscall FMovieSceneChannelHandle::Get(FMovieSceneChannelHandle *this)

{
  int iVar1;
  uint uVar2;
  FMovieSceneChannelProxy *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  FMovieSceneChannelEntry *pFVar6;
  FMovieSceneChannel *pFVar7;
  FMovieSceneChannel *pFVar8;
  uint uVar9;
  FMovieSceneChannel *pFVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  
  pFVar7 = (FMovieSceneChannel *)(this->WeakChannelProxy).WeakReferenceCount.ReferenceController;
  pFVar10 = (FMovieSceneChannel *)0x0;
  pFVar8 = pFVar7;
  if (pFVar7 != (FMovieSceneChannel *)0x0) {
    iVar1 = *(int *)&pFVar7->KeyAddedEvent;
    do {
      pFVar8 = pFVar10;
      if (iVar1 == 0) goto LAB_1460c9001;
      LOCK();
      iVar5 = *(int *)&pFVar7->KeyAddedEvent;
      bVar11 = iVar1 == iVar5;
      if (bVar11) {
        *(int *)&pFVar7->KeyAddedEvent = iVar1 + 1;
        iVar5 = iVar1;
      }
      UNLOCK();
      iVar1 = iVar5;
    } while (!bVar11);
    this_00 = (this->WeakChannelProxy).Object;
    pFVar8 = pFVar7;
    if ((this_00 != (FMovieSceneChannelProxy *)0x0) &&
       (pFVar6 = FMovieSceneChannelProxy::FindEntry(this_00,this->ChannelTypeName),
       pFVar10 = (FMovieSceneChannel *)0x0, pFVar6 != (FMovieSceneChannelEntry *)0x0)) {
      iVar1 = (pFVar6->Channels).ArrayNum;
      pFVar3 = (pFVar6->Channels).AllocatorInstance.Data;
      if ((iVar1 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FMovieSceneChannel *)(*pcVar4)();
        return pFVar7;
      }
      if ((this->ChannelIndex < 0) || (iVar1 <= this->ChannelIndex)) {
        local_res8[0] = 0;
        bVar11 = `FMovieSceneChannelHandle::Get'::__l9::<lambda_1>::operator()(local_res8);
        if (!bVar11) goto LAB_1460c9001;
      }
      uVar2 = this->ChannelIndex;
      uVar9 = 0;
      if ((int)uVar2 < iVar1) {
        uVar9 = ~uVar2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FMovieSceneChannel *)(*pcVar4)();
        return pFVar7;
      }
      pFVar10 = *(FMovieSceneChannel **)(pFVar3 + (longlong)(int)uVar2 * 8);
    }
  }
LAB_1460c9001:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  return pFVar10;
}

// GetChannelIndex @ 1460c94a0

int __thiscall FMovieSceneChannelHandle::GetChannelIndex(FMovieSceneChannelHandle *this)

{
  return this->ChannelIndex;
}

// GetChannelTypeByName @ 1460c94b0

UStruct * __cdecl FMovieSceneChannelHandle::GetChannelTypeByName(FName param_1)

{
  UStruct *pUVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] =
       (FWeakObjectPtr)
       TSet<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>,0>,FDefaultSetAllocator>
       ::Find((TSet<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>,0>,FDefaultSetAllocator>
               *)&UE::MovieScene::GChannelTypeNamesToClassTypes,param_1);
  if (local_res10[0] != (FWeakObjectPtr)0x0) {
    local_res10[0] = *(FWeakObjectPtr *)((longlong)local_res10[0] + 8);
    pUVar1 = (UStruct *)FWeakObjectPtr::Get(local_res10);
    return pUVar1;
  }
  pUVar1 = (UStruct *)FWeakObjectPtr::Get(local_res10);
  return pUVar1;
}

// GetChannelTypeName @ 1460c9510

FName __thiscall FMovieSceneChannelHandle::GetChannelTypeName(FMovieSceneChannelHandle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->ChannelTypeName;
  return in_RDX;
}

// IsCastValidInternal @ 1460d8950

bool __thiscall
FMovieSceneChannelHandle::IsCastValidInternal(FMovieSceneChannelHandle *this,UStruct *param_1)

{
  int iVar1;
  int iVar2;
  TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_> *pTVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [4];
  
  if ((FName)param_1->_padding_ == this->ChannelTypeName) {
    return true;
  }
  pTVar3 = TSet<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                   *)&UE::MovieScene::GChannelTypeNamesToClassTypes,this->ChannelTypeName);
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  if (pTVar3 != (TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_> *)0x0) {
    local_res8[0].ObjectIndex = *(int *)&pTVar3->field_0x8;
    local_res8[0].ObjectSerialNumber = *(int *)&pTVar3->field_0xc;
  }
  pUVar4 = FWeakObjectPtr::Get(local_res8);
  if (pUVar4 != (UObject *)0x0) {
    iVar1 = (int)param_1->_padding_;
    iVar2 = *(int *)&pUVar4[1].field_0x10;
    if (iVar1 <= iVar2) {
      if ((longlong *)*(undefined1 **)(*(longlong *)&pUVar4[1].field_0x8 + (longlong)iVar1 * 8) ==
          &param_1->_padding_) {
        return true;
      }
      if (iVar1 < iVar2) {
        return false;
      }
    }
    if (*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) == &pUVar4[1].field_0x8) {
      return true;
    }
  }
  return false;
}

// TrackChannelTypeNameInternal @ 1460fa350

void __cdecl FMovieSceneChannelHandle::TrackChannelTypeNameInternal(UStruct *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  TPairInitializer<FName_const_&,TWeakObjectPtr<UStruct,FWeakObjectPtr>_&&> local_res8;
  longlong local_res18;
  longlong *local_18;
  TWeakObjectPtr<UStruct,FWeakObjectPtr> **local_10;
  
  lVar2 = param_1->_padding_;
  local_res18 = lVar2;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  if (UE::MovieScene::GChannelTypeNamesToClassTypes._8_4_ !=
      UE::MovieScene::GChannelTypeNamesToClassTypes._52_4_) {
    lVar4 = 0x154bef738;
    if (UE::MovieScene::GChannelTypeNamesToClassTypes._64_8_ != 0) {
      lVar4 = UE::MovieScene::GChannelTypeNamesToClassTypes._64_8_;
    }
    for (iVar1 = *(int *)(lVar4 + (ulonglong)
                                  (UE::MovieScene::GChannelTypeNamesToClassTypes._72_4_ - 1 &
                                  (int)((ulonglong)lVar2 >> 0x20) + uVar3) * 4); iVar1 != -1;
        iVar1 = *(int *)(UE::MovieScene::GChannelTypeNamesToClassTypes._0_8_ + 0x10 +
                        (longlong)iVar1 * 0x18)) {
      if (*(longlong *)
           (UE::MovieScene::GChannelTypeNamesToClassTypes._0_8_ + (longlong)iVar1 * 0x18) == lVar2)
      {
        return;
      }
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.Value = (TWeakObjectPtr<UStruct,FWeakObjectPtr> *)0x0;
  local_res8.Key = (FName *)param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.Value,(FObjectPtr)&local_res8);
  local_18 = &local_res18;
  local_10 = &local_res8.Value;
  TSet<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TWeakObjectPtr<UStruct,FWeakObjectPtr>_&&>_>
            ((TSet<TTuple<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UStruct,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)&UE::MovieScene::GChannelTypeNamesToClassTypes,&local_res8,(bool *)&local_18);
  return;
}

// operator() @ 1504e2ba0

bool __thiscall `FMovieSceneChannelHandle::Get'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7469267458562457636>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7469267458562457636>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

