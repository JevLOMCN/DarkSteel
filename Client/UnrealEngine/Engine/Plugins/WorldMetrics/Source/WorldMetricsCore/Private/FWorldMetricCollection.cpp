// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsCore
// Functions: 16

// StaticStruct @ 14f130dc0

UScriptStruct * __cdecl FWorldMetricCollection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWorldMetricCollection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WorldMetricsCore();
    Z_Registration_Info_UScriptStruct_FWorldMetricCollection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWorldMetricCollection,(UObject *)pUVar1,
                         L"WorldMetricCollection");
  }
  return Z_Registration_Info_UScriptStruct_FWorldMetricCollection.OuterSingleton;
}

// ~FWorldMetricCollection @ 14f133640

void __thiscall FWorldMetricCollection::~FWorldMetricCollection(FWorldMetricCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  Reset(this);
  pFVar1 = (this->Metrics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Add @ 14f134050

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWorldMetricCollection::Add
          (FWorldMetricCollection *this,TSubclassOf<UWorldMetricInterface> *param_1)

{
  int *piVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UWorldMetricsSubsystem *this_00;
  UClass *pUVar7;
  FString *pFVar8;
  UWorldMetricInterface *pUVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  char *local_res8 [2];
  char *local_res18;
  TObjectPtr<UClass>_u_0 local_res20;
  FString local_38;
  
  this_00 = (UWorldMetricsSubsystem *)FWeakObjectPtr::Get(&(this->Subsystem).WeakPtr);
  local_res18 = "FWorldMetricCollection::Add";
  if (this_00 == (UWorldMetricsSubsystem *)0x0) {
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&>
                ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,&local_res18);
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8198767378910150783>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricCollection.cpp"
                       ,0x7f,"ValidateSubsystem(SubsystemPtr, __FUNCTION__)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else {
    pUVar2 = (param_1->Class).field0_0x0.DebugPtr;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar7 = UWorldMetricInterface::StaticClass(), pUVar7 != (UClass *)0x0)) {
      iVar6 = (int)pUVar7->_padding_;
      if (((int)pUVar2->_padding_ < iVar6) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar6 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_res20.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->Class).field0_0x0.DebugPtr;
        local_res8[0] = "FWorldMetricCollection::Add";
        if (local_res20.DebugPtr != (UClass *)0x0) {
          if (((local_res20.DebugPtr)->ClassFlags & CLASS_Abstract) != CLASS_None) {
            if ((byte)LogWorldMetrics._0_1_ < 3) {
              return false;
            }
            pFVar8 = UObjectBaseUtility::GetPathName
                               ((UObjectBaseUtility *)local_res20.DebugPtr,&local_38,(UObject *)0x0)
            ;
            UE::Logging::Private::
            LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&,FString>
                      ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,local_res8,pFVar8);
            if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return false;
            }
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
            return false;
          }
          lVar12 = (longlong)(this->Metrics).ArrayNum;
          uVar10 = 0;
          uVar11 = uVar10;
          if (0 < lVar12) {
            do {
              if (*(UClass **)
                   (*(longlong *)((this->Metrics).AllocatorInstance.Data + uVar10 * 8) + 0x10) ==
                  local_res20.DebugPtr) {
                if ((int)uVar11 != -1) {
                  return false;
                }
                break;
              }
              uVar10 = uVar10 + 1;
              uVar11 = (ulonglong)((int)uVar11 + 1);
            } while ((longlong)uVar10 < lVar12);
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
          }
          pUVar9 = UWorldMetricsSubsystem::CreateMetric
                             (this_00,(TSubclassOf<UWorldMetricInterface> *)&local_res20.ObjectPtr);
          if (pUVar9 == (UWorldMetricInterface *)0x0) {
            if ((byte)LogWorldMetrics._0_1_ < 5) {
              return false;
            }
            UE::Logging::Private::
            LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_(&)[28]>
                      ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,
                       (char (*) [28])"FWorldMetricCollection::Add");
            return false;
          }
          iVar6 = (this->Metrics).ArrayNum;
          piVar1 = &(this->Metrics).ArrayMax;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)this,piVar1);
          }
          (this->Metrics).ArrayNum = iVar6 + 1;
          *(UWorldMetricInterface **)((this->Metrics).AllocatorInstance.Data + (longlong)iVar6 * 8)
               = pUVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          if (this->bIsEnabled != false) {
            UWorldMetricsSubsystem::AddMetric(this_00,pUVar9);
          }
          return true;
        }
      }
    }
    local_res8[0] = "FWorldMetricCollection::Add";
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&>
                ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,local_res8);
    }
  }
  return false;
}

