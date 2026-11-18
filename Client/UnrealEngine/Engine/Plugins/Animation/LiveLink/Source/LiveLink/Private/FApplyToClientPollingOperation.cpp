// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// Update @ 14d0861c0

EApplyToClientUpdateResult __thiscall
FApplyToClientPollingOperation::Update(FApplyToClientPollingOperation *this)

{
  byte bVar1;
  int iVar2;
  UObject *this_00;
  IModularFeatures *pIVar3;
  longlong lVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  Type TVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  byte bVar10;
  FLiveLinkClient *this_01;
  EApplyToClientUpdateResult EVar11;
  double dVar12;
  undefined8 local_res8;
  FString local_68;
  FLiveLinkSubjectKey local_58 [2];
  
  bVar10 = 1;
  this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 != (UObject *)0x0) {
    pIVar3 = IModularFeatures::Get();
    iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
    if (0 < iVar2) {
      pIVar3 = IModularFeatures::Get();
      lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,ILiveLinkClient::ModularFeatureName,0);
      this_01 = (FLiveLinkClient *)(lVar4 + -8);
      if (lVar4 == 0) {
        this_01 = (FLiveLinkClient *)0x0;
      }
      if (this->LastTimeSinceUpdate == 0.0) {
        FLiveLinkClient::RemoveAllSources(this_01);
        this->LastTimeSinceUpdate = (double)FApp::CurrentTime;
      }
      FLiveLinkClient::Tick(this_01,Default);
      lVar4 = (**(code **)(this_01->_padding_ + 0x38))(this_01,&local_68);
      iVar2 = *(int *)(lVar4 + 8);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (iVar2 == 0) {
        iVar2 = *(int *)&this_00[1].field_0x8;
        lVar8 = *(longlong *)(this_00 + 1);
        lVar4 = lVar8 + (longlong)iVar2 * 0x28;
        while( true ) {
          if (*(int *)&this_00[1].field_0x8 != iVar2) {
            `TCheckedPointerIterator<FLiveLinkSourcePreset_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_res8);
          }
          if (lVar8 == lVar4) break;
          bVar1 = (**(code **)(this_01->_padding_ + 0x18))(this_01,lVar8);
          bVar10 = bVar10 & bVar1;
          lVar8 = lVar8 + 0x28;
        }
        iVar2 = *(int *)&this_00[1].field_0x18;
        lVar4 = *(longlong *)&this_00[1].field_0x10;
        lVar8 = (longlong)iVar2 * 0x38 + lVar4;
        while( true ) {
          if (*(int *)&this_00[1].field_0x18 != iVar2) {
            `TCheckedPointerIterator<FLiveLinkSubjectPreset_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_res8);
          }
          if (lVar4 == lVar8) break;
          bVar1 = (**(code **)(this_01->_padding_ + 0x88))(this_01,lVar4);
          bVar10 = bVar10 & bVar1;
          lVar4 = lVar4 + 0x38;
        }
        pFVar5 = UObjectBaseUtility::GetFullName
                           ((UObjectBaseUtility *)this_00,&local_68,(UObject *)0x0,None);
        if (bVar10 == 0) {
          if ((pFVar5->Data).ArrayNum == 0) {
            pwVar6 = L"";
          }
          else {
            pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
          }
          pwVar9 = L"Could not apply \'%s\'";
          TVar7 = Error;
        }
        else if ((pFVar5->Data).ArrayNum == 0) {
          pwVar6 = L"";
          TVar7 = Info;
          pwVar9 = L"Applied \'%s\'";
        }
        else {
          pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
          pwVar9 = L"Applied \'%s\'";
          TVar7 = Info;
        }
        local_res8 = 0;
        local_58[0].Source.A = 0;
        local_58[0].Source.B = 0;
        local_58[0].Source.C = 0;
        local_58[0].Source.D = 0;
        local_58[0].SubjectName.Name.ComparisonIndex.Value = 0;
        local_58[0].SubjectName.Name.Number = 0;
        FLiveLinkLog::Log_Internal<wchar_t_const_*>
                  (TVar7,(FName)0x0,local_58,
                   (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)pwVar9,pwVar6);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        EVar11 = bVar10 == 0;
      }
      else {
        dVar12 = this->RemainingTime - ((double)FApp::CurrentTime - this->LastTimeSinceUpdate);
        this->RemainingTime = dVar12;
        if (0.0 < dVar12) {
          this->LastTimeSinceUpdate = (double)FApp::CurrentTime;
          EVar11 = Pending;
        }
        else {
          EVar11 = Failure;
        }
      }
      return EVar11;
    }
  }
  local_58[0].Source.A = 0;
  local_58[0].Source.B = 0;
  local_58[0].Source.C = 0;
  local_58[0].Source.D = 0;
  local_58[0].SubjectName.Name.ComparisonIndex.Value = 0;
  local_58[0].SubjectName.Name.Number = 0;
  local_res8 = 0;
  FLiveLinkLog::Log_Internal<>
            (Error,(FName)0x0,local_58,(TCheckedFormatStringPrivate<wchar_t>)0x152a9fff0);
  return Failure;
}

