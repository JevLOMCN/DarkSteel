// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// AddObjectToCluster @ 14225df70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FClusterReferenceProcessor::AddObjectToCluster
          (FClusterReferenceProcessor *this,int param_1,FUObjectItem *param_2,UObject *param_3,
          FWorkerContext *param_4,bool param_5)

{
  FWorkBlockifier *this_00;
  FScriptContainerElement *pFVar1;
  UObjectBase *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  UObject *pUVar7;
  FUObjectItem *pFVar8;
  FUObjectItem *pFVar9;
  FUObjectItem *pFVar10;
  FUObjectCluster *pFVar11;
  int *piVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156 [6];
  FString local_150;
  FString local_140;
  FString local_130;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8 [2];
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pFVar10 = (FUObjectItem *)0x0;
  local_res10[0] = param_1;
  if ((*(uint *)&param_3->field_0x8 >> 10 & 1) != 0) {
    pUVar7 = GetClusterRoot(this);
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar7,(UObject *)0x0,&local_d0,None);
    local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.Data.ArrayNum = 0;
    local_150.Data.ArrayMax = 0;
    if ((*(uint *)&param_3->field_0x8 >> 10 & 1) != 0) {
      ::FString::AppendChars(&local_150,L"RF_NeedLoad",0xb);
    }
    if ((*(uint *)&param_3->field_0x8 >> 0xc & 1) != 0) {
      iVar6 = local_150.Data.ArrayNum + -1;
      if (local_150.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      if (iVar6 != 0) {
        ::FString::AppendChars(&local_150,L"|",1);
      }
      ::FString::AppendChars(&local_150,L"RF_NeedPostLoad",0xf);
    }
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.Data.ArrayNum = 0;
    local_e0.Data.ArrayMax = 0;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,(UObject *)0x0,&local_e0,None);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Obj->HasAnyFlags(RF_NeedLoad)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                       ,0x290,L"%s hasn\'t been loaded (%s) but is being added to cluster %s");
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((((param_2->ClusterRootIndex != 0) && (param_2->ClusterRootIndex != this->ClusterRootIndex))
      && (local_res10[0] != this->ClusterRootIndex)) &&
     ((GUObjectArray.ObjLastNonGCIndex < *(int *)&param_3->field_0xc &&
      (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("ObjectItem->GetOwnerIndex() == 0 || ObjectItem->GetOwnerIndex() == ClusterRootIndex || ObjectIndex == ClusterRootIndex || GUObjectArray.IsDisregardForGC(Obj)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                          ,0x292,L""), bVar4)))) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar5 = (**(code **)(*(longlong *)param_3 + 0x28))(param_3);
  if ((cVar5 == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Obj->CanBeInCluster()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                         ,0x293,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_res10[0] == this->ClusterRootIndex) {
    return;
  }
  if (param_2->ClusterRootIndex != 0) {
    return;
  }
  iVar6 = *(int *)&param_3->field_0xc;
  if (iVar6 <= GUObjectArray.ObjLastNonGCIndex) {
    return;
  }
  if ((iVar6 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = pFVar10;
  if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
    pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
  }
  if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) {
    return;
  }
  this_00 = &param_4->ObjectsToSerialize;
  *(param_4->ObjectsToSerialize).WipIt = param_3;
  this_00->WipIt = this_00->WipIt + 1;
  if (this_00->WipIt == ((param_4->ObjectsToSerialize).Wip)->Objects + 0x1ef) {
    UE::GC::FWorkBlockifier::PushFullBlockSync(this_00);
  }
  if ((((uint)((ulonglong)(param_2->field0_0x0).FlagsAndRefCount >> 0x38) & 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ObjectItem->HasAnyFlags(EInternalObjectFlags::ClusterRoot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                         ,0x297,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_2->ClusterRootIndex = this->ClusterRootIndex;
  pFVar11 = this->Cluster;
  pFVar1 = (pFVar11->Objects).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar1 + (longlong)(pFVar11->Objects).ArrayMax * 4))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (pFVar11->Objects).ArrayNum;
  piVar12 = &(pFVar11->Objects).ArrayMax;
  if (iVar6 == *piVar12) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar11->Objects).AllocatorInstance,piVar12);
  }
  (pFVar11->Objects).ArrayNum = iVar6 + 1;
  *(int *)((pFVar11->Objects).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_res10[0];
  if (!param_5) {
    return;
  }
  pUVar2 = *(UObjectBase **)&param_3->field_0x20;
  if ((pUVar2 != (UObjectBase *)0x0) &&
     (pFVar8 = FUObjectArray::ObjectToObjectItem(&GUObjectArray,pUVar2),
     pFVar8->ClusterRootIndex != this->ClusterRootIndex)) {
    if ((4 < (byte)LogObj._0_1_) &&
       ((pUVar2->ObjectFlags & (RF_NeedPostLoad|RF_NeedLoad)) != RF_NoFlags)) {
      pUVar7 = GetClusterRoot(this);
      local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.Data.ArrayNum = 0;
      local_b0.Data.ArrayMax = 0;
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar7,(UObject *)0x0,&local_b0,None);
      local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.Data.ArrayNum = 0;
      local_140.Data.ArrayMax = 0;
      if ((pUVar2->ObjectFlags >> 10 & 1) != 0) {
        ::FString::AppendChars(&local_140,L"RF_NeedLoad",0xb);
      }
      if ((pUVar2->ObjectFlags >> 0xc & 1) != 0) {
        iVar6 = local_140.Data.ArrayNum + -1;
        if (local_140.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        if (iVar6 != 0) {
          ::FString::AppendChars(&local_140,L"|",1);
        }
        ::FString::AppendChars(&local_140,L"RF_NeedPostLoad",0xf);
      }
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar2,(UObject *)0x0,&local_c0,None);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogObj);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    if ((((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) &&
       (pFVar8->ClusterRootIndex == 0)) {
      if (GUObjectArray.ObjLastNonGCIndex < pUVar2->InternalIndex) {
        cVar5 = (**(code **)(pUVar2->_padding_ + 0x28))(pUVar2);
        if ((cVar5 == '\0') || ((pUVar2->ObjectFlags & (RF_NeedPostLoad|RF_NeedLoad)) != RF_NoFlags)
           ) {
LAB_14225e79f:
          pFVar11 = this->Cluster;
          piVar12 = &local_11c;
          local_11c = pUVar2->InternalIndex;
        }
        else {
          iVar6 = pUVar2->InternalIndex;
          if ((iVar6 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x443,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar9 = pFVar10;
          if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
            pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
          }
          if (((uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0)
          goto LAB_14225e79f;
          bVar4 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)pUVar2,this->Outermost);
          if ((bVar4) || (pUVar2 == (UObjectBase *)this->Outermost)) {
            if ((pFVar8->ClusterRootIndex != 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ObjectItem->GetOwnerIndex() == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                                   ,0x2f2,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            AddObjectToCluster(this,pUVar2->InternalIndex,pFVar8,(UObject *)pUVar2,param_4,true);
            goto LAB_14225e549;
          }
          pFVar11 = this->Cluster;
          piVar12 = &local_120;
          local_120 = pUVar2->InternalIndex;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                  (&pFVar11->MutableObjects,piVar12);
      }
    }
    else {
      if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
        iVar6 = pFVar8->ClusterRootIndex;
      }
      else {
        iVar6 = pUVar2->InternalIndex;
      }
      local_118 = iVar6;
      if ((iVar6 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = pFVar10;
      if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
        pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
      }
      pFVar11 = FUObjectClusterContainer::operator[](&GUObjectClusters,~pFVar8->ClusterRootIndex);
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (&this->Cluster->ReferencedClusters,&local_118);
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (&pFVar11->ReferencedByClusters,&this->ClusterRootIndex);
      pFVar13 = (pFVar11->ReferencedClusters).AllocatorInstance.Data;
      iVar6 = (pFVar11->ReferencedClusters).ArrayNum;
      pFVar1 = pFVar13 + (longlong)iVar6 * 4;
      while( true ) {
        if ((pFVar11->ReferencedClusters).ArrayNum != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (pFVar13 == pFVar1) break;
        local_114 = *(int *)pFVar13;
        if (local_114 != this->ClusterRootIndex) {
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (&this->Cluster->ReferencedClusters,&local_114);
        }
        pFVar13 = pFVar13 + 4;
      }
      pFVar13 = (pFVar11->MutableObjects).AllocatorInstance.Data;
      iVar6 = (pFVar11->MutableObjects).ArrayNum;
      pFVar1 = pFVar13 + (longlong)iVar6 * 4;
      while( true ) {
        if ((pFVar11->MutableObjects).ArrayNum != iVar6) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar13 == pFVar1) break;
        local_110 = *(int *)pFVar13;
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&this->Cluster->MutableObjects,&local_110);
        pFVar13 = pFVar13 + 4;
      }
    }
  }
LAB_14225e549:
  pUVar2 = *(UObjectBase **)&param_3->field_0x10;
  if ((pUVar2[5].InternalIndex & 0x80) != 0) {
    return;
  }
  if ((pUVar2 == (UObjectBase *)0x0) ||
     (pFVar8 = FUObjectArray::ObjectToObjectItem(&GUObjectArray,pUVar2),
     pFVar8->ClusterRootIndex == this->ClusterRootIndex)) goto LAB_14225e927;
  if ((4 < (byte)LogObj._0_1_) &&
     ((pUVar2->ObjectFlags & (RF_NeedPostLoad|RF_NeedLoad)) != RF_NoFlags)) {
    pUVar7 = GetClusterRoot(this);
    local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Data.ArrayNum = 0;
    local_90.Data.ArrayMax = 0;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar7,(UObject *)0x0,&local_90,None);
    local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.Data.ArrayNum = 0;
    local_130.Data.ArrayMax = 0;
    if ((pUVar2->ObjectFlags >> 10 & 1) != 0) {
      ::FString::AppendChars(&local_130,L"RF_NeedLoad",0xb);
    }
    if ((pUVar2->ObjectFlags >> 0xc & 1) != 0) {
      iVar6 = local_130.Data.ArrayNum + -1;
      if (local_130.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      if (iVar6 != 0) {
        ::FString::AppendChars(&local_130,L"|",1);
      }
      ::FString::AppendChars(&local_130,L"RF_NeedPostLoad",0xf);
    }
    local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.Data.ArrayNum = 0;
    local_a0.Data.ArrayMax = 0;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar2,(UObject *)0x0,&local_a0,None);
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if ((((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x38) & 1) != 0) ||
     (pFVar8->ClusterRootIndex != 0)) {
    if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
      iVar6 = pFVar8->ClusterRootIndex;
    }
    else {
      iVar6 = pUVar2->InternalIndex;
    }
    local_104 = iVar6;
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar8 = pFVar10;
    if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
      pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
    }
    pFVar11 = FUObjectClusterContainer::operator[](&GUObjectClusters,~pFVar8->ClusterRootIndex);
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (&this->Cluster->ReferencedClusters,&local_104);
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (&pFVar11->ReferencedByClusters,&this->ClusterRootIndex);
    pFVar13 = (pFVar11->ReferencedClusters).AllocatorInstance.Data;
    iVar6 = (pFVar11->ReferencedClusters).ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar6 * 4;
    while( true ) {
      if ((pFVar11->ReferencedClusters).ArrayNum != iVar6) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar13 == pFVar1) break;
      local_100 = *(int *)pFVar13;
      if (local_100 != this->ClusterRootIndex) {
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&this->Cluster->ReferencedClusters,&local_100);
      }
      pFVar13 = pFVar13 + 4;
    }
    pFVar13 = (pFVar11->MutableObjects).AllocatorInstance.Data;
    iVar6 = (pFVar11->MutableObjects).ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar6 * 4;
    while( true ) {
      if ((pFVar11->MutableObjects).ArrayNum != iVar6) {
        local_158 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_158);
      }
      if (pFVar13 == pFVar1) break;
      local_fc = *(int *)pFVar13;
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (&this->Cluster->MutableObjects,&local_fc);
      pFVar13 = pFVar13 + 4;
    }
    goto LAB_14225e927;
  }
  if (pUVar2->InternalIndex <= GUObjectArray.ObjLastNonGCIndex) goto LAB_14225e927;
  cVar5 = (**(code **)(pUVar2->_padding_ + 0x28))(pUVar2);
  if ((cVar5 == '\0') || ((pUVar2->ObjectFlags & (RF_NeedPostLoad|RF_NeedLoad)) != RF_NoFlags)) {
LAB_14225ea14:
    pFVar11 = this->Cluster;
    piVar12 = &local_108;
    local_108 = pUVar2->InternalIndex;
  }
  else {
    iVar6 = pUVar2->InternalIndex;
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = pFVar10;
    if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
      pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
    }
    if (((uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0)
    goto LAB_14225ea14;
    bVar4 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)pUVar2,this->Outermost);
    if ((bVar4) || (pUVar2 == (UObjectBase *)this->Outermost)) {
      if ((pFVar8->ClusterRootIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ObjectItem->GetOwnerIndex() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                             ,0x2f2,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      AddObjectToCluster(this,pUVar2->InternalIndex,pFVar8,(UObject *)pUVar2,param_4,true);
      goto LAB_14225e927;
    }
    pFVar11 = this->Cluster;
    piVar12 = &local_10c;
    local_10c = pUVar2->InternalIndex;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>(&pFVar11->MutableObjects,piVar12);
LAB_14225e927:
  pUVar2 = *(UObjectBase **)(*(longlong *)&param_3->field_0x10 + 0x20);
  if ((pUVar2 != (UObjectBase *)0x0) &&
     (pFVar8 = FUObjectArray::ObjectToObjectItem(&GUObjectArray,pUVar2),
     pFVar8->ClusterRootIndex != this->ClusterRootIndex)) {
    if ((4 < (byte)LogObj._0_1_) &&
       ((pUVar2->ObjectFlags & (RF_NeedPostLoad|RF_NeedLoad)) != RF_NoFlags)) {
      pUVar7 = GetClusterRoot(this);
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.Data.ArrayNum = 0;
      local_70.Data.ArrayMax = 0;
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar7,(UObject *)0x0,&local_70,None);
      LoadFlagsToString(local_60,(UObject *)pUVar2);
      local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_80.Data.ArrayNum = 0;
      local_80.Data.ArrayMax = 0;
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar2,(UObject *)0x0,&local_80,None);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FClusterReferenceProcessor::HandleTokenStreamObjectReference(UE::GC::FWorkerContext&___ptr64,UObject*___ptr64,UObject*___ptr64&___ptr64,UE::GC::FMemberId,UE::GC::EOrigin,bool)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogObj);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
    if ((((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) &&
       (pFVar8->ClusterRootIndex == 0)) {
      if (GUObjectArray.ObjLastNonGCIndex < pUVar2->InternalIndex) {
        cVar5 = (**(code **)(pUVar2->_padding_ + 0x28))(pUVar2);
        if (((cVar5 == '\0') ||
            ((pUVar2->ObjectFlags & (RF_NeedPostLoad|RF_NeedLoad)) != RF_NoFlags)) ||
           (pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar2->InternalIndex),
           ((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0)) {
          pFVar11 = this->Cluster;
          piVar12 = &local_f4;
          local_f4 = pUVar2->InternalIndex;
        }
        else {
          bVar4 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)pUVar2,this->Outermost);
          if ((bVar4) || (pUVar2 == (UObjectBase *)this->Outermost)) {
            if ((pFVar8->ClusterRootIndex != 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ObjectItem->GetOwnerIndex() == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectClusters.cpp"
                                   ,0x2f2,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            AddObjectToCluster(this,pUVar2->InternalIndex,pFVar8,(UObject *)pUVar2,param_4,true);
            return;
          }
          pFVar11 = this->Cluster;
          piVar12 = &local_f8;
          local_f8 = pUVar2->InternalIndex;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>
                  (&pFVar11->MutableObjects,piVar12);
      }
    }
    else {
      if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x38) & 1) == 0) {
        iVar6 = pFVar8->ClusterRootIndex;
      }
      else {
        iVar6 = pUVar2->InternalIndex;
      }
      local_f0 = iVar6;
      if ((iVar6 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x443,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar6 < GUObjectArray.ObjObjects.NumElements) {
        pFVar10 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar6);
      }
      pFVar11 = FUObjectClusterContainer::operator[](&GUObjectClusters,~pFVar10->ClusterRootIndex);
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (&this->Cluster->ReferencedClusters,&local_f0);
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (&pFVar11->ReferencedByClusters,&this->ClusterRootIndex);
      pFVar13 = (pFVar11->ReferencedClusters).AllocatorInstance.Data;
      iVar6 = (pFVar11->ReferencedClusters).ArrayNum;
      pFVar1 = pFVar13 + (longlong)iVar6 * 4;
      while( true ) {
        if ((pFVar11->ReferencedClusters).ArrayNum != iVar6) {
          local_157 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_157)
          ;
        }
        if (pFVar13 == pFVar1) break;
        local_ec = *(int *)pFVar13;
        if (local_ec != this->ClusterRootIndex) {
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (&this->Cluster->ReferencedClusters,&local_ec);
        }
        pFVar13 = pFVar13 + 4;
      }
      pFVar13 = (pFVar11->MutableObjects).AllocatorInstance.Data;
      iVar6 = (pFVar11->MutableObjects).ArrayNum;
      pFVar1 = pFVar13 + (longlong)iVar6 * 4;
      while( true ) {
        if ((pFVar11->MutableObjects).ArrayNum != iVar6) {
          local_156[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_156);
        }
        if (pFVar13 == pFVar1) break;
        local_e8[0] = *(int *)pFVar13;
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (&this->Cluster->MutableObjects,local_e8);
        pFVar13 = pFVar13 + 4;
      }
    }
  }
  return;
}

// GetClusterRoot @ 14226f150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UObject * __thiscall FClusterReferenceProcessor::GetClusterRoot(FClusterReferenceProcessor *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FUObjectItem *pFVar5;
  
  iVar1 = this->Cluster->RootIndex;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x443,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UObject *)(*pcVar2)();
      return pUVar4;
    }
  }
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
    return (UObject *)(pFVar5->field1_0x8).Object;
  }
  return _DAT_00000008;
}

// LoadFlagsToString @ 142277310

FString * __cdecl
FClusterReferenceProcessor::LoadFlagsToString(FString *__return_storage_ptr__,UObject *param_1)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1 == (UObject *)0x0) {
    iVar2 = 4;
    pwVar3 = L"null";
  }
  else {
    if ((*(uint *)&param_1->field_0x8 >> 10 & 1) != 0) {
      ::FString::AppendChars(__return_storage_ptr__,L"RF_NeedLoad",0xb);
    }
    if ((*(uint *)&param_1->field_0x8 >> 0xc & 1) == 0) {
      return __return_storage_ptr__;
    }
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      ::FString::AppendChars(__return_storage_ptr__,L"|",1);
    }
    iVar2 = 0xf;
    pwVar3 = L"RF_NeedPostLoad";
  }
  ::FString::AppendChars(__return_storage_ptr__,pwVar3,iVar2);
  return __return_storage_ptr__;
}

