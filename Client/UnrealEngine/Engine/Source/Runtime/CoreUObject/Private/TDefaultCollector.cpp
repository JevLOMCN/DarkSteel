// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 20

// HandleObjectReference @ 142058680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDefaultCollector<FClusterVerifyReferenceProcessor>::HandleObjectReference
          (TDefaultCollector<FClusterVerifyReferenceProcessor> *this,UObject **param_1,
          UObject *param_2,FProperty *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FClusterVerifyReferenceProcessor *this_00;
  FWorkerContext *pFVar3;
  UObject *pUVar4;
  UObjectBaseUtility *this_01;
  FUObjectCluster *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FString *pFVar9;
  FUObjectItem *pFVar10;
  FScriptContainerElement *pFVar11;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar8 = false;
  if (param_2 == (UObject *)0x0) {
    param_2 = this->Context->ReferencingObject;
  }
  this_00 = this->Processor;
  pFVar3 = this->Context;
  if (*param_1 == (UObject *)0x0) {
    return;
  }
  pUVar4 = pFVar3->ReferencingObject;
  if (pUVar4 != this_00->CurrentObject) {
    FClusterVerifyReferenceProcessor::SetCurrentObjectAndCluster(this_00,pUVar4);
  }
  if ((this_00->CurrentObject == (UObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                         ,0xcb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar7 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true);
  if (!bVar7) {
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Data.ArrayNum = 0;
    local_128.Data.ArrayMax = 0;
    if ((param_2 == (UObject *)0x0) ||
       (this_01 = *(UObjectBaseUtility **)&((UObjectBaseUtility *)param_2)->field_0x10,
       this_01 == (UObjectBaseUtility *)0x0)) {
      ::FString::operator=(&local_128,L"Native Reference");
    }
    else {
      FDebugSchemaStackNode::ToString(pFVar3->SchemaStack,&local_d8);
      UObjectBaseUtility::GetFullName(this_01,&local_e8,(UObject *)0x0,None);
      ::FString::PrintfImpl(&local_118,L"ReferencingObjectClass: %s, Property: %s");
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      local_128.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
      local_128.Data.ArrayNum = local_118.Data.ArrayNum;
      local_128.Data.ArrayMax = local_118.Data.ArrayMax;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    if (param_2 != (UObject *)0x0) {
      pFVar9 = UObjectBaseUtility::GetFullName
                         ((UObjectBaseUtility *)param_2,&local_c8,(UObject *)0x0,None);
      if ((pFVar9->Data).ArrayNum == 0) {
        bVar8 = true;
      }
      else {
        bVar8 = true;
      }
    }
    Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FClusterVerifyReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                ::__l24::LOG_Static,(FLogCategoryBase *)&LogGarbage);
    if ((bVar8) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&(*param_1)->field_0xc);
  if (0 < pFVar10->ClusterRootIndex) {
    if (pFVar10->ClusterRootIndex == this_00->Cluster->RootIndex) {
      return;
    }
    FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this_00->ClusterRootObject->field_0xc);
    iVar2 = pFVar10->ClusterRootIndex;
    if ((iVar2 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("OtherClusterRootIndex > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                           ,0x11d,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar10 = FChunkedFixedUObjectArray::GetObjectPtr(&GUObjectArray.ObjObjects,iVar2);
    if (pFVar10 == (FUObjectItem *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x381,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_142058c5c:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OtherClusterRootItem && OtherClusterRootItem->GetObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                         ,0x11f,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else if ((pFVar10->field1_0x8).Object == (UObjectBase *)0x0) goto LAB_142058c5c;
    if ((byte)LogGarbage._0_1_ < 3) {
      return;
    }
    pFVar5 = this_00->Cluster;
    if (iVar2 == pFVar5->RootIndex) {
      return;
    }
    pFVar11 = (pFVar5->ReferencedClusters).AllocatorInstance.Data;
    pFVar1 = pFVar11 + (longlong)(pFVar5->ReferencedClusters).ArrayNum * 4;
    for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 4) {
      if (*(int *)pFVar11 == iVar2) {
        return;
      }
    }
    pFVar11 = (this_00->Cluster->MutableObjects).AllocatorInstance.Data;
    pFVar1 = pFVar11 + (longlong)(this_00->Cluster->MutableObjects).ArrayNum * 4;
    for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 4) {
      if (*(int *)pFVar11 == *(int *)&(*param_1)->field_0xc) {
        return;
      }
    }
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)(pFVar10->field1_0x8).Object,&local_48,(UObject *)0x0,None);
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)*param_1,&local_58,(UObject *)0x0,None);
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)this_00->ClusterRootObject,&local_68,(UObject *)0x0,None);
    if ((param_2 == (UObject *)0x0) ||
       (*(longlong *)&((UObjectBaseUtility *)param_2)->field_0x10 == 0)) {
      ::FString::FString(&local_f8,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_f8,(UObject *)0x0,None);
    }
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FClusterVerifyReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                ::__l117::LOG_Static,(FLogCategoryBase *)&LogGarbage);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    goto LAB_142058e15;
  }
  if (((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
    if (((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) {
      return;
    }
    if (*(int *)&(*param_1)->field_0xc <= GUObjectArray.ObjLastNonGCIndex) {
      return;
    }
    pFVar11 = (this_00->Cluster->MutableObjects).AllocatorInstance.Data;
    pFVar1 = pFVar11 + (longlong)(this_00->Cluster->MutableObjects).ArrayNum * 4;
    while( true ) {
      if (pFVar11 == pFVar1) {
        if (2 < (byte)LogGarbage._0_1_) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)*param_1,&local_78,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00->ClusterRootObject,&local_88,(UObject *)0x0,None)
          ;
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00->CurrentObject,&local_98,(UObject *)0x0,None);
          Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FClusterVerifyReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                      ::__l81::LOG_Static,(FLogCategoryBase *)&LogGarbage);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        LOCK();
        (this_00->NumErrors).Counter = (this_00->NumErrors).Counter + 1;
        UNLOCK();
        return;
      }
      if (*(int *)pFVar11 == *(int *)&(*param_1)->field_0xc) break;
      pFVar11 = pFVar11 + 4;
    }
    return;
  }
  FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this_00->ClusterRootObject->field_0xc);
  iVar2 = *(int *)&(*param_1)->field_0xc;
  pFVar10 = FChunkedFixedUObjectArray::GetObjectPtr(&GUObjectArray.ObjObjects,iVar2);
  if (pFVar10 == (FUObjectItem *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ItemPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x381,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
LAB_142058915:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("OtherClusterRootItem && OtherClusterRootItem->GetObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                       ,0xf5,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if ((pFVar10->field1_0x8).Object == (UObjectBase *)0x0) goto LAB_142058915;
  if ((byte)LogGarbage._0_1_ < 3) {
    return;
  }
  pFVar5 = this_00->Cluster;
  if (iVar2 == pFVar5->RootIndex) {
    return;
  }
  pFVar11 = (pFVar5->ReferencedClusters).AllocatorInstance.Data;
  pFVar1 = pFVar11 + (longlong)(pFVar5->ReferencedClusters).ArrayNum * 4;
  for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 4) {
    if (*(int *)pFVar11 == iVar2) {
      return;
    }
  }
  pFVar11 = (this_00->Cluster->MutableObjects).AllocatorInstance.Data;
  pFVar1 = pFVar11 + (longlong)(this_00->Cluster->MutableObjects).ArrayNum * 4;
  for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 4) {
    if (*(int *)pFVar11 == iVar2) {
      return;
    }
  }
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)*param_1,&local_a8,(UObject *)0x0,None);
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)this_00->ClusterRootObject,&local_b8,(UObject *)0x0,None);
  if ((param_2 == (UObject *)0x0) ||
     (*(longlong *)&((UObjectBaseUtility *)param_2)->field_0x10 == 0)) {
    ::FString::FString(&local_108,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_108,(UObject *)0x0,None);
  }
  Logging::Private::BasicLog<3>
            ((FStaticBasicLogRecord *)
             &`public:_void___cdecl_FClusterVerifyReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
              ::__l55::LOG_Static,(FLogCategoryBase *)&LogGarbage);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    local_48.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
  }
LAB_142058e15:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleObjectReference @ 142058e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDefaultCollector<FDisregardSetReferenceProcessor>::HandleObjectReference
          (TDefaultCollector<FDisregardSetReferenceProcessor> *this,UObject **param_1,
          UObject *param_2,FProperty *param_3)

{
  FDisregardSetReferenceProcessor *pFVar1;
  FWorkerContext *pFVar2;
  UObjectBaseUtility *this_00;
  bool bVar3;
  FString *pFVar4;
  FUObjectItem *pFVar5;
  bool bVar6;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar6 = false;
  if (param_2 == (UObject *)0x0) {
    param_2 = this->Context->ReferencingObject;
  }
  pFVar1 = this->Processor;
  pFVar2 = this->Context;
  if ((UObjectBase *)*param_1 != (UObjectBase *)0x0) {
    bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true);
    if (!bVar3) {
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      if ((param_2 == (UObject *)0x0) ||
         (this_00 = *(UObjectBaseUtility **)&((UObjectBaseUtility *)param_2)->field_0x10,
         this_00 == (UObjectBaseUtility *)0x0)) {
        ::FString::operator=(&local_68,L"Native Reference");
      }
      else {
        FDebugSchemaStackNode::ToString(pFVar2->SchemaStack,&local_38);
        UObjectBaseUtility::GetFullName(this_00,&local_48,(UObject *)0x0,None);
        ::FString::PrintfImpl(&local_58,L"ReferencingObjectClass: %s, Property: %s");
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        local_68.Data.ArrayNum = local_58.Data.ArrayNum;
        local_68.Data.ArrayMax = local_58.Data.ArrayMax;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if (param_2 != (UObject *)0x0) {
        pFVar4 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
        if ((pFVar4->Data).ArrayNum == 0) {
          bVar6 = true;
        }
        else {
          bVar6 = true;
        }
      }
      Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FDisregardSetReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                  ::__l14::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&(*param_1)->field_0xc);
    if ((((((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0) &&
         (GUObjectArray.ObjLastNonGCIndex < *(int *)&(*param_1)->field_0xc)) &&
        (pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&(*param_1)->field_0xc),
        pFVar5->ClusterRootIndex < 1)) &&
       (pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&(*param_1)->field_0xc),
       ((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0)) {
      if (2 < (byte)LogGarbage._0_1_) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)*param_1,&local_48,(UObject *)0x0,None);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None)
        ;
        Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_FDisregardSetReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                    ::__l35::LOG_Static,(FLogCategoryBase *)&LogGarbage);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      LOCK();
      (pFVar1->NumErrors).Counter = (pFVar1->NumErrors).Counter + 1;
      UNLOCK();
    }
  }
  return;
}

// HandleObjectReference @ 142059120

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDefaultCollector<FUnreachableReferenceProcessor>::HandleObjectReference
          (TDefaultCollector<FUnreachableReferenceProcessor> *this,UObject **param_1,
          UObject *param_2,FProperty *param_3)

{
  FUnreachableReferenceProcessor *pFVar1;
  FWorkerContext *pFVar2;
  FGCObject *pFVar3;
  FUObjectItem *pFVar4;
  undefined8 *puVar5;
  FGCObjectInfo *pFVar6;
  int iVar7;
  ForAnyElementType FVar9;
  FString local_98;
  FString local_88;
  FString local_78;
  undefined8 local_68 [2];
  FGCObjectInfo local_58;
  FScriptContainerElement *pFVar8;
  
  if (param_2 == (UObject *)0x0) {
    param_2 = this->Context->ReferencingObject;
  }
  pFVar1 = this->Processor;
  pFVar2 = this->Context;
  if (*param_1 == (UObject *)0x0) {
    return;
  }
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&(*param_1)->field_0xc);
  if (((GC::Private::FGCFlags::MaybeUnreachableObjectFlag | Unreachable) &
      (EInternalObjectFlags)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x20)) == Borrowed)
  {
    return;
  }
  if (param_2 != (UObject *)0x0) {
    pFVar4 = FUObjectArray::IndexToObject
                       (&GUObjectArray,*(int *)&((UObjectBaseUtility *)param_2)->field_0xc);
    if ((0 < pFVar4->ClusterRootIndex) &&
       (pFVar4->ClusterRootIndex == *(int *)&(*param_1)->field_0xc)) {
      return;
    }
  }
  pFVar8 = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  if ((param_2 == (UObject *)0x0) ||
     (*(longlong *)&((UObjectBaseUtility *)param_2)->field_0x10 == 0)) {
    ::FString::operator=(&local_98,L"Native Reference");
    if (param_2 != (UObject *)0x0) goto LAB_142059253;
    if ((FGCObject::GGCObjectReferencer != (UGCObjectReferencer *)0x0) &&
       (pFVar3 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject,
       pFVar3 != (FGCObject *)0x0)) {
      puVar5 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,&local_78);
      if (local_68 != puVar5) {
        pFVar8 = (FScriptContainerElement *)*puVar5;
        *puVar5 = 0;
        iVar7 = *(int *)(puVar5 + 1);
        puVar5[1] = 0;
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      FVar9.Data = pFVar8;
      if (1 < iVar7) goto LAB_1420592f9;
    }
LAB_1420592d4:
    ::FString::FString(&local_88,L"None");
  }
  else {
    FDebugSchemaStackNode::ToString(pFVar2->SchemaStack,&local_78);
    ::FString::PrintfImpl(&local_88,L"property: %s");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_98.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    local_98.Data.ArrayNum = local_88.Data.ArrayNum;
    local_98.Data.ArrayMax = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
LAB_142059253:
    if (*(longlong *)&((UObjectBaseUtility *)param_2)->field_0x10 == 0) goto LAB_1420592d4;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_88,(UObject *)0x0,None);
  }
  FVar9.Data = local_88.Data.AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
    FVar9.Data = local_88.Data.AllocatorInstance.Data;
  }
LAB_1420592f9:
  if (2 < (byte)LogGarbage._0_1_) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)*param_1,&local_88,(UObject *)0x0,None);
    pFVar6 = FGCObjectInfo::FGCObjectInfo(&local_58,*param_1);
    FReferenceChainSearch::GetObjectFlags(&local_78,pFVar6);
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FUnreachableReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                ::__l29::LOG_Static,(FLogCategoryBase *)&LogGarbage);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  pFVar1->NumErrors = pFVar1->NumErrors + 1;
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleObjectReferences @ 14205ad50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDefaultCollector<FClusterVerifyReferenceProcessor>::HandleObjectReferences
          (TDefaultCollector<FClusterVerifyReferenceProcessor> *this,UObject **param_1,int param_2,
          UObject *param_3,FProperty *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FClusterVerifyReferenceProcessor *this_00;
  FWorkerContext *pFVar3;
  UObject *pUVar4;
  UObjectBaseUtility *this_01;
  FUObjectCluster *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FUObjectItem *pFVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  longlong local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  bVar13 = false;
  if (param_3 == (UObject *)0x0) {
    param_3 = this->Context->ReferencingObject;
  }
  if (0 < param_2) {
    local_148 = 0;
    do {
      this_00 = this->Processor;
      pFVar3 = this->Context;
      if (param_1[local_148] != (UObject *)0x0) {
        pUVar4 = pFVar3->ReferencingObject;
        if (pUVar4 != this_00->CurrentObject) {
          FClusterVerifyReferenceProcessor::SetCurrentObjectAndCluster(this_00,pUVar4);
        }
        if ((this_00->CurrentObject == (UObject *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentObject",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                               ,0xcb,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar9 = UObjectBase::IsValidLowLevelFast((UObjectBase *)param_1[local_148],true);
        if (!bVar9) {
          local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_140.Data.ArrayNum = 0;
          local_140.Data.ArrayMax = 0;
          if ((param_3 == (UObject *)0x0) ||
             (this_01 = *(UObjectBaseUtility **)&((UObjectBaseUtility *)param_3)->field_0x10,
             this_01 == (UObjectBaseUtility *)0x0)) {
            ::FString::operator=(&local_140,L"Native Reference");
          }
          else {
            FDebugSchemaStackNode::ToString(pFVar3->SchemaStack,&local_f0);
            UObjectBaseUtility::GetFullName(this_01,&local_100,(UObject *)0x0,None);
            ::FString::PrintfImpl(&local_130,L"ReferencingObjectClass: %s, Property: %s");
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
            uVar7 = local_130.Data._8_8_;
            local_140.Data.AllocatorInstance.Data = local_130.Data.AllocatorInstance.Data;
            local_130.Data.ArrayNum = 0;
            local_130.Data.ArrayMax = 0;
            uVar8 = local_130.Data._8_8_;
            local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_130.Data.ArrayNum = (int)uVar7;
            local_130.Data.ArrayMax = SUB84(uVar7,4);
            local_140.Data.ArrayNum = local_130.Data.ArrayNum;
            local_140.Data.ArrayMax = local_130.Data.ArrayMax;
            local_130.Data._8_8_ = uVar8;
            if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data.AllocatorInstance.Data);
            }
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
          }
          if (param_3 != (UObject *)0x0) {
            bVar13 = true;
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_3,&local_e0,(UObject *)0x0,None);
          }
          Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FClusterVerifyReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                      ::__l24::LOG_Static,(FLogCategoryBase *)&LogGarbage);
          if ((bVar13) &&
             (bVar13 = false, local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
        }
        pFVar10 = FUObjectArray::IndexToObject
                            (&GUObjectArray,*(int *)&param_1[local_148]->field_0xc);
        if (pFVar10->ClusterRootIndex < 1) {
          if (((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
            if (((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0) {
              iVar2 = *(int *)&((UObjectBaseUtility *)param_1[local_148])->field_0xc;
              if (GUObjectArray.ObjLastNonGCIndex < iVar2) {
                pFVar11 = (this_00->Cluster->MutableObjects).AllocatorInstance.Data;
                pFVar1 = pFVar11 + (longlong)(this_00->Cluster->MutableObjects).ArrayNum * 4;
                for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 4) {
                  if (*(int *)pFVar11 == iVar2) goto LAB_14205b587;
                }
                if (2 < (byte)LogGarbage._0_1_) {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)param_1[local_148],&local_90,(UObject *)0x0,None)
                  ;
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this_00->ClusterRootObject,&local_a0,
                             (UObject *)0x0,None);
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this_00->CurrentObject,&local_b0,(UObject *)0x0,
                             None);
                  Logging::Private::BasicLog<3>
                            ((FStaticBasicLogRecord *)
                             &`public:_void___cdecl_FClusterVerifyReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                              ::__l81::LOG_Static,(FLogCategoryBase *)&LogGarbage);
                  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                  }
                  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                  }
                  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_90.Data.AllocatorInstance.Data);
                  }
                }
                LOCK();
                (this_00->NumErrors).Counter = (this_00->NumErrors).Counter + 1;
                UNLOCK();
              }
            }
            goto LAB_14205b587;
          }
          FUObjectArray::IndexToObject
                    (&GUObjectArray,*(int *)&this_00->ClusterRootObject->field_0xc);
          iVar2 = *(int *)&param_1[local_148]->field_0xc;
          pFVar10 = FChunkedFixedUObjectArray::GetObjectPtr(&GUObjectArray.ObjObjects,iVar2);
          if (pFVar10 == (FUObjectItem *)0x0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L"");
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
LAB_14205b058:
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("OtherClusterRootItem && OtherClusterRootItem->GetObject()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                               ,0xf5,L"");
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else if ((pFVar10->field1_0x8).Object == (UObjectBase *)0x0) goto LAB_14205b058;
          if (((byte)LogGarbage._0_1_ < 3) ||
             (pFVar5 = this_00->Cluster, iVar2 == pFVar5->RootIndex)) goto LAB_14205b587;
          pFVar11 = (pFVar5->ReferencedClusters).AllocatorInstance.Data;
          pFVar1 = pFVar11 + (longlong)(pFVar5->ReferencedClusters).ArrayNum * 4;
          for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 4) {
            if (*(int *)pFVar11 == iVar2) goto LAB_14205b587;
          }
          pFVar11 = (pFVar5->MutableObjects).AllocatorInstance.Data;
          pFVar1 = pFVar11 + (longlong)(pFVar5->MutableObjects).ArrayNum * 4;
          for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 4) {
            if (*(int *)pFVar11 == iVar2) goto LAB_14205b587;
          }
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1[local_148],&local_c0,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00->ClusterRootObject,&local_d0,(UObject *)0x0,None)
          ;
          if ((param_3 == (UObject *)0x0) ||
             (*(longlong *)&((UObjectBaseUtility *)param_3)->field_0x10 == 0)) {
            ::FString::FString(&local_120,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_3,&local_120,(UObject *)0x0,None);
          }
          Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FClusterVerifyReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                      ::__l55::LOG_Static,(FLogCategoryBase *)&LogGarbage);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          FVar12.Data = local_c0.Data.AllocatorInstance.Data;
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            FVar12.Data = local_c0.Data.AllocatorInstance.Data;
          }
        }
        else {
          if (pFVar10->ClusterRootIndex == this_00->Cluster->RootIndex) goto LAB_14205b587;
          FUObjectArray::IndexToObject
                    (&GUObjectArray,*(int *)&this_00->ClusterRootObject->field_0xc);
          iVar2 = pFVar10->ClusterRootIndex;
          if ((iVar2 < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("OtherClusterRootIndex > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                                 ,0x11d,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar10 = FChunkedFixedUObjectArray::GetObjectPtr(&GUObjectArray.ObjObjects,iVar2);
          if (pFVar10 == (FUObjectItem *)0x0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L"");
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
LAB_14205b3a4:
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("OtherClusterRootItem && OtherClusterRootItem->GetObject()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                               ,0x11f,L"");
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else if ((pFVar10->field1_0x8).Object == (UObjectBase *)0x0) goto LAB_14205b3a4;
          if (((byte)LogGarbage._0_1_ < 3) ||
             (pFVar5 = this_00->Cluster, iVar2 == pFVar5->RootIndex)) goto LAB_14205b587;
          pFVar11 = (pFVar5->ReferencedClusters).AllocatorInstance.Data;
          pFVar1 = pFVar11 + (longlong)(pFVar5->ReferencedClusters).ArrayNum * 4;
          for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 4) {
            if (*(int *)pFVar11 == iVar2) goto LAB_14205b587;
          }
          pFVar11 = (this_00->Cluster->MutableObjects).AllocatorInstance.Data;
          pFVar1 = pFVar11 + (longlong)(this_00->Cluster->MutableObjects).ArrayNum * 4;
          for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 4) {
            if (*(int *)pFVar11 == *(int *)&param_1[local_148]->field_0xc) goto LAB_14205b587;
          }
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)(pFVar10->field1_0x8).Object,local_60,(UObject *)0x0,None
                    );
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1[local_148],&local_70,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00->ClusterRootObject,&local_80,(UObject *)0x0,None)
          ;
          if ((param_3 == (UObject *)0x0) ||
             (*(longlong *)&((UObjectBaseUtility *)param_3)->field_0x10 == 0)) {
            ::FString::FString(&local_110,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_3,&local_110,(UObject *)0x0,None);
          }
          Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FClusterVerifyReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                      ::__l117::LOG_Static,(FLogCategoryBase *)&LogGarbage);
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          FVar12.Data = local_60[0].Data.AllocatorInstance.Data;
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
            FVar12.Data = local_60[0].Data.AllocatorInstance.Data;
          }
        }
        if (FVar12.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar12.Data);
        }
      }
