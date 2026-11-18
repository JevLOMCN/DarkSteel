// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 8

// <lambda_invoker_cdecl> @ 1431ffb30

void __cdecl
`BuildPatchServices::FFileAttributesParserImpl::FFileAttributesParserImpl'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FFileAttributes *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this;
  
  param_1->bReadOnly = true;
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// <lambda_invoker_cdecl> @ 1431ffb50

void __cdecl
`BuildPatchServices::FFileAttributesParserImpl::FFileAttributesParserImpl'::__l2::<lambda_2>::
<lambda_invoker_cdecl>(FFileAttributes *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this;
  
  param_1->bCompressed = true;
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// <lambda_invoker_cdecl> @ 1431ffb70

void __cdecl
`BuildPatchServices::FFileAttributesParserImpl::FFileAttributesParserImpl'::__l2::<lambda_3>::
<lambda_invoker_cdecl>(FFileAttributes *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this;
  
  param_1->bUnixExecutable = true;
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// <lambda_invoker_cdecl> @ 1431ffb90

void __cdecl
`BuildPatchServices::FFileAttributesParserImpl::FFileAttributesParserImpl'::__l2::<lambda_4>::
<lambda_invoker_cdecl>(FFileAttributes *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FString local_res8 [2];
  
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
            (&param_1->InstallTags,local_res8,(bool *)param_2);
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FFileAttributesParserImpl @ 1432230b0

FFileAttributesParserImpl * __thiscall
BuildPatchServices::FFileAttributesParserImpl::FFileAttributesParserImpl
          (FFileAttributesParserImpl *this,IPlatformFile *param_1)

{
  TPairInitializer<FString_&&,void_(__cdecl*&&)(BuildPatchServices::FFileAttributes_&,FString)>
  local_res8;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  this->PlatformFile = param_1;
  this->_padding_ = (longlong)&___7FFileAttributesParserImpl_BuildPatchServices__6B_;
  *(undefined8 *)&this->AttributeSetters = 0;
  *(undefined8 *)&(this->AttributeSetters).field_0x8 = 0;
  *(undefined8 *)&(this->AttributeSetters).field_0x20 = 0;
  *(undefined4 *)&(this->AttributeSetters).field_0x28 = 0;
  *(undefined4 *)&(this->AttributeSetters).field_0x2c = 0x80;
  *(undefined4 *)&(this->AttributeSetters).field_0x34 = 0;
  *(undefined4 *)&(this->AttributeSetters).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AttributeSetters).field_0x40 = 0;
  *(undefined4 *)&(this->AttributeSetters).field_0x48 = 0;
  local_res8.Value =
       (_func___cdecl_void_FFileAttributes_ptr_FString **)
       `BuildPatchServices::FFileAttributesParserImpl::FFileAttributesParserImpl'::__l2::<lambda_1>
       ::<lambda_invoker_cdecl>;
  ::FString::FString((FString *)local_18,L"readonly");
  local_28._0_8_ = local_18;
  local_28._8_8_ = &local_res8.Value;
  TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_&&,void_(__cdecl*&&)(BuildPatchServices::FFileAttributes_&,FString)>_>
            ((TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
              *)&this->AttributeSetters,&local_res8,(bool *)local_28);
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  local_res8.Value =
       (_func___cdecl_void_FFileAttributes_ptr_FString **)
       `BuildPatchServices::FFileAttributesParserImpl::FFileAttributesParserImpl'::__l2::<lambda_2>
       ::<lambda_invoker_cdecl>;
  ::FString::FString((FString *)local_28,L"compressed");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &local_res8.Value;
  TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_&&,void_(__cdecl*&&)(BuildPatchServices::FFileAttributes_&,FString)>_>
            ((TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
              *)&this->AttributeSetters,&local_res8,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  local_res8.Value =
       (_func___cdecl_void_FFileAttributes_ptr_FString **)
       `BuildPatchServices::FFileAttributesParserImpl::FFileAttributesParserImpl'::__l2::<lambda_3>
       ::<lambda_invoker_cdecl>;
  ::FString::FString((FString *)local_28,L"executable");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &local_res8.Value;
  TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_&&,void_(__cdecl*&&)(BuildPatchServices::FFileAttributes_&,FString)>_>
            ((TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
              *)&this->AttributeSetters,&local_res8,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  local_res8.Value =
       (_func___cdecl_void_FFileAttributes_ptr_FString **)
       `BuildPatchServices::FFileAttributesParserImpl::FFileAttributesParserImpl'::__l2::<lambda_4>
       ::<lambda_invoker_cdecl>;
  ::FString::FString((FString *)local_28,L"tag");
  local_18._0_8_ = local_28;
  local_18._8_8_ = &local_res8.Value;
  TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_&&,void_(__cdecl*&&)(BuildPatchServices::FFileAttributes_&,FString)>_>
            ((TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
              *)&this->AttributeSetters,&local_res8,(bool *)local_18);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  return this;
}

// ~FFileAttributesParserImpl @ 143228730

void __thiscall
BuildPatchServices::FFileAttributesParserImpl::~FFileAttributesParserImpl
          (FFileAttributesParserImpl *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FFileAttributesParserImpl_BuildPatchServices__6B_;
  *(undefined4 *)&(this->AttributeSetters).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AttributeSetters).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AttributeSetters);
  return;
}

