// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// operator() @ 14322d430

TTuple<FString,bool,FGuid> * __thiscall
`FBuildVerifyChunkData::VerifyChunkData'::__l43::<lambda_1>::operator()
          (void *this,TTuple<FString,bool,FGuid> *__return_storage_ptr__)

{
  char cVar1;
  longlong *plVar2;
  char local_res8 [8];
  FGuid local_38;
  longlong *local_28;
  longlong local_20;
  undefined1 local_18 [16];
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  __return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x14 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x1c = 0;
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  FBuildPatchUtils::GetGUIDFromFilename(this,&local_38);
  plVar2 = (longlong *)
           (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 8))
                     ((longlong *)**(undefined8 **)((longlong)this + 0x10),this,local_res8);
  ::FString::operator=((FString *)__return_storage_ptr__,this);
  if ((local_res8[0] == '\0') && (plVar2 != (longlong *)0x0)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  __return_storage_ptr__->field_0x10 = cVar1;
  *(uint *)&__return_storage_ptr__->field_0x14 = local_38.A;
  *(uint *)&__return_storage_ptr__->field_0x18 = local_38.B;
  *(uint *)&__return_storage_ptr__->field_0x1c = local_38.C;
  *(uint *)&__return_storage_ptr__->field_0x20 = local_38.D;
  if (cVar1 != '\0') {
    local_28 = plVar2;
    (**(code **)(*plVar2 + 8))(plVar2,local_18,&local_20);
    if (((local_38.D != *(uint *)(local_20 + 0x14) || local_38.C != *(uint *)(local_20 + 0x10)) ||
        local_38.B != *(uint *)(local_20 + 0xc)) || local_38.A != *(uint *)(local_20 + 8)) {
      __return_storage_ptr__->field_0x10 = 0;
    }
    (**(code **)(*local_28 + 0x18))();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)*plVar2)(plVar2,1);
  }
  return __return_storage_ptr__;
}

// operator() @ 14322d530

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString> * __thiscall
`FBuildVerifyChunkData::VerifyChunkData'::__l47::<lambda_2>::operator()
          (void *this,TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  void *pvVar3;
  bool bVar4;
  char cVar5;
  FBuildPatchAppManifest *pFVar6;
  TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString> *pTVar7;
  FBuildPatchAppManifest *pFVar8;
  ulonglong uVar9;
  TRawPtrProxy<FBuildPatchAppManifest> local_res8;
  FBuildPatchAppManifest *local_38;
  FSharedReferencer<1> FStack_30;
  TSharedPtr<FBuildPatchAppManifest,1> local_28;
  
  pvVar3 = ThreadLocalStoragePointer;
  uVar9 = (ulonglong)_tls_index;
  pFVar8 = (FBuildPatchAppManifest *)0x0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar9 * 8);
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&UObjectAllocationCS,4000);
    atexit(`VerifyHelpers::LoadManifestFile'::__l2::
           _dynamic_atexit_destructor_for__UObjectAllocationCS__);
    _Init_thread_footer(&::_TSS0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&UObjectAllocationCS);
  pFVar6 = ::operator_new(0x2b8);
  local_res8.Object = pFVar8;
  if (pFVar6 != (FBuildPatchAppManifest *)0x0) {
    local_res8.Object = FBuildPatchAppManifest::FBuildPatchAppManifest(pFVar6);
  }
  TSharedPtr<FBuildPatchAppManifest,1>::TSharedPtr<FBuildPatchAppManifest,1><FBuildPatchAppManifest>
            (&local_28,&local_res8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&UObjectAllocationCS);
  pFVar6 = local_28.Object;
  if ((local_28.Object == (FBuildPatchAppManifest *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString> *)(*pcVar2)();
    return pTVar7;
  }
  cVar5 = (**(code **)(pFVar6->_padding_ + 0x158))(pFVar6,this);
  if (cVar5 == '\0') {
    local_38 = (FBuildPatchAppManifest *)0x0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    local_38 = local_28.Object;
    FStack_30.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar8 = pFVar6;
  }
  if (__return_storage_ptr__ != (TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString> *)&local_38) {
    *(FBuildPatchAppManifest **)__return_storage_ptr__ = pFVar8;
    local_38 = (FBuildPatchAppManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&__return_storage_ptr__->field_0x8,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  ::FString::operator=((FString *)&__return_storage_ptr__->field_0x10,this);
  return __return_storage_ptr__;
}

// VerifyChunkData @ 14326c8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FBuildVerifyChunkData::VerifyChunkData(FString *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  IFileManager *pIVar7;
  FString *pFVar8;
  ulonglong uVar9;
  longlong *plVar10;
  IPlatformFile *pIVar11;
  longlong *plVar12;
  longlong *plVar13;
  code **ppcVar14;
  TFuture<TTuple<FString,bool,FGuid>_> *pTVar15;
  TFuture<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> *pTVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *this;
  undefined ***pppuVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  wchar_t *pwVar26;
  FGuid *pFVar27;
  undefined1 auStackY_598 [32];
  bool local_548;
  undefined1 local_547;
  undefined1 local_546;
  undefined1 local_545;
  undefined1 local_544;
  undefined1 local_543;
  undefined1 local_542;
  char local_541;
  undefined1 local_540 [8];
  ForAnyElementType local_538;
  undefined8 local_530;
  ForAnyElementType local_528;
  undefined8 local_520;
  ForAnyElementType local_518;
  undefined8 local_510;
  FArchive *local_508;
  ForAnyElementType local_500;
  undefined8 local_4f8;
  ForAnyElementType local_4f0;
  undefined8 local_4e8;
  int local_4e0;
  longlong *local_4d8;
  TReferenceControllerBase<1> *local_4d0;
  FString local_4c8;
  longlong *local_4b8;
  FScriptContainerElement *local_4b0;
  ulonglong local_4a8;
  FString local_4a0;
  uint local_490;
  longlong *local_488;
  FString local_480;
  FString local_470;
  longlong local_460;
  FScriptContainerElement *local_458;
  FChunkDatabaseHeader local_450;
  FString local_430;
  char local_420;
  undefined8 local_41c;
  undefined8 uStack_414;
  undefined1 local_408 [8];
  FScriptContainerElement *local_400;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString *local_3c8;
  FString local_3c0;
  longlong **local_3b0;
  FString *local_3a8;
  FString local_3a0;
  FScriptContainerElement *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  TStringView<wchar_t> local_338;
  FString local_328;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  FString local_2f8;
  TUniqueFunction<void___cdecl(void)> local_2e8;
  TUniqueFunction<void___cdecl(void)> local_2b8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_288;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_238;
  code *local_1e8 [2];
  code *local_1d8 [3];
  code **local_1c0;
  code *local_1b8 [2];
  undefined **local_1a8;
  FString local_1a0;
  undefined ***local_190;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_188;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_138;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_e8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_598;
  plVar13 = (longlong *)0x0;
  local_548 = true;
  local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a0.Data.ArrayNum = 0;
  local_4a0.Data.ArrayMax = 0;
  local_3c8 = param_2;
  if (3 < (byte)LogVerifyChunkData._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVerifyChunkData);
  }
  local_4b0 = (FScriptContainerElement *)0x0;
  local_4a8 = 0;
  pIVar7 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar7 + 0x88);
  pFVar8 = ::operator/(&local_328,param_1,L"");
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar26 = L"";
  }
  else {
    pwVar26 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar7,&local_4b0,pwVar26,L"*");
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  iVar21 = (int)local_4a8;
  uVar9 = (ulonglong)(int)local_4a8;
  pFVar25 = local_4b0 + uVar9 * 0x10;
  local_238.Elements._0_8_ = 0;
  local_238.Elements._8_8_ = 0;
  local_238.Elements._32_8_ = 0;
  local_238.Elements._40_4_ = 0;
  local_238.Elements._44_4_ = 0x80;
  local_238.Elements._48_4_ = 0xffffffff;
  local_238.Elements._52_4_ = 0;
  local_238.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_238.HashSize = 0;
  local_188.Elements._0_8_ = 0;
  local_188.Elements._8_8_ = 0;
  local_188.Elements._32_8_ = 0;
  local_188.Elements._40_4_ = 0;
  local_188.Elements._44_4_ = 0x80;
  local_188.Elements._48_4_ = 0xffffffff;
  local_188.Elements._52_4_ = 0;
  local_188.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_188.HashSize = 0;
  local_500.Data = (FScriptContainerElement *)0x0;
  local_4f8 = 0;
  local_518.Data = (FScriptContainerElement *)0x0;
  local_510 = 0;
  local_538.Data = (FScriptContainerElement *)0x0;
  local_530 = 0;
  pFVar22 = local_4b0;
  while( true ) {
    if ((int)uVar9 != iVar21) {
      local_547 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_547)
      ;
    }
    if (pFVar22 == pFVar25) break;
    bVar2 = ::FString::EndsWith((FString *)pFVar22,L".chunk",6,IgnoreCase);
    if (bVar2) {
      if (((local_500.Data <= pFVar22) &&
          (pFVar22 < local_500.Data + (longlong)local_4f8._4_4_ * 0x10)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar6 = (int)local_4f8;
      if ((int)local_4f8 == local_4f8._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_500,(int *)((longlong)&local_4f8 + 4));
      }
      local_4f8 = CONCAT44(local_4f8._4_4_,iVar6 + 1);
      FVar23.Data = local_500.Data;
LAB_14326cc9f:
      ::FString::FString((FString *)(FVar23.Data + (longlong)iVar6 * 0x10),(FString *)pFVar22);
    }
    else {
      bVar2 = ::FString::EndsWith((FString *)pFVar22,L".chunkdb",8,IgnoreCase);
      if (bVar2) {
        if (((local_518.Data <= pFVar22) &&
            (pFVar22 < local_518.Data + (longlong)local_510._4_4_ * 0x10)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        iVar6 = (uint)local_510;
        if ((uint)local_510 == local_510._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_518,(int *)((longlong)&local_510 + 4));
        }
        local_510 = CONCAT44(local_510._4_4_,iVar6 + 1);
        FVar23.Data = local_518.Data;
        goto LAB_14326cc9f;
      }
      bVar2 = ::FString::EndsWith((FString *)pFVar22,L".manifest",9,IgnoreCase);
      if ((bVar2) || (bVar2 = ::FString::EndsWith((FString *)pFVar22,L".delta",6,IgnoreCase), bVar2)
         ) {
        if ((local_538.Data <= pFVar22) &&
           ((pFVar22 < local_538.Data + (longlong)local_530._4_4_ * 0x10 &&
            (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)))) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        iVar6 = (int)local_530;
        if ((int)local_530 == local_530._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_538,(int *)((longlong)&local_530 + 4));
        }
        local_530 = CONCAT44(local_530._4_4_,iVar6 + 1);
        FVar23.Data = local_538.Data;
        goto LAB_14326cc9f;
      }
    }
    uVar9 = local_4a8 & 0xffffffff;
    pFVar22 = pFVar22 + 0x10;
  }
  plVar10 = ::operator_new(0x18);
  if (plVar10 == (longlong *)0x0) {
    local_4b8 = (longlong *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FileSystem != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Data\\ChunkData.cpp"
                       ,0x39f,L"");
    plVar10 = plVar13;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    *plVar10 = (longlong)&___7FFileSystem_BuildPatchServices__6B_;
    local_4b8 = plVar10;
    pIVar7 = IFileManager::Get();
    plVar10[1] = (longlong)pIVar7;
    pIVar11 = IPlatformFile::GetPlatformPhysical();
    plVar10[2] = (longlong)pIVar11;
  }
  plVar12 = ::operator_new(0x18);
  if (plVar12 != (longlong *)0x0) {
    plVar12[1] = (longlong)plVar10;
    *plVar12 = (longlong)&___7FChunkDataSerialization_BuildPatchServices__6B_;
    *(undefined4 *)(plVar12 + 2) = 0x12;
    plVar13 = plVar12;
  }
  local_528.Data = (FScriptContainerElement *)0x0;
  local_520 = 0;
  iVar21 = (int)local_4f8;
  uVar9 = (ulonglong)(int)local_4f8;
  pFVar22 = local_500.Data + uVar9 * 0x10;
  FVar23.Data = local_500.Data;
  local_488 = plVar13;
  while( true ) {
    if ((int)uVar9 != iVar21) {
      local_546 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_546)
      ;
    }
    if (FVar23.Data == pFVar22) break;
    ::FString::FString(&local_3c0,(FString *)FVar23.Data);
    local_3b0 = &local_488;
    local_1e8[0] = (code *)0x0;
    local_1c0 = (code **)0x0;
    local_3a8 = param_1;
    ppcVar14 = FMemory::Malloc(0x28,8);
    *ppcVar14 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FBuildVerifyChunkData::VerifyChunkData'::`43'::<lambda_1>,0,1>
                         ::_vftable_;
    local_1c0 = ppcVar14;
    ::FString::FString((FString *)(ppcVar14 + 1),&local_3c0);
    ppcVar14[3] = (code *)local_3b0;
    ppcVar14[4] = (code *)local_3a8;
    if ((FString *)(ppcVar14 + 1) != (FString *)0x0) {
      local_1e8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FBuildVerifyChunkData::VerifyChunkData'::__l43::<lambda_1>,TTuple<FString,bool,FGuid>_>
                     ::Call;
    }
    if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
    }
    local_2e8._0_8_ = 0;
    local_2e8._40_8_ = 0;
    pTVar15 = Async<TFunction<TTuple<FString,bool,FGuid>___cdecl(void)>_&>
                        ((TFuture<TTuple<FString,bool,FGuid>_> *)local_318,ThreadPool,
                         (TFunction<TTuple<FString,bool,FGuid>___cdecl(void)> *)local_1e8,&local_2e8
                        );
    if (((local_528.Data <= pTVar15) &&
        (pTVar15 < (TFuture<TTuple<FString,bool,FGuid>_> *)
                   (local_528.Data + (longlong)local_520._4_4_ * 0x10))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar6 = (int)local_520;
    if ((int)local_520 == local_520._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_528,(int *)((longlong)&local_520 + 4));
    }
    local_520 = CONCAT44(local_520._4_4_,iVar6 + 1);
    *(undefined8 *)(local_528.Data + (longlong)iVar6 * 0x10) = *(undefined8 *)pTVar15;
    *(undefined8 *)(local_528.Data + (longlong)iVar6 * 0x10 + 8) =
         *(undefined8 *)&pTVar15->field_0x8;
    *(undefined8 *)&pTVar15->field_0x8 = 0;
    *(undefined8 *)pTVar15 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_318._8_8_);
    if (local_1e8[0] != (code *)0x0) {
      ppcVar14 = local_1e8 + 2;
      if (local_1c0 != (code **)0x0) {
        ppcVar14 = local_1c0;
      }
      (**(code **)(*ppcVar14 + 0x10))();
    }
    uVar9 = local_4f8 & 0xffffffff;
    FVar23.Data = FVar23.Data + 0x10;
  }
  iVar21 = (int)local_530;
  uVar9 = (ulonglong)(int)local_530;
  local_4f0.Data = (FScriptContainerElement *)0x0;
  pFVar22 = local_538.Data + uVar9 * 0x10;
  local_4e8 = 0;
  FVar23.Data = local_538.Data;
  while( true ) {
    if ((int)uVar9 != iVar21) {
      local_545 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_545)
      ;
    }
    if (FVar23.Data == pFVar22) break;
    ::FString::FString(&local_3a0,(FString *)FVar23.Data);
    local_1b8[0] = (code *)0x0;
    local_190 = (undefined ***)0x0;
    local_1a8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FBuildVerifyChunkData::VerifyChunkData'::`47'::<lambda_2>,0,0>
                 ::_vftable_;
    ::FString::FString(&local_1a0,&local_3a0);
    local_1b8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FBuildVerifyChunkData::VerifyChunkData'::__l47::<lambda_2>,TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_>
                   ::Call;
    if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
    }
    local_2b8._0_8_ = 0;
    local_2b8._40_8_ = 0;
    pTVar16 = Async<TFunction<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>___cdecl(void)>_&>
                        ((TFuture<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> *)local_308
                         ,ThreadPool,
                         (TFunction<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>___cdecl(void)>
                          *)local_1b8,&local_2b8);
    if (((local_4f0.Data <= pTVar16) &&
        (pTVar16 < (TFuture<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> *)
                   (local_4f0.Data + (longlong)local_4e8._4_4_ * 0x10))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar6 = (int)local_4e8;
    if ((int)local_4e8 == local_4e8._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_4f0,(int *)((longlong)&local_4e8 + 4));
    }
    local_4e8 = CONCAT44(local_4e8._4_4_,iVar6 + 1);
    *(undefined8 *)(local_4f0.Data + (longlong)iVar6 * 0x10) = *(undefined8 *)pTVar16;
    *(undefined8 *)(local_4f0.Data + (longlong)iVar6 * 0x10 + 8) =
         *(undefined8 *)&pTVar16->field_0x8;
    *(undefined8 *)&pTVar16->field_0x8 = 0;
    *(undefined8 *)pTVar16 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_308._8_8_);
    if (local_1b8[0] != (code *)0x0) {
      pppuVar20 = &local_1a8;
      if (local_190 != (undefined ***)0x0) {
        pppuVar20 = local_190;
      }
      (*(code *)(*pppuVar20)[2])();
    }
    uVar9 = local_530 & 0xffffffff;
    FVar23.Data = FVar23.Data + 0x10;
  }
  iVar21 = (int)local_520;
  uVar9 = (ulonglong)(int)local_520;
  pTVar15 = (TFuture<TTuple<FString,bool,FGuid>_> *)(local_528.Data + uVar9 * 0x10);
  FVar23.Data = local_528.Data;
  while( true ) {
    if ((int)uVar9 != iVar21) {
      local_544 = 0;
      `TCheckedPointerIterator<TFuture<TTuple<FString,bool,FGuid>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_544);
    }
    if ((TFuture<TTuple<FString,bool,FGuid>_> *)FVar23.Data == pTVar15) break;
    if (*(longlong *)FVar23.Data == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x155,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if ((*(longlong *)FVar23.Data == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    lVar24 = *(longlong *)FVar23.Data;
    while (*(char *)(lVar24 + 0x68) == '\0') {
      (**(code **)(**(longlong **)(lVar24 + 0x60) + 0x20))
                (*(longlong **)(lVar24 + 0x60),0xffffffff,0);
    }
    ::FString::FString(&local_430,(FString *)(lVar24 + 0x70));
    local_420 = *(char *)(lVar24 + 0x80);
    local_41c = *(undefined8 *)(lVar24 + 0x84);
    uStack_414 = *(undefined8 *)(lVar24 + 0x8c);
    if (local_420 == '\0') {
      if (1 < (byte)LogVerifyChunkData._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVerifyChunkData);
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&local_238,(FGuid *)(local_408 + 4),(bool *)&local_41c);
      ::FString::ConcatFC(&local_3f8,&local_430,L"\r\n");
      iVar6 = local_3f8.Data.ArrayNum + -1;
      if (local_3f8.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_4a0,(wchar_t *)local_3f8.Data.AllocatorInstance.Data,iVar6);
      if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
      }
      local_548 = false;
    }
    else {
      if (3 < (byte)LogVerifyChunkData._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVerifyChunkData);
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (&local_188,(FGuid *)local_408,(bool *)&local_41c);
    }
    if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_430.Data.AllocatorInstance.Data);
    }
    uVar9 = local_520 & 0xffffffff;
    FVar23.Data = FVar23.Data + 0x10;
  }
  uVar17 = (ulonglong)(int)(uint)local_510;
  iVar21 = 1;
  pFVar22 = local_518.Data + uVar17 * 0x10;
  local_490 = (uint)local_510;
  local_4e0 = 1;
  uVar9 = uVar17;
  FVar23.Data = local_518.Data;
  local_400 = pFVar22;
LAB_14326d30e:
  local_458 = FVar23.Data;
  if ((int)uVar17 != (int)uVar9) {
    local_543 = 0;
    `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_543);
  }
  if (FVar23.Data == pFVar22) {
    iVar21 = (int)local_4e8;
    pwVar26 = L"";
    pTVar16 = (TFuture<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> *)
              (local_4f0.Data + (longlong)(int)local_4e8 * 0x10);
    FVar23.Data = local_4f0.Data;
    do {
      if ((int)local_4e8 != iVar21) {
        local_540[0] = 0;
        `TCheckedPointerIterator<TFuture<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_540);
      }
      pFVar8 = local_3c8;
      if ((TFuture<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> *)FVar23.Data == pTVar16)
      {
        if (1 < (local_3c8->Data).ArrayNum) {
          pIVar7 = IFileManager::Get();
          if ((pFVar8->Data).ArrayNum != 0) {
            pwVar26 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
          local_388 = local_4a0.Data.AllocatorInstance.Data;
          iStack_380 = local_4a0.Data.ArrayNum + -1;
          if (local_4a0.Data.ArrayNum == 0) {
            iStack_380 = 0;
          }
          local_338._12_4_ = uStack_37c;
          local_338.Size = iStack_380;
          local_338.DataPtr = (wchar_t *)local_4a0.Data.AllocatorInstance.Data;
          FFileHelper::SaveStringToFile(&local_338,pwVar26,AutoDetect,pIVar7,0);
        }
        DestructItems<TFuture<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_>,int>
                  ((TFuture<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> *)local_4f0.Data,
                   (int)local_4e8);
        if ((TFuture<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> *)local_4f0.Data !=
            (TFuture<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> *)0x0) {
          FMemory::Free(local_4f0.Data);
        }
        DestructItems<TFuture<TTuple<FString,bool,FGuid>_>,int>
                  ((TFuture<TTuple<FString,bool,FGuid>_> *)local_528.Data,(int)local_520);
        if ((TFuture<TTuple<FString,bool,FGuid>_> *)local_528.Data !=
            (TFuture<TTuple<FString,bool,FGuid>_> *)0x0) {
          FMemory::Free(local_528.Data);
        }
        if (local_488 != (longlong *)0x0) {
          (**(code **)*local_488)(local_488,1);
        }
        if (local_4b8 != (longlong *)0x0) {
          (**(code **)*local_4b8)(local_4b8,1);
        }
        DestructItems<FString,int>((FString *)local_538.Data,(int)local_530);
        if (local_538.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_538.Data);
        }
        DestructItems<FString,int>((FString *)local_518.Data,(uint)local_510);
        if (local_518.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_518.Data);
        }
        DestructItems<FString,int>((FString *)local_500.Data,(int)local_4f8);
        if (local_500.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_500.Data);
        }
        local_188.HashSize = 0;
        if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_188.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_188.Elements);
        local_238.HashSize = 0;
        if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_238.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_238.Elements);
        DestructItems<FString,int>((FString *)local_4b0,(int)local_4a8);
        if (local_4b0 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b0);
        }
        if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
        }
        return local_548;
      }
      bVar2 = true;
      if (*(longlong *)FVar23.Data == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x155,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if ((*(longlong *)FVar23.Data == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      lVar24 = *(longlong *)FVar23.Data;
      while (*(char *)(lVar24 + 0x68) == '\0') {
        (**(code **)(**(longlong **)(lVar24 + 0x60) + 0x20))
                  (*(longlong **)(lVar24 + 0x60),0xffffffff);
      }
      local_4d8 = *(longlong **)(lVar24 + 0x70);
      local_4d0 = *(TReferenceControllerBase<1> **)(lVar24 + 0x78);
      if (local_4d0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_4d0->SharedReferenceCount = (atomic<int>)((int)local_4d0->SharedReferenceCount + 1);
        UNLOCK();
      }
      ::FString::FString(&local_4c8,(FString *)(lVar24 + 0x80));
      if (local_4d8 == (longlong *)0x0) {
        if (1 < (byte)LogVerifyChunkData._0_1_) {
          FPaths::GetExtension(&local_348,&local_4c8,false);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVerifyChunkData);
          if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Data.AllocatorInstance.Data);
          }
        }
LAB_14326db19:
        ::FString::ConcatFC(&local_3d8,&local_4c8,L"\r\n");
        iVar6 = local_3d8.Data.ArrayNum + -1;
        if (local_3d8.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(&local_4a0,(wchar_t *)local_3d8.Data.AllocatorInstance.Data,iVar6);
        if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
        }
        local_548 = false;
      }
      else {
        cVar5 = (**(code **)(*local_4d8 + 0x200))();
        if (cVar5 == '\0') {
          local_288.Elements._0_8_ = 0;
          local_288.Elements._8_8_ = 0;
          local_288.Elements._32_8_ = 0;
          local_288.Elements._40_4_ = 0;
          local_288.Elements._44_4_ = 0x80;
          local_288.Elements._48_4_ = 0xffffffff;
          local_288.Elements._52_4_ = 0;
          local_288.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_288.HashSize = 0;
          if ((local_4d8 == (longlong *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          (**(code **)(*local_4d8 + 0x1e8))(local_4d8,&local_288);
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Intersect
                    (&local_288,&local_e8,&local_238);
          this = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Difference
                           (&local_288,&local_98,&local_238);
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Difference
                    (this,&local_138,&local_188);
          local_98.HashSize = 0;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_98.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_98.Elements);
          if (0 < (int)(local_e8.Elements._8_4_ - local_e8.Elements._52_4_)) {
            if (1 < (byte)LogVerifyChunkData._0_1_) {
              FPaths::GetExtension(&local_2f8,&local_4c8,false);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogVerifyChunkData);
              if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
              }
            }
            bVar2 = false;
          }
          if (0 < (int)(local_138.Elements._8_4_ - local_138.Elements._52_4_)) {
            if (1 < (byte)LogVerifyChunkData._0_1_) {
              FPaths::GetExtension(&local_378,&local_4c8,false);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogVerifyChunkData);
              if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_378.Data.AllocatorInstance.Data);
              }
            }
            bVar2 = false;
          }
          local_138.HashSize = 0;
          if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_138.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_138.Elements);
          local_e8.HashSize = 0;
          if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_e8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_e8.Elements);
          local_288.HashSize = 0;
          if (local_288.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_288.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_288.Elements);
          if (!bVar2) goto LAB_14326db19;
        }
        else {
          if ((byte)LogVerifyChunkData._0_1_ < 4) goto LAB_14326db6c;
          FPaths::GetExtension(&local_368,&local_4c8,false);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVerifyChunkData);
          if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_368.Data.AllocatorInstance.Data);
          }
        }
        if (3 < (byte)LogVerifyChunkData._0_1_) {
          FPaths::GetExtension(&local_358,&local_4c8,false);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVerifyChunkData);
          if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.Data.AllocatorInstance.Data);
          }
        }
      }
LAB_14326db6c:
      if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4d0)
      ;
      FVar23.Data = FVar23.Data + 0x10;
    } while( true );
  }
  bVar2 = false;
  if (*(int *)(FVar23.Data + 8) == 0) {
    pwVar26 = L"";
  }
  else {
    pwVar26 = *(wchar_t **)FVar23.Data;
  }
  (**(code **)(*local_4b8 + 0x48))(local_4b8,&local_508,pwVar26,0);
  if (local_508 != (FArchive *)0x0) {
    local_450.Version = 1;
    local_450.HeaderSize = 0x18;
    local_450.Contents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_450.Contents.ArrayNum = 0;
    local_450.Contents.ArrayMax = 0;
    BuildPatchServices::operator<<(local_508,&local_450);
    if ((local_508->field_0x29 & 2) == 0) {
      local_460 = (**(code **)(*(longlong *)local_508 + 0x30))();
      iVar21 = local_450.Contents.ArrayNum;
      bVar2 = true;
      pFVar27 = (FGuid *)(local_450.Contents.AllocatorInstance.Data +
                         (longlong)local_450.Contents.ArrayNum * 0x20);
      FVar23.Data = local_450.Contents.AllocatorInstance.Data;
LAB_14326d3c0:
      do {
        if (local_450.Contents.ArrayNum != iVar21) {
          local_542 = 0;
          `TCheckedPointerIterator<BuildPatchServices::FChunkLocation,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_542);
        }
        if ((FGuid *)FVar23.Data == pFVar27) goto LAB_14326d543;
        lVar24 = (ulonglong)((FGuid *)((longlong)FVar23.Data + 0x10))->C +
                 *(longlong *)((longlong)FVar23.Data + 0x10);
        if (local_460 < lVar24) {
LAB_14326d4ca:
          if (1 < (byte)LogVerifyChunkData._0_1_) {
            local_480.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_480.Data.ArrayNum = 0;
            local_480.Data.ArrayMax = 0;
            FGuid::AppendString((FGuid *)FVar23.Data,&local_480,Digits);
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u___d__d___Corrup_150a76dd0,
                       (FLogCategoryBase *)&LogVerifyChunkData);
            if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_480.Data.AllocatorInstance.Data);
            }
          }
          local_548 = false;
          bVar2 = false;
        }
        else {
          (**(code **)(*(longlong *)local_508 + 0x1b8))();
          puVar18 = (undefined8 *)(**(code **)(*local_488 + 0x18))(local_488,local_508);
          lVar19 = (**(code **)(*(longlong *)local_508 + 0x28))();
          if (((local_541 == '\0') && (puVar18 != (undefined8 *)0x0)) && (lVar19 == lVar24)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
            if (puVar18 == (undefined8 *)0x0) goto LAB_14326d4ca;
          }
          (**(code **)*puVar18)(puVar18,1);
          if (!bVar4) goto LAB_14326d4ca;
          if (3 < (byte)LogVerifyChunkData._0_1_) {
            local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_470.Data.ArrayNum = 0;
            local_470.Data.ArrayMax = 0;
            FGuid::AppendString((FGuid *)FVar23.Data,&local_470,Digits);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVerifyChunkData)
            ;
            if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_470.Data.AllocatorInstance.Data);
              FVar23.Data = FVar23.Data + 0x20;
              goto LAB_14326d3c0;
            }
          }
        }
        FVar23.Data = FVar23.Data + 0x20;
      } while( true );
    }
    goto LAB_14326d55b;
  }
  goto LAB_14326d5bf;