// AddReferencedObjects @ 14f134760

void __thiscall
FWorldMetricCollection::AddReferencedObjects
          (FWorldMetricCollection *this,FReferenceCollector *param_1)

{
  FReferenceCollector::AddStableReferenceArrayFwd
            (param_1,(TArray<FObjectPtr,TSizedDefaultAllocator<32>_> *)this);
  return;
}

// Contains @ 14f135200

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWorldMetricCollection::Contains
          (FWorldMetricCollection *this,TSubclassOf<UWorldMetricInterface> *param_1)

{
  UClass *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar8;
  char *local_res10;
  FString local_18;
  ulonglong uVar7;
  
  pUVar1 = (param_1->Class).field0_0x0.DebugPtr;
  if ((pUVar1 != (UClass *)0x0) &&
     (pUVar3 = UWorldMetricInterface::StaticClass(), pUVar3 != (UClass *)0x0)) {
    iVar6 = (int)pUVar3->_padding_;
    if (((int)pUVar1->_padding_ < iVar6) ||
       ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar6 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar1 = (param_1->Class).field0_0x0.DebugPtr;
      local_res10 = "FWorldMetricCollection::Contains";
      if (pUVar1 != (UClass *)0x0) {
        if ((pUVar1->ClassFlags & CLASS_Abstract) != CLASS_None) {
          if ((byte)LogWorldMetrics._0_1_ < 3) {
            return false;
          }
          pFVar4 = UObjectBaseUtility::GetPathName
                             ((UObjectBaseUtility *)pUVar1,&local_18,(UObject *)0x0);
          UE::Logging::Private::
          LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&,FString>
                    ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,&local_res10,pFVar4);
          if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return false;
          }
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return false;
        }
        lVar8 = (longlong)(this->Metrics).ArrayNum;
        uVar5 = 0;
        uVar7 = uVar5;
        if (0 < lVar8) {
          do {
            iVar6 = (int)uVar7;
            if (*(UClass **)
                 (*(longlong *)((this->Metrics).AllocatorInstance.Data + uVar5 * 8) + 0x10) ==
                pUVar1) goto LAB_14f1352ff;
            uVar5 = uVar5 + 1;
            uVar7 = (ulonglong)(iVar6 + 1);
          } while ((longlong)uVar5 < lVar8);
        }
        iVar6 = -1;
LAB_14f1352ff:
        return iVar6 != -1;
      }
    }
  }
  local_res10 = "FWorldMetricCollection::Contains";
  if (2 < (byte)LogWorldMetrics._0_1_) {
    UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&>
              ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,&local_res10);
  }
  return false;
}