// FileAttributesMetaToMap @ 14324fe20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FFileAttributesParserImpl::FileAttributesMetaToMap
          (FFileAttributesParserImpl *this,FString *param_1,
          TMap<FString,BuildPatchServices::FFileAttributes,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileAttributes,0>_>
          *param_2)

{
  void *_Src;
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FString *this_00;
  int iVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  bool local_res20;
  undefined1 local_f7 [7];
  FString local_f0;
  FString local_e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d0;
  int local_c0 [2];
  FString local_b8;
  FScriptContainerElement *local_a8;
  FString *local_a0;
  longlong local_98;
  FScriptContainerElement *local_90;
  int local_88;
  int local_84;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  bVar4 = true;
  local_res20 = true;
  bVar3 = false;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  sVar6 = *pwVar12;
  do {
    if (sVar6 == 0) {
      return bVar4;
    }
    if (sVar6 != 0x22) {
      sVar6 = *pwVar12;
      do {
        if (sVar6 == 0) break;
        sVar6 = *(short *)((longlong)pwVar12 + 2);
        pwVar12 = (wchar_t *)((longlong)pwVar12 + 2);
      } while (sVar6 != 0x22);
    }
    if (*pwVar12 == 0) {
      if (!bVar3) {
        if (1 < (byte)LogFileAttributesParser._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogFileAttributesParser);
        }
        return false;
      }
      return bVar4;
    }
    pFVar13 = (FScriptContainerElement *)((longlong)pwVar12 + 2);
    sVar6 = *(short *)((longlong)pwVar12 + 2);
    pFVar18 = pFVar13;
    while (((sVar6 != 0x22 && (sVar6 != 0)) && (sVar6 != 10))) {
      pFVar15 = pFVar18 + 2;
      pFVar18 = pFVar18 + 2;
      sVar6 = *(short *)pFVar15;
    }
    if (*(short *)pFVar18 == 0) {
      if ((byte)LogFileAttributesParser._0_1_ < 2) {
        return false;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFileAttributesParser);
      return false;
    }
    if (*(short *)pFVar18 == 10) {
      if ((byte)LogFileAttributesParser._0_1_ < 2) {
        return false;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFileAttributesParser);
      return false;
    }
    sVar6 = *(short *)(pFVar18 + 2);
    pFVar14 = pFVar18 + 2;
    pFVar15 = pFVar14;
    while( true ) {
      local_a8 = pFVar15;
      if (sVar6 == 0x22) goto LAB_14324ff34;
      if ((sVar6 == 0) || (sVar6 == 10)) break;
      sVar6 = *(short *)(pFVar15 + 2);
      pFVar15 = pFVar15 + 2;
    }
    if (*(short *)pFVar15 == 0x22) {
LAB_14324ff34:
      if ((byte)LogFileAttributesParser._0_1_ < 2) {
        return false;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFileAttributesParser);
      return false;
    }
    bVar3 = true;
    this_00 = ::FString::ConstructFromPtrSize
                        (local_60,(wchar_t *)pFVar13,
                         (int)((longlong)pFVar18 - (longlong)pFVar13 >> 1));
    ::FString::Replace(this_00,&local_b8,L"\\",L"/",IgnoreCase);
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    iVar8 = local_b8.Data.ArrayNum + -1;
    FVar16.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_b8.Data.ArrayNum == 0) {
      iVar8 = 0;
      FVar16.Data = (FScriptContainerElement *)L"";
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar16.Data);
    iVar8 = TSet<TTuple<FString,BuildPatchServices::FFileAttributes>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileAttributes,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,BuildPatchServices::FFileAttributes>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileAttributes,0>,FDefaultSetAllocator>
                        *)param_2,uVar7,&local_b8);
    if ((iVar8 == -1) || (lVar11 = (longlong)iVar8 * 0x70 + *(longlong *)param_2, lVar11 == 0)) {
      local_a0 = &local_b8;
      TSet<TTuple<FString,BuildPatchServices::FFileAttributes>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileAttributes,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                ((TSet<TTuple<FString,BuildPatchServices::FFileAttributes>,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileAttributes,0>,FDefaultSetAllocator>
                  *)param_2,(uint)local_c0,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar7,
                 (bool *)&local_a0);
      lVar11 = (longlong)local_c0[0] * 0x70 + *(longlong *)param_2;
    }
    local_98 = lVar11 + 0x10;
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    ::FString::ConstructFromPtrSize
              (&local_70,(wchar_t *)pFVar14,(int)((longlong)pFVar15 - (longlong)pFVar14 >> 1));
    ::FString::ParseIntoArrayWS(&local_70,&local_d0,(wchar_t *)0x0,true);
    lVar11 = local_98;
    iVar8 = local_d0.ArrayNum;
    pFVar18 = local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayNum * 0x10;
    FVar16.Data = local_d0.AllocatorInstance.Data;
    while( true ) {
      if (local_d0.ArrayNum != iVar8) {
        local_f7[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f7)
        ;
      }
      pwVar12 = (wchar_t *)local_a8;
      if (FVar16.Data == pFVar18) break;
      local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.Data.ArrayNum = 0;
      local_f0.Data.ArrayMax = 0;
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.Data.ArrayNum = 0;
      local_e0.Data.ArrayMax = 0;
      ::FString::FString(&local_80,L":");
      bVar4 = ::FString::Split((FString *)FVar16.Data,&local_80,&local_f0,&local_e0);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if ((bVar4) || ((FScriptContainerElement *)&local_f0 == FVar16.Data)) {
LAB_14325015f:
        iVar9 = local_f0.Data.ArrayNum;
      }
      else {
        iVar9 = *(int *)(FVar16.Data + 8);
        _Src = *(void **)FVar16.Data;
        local_f0.Data.ArrayNum = iVar9;
        if ((iVar9 != 0) || (local_f0.Data.ArrayMax != 0)) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar9,local_f0.Data.ArrayMax,(ForAnyElementType *)&local_f0,iVar9,
                     &local_f0.Data.ArrayMax);
          if (iVar9 != 0) {
            memcpy(local_f0.Data.AllocatorInstance.Data,_Src,(longlong)iVar9 * 2);
          }
          goto LAB_14325015f;
        }
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
        iVar9 = 0;
      }
      iVar10 = iVar9 + -1;
      lVar17 = 0;
      FVar2.Data = local_f0.Data.AllocatorInstance.Data;
      if (iVar9 == 0) {
        iVar10 = 0;
        FVar2.Data = (FScriptContainerElement *)L"";
      }
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar2.Data);
      iVar9 = TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
                          *)&this->AttributeSetters,uVar7,&local_f0);
      if (iVar9 == -1) {
        if (1 < (byte)LogFileAttributesParser._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogFileAttributesParser);
        }
        local_res20 = false;
      }
      else {
        iVar9 = local_f0.Data.ArrayNum + -1;
        FVar2.Data = local_f0.Data.AllocatorInstance.Data;
        if (local_f0.Data.ArrayNum == 0) {
          iVar9 = 0;
          FVar2.Data = (FScriptContainerElement *)L"";
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar2.Data);
        iVar9 = TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
                            *)&this->AttributeSetters,uVar7,&local_f0);
        if (((iVar9 == -1) ||
            (lVar17 = (longlong)iVar9 * 0x20 + *(longlong *)&this->AttributeSetters, lVar17 == 0))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x288,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        local_90 = local_e0.Data.AllocatorInstance.Data;
        local_88 = local_e0.Data.ArrayNum;
        local_84 = local_e0.Data.ArrayMax;
        local_e0.Data.ArrayNum = 0;
        local_e0.Data.ArrayMax = 0;
        local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (**(code **)(lVar17 + 0x10))(lVar11,&local_90);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      FVar16.Data = FVar16.Data + 0x10;
      bVar4 = local_res20;
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    sVar6 = *pwVar12;
  } while( true );
}

