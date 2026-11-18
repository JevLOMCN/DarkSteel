// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// ~FEnvQueryDebugData @ 146f2e220

void __thiscall FEnvQueryDebugData::~FEnvQueryDebugData(FEnvQueryDebugData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->PerformedTestNames).AllocatorInstance.Data,
             (this->PerformedTestNames).ArrayNum);
  pFVar1 = (this->PerformedTestNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RawData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FEnvQueryItemDetails,int>
            ((FEnvQueryItemDetails *)(this->DebugItemDetails).AllocatorInstance.Data,
             (this->DebugItemDetails).ArrayNum);
  pFVar1 = (this->DebugItemDetails).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FEnvQueryDebugProfileData::FOptionData,int>
            ((FOptionData *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FEnvQueryDebugProfileData::FOptionStat,int>
            ((FOptionStat *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// operator= @ 146f2faf0

FEnvQueryDebugData * __thiscall
FEnvQueryDebugData::operator=(FEnvQueryDebugData *this,FEnvQueryDebugData *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FEnvQueryItemDetails,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FEnvQueryItemDetails,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  
  if (this != param_1) {
    DestructItems<FEnvQueryDebugProfileData::FOptionStat,int>
              ((FOptionStat *)this->_padding_,(int)this->_padding_);
    if ((void *)this->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this->_padding_);
    }
    this->_padding_ = param_1->_padding_;
    param_1->_padding_ = 0;
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    param_1->_padding_ = 0;
  }
  plVar1 = &param_1->_padding_;
  plVar2 = &this->_padding_;
  if (plVar2 != plVar1) {
    DestructItems<FEnvQueryDebugProfileData::FOptionData,int>
              ((FOptionData *)*plVar2,(int)this->_padding_);
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    param_1->_padding_ = 0;
  }
  pTVar3 = &param_1->DebugItems;
  pTVar4 = &this->DebugItems;
  if (pTVar4 != pTVar3) {
    pFVar11 = (pTVar4->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DebugItems).ArrayNum = (param_1->DebugItems).ArrayNum;
    (this->DebugItems).ArrayMax = (param_1->DebugItems).ArrayMax;
    (param_1->DebugItems).ArrayNum = 0;
    (param_1->DebugItems).ArrayMax = 0;
  }
  pTVar5 = &param_1->DebugItemDetails;
  pTVar6 = &this->DebugItemDetails;
  if (pTVar6 != pTVar5) {
    DestructItems<FEnvQueryItemDetails,int>
              ((FEnvQueryItemDetails *)(pTVar6->AllocatorInstance).Data,
               (this->DebugItemDetails).ArrayNum);
    pFVar11 = (pTVar6->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DebugItemDetails).ArrayNum = (param_1->DebugItemDetails).ArrayNum;
    (this->DebugItemDetails).ArrayMax = (param_1->DebugItemDetails).ArrayMax;
    (param_1->DebugItemDetails).ArrayNum = 0;
    (param_1->DebugItemDetails).ArrayMax = 0;
  }
  pTVar7 = &param_1->RawData;
  pTVar8 = &this->RawData;
  if (pTVar8 != pTVar7) {
    pFVar11 = (pTVar8->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RawData).ArrayNum = (param_1->RawData).ArrayNum;
    (this->RawData).ArrayMax = (param_1->RawData).ArrayMax;
    (param_1->RawData).ArrayNum = 0;
    (param_1->RawData).ArrayMax = 0;
  }
  pTVar9 = &param_1->PerformedTestNames;
  pTVar10 = &this->PerformedTestNames;
  if (pTVar10 != pTVar9) {
    DestructItems<FString,int>
              ((FString *)(pTVar10->AllocatorInstance).Data,(this->PerformedTestNames).ArrayNum);
    pFVar11 = (pTVar10->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PerformedTestNames).ArrayNum = (param_1->PerformedTestNames).ArrayNum;
    (this->PerformedTestNames).ArrayMax = (param_1->PerformedTestNames).ArrayMax;
    (param_1->PerformedTestNames).ArrayNum = 0;
    (param_1->PerformedTestNames).ArrayMax = 0;
  }
  *(uint *)&this->field_0x60 =
       *(uint *)&this->field_0x60 ^ (this->bSingleItemResult ^ param_1->bSingleItemResult) & 1;
  this->CurrentOptionGeneratorIdx = param_1->CurrentOptionGeneratorIdx;
  return this;
}

// PrepareOption @ 146f61850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEnvQueryDebugData::PrepareOption
          (FEnvQueryDebugData *this,FEnvQueryInstance *param_1,
          TArray<UEnvQueryGenerator_*,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  FEnvQueryItemDetails *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 local_38 [2];
  
  plVar1 = &this->_padding_;
  iVar10 = 1;
  if (1 < param_2->ArrayNum) {
    iVar10 = param_2->ArrayNum;
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,1,(ForAnyElementType *)this,(int *)plVar1,
                     (int *)((longlong)&this->_padding_ + 4));
  DefaultConstructItems<FEnvQueryDebugProfileData::FOptionStat,int>
            ((void *)(this->_padding_ + (longlong)iVar7 * 0x18),1);
  uVar14 = 0;
  uVar12 = (int)*plVar1 - 1;
  uVar11 = 0;
  if ((int)uVar12 < (int)*plVar1) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar13 = this->_padding_ + (longlong)(int)*plVar1 * 0x18;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar10 + param_3,(ForAnyElementType *)(lVar13 + -0x18),
                     (int *)(lVar13 + -0x10),(int *)(lVar13 + -0xc));
  memset((void *)(*(longlong *)(lVar13 + -0x18) + (longlong)iVar7 * 8),0,
         (longlong)(iVar10 + param_3) << 3);
  uVar12 = (int)*plVar1 - 1;
  uVar11 = 0;
  if ((int)uVar12 < (int)*plVar1) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined4 *)(this->_padding_ + -8 + (longlong)(int)*plVar1 * 0x18) = 1;
  uVar11 = *(uint *)((longlong)&param_1->_padding_ + 4);
  uVar8 = 0;
  uVar12 = uVar8;
  if ((int)uVar11 < (int)this->_padding_) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(int *)(this->_padding_ + (longlong)(int)uVar11 * 0x30) = iVar10;
  iVar10 = param_2->ArrayNum;
  uVar15 = uVar14;
  if (0 < iVar10) {
    do {
      uVar12 = (uint)uVar15;
      uVar11 = uVar8;
      if ((int)uVar12 < iVar10) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(longlong *)((param_2->AllocatorInstance).Data + uVar14) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Generators[Idx]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryInstance.cpp"
                             ,0x3c,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar11 = *(uint *)((longlong)&param_1->_padding_ + 4);
      uVar9 = uVar8;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar13 = (longlong)(int)uVar11 * 0x30 + this->_padding_;
      uVar11 = uVar8;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_38[0] = *(undefined8 *)
                     (*(longlong *)((param_2->AllocatorInstance).Data + uVar14) + 0x18);
      if (((*(undefined8 **)(lVar13 + 8) <= local_38) &&
          (local_38 < *(undefined8 **)(lVar13 + 8) + *(int *)(lVar13 + 0x14))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = *(int *)(lVar13 + 0x10);
      if (iVar10 == *(int *)(lVar13 + 0x14)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,(ForAnyElementType *)(lVar13 + 8),(int *)(lVar13 + 0x14));
      }
      *(int *)(lVar13 + 0x10) = iVar10 + 1;
      uVar14 = uVar14 + 8;
      *(undefined8 *)(*(longlong *)(lVar13 + 8) + (longlong)iVar10 * 8) = local_38[0];
      iVar10 = param_2->ArrayNum;
      uVar15 = (ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < iVar10);
  }
  (this->DebugItems).ArrayNum = 0;
  if ((this->DebugItems).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->DebugItems).AllocatorInstance,0,&(this->DebugItems).ArrayMax);
  }
  piVar2 = &(this->DebugItemDetails).ArrayMax;
  pFVar3 = (FEnvQueryItemDetails *)(this->DebugItemDetails).AllocatorInstance.Data;
  iVar10 = (this->DebugItemDetails).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<FEnvQueryItemDetails,int>(pFVar3,iVar10);
    (this->DebugItemDetails).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->DebugItemDetails).AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FEnvQueryItemDetails,int>(pFVar3,iVar10);
    (this->DebugItemDetails).ArrayNum = 0;
  }
  (this->RawData).ArrayNum = 0;
  if ((this->RawData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->RawData).AllocatorInstance,0,&(this->RawData).ArrayMax);
  }
  piVar2 = &(this->PerformedTestNames).ArrayMax;
  pFVar4 = (this->PerformedTestNames).AllocatorInstance.Data;
  iVar10 = (this->PerformedTestNames).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<FString,int>((FString *)pFVar4,iVar10);
    (this->PerformedTestNames).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->PerformedTestNames).AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar4,iVar10);
    (this->PerformedTestNames).ArrayNum = 0;
  }
  this->bSingleItemResult = 0;
  return;
}

