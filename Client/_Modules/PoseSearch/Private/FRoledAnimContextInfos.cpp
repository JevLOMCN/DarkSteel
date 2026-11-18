// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// AddRoledAnimContextInfos @ 14a921980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfos::
AddRoledAnimContextInfos
          (void *this,FPoseSearchInteractionAvailabilityEx *param_1,FAnimContextInfo *param_2,
          IPoseHistory *param_3,UPoseSearchDatabase *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UPoseSearchSchema *pUVar4;
  code *pcVar5;
  UPoseSearchDatabase *pUVar6;
  UPoseSearchDatabase *pUVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  UPoseSearchDatabase *this_00;
  undefined1 local_res10 [8];
  FAnimContextInfo *local_res18;
  IPoseHistory *local_res20;
  undefined1 local_c8 [4];
  FName local_c4;
  FString local_b8;
  FRoledAnimContextInfo local_a8;
  FRoledAnimContextInfo local_80;
  FString local_58;
  
  pUVar6 = param_4;
  pUVar4 = (param_4->Schema).field0_0x0.DebugPtr;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((pUVar4 == (UPoseSearchSchema *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Schema",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionSubsystem.cpp"
                         ,0x280,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar2 = (int)param_1->_padding_;
  if (iVar2 == 0) {
    iVar2 = (pUVar4->Skeletons).ArrayNum;
    pFVar9 = (pUVar4->Skeletons).AllocatorInstance.Data;
    pFVar1 = pFVar9 + (longlong)iVar2 * 0x48;
    while( true ) {
      if ((pUVar4->Skeletons).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FPoseSearchRoledSkeleton_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&param_4);
      }
      if (pFVar9 == pFVar1) break;
      local_a8.AnimContextInfo = local_res18;
      local_a8.Role = *(FName *)(pFVar9 + 0x10);
      local_a8.Database = pUVar6;
      local_a8.Availability = param_1;
      local_a8.PoseHistory = param_3;
      TArray<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
      ::
      AddUniqueImpl<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo>
                (this,&local_a8);
      pFVar9 = pFVar9 + 0x48;
    }
  }
  else {
    this_00 = (UPoseSearchDatabase *)param_1->_padding_;
    param_4 = (UPoseSearchDatabase *)((FNameEntryId *)&this_00->_padding_ + (longlong)iVar2 * 2);
    while( true ) {
      pUVar7 = param_4;
      if ((int)param_1->_padding_ != iVar2) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (this_00 == pUVar7) break;
      iVar3 = (pUVar4->Skeletons).ArrayNum;
      pFVar9 = (pUVar4->Skeletons).AllocatorInstance.Data;
      pFVar1 = pFVar9 + (longlong)iVar3 * 0x48;
      while( true ) {
        if ((pUVar4->Skeletons).ArrayNum != iVar3) {
          `TCheckedPointerIterator<FPoseSearchRoledSkeleton_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_c8);
        }
        if (pFVar9 == pFVar1) goto LAB_14a921b1e;
        if (*(FName *)(pFVar9 + 0x10) == *(FName *)&this_00->_padding_) break;
        pFVar9 = pFVar9 + 0x48;
      }
      if (pFVar9 == (FScriptContainerElement *)0x0) {
LAB_14a921b1e:
        if (2 < (byte)LogPoseSearch._0_1_) {
          local_c4 = (FName)pUVar6->_padding_;
          ::FName::ToString(&local_c4,&local_b8);
          ::FName::ToString((FName *)this_00,&local_58);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
        this_00 = (UPoseSearchDatabase *)&this_00->_padding_;
      }
      else {
        local_80.AnimContextInfo = local_res18;
        local_80.PoseHistory = local_res20;
        local_80.Database = pUVar6;
        local_80.Availability = param_1;
        local_80.Role = *(FName *)&this_00->_padding_;
        TArray<`UPoseSearchInteractionSubsystem::GenerateSearchContexts'::__l2::FRoledAnimContextInfo,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>_>
        ::
        AddUniqueImpl<_UPoseSearchInteractionSubsystem::GenerateSearchContexts_::__l2::FRoledAnimContextInfo>
                  (this,&local_80);
        this_00 = (UPoseSearchDatabase *)&this_00->_padding_;
      }
    }
  }
  return;
}

