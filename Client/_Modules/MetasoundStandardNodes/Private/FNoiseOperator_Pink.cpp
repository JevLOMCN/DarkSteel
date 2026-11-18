// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 4

// ExecuteFunction @ 14b18c9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Metasound::FNoiseOperator_Pink::ExecuteFunction(IOperator *param_1)

{
  IOperator IVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  IOperator local_38;
  IOperator IStack_30;
  IOperator local_28;
  float local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  iVar3 = *(int *)param_1[2];
  if (*(int *)(param_1 + 0xd) != iVar3) {
    if (iVar3 == -1) {
      Audio::FPinkNoise::FPinkNoise((FPinkNoise *)local_48);
    }
    else {
      Audio::FPinkNoise::FPinkNoise((FPinkNoise *)local_48,iVar3);
    }
    *(int *)(param_1 + 0xd) = iVar3;
    *(undefined4 *)&param_1[0xe].field_0x0 = local_48._0_4_;
    *(undefined4 *)&param_1[0xe].field_0x4 = local_48._4_4_;
    param_1[0xf] = (IOperator)local_48._8_8_;
    param_1[0x10] = local_38;
    param_1[0x11] = IStack_30;
    param_1[0x12] = local_28;
    *(float *)(param_1 + 0x13) = local_20;
  }
  IVar1 = param_1[10];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar1 + 0x10) != *(int *)((longlong)IVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar2 = *(float **)IVar1;
  IVar1 = param_1[10];
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)((longlong)IVar1 + 0x10) != *(int *)((longlong)IVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  for (iVar3 = *(int *)((longlong)IVar1 + 8); 0 < iVar3; iVar3 = iVar3 + -1) {
    fVar4 = Audio::FPinkNoise::Generate((FPinkNoise *)(param_1 + 0xe));
    *pfVar2 = fVar4;
    pfVar2 = pfVar2 + 1;
  }
  return;
}

// GetExecuteFunction @ 14b191d80

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::FNoiseOperator_Pink::GetExecuteFunction(FNoiseOperator_Pink *this)

{
  return ExecuteFunction;
}

// GetResetFunction @ 14b1988c0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::FNoiseOperator_Pink::GetResetFunction(FNoiseOperator_Pink *this)

{
  return ResetFunction;
}

// ResetFunction @ 14b1aa3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl Metasound::FNoiseOperator_Pink::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  IOperator local_38;
  IOperator IStack_30;
  IOperator local_28;
  float local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (*(int *)param_1[2] == -1) {
    Audio::FPinkNoise::FPinkNoise((FPinkNoise *)local_48);
  }
  else {
    Audio::FPinkNoise::FPinkNoise((FPinkNoise *)local_48,*(int *)param_1[2]);
  }
  *(undefined4 *)&param_1[0xe].field_0x0 = local_48._0_4_;
  *(undefined4 *)&param_1[0xe].field_0x4 = local_48._4_4_;
  param_1[0xf] = (IOperator)local_48._8_8_;
  param_1[0x10] = local_38;
  param_1[0x11] = IStack_30;
  param_1[0x12] = local_28;
  *(float *)(param_1 + 0x13) = local_20;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)param_1[2];
  iVar1 = *(int *)((longlong)param_1[10] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[10],0,(longlong)iVar1 << 2);
  }
  return;
}