// Enable @ 14f135f20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWorldMetricCollection::Enable(FWorldMetricCollection *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UWorldMetricsSubsystem *this_00;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  char *local_res18;
  
  if (param_1 != this->bIsEnabled) {
    this_00 = (UWorldMetricsSubsystem *)FWeakObjectPtr::Get(&(this->Subsystem).WeakPtr);
    local_res18 = "FWorldMetricCollection::Enable";
    if (this_00 != (UWorldMetricsSubsystem *)0x0) {
      iVar2 = (this->Metrics).ArrayNum;
      if (param_1) {
        if (iVar2 == 0) {
          return false;
        }
        pFVar6 = (this->Metrics).AllocatorInstance.Data;
        pFVar1 = pFVar6 + (longlong)iVar2 * 8;
        while( true ) {
          if ((this->Metrics).ArrayNum != iVar2) {
            `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (pFVar6 == pFVar1) break;
          UWorldMetricsSubsystem::AddMetric(this_00,*(UWorldMetricInterface **)pFVar6);
          pFVar6 = pFVar6 + 8;
        }
      }
      else {
        pFVar6 = (this->Metrics).AllocatorInstance.Data;
        pFVar1 = pFVar6 + (longlong)iVar2 * 8;
        while( true ) {
          if ((this->Metrics).ArrayNum != iVar2) {
            `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (pFVar6 == pFVar1) break;
          UWorldMetricsSubsystem::RemoveMetric(this_00,*(UWorldMetricInterface **)pFVar6);
          pFVar6 = pFVar6 + 8;
        }
      }
      this->bIsEnabled = param_1;
      return true;
    }
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&>
                ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,&local_res18);
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8198767378910150725>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricCollection.cpp"
                       ,0x45,"ValidateSubsystem(SubsystemPtr, __FUNCTION__)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return false;
}

// Get @ 14f136650

/* WARNING: Enum "Type": Some values do not have unique names */

UWorldMetricInterface * __thiscall
FWorldMetricCollection::Get
          (FWorldMetricCollection *this,TSubclassOf<UWorldMetricInterface> *param_1)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  UWorldMetricInterface *pUVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  char *local_res10;
  FString local_18;
  
  pUVar2 = (param_1->Class).field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar5 = UWorldMetricInterface::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar2 = (param_1->Class).field0_0x0.DebugPtr;
      local_res10 = "FWorldMetricCollection::Get";
      if (pUVar2 != (UClass *)0x0) {
        if ((pUVar2->ClassFlags & CLASS_Abstract) == CLASS_None) {
          iVar1 = (this->Metrics).ArrayNum;
          uVar9 = 0;
          if (iVar1 < 1) {
            return (UWorldMetricInterface *)0x0;
          }
          lVar8 = 0;
          while (*(UClass **)
                  (*(longlong *)((this->Metrics).AllocatorInstance.Data + lVar8 * 8) + 0x10) !=
                 pUVar2) {
            uVar9 = uVar9 + 1;
            lVar8 = lVar8 + 1;
            if (iVar1 <= lVar8) {
              return (UWorldMetricInterface *)0x0;
            }
          }
          if (uVar9 == 0xffffffff) {
            return (UWorldMetricInterface *)0x0;
          }
          uVar10 = 0;
          if ((int)uVar9 < iVar1) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pUVar7 = (UWorldMetricInterface *)(*pcVar3)();
            return pUVar7;
          }
          return *(UWorldMetricInterface **)
                  ((this->Metrics).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
        }
        if ((byte)LogWorldMetrics._0_1_ < 3) {
          return (UWorldMetricInterface *)0x0;
        }
        pFVar6 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)pUVar2,&local_18,(UObject *)0x0);
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&,FString>
                  ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,&local_res10,pFVar6);
        if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return (UWorldMetricInterface *)0x0;
        }
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return (UWorldMetricInterface *)0x0;
      }
    }
  }
  local_res10 = "FWorldMetricCollection::Get";
  if (2 < (byte)LogWorldMetrics._0_1_) {
    UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&>
              ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,&local_res10);
  }
  return (UWorldMetricInterface *)0x0;
}

// GetMetricIndex @ 14f136960