LAB_14205b587:
      local_148 = local_148 + 1;
    } while (local_148 < param_2);
  }
  return;
}

// HandleObjectReferences @ 14205b5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDefaultCollector<FDisregardSetReferenceProcessor>::HandleObjectReferences
          (TDefaultCollector<FDisregardSetReferenceProcessor> *this,UObject **param_1,int param_2,
          UObject *param_3,FProperty *param_4)

{
  FDisregardSetReferenceProcessor *pFVar1;
  FWorkerContext *pFVar2;
  UObjectBaseUtility *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  FUObjectItem *pFVar6;
  longlong lVar7;
  longlong lVar8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  lVar7 = 0;
  if (param_3 == (UObject *)0x0) {
    param_3 = this->Context->ReferencingObject;
  }
  lVar8 = lVar7;
  if (0 < param_2) {
    do {
      pFVar1 = this->Processor;
      pFVar2 = this->Context;
      if ((UObjectBase *)param_1[lVar7] != (UObjectBase *)0x0) {
        bVar5 = UObjectBase::IsValidLowLevelFast((UObjectBase *)param_1[lVar7],true);
        if (!bVar5) {
          local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b0.Data.ArrayNum = 0;
          local_b0.Data.ArrayMax = 0;
          if ((param_3 == (UObject *)0x0) ||
             (this_00 = *(UObjectBaseUtility **)&((UObjectBaseUtility *)param_3)->field_0x10,
             this_00 == (UObjectBaseUtility *)0x0)) {
            ::FString::operator=(&local_b0,L"Native Reference");
          }
          else {
            FDebugSchemaStackNode::ToString(pFVar2->SchemaStack,&local_80);
            UObjectBaseUtility::GetFullName(this_00,&local_90,(UObject *)0x0,None);
            ::FString::PrintfImpl(&local_a0,L"ReferencingObjectClass: %s, Property: %s");
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
            uVar3 = local_a0.Data._8_8_;
            local_b0.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
            local_a0.Data.ArrayNum = 0;
            local_a0.Data.ArrayMax = 0;
            uVar4 = local_a0.Data._8_8_;
            local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a0.Data.ArrayNum = (int)uVar3;
            local_a0.Data.ArrayMax = SUB84(uVar3,4);
            local_b0.Data.ArrayNum = local_a0.Data.ArrayNum;
            local_b0.Data.ArrayMax = local_a0.Data.ArrayMax;
            local_a0.Data._8_8_ = uVar4;
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
          }
          if (param_3 != (UObject *)0x0) {
            lVar8 = 1;
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_3,&local_70,(UObject *)0x0,None);
          }
          Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FDisregardSetReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                      ::__l14::LOG_Static,(FLogCategoryBase *)&LogGarbage);
          if ((lVar8 != 0) &&
             (lVar8 = 0, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
        }
        pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1[lVar7]->field_0xc);
        if ((((((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0) &&
             (GUObjectArray.ObjLastNonGCIndex < *(int *)&param_1[lVar7]->field_0xc)) &&
            (pFVar6 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)&param_1[lVar7]->field_0xc),
            pFVar6->ClusterRootIndex < 1)) &&
           (pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1[lVar7]->field_0xc)
           , ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0)) {
          if (2 < (byte)LogGarbage._0_1_) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1[lVar7],&local_50,(UObject *)0x0,None);
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_3,&local_60,(UObject *)0x0,None);
            Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_FDisregardSetReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                        ::__l35::LOG_Static,(FLogCategoryBase *)&LogGarbage);
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
          }
          LOCK();
          (pFVar1->NumErrors).Counter = (pFVar1->NumErrors).Counter + 1;
          UNLOCK();
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_2);
  }
  return;
}

