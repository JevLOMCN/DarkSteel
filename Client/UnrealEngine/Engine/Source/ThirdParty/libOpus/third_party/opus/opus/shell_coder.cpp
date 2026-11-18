// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_shell_decoder @ 14f88639c

void silk_shell_decoder(short *param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  if (param_3 < 1) {
    sVar5 = 0;
    sVar1 = 0;
  }
  else {
    sVar1 = ec_dec_icdf(param_2,&silk_shell_code_table3 +
                                (byte)(&silk_shell_code_table_offsets)[param_3],8);
    sVar5 = (short)param_3 - sVar1;
  }
  if (sVar1 < 1) {
    sVar1 = 0;
    sVar2 = 0;
  }
  else {
    sVar2 = ec_dec_icdf(param_2,&silk_shell_code_table2 +
                                (byte)(&silk_shell_code_table_offsets)[sVar1],8);
    sVar1 = sVar1 - sVar2;
  }
  if (sVar2 < 1) {
    sVar2 = 0;
    sVar3 = 0;
  }
  else {
    sVar3 = ec_dec_icdf(param_2,&silk_shell_code_table1 +
                                (byte)(&silk_shell_code_table_offsets)[sVar2],8);
    sVar2 = sVar2 - sVar3;
  }
  if (sVar3 < 1) {
    sVar3 = 0;
    sVar4 = 0;
  }
  else {
    sVar4 = ec_dec_icdf(param_2,&silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[sVar3],8);
    sVar3 = sVar3 - sVar4;
  }
  *param_1 = sVar4;
  param_1[1] = sVar3;
  if (sVar2 < 1) {
    sVar2 = 0;
    sVar3 = 0;
  }
  else {
    sVar3 = ec_dec_icdf(param_2,&silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[sVar2],8);
    sVar2 = sVar2 - sVar3;
  }
  param_1[2] = sVar3;
  param_1[3] = sVar2;
  if (sVar1 < 1) {
    sVar1 = 0;
    sVar2 = 0;
  }
  else {
    sVar2 = ec_dec_icdf(param_2,&silk_shell_code_table1 +
                                (byte)(&silk_shell_code_table_offsets)[sVar1],8);
    sVar1 = sVar1 - sVar2;
  }
  if (sVar2 < 1) {
    sVar2 = 0;
    sVar3 = 0;
  }
  else {
    sVar3 = ec_dec_icdf(param_2,&silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[sVar2],8);
    sVar2 = sVar2 - sVar3;
  }
  param_1[4] = sVar3;
  param_1[5] = sVar2;
  if (sVar1 < 1) {
    sVar1 = 0;
    sVar2 = 0;
  }
  else {
    sVar2 = ec_dec_icdf(param_2,&silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[sVar1],8);
    sVar1 = sVar1 - sVar2;
  }
  param_1[6] = sVar2;
  param_1[7] = sVar1;
  if (sVar5 < 1) {
    sVar5 = 0;
    sVar1 = 0;
  }
  else {
    sVar1 = ec_dec_icdf(param_2,&silk_shell_code_table2 +
                                (byte)(&silk_shell_code_table_offsets)[sVar5],8);
    sVar5 = sVar5 - sVar1;
  }
  if (sVar1 < 1) {
    sVar1 = 0;
    sVar2 = 0;
  }
  else {
    sVar2 = ec_dec_icdf(param_2,&silk_shell_code_table1 +
                                (byte)(&silk_shell_code_table_offsets)[sVar1],8);
    sVar1 = sVar1 - sVar2;
  }
  if (sVar2 < 1) {
    sVar2 = 0;
    sVar3 = 0;
  }
  else {
    sVar3 = ec_dec_icdf(param_2,&silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[sVar2],8);
    sVar2 = sVar2 - sVar3;
  }
  param_1[8] = sVar3;
  param_1[9] = sVar2;
  if (sVar1 < 1) {
    sVar1 = 0;
    sVar2 = 0;
  }
  else {
    sVar2 = ec_dec_icdf(param_2,&silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[sVar1],8);
    sVar1 = sVar1 - sVar2;
  }
  param_1[10] = sVar2;
  param_1[0xb] = sVar1;
  if (sVar5 < 1) {
    sVar5 = 0;
    sVar1 = 0;
  }
  else {
    sVar1 = ec_dec_icdf(param_2,&silk_shell_code_table1 +
                                (byte)(&silk_shell_code_table_offsets)[sVar5],8);
    sVar5 = sVar5 - sVar1;
  }
  if (sVar1 < 1) {
    sVar1 = 0;
    sVar2 = 0;
  }
  else {
    sVar2 = ec_dec_icdf(param_2,&silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[sVar1],8);
    sVar1 = sVar1 - sVar2;
  }
  param_1[0xc] = sVar2;
  param_1[0xd] = sVar1;
  if (sVar5 < 1) {
    sVar5 = 0;
    sVar1 = 0;
  }
  else {
    sVar1 = ec_dec_icdf(param_2,&silk_shell_code_table0 +
                                (byte)(&silk_shell_code_table_offsets)[sVar5],8);
    sVar5 = sVar5 - sVar1;
  }
  param_1[0xe] = sVar1;
  param_1[0xf] = sVar5;
  return;
}

