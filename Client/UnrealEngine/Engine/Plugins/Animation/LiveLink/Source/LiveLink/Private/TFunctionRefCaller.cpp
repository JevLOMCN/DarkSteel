// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 23

// Call @ 14d028f30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FLiveLinkClient::RemoveAllSourcesWithTimeout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&>
::Call(void *param_1,FLiveLinkCollectionSourceItem *param_2)

{
  if ((((param_2->Guid).D != 0xa8b24a5a || (param_2->Guid).B != 0xcc5911ce) ||
      (param_2->Guid).C != 0x4af0635d) || (param_2->Guid).A != 0x4ed2dc4e) {
    **(int **)param_1 = **(int **)param_1 + 1;
  }
  return;
}

// Call @ 14d028f70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::BuildThisTicksSubjectSnapshot'::__l2::<lambda_1>,void,FLiveLinkSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
::Call(void *param_1,FLiveLinkSubject **param_2,FLiveLinkCollectionSourceItem *param_3,
      FLiveLinkCollectionSubjectItem *param_4)

{
  `FLiveLinkClient::BuildThisTicksSubjectSnapshot'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 14d028f80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::ForEachLiveSubject'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
::Call(void *param_1,FLiveLinkCollectionSourceItem *param_2,FLiveLinkCollectionSubjectItem *param_3)

{
  FLiveLinkSubject *local_res18 [2];
  
  local_res18[0] = (param_3->LiveSubject).Ptr;
  if (local_res18[0] != (FLiveLinkSubject *)0x0) {
    (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8),local_res18,param_2,param_3);
  }
  return;
}

// Call @ 14d028fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::ForEachVirtualSubject'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
::Call(void *param_1,FLiveLinkCollectionSourceItem *param_2,FLiveLinkCollectionSubjectItem *param_3)

{
  UObject *local_res18 [2];
  
  local_res18[0] = (param_3->VirtualSubject).Object;
  if (local_res18[0] != (UObject *)0x0) {
    (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8),local_res18,param_2,param_3);
  }
  return;
}

// Call @ 14d029000

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::GetDisplayableSources'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&>
::Call(void *param_1,FLiveLinkCollectionSourceItem *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  
  if ((param_2->Source).Object == (ILiveLinkSource *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  cVar7 = (**(code **)((longlong)*(param_2->Source).Object + 0x20))();
  if ((cVar7 != '\0') ||
     ((*(char *)((longlong)param_1 + 8) != '\0' && (param_2->bIsVirtualSource != false)))) {
    pFVar2 = *(ForAnyElementType **)param_1;
    if (((FLiveLinkCollectionSourceItem *)pFVar2->Data <= param_2) &&
       (param_2 < (FLiveLinkCollectionSourceItem *)
                  (&((FLiveLinkCollectionSourceItem *)pFVar2->Data)->Guid +
                  *(int *)((longlong)&pFVar2[1].Data + 4)))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar8 + 1;
    uVar5 = *(undefined8 *)&(param_2->Guid).C;
    pFVar3 = pFVar2->Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x10) = *(undefined8 *)&param_2->Guid;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x10 + 8) = uVar5;
  }
  return;
}

// Call @ 14d029010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::GetSources'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&>
::Call(void *param_1,FLiveLinkCollectionSourceItem *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  
  if (((param_2->bPendingKill == false) || (*(char *)((longlong)param_1 + 8) != '\0')) &&
     (param_2->bIsVirtualSource == false)) {
    pFVar2 = *(ForAnyElementType **)param_1;
    if (((FLiveLinkCollectionSourceItem *)pFVar2->Data <= param_2) &&
       (param_2 < (FLiveLinkCollectionSourceItem *)
                  (&((FLiveLinkCollectionSourceItem *)pFVar2->Data)->Guid +
                  *(int *)((longlong)&pFVar2[1].Data + 4)))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    uVar5 = *(undefined8 *)&(param_2->Guid).C;
    pFVar3 = pFVar2->Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10) = *(undefined8 *)&param_2->Guid;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uVar5;
  }
  return;
}

// Call @ 14d029020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::GetSubjects'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
::Call(void *param_1,FLiveLinkCollectionSourceItem *param_2,FLiveLinkCollectionSubjectItem *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  
  if (((param_3->bEnabled != false) || (*(char *)((longlong)param_1 + 8) != '\0')) &&
     ((*(char *)((longlong)param_1 + 9) != '\0' ||
      ((param_3->VirtualSubject).Object == (UObject *)0x0)))) {
    pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
    if (((FLiveLinkCollectionSubjectItem *)pFVar3->Data <= param_3) &&
       (param_3 < (FLiveLinkCollectionSubjectItem *)
                  (&((FLiveLinkCollectionSubjectItem *)pFVar3->Data)->Key +
                  *(int *)((longlong)&pFVar3[1].Data + 4)))) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar8 + 1;
    uVar6 = *(undefined8 *)&(param_3->Key).Source.C;
    pFVar4 = pFVar3->Data;
    pFVar2 = pFVar4 + (longlong)iVar8 * 0x18;
    *(undefined8 *)pFVar2 = *(undefined8 *)&(param_3->Key).Source;
    *(undefined8 *)(pFVar2 + 8) = uVar6;
    *(FName *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = (param_3->Key).SubjectName.Name;
  }
  return;
}

// Call @ 14d029030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::GetSubjectsSupportingRole'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
::Call(void *param_1,FLiveLinkCollectionSourceItem *param_2,FLiveLinkCollectionSubjectItem *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  FLiveLinkSubject *pFVar11;
  UObject *pUStackX_8;
  
  pUVar3 = (param_3->VirtualSubject).Object;
  if (pUVar3 == (UObject *)0x0) {
    pFVar11 = (param_3->LiveSubject).Ptr;
  }
  else {
    pFVar11 = (FLiveLinkSubject *)(pUVar3 + 1);
  }
  pUStackX_8 = *(UObject **)((longlong)param_1 + 0x10);
  pcVar4 = *(code **)(pFVar11->_padding_ + 0x38);
  if ((GC::GIsIncrementalReachabilityPending) && (pUStackX_8 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUStackX_8);
  }
  cVar8 = (*pcVar4)(pFVar11,&pUStackX_8);
  if (((cVar8 != '\0') &&
      ((param_3->bEnabled != false || (*(char *)((longlong)param_1 + 0x18) != '\0')))) &&
     ((*(char *)((longlong)param_1 + 0x19) != '\0' ||
      ((param_3->VirtualSubject).Object == (UObject *)0x0)))) {
    pFVar5 = *(ForAnyElementType **)((longlong)param_1 + 8);
    if (((FLiveLinkCollectionSubjectItem *)pFVar5->Data <= param_3) &&
       (param_3 < (FLiveLinkCollectionSubjectItem *)
                  (&((FLiveLinkCollectionSubjectItem *)pFVar5->Data)->Key +
                  *(int *)((longlong)&pFVar5[1].Data + 4)))) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar10 = *(int *)&pFVar5[1].Data;
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    if (iVar10 == *piVar1) {
      iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,pFVar5,piVar1);
    }
    *(int *)&pFVar5[1].Data = iVar10 + 1;
    uVar7 = *(undefined8 *)&(param_3->Key).Source.C;
    pFVar6 = pFVar5->Data;
    pFVar2 = pFVar6 + (longlong)iVar10 * 0x18;
    *(undefined8 *)pFVar2 = *(undefined8 *)&(param_3->Key).Source;
    *(undefined8 *)(pFVar2 + 8) = uVar7;
    *(FName *)(pFVar6 + (longlong)iVar10 * 0x18 + 0x10) = (param_3->Key).SubjectName.Name;
  }
  return;
}

// Call @ 14d029040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::GetVirtualSources'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&>
::Call(void *param_1,FLiveLinkCollectionSourceItem *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  
  if (((param_2->bPendingKill == false) || (*(char *)((longlong)param_1 + 8) != '\0')) &&
     (param_2->bIsVirtualSource != false)) {
    pFVar2 = *(ForAnyElementType **)param_1;
    if (((FLiveLinkCollectionSourceItem *)pFVar2->Data <= param_2) &&
       (param_2 < (FLiveLinkCollectionSourceItem *)
                  (&((FLiveLinkCollectionSourceItem *)pFVar2->Data)->Guid +
                  *(int *)((longlong)&pFVar2[1].Data + 4)))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    uVar5 = *(undefined8 *)&(param_2->Guid).C;
    pFVar3 = pFVar2->Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10) = *(undefined8 *)&param_2->Guid;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uVar5;
  }
  return;
}

// Call @ 14d029050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::RebroadcastSubjects'::__l2::<lambda_1>,void,FLiveLinkSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
::Call(void *param_1,FLiveLinkSubject **param_2,FLiveLinkCollectionSourceItem *param_3,
      FLiveLinkCollectionSubjectItem *param_4)

{
  FLiveLinkSubject *pFVar1;
  FLiveLinkClient *this;
  char cVar2;
  longlong lVar3;
  
  if (param_4->bEnabled != false) {
    pFVar1 = *param_2;
    cVar2 = (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1);
    if (cVar2 != '\0') {
      this = *(FLiveLinkClient **)param_1;
      lVar3 = (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1);
      FLiveLinkClient::HandleSubjectRebroadcast
                (this,(ILiveLinkSubject *)pFVar1,
                 (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)(lVar3 + 0x28));
    }
  }
  return;
}

// Call @ 14d0290b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::RemoveAllSources'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&>
::Call(void *param_1,FLiveLinkCollectionSourceItem *param_2)

{
  if (param_2->bIsVirtualSource == false) {
    param_2->bPendingKill = true;
  }
  return;
}

// Call @ 14d0290d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::UpdateSources'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&>
::Call(void *param_1,FLiveLinkCollectionSourceItem *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2->Source).Object == (ILiveLinkSource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d029112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(param_2->Source).Object + 0x18))();
  return;
}

// Call @ 14d029120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::ClearAllSubjectsFrames_AnyThread'::__l5::<lambda_1>,void,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
::Call(void *param_1,FLiveLinkCollectionSourceItem *param_2,FLiveLinkCollectionSubjectItem *param_3)

{
  UObject *pUVar1;
  
  pUVar1 = (param_3->VirtualSubject).Object;
  if (pUVar1 != (UObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d029131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(pUVar1 + 1) + 0x20))(pUVar1 + 1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d02913c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((param_3->LiveSubject).Ptr)->_padding_ + 0x20))();
  return;
}

// Call @ 14d029150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::ClearSubjectsFrames_AnyThread'::__l5::<lambda_1>,void,FLiveLinkCollectionSubjectItem_&>
::Call(void *param_1,FLiveLinkCollectionSubjectItem *param_2)

{
  UObject *pUVar1;
  
  pUVar1 = (param_2->VirtualSubject).Object;
  if (pUVar1 != (UObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d029161. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(pUVar1 + 1) + 0x20))(pUVar1 + 1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d02916c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((param_2->LiveSubject).Ptr)->_padding_ + 0x20))();
  return;
}

// Call @ 14d029180

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>,FGuid_&>'::__l7::<lambda_1>,void>
::Call(void *param_1)

{
  FGuid local_18;
  
  local_18._0_8_ = *(undefined8 *)((longlong)param_1 + 8);
  local_18._8_8_ = *(undefined8 *)((longlong)param_1 + 0x10);
  TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>::Broadcast
            (*(TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy> **)param_1,
             &local_18);
  return;
}

// Call @ 14d0291b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&>'::__l7::<lambda_1>,void>
::Call(void *param_1)

{
  FLiveLinkSubjectKey local_28;
  
  local_28.Source._0_8_ = *(undefined8 *)((longlong)param_1 + 8);
  local_28.Source._8_8_ = *(undefined8 *)((longlong)param_1 + 0x10);
  local_28.SubjectName.Name = *(FName *)((longlong)param_1 + 0x18);
  TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>::Broadcast
            (*(TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy> **
              )param_1,&local_28);
  return;
}

// Call @ 14d0291e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,enum_ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,enum_ELiveLinkSubjectState_&>'::__l7::<lambda_1>,void>
::Call(void *param_1)

{
  FLiveLinkSubjectKey local_28;
  
  local_28.Source._0_8_ = *(undefined8 *)((longlong)param_1 + 8);
  local_28.Source._8_8_ = *(undefined8 *)((longlong)param_1 + 0x10);
  local_28.SubjectName.Name = *(FName *)((longlong)param_1 + 0x18);
  TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,enum_ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>
  ::Broadcast(*(void **)param_1,&local_28,*(ELiveLinkSubjectState *)((longlong)param_1 + 0x20));
  return;
}

// Call @ 14d029220

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>,FLiveLinkSubjectKey_&,bool_&>'::__l7::<lambda_1>,void>
::Call(void *param_1)

{
  FLiveLinkSubjectKey local_28;
  
  local_28.Source._0_8_ = *(undefined8 *)((longlong)param_1 + 8);
  local_28.Source._8_8_ = *(undefined8 *)((longlong)param_1 + 0x10);
  local_28.SubjectName.Name = *(FName *)((longlong)param_1 + 0x18);
  TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>::Broadcast
            (*(TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>
               **)param_1,&local_28,*(bool *)((longlong)param_1 + 0x20));
  return;
}

// Call @ 14d029260

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkSourceCollection::BroadcastOnGameThread<TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>'::__l7::<lambda_1>,void>
::Call(void *param_1)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (*(TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **)param_1);
  return;
}

// Call @ 14d029270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::PushSubjectFrameData_Internal'::__l70::<lambda_1>,void,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
::Call(void *param_1,FLiveLinkCollectionSourceItem *param_2,FLiveLinkCollectionSubjectItem *param_3)

{
  undefined8 *puVar1;
  UObject *pUVar2;
  FName FVar3;
  FLiveLinkSubject *pFVar4;
  FLiveLinkSubject *this;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  double *pdVar9;
  longlong lVar10;
  longlong lVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  longlong *plVar14;
  FFrameNumber aFStackX_8 [2];
  undefined8 uStackX_10;
  UObject *pUStackX_20;
  FLiveLinkSubjectKey FStack_158;
  FString FStack_140;
  FString FStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  FName FStack_110;
  FString FStack_108;
  FString FStack_f8;
  FLiveLinkSubjectFrameData FStack_e8;
  FTimecode aFStack_98 [4];
  
  pwVar13 = L"";
  puVar1 = *(undefined8 **)((longlong)param_1 + 8);
  uStack_120 = *puVar1;
  uStack_118 = puVar1[1];
  FStack_110 = *(FName *)(puVar1 + 2);
  if (((param_2->Setting).Object == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar2 = (param_2->Setting).Object;
  FVar3.ComparisonIndex.Value = *(uint *)&pUVar2[4].field_0x10;
  FVar3.Number = *(uint *)&pUVar2[4].field_0x14;
  if (FStack_110 == FVar3) {
    plVar14 = (longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x18);
    pFVar4 = (param_3->LiveSubject).Ptr;
    if (pFVar4 != (FLiveLinkSubject *)0x0) {
      FStructOnScope::FStructOnScope((FStructOnScope *)&FStack_e8);
      FStructOnScope::FStructOnScope(&FStack_e8.FrameData.WrappedStruct);
      this = (param_3->LiveSubject).Ptr;
      pUStackX_20 = *(UObject **)&(param_3->Setting).Object[2].field_0x8;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUStackX_20 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUStackX_20);
      }
      pdVar9 = (double *)
               (**(code **)(*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x18) + 0x18))();
      bVar8 = FLiveLinkSubject::EvaluateFrameAtWorldTime
                        (this,*pdVar9,(TSubclassOf<ULiveLinkRole>)&pUStackX_20,&FStack_e8);
      if (bVar8) {
        lVar10 = (**(code **)(*plVar14 + 0x10))(plVar14);
        lVar11 = (**(code **)(*plVar14 + 0x10))(plVar14);
        aFStackX_8[0].Value = *(int *)(lVar11 + 0x60);
        FTimecode::FromFrameNumber(aFStack_98,aFStackX_8,(FFrameRate *)(lVar10 + 0x68));
        if (5 < (byte)LogLiveLink._0_1_) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          (**(code **)(*plVar14 + 0x10))(plVar14);
          (**(code **)(*plVar14 + 0x10))(plVar14);
          (**(code **)(*plVar14 + 0x10))(plVar14);
          FTimecode::ToString(aFStack_98,&FStack_108,false,false);
          ::FName::ToString(&(param_3->Key).SubjectName.Name,&FStack_130);
          ::FName::ToString(&FStack_110,&FStack_140);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
          if (FStack_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_140.Data.AllocatorInstance.Data);
          }
          if (FStack_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_130.Data.AllocatorInstance.Data);
          }
          if (FStack_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_108.Data.AllocatorInstance.Data);
          }
        }
        lVar10 = (**(code **)(*plVar14 + 0x10))(plVar14);
        uVar5 = *(undefined8 *)(lVar10 + 0x60);
        uVar7 = *(undefined8 *)(lVar10 + 0x68);
        lVar10 = (**(code **)(FStack_e8.FrameData.WrappedStruct._padding_ + 0x18))
                           (&FStack_e8.FrameData);
        *(undefined8 *)(lVar10 + 0x60) = uVar5;
        *(undefined8 *)(lVar10 + 0x68) = uVar7;
        lVar10 = (**(code **)(*plVar14 + 0x10))(plVar14);
        uVar5 = *(undefined8 *)(lVar10 + 0x68);
        lVar10 = (**(code **)(FStack_e8.FrameData.WrappedStruct._padding_ + 0x18))
                           (&FStack_e8.FrameData);
        *(undefined8 *)(lVar10 + 0x68) = uVar5;
        FLiveLinkClient::HandleSubjectRebroadcast
                  (*(FLiveLinkClient **)param_1,(ILiveLinkSubject *)pFVar4,&FStack_e8.FrameData);
      }
      else {
        pFVar12 = ::FName::ToString(&FStack_110,&FStack_f8);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        FStack_158.Source.A = 0;
        FStack_158.Source.B = 0;
        FStack_158.Source.C = 0;
        FStack_158.Source.D = 0;
        FStack_158.SubjectName.Name.ComparisonIndex.Value = 0;
        FStack_158.SubjectName.Name.Number = 0;
        uStackX_10 = 0;
        FLiveLinkLog::Log_Internal<wchar_t_const_*>
                  (Warning,(FName)0x0,&FStack_158,
                   (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152a9bd20,pwVar13);
        if (FStack_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_f8.Data.AllocatorInstance.Data);
        }
      }
      FStructOnScope::~FStructOnScope(&FStack_e8.FrameData.WrappedStruct);
      FStructOnScope::~FStructOnScope((FStructOnScope *)&FStack_e8);
    }
  }
  return;
}

// Call @ 14d029280

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::BuildThisTicksSubjectSnapshot'::__l2::<lambda_2>,void,ULiveLinkVirtualSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
::Call(void *param_1,ULiveLinkVirtualSubject **param_2,FLiveLinkCollectionSourceItem *param_3,
      FLiveLinkCollectionSubjectItem *param_4)

{
  `FLiveLinkClient::BuildThisTicksSubjectSnapshot'::__l2::<lambda_2>::operator()
            (param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 14d029290

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::RebroadcastSubjects'::__l2::<lambda_2>,void,FLiveLinkSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
::Call(void *param_1,FLiveLinkSubject **param_2,FLiveLinkCollectionSourceItem *param_3,
      FLiveLinkCollectionSubjectItem *param_4)

{
  `FLiveLinkClient::RebroadcastSubjects'::__l2::<lambda_2>::operator()
            (param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 14d0292a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLiveLinkClient::RebroadcastSubjects'::__l2::<lambda_3>,void,ULiveLinkVirtualSubject_*,FLiveLinkCollectionSourceItem_&,FLiveLinkCollectionSubjectItem_&>
::Call(void *param_1,ULiveLinkVirtualSubject **param_2,FLiveLinkCollectionSourceItem *param_3,
      FLiveLinkCollectionSubjectItem *param_4)

{
  ULiveLinkVirtualSubject *pUVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  ulong64 uVar5;
  ILiveLinkSubject *pIVar6;
  
  pUVar1 = *param_2;
  uVar5 = CityHash64((char *)param_4,0x10);
  FVar2 = (param_4->Key).SubjectName.Name;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  iVar4 = TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>::
          FindIndexByHash<FLiveLinkSubjectKey>
                    ((TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
                      *)((longlong)param_1 + 8),(uVar3 + FVar2.Number) * 0xd + (int)uVar5,
                     &param_4->Key);
  if (iVar4 != -1) {
    pIVar6 = (ILiveLinkSubject *)&pUVar1->_padding_;
    if (pUVar1 == (ULiveLinkVirtualSubject *)0x0) {
      pIVar6 = (ILiveLinkSubject *)0x0;
    }
    FLiveLinkClient::HandleSubjectRebroadcast
              (*(FLiveLinkClient **)param_1,pIVar6,&(pUVar1->CurrentFrameSnapshot).FrameData);
  }
  return;
}

