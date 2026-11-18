// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 7

// GetChangeSerial @ 14d39c7a0

uint __thiscall UE::Trace::FStoreClient::FStatus::GetChangeSerial(FStatus *this)

{
  uint uVar1;
  <lambda_1> local_res8 [32];
  
  uVar1 = FResponse::
          GetValue<unsigned_int,_UE::Trace::FResponse::GetUint32Checked_::__l2::<lambda_1>_>
                    ((FResponse *)this,"change_serial",0,local_res8);
  return uVar1;
}

// GetRecorderPort @ 14d39d170

uint __thiscall UE::Trace::FStoreClient::FStatus::GetRecorderPort(FStatus *this)

{
  uint uVar1;
  <lambda_1> local_res8 [32];
  
  uVar1 = FResponse::
          GetValue<unsigned_int,_UE::Trace::FResponse::GetUint32Checked_::__l2::<lambda_1>_>
                    ((FResponse *)this,"recorder_port",0,local_res8);
  return uVar1;
}

// GetSettingsSerial @ 14d39e3b0

uint __thiscall UE::Trace::FStoreClient::FStatus::GetSettingsSerial(FStatus *this)

{
  uint uVar1;
  <lambda_1> local_res8 [32];
  
  uVar1 = FResponse::
          GetValue<unsigned_int,_UE::Trace::FResponse::GetUint32Checked_::__l2::<lambda_1>_>
                    ((FResponse *)this,"settings_serial",0,local_res8);
  return uVar1;
}

// GetSponsored @ 14d39e4b0

bool __thiscall UE::Trace::FStoreClient::FStatus::GetSponsored(FStatus *this)

{
  long64 lVar1;
  <lambda_1> local_res8 [32];
  
  lVar1 = FResponse::GetValue<__int64,_UE::Trace::FResponse::GetInt64Checked_::__l2::<lambda_1>_>
                    ((FResponse *)this,"sponsored",0,local_res8);
  return lVar1 != 0;
}

// GetStoreDir @ 14d39ea20

TStringView<char8_t> * __thiscall
UE::Trace::FStoreClient::FStatus::GetStoreDir
          (FStatus *this,TStringView<char8_t> *__return_storage_ptr__)

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
            ((FResponse *)this,__return_storage_ptr__,"store_dir",&local_38,&local_28);
  return __return_storage_ptr__;
}

// GetStorePort @ 14d39ed50

uint __thiscall UE::Trace::FStoreClient::FStatus::GetStorePort(FStatus *this)

{
  uint uVar1;
  <lambda_1> local_res8 [32];
  
  uVar1 = FResponse::
          GetValue<unsigned_int,_UE::Trace::FResponse::GetUint32Checked_::__l2::<lambda_1>_>
                    ((FResponse *)this,"store_port",0,local_res8);
  return uVar1;
}

// GetWatchDirectories @ 14d3a0460

void __thiscall
UE::Trace::FStoreClient::FStatus::GetWatchDirectories
          (FStatus *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FResponse::GetStringArray((FResponse *)this,"watch_dirs",param_1);
  return;
}