// HandleObjectReferences @ 14205b920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDefaultCollector<FUnreachableReferenceProcessor>::HandleObjectReferences
          (TDefaultCollector<FUnreachableReferenceProcessor> *this,UObject **param_1,int param_2,
          UObject *param_3,FProperty *param_4)

{
  FUnreachableReferenceProcessor *pFVar1;
  FWorkerContext *pFVar2;
  FGCObject *pFVar3;
  FUObjectItem *pFVar4;
  undefined8 *puVar5;
  FGCObjectInfo *pFVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  longlong local_c8;
  FString local_c0;
  void *local_b0 [2];
  FString local_a0;
  FString local_90;
  undefined8 local_80 [2];
  FGCObjectInfo local_70;
  
  if (param_3 == (UObject *)0x0) {
    param_3 = this->Context->ReferencingObject;
  }
  lVar11 = (longlong)param_2;
  if (0 < param_2) {
    lVar10 = 0;
    local_c8 = lVar11;
    do {
      FVar7.Data = (FScriptContainerElement *)0x0;
      pFVar1 = this->Processor;
      pFVar2 = this->Context;
      if ((param_1[lVar10] != (UObject *)0x0) &&
         (pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1[lVar10]->field_0xc),
         ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag | Unreachable) &
         (EInternalObjectFlags)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x20)) !=
         Borrowed)) {
        if (param_3 != (UObject *)0x0) {
          pFVar4 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)&((UObjectBaseUtility *)param_3)->field_0xc);
          if ((0 < pFVar4->ClusterRootIndex) &&
             (pFVar4->ClusterRootIndex == *(int *)&param_1[lVar10]->field_0xc)) goto LAB_14205bc57;
        }
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        pFVar8 = FVar7.Data;
        if ((param_3 == (UObject *)0x0) ||
           (*(longlong *)&((UObjectBaseUtility *)param_3)->field_0x10 == 0)) {
          ::FString::operator=(&local_f8,L"Native Reference");
          if (param_3 != (UObject *)0x0) goto LAB_14205baa4;
          if ((FGCObject::GGCObjectReferencer == (UGCObjectReferencer *)0x0) ||
             (pFVar3 = FGCObject::GGCObjectReferencer->CurrentlySerializingObject,
             pFVar8 = (FScriptContainerElement *)0x0, pFVar3 == (FGCObject *)0x0))
          goto LAB_14205bb2f;
          puVar5 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,local_b0);
          pFVar9 = FVar7.Data;
          if (local_80 != puVar5) {
            FVar7.Data = (FScriptContainerElement *)*puVar5;
            *puVar5 = 0;
            pFVar9 = (FScriptContainerElement *)(ulonglong)*(uint *)(puVar5 + 1);
            puVar5[1] = 0;
          }
          if (local_b0[0] != (void *)0x0) {
            FMemory::Free(local_b0[0]);
          }
          pFVar8 = FVar7.Data;
          if ((int)pFVar9 < 2) goto LAB_14205bb2f;
        }
        else {
          FDebugSchemaStackNode::ToString(pFVar2->SchemaStack,&local_c0);
          ::FString::PrintfImpl(&local_e8,L"property: %s");
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          local_f8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
          local_f8.Data.ArrayNum = local_e8.Data.ArrayNum;
          local_f8.Data.ArrayMax = local_e8.Data.ArrayMax;
          local_e8.Data.ArrayNum = 0;
          local_e8.Data.ArrayMax = 0;
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
LAB_14205baa4:
          if (*(longlong *)&((UObjectBaseUtility *)param_3)->field_0x10 == 0) {
LAB_14205bb2f:
            ::FString::FString(&local_d8,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_3,&local_d8,(UObject *)0x0,None);
          }
          if (pFVar8 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar8);
          }
          FVar7.Data = local_d8.Data.AllocatorInstance.Data;
          local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.Data.ArrayNum = 0;
          local_d8.Data.ArrayMax = 0;
        }
        if (2 < (byte)LogGarbage._0_1_) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1[lVar10],&local_90,(UObject *)0x0,None);
          pFVar6 = FGCObjectInfo::FGCObjectInfo(&local_70,param_1[lVar10]);
          FReferenceChainSearch::GetObjectFlags(&local_a0,pFVar6);
          Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FUnreachableReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                      ::__l29::LOG_Static,(FLogCategoryBase *)&LogGarbage);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          lVar11 = local_c8;
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
            lVar11 = local_c8;
          }
        }
        pFVar1->NumErrors = pFVar1->NumErrors + 1;
        if (FVar7.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar7.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
LAB_14205bc57:
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar11);
  }
  return;
}

