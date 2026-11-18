// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 5

// Cancelled @ 143579460

bool __thiscall FProgressCancel::Cancelled(FProgressCancel *this)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (this->WasCancelled != false) {
    return true;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
  pcVar1 = *(code **)&this->CancelF;
  plVar2 = *(longlong **)&(this->CancelF).field_0x28;
  plVar5 = (longlong *)&(this->CancelF).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  bVar3 = (bool)(*pcVar1)(uVar4);
  this->WasCancelled = bVar3;
  return bVar3;
}

// CreateScopeTo @ 1435f88a0

FProgressScope * __cdecl
FProgressCancel::CreateScopeTo
          (FProgressScope *__return_storage_ptr__,FProgressCancel *param_1,float param_2,
          FText *param_3)

{
  float fVar1;
  float fVar2;
  atomic<float> aVar3;
  float fVar4;
  
  if (param_1 != (FProgressCancel *)0x0) {
    fVar1 = (param_1->Progress).CurrentMin;
    fVar2 = 0.0;
    fVar4 = (param_1->Progress).CurrentMax - fVar1;
    if (0.0 < fVar4) {
      aVar3 = (atomic<float>)(fVar4 * param_2 + fVar1);
      if ((float)aVar3 <= (float)param_1->ProgressFraction) {
        aVar3 = param_1->ProgressFraction;
      }
      fVar2 = ((float)aVar3 - (float)param_1->ProgressFraction) / fVar4;
    }
    FProgressScope::FProgressScope(__return_storage_ptr__,param_1,fVar2,param_3);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->SavedProgressData).CurrentMax = 1.0;
  (__return_storage_ptr__->SavedProgressData).ScopeDepth = 0;
  __return_storage_ptr__->ProgressCancel = (FProgressCancel *)0x0;
  (__return_storage_ptr__->SavedProgressData).CurrentMin = 0.0;
  FText::FText(&(__return_storage_ptr__->SavedProgressData).Message);
  __return_storage_ptr__->bEnded = false;
  return __return_storage_ptr__;
}

// EndWorkScope @ 1435f9390

void __thiscall FProgressCancel::EndWorkScope(FProgressCancel *this,FProgressData *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  FProgressCancel *local_28;
  FProgressData *local_20;
  
  if ((((this->Progress).ScopeDepth == param_1->ScopeDepth + 1) ||
      (local_28 = this, local_20 = param_1,
      bVar3 = `FProgressCancel::EndWorkScope'::__l3::<lambda_1>::operator()(&local_28), bVar3)) ||
     ((param_1->ScopeDepth + 1 <= (this->Progress).ScopeDepth &&
      ((this->Progress).CurrentMax <= param_1->CurrentMax)))) {
    LOCK();
    this->ProgressFraction = (atomic<float>)(this->Progress).CurrentMax;
    UNLOCK();
    bVar3 = FText::IsEmpty(&(this->Progress).Message);
    FProgressData::operator=(&this->Progress,param_1);
    if ((!bVar3) || (bVar3 = FText::IsEmpty(&(this->Progress).Message), !bVar3)) {
      lpCriticalSection = &this->MessageCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pIVar1 = (this->Progress).Message.TextData.Reference;
      pIVar2 = (this->ProgressMessage).TextData.Reference;
      if (pIVar2 != pIVar1) {
        (this->ProgressMessage).TextData.Reference = pIVar1;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
        }
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
        }
      }
      (this->ProgressMessage).Flags = (this->Progress).Message.Flags;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// StartWorkScope @ 14361c510

void __thiscall
FProgressCancel::StartWorkScope
          (FProgressCancel *this,FProgressData *param_1,float param_2,FText *param_3)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<float> aVar2;
  float fVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  bool bVar6;
  atomic<float> aVar7;
  undefined1 local_res18 [8];
  
  FProgressData::operator=(param_1,&this->Progress);
  aVar2 = (atomic<float>)(this->Progress).CurrentMax;
  piVar1 = &(this->Progress).ScopeDepth;
  *piVar1 = *piVar1 + 1;
  fVar3 = (this->Progress).CurrentMin;
  aVar7 = aVar2;
  if ((float)this->ProgressFraction <= (float)aVar2) {
    aVar7 = this->ProgressFraction;
  }
  (this->Progress).CurrentMin = (float)aVar7;
  aVar7 = (atomic<float>)(((float)aVar2 - fVar3) * param_2 + (float)this->ProgressFraction);
  if ((float)aVar2 <= (float)aVar7) {
    aVar7 = aVar2;
  }
  (this->Progress).CurrentMax = (float)aVar7;
  bVar6 = FText::IsEmpty(param_3);
  if ((!bVar6) &&
     ((this->MaxMessageDepth == -1 || ((this->Progress).ScopeDepth < this->MaxMessageDepth)))) {
    pIVar4 = (param_3->TextData).Reference;
    pIVar5 = (this->Progress).Message.TextData.Reference;
    if (pIVar5 != pIVar4) {
      (this->Progress).Message.TextData.Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
      }
      if (pIVar5 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
      }
    }
    lpCriticalSection = &this->MessageCS;
    (this->Progress).Message.Flags = param_3->Flags;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar4 = (param_3->TextData).Reference;
    pIVar5 = (this->ProgressMessage).TextData.Reference;
    if (pIVar5 != pIVar4) {
      (this->ProgressMessage).TextData.Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res18);
      }
      if (pIVar5 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
      }
    }
    (this->ProgressMessage).Flags = param_3->Flags;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// operator() @ 15049fde0

bool __thiscall `FProgressCancel::EndWorkScope'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8174906950090227739>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8174906950090227739>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

