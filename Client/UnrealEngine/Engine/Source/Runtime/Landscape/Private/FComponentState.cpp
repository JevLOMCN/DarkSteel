// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 3

// FComponentState @ 145f76e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FComponentState * __thiscall
FLandscapeGrassMapsBuilder::FComponentState::FComponentState
          (FComponentState *this,ULandscapeComponent *param_1)

{
  this->Component = param_1;
  this->TickCount = 0;
  (this->TexturesToStream).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TexturesToStream).ArrayNum = 0;
  (this->TexturesToStream).ArrayMax = 0;
  (this->ActiveRender).Ptr = (FLandscapeGrassWeightExporter *)0x0;
  (this->AsyncFetchTask).Ptr = (FAsyncTask<FAsyncFetchTask> *)0x0;
  this->Stage = Pending;
  this->bInPendingHeap = false;
  return this;
}

// AreTexturesStreamedIn @ 145f823c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FLandscapeGrassMapsBuilder::FComponentState::AreTexturesStreamedIn(FComponentState *this)

{
  TArray<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  UTexture *pUVar10;
  uint uVar11;
  
  pTVar1 = &this->TexturesToStream;
  uVar11 = 0;
  while( true ) {
    if (((int)uVar11 < 0) || ((this->TexturesToStream).ArrayNum <= (int)uVar11)) {
      return true;
    }
    if (((int)uVar11 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pUVar10 = (UTexture *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar11 * 8));
    if (pUVar10 == (UTexture *)0x0) {
      uVar8 = 0;
      if ((int)uVar11 < (this->TexturesToStream).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar3 = (this->TexturesToStream).ArrayNum;
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      iVar9 = iVar3 + ~uVar11;
      if (1 < iVar9) {
        iVar9 = 1;
      }
      if (iVar9 != 0) {
        memmove(pFVar4 + (longlong)(int)uVar11 * 8,pFVar4 + (longlong)(iVar3 - iVar9) * 8,
                (longlong)iVar9 << 3);
      }
      piVar2 = &(this->TexturesToStream).ArrayNum;
      *piVar2 = *piVar2 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,&pTVar1->AllocatorInstance,(this->TexturesToStream).ArrayNum,
                 &(this->TexturesToStream).ArrayMax);
      uVar11 = uVar11 - 1;
    }
    else {
      bVar6 = FLandscapeTextureStreamingManager::IsTextureFullyStreamedIn(pUVar10);
      if (!bVar6) {
        return bVar6;
      }
    }
    uVar11 = uVar11 + 1;
  }
  pcVar5 = (code *)swi(3);
  uVar7 = (*pcVar5)();
  return (bool)uVar7;
}

// IsBeyondEvictionRange @ 145f97e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FLandscapeGrassMapsBuilder::FComponentState::IsBeyondEvictionRange
          (FComponentState *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  ULandscapeComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  double dVar5;
  float fVar6;
  TBoxSphereBounds<double,double> local_48;
  
  if (this->Stage != GrassMapsPopulated) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stage == EComponentStage::GrassMapsPopulated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassMapsBuilder.cpp"
                       ,0x6ef,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar1 = this->Component;
  (**(code **)(pUVar1->_padding_ + 0x598))(pUVar1,&local_48,&pUVar1->_padding_);
  dVar5 = UE::Landscape::CalculateMinDistanceToCamerasSquared(param_1,&local_48);
  fVar6 = (float)((double)(GGrassMapGuardBandDiscardMultiplier * GGrassCullDistanceScale) *
                 (this->Component->GrassTypeSummary).MaxInstanceDiscardDistance);
  return fVar6 * fVar6 < (float)dVar5;
}

