// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 3

// GetConfiguration @ 14d39c7c0

TStringView<char8_t> * __thiscall
UE::Trace::FStoreClient::FVersion::GetConfiguration
          (FVersion *this,TStringView<char8_t> *__return_storage_ptr__)

{
  TStringView<char8_t> local_38;
  <lambda_1> local_28;
  
  local_38.Size = 7;
  local_28.DefaultView.DataPtr = "unknown";
  local_28.DefaultView._12_4_ = local_38._12_4_;
  local_28.DefaultView.Size = 7;
  local_38.DataPtr = "unknown";
  local_28.__this = (FResponse *)this;
  FResponse::GetValue<TStringView<char8_t>,_UE::Trace::FResponse::GetString<8>_::__l2::<lambda_1>_>
            ((FResponse *)this,__return_storage_ptr__,"configuration",&local_38,&local_28);
  return __return_storage_ptr__;
}

// GetMajorVersion @ 14d39cdc0

uint __thiscall UE::Trace::FStoreClient::FVersion::GetMajorVersion(FVersion *this)

{
  uint uVar1;
  <lambda_1> local_res8 [32];
  
  uVar1 = FResponse::
          GetValue<unsigned_int,_UE::Trace::FResponse::GetUint32Checked_::__l2::<lambda_1>_>
                    ((FResponse *)this,"major",0,local_res8);
  return uVar1;
}

// GetMinorVersion @ 14d39ce60

uint __thiscall UE::Trace::FStoreClient::FVersion::GetMinorVersion(FVersion *this)

{
  uint uVar1;
  <lambda_1> local_res8 [32];
  
  uVar1 = FResponse::
          GetValue<unsigned_int,_UE::Trace::FResponse::GetUint32Checked_::__l2::<lambda_1>_>
                    ((FResponse *)this,"minor",0,local_res8);
  return uVar1;
}

