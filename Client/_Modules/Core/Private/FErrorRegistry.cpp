// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// RegisterErrorCode @ 1415db060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::UnifiedError::ErrorRegistry::FErrorRegistry::RegisterErrorCode
          (FErrorRegistry *this,TStringView<char> *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  char *pcVar2;
  code *pcVar3;
  TSet<TTuple<TTuple<int,int>,FAnsiString>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,FAnsiString,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  size_t sVar8;
  int *piVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  undefined1 *puVar13;
  uint uVar14;
  FScriptContainerElement *_Str;
  undefined1 auStackY_328 [32];
  ForAnyElementType local_2e8;
  undefined8 local_2e0;
  ForAnyElementType local_2d8;
  int local_2d0 [2];
  TSet<TTuple<TTuple<int,int>,FAnsiString>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,FAnsiString,0>,FDefaultSetAllocator>
  *local_2c8;
  TStringView<char> *local_2c0;
  undefined1 local_2b8 [16];
  FAnsiString *local_2a8;
  ForAnyElementType *local_2a0;
  FScriptContainerElement local_298 [256];
  ForAnyElementType local_198;
  FScriptContainerElement *local_190;
  int local_188;
  FScriptContainerElement local_178 [256];
  ForAnyElementType local_78;
  FScriptContainerElement *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2c8 = (TSet<TTuple<TTuple<int,int>,FAnsiString>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,FAnsiString,0>,FDefaultSetAllocator>
               *)&this->ErrorCodeNameMap;
  uVar10 = ((uint)param_2 >> 2) + param_3 + param_2 * 0x40 + -0x61c88647;
  FVar12.Data = (FScriptContainerElement *)0x0;
  local_2c0 = param_1;
  local_2b8._0_4_ = param_2;
  local_2b8._4_4_ = param_3;
  if (*(int *)&(this->ErrorCodeNameMap).field_0x8 != *(int *)&(this->ErrorCodeNameMap).field_0x34) {
    puVar13 = *(undefined1 **)&(this->ErrorCodeNameMap).field_0x40;
    uVar14 = *(int *)&(this->ErrorCodeNameMap).field_0x48 - 1;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->ErrorCodeNameMap).field_0x38;
    }
    iVar5 = *(int *)(puVar13 + (ulonglong)((uVar10 ^ param_2) & uVar14) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)
               &((TMap<TTuple<int,int>,FAnsiString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,FAnsiString,0>_>
                  *)local_2c8)->field_0x0;
      do {
        lVar6 = (longlong)iVar5 * 0x20;
        if ((*(int *)(lVar6 + lVar1) == param_2) && (*(int *)(lVar6 + 4 + lVar1) == param_3)) {
          if (iVar5 != -1) {
            iVar5 = *(int *)(puVar13 + (ulonglong)((param_2 ^ uVar10) & uVar14) * 4);
            goto joined_r0x0001415db154;
          }
          break;
        }
        iVar5 = *(int *)(lVar6 + 0x18 + lVar1);
      } while (iVar5 != -1);
    }
  }
  goto LAB_1415db417;
joined_r0x0001415db154:
  FVar11.Data = FVar12.Data;
  if (iVar5 == -1) goto LAB_1415db180;
  piVar9 = (int *)((longlong)iVar5 * 0x20 + lVar1);
  if ((*piVar9 == param_2) && (piVar9[1] == param_3)) {
    if ((iVar5 != -1) && (piVar9 != (int *)0x0)) {
      iVar5 = piVar9[4];
      _Src = *(void **)(piVar9 + 2);
      local_2e8.Data = (FScriptContainerElement *)0x0;
      local_2e0 = CONCAT44(local_2e0._4_4_,iVar5);
      if (iVar5 == 0) {
        local_2e0 = 0;
        local_2e0._0_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar5,0,&local_2e8,iVar5,(int *)((longlong)&local_2e0 + 4));
        FVar11.Data = local_2e8.Data;
        memcpy(local_2e8.Data,_Src,(longlong)iVar5);
      }
      if ((int)local_2e0 == 0) goto LAB_1415db18d;
      local_198.Data = (FScriptContainerElement *)0x0;
      _Str = FVar11.Data;
      if (FVar11.Data != (FScriptContainerElement *)0x0) goto LAB_1415db19e;
      local_190 = (FScriptContainerElement *)0x0;
      local_188 = 0;
      goto LAB_1415db227;
    }
    goto LAB_1415db180;
  }
  iVar5 = piVar9[6];
  goto joined_r0x0001415db154;
LAB_1415db180:
  local_2e0 = 0;
  local_2e8.Data = (FScriptContainerElement *)0x0;
LAB_1415db18d:
  _Str = (FScriptContainerElement *)"";
