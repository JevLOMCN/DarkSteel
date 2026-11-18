// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 5

// FUN_14f91a100 @ 14f91a100

char * FUN_14f91a100(char *param_1,
                    basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  pcVar3 = param_1;
  if (cVar1 == '<') {
    cVar1 = param_1[1];
    pcVar3 = param_1 + 1;
    while( true ) {
      if (cVar1 == '>') {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (param_2,param_1 + 1,(ulong64)(pcVar3 + (-1 - (longlong)param_1)));
        return pcVar3 + 1;
      }
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
    }
  }
  else {
    while (((cVar1 != '\0' && (pcVar2 = strchr("-+,",(int)cVar1), pcVar2 == (char *)0x0)) &&
           (pcVar2 = strchr("0123456789",(int)*pcVar3), pcVar2 == (char *)0x0))) {
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
    }
    if (2 < (longlong)pcVar3 - (longlong)param_1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_2,param_1,(longlong)pcVar3 - (longlong)param_1);
      return pcVar3;
    }
  }
  return (char *)0x0;
}

// FUN_14f91a1f0 @ 14f91a1f0

char * FUN_14f91a1f0(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  if (*param_1 == ',') {
    local_res8[0] = 0;
    if (param_1[1] == 'M') {
      param_1 = (char *)FUN_14f91a360(param_1 + 2,1,0xc,local_res8);
      if (param_1 == (char *)0x0) {
        return (char *)0x0;
      }
      if (*param_1 == '.') {
        local_res18[0] = 0;
        param_1 = (char *)FUN_14f91a360(param_1 + 1,1,5,local_res18);
        if (param_1 == (char *)0x0) {
          return (char *)0x0;
        }
        if (*param_1 == '.') {
          local_res20[0] = 0;
          param_1 = (char *)FUN_14f91a360(param_1 + 1,0,6,local_res20);
          if (param_1 == (char *)0x0) {
            return (char *)0x0;
          }
          *(undefined1 *)(param_2 + 1) = (undefined1)local_res8[0];
          *(undefined1 *)((longlong)param_2 + 5) = (undefined1)local_res18[0];
          *(undefined1 *)((longlong)param_2 + 6) = (undefined1)local_res20[0];
          *param_2 = 2;
        }
      }
    }
    else {
      if (param_1[1] == 'J') {
        param_1 = (char *)FUN_14f91a360(param_1 + 2,1,0x16d,local_res8);
        if (param_1 == (char *)0x0) {
          return (char *)0x0;
        }
        *param_2 = 0;
      }
      else {
        param_1 = (char *)FUN_14f91a360(param_1 + 1,0,0x16d,local_res8);
        if (param_1 == (char *)0x0) {
          return (char *)0x0;
        }
        *param_2 = 1;
      }
      param_2[1] = local_res8[0];
    }
  }
  param_2[2] = 0x1c20;
  if (*param_1 == '/') {
    pcVar1 = (char *)FUN_14f91a430(param_1 + 1,0xffffff59,0xa7,1,param_2 + 2);
    return pcVar1;
  }
  return param_1;
}

// FUN_14f91a360 @ 14f91a360

char * FUN_14f91a360(char *param_1,int param_2,int param_3,int *param_4)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = 0;
  pcVar1 = strchr("0123456789",(int)*param_1);
  pcVar3 = param_1;
  if (pcVar1 != (char *)0x0) {
    do {
      iVar4 = (int)pcVar1 + -0x535cedc0;
      if (9 < iVar4) break;
      if (0xccccccc < iVar2) {
        return (char *)0x0;
      }
      if (0x7fffffff - iVar4 < iVar2 * 10) {
        return (char *)0x0;
      }
      pcVar1 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      iVar2 = iVar2 * 10 + iVar4;
      pcVar1 = strchr("0123456789",(int)*pcVar1);
    } while (pcVar1 != (char *)0x0);
    if (((pcVar3 != param_1) && (param_2 <= iVar2)) && (iVar2 <= param_3)) {
      *param_4 = iVar2;
      return pcVar3;
    }
  }
  return (char *)0x0;
}

// FUN_14f91a430 @ 14f91a430

char * FUN_14f91a430(char *param_1,undefined8 param_2,undefined8 param_3,int param_4,int *param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int local_res8 [2];
  int local_18;
  int local_14 [3];
  
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    if (((cVar1 - 0x2bU & 0xfd) == 0) && (param_1 = param_1 + 1, cVar1 == '-')) {
      param_4 = -param_4;
    }
    local_18 = 0;
    local_14[0] = 0;
    local_res8[0] = 0;
    pcVar2 = (char *)FUN_14f91a360(param_1,param_2,param_3,&local_18);
    if ((pcVar2 != (char *)0x0) &&
       ((iVar3 = 0, *pcVar2 != ':' ||
        ((pcVar2 = (char *)FUN_14f91a360(pcVar2 + 1,0,0x3b,local_14), pcVar2 != (char *)0x0 &&
         ((iVar3 = 0, *pcVar2 != ':' ||
          (pcVar2 = (char *)FUN_14f91a360(pcVar2 + 1,0,0x3b,local_res8), iVar3 = local_res8[0],
          pcVar2 != (char *)0x0)))))))) {
      *param_5 = ((local_18 * 0x3c + local_14[0]) * 0x3c + iVar3) * param_4;
      return pcVar2;
    }
  }
  return (char *)0x0;
}

// ParsePosixSpec @ 14f91a500

/* bool __cdecl absl::lts_20240722::time_internal::cctz::ParsePosixSpec(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,struct absl::lts_20240722::time_internal::cctz::PosixTimeZone * __ptr64) */

bool __cdecl
absl::lts_20240722::time_internal::cctz::ParsePosixSpec
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          PosixTimeZone *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  if ((param_1->_Mypair)._Myval2._Bx._Buf[0] != ':') {
    uVar1 = FUN_14f91a100();
    pcVar2 = (char *)FUN_14f91a430(uVar1,0,0x18,0xffffffff,param_2 + 0x20);
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 == '\0') {
        return true;
      }
      pcVar2 = (char *)FUN_14f91a100(pcVar2,param_2 + 0x28);
      if (pcVar2 != (char *)0x0) {
        *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x20) + 0xe10;
        if (*pcVar2 != ',') {
          pcVar2 = (char *)FUN_14f91a430(pcVar2,0,0x18,0xffffffff,param_2 + 0x48);
        }
        uVar1 = FUN_14f91a1f0(pcVar2,param_2 + 0x4c);
        pcVar2 = (char *)FUN_14f91a1f0(uVar1,param_2 + 0x58);
        if ((pcVar2 != (char *)0x0) && (*pcVar2 == '\0')) {
          return true;
        }
      }
    }
  }
  return false;
}

