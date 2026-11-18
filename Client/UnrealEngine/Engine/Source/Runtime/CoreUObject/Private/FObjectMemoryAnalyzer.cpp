// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 15

// FObjectMemoryAnalyzer @ 1420e9ac0

FObjectMemoryAnalyzer * __thiscall
FObjectMemoryAnalyzer::FObjectMemoryAnalyzer
          (FObjectMemoryAnalyzer *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          uint param_2)

{
  (this->ObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectList).ArrayNum = 0;
  (this->ObjectList).ArrayMax = 0;
  (this->MemUsageAnnotations).AnnotationArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemUsageAnnotations).AnnotationArray.ArrayNum = 0;
  (this->MemUsageAnnotations).AnnotationArray.ArrayMax = 0;
  (this->MemUsageAnnotations)._padding_ =
       (longlong)&___7__FUObjectAnnotationDense_UFObjectMemoryUsage___00__6B_;
  this->BaseClass = (UClass *)0x0;
  (this->MemUsageAnnotations).AnnotationArrayCritical.Mutex.Mutex.Ptr = (void *)0x0;
  (this->MemUsageAnnotations).bRegistered = false;
  this->AnalyzeFlags = param_2;
  AnalyzeObjects(this,&this->ObjectList);
  return this;
}

// FObjectMemoryAnalyzer @ 1420e9b10

FObjectMemoryAnalyzer * __thiscall
FObjectMemoryAnalyzer::FObjectMemoryAnalyzer(FObjectMemoryAnalyzer *this,uint param_1)

{
  (this->MemUsageAnnotations)._padding_ =
       (longlong)&___7__FUObjectAnnotationDense_UFObjectMemoryUsage___00__6B_;
  (this->ObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectList).ArrayNum = 0;
  (this->ObjectList).ArrayMax = 0;
  (this->MemUsageAnnotations).AnnotationArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemUsageAnnotations).AnnotationArray.ArrayNum = 0;
  (this->MemUsageAnnotations).AnnotationArray.ArrayMax = 0;
  this->BaseClass = (UClass *)0x0;
  (this->MemUsageAnnotations).AnnotationArrayCritical.Mutex.Mutex.Ptr = (void *)0x0;
  (this->MemUsageAnnotations).bRegistered = false;
  this->AnalyzeFlags = param_1;
  return this;
}

// FObjectMemoryAnalyzer @ 1420e9b50

FObjectMemoryAnalyzer * __thiscall
FObjectMemoryAnalyzer::FObjectMemoryAnalyzer
          (FObjectMemoryAnalyzer *this,UClass *param_1,uint param_2)

{
  this->BaseClass = param_1;
  (this->ObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectList).ArrayNum = 0;
  (this->ObjectList).ArrayMax = 0;
  (this->MemUsageAnnotations).AnnotationArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemUsageAnnotations).AnnotationArray.ArrayNum = 0;
  (this->MemUsageAnnotations).AnnotationArray.ArrayMax = 0;
  (this->MemUsageAnnotations)._padding_ =
       (longlong)&___7__FUObjectAnnotationDense_UFObjectMemoryUsage___00__6B_;
  (this->MemUsageAnnotations).AnnotationArrayCritical.Mutex.Mutex.Ptr = (void *)0x0;
  (this->MemUsageAnnotations).bRegistered = false;
  this->AnalyzeFlags = param_2;
  AnalyzeObjects(this,param_1);
  return this;
}

// FObjectMemoryAnalyzer @ 1420e9ba0

FObjectMemoryAnalyzer * __thiscall
FObjectMemoryAnalyzer::FObjectMemoryAnalyzer
          (FObjectMemoryAnalyzer *this,UObject *param_1,uint param_2)

{
  (this->ObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectList).ArrayNum = 0;
  (this->ObjectList).ArrayMax = 0;
  (this->MemUsageAnnotations).AnnotationArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MemUsageAnnotations).AnnotationArray.ArrayNum = 0;
  (this->MemUsageAnnotations).AnnotationArray.ArrayMax = 0;
  (this->MemUsageAnnotations)._padding_ =
       (longlong)&___7__FUObjectAnnotationDense_UFObjectMemoryUsage___00__6B_;
  this->BaseClass = (UClass *)0x0;
  (this->MemUsageAnnotations).AnnotationArrayCritical.Mutex.Mutex.Ptr = (void *)0x0;
  (this->MemUsageAnnotations).bRegistered = false;
  this->AnalyzeFlags = param_2;
  AnalyzeObjects(this,&this->ObjectList);
  return this;
}

