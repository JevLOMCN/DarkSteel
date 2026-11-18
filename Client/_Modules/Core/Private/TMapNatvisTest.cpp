// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Run @ 1415ec300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
TMapNatvisTest<`anonymous_namespace'::FCompactSetResolver>::Run
          (TMapNatvisTest<_anonymous_namespace_::FCompactSetResolver> *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ForAnyElementType *pFVar10;
  sbyte sVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint *puVar15;
  wchar_t *pwVar16;
  int iVar17;
  ulonglong uVar18;
  void *_Dst;
  ForAnyElementType *pFVar19;
  undefined1 auStackY_408 [32];
  int local_3d8 [2];
  void *local_3d0;
  undefined8 local_3c8;
  FString local_3c0;
  ForAnyElementType local_3b0;
  int local_3a8 [2];
  ForAnyElementType local_3a0;
  int local_398 [2];
  ForAnyElementType local_390;
  int local_388 [2];
  ForAnyElementType local_380;
  int local_378 [2];
  ForAnyElementType local_370;
  int local_368 [2];
  ForAnyElementType local_360;
  int local_358 [2];
  ForAnyElementType local_350;
  int local_348 [2];
  ForAnyElementType local_340;
  int local_338 [2];
  FString local_330;
  ForAnyElementType local_320;
  int local_318 [2];
  ForAnyElementType local_310;
  int local_308 [2];
  ForAnyElementType local_300;
  int local_2f8 [2];
  ForAnyElementType local_2f0;
  int local_2e8 [2];
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  TCompactSetBase<TSizedDefaultAllocator<32>_> local_2b0;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  int local_294 [17];
  void *local_250;
  int local_248;
  ForAnyElementType *local_240;
  ForAnyElementType *local_238;
  ForAnyElementType *local_230;
  ForAnyElementType *local_228;
  ForAnyElementType *local_220;
  TCompactSetBase<TSizedDefaultAllocator<32>_> local_218;
  void *local_208;
  undefined8 local_200;
  FCompactSetLayout local_1f8;
  ForElementType<unsigned_char> local_1f0;
  FCompactSetLayout local_1e8;
  int local_1e0 [2];
  int local_1d8 [2];
  int local_1d0 [2];
  int local_1c8 [2];
  int local_1c0 [2];
  initializer_list<TPairInitializer<FString_const_&,int_const_&>_> local_1b8;
  initializer_list<TPairInitializer<FString_const_&,int_const_&>_> local_1a8;
  initializer_list<TPairInitializer<FString_const_&,int_const_&>_> local_198;
  ForAnyElementType **local_188;
  int *local_180;
  ForAnyElementType **local_178;
  int *local_170;
  ForAnyElementType **local_168;
  int *local_160;
  ForAnyElementType **local_158;
  int *local_150;
  ForAnyElementType **local_148;
  int *local_140;
  void *local_138 [2];
  TPairInitializer<FString_const_&,int_const_&> local_128;
  ForAnyElementType *local_118;
  int *local_110;
  ForAnyElementType *local_108;
  int *local_100;
  ForAnyElementType *local_f8;
  int *local_f0;
  ForAnyElementType *local_e8;
  int *local_e0;
  TPairInitializer<FString_const_&,int_const_&> local_d8;
  ForAnyElementType *local_c8;
  undefined4 *local_c0;
  ForAnyElementType *local_b8;
  undefined4 *local_b0;
  ForAnyElementType *local_a8;
  int *local_a0;
  ForAnyElementType *local_98;
  undefined4 *local_90;
  TPairInitializer<FString_const_&,int_const_&> local_88;
  ForAnyElementType *local_78;
  int *local_70;
  ForAnyElementType *local_68;
  int *local_60;
  ForAnyElementType *local_58;
  int *local_50;
  ForAnyElementType *local_48;
  int *local_40;
  TPairInitializer<FString_const_&,int_const_&> local_38;
  
  local_38.Key = (FString *)(__security_cookie.value ^ (ulonglong)auStackY_408);
  uVar18 = 0;
  local_208 = (void *)0x0;
  local_200 = 0;
  local_2b0.Elements = (ForElementType<unsigned_char>)0x0;
  local_2b0.NumElements = 0;
  local_2b0.MaxElements = 0;
  local_1e8.Size = 0x18;
  local_1e8.Alignment = 8;
  bVar7 = TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                    (&local_2b0,0x10,&local_1e8,true);
  if ((bVar7) && (iVar13 = local_2b0.MaxElements, 0 < local_2b0.MaxElements)) {
    local_1f0 = local_2b0.Elements;
    puVar15 = (uint *)((ulonglong)(uint)(local_2b0.MaxElements * 0x18) +
                      (longlong)local_2b0.Elements);
    uVar9 = *puVar15;
    sVar11 = (0xffU < (uint)local_2b0.MaxElements) + (0xffffU < (uint)local_2b0.MaxElements);
    _Dst = (void *)((longlong)puVar15 + ((ulonglong)(uint)local_2b0.MaxElements << sVar11) + 4);
    memset(_Dst,0xff,(ulonglong)uVar9 << sVar11);
    iVar6 = local_2b0.NumElements;
    if (0 < local_2b0.NumElements) {
      iVar12 = 0;
      if (0xffff < (uint)iVar13) {
        iVar12 = 2;
      }
      iVar12 = (0xff < (uint)iVar13) + 1 + iVar12;
      local_3d8[0] = iVar12;
      do {
        iVar17 = (int)uVar18;
        iVar2 = *(int *)((longlong)local_1f0 + 8 + (longlong)iVar17 * 0x18);
        iVar13 = iVar2 + -1;
        if (iVar2 == 0) {
          pwVar16 = L"";
          iVar13 = 0;
        }
        else {
          pwVar16 = *(wchar_t **)((longlong)local_1f0 + (longlong)iVar17 * 0x18);
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar16);
        if (iVar12 == 1) {
          uVar14 = (ulonglong)(uVar8 & uVar9 - 1);
          *(undefined1 *)((longlong)puVar15 + uVar18 + 4) = *(undefined1 *)(uVar14 + (longlong)_Dst)
          ;
          *(char *)(uVar14 + (longlong)_Dst) = (char)uVar18;
        }
        else if (iVar12 == 2) {
          uVar14 = (ulonglong)(uVar9 - 1 & uVar8);
          *(undefined2 *)((longlong)puVar15 + uVar18 * 2 + 4) =
               *(undefined2 *)((longlong)_Dst + uVar14 * 2);
          *(short *)((longlong)_Dst + uVar14 * 2) = (short)uVar18;
        }
        else if (iVar12 == 4) {
          uVar14 = (ulonglong)(uVar9 - 1 & uVar8);
          puVar15[uVar18 + 1] = *(uint *)((longlong)_Dst + uVar14 * 4);
          *(int *)((longlong)_Dst + uVar14 * 4) = iVar17;
        }
        else {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                             ,0x171,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar18 = (ulonglong)(iVar17 + 1U);
      } while ((int)(iVar17 + 1U) < iVar6);
    }
  }
  pFVar19 = (ForAnyElementType *)0x0;
  local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c0.Data.ArrayNum = 0;
  local_3c0.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_3c0,0,&local_3c0.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_3c0,&local_3c0.Data.ArrayNum,&local_3c0.Data.ArrayMax
            );
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_3c0.Data.AllocatorInstance.Data,2,"d",2);
  local_128.Key = &local_3c0;
  local_3d8[0] = 1;
  local_128.Value = local_3d8;
  local_3b0.Data = (FScriptContainerElement *)0x0;
  local_3a8[0] = 0;
  local_3a8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_3b0,0,local_3a8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_3b0,local_3a8,local_3a8 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_3b0.Data,2,"a",2);
  local_118 = &local_3b0;
  local_294[0xb] = 2;
  local_110 = local_294 + 0xb;
  local_3a0.Data = (FScriptContainerElement *)0x0;
  local_398[0] = 0;
  local_398[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_3a0,0,local_398 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_3a0,local_398,local_398 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_3a0.Data,2,"b",2);
  local_108 = &local_3a0;
  local_294[0xc] = 3;
  local_100 = local_294 + 0xc;
  local_390.Data = (FScriptContainerElement *)0x0;
  local_388[0] = 0;
  local_388[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_390,0,local_388 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_390,local_388,local_388 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_390.Data,2,"e",2);
  local_f8 = &local_390;
  local_294[0xd] = 4;
  local_f0 = local_294 + 0xd;
  local_380.Data = (FScriptContainerElement *)0x0;
  local_378[0] = 0;
  local_378[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_380,0,local_378 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_380,local_378,local_378 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_380.Data,2,"c",2);
  local_e8 = &local_380;
  local_294[0xe] = 5;
  local_e0 = local_294 + 0xe;
  local_1b8._First = &local_128;
  local_1b8._Last = &local_d8;
  TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
  TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
            ((TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
              *)local_138,&local_1b8);
  if (local_380.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data);
  }
  if (local_390.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data);
  }
  if (local_3a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data);
  }
  if (local_3b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data);
  }
  if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
  }
  local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_330.Data.ArrayNum = 0;
  local_330.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_330,0,&local_330.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_330,&local_330.Data.ArrayNum,&local_330.Data.ArrayMax
            );
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_330.Data.AllocatorInstance.Data,2,"d",2);
  local_d8.Key = &local_330;
  local_294[0xf] = 1;
  local_d8.Value = local_294 + 0xf;
  local_320.Data = (FScriptContainerElement *)0x0;
  local_318[0] = 0;
  local_318[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_320,0,local_318 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_320,local_318,local_318 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_320.Data,2,"a",2);
  local_c8 = &local_320;
  local_2a0 = 2;
  local_c0 = &local_2a0;
  local_350.Data = (FScriptContainerElement *)0x0;
  local_348[0] = 0;
  local_348[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_350,0,local_348 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_350,local_348,local_348 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_350.Data,2,"b",2);
  local_b8 = &local_350;
  local_29c = 3;
  local_b0 = &local_29c;
  local_310.Data = (FScriptContainerElement *)0x0;
  local_308[0] = 0;
  local_308[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_310,0,local_308 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_310,local_308,local_308 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_310.Data,2,"e",2);
  local_a8 = &local_310;
  local_294[10] = 4;
  local_a0 = local_294 + 10;
  local_300.Data = (FScriptContainerElement *)0x0;
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_300,0,local_2f8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_300,local_2f8,local_2f8 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_300.Data,2,"c",2);
  local_98 = &local_300;
  local_298 = 5;
  local_90 = &local_298;
  local_1a8._First = &local_d8;
  local_1a8._Last = &local_88;
  TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
  TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
            ((TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
              *)&local_218,&local_1a8);
  if (local_300.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data);
  }
  if (local_310.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data);
  }
  if (local_350.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data);
  }
  if (local_320.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data);
  }
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  if ((uint)local_218.MaxElements < 0x10) {
    local_1f8.Size = 0x18;
    local_1f8.Alignment = 8;
    bVar7 = TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                      (&local_218,0x10,&local_1f8,true);
    if (bVar7) {
      TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
      ::Rehash((TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
                *)&local_218);
    }
  }
  local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e0.Data.ArrayNum = 0;
  local_2e0.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2e0,0,&local_2e0.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2e0,&local_2e0.Data.ArrayNum,&local_2e0.Data.ArrayMax
            );
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2e0.Data.AllocatorInstance.Data,2,"d",2);
  local_88.Key = &local_2e0;
  local_294[0] = 1;
  local_88.Value = local_294;
  local_2f0.Data = (FScriptContainerElement *)0x0;
  local_2e8[0] = 0;
  local_2e8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_2f0,0,local_2e8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_2f0,local_2e8,local_2e8 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_2f0.Data,2,"a",2);
  local_78 = &local_2f0;
  local_294[1] = 2;
  local_70 = local_294 + 1;
  local_370.Data = (FScriptContainerElement *)0x0;
  local_368[0] = 0;
  local_368[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_370,0,local_368 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_370,local_368,local_368 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_370.Data,2,"b",2);
  local_68 = &local_370;
  local_294[2] = 3;
  local_60 = local_294 + 2;
  local_360.Data = (FScriptContainerElement *)0x0;
  local_358[0] = 0;
  local_358[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_360,0,local_358 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_360,local_358,local_358 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_360.Data,2,"e",2);
  local_58 = &local_360;
  local_294[3] = 4;
  local_50 = local_294 + 3;
  local_340.Data = (FScriptContainerElement *)0x0;
  local_338[0] = 0;
  local_338[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_340,0,local_338 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_340,local_338,local_338 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_340.Data,2,"c",2);
  local_48 = &local_340;
  local_294[4] = 5;
  local_40 = local_294 + 4;
  local_198._First = &local_88;
  local_198._Last = &local_38;
  TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
  TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
            ((TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
              *)&local_250,&local_198);
  if (local_340.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data);
  }
  if (local_360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data);
  }
  if (local_370.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data);
  }
  if (local_2f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data);
  }
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d0.Data.ArrayNum = 0;
  local_2d0.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2d0,0,&local_2d0.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2d0,&local_2d0.Data.ArrayNum,&local_2d0.Data.ArrayMax
            );
  FVar5.Data = local_2d0.Data.AllocatorInstance.Data;
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2d0.Data.AllocatorInstance.Data,2,"a",2);
  iVar13 = local_248;
  if (local_248 != 0) {
    iVar13 = local_2d0.Data.ArrayNum + -1;
    FVar4.Data = FVar5.Data;
    if (local_2d0.Data.ArrayNum == 0) {
      iVar13 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar4.Data);
    TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
    ::RemoveImpl<FString,0>
              ((TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
                *)&local_250,uVar9,&local_2d0);
    iVar13 = local_248;
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.Data.ArrayNum = 0;
  local_2c0.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2c0,0,&local_2c0.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2c0,&local_2c0.Data.ArrayNum,&local_2c0.Data.ArrayMax
            );
  FVar5.Data = local_2c0.Data.AllocatorInstance.Data;
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2c0.Data.AllocatorInstance.Data,2,"e",2);
  if (iVar13 != 0) {
    iVar13 = local_2c0.Data.ArrayNum + -1;
    FVar4.Data = FVar5.Data;
    if (local_2c0.Data.ArrayNum == 0) {
      iVar13 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar4.Data);
    TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
    ::RemoveImpl<FString,0>
              ((TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
                *)&local_250,uVar9,&local_2c0);
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  local_3d0 = (void *)0x0;
  local_3c8 = 0;
  TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
  ::Reserve((TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
             *)&local_3d0,5);
  local_294[5] = 1;
  pFVar10 = ::operator_new(0x10);
  local_220 = pFVar19;
  if (pFVar10 != (ForAnyElementType *)0x0) {
    piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
    pFVar10->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar10[1].Data = 0;
    *piVar1 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar10,0,piVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar10,(int *)(pFVar10 + 1),piVar1);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar10->Data,2,"d",2);
    local_220 = pFVar10;
  }
  local_188 = &local_220;
  local_180 = local_294 + 5;
  TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
              *)&local_3d0,(EInPlace)local_1c0,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)0x0);
  if (((local_1c0[0] < 0) || ((int)local_3c8 <= local_1c0[0])) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidId(Id)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x265,L"Array index out of bounds: %d into an array of size %lld"), bVar7)
     ) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar10 = local_220;
  if (local_220 != (ForAnyElementType *)0x0) {
    if (local_220->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220->Data);
    }
    ::operator_delete(pFVar10,0x10);
  }
  local_294[6] = 2;
  pFVar10 = ::operator_new(0x10);
  local_228 = pFVar19;
  if (pFVar10 != (ForAnyElementType *)0x0) {
    piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
    pFVar10->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar10[1].Data = 0;
    *piVar1 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar10,0,piVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar10,(int *)(pFVar10 + 1),piVar1);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar10->Data,2,"a",2);
    local_228 = pFVar10;
  }
  local_178 = &local_228;
  local_170 = local_294 + 6;
  TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
              *)&local_3d0,(EInPlace)local_1c8,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)0x0);
  if (((local_1c8[0] < 0) || ((int)local_3c8 <= local_1c8[0])) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidId(Id)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x265,L"Array index out of bounds: %d into an array of size %lld"), bVar7)
     ) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar10 = local_228;
  if (local_228 != (ForAnyElementType *)0x0) {
    if (local_228->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228->Data);
    }
    ::operator_delete(pFVar10,0x10);
  }
  local_294[7] = 3;
  pFVar10 = ::operator_new(0x10);
  local_230 = pFVar19;
  if (pFVar10 != (ForAnyElementType *)0x0) {
    piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
    pFVar10->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar10[1].Data = 0;
    *piVar1 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar10,0,piVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar10,(int *)(pFVar10 + 1),piVar1);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar10->Data,2,"b",2);
    local_230 = pFVar10;
  }
  local_168 = &local_230;
  local_160 = local_294 + 7;
  TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
              *)&local_3d0,(EInPlace)local_1d0,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)0x0);
  if (((local_1d0[0] < 0) || ((int)local_3c8 <= local_1d0[0])) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidId(Id)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x265,L"Array index out of bounds: %d into an array of size %lld"), bVar7)
     ) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar10 = local_230;
  if (local_230 != (ForAnyElementType *)0x0) {
    if (local_230->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230->Data);
    }
    ::operator_delete(pFVar10,0x10);
  }
  local_294[8] = 4;
  pFVar10 = ::operator_new(0x10);
  local_238 = pFVar19;
  if (pFVar10 != (ForAnyElementType *)0x0) {
    piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
    pFVar10->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar10[1].Data = 0;
    *piVar1 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar10,0,piVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar10,(int *)(pFVar10 + 1),piVar1);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar10->Data,2,"e",2);
    local_238 = pFVar10;
  }
  local_158 = &local_238;
  local_150 = local_294 + 8;
  TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
              *)&local_3d0,(EInPlace)local_1d8,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)0x0);
  if (((local_1d8[0] < 0) || ((int)local_3c8 <= local_1d8[0])) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidId(Id)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x265,L"Array index out of bounds: %d into an array of size %lld"), bVar7)
     ) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar10 = local_238;
  if (local_238 != (ForAnyElementType *)0x0) {
    if (local_238->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238->Data);
    }
    ::operator_delete(pFVar10,0x10);
  }
  local_294[9] = 5;
  pFVar10 = ::operator_new(0x10);
  if (pFVar10 != (ForAnyElementType *)0x0) {
    piVar1 = (int *)((longlong)&pFVar10[1].Data + 4);
    pFVar10->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar10[1].Data = 0;
    *piVar1 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar10,0,piVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar10,(int *)(pFVar10 + 1),piVar1);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar10->Data,2,"c",2);
    pFVar19 = pFVar10;
  }
  local_148 = &local_240;
  local_140 = local_294 + 9;
  local_240 = pFVar19;
  TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
              *)&local_3d0,(EInPlace)local_1e0,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)0x0);
  if (((local_1e0[0] < 0) || ((int)local_3c8 <= local_1e0[0])) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidId(Id)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x265,L"Array index out of bounds: %d into an array of size %lld"), bVar7)
     ) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar19 = local_240;
  if (local_240 != (ForAnyElementType *)0x0) {
    if (local_240->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240->Data);
    }
    ::operator_delete(pFVar19,0x10);
  }
  PlaceBreakpointHere();
  TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
  ::Empty((TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
           *)&local_3d0,0);
  if (local_3d0 != (void *)0x0) {
    FMemory::Free(local_3d0);
  }
  TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
  ::Empty((TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
           *)&local_250,0);
  if (local_250 != (void *)0x0) {
    FMemory::Free(local_250);
  }
  TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
  ::Empty((TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
           *)&local_218,0);
  if (local_218.Elements != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_218.Elements);
  }
  TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
  ::Empty((TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
           *)local_138,0);
  if (local_138[0] != (void *)0x0) {
    FMemory::Free(local_138[0]);
  }
  TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
  ::Empty((TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
           *)&local_2b0,0);
  if (local_2b0.Elements != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_2b0.Elements);
  }
  TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
  ::Empty((TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
           *)&local_208,0);
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  return;
}

// Run @ 1415ed6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
TMapNatvisTest<`anonymous_namespace'::FSetResolver>::Run
          (TMapNatvisTest<_anonymous_namespace_::FSetResolver> *this)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  ForAnyElementType *pFVar6;
  ForAnyElementType *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStackY_308 [32];
  undefined1 local_2d8 [16];
  int local_2c8 [2];
  undefined1 local_2c0 [16];
  FString local_2b0;
  TBitArray<FDefaultBitArrayAllocator> local_2a0;
  undefined1 local_280 [24];
  initializer_list<TPairInitializer<FString_const_&,int_const_&>_> local_268;
  undefined1 local_258 [8];
  undefined1 local_250 [20];
  int iStack_23c;
  ForElementType<unsigned_int> *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  undefined1 *local_220;
  FString *local_218;
  undefined1 *local_210;
  void *local_208;
  undefined8 local_200;
  TBitArray<FDefaultBitArrayAllocator> local_1f8;
  undefined4 local_1d8;
  undefined4 local_1d4;
  ForElementType<FSetElementId> local_1c8;
  int local_1c0;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1b8;
  FScriptContainerElement local_180 [8];
  ForAnyElementType local_178;
  uint local_170;
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_168;
  undefined8 local_128;
  undefined4 local_120;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
  local_118;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator> local_c8
  ;
  undefined1 local_78 [72];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pFVar13 = (ForAnyElementType *)0x0;
  local_168._0_8_ = 0;
  local_168._8_8_ = 0;
  local_168._32_8_ = 0;
  local_168._40_4_ = 0;
  local_168._44_4_ = 0x80;
  local_168._48_4_ = 0xffffffff;
  local_168._52_4_ = 0;
  local_128 = 0;
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  local_1b8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1b8.AllocationFlags.NumBits = 0;
  local_1b8.AllocationFlags.MaxBits = 0x80;
  local_1b8.FirstFreeIndex = -1;
  local_1b8.NumFreeIndices = 0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_1b8,0x10);
  for (lVar1 = 0x3f; 0x1fUL >> lVar1 == 0; lVar1 = lVar1 + -1) {
  }
  uVar11 = 1 << ((byte)lVar1 & 0x1f);
  if ((local_170 != 0) && ((int)uVar11 <= (int)local_170)) goto LAB_1415ed92b;
  local_170 = uVar11;
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,0,4);
  }
  if (uVar11 != 0) {
    uVar14 = uVar11;
    if (uVar11 < 2) {
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        uVar14 = 0;
        goto LAB_1415ed80a;
      }
    }
    else {
LAB_1415ed80a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar14,4);
    }
    if (0 < (int)uVar11) {
      uVar15 = (ulonglong)uVar11;
      pFVar7 = pFVar13;
      do {
        FVar9.Data = local_180;
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_178.Data;
        }
        uVar5 = (ulonglong)pFVar7 & (longlong)(int)uVar11 - 1U;
        pFVar7 = (ForAnyElementType *)((longlong)&pFVar7->Data + 1);
        *(undefined4 *)(FVar9.Data + uVar5 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  if (local_170 != 0) {
    TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TConstIterator::TConstIterator
              ((TConstIterator *)local_258,
               (TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_1b8);
    iVar4 = iStack_23c;
    if (iStack_23c < *(int *)(local_250._8_8_ + 0x18)) {
      do {
        pFVar12 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_258)->AllocatorInstance).
                  Data + (longlong)iVar4 * 0x20;
        if (*(int *)(pFVar12 + 8) == 0) {
          pwVar10 = L"";
          iVar8 = 0;
        }
        else {
          pwVar10 = *(wchar_t **)pFVar12;
          iVar8 = *(int *)(pFVar12 + 8) + -1;
        }
        uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar10);
        uVar11 = local_170 - 1 & uVar11;
        *(uint *)(pFVar12 + 0x1c) = uVar11;
        FVar9.Data = local_180;
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_178.Data;
        }
        uVar15 = (longlong)(int)local_170 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(pFVar12 + 0x18) = *(undefined4 *)(FVar9.Data + uVar15 * 4);
        *(int *)(FVar9.Data + uVar15 * 4) = iVar4;
        local_250._16_4_ = local_250._16_4_ & ~local_250._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_250);
        iVar4 = iStack_23c;
      } while (iStack_23c < *(int *)(local_250._8_8_ + 0x18));
    }
  }