// IsIgnoringArchetypeRef @ 1420632e0

bool __thiscall
UE::GC::TDefaultCollector<FClusterVerifyReferenceProcessor>::IsIgnoringArchetypeRef
          (TDefaultCollector<FClusterVerifyReferenceProcessor> *this)

{
  return false;
}

// IsIgnoringArchetypeRef @ 1420632f0

bool __thiscall
UE::GC::TDefaultCollector<FDisregardSetReferenceProcessor>::IsIgnoringArchetypeRef
          (TDefaultCollector<FDisregardSetReferenceProcessor> *this)

{
  return false;
}

// IsIgnoringArchetypeRef @ 142063300

bool __thiscall
UE::GC::TDefaultCollector<FUnreachableReferenceProcessor>::IsIgnoringArchetypeRef
          (TDefaultCollector<FUnreachableReferenceProcessor> *this)

{
  return false;
}

// IsIgnoringTransient @ 1420633a0

bool __thiscall
UE::GC::TDefaultCollector<FClusterVerifyReferenceProcessor>::IsIgnoringTransient
          (TDefaultCollector<FClusterVerifyReferenceProcessor> *this)

{
  return false;
}

// IsIgnoringTransient @ 1420633b0

bool __thiscall
UE::GC::TDefaultCollector<FDisregardSetReferenceProcessor>::IsIgnoringTransient
          (TDefaultCollector<FDisregardSetReferenceProcessor> *this)