// AnalyzeObject @ 1420f17e0

void __thiscall FObjectMemoryAnalyzer::AnalyzeObject(FObjectMemoryAnalyzer *this,UObject *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  int iVar6;
  FObjectMemoryUsage *pFVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  UObject *local_res10;
  
  pFVar9 = (this->ObjectList).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)(this->ObjectList).ArrayNum * 8;
  for (; pFVar9 != pFVar2; pFVar9 = pFVar9 + 8) {
    if (*(UObject **)pFVar9 == param_1) {
      return;
    }
  }
  local_res10 = param_1;
  if (((this->AnalyzeFlags & 1) != 0) ||
     (bVar5 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject),
     !bVar5)) {
    pFVar2 = (this->ObjectList).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
       (((FScriptContainerElement *)&local_res10 <
         pFVar2 + (longlong)(this->ObjectList).ArrayMax * 8 &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (this->ObjectList).ArrayNum;
    piVar1 = &(this->ObjectList).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ObjectList).AllocatorInstance,piVar1);
    }
    pUVar4 = local_res10;
    (this->ObjectList).ArrayNum = iVar6 + 1;
    *(UObject **)((this->ObjectList).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res10;
    if ((local_res10 == (UObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                           ,0x584,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                       (&this->MemUsageAnnotations,*(int *)&pUVar4->field_0xc);
    if ((*(uint *)&local_res10->field_0x8 & 2) != 0) {
      pFVar7->Flags = pFVar7->Flags | 1;
    }
    ProcessSubObjRecursive(this,local_res10,local_res10);
    pUVar4 = local_res10;
    if ((local_res10 == (UObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                           ,0x584,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                       (&this->MemUsageAnnotations,*(int *)&pUVar4->field_0xc);
    uVar8 = CalculateSizeRecursive(this,local_res10);
    pFVar7->InclusiveMemoryUsage = uVar8;
  }
  return;
}

// AnalyzeObjects @ 1420f19a0

void __thiscall
FObjectMemoryAnalyzer::AnalyzeObjects
          (FObjectMemoryAnalyzer *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = param_1->ArrayNum;
  uVar4 = 0;
  if (0 < iVar6) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar6) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      AnalyzeObject(this,*(UObject **)((param_1->AllocatorInstance).Data + lVar5));
      iVar6 = param_1->ArrayNum;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < iVar6);
  }
  return;
}

// AnalyzeObjects @ 1420f1a60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FObjectMemoryAnalyzer::AnalyzeObjects(FObjectMemoryAnalyzer *this,UClass *param_1)

{
  int iVar1;
  uint uVar2;
  UObjectBaseUtility *pUVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FObjectMemoryUsage *pFVar7;
  UClass *pUVar8;
  FUObjectItem *pFVar9;
  ulong64 uVar10;
  longlong lVar11;
  EObjectFlags EVar12;
  TObjectIteratorBase<1> local_98;
  TObjectIteratorBase<1> local_70;
  TObjectIteratorBase<1> local_48;
  
  if (param_1 == (UClass *)0x0) {
    param_1 = Z_Construct_UClass_UObject_NoRegister();
  }
  EVar12 = RF_NoFlags;
  if ((this->AnalyzeFlags & 1) == 0) {
    EVar12 = RF_ArchetypeObject|RF_ClassDefaultObject;
  }
  TObjectIteratorBase<1>::TObjectIteratorBase<1>(&local_98,param_1,false,EVar12,Borrowed);
  lVar5 = local_98._padding_;
joined_r0x0001420f1ace:
  do {
    if (lVar5 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_98._padding_ + 0x30));
      TObjectIteratorBase<1>::TObjectIteratorBase<1>(&local_70,param_1,false,EVar12,Borrowed);
      lVar5 = local_70._padding_;
joined_r0x0001420f1be1:
      do {
        if (lVar5 == 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(local_70._padding_ + 0x30));
          TObjectIteratorBase<1>::TObjectIteratorBase<1>(&local_48,param_1,false,EVar12,Borrowed);
          lVar5 = local_48._padding_;
joined_r0x0001420f1d11:
          do {
            if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001420f1e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              LeaveCriticalSection((LPCRITICAL_SECTION)(local_48._padding_ + 0x30));
              return;
            }
            pUVar3 = *(UObjectBaseUtility **)(lVar5 + 8);
            if (((this->AnalyzeFlags & 1) != 0) ||
               (bVar6 = UObjectBaseUtility::IsTemplate
                                  (pUVar3,RF_ArchetypeObject|RF_ClassDefaultObject), !bVar6)) {
              if ((pUVar3 == (UObjectBaseUtility *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Object",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                                     ,0x584,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar7 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                                 (&this->MemUsageAnnotations,*(int *)&pUVar3->field_0xc);
              uVar10 = CalculateSizeRecursive(this,(UObject *)pUVar3);
              pFVar7->InclusiveMemoryUsage = uVar10;
            }
LAB_1420f1d80:
            do {
              do {
                bVar6 = FUObjectArray::TIterator::Advance((TIterator *)&local_48);
                lVar5 = local_48._padding_;
                if (!bVar6) goto joined_r0x0001420f1d11;
                if (local_48._padding_ == 0) {
                  lVar11 = 0;
                }
                else {
                  lVar11 = *(longlong *)(local_48._padding_ + 8);
                }
              } while ((local_48.ExclusionFlags & *(EObjectFlags *)(lVar11 + 8)) != RF_NoFlags);
              pUVar8 = Z_Construct_UClass_UObject_NoRegister();
              if (local_48.Class != pUVar8) {
                iVar1 = (int)(local_48.Class)->_padding_;
                if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < iVar1) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
                    &(local_48.Class)->_padding_)) goto LAB_1420f1d80;
              }
              pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar11 + 0xc));
            } while ((local_48.InternalExclusionFlags &
                     (EInternalObjectFlags)
                     ((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) != Borrowed);
          } while( true );
        }
        pUVar3 = *(UObjectBaseUtility **)(lVar5 + 8);
        if (((this->AnalyzeFlags & 1) != 0) ||
           (bVar6 = UObjectBaseUtility::IsTemplate(pUVar3,RF_ArchetypeObject|RF_ClassDefaultObject),
           !bVar6)) {
          if ((pUVar3 == (UObjectBaseUtility *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                                 ,0x584,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar7 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                             (&this->MemUsageAnnotations,*(int *)&pUVar3->field_0xc);
          if ((((pFVar7->Flags & 1) == 0) && (uVar2 = pFVar7->Flags, (uVar2 >> 1 & 1) == 0)) &&
             ((uVar2 >> 3 & 1) == 0)) {
            pFVar7->Flags = uVar2 | 1;
          }
        }
LAB_1420f1c60:
        do {
          do {
            bVar6 = FUObjectArray::TIterator::Advance((TIterator *)&local_70);
            lVar5 = local_70._padding_;
            if (!bVar6) goto joined_r0x0001420f1be1;
            if (local_70._padding_ == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = *(longlong *)(local_70._padding_ + 8);
            }
          } while ((local_70.ExclusionFlags & *(EObjectFlags *)(lVar11 + 8)) != RF_NoFlags);
          pUVar8 = Z_Construct_UClass_UObject_NoRegister();
          if (local_70.Class != pUVar8) {
            iVar1 = (int)(local_70.Class)->_padding_;
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
                &(local_70.Class)->_padding_)) goto LAB_1420f1c60;
          }
          pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar11 + 0xc));
        } while ((local_70.InternalExclusionFlags &
                 (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20))
                 != Borrowed);
      } while( true );
    }
    pUVar3 = *(UObjectBaseUtility **)(lVar5 + 8);
    if (((this->AnalyzeFlags & 1) != 0) ||
       (bVar6 = UObjectBaseUtility::IsTemplate(pUVar3,RF_ArchetypeObject|RF_ClassDefaultObject),
       !bVar6)) {
      if ((pUVar3 == (UObjectBaseUtility *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                             ,0x584,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                         (&this->MemUsageAnnotations,*(int *)&pUVar3->field_0xc);
      if ((*(uint *)&pUVar3->field_0x8 >> 1 & 1) != 0) {
        pFVar7->Flags = pFVar7->Flags | 1;
      }
      ProcessSubObjRecursive(this,(UObject *)pUVar3,(UObject *)pUVar3);
    }
LAB_1420f1b40:
    do {
      do {
        bVar6 = FUObjectArray::TIterator::Advance((TIterator *)&local_98);
        lVar5 = local_98._padding_;
        if (!bVar6) goto joined_r0x0001420f1ace;
        if (local_98._padding_ == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(longlong *)(local_98._padding_ + 8);
        }
      } while ((local_98.ExclusionFlags & *(EObjectFlags *)(lVar11 + 8)) != RF_NoFlags);
      pUVar8 = Z_Construct_UClass_UObject_NoRegister();
      if (local_98.Class != pUVar8) {
        iVar1 = (int)(local_98.Class)->_padding_;
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
            &(local_98.Class)->_padding_)) goto LAB_1420f1b40;
      }
      pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar11 + 0xc));
    } while ((local_98.InternalExclusionFlags &
             (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) !=
             Borrowed);
  } while( true );
}