LAB_1415db19e:
  local_198.Data = (FScriptContainerElement *)0x0;
  sVar8 = strlen((char *)_Str);
  local_188 = (int)sVar8;
  uVar10 = local_188 + 1;
  if (0x80 < uVar10) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_198,0,uVar10,2);
    FVar12.Data = local_198.Data;
  }
  local_190 = local_298;
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    local_190 = FVar12.Data;
  }
  pwVar7 = FGenericPlatformString::Convert<char,wchar_t>
                     ((wchar_t *)local_190,uVar10,(char *)_Str,uVar10);
  if ((pwVar7 == (wchar_t *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_1415db227:
  local_78.Data = (FScriptContainerElement *)0x0;
  pcVar2 = local_2c0->DataPtr;
  if (pcVar2 == (char *)0x0) {
    local_70 = (FScriptContainerElement *)0x0;
    local_68 = 0;
  }
  else {
    sVar8 = strlen(pcVar2);
    local_68 = (int)sVar8;
    uVar10 = local_68 + 1;
    FVar12.Data = (FScriptContainerElement *)0x0;
    if (0x80 < uVar10) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar10,2);
      FVar12.Data = local_78.Data;
    }
    local_70 = local_178;
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      local_70 = FVar12.Data;
    }
    pwVar7 = FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_70,uVar10,pcVar2,uVar10)
    ;
    if ((pwVar7 == (wchar_t *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("ErrorCodeNameMap.Contains(CombinedErrorId) == false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Experimental\\UnifiedError\\UnifiedError.cpp"
                     ,0x162,
                     L"Error %s and %s are trying to register under same error code moduleid:%d errorcode:%d"
                    );
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_1415db417:
  this_00 = local_2c8;
  local_2d8.Data = (FScriptContainerElement *)0x0;
  local_2d0[0] = 0;
  local_2d0[1] = 0;
  pcVar2 = local_2c0->DataPtr;
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    sVar8 = strlen(pcVar2);
    uVar10 = (int)sVar8 + 1;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if (0 < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar10,&local_2d8,0,local_2d0 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar10,&local_2d8,local_2d0,local_2d0 + 1);
    FGenericPlatformString::Memcpy(local_2d8.Data,pcVar2,(longlong)(int)uVar10);
  }
  local_2a8 = (FAnsiString *)local_2b8;
  local_2a0 = &local_2d8;
  TSet<TTuple<TTuple<int,int>,FAnsiString>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,FAnsiString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<int,int>_const_&,FAnsiString_&&>_>
            (this_00,(TPairInitializer<TTuple<int,int>_const_&,FAnsiString_&&> *)(local_2b8 + 8),
             (bool *)&local_2a8);
  if (local_2d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data);
  }
  return param_3;
}

// RegisterModule @ 1415db660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall
UE::UnifiedError::ErrorRegistry::FErrorRegistry::RegisterModule
          (FErrorRegistry *this,TStringView<char> *param_1)