{
  return false;
}

// IsIgnoringTransient @ 1420633c0

bool __thiscall
UE::GC::TDefaultCollector<FUnreachableReferenceProcessor>::IsIgnoringTransient
          (TDefaultCollector<FUnreachableReferenceProcessor> *this)

{
  return false;
}

// HandleObjectReference @ 1421d1020

void __thiscall
UE::GC::TDefaultCollector<FAllReferencesProcessor>::HandleObjectReference
          (TDefaultCollector<FAllReferencesProcessor> *this,UObject **param_1,UObject *param_2,
          FProperty *param_3)

{
  FAllReferencesProcessor *pFVar1;
  UObject *pUVar2;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  UObject *local_res8;
  UObjectBaseUtility *local_res10;
  
  pFVar1 = this->Processor;
  if ((param_2 == (UObject *)0x0) &&
     (param_2 = this->Context->ReferencingObject, param_2 == (UObject *)0x0)) {
    param_2 = this->Context->ReferencingObject;
  }
  pUVar2 = *param_1;
  if (((pUVar2 != (UObject *)0x0) && (param_2 != (UObject *)0x0)) && (pUVar2 != param_2)) {
    pTVar3 = pFVar1->PotentiallyReferencedObjects;
    uVar6 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    if (*(int *)&(pTVar3->Elements).field_0x8 != *(int *)&(pTVar3->Elements).field_0x34) {
      FVar7 = (pTVar3->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&pTVar3->Hash;
      }
      iVar5 = *(int *)((longlong)FVar7 +
                      (ulonglong)(pTVar3->HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar5 != -1) {
        while (*(UObject **)(*(longlong *)&pTVar3->Elements + (longlong)iVar5 * 0x10) != pUVar2) {
          iVar5 = *(int *)(*(longlong *)&pTVar3->Elements + 8 + (longlong)iVar5 * 0x10);
          if (iVar5 == -1) {
            return;
          }
        }
        local_res10 = (UObjectBaseUtility *)param_2;
        if (((pFVar1->Flags & SkipInnerReferences) == None) ||
           (bVar4 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)param_2,pUVar2), !bVar4)) {
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
          Emplace<UObject_*_const_&>(pFVar1->ReferencingObjects,&local_res8,(bool *)&local_res10);
        }
      }
    }
  }
  return;
}

