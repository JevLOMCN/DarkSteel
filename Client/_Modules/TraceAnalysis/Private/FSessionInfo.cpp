// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 4

// GetControlPort @ 14d39c830

uint __thiscall UE::Trace::FStoreClient::FSessionInfo::GetControlPort(FSessionInfo *this)

{
  uint uVar1;
  <lambda_1> local_res8 [32];
  
  uVar1 = FResponse::
          GetValue<unsigned_int,_UE::Trace::FResponse::GetUint32Checked_::__l2::<lambda_1>_>
                    ((FResponse *)this,"control_port",0,local_res8);
  return uVar1;
}

// GetId @ 14d39ca90

uint __thiscall UE::Trace::FStoreClient::FSessionInfo::GetId(FSessionInfo *this)

{
  uint uVar1;
  <lambda_1> local_res8 [32];
  
  uVar1 = FResponse::
          GetValue<unsigned_int,_UE::Trace::FResponse::GetUint32Checked_::__l2::<lambda_1>_>
                    ((FResponse *)this,"id",0,local_res8);
  return uVar1;
}

// GetIpAddress @ 14d39cd90

uint __thiscall UE::Trace::FStoreClient::FSessionInfo::GetIpAddress(FSessionInfo *this)

{
  uint uVar1;
  <lambda_1> local_res8 [32];
  
  uVar1 = FResponse::
          GetValue<unsigned_int,_UE::Trace::FResponse::GetUint32Checked_::__l2::<lambda_1>_>
                    ((FResponse *)this,"ip_address",0,local_res8);
  return uVar1;
}

// GetTraceId @ 14d39f920

uint __thiscall UE::Trace::FStoreClient::FSessionInfo::GetTraceId(FSessionInfo *this)

{
  uint uVar1;
  <lambda_1> local_res8 [32];
  
  uVar1 = FResponse::
          GetValue<unsigned_int,_UE::Trace::FResponse::GetUint32Checked_::__l2::<lambda_1>_>
                    ((FResponse *)this,"trace_id",0,local_res8);
  return uVar1;
}