// silk_shell_encoder @ 14f886710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_shell_encoder(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStack_98 [32];
  int local_78 [6];
  int local_60 [8];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar3 = 0;
  piVar4 = local_78 + 6;
  do {
    lVar2 = lVar3 + 4;
    piVar1 = (int *)((longlong)param_2 + lVar3);
    lVar3 = lVar3 + 8;
    *piVar4 = *(int *)((longlong)param_2 + lVar2) + *piVar1;
    piVar4 = piVar4 + 1;
  } while (lVar3 < 0x40);
  lVar3 = 0;
  do {
    local_78[lVar3 + 2] = local_78[lVar3 * 2 + 7] + local_78[lVar3 * 2 + 6];
    lVar3 = lVar3 + 1;
  } while (lVar3 < 4);
  lVar3 = 0;
  do {
    local_78[lVar3] = local_78[lVar3 * 2 + 3] + local_78[lVar3 * 2 + 2];
    lVar3 = lVar3 + 1;
  } while (lVar3 < 2);
  if (0 < local_78[1] + local_78[0]) {
    ec_enc_icdf(param_1,local_78[0],
                &silk_shell_code_table3 +
                (byte)(&silk_shell_code_table_offsets)[local_78[1] + local_78[0]],8);
  }
  if (0 < local_78[0]) {
    ec_enc_icdf(param_1,local_78[2],
                &silk_shell_code_table2 + (byte)(&silk_shell_code_table_offsets)[local_78[0]],8);
  }
  if (0 < local_78[2]) {
    ec_enc_icdf(param_1,local_60[0],
                &silk_shell_code_table1 + (byte)(&silk_shell_code_table_offsets)[local_78[2]],8);
  }
  if (0 < local_60[0]) {
    ec_enc_icdf(param_1,*param_2,
                &silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[local_60[0]],8);
  }
  if (0 < local_60[1]) {
    ec_enc_icdf(param_1,param_2[2],
                &silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[local_60[1]],8);
  }
  if (0 < local_78[3]) {
    ec_enc_icdf(param_1,local_60[2],
                &silk_shell_code_table1 + (byte)(&silk_shell_code_table_offsets)[local_78[3]],8);
  }
  if (0 < local_60[2]) {
    ec_enc_icdf(param_1,param_2[4],
                &silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[local_60[2]],8);
  }
  if (0 < local_60[3]) {
    ec_enc_icdf(param_1,param_2[6],
                &silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[local_60[3]],8);
  }
  if (0 < local_78[1]) {
    ec_enc_icdf(param_1,local_78[4],
                &silk_shell_code_table2 + (byte)(&silk_shell_code_table_offsets)[local_78[1]],8);
  }
  if (0 < local_78[4]) {
    ec_enc_icdf(param_1,local_60[4],
                &silk_shell_code_table1 + (byte)(&silk_shell_code_table_offsets)[local_78[4]],8);
  }
  if (0 < local_60[4]) {
    ec_enc_icdf(param_1,param_2[8],
                &silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[local_60[4]],8);
  }
  if (0 < local_60[5]) {
    ec_enc_icdf(param_1,param_2[10],
                &silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[local_60[5]],8);
  }
  if (0 < local_78[5]) {
    ec_enc_icdf(param_1,local_60[6],
                &silk_shell_code_table1 + (byte)(&silk_shell_code_table_offsets)[local_78[5]],8);
  }
  if (0 < local_60[6]) {
    ec_enc_icdf(param_1,param_2[0xc],
                &silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[local_60[6]],8);
  }
  if (0 < local_60[7]) {
    ec_enc_icdf(param_1,param_2[0xe],
                &silk_shell_code_table0 + (byte)(&silk_shell_code_table_offsets)[local_60[7]],8);
  }
  return;
}