// HandleObjectReferences @ 1421d1a40

void __thiscall
UE::GC::TDefaultCollector<FAllReferencesProcessor>::HandleObjectReferences
          (TDefaultCollector<FAllReferencesProcessor> *this,UObject **param_1,int param_2,
          UObject *param_3,FProperty *param_4)

{
  FAllReferencesProcessor *pFVar1;
  UObject *pUVar2;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  UObject *local_res18;
  UObjectBaseUtility *local_res20;
  
  if (param_3 == (UObject *)0x0) {
    param_3 = this->Context->ReferencingObject;
  }
  if (0 < param_2) {
    lVar9 = 0;
    do {
      pFVar1 = this->Processor;
      local_res20 = (UObjectBaseUtility *)param_3;
      if (param_3 == (UObject *)0x0) {
        local_res20 = (UObjectBaseUtility *)this->Context->ReferencingObject;
      }
      pUVar2 = param_1[lVar9];
      if (((pUVar2 != (UObject *)0x0) && (local_res20 != (UObjectBaseUtility *)0x0)) &&
         (pUVar2 != (UObject *)local_res20)) {
        pTVar3 = pFVar1->PotentiallyReferencedObjects;
        uVar7 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
                -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        if (*(int *)&(pTVar3->Elements).field_0x8 != *(int *)&(pTVar3->Elements).field_0x34) {
          FVar4 = (pTVar3->Hash).SecondaryData;
          FVar8 = (ForElementType<FSetElementId>)&pTVar3->Hash;
          if (FVar4 != (ForElementType<FSetElementId>)0x0) {
            FVar8 = FVar4;
          }
          iVar6 = *(int *)((longlong)FVar8 +
                          (ulonglong)(pTVar3->HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
          if (iVar6 != -1) {
            do {
              if (*(UObject **)(*(longlong *)&pTVar3->Elements + (longlong)iVar6 * 0x10) == pUVar2)
              {
                if (((pFVar1->Flags & SkipInnerReferences) == None) ||
                   (bVar5 = UObjectBaseUtility::IsIn(local_res20,pUVar2), !bVar5)) {
                  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
                  Emplace<UObject_*_const_&>
                            (pFVar1->ReferencingObjects,&local_res18,(bool *)&local_res20);
                }
                break;
              }
              iVar6 = *(int *)(*(longlong *)&pTVar3->Elements + 8 + (longlong)iVar6 * 0x10);
            } while (iVar6 != -1);
          }
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < param_2);
  }
  return;
}

// IsIgnoringArchetypeRef @ 1421d3570

bool __thiscall
UE::GC::TDefaultCollector<FAllReferencesProcessor>::IsIgnoringArchetypeRef
          (TDefaultCollector<FAllReferencesProcessor> *this)

{
  return false;
}

// IsIgnoringTransient @ 1421d35c0

bool __thiscall
UE::GC::TDefaultCollector<FAllReferencesProcessor>::IsIgnoringTransient
          (TDefaultCollector<FAllReferencesProcessor> *this)

{
  return false;
}

// HandleObjectReference @ 142271ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDefaultCollector<FClusterReferenceProcessor>::HandleObjectReference
          (TDefaultCollector<FClusterReferenceProcessor> *this,UObject **param_1,UObject *param_2,
          FProperty *param_3)

{
  FScriptContainerElement *pFVar1;
  FClusterReferenceProcessor *this_00;
  FWorkerContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FUObjectItem *pFVar6;
  UObject *pUVar7;
  FUObjectItem *pFVar8;
  FUObjectCluster *pFVar9;
  int iVar10;
  wchar_t *pwVar11;
  int *piVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  int local_res10 [2];
  UObject *local_res18;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  FString local_68;
  FString local_58;
  FString local_48;
  
  this_00 = this->Processor;
  pFVar2 = this->Context;
  if (*param_1 == (UObject *)0x0) {
    return;
  }
  iVar10 = *(int *)&(*param_1)->field_0xc;
  local_res18 = param_2;
  if ((iVar10 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = (FUObjectItem *)0x0;
  pFVar6 = pFVar8;
  if (iVar10 < GUObjectArray.ObjObjects.NumElements) {
    pFVar6 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar10);
  }
  if (pFVar6->ClusterRootIndex == this_00->ClusterRootIndex) {
    return;
  }
  if ((4 < (byte)LogObj._0_1_) && ((*(uint *)&(*param_1)->field_0x8 & 0x1400) != 0)) {
    pUVar7 = FClusterReferenceProcessor::GetClusterRoot(this_00);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar7,(UObject *)0x0,&local_48,None);
    pUVar7 = *param_1;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    if (pUVar7 == (UObject *)0x0) {
      iVar10 = 4;
      pwVar11 = L"null";
LAB_142271c32:
      ::FString::AppendChars(&local_68,pwVar11,iVar10);
    }
    else {
      if ((*(uint *)&pUVar7->field_0x8 >> 10 & 1) != 0) {
        ::FString::AppendChars(&local_68,L"RF_NeedLoad",0xb);
      }
      if ((*(uint *)&pUVar7->field_0x8 >> 0xc & 1) != 0) {
        iVar10 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar10 = 0;
        }
        if (iVar10 != 0) {
          ::FString::AppendChars(&local_68,L"|",1);
        }
        iVar10 = 0xf;
        pwVar11 = L"RF_NeedPostLoad";
        goto LAB_142271c32;
      }
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)*param_1,(UObject *)0x0,&local_58,None);
    Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x38) & 1) != 0) ||
     (pFVar6->ClusterRootIndex != 0)) {
    if (((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
      iVar10 = pFVar6->ClusterRootIndex;
    }
    else {
      iVar10 = *(int *)&(*param_1)->field_0xc;
    }
    local_74 = iVar10;
    if ((iVar10 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (iVar10 < GUObjectArray.ObjObjects.NumElements) {
      pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar10);
    }
    pFVar9 = FUObjectClusterContainer::operator[](&GUObjectClusters,~pFVar8->ClusterRootIndex);
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (&this_00->Cluster->ReferencedClusters,&local_74);
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (&pFVar9->ReferencedByClusters,&this_00->ClusterRootIndex);
    pFVar13 = (pFVar9->ReferencedClusters).AllocatorInstance.Data;
    iVar10 = (pFVar9->ReferencedClusters).ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar10 * 4;
    while( true ) {
      if ((pFVar9->ReferencedClusters).ArrayNum != iVar10) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res18)
        ;
      }
      if (pFVar13 == pFVar1) break;
      local_70 = *(int *)pFVar13;
      if (local_70 != this_00->ClusterRootIndex) {
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&this_00->Cluster->ReferencedClusters,&local_70);
      }
      pFVar13 = pFVar13 + 4;
    }
    pFVar13 = (pFVar9->MutableObjects).AllocatorInstance.Data;
    iVar10 = (pFVar9->MutableObjects).ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar10 * 4;
    while( true ) {
      if ((pFVar9->MutableObjects).ArrayNum != iVar10) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar1) break;
      local_6c = *(int *)pFVar13;
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (&this_00->Cluster->MutableObjects,&local_6c);
      pFVar13 = pFVar13 + 4;
    }
    return;
  }
  if (*(int *)&(*param_1)->field_0xc <= GUObjectArray.ObjLastNonGCIndex) {
    return;
  }
  cVar5 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  if ((cVar5 != '\0') && ((*(uint *)&(*param_1)->field_0x8 & 0x1400) == 0)) {
    iVar10 = *(int *)&(*param_1)->field_0xc;
    if ((iVar10 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (iVar10 < GUObjectArray.ObjObjects.NumElements) {
      pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar10);
    }
    if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0) {
      bVar4 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)*param_1,this_00->Outermost);
      if ((bVar4) || (*param_1 == this_00->Outermost)) {
        if ((pFVar6->ClusterRootIndex != 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ObjectItem->GetOwnerIndex() == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                               ,0x2f2,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FClusterReferenceProcessor::AddObjectToCluster
                  (this_00,*(int *)&(*param_1)->field_0xc,pFVar6,*param_1,pFVar2,true);
        return;
      }
      pFVar9 = this_00->Cluster;
      piVar12 = local_res10;
      local_res10[0] = *(int *)&(*param_1)->field_0xc;
      goto LAB_142271d95;
    }
  }
  piVar12 = &local_78;
  local_78 = *(int *)&(*param_1)->field_0xc;
  pFVar9 = this_00->Cluster;