{
  char cVar1;
  longlong lVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  size_t sVar8;
  uint *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  char *pcVar15;
  ForAnyElementType FVar16;
  undefined1 auStackY_328 [32];
  ForAnyElementType local_2e8;
  undefined8 local_2e0;
  ForAnyElementType local_2d8;
  int local_2d0 [2];
  undefined1 local_2c8 [16];
  TPairInitializer<int_&&,FAnsiString_&&> local_2b8;
  ForAnyElementType *local_2a8;
  char *local_298;
  ulonglong uStack_290;
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pcVar15 = param_1->DataPtr;
  uStack_290 = *(ulonglong *)&param_1->Size;
  local_2c8._8_8_ = param_1;
  local_298 = pcVar15;
  if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CRCTable_DEPRECATED[1] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                         ,0xa4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  FVar13.Data = (FScriptContainerElement *)0x0;
  pFVar12 = FVar13.Data;
  if (0 < (int)uStack_290) {
    uVar10 = uStack_290 & 0xffffffff;
    do {
      cVar1 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pFVar12 = (FScriptContainerElement *)
                (ulonglong)
                ((uint)pFVar12 >> 8 ^
                FCrc::CRCTable_DEPRECATED
                [((ulonglong)(byte)(cVar1 - (-((int)cVar1 - 0x61U < 0x1a) & 0x20U)) ^
                 (ulonglong)pFVar12) & 0xff]);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar5 = (uint)pFVar12;
  if (*(int *)&(this->ModuleNameMap).field_0x8 != *(int *)&(this->ModuleNameMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->ModuleNameMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ModuleNameMap).field_0x38;
    }
    uVar14 = *(uint *)(puVar11 +
                      ((ulonglong)(*(int *)&(this->ModuleNameMap).field_0x48 - 1) &
                      (ulonglong)pFVar12) * 4);
    if (uVar14 != 0xffffffff) {
      lVar2 = *(longlong *)&this->ModuleNameMap;
      uVar6 = uVar14;
      do {
        if (*(uint *)((longlong)(int)uVar6 * 0x20 + lVar2) == uVar5) goto LAB_1415db790;
        uVar6 = *(uint *)((longlong)(int)uVar6 * 0x20 + 0x18 + lVar2);
      } while (uVar6 != 0xffffffff);
    }
  }
  goto LAB_1415dba32;
  while (uVar14 = puVar9[6], uVar14 != 0xffffffff) {
LAB_1415db790:
    puVar9 = (uint *)((longlong)(int)uVar14 * 0x20 + lVar2);
    FVar16.Data = FVar13.Data;
    if (*puVar9 == uVar5) {
      if (puVar9 != (uint *)0x0) {
        uVar14 = puVar9[4];
        _Src = *(void **)(puVar9 + 2);
        local_2e8.Data = (FScriptContainerElement *)0x0;
        local_2e0 = CONCAT44(local_2e0._4_4_,uVar14);
        if (uVar14 == 0) {
          local_2e0 = 0;
          local_2e0._0_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar14,0,&local_2e8,uVar14,(int *)((longlong)&local_2e0 + 4));
          FVar16.Data = local_2e8.Data;
          memcpy(local_2e8.Data,_Src,(longlong)(int)uVar14);
        }
        if ((int)local_2e0 == 0) goto LAB_1415db7b9;
        local_188.Data = (FScriptContainerElement *)0x0;
        pFVar12 = FVar16.Data;
        if (FVar16.Data != (FScriptContainerElement *)0x0) goto LAB_1415db7ca;
        local_180 = (FScriptContainerElement *)0x0;
        local_178 = 0;
        goto LAB_1415db856;
      }
      break;
    }
  }
  local_2e8.Data = (FScriptContainerElement *)0x0;
  local_2e0 = 0;
LAB_1415db7b9:
  pFVar12 = (FScriptContainerElement *)"";
LAB_1415db7ca:
  local_188.Data = (FScriptContainerElement *)0x0;
  sVar8 = strlen((char *)pFVar12);
  local_178 = (int)sVar8;
  uVar14 = local_178 + 1;
  if (0x80 < uVar14) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,uVar14,2);
    FVar13.Data = local_188.Data;
  }
  local_180 = local_288;
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    local_180 = FVar13.Data;
  }
  pwVar7 = FGenericPlatformString::Convert<char,wchar_t>
                     ((wchar_t *)local_180,uVar14,(char *)pFVar12,uVar14);
  if ((pwVar7 == (wchar_t *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
LAB_1415db856:
  local_68.Data = (FScriptContainerElement *)0x0;
  pcVar15 = *(char **)local_2c8._8_8_;
  if (pcVar15 == (char *)0x0) {
    local_60 = (FScriptContainerElement *)0x0;
    local_58 = 0;
  }
  else {
    sVar8 = strlen(pcVar15);
    local_58 = (int)sVar8;
    uVar14 = local_58 + 1;
    FVar13.Data = (FScriptContainerElement *)0x0;
    if (0x80 < uVar14) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar14,2);
      FVar13.Data = local_68.Data;
    }
    local_60 = local_168;
    if (FVar13.Data != (FScriptContainerElement *)0x0) {
      local_60 = FVar13.Data;
    }
    pwVar7 = FGenericPlatformString::Convert<char,wchar_t>
                       ((wchar_t *)local_60,uVar14,pcVar15,uVar14);
    if ((pwVar7 == (wchar_t *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("ModuleNameMap.Contains(ModuleId) == false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Experimental\\UnifiedError\\UnifiedError.cpp"
                     ,0x15a,L"Module %s and %s are trying to register under module id %d");
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
LAB_1415dba32:
  local_2d8.Data = (FScriptContainerElement *)0x0;
  local_2d0[0] = 0;
  local_2d0[1] = 0;
  pcVar15 = *(char **)local_2c8._8_8_;
  if ((pcVar15 != (char *)0x0) && (*pcVar15 != '\0')) {
    sVar8 = strlen(pcVar15);
    uVar14 = (int)sVar8 + 1;
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if (0 < (int)uVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar14,&local_2d8,0,local_2d0 + 1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar14,&local_2d8,local_2d0,local_2d0 + 1);
    FGenericPlatformString::Memcpy(local_2d8.Data,pcVar15,(longlong)(int)uVar14);
  }
  local_2b8.Value = (FAnsiString *)local_2c8;
  local_2a8 = &local_2d8;
  local_2c8._0_4_ = uVar5;
  TSet<TTuple<int,FAnsiString>,TDefaultMapHashableKeyFuncs<int,FAnsiString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_&&,FAnsiString_&&>_>
            ((TSet<TTuple<int,FAnsiString>,TDefaultMapHashableKeyFuncs<int,FAnsiString,0>,FDefaultSetAllocator>
              *)this,&local_2b8,(bool *)&local_2b8.Value);
  if (local_2d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data);
  }
  return uVar5;
}

