// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// FProgressScope @ 1435e4000

FProgressScope * __thiscall
FProgressCancel::FProgressScope::FProgressScope
          (FProgressScope *this,FProgressCancel *param_1,float param_2,FText *param_3)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<float> aVar2;
  float fVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  bool bVar6;
  atomic<float> aVar7;
  undefined1 local_res8 [8];
  
  this->ProgressCancel = param_1;
  (this->SavedProgressData).CurrentMin = 0.0;
  (this->SavedProgressData).CurrentMax = 1.0;
  (this->SavedProgressData).ScopeDepth = 0;
  FText::FText(&(this->SavedProgressData).Message);
  this->bEnded = false;
  if (param_1 != (FProgressCancel *)0x0) {
    FProgressData::operator=(&this->SavedProgressData,&param_1->Progress);
    aVar2 = (atomic<float>)(param_1->Progress).CurrentMax;
    piVar1 = &(param_1->Progress).ScopeDepth;
    *piVar1 = *piVar1 + 1;
    fVar3 = (param_1->Progress).CurrentMin;
    aVar7 = aVar2;
    if ((float)param_1->ProgressFraction <= (float)aVar2) {
      aVar7 = param_1->ProgressFraction;
    }
    (param_1->Progress).CurrentMin = (float)aVar7;
    aVar7 = (atomic<float>)(((float)aVar2 - fVar3) * param_2 + (float)param_1->ProgressFraction);
    if ((float)aVar2 <= (float)aVar7) {
      aVar7 = aVar2;
    }
    (param_1->Progress).CurrentMax = (float)aVar7;
    bVar6 = FText::IsEmpty(param_3);
    if ((!bVar6) &&
       ((param_1->MaxMessageDepth == -1 ||
        ((param_1->Progress).ScopeDepth < param_1->MaxMessageDepth)))) {
      pIVar4 = (param_3->TextData).Reference;
      pIVar5 = (param_1->Progress).Message.TextData.Reference;
      if (pIVar5 != pIVar4) {
        (param_1->Progress).Message.TextData.Reference = pIVar4;
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
        }
        if (pIVar5 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
        }
      }
      lpCriticalSection = &param_1->MessageCS;
      (param_1->Progress).Message.Flags = param_3->Flags;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pIVar4 = (param_3->TextData).Reference;
      pIVar5 = (param_1->ProgressMessage).TextData.Reference;
      if (pIVar5 != pIVar4) {
        (param_1->ProgressMessage).TextData.Reference = pIVar4;
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
        }
        if (pIVar5 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
        }
      }
      (param_1->ProgressMessage).Flags = param_3->Flags;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return this;
}

// Done @ 1435f9240

void __thiscall FProgressCancel::FProgressScope::Done(FProgressScope *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FProgressCancel *pFVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FProgressCancel *local_28;
  FProgressData *local_20;
  
  if (this->bEnded == false) {
    pFVar1 = this->ProgressCancel;
    if (pFVar1 != (FProgressCancel *)0x0) {
      if ((pFVar1->Progress).ScopeDepth != (this->SavedProgressData).ScopeDepth + 1) {
        local_28 = pFVar1;
        local_20 = &this->SavedProgressData;
        bVar5 = `FProgressCancel::EndWorkScope'::__l3::<lambda_1>::operator()(&local_28);
        if ((!bVar5) &&
           (((pFVar1->Progress).ScopeDepth < (this->SavedProgressData).ScopeDepth + 1 ||
            ((this->SavedProgressData).CurrentMax < (pFVar1->Progress).CurrentMax))))
        goto LAB_1435f9361;
      }
      LOCK();
      pFVar1->ProgressFraction = (atomic<float>)(pFVar1->Progress).CurrentMax;
      UNLOCK();
      bVar5 = FText::IsEmpty(&(pFVar1->Progress).Message);
      FProgressData::operator=(&pFVar1->Progress,&this->SavedProgressData);
      if (bVar5) {
        bVar5 = FText::IsEmpty(&(pFVar1->Progress).Message);
        if (bVar5) goto LAB_1435f9361;
      }
      lpCriticalSection = &pFVar1->MessageCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pIVar2 = (pFVar1->Progress).Message.TextData.Reference;
      pIVar3 = (pFVar1->ProgressMessage).TextData.Reference;
      if (pIVar3 != pIVar2) {
        (pFVar1->ProgressMessage).TextData.Reference = pIVar2;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
        }
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
        }
      }
      (pFVar1->ProgressMessage).Flags = (pFVar1->Progress).Message.Flags;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8174906950090227787>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Util\\ProgressCancel.cpp"
                       ,0x4b,"!bEnded");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
LAB_1435f9361:
  this->bEnded = true;
  return;
}