LAB_1415ed92b:
  local_2d8._8_8_ = (wchar_t *)0x0;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),0,local_2c8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),local_2c8,local_2c8 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_2d8._8_8_,2,"d",2);
  local_280._16_4_ = 1;
  local_258 = (undefined1  [8])(local_2d8 + 8);
  local_280._0_8_ = (FScriptContainerElement *)0x0;
  local_250._0_8_ = local_280 + 0x10;
  local_280[8] = '\0';
  local_280[9] = '\0';
  local_280[10] = '\0';
  local_280[0xb] = '\0';
  local_280[0xc] = '\0';
  local_280[0xd] = '\0';
  local_280[0xe] = '\0';
  local_280[0xf] = '\0';
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)local_280,0,(int *)(local_280 + 0xc));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)local_280,(int *)(local_280 + 8),(int *)(local_280 + 0xc));
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_280._0_8_,2,"a",2);
  local_280._20_4_ = 2;
  local_250._8_8_ = local_280;
  local_2a0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  unique0x00008e00 = local_280 + 0x14;
  local_2a0.NumBits = 0;
  local_2a0.MaxBits = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0.AllocatorInstance.SecondaryData,0,
             &local_2a0.MaxBits);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0.AllocatorInstance.SecondaryData,
             &local_2a0.NumBits,&local_2a0.MaxBits);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2a0.AllocatorInstance.SecondaryData,2,"b",2);
  local_2c0._8_4_ = 3;
  local_238 = &local_2a0.AllocatorInstance.SecondaryData;
  local_2a0.AllocatorInstance.InlineData._0_8_ = (FScriptContainerElement *)0x0;
  local_230 = local_2c0 + 8;
  local_2a0.AllocatorInstance.InlineData[8] = '\0';
  local_2a0.AllocatorInstance.InlineData[9] = '\0';
  local_2a0.AllocatorInstance.InlineData[10] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xb] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xc] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xd] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xe] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xf] = '\0';
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0,0,
             (int *)(local_2a0.AllocatorInstance.InlineData + 0xc));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0,(int *)((longlong)&local_2a0 + 8),
             (int *)(local_2a0.AllocatorInstance.InlineData + 0xc));
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2a0.AllocatorInstance.InlineData._0_8_,2,"e",2);
  local_2c0._0_4_ = 4;
  local_228 = (undefined1 *)&local_2a0;
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220 = local_2c0;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2b0,0,&local_2b0.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2b0,&local_2b0.Data.ArrayNum,&local_2b0.Data.ArrayMax
            );
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2b0.Data.AllocatorInstance.Data,2,"c",2);
  local_218 = &local_2b0;
  local_2d8._0_4_ = 5;
  local_210 = local_2d8;
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)local_258;
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)&local_208;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
            ((TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *)
             local_78,&local_268);
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_2a0.AllocatorInstance.InlineData._0_8_ !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2a0.AllocatorInstance.InlineData._0_8_);
  }
  if (local_2a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2a0.AllocatorInstance.SecondaryData);
  }
  if ((FScriptContainerElement *)local_280._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_280._0_8_);
  }
  if ((wchar_t *)local_2d8._8_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2d8._8_8_);
  }
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2b0,0,&local_2b0.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2b0,&local_2b0.Data.ArrayNum,&local_2b0.Data.ArrayMax
            );
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2b0.Data.AllocatorInstance.Data,2,"d",2);
  local_2d8._0_4_ = 1;
  local_258 = (undefined1  [8])&local_2b0;
  local_2a0.AllocatorInstance.InlineData._0_8_ = (FScriptContainerElement *)0x0;
  local_250._0_8_ = local_2d8;
  local_2a0.AllocatorInstance.InlineData[8] = '\0';
  local_2a0.AllocatorInstance.InlineData[9] = '\0';
  local_2a0.AllocatorInstance.InlineData[10] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xb] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xc] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xd] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xe] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xf] = '\0';
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0,0,
             (int *)(local_2a0.AllocatorInstance.InlineData + 0xc));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0,(int *)((longlong)&local_2a0 + 8),
             (int *)(local_2a0.AllocatorInstance.InlineData + 0xc));
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2a0.AllocatorInstance.InlineData._0_8_,2,"a",2);
  local_2c0._0_4_ = 2;
  local_250._8_8_ = &local_2a0;
  local_2a0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  unique0x00009c00 = local_2c0;
  local_2a0.NumBits = 0;
  local_2a0.MaxBits = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0.AllocatorInstance.SecondaryData,0,
             &local_2a0.MaxBits);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0.AllocatorInstance.SecondaryData,
             &local_2a0.NumBits,&local_2a0.MaxBits);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2a0.AllocatorInstance.SecondaryData,2,"b",2);
  local_2c0._8_4_ = 3;
  local_238 = &local_2a0.AllocatorInstance.SecondaryData;
  local_280._0_8_ = (FScriptContainerElement *)0x0;
  local_230 = local_2c0 + 8;
  local_280[8] = '\0';
  local_280[9] = '\0';
  local_280[10] = '\0';
  local_280[0xb] = '\0';
  local_280[0xc] = '\0';
  local_280[0xd] = '\0';
  local_280[0xe] = '\0';
  local_280[0xf] = '\0';
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)local_280,0,(int *)(local_280 + 0xc));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)local_280,(int *)(local_280 + 8),(int *)(local_280 + 0xc));
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_280._0_8_,2,"e",2);
  local_280._20_4_ = 4;
  local_228 = local_280;
  local_2d8._8_8_ = (wchar_t *)0x0;
  local_220 = local_280 + 0x14;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),0,local_2c8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),local_2c8,local_2c8 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_2d8._8_8_,2,"c",2);
  local_218 = (FString *)(local_2d8 + 8);
  local_280._16_4_ = 5;
  local_210 = local_280 + 0x10;
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)local_258;
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)&local_208;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
            ((TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *)
             &local_c8,&local_268);
  if ((wchar_t *)local_2d8._8_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2d8._8_8_);
  }
  if ((FScriptContainerElement *)local_280._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_280._0_8_);
  }
  if (local_2a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2a0.AllocatorInstance.SecondaryData);
  }
  if ((FScriptContainerElement *)local_2a0.AllocatorInstance.InlineData._0_8_ !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2a0.AllocatorInstance.InlineData._0_8_);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if ((uint)(local_c8.Elements._8_4_ - local_c8.Elements._52_4_) < 0x10) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&local_c8,0x10);
    for (lVar1 = 0x3f; 0x1fUL >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
    if ((local_c8.HashSize == 0) || (local_c8.HashSize < iVar4)) {
      local_c8.HashSize = iVar4;
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      Rehash(&local_c8);
    }
  }
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2b0,0,&local_2b0.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2b0,&local_2b0.Data.ArrayNum,&local_2b0.Data.ArrayMax
            );
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2b0.Data.AllocatorInstance.Data,2,"d",2);
  local_2d8._0_4_ = 1;
  local_258 = (undefined1  [8])&local_2b0;
  local_2a0.AllocatorInstance.InlineData._0_8_ = (FScriptContainerElement *)0x0;
  local_250._0_8_ = local_2d8;
  local_2a0.AllocatorInstance.InlineData[8] = '\0';
  local_2a0.AllocatorInstance.InlineData[9] = '\0';
  local_2a0.AllocatorInstance.InlineData[10] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xb] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xc] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xd] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xe] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xf] = '\0';
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0,0,
             (int *)(local_2a0.AllocatorInstance.InlineData + 0xc));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0,(int *)((longlong)&local_2a0 + 8),
             (int *)(local_2a0.AllocatorInstance.InlineData + 0xc));
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2a0.AllocatorInstance.InlineData._0_8_,2,"a",2);
  local_2c0._0_4_ = 2;
  local_250._8_8_ = &local_2a0;
  local_2a0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  unique0x00009c00 = local_2c0;
  local_2a0.NumBits = 0;
  local_2a0.MaxBits = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0.AllocatorInstance.SecondaryData,0,
             &local_2a0.MaxBits);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0.AllocatorInstance.SecondaryData,
             &local_2a0.NumBits,&local_2a0.MaxBits);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2a0.AllocatorInstance.SecondaryData,2,"b",2);
  local_2c0._8_4_ = 3;
  local_238 = &local_2a0.AllocatorInstance.SecondaryData;
  local_280._0_8_ = (FScriptContainerElement *)0x0;
  local_230 = local_2c0 + 8;
  local_280[8] = '\0';
  local_280[9] = '\0';
  local_280[10] = '\0';
  local_280[0xb] = '\0';
  local_280[0xc] = '\0';
  local_280[0xd] = '\0';
  local_280[0xe] = '\0';
  local_280[0xf] = '\0';
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)local_280,0,(int *)(local_280 + 0xc));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)local_280,(int *)(local_280 + 8),(int *)(local_280 + 0xc));
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_280._0_8_,2,"e",2);
  local_280._20_4_ = 4;
  local_228 = local_280;
  local_2d8._8_8_ = (wchar_t *)0x0;
  local_220 = local_280 + 0x14;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),0,local_2c8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),local_2c8,local_2c8 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_2d8._8_8_,2,"c",2);
  local_218 = (FString *)(local_2d8 + 8);
  local_280._16_4_ = 5;
  local_210 = local_280 + 0x10;
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)local_258;
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)&local_208;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
            ((TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *)
             &local_118,&local_268);
  if ((wchar_t *)local_2d8._8_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2d8._8_8_);
  }
  if ((FScriptContainerElement *)local_280._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_280._0_8_);
  }
  if (local_2a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2a0.AllocatorInstance.SecondaryData);
  }
  if ((FScriptContainerElement *)local_2a0.AllocatorInstance.InlineData._0_8_ !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2a0.AllocatorInstance.InlineData._0_8_);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  local_2d8._8_8_ = (wchar_t *)0x0;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),0,local_2c8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),local_2c8,local_2c8 + 1);
  uVar3 = local_2d8._8_8_;
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_2d8._8_8_,2,"a",2);
  if (local_118.Elements._8_4_ != local_118.Elements._52_4_) {
    iVar4 = local_2c8[0] + -1;
    pwVar10 = (wchar_t *)uVar3;
    if (local_2c8[0] == 0) {
      iVar4 = 0;
      pwVar10 = L"";
    }
    uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar10);
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    RemoveImpl<FString>(&local_118,uVar11,(FString *)(local_2d8 + 8));
  }
  if ((wchar_t *)uVar3 != (wchar_t *)0x0) {
    FMemory::Free((void *)uVar3);
  }
  local_2d8._8_8_ = (wchar_t *)0x0;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),0,local_2c8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),local_2c8,local_2c8 + 1);
  uVar3 = local_2d8._8_8_;
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_2d8._8_8_,2,"e",2);
  if (local_118.Elements._8_4_ != local_118.Elements._52_4_) {
    iVar4 = local_2c8[0] + -1;
    pwVar10 = (wchar_t *)uVar3;
    if (local_2c8[0] == 0) {
      iVar4 = 0;
      pwVar10 = L"";
    }
    uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar10);
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    RemoveImpl<FString>(&local_118,uVar11,(FString *)(local_2d8 + 8));
  }
  if ((wchar_t *)uVar3 != (wchar_t *)0x0) {
    FMemory::Free((void *)uVar3);
  }
  local_208 = (void *)0x0;
  local_200 = 0;
  local_1f8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1f8.NumBits = 0;
  local_1f8.MaxBits = 0x80;
  local_1d8 = 0xffffffff;
  local_1d4 = 0;
  local_1c8 = (ForElementType<FSetElementId>)0x0;
  local_1c0 = 0;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&local_208,5);
  for (lVar1 = 0x3f; 0x13UL >> lVar1 == 0; lVar1 = lVar1 + -1) {
  }
  iVar4 = 1 << ((byte)lVar1 & 0x1f);
  if ((local_1c0 == 0) || (local_1c0 < iVar4)) {
    local_1c0 = iVar4;
    TSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSetAllocator>
              *)&local_208);
  }
  local_2d8._0_4_ = 1;
  pFVar6 = ::operator_new(0x10);
  pFVar7 = pFVar13;
  if (pFVar6 != (ForAnyElementType *)0x0) {
    piVar2 = (int *)((longlong)&pFVar6[1].Data + 4);
    pFVar6->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar6[1].Data = 0;
    *piVar2 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,0,piVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,(int *)(pFVar6 + 1),piVar2);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar6->Data,2,"d",2);
    pFVar7 = pFVar6;
  }
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)(local_2c0 + 8);
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)local_2d8;
  local_2c0._8_8_ = pFVar7;
  TSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSetAllocator>
              *)&local_208,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)local_2c0,
             (bool *)&local_268);
  uVar3 = local_2c0._8_8_;
  if ((ForAnyElementType *)local_2c0._8_8_ != (ForAnyElementType *)0x0) {
    if (*(FScriptContainerElement **)local_2c0._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free(*(FScriptContainerElement **)local_2c0._8_8_);
    }
    ::operator_delete((void *)uVar3,0x10);
  }
  local_2d8._0_4_ = 2;
  pFVar6 = ::operator_new(0x10);
  pFVar7 = pFVar13;
  if (pFVar6 != (ForAnyElementType *)0x0) {
    piVar2 = (int *)((longlong)&pFVar6[1].Data + 4);
    pFVar6->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar6[1].Data = 0;
    *piVar2 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,0,piVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,(int *)(pFVar6 + 1),piVar2);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar6->Data,2,"a",2);
    pFVar7 = pFVar6;
  }
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)(local_2c0 + 8);
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)local_2d8;
  local_2c0._8_8_ = pFVar7;
  TSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSetAllocator>
              *)&local_208,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)local_2c0,
             (bool *)&local_268);
  uVar3 = local_2c0._8_8_;
  if ((ForAnyElementType *)local_2c0._8_8_ != (ForAnyElementType *)0x0) {
    if (*(FScriptContainerElement **)local_2c0._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free(*(FScriptContainerElement **)local_2c0._8_8_);
    }
    ::operator_delete((void *)uVar3,0x10);
  }
  local_2d8._0_4_ = 3;
  pFVar6 = ::operator_new(0x10);
  pFVar7 = pFVar13;
  if (pFVar6 != (ForAnyElementType *)0x0) {
    piVar2 = (int *)((longlong)&pFVar6[1].Data + 4);
    pFVar6->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar6[1].Data = 0;
    *piVar2 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,0,piVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,(int *)(pFVar6 + 1),piVar2);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar6->Data,2,"b",2);
    pFVar7 = pFVar6;
  }
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)(local_2c0 + 8);
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)local_2d8;
  local_2c0._8_8_ = pFVar7;
  TSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSetAllocator>
              *)&local_208,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)local_2c0,
             (bool *)&local_268);
  uVar3 = local_2c0._8_8_;
  if ((ForAnyElementType *)local_2c0._8_8_ != (ForAnyElementType *)0x0) {
    if (*(FScriptContainerElement **)local_2c0._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free(*(FScriptContainerElement **)local_2c0._8_8_);
    }
    ::operator_delete((void *)uVar3,0x10);
  }
  local_2d8._0_4_ = 4;
  pFVar6 = ::operator_new(0x10);
  pFVar7 = pFVar13;
  if (pFVar6 != (ForAnyElementType *)0x0) {
    piVar2 = (int *)((longlong)&pFVar6[1].Data + 4);
    pFVar6->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar6[1].Data = 0;
    *piVar2 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,0,piVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,(int *)(pFVar6 + 1),piVar2);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar6->Data,2,"e",2);
    pFVar7 = pFVar6;
  }
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)(local_2c0 + 8);
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)local_2d8;
  local_2c0._8_8_ = pFVar7;
  TSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSetAllocator>
              *)&local_208,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)local_2c0,
             (bool *)&local_268);
  uVar3 = local_2c0._8_8_;
  if ((ForAnyElementType *)local_2c0._8_8_ != (ForAnyElementType *)0x0) {
    if (*(FScriptContainerElement **)local_2c0._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free(*(FScriptContainerElement **)local_2c0._8_8_);
    }
    ::operator_delete((void *)uVar3,0x10);
  }
  local_2d8._0_4_ = 5;
  pFVar7 = ::operator_new(0x10);
  if (pFVar7 != (ForAnyElementType *)0x0) {
    piVar2 = (int *)((longlong)&pFVar7[1].Data + 4);
    pFVar7->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar7[1].Data = 0;
    *piVar2 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar7,0,piVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar7,(int *)(pFVar7 + 1),piVar2);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar7->Data,2,"c",2);
    pFVar13 = pFVar7;
  }
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)(local_2c0 + 8);
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)local_2d8;
  local_2c0._8_8_ = pFVar13;
  TSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSetAllocator>
              *)&local_208,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)local_2c0,
             (bool *)&local_268);
  uVar3 = local_2c0._8_8_;
  if ((ForAnyElementType *)local_2c0._8_8_ != (ForAnyElementType *)0x0) {
    if (*(FScriptContainerElement **)local_2c0._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free(*(FScriptContainerElement **)local_2c0._8_8_);
    }
    ::operator_delete((void *)uVar3,0x10);
  }
  PlaceBreakpointHere();
  local_1c0 = 0;
  if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8);
  }
  TSparseArray<TSparseSetElement<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&local_208,0,(int)local_200);
  uVar15 = local_200 >> 0x20;
  local_200 = local_200 & 0xffffffff00000000;
  if ((int)uVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&local_208,0,(int *)((longlong)&local_200 + 4));
  }
  local_1d8 = 0xffffffff;
  local_1d4 = 0;
  local_1f8.NumBits = 0;
  if (0x80 < (uint)local_1f8.MaxBits) {
    local_1f8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1f8,0);
  }
  if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1f8.AllocatorInstance.SecondaryData);
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  local_118.HashSize = 0;
  if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_118.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_118.Elements);
  local_c8.HashSize = 0;
  if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.Elements);
  local_30 = 0;
  if ((void *)local_78._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  local_170 = 0;
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_1b8);
  local_120 = 0;
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_168);
  return;
}