// ParseFileAttributes @ 14325d290

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FFileAttributesParserImpl::ParseFileAttributes
          (FFileAttributesParserImpl *this,FString *param_1,
          TMap<FString,BuildPatchServices::FFileAttributes,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,BuildPatchServices::FFileAttributes,0>_>
          *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  ForAnyElementType local_38;
  int local_30 [2];
  FString local_28;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  plVar4 = (longlong *)
           (**(code **)((longlong)*this->PlatformFile + 0xe8))(this->PlatformFile,pwVar5,0);
  if (plVar4 == (longlong *)0x0) {
    if (1 < (byte)LogFileAttributesParser._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFileAttributesParser);
    }
  }
  else {
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    iVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,&local_38,local_30,local_30 + 1);
    cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,local_38.Data,(longlong)local_30[0]);
    if (cVar1 != '\0') {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      FFileHelper::BufferToString(&local_28,(uchar *)local_38.Data,local_30[0]);
      bVar2 = FileAttributesMetaToMap(this,&local_28,param_2);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      goto LAB_14325d3f0;
    }
    if (1 < (byte)LogFileAttributesParser._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogFileAttributesParser);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  bVar2 = false;
  if (plVar4 == (longlong *)0x0) {
    return false;
  }
LAB_14325d3f0:
  (**(code **)*plVar4)(plVar4,1);
  return bVar2;
}