int __thiscall FWorldMetricCollection::GetMetricIndex(FWorldMetricCollection *this,UClass *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(this->Metrics).ArrayNum;
  uVar1 = 0;
  uVar2 = uVar1;
  if (0 < lVar3) {
    do {
      if (*(UClass **)(*(longlong *)((this->Metrics).AllocatorInstance.Data + uVar1 * 8) + 0x10) ==
          param_1) {
        return (int)uVar2;
      }
      uVar1 = uVar1 + 1;
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while ((longlong)uVar1 < lVar3);
  }
  return -1;
}

// GetOrAdd @ 14f1369d0

/* WARNING: Enum "Type": Some values do not have unique names */

UWorldMetricInterface * __thiscall
FWorldMetricCollection::GetOrAdd
          (FWorldMetricCollection *this,TSubclassOf<UWorldMetricInterface> *param_1)

{
  int *piVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UWorldMetricsSubsystem *this_00;
  UWorldMetricInterface *pUVar6;
  UClass *pUVar7;
  FString *pFVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  char *local_res8 [2];
  char *local_res18;
  TObjectPtr<UClass>_u_0 local_res20;
  FString local_38;
  
  this_00 = (UWorldMetricsSubsystem *)FWeakObjectPtr::Get(&(this->Subsystem).WeakPtr);
  local_res18 = "FWorldMetricCollection::GetOrAdd";
  if (this_00 == (UWorldMetricsSubsystem *)0x0) {
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&>
                ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,&local_res18);
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8198767378910150818>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricCollection.cpp"
                       ,0xa2,"ValidateSubsystem(SubsystemPtr, __FUNCTION__)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UWorldMetricInterface *)(*pcVar3)();
      return pUVar6;
    }
  }
  else {
    pUVar2 = (param_1->Class).field0_0x0.DebugPtr;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar7 = UWorldMetricInterface::StaticClass(), pUVar7 != (UClass *)0x0)) {
      iVar5 = (int)pUVar7->_padding_;
      if (((int)pUVar2->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_res20.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->Class).field0_0x0.DebugPtr;
        local_res8[0] = "FWorldMetricCollection::GetOrAdd";
        if (local_res20.DebugPtr != (UClass *)0x0) {
          if (((local_res20.DebugPtr)->ClassFlags & CLASS_Abstract) != CLASS_None) {
            if ((byte)LogWorldMetrics._0_1_ < 3) {
              return (UWorldMetricInterface *)0x0;
            }
            pFVar8 = UObjectBaseUtility::GetPathName
                               ((UObjectBaseUtility *)local_res20.DebugPtr,&local_38,(UObject *)0x0)
            ;
            UE::Logging::Private::
            LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&,FString>
                      ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,local_res8,pFVar8);
            if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return (UWorldMetricInterface *)0x0;
            }
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
            return (UWorldMetricInterface *)0x0;
          }
          iVar5 = (this->Metrics).ArrayNum;
          uVar10 = 0;
          if (0 < iVar5) {
            lVar9 = 0;
            do {
              if (*(UClass **)
                   (*(longlong *)((this->Metrics).AllocatorInstance.Data + lVar9 * 8) + 0x10) ==
                  local_res20.DebugPtr) {
                if (uVar10 != 0xffffffff) {
                  uVar11 = 0;
                  if ((int)uVar10 < iVar5) {
                    uVar11 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    pUVar6 = (UWorldMetricInterface *)(*pcVar3)();
                    return pUVar6;
                  }
                  return *(UWorldMetricInterface **)
                          ((this->Metrics).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
                }
                break;
              }
              uVar10 = uVar10 + 1;
              lVar9 = lVar9 + 1;
            } while (lVar9 < iVar5);
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)local_res20.DebugPtr);
          }
          pUVar6 = UWorldMetricsSubsystem::CreateMetric
                             (this_00,(TSubclassOf<UWorldMetricInterface> *)&local_res20.ObjectPtr);
          if (pUVar6 == (UWorldMetricInterface *)0x0) {
            if ((byte)LogWorldMetrics._0_1_ < 5) {
              return (UWorldMetricInterface *)0x0;
            }
            UE::Logging::Private::
            LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_(&)[33]>
                      ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,
                       (char (*) [33])"FWorldMetricCollection::GetOrAdd");
            return (UWorldMetricInterface *)0x0;
          }
          iVar5 = (this->Metrics).ArrayNum;
          piVar1 = &(this->Metrics).ArrayMax;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)this,piVar1);
          }
          (this->Metrics).ArrayNum = iVar5 + 1;
          *(UWorldMetricInterface **)((this->Metrics).AllocatorInstance.Data + (longlong)iVar5 * 8)
               = pUVar6;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
          if (this->bIsEnabled != false) {
            UWorldMetricsSubsystem::AddMetric(this_00,pUVar6);
          }
          return pUVar6;
        }
      }
    }
    local_res8[0] = "FWorldMetricCollection::GetOrAdd";
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&>
                ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,local_res8);
    }
  }
  return (UWorldMetricInterface *)0x0;
}

