// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 2

// TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> @ 14ec22280

TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> * __thiscall
UE::Online::TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>::
TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>
          (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> *this,
          FOnlineError *param_1)

{
  FOnlineError *pFVar1;
  
  *(undefined ***)this =
       &
       ___7__TResult_UResult_FSchemaCategoryInstancePrepareClientChanges_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  *(IOnlineErrorDetails **)&this->field_0x8 = (param_1->Details).Object;
  *(TReferenceControllerBase<1> **)&this->field_0x10 =
       (param_1->Details).SharedReferenceCount.ReferenceController;
  pFVar1 = (param_1->Inner).Object;
  (param_1->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&this->field_0x18 = pFVar1;
  *(TReferenceControllerBase<1> **)&this->field_0x20 =
       (param_1->Inner).SharedReferenceCount.ReferenceController;
  (param_1->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&this->field_0x28 = param_1->ErrorCode;
  *(undefined ***)this =
       &___7__TOnlineResult_UFSchemaCategoryInstancePrepareClientChanges_Online_UE___Online_UE__6B_;
  this->field_0xa8 = 1;
  return this;
}

// TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> @ 14ec222e0

TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> * __thiscall
UE::Online::TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot>::
TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot>
          (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *this,
          FOnlineError *param_1)

{
  FOnlineError *pFVar1;
  
  *(undefined ***)this =
       &
       ___7__TResult_UResult_FSchemaCategoryInstancePrepareServiceSnapshot_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  *(IOnlineErrorDetails **)&this->field_0x8 = (param_1->Details).Object;
  *(TReferenceControllerBase<1> **)&this->field_0x10 =
       (param_1->Details).SharedReferenceCount.ReferenceController;
  pFVar1 = (param_1->Inner).Object;
  (param_1->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&this->field_0x18 = pFVar1;
  *(TReferenceControllerBase<1> **)&this->field_0x20 =
       (param_1->Inner).SharedReferenceCount.ReferenceController;
  (param_1->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&this->field_0x28 = param_1->ErrorCode;
  *(undefined ***)this =
       &
       ___7__TOnlineResult_UFSchemaCategoryInstancePrepareServiceSnapshot_Online_UE___Online_UE__6B_
  ;
  this->field_0x30 = 1;
  return this;
}

