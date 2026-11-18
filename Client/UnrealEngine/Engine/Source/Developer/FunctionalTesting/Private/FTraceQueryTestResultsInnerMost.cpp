// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 5

// StaticStruct @ 148c70bc0

UScriptStruct * __cdecl FTraceQueryTestResultsInnerMost::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTraceQueryTestResultsInnerMost.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UScriptStruct_FTraceQueryTestResultsInnerMost.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost,(UObject *)pUVar1
                         ,L"TraceQueryTestResultsInnerMost");
  }
  return Z_Registration_Info_UScriptStruct_FTraceQueryTestResultsInnerMost.OuterSingleton;
}

// operator= @ 148c81540

FTraceQueryTestResultsInnerMost * __thiscall
FTraceQueryTestResultsInnerMost::operator=
          (FTraceQueryTestResultsInnerMost *this,FTraceQueryTestResultsInnerMost *param_1)

{
  int *piVar1;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FTraceQueryTestNames,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FHitResult *pFVar5;
  FScriptContainerElement *_Src;
  undefined8 uVar6;
  FName FVar7;
  float fVar8;
  float fVar9;
  FTraceQueryTestResultsInnerMost *pFVar10;
  longlong lVar11;
  FTraceQueryTestResultsInnerMost *pFVar12;
  
  lVar11 = 2;
  pFVar10 = this;
  pFVar12 = param_1;
  do {
    fVar8 = (pFVar12->SingleHit).Time;
    fVar9 = (pFVar12->SingleHit).Distance;
    iVar4 = (pFVar12->SingleHit)._padding_;
    (pFVar10->SingleHit).FaceIndex = (pFVar12->SingleHit).FaceIndex;
    (pFVar10->SingleHit).Time = fVar8;
    (pFVar10->SingleHit).Distance = fVar9;
    (pFVar10->SingleHit)._padding_ = iVar4;
    uVar6 = *(undefined8 *)&(pFVar12->SingleHit).Location.field_0x8;
    *(undefined8 *)&(pFVar10->SingleHit).Location = *(undefined8 *)&(pFVar12->SingleHit).Location;
    *(undefined8 *)&(pFVar10->SingleHit).Location.field_0x8 = uVar6;
    uVar6 = *(undefined8 *)&(pFVar12->SingleHit).ImpactPoint;
    *(undefined8 *)&(pFVar10->SingleHit).Location.field_0x10 =
         *(undefined8 *)&(pFVar12->SingleHit).Location.field_0x10;
    *(undefined8 *)&(pFVar10->SingleHit).ImpactPoint = uVar6;
    uVar6 = *(undefined8 *)&(pFVar12->SingleHit).ImpactPoint.field_0x10;
    *(undefined8 *)&(pFVar10->SingleHit).ImpactPoint.field_0x8 =
         *(undefined8 *)&(pFVar12->SingleHit).ImpactPoint.field_0x8;
    *(undefined8 *)&(pFVar10->SingleHit).ImpactPoint.field_0x10 = uVar6;
    uVar6 = *(undefined8 *)&(pFVar12->SingleHit).Normal.field_0x8;
    *(undefined8 *)&(pFVar10->SingleHit).Normal = *(undefined8 *)&(pFVar12->SingleHit).Normal;
    *(undefined8 *)&(pFVar10->SingleHit).Normal.field_0x8 = uVar6;
    uVar6 = *(undefined8 *)&(pFVar12->SingleHit).ImpactNormal;
    *(undefined8 *)&(pFVar10->SingleHit).Normal.field_0x10 =
         *(undefined8 *)&(pFVar12->SingleHit).Normal.field_0x10;
    *(undefined8 *)&(pFVar10->SingleHit).ImpactNormal = uVar6;
    uVar6 = *(undefined8 *)&(pFVar12->SingleHit).ImpactNormal.field_0x10;
    *(undefined8 *)&(pFVar10->SingleHit).ImpactNormal.field_0x8 =
         *(undefined8 *)&(pFVar12->SingleHit).ImpactNormal.field_0x8;
    *(undefined8 *)&(pFVar10->SingleHit).ImpactNormal.field_0x10 = uVar6;
    uVar6 = *(undefined8 *)&(pFVar12->SingleHit).TraceStart.field_0x8;
    *(undefined8 *)&(pFVar10->SingleHit).TraceStart =
         *(undefined8 *)&(pFVar12->SingleHit).TraceStart;
    *(undefined8 *)&(pFVar10->SingleHit).TraceStart.field_0x8 = uVar6;
    lVar11 = lVar11 + -1;
    pFVar10 = (FTraceQueryTestResultsInnerMost *)&(pFVar10->SingleHit).TraceStart.field_0x10;
    pFVar12 = (FTraceQueryTestResultsInnerMost *)&(pFVar12->SingleHit).TraceStart.field_0x10;
  } while (lVar11 != 0);
  FVar7 = (param_1->SingleNames).PhysicalMaterialName;
  pTVar2 = &this->MultiHits;
  (this->SingleNames).ComponentName = (param_1->SingleNames).ComponentName;
  (this->SingleNames).PhysicalMaterialName = FVar7;
  (this->SingleNames).ActorName = (param_1->SingleNames).ActorName;
  this->bSingleResult = param_1->bSingleResult;
  if (pTVar2 != &param_1->MultiHits) {
    iVar4 = (param_1->MultiHits).ArrayNum;
    piVar1 = &(this->MultiHits).ArrayMax;
    pFVar5 = (FHitResult *)(param_1->MultiHits).AllocatorInstance.Data;
    (this->MultiHits).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x100,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      ConstructItems<FHitResult,FHitResult,int>((pTVar2->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  pTVar3 = &this->MultiNames;
  if (pTVar3 != &param_1->MultiNames) {
    iVar4 = (param_1->MultiNames).ArrayNum;
    piVar1 = &(this->MultiNames).ArrayMax;
    _Src = (param_1->MultiNames).AllocatorInstance.Data;
    (this->MultiNames).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x18);
      }
    }
  }
  this->bMultiResult = param_1->bMultiResult;
  return this;
}