// Initialize @ 14f1371a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWorldMetricCollection::Initialize(FWorldMetricCollection *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  USubsystem *local_res8;
  
  Reset(this);
  local_res8 = (USubsystem *)0x0;
  if (param_1 == (UObject *)0x0) goto LAB_14f13724b;
  lVar3 = (**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  if (lVar3 == 0) {
    local_res8 = (USubsystem *)0x0;
    goto LAB_14f13724b;
  }
  pUVar4 = UWorldMetricsSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_14f137204;
LAB_14f137232:
    pUVar4 = (UClass *)0x0;
  }
  else {
    if (pUVar4 == (UClass *)0x0) goto LAB_14f137232;
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14f137204:
    pUVar5 = UWorldMetricsSubsystem::StaticClass();
    if (pUVar5 == (UClass *)0x0) goto LAB_14f137232;
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14f137232;
  }
  local_res8 = FSubsystemCollectionBase::GetSubsystemInternal
                         ((FSubsystemCollectionBase *)(lVar3 + 0xac0),pUVar4);
LAB_14f13724b:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (USubsystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(this->Subsystem).WeakPtr,(FObjectPtr)&local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&(this->Subsystem).WeakPtr);
  if ((!bVar2) && (2 < (byte)LogWorldMetrics._0_1_)) {
    UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_(&)[35]>
              ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,
               (char (*) [35])"FWorldMetricCollection::Initialize");
    return;
  }
  return;
}

// IsEmpty @ 14f137490

bool __thiscall FWorldMetricCollection::IsEmpty(FWorldMetricCollection *this)

{
  return (this->Metrics).ArrayNum == 0;
}

// Num @ 14f137810

int __thiscall FWorldMetricCollection::Num(FWorldMetricCollection *this)

{
  return (this->Metrics).ArrayNum;
}

// Remove @ 14f138360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FWorldMetricCollection::Remove
          (FWorldMetricCollection *this,TSubclassOf<UWorldMetricInterface> *param_1)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UWorldMetricsSubsystem *this_00;
  UClass *pUVar6;
  FString *pFVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  char *local_res8;
  char *local_res18;
  FString local_28;
  
  this_00 = (UWorldMetricsSubsystem *)FWeakObjectPtr::Get(&(this->Subsystem).WeakPtr);
  local_res18 = "FWorldMetricCollection::Remove";
  if (this_00 == (UWorldMetricsSubsystem *)0x0) {
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&>
                ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,&local_res18);
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8198767378910150853>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricCollection.cpp"
                       ,0xc5,"ValidateSubsystem(SubsystemPtr, __FUNCTION__)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else {
    pUVar2 = (param_1->Class).field0_0x0.DebugPtr;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar6 = UWorldMetricInterface::StaticClass(), pUVar6 != (UClass *)0x0)) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar2 = (param_1->Class).field0_0x0.DebugPtr;
        local_res8 = "FWorldMetricCollection::Remove";
        if (pUVar2 != (UClass *)0x0) {
          if ((pUVar2->ClassFlags & CLASS_Abstract) == CLASS_None) {
            iVar1 = (this->Metrics).ArrayNum;
            uVar9 = 0;
            if (iVar1 < 1) {
              return false;
            }
            lVar8 = 0;
            while (*(UClass **)
                    (*(longlong *)((this->Metrics).AllocatorInstance.Data + lVar8 * 8) + 0x10) !=
                   pUVar2) {
              uVar9 = uVar9 + 1;
              lVar8 = lVar8 + 1;
              if (iVar1 <= lVar8) {
                return false;
              }
            }
            if (uVar9 == 0xffffffff) {
              return false;
            }
            uVar10 = 0;
            if ((int)uVar9 < iVar1) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            UWorldMetricsSubsystem::RemoveMetric
                      (this_00,*(UWorldMetricInterface **)
                                ((this->Metrics).AllocatorInstance.Data + (longlong)(int)uVar9 * 8))
            ;
            TArray<TObjectPtr<UWorldMetricInterface>,TSizedDefaultAllocator<32>_>::RemoveAt
                      (&this->Metrics,uVar9,Default);
            if ((this->Metrics).ArrayNum == 0) {
              Enable(this,false);
            }
            return true;
          }
          if ((byte)LogWorldMetrics._0_1_ < 3) {
            return false;
          }
          pFVar7 = UObjectBaseUtility::GetPathName
                             ((UObjectBaseUtility *)pUVar2,&local_28,(UObject *)0x0);
          UE::Logging::Private::
          LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&,FString>
                    ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,&local_res8,pFVar7);
          if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return false;
          }
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
          return false;
        }
      }
    }
    local_res8 = "FWorldMetricCollection::Remove";
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&>
                ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,&local_res8);
    }
  }
  return false;
}

