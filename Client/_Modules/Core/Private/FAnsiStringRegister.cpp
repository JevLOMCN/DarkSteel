// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GetUniqueStringIndex @ 14194c530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl FAnsiStringRegister::GetUniqueStringIndex(char *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_1f8 [32];
  uint local_1a8 [2];
  FString local_1a0;
  char *local_190;
  undefined1 local_188 [8];
  TPairInitializer<char_const_*_const_&,unsigned_int_const_&> local_180;
  uint *local_170;
  FString *local_168;
  uint *local_160;
  char **local_158;
  uint *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (CharPtrToStringIndex._8_4_ != CharPtrToStringIndex._52_4_) {
    lVar8 = 0x154b814e8;
    if (CharPtrToStringIndex._64_8_ != 0) {
      lVar8 = CharPtrToStringIndex._64_8_;
    }
    iVar4 = *(int *)(lVar8 + (ulonglong)(CharPtrToStringIndex._72_4_ - 1 & (uVar6 >> 0x10 ^ uVar6))
                             * 4);
    while (iVar4 != -1) {
      lVar8 = CharPtrToStringIndex._0_8_ + (longlong)iVar4 * 0x18;
      if (*(char **)(CharPtrToStringIndex._0_8_ + (longlong)iVar4 * 0x18) == param_1) {
        puVar7 = (uint *)(lVar8 + 8);
        if (lVar8 == 0) {
          puVar7 = (uint *)0x0;
        }
        if (puVar7 != (uint *)0x0) {
          return *puVar7;
        }
        break;
      }
      iVar4 = *(int *)(lVar8 + 0x10);
    }
  }
  local_148._padding_ = 0;
  local_190 = param_1;
  if (param_1 == (char *)0x0) {
    local_148.StringLength = 0;
    local_148.Ptr = (wchar_t *)0x0;
  }
  else {
    sVar5 = strlen(param_1);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,param_1,(int)sVar5,Yes);
  }
  ::FString::FString(&local_1a0,local_148.Ptr);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  iVar4 = local_1a0.Data.ArrayNum + -1;
  FVar2.Data = local_1a0.Data.AllocatorInstance.Data;
  if (local_1a0.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar2.Data);
  iVar4 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                      *)&UniqueNonFNameStatIDStrings,uVar6,&local_1a0);
  if (iVar4 != -1) {
    lVar8 = (longlong)iVar4 * 0x20 + UniqueNonFNameStatIDStrings._0_8_;
    puVar7 = (uint *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      puVar7 = (uint *)0x0;
    }
    if (puVar7 != (uint *)0x0) {
      local_180.Value = (uint *)&local_190;
      local_170 = puVar7;
      TSet<TTuple<char_const_*,unsigned_int>,TDefaultMapHashableKeyFuncs<char_const_*,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<char_const_*_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<char_const_*,unsigned_int>,TDefaultMapHashableKeyFuncs<char_const_*,unsigned_int,0>,FDefaultSetAllocator>
                  *)&CharPtrToStringIndex,
                 (TPairInitializer<char_const_*_const_&,unsigned_int_const_&> *)local_188,
                 (bool *)&local_180.Value);
      uVar6 = *puVar7;
      goto LAB_14194c86e;
    }
  }
  local_1a8[0] = UniqueNonFNameStatIDIndices.ArrayNum;
  local_168 = &local_1a0;
  local_160 = local_1a8;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
              *)&UniqueNonFNameStatIDStrings,
             (TPairInitializer<FString_const_&,unsigned_int_const_&> *)(local_188 + 4),
             (bool *)&local_168);
  if (((UniqueNonFNameStatIDIndices.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1a0)
      && ((FScriptContainerElement *)&local_1a0 <
          UniqueNonFNameStatIDIndices.AllocatorInstance.Data +
          (longlong)UniqueNonFNameStatIDIndices.ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  if (UniqueNonFNameStatIDIndices.ArrayNum == UniqueNonFNameStatIDIndices.ArrayMax) {
    UniqueNonFNameStatIDIndices.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&UniqueNonFNameStatIDIndices.AllocatorInstance,
                    &UniqueNonFNameStatIDIndices.ArrayMax);
  }
  FVar2.Data = local_1a0.Data.AllocatorInstance.Data;
  lVar8 = (longlong)UniqueNonFNameStatIDIndices.ArrayNum;
  UniqueNonFNameStatIDIndices.ArrayNum = UniqueNonFNameStatIDIndices.ArrayNum + 1;
  pFVar9 = UniqueNonFNameStatIDIndices.AllocatorInstance.Data + lVar8 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  *(int *)(pFVar9 + 8) = local_1a0.Data.ArrayNum;
  if (local_1a0.Data.ArrayNum == 0) {
    *(int *)(pFVar9 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1a0.Data.ArrayNum,0,(ForAnyElementType *)pFVar9,local_1a0.Data.ArrayNum,
               (int *)(pFVar9 + 0xc));
    memcpy(*(void **)pFVar9,FVar2.Data,(longlong)local_1a0.Data.ArrayNum * 2);
  }
  local_158 = &local_190;
  local_150 = local_1a8;
  TSet<TTuple<char_const_*,unsigned_int>,TDefaultMapHashableKeyFuncs<char_const_*,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<char_const_*_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<char_const_*,unsigned_int>,TDefaultMapHashableKeyFuncs<char_const_*,unsigned_int,0>,FDefaultSetAllocator>
              *)&CharPtrToStringIndex,&local_180,(bool *)&local_158);
  uVar6 = local_1a8[0];
LAB_14194c86e:
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  return uVar6;
}