// Run @ 1415ee9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
TMapNatvisTest<`anonymous_namespace'::FSparseSetResolver>::Run
          (TMapNatvisTest<_anonymous_namespace_::FSparseSetResolver> *this)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  ForAnyElementType *pFVar6;
  ForAnyElementType *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStackY_308 [32];
  undefined1 local_2d8 [16];
  int local_2c8 [2];
  undefined1 local_2c0 [16];
  FString local_2b0;
  TBitArray<FDefaultBitArrayAllocator> local_2a0;
  undefined1 local_280 [24];
  initializer_list<TPairInitializer<FString_const_&,int_const_&>_> local_268;
  undefined1 local_258 [8];
  undefined1 local_250 [20];
  int iStack_23c;
  ForElementType<unsigned_int> *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  undefined1 *local_220;
  FString *local_218;
  undefined1 *local_210;
  void *local_208;
  undefined8 local_200;
  TBitArray<FDefaultBitArrayAllocator> local_1f8;
  undefined4 local_1d8;
  undefined4 local_1d4;
  ForElementType<FSetElementId> local_1c8;
  int local_1c0;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1b8;
  FScriptContainerElement local_180 [8];
  ForAnyElementType local_178;
  uint local_170;
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_168;
  undefined8 local_128;
  undefined4 local_120;
  TSparseSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSparseSetAllocator>
  local_118;
  TSparseSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSparseSetAllocator>
  local_c8;
  undefined1 local_78 [72];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pFVar13 = (ForAnyElementType *)0x0;
  local_168._0_8_ = 0;
  local_168._8_8_ = 0;
  local_168._32_8_ = 0;
  local_168._40_4_ = 0;
  local_168._44_4_ = 0x80;
  local_168._48_4_ = 0xffffffff;
  local_168._52_4_ = 0;
  local_128 = 0;
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  local_1b8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1b8.AllocationFlags.NumBits = 0;
  local_1b8.AllocationFlags.MaxBits = 0x80;
  local_1b8.FirstFreeIndex = -1;
  local_1b8.NumFreeIndices = 0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_1b8,0x10);
  for (lVar1 = 0x3f; 0x1fUL >> lVar1 == 0; lVar1 = lVar1 + -1) {
  }
  uVar11 = 1 << ((byte)lVar1 & 0x1f);
  if ((local_170 != 0) && ((int)uVar11 <= (int)local_170)) goto LAB_1415eec3b;
  local_170 = uVar11;
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,0,4);
  }
  if (uVar11 != 0) {
    uVar14 = uVar11;
    if (uVar11 < 2) {
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        uVar14 = 0;
        goto LAB_1415eeb1a;
      }
    }
    else {
LAB_1415eeb1a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar14,4);
    }
    if (0 < (int)uVar11) {
      uVar15 = (ulonglong)uVar11;
      pFVar7 = pFVar13;
      do {
        FVar9.Data = local_180;
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_178.Data;
        }
        uVar5 = (ulonglong)pFVar7 & (longlong)(int)uVar11 - 1U;
        pFVar7 = (ForAnyElementType *)((longlong)&pFVar7->Data + 1);
        *(undefined4 *)(FVar9.Data + uVar5 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  if (local_170 != 0) {
    TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TConstIterator::TConstIterator
              ((TConstIterator *)local_258,
               (TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_1b8);
    iVar4 = iStack_23c;
    if (iStack_23c < *(int *)(local_250._8_8_ + 0x18)) {
      do {
        pFVar12 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_258)->AllocatorInstance).
                  Data + (longlong)iVar4 * 0x20;
        if (*(int *)(pFVar12 + 8) == 0) {
          pwVar10 = L"";
          iVar8 = 0;
        }
        else {
          pwVar10 = *(wchar_t **)pFVar12;
          iVar8 = *(int *)(pFVar12 + 8) + -1;
        }
        uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar10);
        uVar11 = local_170 - 1 & uVar11;
        *(uint *)(pFVar12 + 0x1c) = uVar11;
        FVar9.Data = local_180;
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_178.Data;
        }
        uVar15 = (longlong)(int)local_170 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(pFVar12 + 0x18) = *(undefined4 *)(FVar9.Data + uVar15 * 4);
        *(int *)(FVar9.Data + uVar15 * 4) = iVar4;
        local_250._16_4_ = local_250._16_4_ & ~local_250._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_250);
        iVar4 = iStack_23c;
      } while (iStack_23c < *(int *)(local_250._8_8_ + 0x18));
    }
  }
LAB_1415eec3b:
  local_2d8._8_8_ = (wchar_t *)0x0;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),0,local_2c8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),local_2c8,local_2c8 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_2d8._8_8_,2,"d",2);
  local_280._16_4_ = 1;
  local_258 = (undefined1  [8])(local_2d8 + 8);
  local_280._0_8_ = (FScriptContainerElement *)0x0;
  local_250._0_8_ = local_280 + 0x10;
  local_280[8] = '\0';
  local_280[9] = '\0';
  local_280[10] = '\0';
  local_280[0xb] = '\0';
  local_280[0xc] = '\0';
  local_280[0xd] = '\0';
  local_280[0xe] = '\0';
  local_280[0xf] = '\0';
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)local_280,0,(int *)(local_280 + 0xc));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)local_280,(int *)(local_280 + 8),(int *)(local_280 + 0xc));
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_280._0_8_,2,"a",2);
  local_280._20_4_ = 2;
  local_250._8_8_ = local_280;
  local_2a0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  unique0x00008e00 = local_280 + 0x14;
  local_2a0.NumBits = 0;
  local_2a0.MaxBits = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0.AllocatorInstance.SecondaryData,0,
             &local_2a0.MaxBits);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0.AllocatorInstance.SecondaryData,
             &local_2a0.NumBits,&local_2a0.MaxBits);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2a0.AllocatorInstance.SecondaryData,2,"b",2);
  local_2c0._8_4_ = 3;
  local_238 = &local_2a0.AllocatorInstance.SecondaryData;
  local_2a0.AllocatorInstance.InlineData._0_8_ = (FScriptContainerElement *)0x0;
  local_230 = local_2c0 + 8;
  local_2a0.AllocatorInstance.InlineData[8] = '\0';
  local_2a0.AllocatorInstance.InlineData[9] = '\0';
  local_2a0.AllocatorInstance.InlineData[10] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xb] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xc] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xd] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xe] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xf] = '\0';
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0,0,
             (int *)(local_2a0.AllocatorInstance.InlineData + 0xc));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0,(int *)((longlong)&local_2a0 + 8),
             (int *)(local_2a0.AllocatorInstance.InlineData + 0xc));
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2a0.AllocatorInstance.InlineData._0_8_,2,"e",2);
  local_2c0._0_4_ = 4;
  local_228 = (undefined1 *)&local_2a0;
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220 = local_2c0;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2b0,0,&local_2b0.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2b0,&local_2b0.Data.ArrayNum,&local_2b0.Data.ArrayMax
            );
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2b0.Data.AllocatorInstance.Data,2,"c",2);
  local_218 = &local_2b0;
  local_2d8._0_4_ = 5;
  local_210 = local_2d8;
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)local_258;
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)&local_208;
  TSparseMap<FString,int,FDefaultSparseSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
  TSparseMap<FString,int,FDefaultSparseSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
            ((TSparseMap<FString,int,FDefaultSparseSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
              *)local_78,&local_268);
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_2a0.AllocatorInstance.InlineData._0_8_ !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2a0.AllocatorInstance.InlineData._0_8_);
  }
  if (local_2a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2a0.AllocatorInstance.SecondaryData);
  }
  if ((FScriptContainerElement *)local_280._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_280._0_8_);
  }
  if ((wchar_t *)local_2d8._8_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2d8._8_8_);
  }
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2b0,0,&local_2b0.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2b0,&local_2b0.Data.ArrayNum,&local_2b0.Data.ArrayMax
            );
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2b0.Data.AllocatorInstance.Data,2,"d",2);
  local_2d8._0_4_ = 1;
  local_258 = (undefined1  [8])&local_2b0;
  local_2a0.AllocatorInstance.InlineData._0_8_ = (FScriptContainerElement *)0x0;
  local_250._0_8_ = local_2d8;
  local_2a0.AllocatorInstance.InlineData[8] = '\0';
  local_2a0.AllocatorInstance.InlineData[9] = '\0';
  local_2a0.AllocatorInstance.InlineData[10] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xb] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xc] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xd] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xe] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xf] = '\0';
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0,0,
             (int *)(local_2a0.AllocatorInstance.InlineData + 0xc));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0,(int *)((longlong)&local_2a0 + 8),
             (int *)(local_2a0.AllocatorInstance.InlineData + 0xc));
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2a0.AllocatorInstance.InlineData._0_8_,2,"a",2);
  local_2c0._0_4_ = 2;
  local_250._8_8_ = &local_2a0;
  local_2a0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  unique0x00009c00 = local_2c0;
  local_2a0.NumBits = 0;
  local_2a0.MaxBits = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0.AllocatorInstance.SecondaryData,0,
             &local_2a0.MaxBits);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0.AllocatorInstance.SecondaryData,
             &local_2a0.NumBits,&local_2a0.MaxBits);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2a0.AllocatorInstance.SecondaryData,2,"b",2);
  local_2c0._8_4_ = 3;
  local_238 = &local_2a0.AllocatorInstance.SecondaryData;
  local_280._0_8_ = (FScriptContainerElement *)0x0;
  local_230 = local_2c0 + 8;
  local_280[8] = '\0';
  local_280[9] = '\0';
  local_280[10] = '\0';
  local_280[0xb] = '\0';
  local_280[0xc] = '\0';
  local_280[0xd] = '\0';
  local_280[0xe] = '\0';
  local_280[0xf] = '\0';
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)local_280,0,(int *)(local_280 + 0xc));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)local_280,(int *)(local_280 + 8),(int *)(local_280 + 0xc));
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_280._0_8_,2,"e",2);
  local_280._20_4_ = 4;
  local_228 = local_280;
  local_2d8._8_8_ = (wchar_t *)0x0;
  local_220 = local_280 + 0x14;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),0,local_2c8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),local_2c8,local_2c8 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_2d8._8_8_,2,"c",2);
  local_218 = (FString *)(local_2d8 + 8);
  local_280._16_4_ = 5;
  local_210 = local_280 + 0x10;
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)local_258;
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)&local_208;
  TSparseMap<FString,int,FDefaultSparseSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
  TSparseMap<FString,int,FDefaultSparseSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
            ((TSparseMap<FString,int,FDefaultSparseSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
              *)&local_c8,&local_268);
  if ((wchar_t *)local_2d8._8_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2d8._8_8_);
  }
  if ((FScriptContainerElement *)local_280._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_280._0_8_);
  }
  if (local_2a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2a0.AllocatorInstance.SecondaryData);
  }
  if ((FScriptContainerElement *)local_2a0.AllocatorInstance.InlineData._0_8_ !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2a0.AllocatorInstance.InlineData._0_8_);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if ((uint)(local_c8.Elements._8_4_ - local_c8.Elements._52_4_) < 0x10) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&local_c8,0x10);
    for (lVar1 = 0x3f; 0x1fUL >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
    if ((local_c8.HashSize == 0) || (local_c8.HashSize < iVar4)) {
      local_c8.HashSize = iVar4;
      TSparseSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSparseSetAllocator>
      ::Rehash(&local_c8);
    }
  }
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.Data.ArrayNum = 0;
  local_2b0.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2b0,0,&local_2b0.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2b0,&local_2b0.Data.ArrayNum,&local_2b0.Data.ArrayMax
            );
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2b0.Data.AllocatorInstance.Data,2,"d",2);
  local_2d8._0_4_ = 1;
  local_258 = (undefined1  [8])&local_2b0;
  local_2a0.AllocatorInstance.InlineData._0_8_ = (FScriptContainerElement *)0x0;
  local_250._0_8_ = local_2d8;
  local_2a0.AllocatorInstance.InlineData[8] = '\0';
  local_2a0.AllocatorInstance.InlineData[9] = '\0';
  local_2a0.AllocatorInstance.InlineData[10] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xb] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xc] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xd] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xe] = '\0';
  local_2a0.AllocatorInstance.InlineData[0xf] = '\0';
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0,0,
             (int *)(local_2a0.AllocatorInstance.InlineData + 0xc));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0,(int *)((longlong)&local_2a0 + 8),
             (int *)(local_2a0.AllocatorInstance.InlineData + 0xc));
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2a0.AllocatorInstance.InlineData._0_8_,2,"a",2);
  local_2c0._0_4_ = 2;
  local_250._8_8_ = &local_2a0;
  local_2a0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  unique0x00009c00 = local_2c0;
  local_2a0.NumBits = 0;
  local_2a0.MaxBits = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0.AllocatorInstance.SecondaryData,0,
             &local_2a0.MaxBits);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)&local_2a0.AllocatorInstance.SecondaryData,
             &local_2a0.NumBits,&local_2a0.MaxBits);
  FGenericPlatformString::Convert<char,wchar_t>
            ((wchar_t *)local_2a0.AllocatorInstance.SecondaryData,2,"b",2);
  local_2c0._8_4_ = 3;
  local_238 = &local_2a0.AllocatorInstance.SecondaryData;
  local_280._0_8_ = (FScriptContainerElement *)0x0;
  local_230 = local_2c0 + 8;
  local_280[8] = '\0';
  local_280[9] = '\0';
  local_280[10] = '\0';
  local_280[0xb] = '\0';
  local_280[0xc] = '\0';
  local_280[0xd] = '\0';
  local_280[0xe] = '\0';
  local_280[0xf] = '\0';
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)local_280,0,(int *)(local_280 + 0xc));
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)local_280,(int *)(local_280 + 8),(int *)(local_280 + 0xc));
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_280._0_8_,2,"e",2);
  local_280._20_4_ = 4;
  local_228 = local_280;
  local_2d8._8_8_ = (wchar_t *)0x0;
  local_220 = local_280 + 0x14;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),0,local_2c8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),local_2c8,local_2c8 + 1);
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_2d8._8_8_,2,"c",2);
  local_218 = (FString *)(local_2d8 + 8);
  local_280._16_4_ = 5;
  local_210 = local_280 + 0x10;
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)local_258;
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)&local_208;
  TSparseMap<FString,int,FDefaultSparseSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
  TSparseMap<FString,int,FDefaultSparseSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
            ((TSparseMap<FString,int,FDefaultSparseSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
              *)&local_118,&local_268);
  if ((wchar_t *)local_2d8._8_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_2d8._8_8_);
  }
  if ((FScriptContainerElement *)local_280._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_280._0_8_);
  }
  if (local_2a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_2a0.AllocatorInstance.SecondaryData);
  }
  if ((FScriptContainerElement *)local_2a0.AllocatorInstance.InlineData._0_8_ !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2a0.AllocatorInstance.InlineData._0_8_);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  local_2d8._8_8_ = (wchar_t *)0x0;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),0,local_2c8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),local_2c8,local_2c8 + 1);
  uVar3 = local_2d8._8_8_;
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_2d8._8_8_,2,"a",2);
  if (local_118.Elements._8_4_ != local_118.Elements._52_4_) {
    iVar4 = local_2c8[0] + -1;
    pwVar10 = (wchar_t *)uVar3;
    if (local_2c8[0] == 0) {
      iVar4 = 0;
      pwVar10 = L"";
    }
    uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar10);
    TSparseSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSparseSetAllocator>
    ::RemoveImpl<FString>(&local_118,uVar11,(FString *)(local_2d8 + 8));
  }
  if ((wchar_t *)uVar3 != (wchar_t *)0x0) {
    FMemory::Free((void *)uVar3);
  }
  local_2d8._8_8_ = (wchar_t *)0x0;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),0,local_2c8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,(ForAnyElementType *)(local_2d8 + 8),local_2c8,local_2c8 + 1);
  uVar3 = local_2d8._8_8_;
  FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_2d8._8_8_,2,"e",2);
  if (local_118.Elements._8_4_ != local_118.Elements._52_4_) {
    iVar4 = local_2c8[0] + -1;
    pwVar10 = (wchar_t *)uVar3;
    if (local_2c8[0] == 0) {
      iVar4 = 0;
      pwVar10 = L"";
    }
    uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar10);
    TSparseSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSparseSetAllocator>
    ::RemoveImpl<FString>(&local_118,uVar11,(FString *)(local_2d8 + 8));
  }
  if ((wchar_t *)uVar3 != (wchar_t *)0x0) {
    FMemory::Free((void *)uVar3);
  }
  local_208 = (void *)0x0;
  local_200 = 0;
  local_1f8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1f8.NumBits = 0;
  local_1f8.MaxBits = 0x80;
  local_1d8 = 0xffffffff;
  local_1d4 = 0;
  local_1c8 = (ForElementType<FSetElementId>)0x0;
  local_1c0 = 0;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)&local_208,5);
  for (lVar1 = 0x3f; 0x13UL >> lVar1 == 0; lVar1 = lVar1 + -1) {
  }
  iVar4 = 1 << ((byte)lVar1 & 0x1f);
  if ((local_1c0 == 0) || (local_1c0 < iVar4)) {
    local_1c0 = iVar4;
    TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
    ::Rehash((TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
              *)&local_208);
  }
  local_2d8._0_4_ = 1;
  pFVar6 = ::operator_new(0x10);
  pFVar7 = pFVar13;
  if (pFVar6 != (ForAnyElementType *)0x0) {
    piVar2 = (int *)((longlong)&pFVar6[1].Data + 4);
    pFVar6->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar6[1].Data = 0;
    *piVar2 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,0,piVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,(int *)(pFVar6 + 1),piVar2);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar6->Data,2,"d",2);
    pFVar7 = pFVar6;
  }
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)(local_2c0 + 8);
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)local_2d8;
  local_2c0._8_8_ = pFVar7;
  TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
              *)&local_208,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)local_2c0,
             (bool *)&local_268);
  uVar3 = local_2c0._8_8_;
  if ((ForAnyElementType *)local_2c0._8_8_ != (ForAnyElementType *)0x0) {
    if (*(FScriptContainerElement **)local_2c0._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free(*(FScriptContainerElement **)local_2c0._8_8_);
    }
    ::operator_delete((void *)uVar3,0x10);
  }
  local_2d8._0_4_ = 2;
  pFVar6 = ::operator_new(0x10);
  pFVar7 = pFVar13;
  if (pFVar6 != (ForAnyElementType *)0x0) {
    piVar2 = (int *)((longlong)&pFVar6[1].Data + 4);
    pFVar6->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar6[1].Data = 0;
    *piVar2 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,0,piVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,(int *)(pFVar6 + 1),piVar2);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar6->Data,2,"a",2);
    pFVar7 = pFVar6;
  }
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)(local_2c0 + 8);
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)local_2d8;
  local_2c0._8_8_ = pFVar7;
  TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
              *)&local_208,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)local_2c0,
             (bool *)&local_268);
  uVar3 = local_2c0._8_8_;
  if ((ForAnyElementType *)local_2c0._8_8_ != (ForAnyElementType *)0x0) {
    if (*(FScriptContainerElement **)local_2c0._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free(*(FScriptContainerElement **)local_2c0._8_8_);
    }
    ::operator_delete((void *)uVar3,0x10);
  }
  local_2d8._0_4_ = 3;
  pFVar6 = ::operator_new(0x10);
  pFVar7 = pFVar13;
  if (pFVar6 != (ForAnyElementType *)0x0) {
    piVar2 = (int *)((longlong)&pFVar6[1].Data + 4);
    pFVar6->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar6[1].Data = 0;
    *piVar2 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,0,piVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,(int *)(pFVar6 + 1),piVar2);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar6->Data,2,"b",2);
    pFVar7 = pFVar6;
  }
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)(local_2c0 + 8);
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)local_2d8;
  local_2c0._8_8_ = pFVar7;
  TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
              *)&local_208,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)local_2c0,
             (bool *)&local_268);
  uVar3 = local_2c0._8_8_;
  if ((ForAnyElementType *)local_2c0._8_8_ != (ForAnyElementType *)0x0) {
    if (*(FScriptContainerElement **)local_2c0._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free(*(FScriptContainerElement **)local_2c0._8_8_);
    }
    ::operator_delete((void *)uVar3,0x10);
  }
  local_2d8._0_4_ = 4;
  pFVar6 = ::operator_new(0x10);
  pFVar7 = pFVar13;
  if (pFVar6 != (ForAnyElementType *)0x0) {
    piVar2 = (int *)((longlong)&pFVar6[1].Data + 4);
    pFVar6->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar6[1].Data = 0;
    *piVar2 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,0,piVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar6,(int *)(pFVar6 + 1),piVar2);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar6->Data,2,"e",2);
    pFVar7 = pFVar6;
  }
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)(local_2c0 + 8);
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)local_2d8;
  local_2c0._8_8_ = pFVar7;
  TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
              *)&local_208,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)local_2c0,
             (bool *)&local_268);
  uVar3 = local_2c0._8_8_;
  if ((ForAnyElementType *)local_2c0._8_8_ != (ForAnyElementType *)0x0) {
    if (*(FScriptContainerElement **)local_2c0._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free(*(FScriptContainerElement **)local_2c0._8_8_);
    }
    ::operator_delete((void *)uVar3,0x10);
  }
  local_2d8._0_4_ = 5;
  pFVar7 = ::operator_new(0x10);
  if (pFVar7 != (ForAnyElementType *)0x0) {
    piVar2 = (int *)((longlong)&pFVar7[1].Data + 4);
    pFVar7->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar7[1].Data = 0;
    *piVar2 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar7,0,piVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,2,pFVar7,(int *)(pFVar7 + 1),piVar2);
    FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)pFVar7->Data,2,"c",2);
    pFVar13 = pFVar7;
  }
  local_268._First = (TPairInitializer<FString_const_&,int_const_&> *)(local_2c0 + 8);
  local_268._Last = (TPairInitializer<FString_const_&,int_const_&> *)local_2d8;
  local_2c0._8_8_ = pFVar13;
  TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
  ::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
            ((TSparseSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultSparseSetAllocator>
              *)&local_208,
             (TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *)local_2c0,
             (bool *)&local_268);
  uVar3 = local_2c0._8_8_;
  if ((ForAnyElementType *)local_2c0._8_8_ != (ForAnyElementType *)0x0) {
    if (*(FScriptContainerElement **)local_2c0._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free(*(FScriptContainerElement **)local_2c0._8_8_);
    }
    ::operator_delete((void *)uVar3,0x10);
  }
  PlaceBreakpointHere();
  local_1c0 = 0;
  if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8);
  }
  TSparseArray<TSparseSetElement<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&local_208,0,(int)local_200);
  uVar15 = local_200 >> 0x20;
  local_200 = local_200 & 0xffffffff00000000;
  if ((int)uVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&local_208,0,(int *)((longlong)&local_200 + 4));
  }
  local_1d8 = 0xffffffff;
  local_1d4 = 0;
  local_1f8.NumBits = 0;
  if (0x80 < (uint)local_1f8.MaxBits) {
    local_1f8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1f8,0);
  }
  if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_1f8.AllocatorInstance.SecondaryData);
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  local_118.HashSize = 0;
  if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_118.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_118.Elements);
  local_c8.HashSize = 0;
  if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.Elements);
  local_30 = 0;
  if ((void *)local_78._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_78);
  local_170 = 0;
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_1b8);
  local_120 = 0;
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_168);
  return;
}