// Reset @ 14f139040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWorldMetricCollection::Reset(FWorldMetricCollection *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UWorldMetricsSubsystem *this_00;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  char *local_res10;
  
  if (this->bIsEnabled != false) {
    this_00 = (UWorldMetricsSubsystem *)FWeakObjectPtr::Get(&(this->Subsystem).WeakPtr);
    local_res10 = "FWorldMetricCollection::Enable";
    if (this_00 == (UWorldMetricsSubsystem *)0x0) {
      if (2 < (byte)LogWorldMetrics._0_1_) {
        UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&>
                  ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,&local_res10);
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8198767378910150725>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\WorldMetrics\\Source\\WorldMetricsCore\\Private\\WorldMetricCollection.cpp"
                         ,0x45,"ValidateSubsystem(SubsystemPtr, __FUNCTION__)");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      pFVar5 = (this->Metrics).AllocatorInstance.Data;
      iVar2 = (this->Metrics).ArrayNum;
      pFVar1 = pFVar5 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->Metrics).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UWorldMetricInterface>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar5 == pFVar1) break;
        UWorldMetricsSubsystem::RemoveMetric(this_00,*(UWorldMetricInterface **)pFVar5);
        pFVar5 = pFVar5 + 8;
      }
      this->bIsEnabled = false;
    }
  }
  (this->Metrics).ArrayNum = 0;
  if ((this->Metrics).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->Metrics).ArrayMax);
  }
  return;
}

// ValidateClass @ 14f139a10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWorldMetricCollection::ValidateClass(FWorldMetricCollection *this,UClass *param_1,char *param_2)

{
  FString *pFVar1;
  char *local_res18 [2];
  FString local_18;
  
  local_res18[0] = param_2;
  if (param_1 == (UClass *)0x0) {
    if (2 < (byte)LogWorldMetrics._0_1_) {
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&>
                ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,local_res18);
      return false;
    }
  }
  else {
    if ((param_1->ClassFlags & CLASS_Abstract) == CLASS_None) {
      return true;
    }
    if (2 < (byte)LogWorldMetrics._0_1_) {
      pFVar1 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
      UE::Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&,FString>
                ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,local_res18,pFVar1);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// ValidateSubsystem @ 14f139ab0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWorldMetricCollection::ValidateSubsystem
          (FWorldMetricCollection *this,UWorldMetricsSubsystem *param_1,char *param_2)

{
  char *local_res18 [2];
  
  if (param_1 == (UWorldMetricsSubsystem *)0x0) {
    if (2 < (byte)LogWorldMetrics._0_1_) {
      local_res18[0] = param_2;
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&>
                ((FLogCategoryBase *)&LogWorldMetrics,&::LOG_Static,local_res18);
    }
    return false;
  }
  return true;
}

