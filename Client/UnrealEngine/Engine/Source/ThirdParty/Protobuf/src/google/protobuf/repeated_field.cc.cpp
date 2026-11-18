// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 4

// LogIndexOutOfBounds @ 14fb7a5f0

/* void __cdecl google::protobuf::internal::LogIndexOutOfBounds(int,int) */

void __cdecl google::protobuf::internal::LogIndexOutOfBounds(int param_1,int param_2)

{
  return;
}

// LogIndexOutOfBoundsAndAbort @ 14fb7a600

/* void __cdecl google::protobuf::internal::LogIndexOutOfBoundsAndAbort(int,int) */

void __cdecl google::protobuf::internal::LogIndexOutOfBoundsAndAbort(int param_1,int param_2)

{
  LogMessage *pLVar1;
  int local_res10 [2];
  int local_res18 [4];
  basic_string_view<char,std::char_traits<char>_> local_38;
  LogMessageFatal local_28;
  
  pLVar1 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_28,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\repeated_field.cc"
                      ,0x25);
  local_38._Mydata = "index: ";
  local_38._Mysize = 7;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar1,&local_38);
  local_res10[0] = param_1;
  pLVar1 = absl::lts_20240722::log_internal::LogMessage::operator<<<int,0>(pLVar1,local_res10);
  local_38._Mydata = ", size: ";
  local_38._Mysize = 8;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar1,&local_38);
  local_res18[0] = param_2;
  absl::lts_20240722::log_internal::LogMessage::operator<<<int,0>(pLVar1,local_res18);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_28);
}

// SpaceUsedExcludingSelfLong @ 14fb7a6d0

/* public: unsigned __int64 __cdecl google::protobuf::RepeatedField<class
   absl::lts_20240722::Cord>::SpaceUsedExcludingSelfLong(void)const __ptr64 */

__uint64 __thiscall
google::protobuf::RepeatedField<absl::lts_20240722::Cord>::SpaceUsedExcludingSelfLong
          (RepeatedField<absl::lts_20240722::Cord> *this)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  __uint64 _Var5;
  byte bVar6;
  RepeatedField<absl::lts_20240722::Cord> *pRVar7;
  char *pcVar8;
  
  uVar3 = *(ulonglong *)this;
  pRVar7 = this + 8;
  bVar6 = ~((byte)uVar3 >> 2) & 1;
  if (bVar6 == 0) {
    uVar1 = *(uint *)pRVar7;
  }
  else {
    uVar1 = (uint)uVar3 & 3;
  }
  _Var5 = (longlong)(int)uVar1 << 4;
  uVar1 = size(this);
  if (0 < (int)uVar1) {
    if (bVar6 == 0) {
      lVar4 = (longlong)(int)uVar1;
      if (0 < (int)uVar1) {
        pcVar8 = (char *)(uVar3 & 0xfffffffffffffff8);
        do {
          if (((longlong)*pcVar8 & 1U) == 0) {
            uVar3 = (ulonglong)(longlong)*pcVar8 >> 1;
          }
          else {
            uVar3 = **(ulonglong **)(pcVar8 + 8);
          }
          _Var5 = _Var5 + uVar3;
          pcVar8 = pcVar8 + 0x10;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    else {
      uVar3 = (ulonglong)uVar1;
      do {
        if (((longlong)(char)*pRVar7 & 1U) == 0) {
          uVar2 = (ulonglong)(longlong)(char)*pRVar7 >> 1;
        }
        else {
          uVar2 = **(ulonglong **)(pRVar7 + 8);
        }
        _Var5 = _Var5 + uVar2;
        pRVar7 = pRVar7 + 0x10;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return _Var5;
}

// FUN_1502ac650 @ 1502ac650

void FUN_1502ac650(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