// Store @ 146f76fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEnvQueryDebugData::Store
          (FEnvQueryDebugData *this,FEnvQueryInstance *param_1,float param_2,bool param_3)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  
  iVar6 = this->CurrentOptionGeneratorIdx;
  if (iVar6 == -1) {
    uVar1 = *(uint *)((longlong)&param_1->_padding_ + 4);
    uVar5 = 0;
    if ((int)uVar1 < (int)this->_padding_) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = *(int *)(this->_padding_ + (longlong)(int)uVar1 * 0x30);
  }
  uVar1 = *(uint *)((longlong)&param_1->_padding_ + 4);
  uVar8 = param_1->CurrentTest + iVar6;
  uVar5 = 0;
  if ((int)uVar1 < (int)this->_padding_) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar8 < *(int *)(lVar2 + 8 + (longlong)(int)uVar1 * 0x18)) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + (longlong)(int)uVar1 * 0x18);
  lVar7 = (longlong)(int)uVar8;
  *(float *)(lVar2 + lVar7 * 8) = param_2 + *(float *)(lVar2 + lVar7 * 8);
  uVar1 = *(uint *)((longlong)&param_1->_padding_ + 4);
  iVar6 = param_1->NumProcessedItems;
  uVar5 = 0;
  if ((int)uVar1 < (int)this->_padding_) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar8 < *(int *)(lVar2 + 8 + (longlong)(int)uVar1 * 0x18)) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)(*(longlong *)(lVar2 + (longlong)(int)uVar1 * 0x18) + 4 + lVar7 * 8) = iVar6;
  if (param_3) {
    TArray<FEnvQueryItemDetails,TSizedDefaultAllocator<32>_>::operator=
              (&this->DebugItemDetails,&param_1->ItemDetails);
    TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_>::operator=
              (&this->DebugItems,(TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)param_1);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              (&this->RawData,
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
  }
  return;
}