// AssertEqual @ 148c84780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FTraceQueryTestResultsInnerMost::AssertEqual
          (FTraceQueryTestResultsInnerMost *this,FTraceQueryTestResultsInnerMost *param_1,
          FString *param_2,UObject *param_3,AFunctionalTest *param_4)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pcVar1 = *(code **)(param_4->_padding_ + 0x7a0);
  ::FString::PrintfImpl(&local_a8,L"%s:bSingleResult");
  cVar3 = (*pcVar1)(param_4,this->bSingleResult,param_1->bSingleResult,&local_a8,param_3);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (cVar3 == '\0') {
    bVar4 = false;
  }
  else {
    ::FString::PrintfImpl(&local_98,L"%s_SingleHit");
    bVar4 = HelperAssertFHitResultEqual
                      (&this->SingleHit,&param_1->SingleHit,&local_98,param_3,param_4);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_88,L"%s_SingleHit");
    bVar5 = HelperAssertNamesEqual
                      (&this->SingleNames,&param_1->SingleNames,&local_88,param_3,param_4);
    bVar4 = bVar4 && bVar5;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  pcVar1 = *(code **)(param_4->_padding_ + 0x7a0);
  ::FString::PrintfImpl(&local_78,L"%s:bMultiResult");
  cVar3 = (*pcVar1)(param_4,this->bMultiResult,param_1->bMultiResult,&local_78,param_3);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (cVar3 != '\0') {
    pcVar1 = *(code **)(param_4->_padding_ + 0x778);
    ::FString::PrintfImpl(&local_68,L"%s:MultiHitsNum");
    cVar3 = (*pcVar1)(param_4,(this->MultiHits).ArrayNum,0,(param_1->MultiHits).ArrayNum,&local_68,
                      param_3);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (cVar3 != '\0') {
      uVar10 = 0;
      if ((this->MultiHits).ArrayNum < 1) {
        return bVar4;
      }
      while( true ) {
        ::FString::PrintfImpl(&local_58,L"%s_MultiHit[%d]");
        uVar11 = ~uVar10 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar10 < (param_1->MultiHits).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
        pFVar2 = (param_1->MultiHits).AllocatorInstance.Data;
        lVar9 = (longlong)(int)uVar10 * 0x100;
        uVar8 = 0;
        if ((int)uVar10 < (this->MultiHits).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
        bVar5 = HelperAssertFHitResultEqual
                          ((FHitResult *)((this->MultiHits).AllocatorInstance.Data + lVar9),
                           (FHitResult *)(pFVar2 + lVar9),&local_58,param_3,param_4);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        ::FString::PrintfImpl(&local_48,L"%s_MultiHitHit[%d]");
        uVar8 = 0;
        if ((int)uVar10 < (param_1->MultiNames).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
        pFVar2 = (param_1->MultiNames).AllocatorInstance.Data;
        lVar9 = (longlong)(int)uVar10 * 0x18;
        uVar8 = 0;
        if ((int)uVar10 < (this->MultiNames).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) break;
        bVar7 = HelperAssertNamesEqual
                          ((FTraceQueryTestNames *)
                           ((this->MultiNames).AllocatorInstance.Data + lVar9),
                           (FTraceQueryTestNames *)(pFVar2 + lVar9),&local_48,param_3,param_4);
        bVar4 = (bool)(bVar4 & bVar5 & bVar7);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        uVar10 = uVar10 + 1;
        if ((this->MultiHits).ArrayNum <= (int)uVar10) {
          return bVar4;
        }
      }
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
  }
  return false;
}

// CaptureNames @ 148c8a870

void __thiscall FTraceQueryTestResultsInnerMost::CaptureNames(FTraceQueryTestResultsInnerMost *this)

{
  int *piVar1;
  int *piVar2;
  TArray<FTraceQueryTestNames,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  CaptureNameHelper(&this->SingleNames,&this->SingleHit);
  pTVar3 = &this->MultiNames;
  piVar1 = &(this->MultiNames).ArrayMax;
  (this->MultiNames).ArrayNum = 0;
  piVar2 = &(this->MultiNames).ArrayNum;
  if ((this->MultiNames).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  iVar4 = (this->MultiHits).ArrayNum;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,iVar4,&pTVar3->AllocatorInstance,piVar2,piVar1);
  memset((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 0x18,0,(longlong)iVar4 * 0x18);
  uVar10 = 0;
  if (0 < (this->MultiHits).ArrayNum) {
    do {
      uVar9 = 0;
      if ((int)uVar10 < (this->MultiHits).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->MultiHits).AllocatorInstance.Data;
      uVar9 = 0;
      if ((int)uVar10 < *piVar2) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      CaptureNameHelper((FTraceQueryTestNames *)
                        ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x18),
                        (FHitResult *)(pFVar5 + (longlong)(int)uVar10 * 0x100));
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (this->MultiHits).ArrayNum);
  }
  return;
}

// ToString @ 148c9efb0

FString * __thiscall
FTraceQueryTestResultsInnerMost::ToString
          (FTraceQueryTestResultsInnerMost *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  uint uVar5;
  int iVar6;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FHitResult::ToString(&this->SingleHit,&local_58);
  ::FName::ToString(&(this->SingleNames).PhysicalMaterialName,&local_68);
  ::FName::ToString(&(this->SingleNames).ActorName,&local_78);
  ::FName::ToString(&(this->SingleNames).ComponentName,&local_88);
  ::FString::PrintfImpl(&local_b8,L"Component:%s, Actor:%s, PhysicalMaterial:%s");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_98,L"----SingleResult:%d %s {%s}");
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_c8,L"\n----MultiResult:%d");
  uVar5 = 0;
  if (0 < (this->MultiHits).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->MultiHits).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      FHitResult::ToString
                ((FHitResult *)
                 ((this->MultiHits).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x100),&local_38
                );
      uVar3 = 0;
      if ((int)uVar5 < (this->MultiNames).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      FTraceQueryTestNames::ToString
                ((FTraceQueryTestNames *)
                 ((this->MultiNames).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18),&local_48
                );
      ::FString::PrintfImpl(&local_a8,L"\n----[%d] %s {%s}");
      iVar6 = local_a8.Data.ArrayNum + -1;
      if (local_a8.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_c8,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar6);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (this->MultiHits).ArrayNum);
  }
  iVar6 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  ::FString::AppendChars(&local_98,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar6);
  ::FString::FString(__return_storage_ptr__,&local_98);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