// CalculateSizeRecursive @ 1420f2740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __thiscall
FObjectMemoryAnalyzer::CalculateSizeRecursive(FObjectMemoryAnalyzer *this,UObject *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 uVar5;
  FObjectMemoryUsage *pFVar6;
  ulong64 uVar7;
  FObjectMemoryUsage *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_1b8 [32];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_178;
  FArchiveState local_168;
  undefined8 local_d8;
  ulong64 local_d0;
  FReferenceFinder local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((param_1 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x584,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  pFVar6 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                     (&this->MemUsageAnnotations,*(int *)&param_1->field_0xc);
  if ((pFVar6->Flags & 4) == 0) {
    FArchiveState::FArchiveState(&local_168);
    local_d8 = 0;
    local_168._padding_ = (longlong)&___7FArchiveCountMem__6B_;
    local_d0 = 0;
    local_168.ArIsFilterEditorOnly = '\0';
    local_168.ArIsCountingMemory = '\x01';
    (**(code **)(*(longlong *)param_1 + 200))(param_1);
    pFVar6->Flags = pFVar6->Flags | 4;
    pFVar6->ExclusiveMemoryUsage = local_d0;
    FArchive::~FArchive((FArchive *)&local_168);
  }
  uVar5 = pFVar6->ExclusiveMemoryUsage;
  uVar7 = UObject::GetResourceSizeBytes(param_1,Exclusive);
  pFVar6->ExclusiveResourceSize = uVar7;
  uVar7 = UObject::GetResourceSizeBytes(param_1,EstimatedTotal);
  pFVar6->InclusiveResourceSize = uVar7;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  FReferenceFinder::FReferenceFinder(&local_c8,&local_178,param_1,false,true,true,false);
  FReferenceFinder::FindReferences(&local_c8,param_1,(UObject *)0x0,(FProperty *)0x0);
  FReferenceFinder::~FReferenceFinder(&local_c8);
  uVar10 = 0;
  if (0 < local_178.ArrayNum) {
    lVar11 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar10 < local_178.ArrayNum) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      pUVar1 = *(UObject **)(local_178.AllocatorInstance.Data + lVar11);
      if ((pUVar1 == (UObject *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                             ,0x584,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      pFVar8 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                         (&this->MemUsageAnnotations,*(int *)&pUVar1->field_0xc);
      if ((pFVar8->Flags & 1) == 0) {
        uVar9 = pFVar8->InclusiveMemoryUsage;
        if (uVar9 < pFVar8->ExclusiveMemoryUsage) {
          uVar9 = CalculateSizeRecursive(this,pUVar1);
          pFVar8->InclusiveMemoryUsage = uVar9;
        }
        pFVar6->InclusiveResourceSize =
             pFVar6->InclusiveResourceSize + pFVar8->InclusiveResourceSize;
        uVar5 = uVar5 + uVar9;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < local_178.ArrayNum);
  }
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  return uVar5;
}

// GetFlagsString @ 1420fa810

FString * __thiscall
FObjectMemoryAnalyzer::GetFlagsString
          (FObjectMemoryAnalyzer *this,FString *__return_storage_ptr__,FObjectMemoryUsage *param_1)

{
  char cVar1;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  cVar1 = (param_1->Flags & 1) != 0;
  if ((bool)cVar1) {
    ::FString::AppendChars(__return_storage_ptr__,L"IsRoot",6);
  }
  if ((param_1->Flags & 2) != 0) {
    if ((bool)cVar1) {
      ::FString::AppendChars(__return_storage_ptr__,L" | ",3);
    }
    ::FString::AppendChars(__return_storage_ptr__,L"IsReferencedByRoot",0x12);
    cVar1 = cVar1 + '\x01';
  }
  if ((param_1->Flags & 8) != 0) {
    if (cVar1 != '\0') {
      ::FString::AppendChars(__return_storage_ptr__,L" | ",3);
    }
    ::FString::AppendChars(__return_storage_ptr__,L"IsReferencedByNonRoot",0x15);
  }
  return __return_storage_ptr__;
}

// GetObjectMemoryUsage @ 1420fb070

FObjectMemoryUsage * __thiscall
FObjectMemoryAnalyzer::GetObjectMemoryUsage(FObjectMemoryAnalyzer *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  FObjectMemoryUsage *pFVar3;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x584,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FObjectMemoryUsage *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                     (&this->MemUsageAnnotations,*(int *)&param_1->field_0xc);
  if ((pFVar3->Flags & 4) == 0) {
    CalculateSizeRecursive(this,param_1);
    pFVar3 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                       (&this->MemUsageAnnotations,*(int *)&param_1->field_0xc);
  }
  return pFVar3;
}

// GetReferencedObjects @ 1420fcfa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
FObjectMemoryAnalyzer::GetReferencedObjects
          (FObjectMemoryAnalyzer *this,UObject *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  undefined1 auStackY_d8 [32];
  FReferenceFinder local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  FReferenceFinder::FReferenceFinder(&local_98,param_2,param_1,false,true,true,false);
  FReferenceFinder::FindReferences(&local_98,param_1,(UObject *)0x0,(FProperty *)0x0);
  iVar1 = param_2->ArrayNum;
  FReferenceFinder::~FReferenceFinder(&local_98);
  return iVar1;
}

// GetResults @ 1420fd250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

int __thiscall
FObjectMemoryAnalyzer::GetResults
          (FObjectMemoryAnalyzer *this,
          TArray<FObjectMemoryUsage,TSizedDefaultAllocator<32>_> *param_1)

{
  UObjectBaseUtility *this_00;
  FObjectMemoryUsage *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FObjectMemoryUsage *pFVar6;
  UClass *pUVar7;
  FUObjectItem *pFVar8;
  longlong lVar9;
  uint uVar10;
  EObjectFlags EVar11;
  longlong lVar12;
  TObjectIteratorBase<1> local_48;
  
  if (this->BaseClass != (UClass *)0x0) {
    EVar11 = RF_NoFlags;
    if ((this->AnalyzeFlags & 1) == 0) {
      EVar11 = RF_ArchetypeObject|RF_ClassDefaultObject;
    }
    TObjectIteratorBase<1>::TObjectIteratorBase<1>(&local_48,this->BaseClass,false,EVar11,Borrowed);
    lVar12 = local_48._padding_;
joined_r0x0001420fd2a7:
    if (lVar12 != 0) {
      this_00 = *(UObjectBaseUtility **)(lVar12 + 8);
      if (((this->AnalyzeFlags & 1) != 0) ||
         (bVar3 = UObjectBaseUtility::IsTemplate(this_00,RF_ArchetypeObject|RF_ClassDefaultObject),
         !bVar3)) {
        if ((this_00 == (UObjectBaseUtility *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                               ,0x584,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        pFVar6 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                           (&this->MemUsageAnnotations,*(int *)&this_00->field_0xc);
        if ((pFVar6->Flags & 1) != 0) {
          pFVar6->Object = (UObject *)this_00;
          pFVar1 = (FObjectMemoryUsage *)(param_1->AllocatorInstance).Data;
          if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_1->ArrayMax)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          iVar4 = param_1->ArrayNum;
          if (iVar4 == param_1->ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar4 + 1;
          FObjectMemoryUsage::FObjectMemoryUsage
                    ((FObjectMemoryUsage *)
                     ((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x50),pFVar6);
        }
      }
LAB_1420fd3b0:
      do {
        do {
          bVar3 = FUObjectArray::TIterator::Advance((TIterator *)&local_48);
          lVar12 = local_48._padding_;
          if (!bVar3) goto joined_r0x0001420fd2a7;
          if (local_48._padding_ == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = *(longlong *)(local_48._padding_ + 8);
          }
        } while ((local_48.ExclusionFlags & *(EObjectFlags *)(lVar9 + 8)) != RF_NoFlags);
        pUVar7 = Z_Construct_UClass_UObject_NoRegister();
        if (local_48.Class != pUVar7) {
          iVar4 = (int)(local_48.Class)->_padding_;
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar4) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
              &(local_48.Class)->_padding_)) goto LAB_1420fd3b0;
        }
        pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar9 + 0xc));
      } while ((local_48.InternalExclusionFlags &
               (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
               Borrowed);
      goto joined_r0x0001420fd2a7;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_48._padding_ + 0x30));
  }
  if (0 < (this->ObjectList).ArrayNum) {
    uVar10 = 0;
    lVar12 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar10 < (this->ObjectList).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      lVar9 = *(longlong *)((this->ObjectList).AllocatorInstance.Data + lVar12);
      if ((lVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                             ,0x584,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      pFVar6 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                         (&this->MemUsageAnnotations,*(int *)(lVar9 + 0xc));
      if (((pFVar6->Flags & 1) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Annotation.IsRoot()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ObjectMemoryAnalyzer.cpp"
                             ,0x15b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      uVar5 = 0;
      if ((int)uVar10 < (this->ObjectList).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      pFVar6->Object = *(UObject **)((this->ObjectList).AllocatorInstance.Data + lVar12);
      pFVar1 = (FObjectMemoryUsage *)(param_1->AllocatorInstance).Data;
      if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + param_1->ArrayMax)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      iVar4 = param_1->ArrayNum;
      if (iVar4 == param_1->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar4 + 1;
      FObjectMemoryUsage::FObjectMemoryUsage
                ((FObjectMemoryUsage *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x50),
                 pFVar6);
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar10 < (this->ObjectList).ArrayNum);
  }
  return param_1->ArrayNum;
}

// PrintResults @ 142106510

void __thiscall
FObjectMemoryAnalyzer::PrintResults(FObjectMemoryAnalyzer *this,FOutputDevice *param_1,uint param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_res20 [2];
  longlong local_b8;
  FName local_b0;
  FName local_a8;
  TArray<FObjectMemoryUsage,TSizedDefaultAllocator<32>_> local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  GetResults(this,&local_a0);
  local_res20[0] = 4;
  AlgoImpl::
  IntroSortInternal<FObjectMemoryUsage,int,FIdentityFunctor,TDereferenceWrapper<FObjectMemoryUsage,FObjectMemoryAnalyzer::FCompareFSortBySize>_>
            ((FObjectMemoryUsage *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum,
             (FIdentityFunctor)0x4,(FCompareFSortBySize *)local_res20);
  FOutputDevice::LogfImpl(param_1,L"%-100s %-10s %-10s %-10s %-10s");
  uVar6 = 0;
  if (0 < local_a0.ArrayNum) {
    local_b8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < local_a0.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar3.Data = local_a0.AllocatorInstance.Data;
      if ((((byte)local_a0.AllocatorInstance.Data[local_b8 + 0x20] & 1) != 0) ||
         ((*(int *)(local_a0.AllocatorInstance.Data + local_b8 + 0x38) == 0 &&
          (*(int *)(local_a0.AllocatorInstance.Data + local_b8 + 0x48) == 0)))) {
        local_b0 = *(FName *)(*(longlong *)(local_a0.AllocatorInstance.Data + local_b8 + 0x28) +
                             0x18);
        ::FName::ToString(&local_b0,&local_70);
        local_a8 = *(FName *)(*(longlong *)(*(longlong *)(FVar3.Data + local_b8 + 0x28) + 0x10) +
                             0x18);
        ::FName::ToString(&local_a8,&local_80);
        ::FString::PrintfImpl(&local_90,L"%s %s");
        FOutputDevice::LogfImpl(param_1,L"%-100s %-10d %-10d %-10d %-10d");
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if ((param_2 & 1) != 0) {
          pUVar1 = *(UObject **)(FVar3.Data + local_b8 + 0x28);
          ::FString::FString(local_60,L" -> ");
          PrintSubObjects(this,param_1,local_60,pUVar1,param_2);
          if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
          }
        }
      }
      uVar6 = uVar6 + 1;
      local_b8 = local_b8 + 0x50;
    } while ((int)uVar6 < local_a0.ArrayNum);
  }
  DestructItems<FObjectMemoryUsage,int>
            ((FObjectMemoryUsage *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
  if ((FObjectMemoryUsage *)local_a0.AllocatorInstance.Data != (FObjectMemoryUsage *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return;
}

// PrintSubObjects @ 142106800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FObjectMemoryAnalyzer::PrintSubObjects
          (FObjectMemoryAnalyzer *this,FOutputDevice *param_1,FString *param_2,UObject *param_3,
          uint param_4)

{
  UObject *pUVar1;
  code *pcVar2;
  FOutputDevice *this_00;
  bool bVar3;
  uint uVar4;
  FObjectMemoryUsage *pFVar5;
  uint uVar6;
  FUObjectAnnotationDense<FObjectMemoryUsage,1> *this_01;
  longlong lVar7;
  undefined1 auStackY_1d8 [32];
  uint local_198;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_190;
  UObject *local_180;
  FObjectMemoryAnalyzer *local_178;
  longlong local_170;
  FName local_168;
  FName local_160;
  FOutputDevice *local_158;
  FName local_150;
  FName local_148;
  FUObjectAnnotationDense<FObjectMemoryUsage,1> *local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FReferenceFinder local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  local_178 = this;
  local_158 = param_1;
  FReferenceFinder::FReferenceFinder(&local_d8,&local_190,param_3,false,true,true,false);
  FReferenceFinder::FindReferences(&local_d8,param_3,(UObject *)0x0,(FProperty *)0x0);
  FReferenceFinder::~FReferenceFinder(&local_d8);
  local_198 = 0;
  if (0 < local_190.ArrayNum) {
    this_01 = &this->MemUsageAnnotations;
    local_170 = 0;
    local_140 = this_01;
    do {
      lVar7 = local_170;
      uVar6 = 0;
      if ((int)local_198 < local_190.ArrayNum) {
        uVar6 = ~local_198 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar1 = *(UObject **)(local_190.AllocatorInstance.Data + lVar7);
      local_180 = pUVar1;
      if ((pUVar1 == (UObject *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                             ,0x584,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                         (this_01,*(int *)&pUVar1->field_0xc);
      if ((pFVar5->Flags & 4) == 0) {
        CalculateSizeRecursive(this,pUVar1);
        pFVar5 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                           (this_01,*(int *)&pUVar1->field_0xc);
      }
      if ((pFVar5->Flags & 1) == 0) {
        local_168.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
        local_168.Number = *(uint *)&pUVar1->field_0x1c;
        ::FName::ToString(&local_168,&local_118);
        local_160 = *(FName *)(*(longlong *)&local_180->field_0x10 + 0x18);
        ::FName::ToString(&local_160,&local_128);
        ::FString::PrintfImpl(&local_138,L"%s%s %s");
        this_00 = local_158;
        FOutputDevice::LogfImpl(local_158,L"%-100s %-10d %-10d %-10d %-10d");
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if ((param_4 & 2) != 0) {
          uVar6 = 0;
          if (0 < (pFVar5->NonRootReferencer).ArrayNum) {
            lVar7 = 0;
            do {
              uVar4 = 0;
              if ((int)uVar6 < (pFVar5->NonRootReferencer).ArrayNum) {
                uVar4 = ~uVar6 >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_150 = *(FName *)(*(longlong *)
                                      ((pFVar5->NonRootReferencer).AllocatorInstance.Data + lVar7) +
                                    0x18);
              ::FName::ToString(&local_150,&local_108);
              FOutputDevice::LogfImpl(this_00,L"%s  >> NonRootRef: %s");
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              uVar6 = uVar6 + 1;
              lVar7 = lVar7 + 8;
            } while ((int)uVar6 < (pFVar5->NonRootReferencer).ArrayNum);
          }
          uVar6 = 0;
          if (0 < (pFVar5->RootReferencer).ArrayNum) {
            lVar7 = 0;
            do {
              uVar4 = 0;
              if ((int)uVar6 < (pFVar5->RootReferencer).ArrayNum) {
                uVar4 = ~uVar6 >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_148 = *(FName *)(*(longlong *)
                                      ((pFVar5->RootReferencer).AllocatorInstance.Data + lVar7) +
                                    0x18);
              ::FName::ToString(&local_148,&local_f8);
              FOutputDevice::LogfImpl(this_00,L"%s  >> RootRef: %s");
              if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
              uVar6 = uVar6 + 1;
              lVar7 = lVar7 + 8;
            } while ((int)uVar6 < (pFVar5->RootReferencer).ArrayNum);
          }
        }
        this_01 = local_140;
        this = local_178;
        if ((param_4 & 1) != 0) {
          ::FString::ConcatFC(&local_e8,param_2,L" -> ");
          this = local_178;
          PrintSubObjects(local_178,this_00,&local_e8,local_180,param_4);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          this_01 = &this->MemUsageAnnotations;
        }
      }
      local_198 = local_198 + 1;
      local_170 = local_170 + 8;
    } while ((int)local_198 < local_190.ArrayNum);
  }
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  return;
}

// ProcessSubObjRecursive @ 142107a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FObjectMemoryAnalyzer::ProcessSubObjRecursive
          (FObjectMemoryAnalyzer *this,UObject *param_1,UObject *param_2)

{
  code *pcVar1;
  UObject *pUVar2;
  bool bVar3;
  uint uVar4;
  FObjectMemoryUsage *pFVar5;
  FObjectMemoryUsage *pFVar6;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStackY_1b8 [32];
  UObject *local_178;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_170;
  FArchiveState local_158;
  undefined8 local_c8;
  ulong64 local_c0;
  FReferenceFinder local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_178 = param_1;
  if ((param_2 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x584,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar5 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                     (&this->MemUsageAnnotations,*(int *)&param_2->field_0xc);
  if (((*(uint *)&param_2->field_0x8 & 2) != 0) || (0 < (pFVar5->RootReferencer).ArrayNum)) {
    pFVar5->Flags = pFVar5->Flags | 1;
  }
  uVar8 = 0;
  if ((pFVar5->Flags & 4) == 0) {
    FArchiveState::FArchiveState(&local_158);
    local_c8 = 0;
    local_158._padding_ = (longlong)&___7FArchiveCountMem__6B_;
    local_c0 = 0;
    local_158.ArIsFilterEditorOnly = '\0';
    local_158.ArIsCountingMemory = '\x01';
    (**(code **)(*(longlong *)param_2 + 200))(param_2,&local_158);
    pFVar5->Flags = pFVar5->Flags | 4;
    pFVar5->ExclusiveMemoryUsage = local_c0;
    FArchive::~FArchive((FArchive *)&local_158);
  }
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  FReferenceFinder::FReferenceFinder(&local_b8,&local_170,param_2,false,true,true,false);
  FReferenceFinder::FindReferences(&local_b8,param_2,(UObject *)0x0,(FProperty *)0x0);
  FReferenceFinder::~FReferenceFinder(&local_b8);
  uVar9 = uVar8;
  if (0 < local_170.ArrayNum) {
    do {
      uVar7 = (uint)uVar8;
      uVar4 = 0;
      if ((int)uVar7 < local_170.ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ProcessSubObjRecursive(this,local_178,*(UObject **)(local_170.AllocatorInstance.Data + uVar9))
      ;
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 8;
    } while ((int)(uVar7 + 1) < local_170.ArrayNum);
  }
  if (param_2 != local_178) {
    pFVar5 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                       (&this->MemUsageAnnotations,*(int *)&param_2->field_0xc);
    pUVar2 = local_178;
    if ((local_178 == (UObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                           ,0x584,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar6 = FUObjectAnnotationDense<FObjectMemoryUsage,1>::GetAnnotationRef
                       (&this->MemUsageAnnotations,*(int *)&pUVar2->field_0xc);
    if (((pFVar6->Flags & 1) == 0) && ((pFVar6->Flags & 2) == 0)) {
      pFVar5->Flags = pFVar5->Flags | 8;
      this_00 = &pFVar5->NonRootReferencer;
    }
    else {
      pFVar5->Flags = pFVar5->Flags | 2;
      this_00 = &pFVar5->RootReferencer;
    }
    TArray<UObject_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_*_const_&>
              (this_00,&local_178);
  }
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  return;
}

