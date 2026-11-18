// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 5

// GetId @ 14d39cac0

uint __thiscall UE::Trace::FStoreClient::FTraceInfo::GetId(FTraceInfo *this)

{
  uint uVar1;
  <lambda_1> local_res8 [32];
  
  uVar1 = FResponse::
          GetValue<unsigned_int,_UE::Trace::FResponse::GetUint32Checked_::__l2::<lambda_1>_>
                    ((FResponse *)this,"id",0,local_res8);
  return uVar1;
}

// GetName @ 14d39cec0

TStringView<char8_t> * __thiscall
UE::Trace::FStoreClient::FTraceInfo::GetName
          (FTraceInfo *this,TStringView<char8_t> *__return_storage_ptr__)

{
  TStringView<char8_t> local_38;
  <lambda_1> local_28;
  
  local_38.Size = 8;
  local_28.DefaultView.DataPtr = "nameless";
  local_28.DefaultView._12_4_ = local_38._12_4_;
  local_28.DefaultView.Size = 8;
  local_38.DataPtr = "nameless";
  local_28.__this = (FResponse *)this;
  FResponse::GetValue<TStringView<char8_t>,_UE::Trace::FResponse::GetString<9>_::__l2::<lambda_1>_>
            ((FResponse *)this,__return_storage_ptr__,"name",&local_38,&local_28);
  return __return_storage_ptr__;
}

// GetSize @ 14d39e480

ulong64 __thiscall UE::Trace::FStoreClient::FTraceInfo::GetSize(FTraceInfo *this)

{
  ulong64 uVar1;
  <lambda_1> local_res8 [32];
  
  uVar1 = FResponse::
          GetValue<unsigned___int64,_UE::Trace::FResponse::GetUint64Checked_::__l2::<lambda_1>_>
                    ((FResponse *)this,"size",0,local_res8);
  return uVar1;
}

// GetTimestamp @ 14d39f630

ulong64 __thiscall UE::Trace::FStoreClient::FTraceInfo::GetTimestamp(FTraceInfo *this)

{
  ulong64 uVar1;
  <lambda_1> local_res8 [32];
  
  uVar1 = FResponse::
          GetValue<unsigned___int64,_UE::Trace::FResponse::GetUint64Checked_::__l2::<lambda_1>_>
                    ((FResponse *)this,"timestamp",0,local_res8);
  return uVar1;
}

// GetUri @ 14d3a0060

TStringView<char8_t> * __thiscall
UE::Trace::FStoreClient::FTraceInfo::GetUri
          (FTraceInfo *this,TStringView<char8_t> *__return_storage_ptr__)

{
  TStringView<char8_t> local_38;
  <lambda_1> local_28;
  
  local_28.DefaultView._12_4_ = local_38._12_4_;
  local_38._8_8_ = local_38._8_8_ & 0xffffffff00000000;
  local_28.DefaultView.Size = 0;
  local_28.DefaultView.DataPtr = "";
  local_38.DataPtr = "";
  local_28.__this = (FResponse *)this;
  FResponse::GetValue<TStringView<char8_t>,_UE::Trace::FResponse::GetString<1>_::__l2::<lambda_1>_>
            ((FResponse *)this,__return_storage_ptr__,"uri",&local_38,&local_28);
  return __return_storage_ptr__;
}