LAB_14326d543:
  uVar9 = (ulonglong)local_490;
  pFVar22 = local_400;
  FVar23.Data = local_458;
  iVar21 = local_4e0;
LAB_14326d55b:
  if ((FGuid *)local_450.Contents.AllocatorInstance.Data != (FGuid *)0x0) {
    FMemory::Free(local_450.Contents.AllocatorInstance.Data);
  }
  if (bVar2) {
    if (3 < (byte)LogVerifyChunkData._0_1_) {
      iVar21 = iVar21 + 1;
      local_4e0 = iVar21;
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVerifyChunkData);
    }
  }
  else {
LAB_14326d5bf:
    if (1 < (byte)LogVerifyChunkData._0_1_) {
      iVar21 = iVar21 + 1;
      local_4e0 = iVar21;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVerifyChunkData);
    }
    ::FString::ConcatFC(&local_3e8,(FString *)FVar23.Data,L"\r\n");
    iVar6 = local_3e8.Data.ArrayNum + -1;
    if (local_3e8.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_4a0,(wchar_t *)local_3e8.Data.AllocatorInstance.Data,iVar6);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
    local_548 = false;
  }
  if (local_508 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)local_508)(local_508,1);
  }
  uVar17 = local_510 & 0xffffffff;
  FVar23.Data = FVar23.Data + 0x10;
  goto LAB_14326d30e;
}