LAB_142271d95:
  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>(&pFVar9->MutableObjects,piVar12);
  return;
}

// HandleObjectReferences @ 142272200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDefaultCollector<FClusterReferenceProcessor>::HandleObjectReferences
          (TDefaultCollector<FClusterReferenceProcessor> *this,UObject **param_1,int param_2,
          UObject *param_3,FProperty *param_4)

{
  FScriptContainerElement *pFVar1;
  FClusterReferenceProcessor *this_00;
  FWorkerContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FUObjectItem *pFVar6;
  UObject *pUVar7;
  FUObjectItem *pFVar8;
  FUObjectCluster *pFVar9;
  int iVar10;
  wchar_t *pwVar11;
  int *piVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  undefined1 local_res18 [8];
  UObject *local_res20;
  FString local_80;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60 [2];
  FString local_58;
  FString local_48;
  
  if (0 < param_2) {
    lVar14 = 0;
    local_res20 = param_3;
    do {
      pFVar6 = (FUObjectItem *)0x0;
      this_00 = this->Processor;
      pFVar2 = this->Context;
      if (param_1[lVar14] != (UObject *)0x0) {
        iVar10 = *(int *)&param_1[lVar14]->field_0xc;
        if ((iVar10 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x443,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (iVar10 < GUObjectArray.ObjObjects.NumElements) {
          pFVar6 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar10);
        }
        if (pFVar6->ClusterRootIndex != this_00->ClusterRootIndex) {
          if ((4 < (byte)LogObj._0_1_) && ((*(uint *)&param_1[lVar14]->field_0x8 & 0x1400) != 0)) {
            pUVar7 = FClusterReferenceProcessor::GetClusterRoot(this_00);
            local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_48.Data.ArrayNum = 0;
            local_48.Data.ArrayMax = 0;
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)pUVar7,(UObject *)0x0,&local_48,None);
            pUVar7 = param_1[lVar14];
            local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_80.Data.ArrayNum = 0;
            local_80.Data.ArrayMax = 0;
            if (pUVar7 == (UObject *)0x0) {
              iVar10 = 4;
              pwVar11 = L"null";
LAB_142272392:
              ::FString::AppendChars(&local_80,pwVar11,iVar10);
            }
            else {
              if ((*(uint *)&pUVar7->field_0x8 >> 10 & 1) != 0) {
                ::FString::AppendChars(&local_80,L"RF_NeedLoad",0xb);
              }
              if ((*(uint *)&pUVar7->field_0x8 >> 0xc & 1) != 0) {
                iVar10 = local_80.Data.ArrayNum + -1;
                if (local_80.Data.ArrayNum == 0) {
                  iVar10 = 0;
                }
                if (iVar10 != 0) {
                  ::FString::AppendChars(&local_80,L"|",1);
                }
                iVar10 = 0xf;
                pwVar11 = L"RF_NeedPostLoad";
                goto LAB_142272392;
              }
            }
            local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_58.Data.ArrayNum = 0;
            local_58.Data.ArrayMax = 0;
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_1[lVar14],(UObject *)0x0,&local_58,None);
            Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_FClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                        ::__l9::LOG_Static,(FLogCategoryBase *)&LogObj);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          pFVar8 = (FUObjectItem *)0x0;
          if ((((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) &&
             (pFVar6->ClusterRootIndex == 0)) {
            if (GUObjectArray.ObjLastNonGCIndex < *(int *)&param_1[lVar14]->field_0xc) {
              cVar5 = (**(code **)(*(longlong *)param_1[lVar14] + 0x28))();
              if ((cVar5 == '\0') || ((*(uint *)&param_1[lVar14]->field_0x8 & 0x1400) != 0)) {
LAB_1422725a0:
                piVar12 = &local_6c;
                local_6c = *(int *)&param_1[lVar14]->field_0xc;
                pFVar9 = this_00->Cluster;
              }
              else {
                iVar10 = *(int *)&param_1[lVar14]->field_0xc;
                if ((iVar10 < 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                       ,0x443,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (iVar10 < GUObjectArray.ObjObjects.NumElements) {
                  pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar10);
                }
                if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0)
                goto LAB_1422725a0;
                bVar4 = UObjectBaseUtility::IsIn
                                  ((UObjectBaseUtility *)param_1[lVar14],this_00->Outermost);
                if ((bVar4) || (param_1[lVar14] == this_00->Outermost)) {
                  if ((pFVar6->ClusterRootIndex != 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ObjectItem->GetOwnerIndex() == 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                                         ,0x2f2,L""), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  FClusterReferenceProcessor::AddObjectToCluster
                            (this_00,*(int *)&param_1[lVar14]->field_0xc,pFVar6,param_1[lVar14],
                             pFVar2,true);
                  goto LAB_14227250a;
                }
                pFVar9 = this_00->Cluster;
                piVar12 = &local_70;
                local_70 = *(int *)&param_1[lVar14]->field_0xc;
              }
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                        (&pFVar9->MutableObjects,piVar12);
            }
          }
          else {
            if (((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
              iVar10 = pFVar6->ClusterRootIndex;
            }
            else {
              iVar10 = *(int *)&param_1[lVar14]->field_0xc;
            }
            local_68 = iVar10;
            if ((iVar10 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (iVar10 < GUObjectArray.ObjObjects.NumElements) {
              pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar10);
            }
            pFVar9 = FUObjectClusterContainer::operator[]
                               (&GUObjectClusters,~pFVar8->ClusterRootIndex);
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&this_00->Cluster->ReferencedClusters,&local_68);
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (&pFVar9->ReferencedByClusters,&this_00->ClusterRootIndex);
            pFVar13 = (pFVar9->ReferencedClusters).AllocatorInstance.Data;
            iVar10 = (pFVar9->ReferencedClusters).ArrayNum;
            pFVar1 = pFVar13 + (longlong)iVar10 * 4;
            while( true ) {
              if ((pFVar9->ReferencedClusters).ArrayNum != iVar10) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res18);
              }
              if (pFVar13 == pFVar1) break;
              local_64 = *(int *)pFVar13;
              if (local_64 != this_00->ClusterRootIndex) {
                TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                          (&this_00->Cluster->ReferencedClusters,&local_64);
              }
              pFVar13 = pFVar13 + 4;
            }
            pFVar13 = (pFVar9->MutableObjects).AllocatorInstance.Data;
            iVar10 = (pFVar9->MutableObjects).ArrayNum;
            pFVar1 = pFVar13 + (longlong)iVar10 * 4;
            while( true ) {
              if ((pFVar9->MutableObjects).ArrayNum != iVar10) {
                local_res20 = (UObject *)((ulonglong)local_res20 & 0xffffffffffffff00);
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_res20);
              }
              if (pFVar13 == pFVar1) break;
              local_60[0] = *(int *)pFVar13;
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        (&this_00->Cluster->MutableObjects,local_60);
              pFVar13 = pFVar13 + 4;
            }
          }
        }
      }
LAB_14227250a:
      lVar14 = lVar14 + 1;
    } while (lVar14 < param_2);
  }
  return;
}

// IsIgnoringArchetypeRef @ 142274990

bool __thiscall
UE::GC::TDefaultCollector<FClusterReferenceProcessor>::IsIgnoringArchetypeRef
          (TDefaultCollector<FClusterReferenceProcessor> *this)

{
  return false;
}

// IsIgnoringTransient @ 1422749c0

bool __thiscall
UE::GC::TDefaultCollector<FClusterReferenceProcessor>::IsIgnoringTransient
          (TDefaultCollector<FClusterReferenceProcessor> *this)

{
  return false;
}

