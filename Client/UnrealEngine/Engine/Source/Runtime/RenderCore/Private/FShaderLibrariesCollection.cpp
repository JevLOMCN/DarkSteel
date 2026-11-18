// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 14

// FShaderLibrariesCollection @ 145e41e80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderLibrariesCollection * __thiscall
FShaderLibrariesCollection::FShaderLibrariesCollection
          (FShaderLibrariesCollection *this,EShaderPlatform param_1,bool param_2)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  FShaderLibrariesCollection *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  IConsoleObject *pIVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FDestructionSentinel local_58;
  undefined8 local_40;
  FDestructionSentinel local_38;
  undefined8 local_20;
  
  this->ShaderPlatform = param_1;
  *(undefined8 *)&this->NamedLibrariesStack = 0;
  *(undefined8 *)&(this->NamedLibrariesStack).field_0x8 = 0;
  *(undefined8 *)&(this->NamedLibrariesStack).field_0x20 = 0;
  *(undefined4 *)&(this->NamedLibrariesStack).field_0x28 = 0;
  *(undefined4 *)&(this->NamedLibrariesStack).field_0x2c = 0x80;
  *(undefined4 *)&(this->NamedLibrariesStack).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NamedLibrariesStack).field_0x34 = 0;
  *(undefined8 *)&(this->NamedLibrariesStack).field_0x40 = 0;
  *(undefined4 *)&(this->NamedLibrariesStack).field_0x48 = 0;
  (this->NamedLibrariesMutex).Mutex.Mutex.Ptr = (void *)0x0;
  this->DumpLibraryContentsCmd = (IConsoleObject *)0x0;
  this->bSupportsPipelines = false;
  this->bNativeFormat = param_2;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FShaderLibrariesCollection *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_78);
  local_60 = &local_a0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar5[3] = DumpLibraryContentsStatic;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  pIVar7 = (IConsoleObject *)
           (*pcVar1)(pIVar2,L"r.ShaderLibrary.Dump",L"Dumps shader library map.",&local_a8,0);
  this->DumpLibraryContentsCmd = pIVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_90);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::PreloadPackageShaderMaps,(FWriteAccessScope *)&local_58);
  local_40 = 0x154f069b0;
  puVar5 = UE::Core::Private::DelegateAllocate
                     (0x28,(FDelegateAllocation *)
                           &FCoreDelegates::PreloadPackageShaderMaps.field_0x8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBVFSHAHash__H__V__TFunctionRef___A6A_AVFIoRequest__AEBVFIoChunkId__V__TRefCountPtr_VFBaseGraphTask_____Z___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFShaderLibrariesCollection____A6AXV__TArrayView___CBVFSHAHash__H__V__TFunctionRef___A6A_AVFIoRequest__AEBVFIoChunkId__V__TRefCountPtr_VFBaseGraphTask_____Z___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = PreloadPackageShaderMapsDelegate;
    puVar5[3] = this;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::ReleasePreloadedPackageShaderMaps,(FWriteAccessScope *)&local_38);
  local_20 = 0x154f069c8;
  puVar5 = UE::Core::Private::DelegateAllocate
                     (0x28,(FDelegateAllocation *)
                           &FCoreDelegates::ReleasePreloadedPackageShaderMaps.field_0x8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBVFSHAHash__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFShaderLibrariesCollection____A6AXV__TArrayView___CBVFSHAHash__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = ReleasePreloadedPackageShaderMapsDelegate;
    puVar5[3] = this;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// ~FShaderLibrariesCollection @ 145e43d30

/* WARNING: Removing unreachable block (ram,0x000145e4426c) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderLibrariesCollection::~FShaderLibrariesCollection(FShaderLibrariesCollection *this)

{
  ulonglong uVar1;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *this_00;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  code *pcVar6;
  TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
  this_01;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *pTVar7;
  bool bVar8;
  BOOLEAN BVar9;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FPlatformRWLock *SRWLock;
  uint uVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  ForAnyElementType local_118;
  undefined8 local_110;
  TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
  local_108;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88 [2];
  undefined4 local_54;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::PreloadPackageShaderMaps,(FWriteAccessScope *)&local_a0);
  iVar16 = 0;
  if ((FCoreDelegates::PreloadPackageShaderMaps._16_4_ != 0) &&
     (FCoreDelegates::PreloadPackageShaderMaps._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FCoreDelegates::PreloadPackageShaderMaps._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FCoreDelegates::PreloadPackageShaderMaps.field_0x8,0,0,0x10);
    FCoreDelegates::PreloadPackageShaderMaps._16_4_ = 0;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::ReleasePreloadedPackageShaderMaps,(FWriteAccessScope *)local_88);
  if ((FCoreDelegates::ReleasePreloadedPackageShaderMaps._16_4_ != 0) &&
     (FCoreDelegates::ReleasePreloadedPackageShaderMaps._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FCoreDelegates::ReleasePreloadedPackageShaderMaps._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FCoreDelegates::ReleasePreloadedPackageShaderMaps.field_0x8,0,0
               ,0x10);
    FCoreDelegates::ReleasePreloadedPackageShaderMaps._16_4_ = 0;
  }
  if (local_88[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88[0].Accessor,local_88);
  }
  if (this->DumpLibraryContentsCmd != (IConsoleObject *)0x0) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
              (IConsoleManager::Singleton,this->DumpLibraryContentsCmd,1);
  }
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  AcquireSRWLockShared((PSRWLOCK)&this->NamedLibrariesMutex);
  uVar15 = *(int *)&(this->NamedLibrariesStack).field_0x8 -
           *(int *)&(this->NamedLibrariesStack).field_0x34;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (local_110._4_4_ < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar15,&local_118,(int)local_110,(int *)((longlong)&local_110 + 4));
  }
  this_00 = &this->NamedLibrariesStack;
  iVar3 = *(int *)&(this->NamedLibrariesStack).field_0x28;
  local_f0 = &(this->NamedLibrariesStack).field_0x10;
  uStack_f4 = 1;
  local_e0 = 0;
  iStack_e4 = local_e0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_f0;
    }
    uVar15 = *puVar18;
    local_e0 = 0;
    iVar16 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar16;
      local_e0 = local_e0 + 0x20;
      iVar16 = iVar16 + 1;
      iStack_e4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145e43f61;
      uVar15 = puVar18[lVar10 + 1];
    }
    uStack_f4 = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_f4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_e4 = local_e0 + -1 + local_res18;
    if (iVar3 < iStack_e4) {
      iStack_e4 = iVar3;
    }
  }
LAB_145e43f61:
  uVar15 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  puVar2 = &(this->NamedLibrariesStack).field_0x10;
  uStack_dc = local_54;
  iStack_d8 = *(int *)&(this->NamedLibrariesStack).field_0x8 -
              *(int *)&(this->NamedLibrariesStack).field_0x34;
  uStack_e8 = 0xffffffff;
  uVar13 = uVar15 & 0xffffffe0;
  TStack_c8.CurrentBitIndex = iStack_e4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_f4,iVar16);
  iVar11 = (int)uVar15 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = local_e0;
  uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = this_00;
  iStack_f8 = iVar16;
  local_d0 = this_00;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  if (uVar15 != uVar4) {
    puVar17 = *(undefined1 **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar11;
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145e44070;
      uVar15 = *(uint *)(puVar17 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar15 = local_res20 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_145e44070:
  while( true ) {
    pTVar7 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_c8.CurrentBitIndex == uVar15) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == this_00))
    break;
    pFVar12 = (FScriptContainerElement *)
              (*(longlong *)pTVar7 + (longlong)TStack_c8.CurrentBitIndex * 0x20);
    if (((local_118.Data <= pFVar12) &&
        (pFVar12 < local_118.Data + (longlong)local_110._4_4_ * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar16 = (int)local_110;
    if ((int)local_110 == local_110._4_4_) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_118,(int *)((longlong)&local_110 + 4));
    }
    local_110 = CONCAT44(local_110._4_4_,iVar16 + 1);
    ::FString::FString((FString *)(local_118.Data + (longlong)iVar16 * 0x10),(FString *)pFVar12);
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->NamedLibrariesMutex);
  iVar16 = (int)local_110;
  pFVar12 = local_118.Data + (longlong)(int)local_110 * 0x10;
  FVar14.Data = local_118.Data;
  while( true ) {
    SRWLock = &this->NamedLibrariesMutex;
    if ((int)local_110 != iVar16) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar14.Data == pFVar12) break;
    if ((this->ShaderPlatform == SP_NumPlatforms) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderPlatform != SP_NumPlatforms",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                           ,0xb9f,
                           L"Shader library has not been properly initialized for a cooked game"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_108.Ptr = (FNamedShaderLibrary *)0x0;
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
    ::RemoveAndCopyValue(this_00,(FString *)FVar14.Data,&local_108);
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    this_01.Ptr = local_108.Ptr;
    if (local_108.Ptr != (FNamedShaderLibrary *)0x0) {
      if (3 < (byte)LogShaderLibrary._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_FShaderLibrariesCollection::CloseLibrary(FString_const&___ptr64)___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
      }
      local_108.Ptr = (FNamedShaderLibrary *)0x0;
      if (this_01.Ptr != (FNamedShaderLibrary *)0x0) {
        UE::ShaderLibrary::Private::FNamedShaderLibrary::_scalar_deleting_destructor_(this_01.Ptr,1)
        ;
      }
    }
    FShaderPipelineCache::ShaderLibraryStateChanged
              (Closed,this->ShaderPlatform,(FString *)FVar14.Data,-1);
    FVar14.Data = FVar14.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_118.Data,(int)local_110);
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (BVar9 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  *(undefined4 *)&(this->NamedLibrariesStack).field_0x48 = 0;
  pvVar5 = *(void **)&(this->NamedLibrariesStack).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  return;
}

// CloseLibrary @ 145e4d850

/* WARNING: Removing unreachable block (ram,0x000145e4d91b) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderLibrariesCollection::CloseLibrary(FShaderLibrariesCollection *this,FString *param_1)

{
  code *pcVar1;
  TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
  this_00;
  bool bVar2;
  TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
  local_res8;
  
  if ((this->ShaderPlatform == SP_NumPlatforms) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderPlatform != SP_NumPlatforms",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                         ,0xb9f,
                         L"Shader library has not been properly initialized for a cooked game"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res8.Ptr = (FNamedShaderLibrary *)0x0;
  AcquireSRWLockExclusive((PSRWLOCK)&this->NamedLibrariesMutex);
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  ::RemoveAndCopyValue(&this->NamedLibrariesStack,param_1,&local_res8);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->NamedLibrariesMutex);
  this_00.Ptr = local_res8.Ptr;
  if (local_res8.Ptr != (FNamedShaderLibrary *)0x0) {
    if (3 < (byte)LogShaderLibrary._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:_void___cdecl_FShaderLibrariesCollection::CloseLibrary(FString_const&___ptr64)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
    }
    if (this_00.Ptr != (FNamedShaderLibrary *)0x0) {
      UE::ShaderLibrary::Private::FNamedShaderLibrary::_scalar_deleting_destructor_(this_00.Ptr,1);
    }
  }
  FShaderPipelineCache::ShaderLibraryStateChanged(Closed,this->ShaderPlatform,param_1,-1);
  return;
}

// CreateShader @ 145e51230

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIShader> __thiscall
FShaderLibrariesCollection::CreateShader
          (FShaderLibrariesCollection *this,EShaderFrequency param_1,FSHAHash *param_2)

{
  code *pcVar1;
  bool bVar2;
  FShaderLibraryInstance *this_00;
  TRefCountPtr<FRHIShader> TVar3;
  undefined7 in_register_00000011;
  FRHIShader *pFVar4;
  FSHAHash *in_R9;
  int local_18 [2];
  longlong local_10;
  
  pFVar4 = (FRHIShader *)CONCAT71(in_register_00000011,param_1);
  local_18[0] = -1;
  this_00 = FindShaderLibraryForShader(this,in_R9,local_18);
  if (this_00 == (FShaderLibraryInstance *)0x0) {
    pFVar4->_padding_ = 0;
    return (TRefCountPtr<FRHIShader>)pFVar4;
  }
  FShaderLibraryInstance::GetOrCreateShader(this_00,(int)&local_10,SUB41(local_18[0],0));
  if (*(char *)(local_10 + 0x104) != (char)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader->GetFrequency() == Frequency",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                       ,0xd78,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHIShader *)(*pcVar1)();
      return (TRefCountPtr<FRHIShader>)TVar3.Reference;
    }
  }
  pFVar4->_padding_ = local_10;
  return (TRefCountPtr<FRHIShader>)pFVar4;
}

// DumpLibraryContents @ 145e52410

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderLibrariesCollection::DumpLibraryContents(FShaderLibrariesCollection *this)

{
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *pTVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  PSRWLOCK local_res8;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  undefined4 uStack_a4;
  FString local_88;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  AcquireSRWLockShared((PSRWLOCK)&this->NamedLibrariesMutex);
  if (((3 < (byte)LogShaderLibrary._0_1_) &&
      (UE::Logging::Private::BasicLog<4>
                 (&`public:_void___cdecl_FShaderLibrariesCollection::DumpLibraryContents(void)___ptr64'
                   ::__l3::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary),
      3 < (byte)LogShaderLibrary._0_1_)) &&
     (UE::Logging::Private::BasicLog<4>
                (&`public:_void___cdecl_FShaderLibrariesCollection::DumpLibraryContents(void)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary),
     3 < (byte)LogShaderLibrary._0_1_)) {
    GetShaderCount(this);
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_FShaderLibrariesCollection::DumpLibraryContents(void)___ptr64'
                ::__l39::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
  }
  iVar4 = *(int *)&(this->NamedLibrariesStack).field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->NamedLibrariesStack).field_0x10;
  iVar14 = 0;
  local_res20 = 0;
  pTVar1 = &this->NamedLibrariesStack;
  iVar16 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_70.Array;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145e52546;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = iVar16 + -1 + (int)lVar10;
    if (iVar4 < iVar9) {
LAB_145e52546:
      iVar9 = iVar4;
    }
  }
  uVar13 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uVar8,iVar14);
  iVar14 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_a4,
                       *(int *)&(this->NamedLibrariesStack).field_0x8 -
                       *(int *)&(this->NamedLibrariesStack).field_0x34);
  local_res18 = uVar13;
  local_78 = pTVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->NamedLibrariesStack).field_0x10;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      local_res18 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145e52650;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    local_res18 = uVar13;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
      local_res18 = uVar8;
    }
  }
LAB_145e52650:
  while( true ) {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->NamedLibrariesStack).field_0x10)) &&
       (pTVar6 == pTVar1)) break;
    lVar10 = (longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)pTVar6;
    if (3 < (byte)LogShaderLibrary._0_1_) {
      UE::ShaderLibrary::Private::FNamedShaderLibrary::GetShaderCount
                (*(FNamedShaderLibrary **)(lVar10 + 0x10));
      UE::Logging::Private::BasicLog<4>
                (&`public:_void___cdecl_FShaderLibrariesCollection::DumpLibraryContents(void)___ptr64'
                  ::__l61::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
    }
    lVar10 = *(longlong *)(lVar10 + 0x10);
    ::FString::FString(&local_88,L"  ");
    local_res8 = (PSRWLOCK)(lVar10 + 0x78);
    AcquireSRWLockShared(local_res8);
    puVar11 = *(undefined8 **)(lVar10 + 0x80);
    iVar4 = *(int *)(lVar10 + 0x88);
    puVar2 = puVar11 + iVar4;
    while( true ) {
      if (*(int *)(lVar10 + 0x88) != iVar4) {
        `TCheckedPointerIterator<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (puVar11 == puVar2) break;
      if (3 < (byte)LogShaderLibrary._0_1_) {
        (**(code **)(**(longlong **)*puVar11 + 0x20))();
        (**(code **)(**(longlong **)*puVar11 + 0x10))();
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
      }
      puVar11 = puVar11 + 1;
    }
    ReleaseSRWLockShared(local_res8);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    local_res20 = local_res20 + 1;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    uVar13 = local_res18;
  }
  if (3 < (byte)LogShaderLibrary._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_FShaderLibrariesCollection::DumpLibraryContents(void)___ptr64'
                ::__l79::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
  }
                    /* WARNING: Could not recover jumptable at 0x000145e52832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->NamedLibrariesMutex);
  return;
}

// DumpLibraryContentsStatic @ 145e52840

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FShaderLibrariesCollection::DumpLibraryContentsStatic(void)

{
  FPlatformRWLock *SRWLock;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *pTVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  FShaderLibrariesCollection *this;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  PSRWLOCK pRStackX_8;
  undefined1 auStackX_10 [8];
  uint uStackX_18;
  int iStackX_20;
  undefined4 uStack_a4;
  FString FStack_88;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *pTStack_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  this = Impl;
  if (Impl == (FShaderLibrariesCollection *)0x0) {
    return;
  }
  SRWLock = &Impl->NamedLibrariesMutex;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (((3 < (byte)LogShaderLibrary._0_1_) &&
      (UE::Logging::Private::BasicLog<4>
                 (&`public:_void___cdecl_FShaderLibrariesCollection::DumpLibraryContents(void)___ptr64'
                   ::__l3::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary),
      3 < (byte)LogShaderLibrary._0_1_)) &&
     (UE::Logging::Private::BasicLog<4>
                (&`public:_void___cdecl_FShaderLibrariesCollection::DumpLibraryContents(void)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary),
     3 < (byte)LogShaderLibrary._0_1_)) {
    GetShaderCount(this);
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_FShaderLibrariesCollection::DumpLibraryContents(void)___ptr64'
                ::__l39::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
  }
  iVar4 = *(int *)&(this->NamedLibrariesStack).field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->NamedLibrariesStack).field_0x10;
  iVar14 = 0;
  iStackX_20 = 0;
  pTVar1 = &this->NamedLibrariesStack;
  iVar16 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_70.Array;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145e52546;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = iVar16 + -1 + (int)lVar10;
    if (iVar4 < iVar9) {
LAB_145e52546:
      iVar9 = iVar4;
    }
  }
  uVar13 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uVar8,iVar14);
  iVar14 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_a4,
                       *(int *)&(this->NamedLibrariesStack).field_0x8 -
                       *(int *)&(this->NamedLibrariesStack).field_0x34);
  uStackX_18 = uVar13;
  pTStack_78 = pTVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->NamedLibrariesStack).field_0x10;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      uStackX_18 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145e52650;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    uStackX_18 = uVar13;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
      uStackX_18 = uVar8;
    }
  }
LAB_145e52650:
  while( true ) {
    pTVar6 = pTStack_78;
    if (*(int *)&pTStack_78->field_0x8 - *(int *)&pTStack_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&pRStackX_8);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->NamedLibrariesStack).field_0x10)) &&
       (pTVar6 == pTVar1)) break;
    lVar10 = (longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)pTVar6;
    if (3 < (byte)LogShaderLibrary._0_1_) {
      UE::ShaderLibrary::Private::FNamedShaderLibrary::GetShaderCount
                (*(FNamedShaderLibrary **)(lVar10 + 0x10));
      UE::Logging::Private::BasicLog<4>
                (&`public:_void___cdecl_FShaderLibrariesCollection::DumpLibraryContents(void)___ptr64'
                  ::__l61::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
    }
    lVar10 = *(longlong *)(lVar10 + 0x10);
    ::FString::FString(&FStack_88,L"  ");
    pRStackX_8 = (PSRWLOCK)(lVar10 + 0x78);
    AcquireSRWLockShared(pRStackX_8);
    puVar11 = *(undefined8 **)(lVar10 + 0x80);
    iVar4 = *(int *)(lVar10 + 0x88);
    puVar2 = puVar11 + iVar4;
    while( true ) {
      if (*(int *)(lVar10 + 0x88) != iVar4) {
        `TCheckedPointerIterator<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
      }
      if (puVar11 == puVar2) break;
      if (3 < (byte)LogShaderLibrary._0_1_) {
        (**(code **)(**(longlong **)*puVar11 + 0x20))();
        (**(code **)(**(longlong **)*puVar11 + 0x10))();
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
      }
      puVar11 = puVar11 + 1;
    }
    ReleaseSRWLockShared(pRStackX_8);
    if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    iStackX_20 = iStackX_20 + 1;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    uVar13 = uStackX_18;
  }
  if (3 < (byte)LogShaderLibrary._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_void___cdecl_FShaderLibrariesCollection::DumpLibraryContents(void)___ptr64'
                ::__l79::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
  }
                    /* WARNING: Could not recover jumptable at 0x000145e52832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return;
}

// FindShaderLibraryForShader @ 145e54b00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderLibraryInstance * __thiscall
FShaderLibrariesCollection::FindShaderLibraryForShader
          (FShaderLibrariesCollection *this,FSHAHash *param_1,int *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FShaderLibraryInstance *pFVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  AcquireSRWLockShared((PSRWLOCK)&this->NamedLibrariesMutex);
  iVar4 = *(int *)&(this->NamedLibrariesStack).field_0x28;
  puVar1 = &(this->NamedLibrariesStack).field_0x10;
  iVar16 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    iVar14 = 0;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar16;
      iVar14 = iVar14 + 0x20;
      iVar16 = iVar16 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145e54bce;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = iVar14 + -1 + (int)lVar10;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_145e54bce:
  uVar13 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar16);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_8c,
                       *(int *)&(this->NamedLibrariesStack).field_0x8 -
                       *(int *)&(this->NamedLibrariesStack).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FShaderLibraryInstance *)(*pcVar5)();
    return pFVar9;
  }
  uVar7 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar16 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar16;
      uVar12 = uVar12 + 0x20;
      iVar16 = iVar16 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145e54cd0;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_145e54cd0:
  do {
    if (*(int *)&(this->NamedLibrariesStack).field_0x8 -
        *(int *)&(this->NamedLibrariesStack).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      pFVar9 = (FShaderLibraryInstance *)0x0;
LAB_145e54da4:
      ReleaseSRWLockShared((PSRWLOCK)&this->NamedLibrariesMutex);
      return pFVar9;
    }
    lVar10 = *(longlong *)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
              *(longlong *)&this->NamedLibrariesStack);
    AcquireSRWLockShared((PSRWLOCK)(lVar10 + 0x78));
    plVar11 = *(longlong **)(lVar10 + 0x80);
    iVar4 = *(int *)(lVar10 + 0x88);
    plVar2 = plVar11 + iVar4;
    while( true ) {
      if (*(int *)(lVar10 + 0x88) != iVar4) {
        `TCheckedPointerIterator<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (plVar11 == plVar2) {
        ReleaseSRWLockShared((PSRWLOCK)(lVar10 + 0x78));
        goto LAB_145e54d84;
      }
      iVar16 = (**(code **)(**(longlong **)*plVar11 + 0x60))(*(longlong **)*plVar11,param_1);
      if (iVar16 != -1) break;
      plVar11 = plVar11 + 1;
    }
    *param_2 = iVar16;
    pFVar9 = (FShaderLibraryInstance *)*plVar11;
    ReleaseSRWLockShared((PSRWLOCK)(lVar10 + 0x78));
    if (pFVar9 != (FShaderLibraryInstance *)0x0) goto LAB_145e54da4;
LAB_145e54d84:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// FindShaderLibraryForShaderMap @ 145e54e90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderLibraryInstance * __thiscall
FShaderLibrariesCollection::FindShaderLibraryForShaderMap
          (FShaderLibrariesCollection *this,FSHAHash *param_1,int *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FShaderLibraryInstance *pFVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  AcquireSRWLockShared((PSRWLOCK)&this->NamedLibrariesMutex);
  iVar4 = *(int *)&(this->NamedLibrariesStack).field_0x28;
  puVar1 = &(this->NamedLibrariesStack).field_0x10;
  iVar16 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    iVar14 = 0;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar16;
      iVar14 = iVar14 + 0x20;
      iVar16 = iVar16 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145e54f5e;
      uVar13 = puVar17[lVar10 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = iVar14 + -1 + (int)lVar10;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_145e54f5e:
  uVar13 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar16);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_8c,
                       *(int *)&(this->NamedLibrariesStack).field_0x8 -
                       *(int *)&(this->NamedLibrariesStack).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FShaderLibraryInstance *)(*pcVar5)();
    return pFVar9;
  }
  uVar7 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar16 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar16;
      uVar12 = uVar12 + 0x20;
      iVar16 = iVar16 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145e55060;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_145e55060:
  do {
    if (*(int *)&(this->NamedLibrariesStack).field_0x8 -
        *(int *)&(this->NamedLibrariesStack).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      pFVar9 = (FShaderLibraryInstance *)0x0;
LAB_145e55134:
      ReleaseSRWLockShared((PSRWLOCK)&this->NamedLibrariesMutex);
      return pFVar9;
    }
    lVar10 = *(longlong *)
              ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
              *(longlong *)&this->NamedLibrariesStack);
    AcquireSRWLockShared((PSRWLOCK)(lVar10 + 0x78));
    plVar11 = *(longlong **)(lVar10 + 0x80);
    iVar4 = *(int *)(lVar10 + 0x88);
    plVar2 = plVar11 + iVar4;
    while( true ) {
      if (*(int *)(lVar10 + 0x88) != iVar4) {
        `TCheckedPointerIterator<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (plVar11 == plVar2) {
        ReleaseSRWLockShared((PSRWLOCK)(lVar10 + 0x78));
        goto LAB_145e55114;
      }
      iVar16 = (**(code **)(**(longlong **)*plVar11 + 0x58))(*(longlong **)*plVar11,param_1);
      if (iVar16 != -1) break;
      plVar11 = plVar11 + 1;
    }
    *param_2 = iVar16;
    pFVar9 = (FShaderLibraryInstance *)*plVar11;
    ReleaseSRWLockShared((PSRWLOCK)(lVar10 + 0x78));
    if (pFVar9 != (FShaderLibraryInstance *)0x0) goto LAB_145e55134;
LAB_145e55114:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// GatherShaderMapResourceReferences @ 145e559f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderLibrariesCollection::GatherShaderMapResourceReferences
          (FShaderLibrariesCollection *this,FShaderMapResource_SharedCode *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  PSRWLOCK SRWLock;
  longlong *plVar2;
  FShaderMapResource_SharedCode *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 local_res8 [8];
  FShaderMapResource_SharedCode *local_res10;
  undefined1 local_res20 [8];
  uint local_d8;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->NamedLibrariesMutex);
  iVar9 = *(int *)&(this->NamedLibrariesStack).field_0x28;
  puVar1 = &(this->NamedLibrariesStack).field_0x10;
  iVar14 = 0;
  iVar16 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar17 = *(uint **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar20 = *puVar17;
    while (uVar20 == 0) {
      lVar10 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145e55ab0;
      uVar20 = puVar17[lVar10 + 1];
    }
    uVar7 = -uVar20 & uVar20;
    uVar11 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = iVar16 + -1 + (int)lVar10;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_145e55ab0:
  local_d8 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  uVar20 = local_d8 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,iVar14);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)local_d8 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_a4,
                       *(int *)&(this->NamedLibrariesStack).field_0x8 -
                       *(int *)&(this->NamedLibrariesStack).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_d8 < 0) || (iVar9 < (int)local_d8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  if (local_d8 != uVar7) {
    puVar15 = *(undefined1 **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)local_d8 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar20 = uVar20 + 0x20;
      iVar14 = iVar14 + 1;
      local_d8 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145e55bc0;
      uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar11 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_d8 = (int)lVar10 + -1 + uVar20;
    if ((int)uVar7 < (int)local_d8) {
      local_d8 = uVar7;
    }
  }
LAB_145e55bc0:
  do {
    if (*(int *)&(this->NamedLibrariesStack).field_0x8 -
        *(int *)&(this->NamedLibrariesStack).field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == local_d8) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
                    /* WARNING: Could not recover jumptable at 0x000145e55dff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)&this->NamedLibrariesMutex);
      return;
    }
    lVar19 = (longlong)TStack_68.CurrentBitIndex * 0x20 + *(longlong *)&this->NamedLibrariesStack;
    lVar10 = *(longlong *)(lVar19 + 0x10);
    uVar7 = *(uint *)(lVar10 + 0x88);
    uVar11 = (ulonglong)(int)uVar7;
    plVar18 = *(longlong **)(lVar10 + 0x80);
    plVar2 = plVar18 + uVar11;
    while( true ) {
      if (*(int *)(lVar10 + 0x88) != (int)uVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (plVar18 == plVar2) break;
      lVar12 = *plVar18;
      uVar20 = 0;
      if (0 < *(int *)(lVar12 + 0xa10)) {
        lVar21 = 0;
        do {
          SRWLock = (PSRWLOCK)(lVar12 + 0xb18);
          AcquireSRWLockShared(SRWLock);
          uVar13 = 0;
          if ((int)uVar20 < *(int *)(lVar12 + 0xa10)) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_00 = *(FShaderMapResource_SharedCode **)(lVar21 + *(longlong *)(lVar12 + 0xa08));
          if (this_00 == (FShaderMapResource_SharedCode *)0x0) {
            ReleaseSRWLockShared(SRWLock);
          }
          else {
            FShaderMapResource::AddRef((FShaderMapResource *)this_00);
            ReleaseSRWLockShared(SRWLock);
            FShaderMapResource::Release((FShaderMapResource *)this_00);
          }
          if (this_00 == local_res10) {
            pFVar3 = *(FScriptContainerElement **)(lVar19 + 0x10);
            pFVar4 = (param_2->AllocatorInstance).Data;
            if (((pFVar4 <= pFVar3) && (pFVar3 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = param_2->ArrayNum;
            if (iVar9 == param_2->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar9 + 1;
            ::FString::FString((FString *)
                               ((param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10),
                               (FString *)pFVar3);
          }
          lVar12 = *plVar18;
          uVar20 = uVar20 + 1;
          lVar21 = lVar21 + 8;
        } while ((int)uVar20 < *(int *)(lVar12 + 0xa10));
      }
      plVar18 = plVar18 + 1;
      uVar11 = (ulonglong)uVar7;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// GetShaderCount @ 145e59e50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall FShaderLibrariesCollection::GetShaderCount(FShaderLibrariesCollection *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  FPlatformRWLock *local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  local_res18 = &this->NamedLibrariesMutex;
  AcquireSRWLockShared((PSRWLOCK)local_res18);
  iVar3 = *(int *)&(this->NamedLibrariesStack).field_0x28;
  puVar1 = &(this->NamedLibrariesStack).field_0x10;
  uVar15 = 0;
  iVar12 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar11 = *puVar14;
    iVar13 = 0;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar12) goto LAB_145e59f0d;
      uVar11 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = iVar13 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_145e59f0d:
  uVar11 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->NamedLibrariesStack).field_0x8 -
                       *(int *)&(this->NamedLibrariesStack).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  uVar6 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  uVar16 = 0;
  if (uVar11 != uVar6) {
    puVar9 = *(undefined1 **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar12 * 4);
    while (uVar16 = uVar15, uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar12) goto LAB_145e5a010;
      uVar11 = *(uint *)(puVar9 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_145e5a010:
  while( true ) {
    if (*(int *)&(this->NamedLibrariesStack).field_0x8 -
        *(int *)&(this->NamedLibrariesStack).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar6 = UE::ShaderLibrary::Private::FNamedShaderLibrary::GetShaderCount
                      (*(FNamedShaderLibrary **)
                        ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                        *(longlong *)&this->NamedLibrariesStack));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    uVar16 = uVar16 + uVar6;
  }
  ReleaseSRWLockShared((PSRWLOCK)local_res18);
  return uVar16;
}

// OnPakFileMounted @ 145e63e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145e64666) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff08 : 0x000145e6466a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderLibrariesCollection::OnPakFileMounted
          (FShaderLibrariesCollection *this,FMountedPakFileInfo *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  FNamedShaderLibrary *this_00;
  ForElementType<FSetElementId> FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FMountedPakFileInfo *pFVar7;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *pTVar8;
  bool bVar9;
  undefined8 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  ForElementType<FSetElementId> FVar15;
  uint uVar16;
  uint uVar17;
  TUniqueFunction<void___cdecl(void)> *pTVar18;
  uint uVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  undefined1 *puVar22;
  uint *puVar23;
  int iVar24;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *pTVar25;
  undefined1 auStackY_2e8 [32];
  undefined1 local_298;
  undefined1 local_297 [7];
  ForAnyElementType local_290;
  undefined8 local_288;
  undefined1 local_280 [4];
  FLLMScope local_27c;
  FString local_278;
  uint local_268;
  int local_260;
  uint uStack_25c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_258;
  uint local_250;
  uint uStack_24c;
  uint uStack_248;
  undefined4 uStack_244;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *local_240;
  uint uStack_238;
  uint uStack_234;
  TBitArray<FDefaultBitArrayAllocator> *local_230;
  undefined4 uStack_228;
  uint uStack_224;
  uint local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  TBitArray<FDefaultBitArrayAllocator> *local_210;
  undefined2 local_208;
  FString local_200;
  undefined4 local_1f0;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 local_1c0;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  FMountedPakFileInfo *local_1a0;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *local_198;
  FPlatformRWLock *local_190;
  FMemScope local_188;
  TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  undefined4 local_134;
  undefined4 local_114;
  undefined1 local_108 [40];
  undefined8 local_e0;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_1a0 = param_1;
  if ((this->ShaderPlatform == SP_NumPlatforms) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderPlatform != SP_NumPlatforms",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                         ,0xb9f,
                         L"Shader library has not been properly initialized for a cooked game"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FLLMScope::FLLMScope(&local_27c,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_188,Shaders,true);
  local_190 = &this->NamedLibrariesMutex;
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)local_190);
  uVar20 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  puVar1 = &(this->NamedLibrariesStack).field_0x10;
  pTVar25 = &this->NamedLibrariesStack;
  uStack_238 = 0;
  uStack_234 = 1;
  local_220 = 0;
  uStack_224 = uStack_238;
  if (uVar20 != 0) {
    puVar23 = *(uint **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar17 = *puVar23;
    local_220 = 0;
    uStack_238 = 0;
    while (uVar17 == 0) {
      lVar12 = (longlong)(int)uStack_238;
      local_220 = local_220 + 0x20;
      uStack_238 = uStack_238 + 1;
      uStack_224 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_238)
      goto LAB_145e63f7e;
      uVar17 = puVar23[lVar12 + 1];
    }
    uStack_234 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_234 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1b8 = (int)lVar12;
    uStack_224 = (local_220 - 1) + local_1b8;
    if ((int)uVar20 < (int)uStack_224) {
      uStack_224 = uVar20;
    }
  }
LAB_145e63f7e:
  uVar17 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  uStack_21c = local_134;
  bVar11 = (byte)uVar17 & 0x1f;
  iStack_218 = *(int *)&(this->NamedLibrariesStack).field_0x8 -
               *(int *)&(this->NamedLibrariesStack).field_0x34;
  iVar24 = (int)uVar17 >> 5;
  uVar19 = uVar17 & 0xffffffe0;
  uStack_25c = 1 << bVar11;
  uVar16 = -1 << bVar11;
  uStack_228 = 0xffffffff;
  TStack_178._padding_ = CONCAT44(uStack_234,uStack_238);
  TStack_178.CurrentBitIndex = uStack_224;
  TStack_178.UnvisitedBitMask = 0xffffffff;
  TStack_178._28_4_ = local_134;
  TStack_178.BaseBitIndex = local_220;
  uStack_158 = CONCAT44(uStack_214,iStack_218);
  local_260 = iVar24;
  pTStack_258 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_250 = uVar16;
  uStack_24c = uVar17;
  uStack_248 = uVar19;
  local_240 = pTVar25;
  local_230 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_198 = pTVar25;
  local_180 = pTVar25;
  TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || ((int)uVar20 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar20 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  if (uVar17 != uVar20) {
    puVar22 = *(undefined1 **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar16 = uVar16 & *(uint *)(puVar22 + (longlong)iVar24 * 4);
    while (uVar16 == 0) {
      uStack_248 = uVar19 + 0x20;
      local_260 = iVar24 + 1;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < local_260)
      goto LAB_145e640b8;
      uVar16 = *(uint *)(puVar22 + (longlong)iVar24 * 4 + 4);
      local_250 = 0xffffffff;
      iVar24 = local_260;
      uVar19 = uStack_248;
    }
    uStack_25c = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_25c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1b4 = (int)lVar12;
    uStack_24c = (uVar19 - 1) + local_1b4;
    if ((int)uVar20 < (int)uStack_24c) {
LAB_145e640b8:
      uStack_24c = uVar20;
    }
  }
  TStack_1e0._padding_ = CONCAT44(uStack_25c,local_260);
  TStack_1e0.CurrentBitIndex = uStack_24c;
  TStack_1e0.UnvisitedBitMask = local_250;
  TStack_1e0._28_4_ = uStack_244;
  TStack_1e0.BaseBitIndex = uStack_248;
  TStack_1e0.Array = pTStack_258;
  local_210 = pTStack_258;
  local_268 = uStack_24c;
  do {
    pTVar8 = local_180;
    uVar20 = local_268;
    if (*(int *)&local_180->field_0x8 - *(int *)&local_180->field_0x34 != (int)uStack_158) {
      local_298 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_298);
    }
    if (((TStack_178.CurrentBitIndex == uVar20) && (TStack_178.Array == local_210)) &&
       (pTVar8 == pTVar25)) {
      ReleaseSRWLockExclusive((PSRWLOCK)local_190);
      iVar24 = (int)local_288;
      pTVar18 = (TUniqueFunction<void___cdecl(void)> *)
                (local_290.Data + (longlong)(int)local_288 * 0x30);
      FVar21.Data = local_290.Data;
      while( true ) {
        if ((int)local_288 != iVar24) {
          `TCheckedPointerIterator<TUniqueFunction<void___cdecl(void)>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_280);
        }
        if ((TUniqueFunction<void___cdecl(void)> *)FVar21.Data == pTVar18) break;
        UE::Core::Private::Function::CheckCallable(*(void **)FVar21.Data);
        pcVar6 = *(code **)FVar21.Data;
        plVar14 = (longlong *)&((TUniqueFunction<void___cdecl(void)> *)FVar21.Data)->field_0x10;
        if (*(longlong **)&((TUniqueFunction<void___cdecl(void)> *)FVar21.Data)->field_0x28 !=
            (longlong *)0x0) {
          plVar14 = *(longlong **)&((TUniqueFunction<void___cdecl(void)> *)FVar21.Data)->field_0x28;
        }
        uVar10 = (**(code **)(*plVar14 + 8))();
        (*pcVar6)(uVar10);
        FVar21.Data = FVar21.Data + 0x30;
      }
      DestructItems<TUniqueFunction<void___cdecl(void)>,int>
                ((TUniqueFunction<void___cdecl(void)> *)local_290.Data,(int)local_288);
      if ((TUniqueFunction<void___cdecl(void)> *)local_290.Data !=
          (TUniqueFunction<void___cdecl(void)> *)0x0) {
        FMemory::Free(local_290.Data);
      }
      FMemScope::~FMemScope(&local_188);
      FLLMScope::~FLLMScope(&local_27c);
      return;
    }
    local_88.Elements._0_8_ = 0;
    lVar12 = (longlong)TStack_178.CurrentBitIndex * 0x20 + *(longlong *)pTVar8;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._48_4_ = 0xffffffff;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&local_88,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               (*(longlong *)(lVar12 + 0x10) + 0x28));
    pFVar7 = local_1a0;
    this_00 = *(FNamedShaderLibrary **)(lVar12 + 0x10);
    uVar20 = local_1a0->ChunkId;
    if (*(int *)&(this_00->PresentChunks).Elements.field_0x8 !=
        *(int *)&(this_00->PresentChunks).Elements.field_0x34) {
      FVar4 = (this_00->PresentChunks).Hash.SecondaryData;
      FVar15 = (ForElementType<FSetElementId>)&(this_00->PresentChunks).Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar15 = FVar4;
      }
      iVar24 = *(int *)((longlong)FVar15 +
                       (ulonglong)((this_00->PresentChunks).HashSize - 1U & uVar20) * 4);
      if (iVar24 != -1) {
        lVar13 = *(longlong *)&(this_00->PresentChunks).Elements;
        do {
          if (*(uint *)(lVar13 + (longlong)iVar24 * 0xc) == uVar20) goto LAB_145e64293;
          iVar24 = *(int *)(lVar13 + 4 + (longlong)iVar24 * 0xc);
        } while (iVar24 != -1);
      }
    }
    iVar24 = (this_00->LogicalName).Data.ArrayNum;
    if (uVar20 == 0xffffffff) {
      pFVar5 = (this_00->LogicalName).Data.AllocatorInstance.Data;
      local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.Data.ArrayNum = iVar24;
      if (iVar24 == 0) {
        local_278.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar24,0,(ForAnyElementType *)&local_278,iVar24,&local_278.Data.ArrayMax);
        memcpy(local_278.Data.AllocatorInstance.Data,pFVar5,(longlong)iVar24 * 2);
      }
    }
    else {
      ::FString::PrintfImpl(&local_278,L"%s_Chunk%d");
    }
    bVar9 = UE::ShaderLibrary::Private::FNamedShaderLibrary::OpenShaderCode
                      (this_00,&this_00->BaseDirectory,&local_278);
    if (bVar9) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this_00->PresentChunks,&local_1b0,(bool *)&pFVar7->ChunkId);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
LAB_145e64293:
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Difference
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               (*(longlong *)(lVar12 + 0x10) + 0x28),
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d8,&local_88);
    uVar20 = local_b0;
    uStack_238 = 0;
    uStack_234 = 1;
    uStack_224 = uStack_238;
    local_220 = uStack_238;
    if (local_b0 != 0) {
      puVar23 = (uint *)(local_d8 + 0x10);
      if (local_b8 != (uint *)0x0) {
        puVar23 = local_b8;
      }
      uVar17 = *puVar23;
      local_220 = 0;
      uStack_238 = 0;
      while (uVar17 == 0) {
        lVar13 = (longlong)(int)uStack_238;
        local_220 = local_220 + 0x20;
        uStack_238 = uStack_238 + 1;
        uStack_224 = local_b0;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_238)
        goto LAB_145e64340;
        uVar17 = puVar23[lVar13 + 1];
      }
      uStack_234 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uStack_234 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1ac = (int)lVar13;
      uStack_224 = (local_220 - 1) + local_1ac;
      if ((int)local_b0 < (int)uStack_224) {
        uStack_224 = local_b0;
      }
    }
LAB_145e64340:
    local_240 = (TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
                 *)local_d8;
    uStack_21c = local_114;
    local_230 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
    uVar17 = local_b0 & 0xffffffe0;
    iStack_218 = local_d8._8_4_ - local_a4;
    TStack_1e0._padding_ = CONCAT44(uStack_234,uStack_238);
    uStack_228 = 0xffffffff;
    TStack_1e0.CurrentBitIndex = uStack_224;
    TStack_1e0.UnvisitedBitMask = 0xffffffff;
    iVar24 = (int)local_b0 >> 5;
    TStack_1e0._28_4_ = local_114;
    TStack_1e0.BaseBitIndex = local_220;
    local_1c0 = CONCAT44(uStack_214,iStack_218);
    bVar11 = (byte)local_b0;
    local_1e8 = local_240;
    TStack_1e0.Array = local_230;
    if (((int)local_b0 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar20 != local_b0) {
      puVar23 = (uint *)(local_d8 + 0x10);
      if (local_b8 != (uint *)0x0) {
        puVar23 = local_b8;
      }
      uVar20 = -1 << (bVar11 & 0x1f) & puVar23[iVar24];
      while (uVar20 == 0) {
        lVar13 = (longlong)iVar24;
        uVar17 = uVar17 + 0x20;
        iVar24 = iVar24 + 1;
        uVar20 = local_b0;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_145e64460;
        uVar20 = puVar23[lVar13 + 1];
      }
      uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1a8 = (int)lVar13;
      uVar20 = (uVar17 - 1) + local_1a8;
      if ((int)local_b0 < (int)uVar20) {
        uVar20 = local_b0;
      }
    }
LAB_145e64460:
    while( true ) {
      pTVar25 = local_1e8;
      if (*(int *)&local_1e8->field_0x8 - *(int *)&local_1e8->field_0x34 != (int)local_1c0) {
        local_297[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_297);
      }
      if (((TStack_1e0.CurrentBitIndex == uVar20) &&
          (TStack_1e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
         (pTVar25 ==
          (TMap<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
           *)local_d8)) break;
      uVar3 = *(undefined4 *)(*(longlong *)pTVar25 + (longlong)TStack_1e0.CurrentBitIndex * 0xc);
      local_208 = *(undefined2 *)&(*(FString **)(lVar12 + 0x10))[1].Data.AllocatorInstance.Data;
      ::FString::FString(&local_200,*(FString **)(lVar12 + 0x10));
      local_108._0_8_ = (code *)0x0;
      local_e0 = (undefined8 *)0x0;
      local_1f0 = uVar3;
      local_e0 = FMemory::Malloc(0x28,8);
      *local_e0 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__O___OnPakFileMounted_FShaderLibrariesCollection__QEAAXAEBUFMountedPakFileInfo_Private_ShaderLibrary_UE___Z__00_00_Function_Private_Core_UE__6B_
      ;
      *(undefined2 *)(local_e0 + 1) = local_208;
      local_e0[2] = 0;
      local_e0[2] = local_200.Data.AllocatorInstance.Data;
      local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_e0 + 3) = local_200.Data.ArrayNum;
      *(int *)((longlong)local_e0 + 0x1c) = local_200.Data.ArrayMax;
      local_200.Data.ArrayNum = 0;
      local_200.Data.ArrayMax = 0;
      *(undefined4 *)(local_e0 + 4) = local_1f0;
      if (local_e0 + 1 != (undefined8 *)0x0) {
        local_108._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`FShaderLibrariesCollection::OnPakFileMounted'::__l14::<lambda_1>,void>
             ::Call;
      }
      if (((local_290.Data <= (TUniqueFunction<void___cdecl(void)> *)local_108) &&
          ((FScriptContainerElement *)local_108 < local_290.Data + (longlong)local_288._4_4_ * 0x30)
          ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar24 = (int)local_288;
      if ((int)local_288 == local_288._4_4_) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1030,&local_290,(int *)((longlong)&local_288 + 4));
      }
      lVar13 = (longlong)iVar24;
      local_288 = CONCAT44(local_288._4_4_,iVar24 + 1);
      *(undefined8 *)(local_290.Data + lVar13 * 0x30) = local_108._0_8_;
      *(undefined8 **)(local_290.Data + lVar13 * 0x30 + 0x28) = local_e0;
      local_e0 = (undefined8 *)0x0;
      pFVar5 = local_290.Data + lVar13 * 0x30 + 0x10;
      *(undefined4 *)pFVar5 = local_108._16_4_;
      *(undefined4 *)(pFVar5 + 4) = local_108._20_4_;
      *(undefined4 *)(pFVar5 + 8) = local_108._24_4_;
      *(undefined4 *)(pFVar5 + 0xc) = local_108._28_4_;
      *(undefined8 *)(local_290.Data + lVar13 * 0x30 + 0x20) = local_108._32_8_;
      if (*(longlong *)(local_290.Data + lVar13 * 0x30) == 0) {
        if ((code *)local_108._0_8_ != (code *)0x0) {
          (**(code **)(CONCAT44(local_108._20_4_,local_108._16_4_) + 0x10))();
        }
      }
      else {
        local_108._0_8_ = (code *)0x0;
      }
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
    }
    local_90 = 0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_d8);
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
    TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
    pTVar25 = local_198;
  } while( true );
}

// OpenLibrary @ 145e64800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FShaderLibrariesCollection::OpenLibrary
          (FShaderLibrariesCollection *this,FString *param_1,FString *param_2,bool param_3)

{
  EShaderPlatform EVar1;
  int iVar2;
  code *pcVar3;
  FString *pFVar4;
  TSet<UE::ShaderLibrary::Private::FMountedPakFileInfo,DefaultKeyFuncs<UE::ShaderLibrary::Private::FMountedPakFileInfo,0>,FDefaultSetAllocator>
  *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
  *pTVar11;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar12;
  IFileManager *pIVar13;
  wchar_t *_Str;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar14;
  FStaticBasicLogRecord *pFVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  FString *this_01;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  FShaderLibrariesCollection *pFVar25;
  uint uVar26;
  FString *pFVar27;
  bool bVar28;
  bool bVar29;
  undefined1 auStackY_348 [32];
  FNamedShaderLibrary *local_310;
  undefined1 local_308;
  undefined1 local_307 [7];
  FString *local_300;
  undefined8 local_2f8;
  FLLMScope local_2f0 [2];
  FString *local_2e8;
  FShaderLibrariesCollection *local_2e0;
  TSet<UE::ShaderLibrary::Private::FMountedPakFileInfo,DefaultKeyFuncs<UE::ShaderLibrary::Private::FMountedPakFileInfo,0>,FDefaultSetAllocator>
  *local_2d8;
  uint uStack_2d0;
  uint uStack_2cc;
  TBitArray<FDefaultBitArrayAllocator> *local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  uint local_2b8;
  undefined4 uStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  int local_2a8;
  undefined1 local_2a4 [20];
  FMemScope local_290;
  FString local_288;
  TSet<UE::ShaderLibrary::Private::FMountedPakFileInfo,DefaultKeyFuncs<UE::ShaderLibrary::Private::FMountedPakFileInfo,0>,FDefaultSetAllocator>
  *local_278;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_270;
  TSet<UE::ShaderLibrary::Private::FMountedPakFileInfo,DefaultKeyFuncs<UE::ShaderLibrary::Private::FMountedPakFileInfo,0>,FDefaultSetAllocator>
  *local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_248;
  undefined8 uStack_228;
  FString local_220;
  FString *local_210;
  FNamedShaderLibrary **local_208;
  FMountedPakFileInfo local_200;
  undefined4 local_1bc;
  undefined4 local_19c;
  undefined1 local_198 [32];
  uint *local_178;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_164;
  ForElementType<FSetElementId> local_158;
  int local_150;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_148;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_348;
  bVar28 = -1 < CpuChannel->Enabled;
  local_2e8 = param_2;
  local_2e0 = this;
  local_2a4._12_8_ = param_1;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_FShaderLibrariesCollection::OpenLibrary(FString_const&___ptr64,FString_const&___ptr64,bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId3084,"OpenShaderLibrary",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
               ,0xc0c);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_FShaderLibrariesCollection::OpenLibrary(FString_const&___ptr64,FString_const&___ptr64,bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId3084);
  }
  local_16c = 0x80;
  local_198._0_8_ = 0;
  bVar29 = false;
  local_198._8_8_ = 0;
  local_178 = (uint *)0x0;
  local_170 = 0;
  local_164 = 0;
  local_158 = (ForElementType<FSetElementId>)0x0;
  local_150 = 0;
  local_168 = 0xffffffff;
  if ((this->ShaderPlatform == SP_NumPlatforms) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderPlatform != SP_NumPlatforms",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                         ,0xb9f,
                         L"Shader library has not been properly initialized for a cooked game"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  FLLMScope::FLLMScope(local_2f0,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_290,Shaders,true);
  bVar6 = false;
  AcquireSRWLockExclusive((PSRWLOCK)&this->NamedLibrariesMutex);
  pTVar11 = TMapBase<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
            ::Find((TMapBase<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
                    *)&this->NamedLibrariesStack,param_1);
  if (pTVar11 ==
      (TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
       *)0x0) {
    bVar6 = true;
    local_310 = ::operator_new(0x90);
    if (local_310 == (FNamedShaderLibrary *)0x0) {
      local_310 = (FNamedShaderLibrary *)0x0;
    }
    else {
      EVar1 = this->ShaderPlatform;
      ::FString::FString(&local_310->LogicalName,param_1);
      local_310->ShaderPlatform = EVar1;
      ::FString::FString(&local_310->BaseDirectory,param_2);
      *(undefined8 *)&(local_310->PresentChunks).Elements = 0;
      *(undefined8 *)&(local_310->PresentChunks).Elements.field_0x8 = 0;
      *(undefined8 *)&(local_310->PresentChunks).Elements.field_0x20 = 0;
      *(undefined4 *)&(local_310->PresentChunks).Elements.field_0x28 = 0;
      *(undefined4 *)&(local_310->PresentChunks).Elements.field_0x2c = 0x80;
      *(undefined4 *)&(local_310->PresentChunks).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(local_310->PresentChunks).Elements.field_0x34 = 0;
      (local_310->PresentChunks).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      (local_310->PresentChunks).HashSize = 0;
      (local_310->ComponentsMutex).Mutex.Mutex.Ptr = (void *)0x0;
      (local_310->Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_310->Components).ArrayNum = 0;
      (local_310->Components).ArrayMax = 0;
    }
  }
  else {
    local_310 = pTVar11->Ptr;
  }
  uVar19 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&this->NamedLibrariesMutex);
  if ((local_310 == (FNamedShaderLibrary *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Library",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                         ,0xc28,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  bVar8 = UE::ShaderLibrary::Private::FNamedShaderLibrary::OpenShaderCode(local_310,param_2,param_1)
  ;
  if (!bVar8) {
    if (!param_3) {
      local_148.Elements._0_8_ = 0;
      local_148.Elements._8_8_ = 0;
      local_148.Elements._32_8_ = 0;
      uVar17 = 0;
      local_148.Elements._40_4_ = 0;
      local_148.Elements._44_4_ = 0x80;
      local_148.Elements._48_4_ = 0xffffffff;
      local_148.Elements._52_4_ = 0;
      local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_148.HashSize = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                (&local_148,&local_310->PresentChunks);
      EnterCriticalSection
                ((LPCRITICAL_SECTION)
                 &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFilesAccessLock);
      uStack_2cc = 1;
      uVar24 = UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements._40_4_;
      uVar22 = uVar19;
      local_2b8 = uVar17;
      if (uVar24 != 0) {
        uVar22 = UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements._40_8_ &
                 0xffffffff;
        puVar21 = (uint *)&UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements.
                           field_0x10;
        if (UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements._32_8_ != 0) {
          puVar21 = (uint *)UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements.
                            _32_8_;
        }
        uVar26 = *puVar21;
        uVar23 = uVar19;
        while( true ) {
          uVar17 = (uint)uVar19;
          local_2b8 = (uint)uVar23;
          if (uVar26 != 0) break;
          lVar16 = (longlong)(int)uVar17;
          local_2b8 = local_2b8 + 0x20;
          uVar23 = (ulonglong)local_2b8;
          uVar17 = uVar17 + 1;
          uVar19 = (ulonglong)uVar17;
          if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
          goto LAB_145e64b2e;
          uVar26 = puVar21[lVar16 + 1];
        }
        uStack_2cc = ~(uVar26 - 1) & uVar26;
        uVar19 = (ulonglong)uStack_2cc * 2 + 1;
        lVar16 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_2a8 = (int)lVar16;
        uVar26 = local_2a8 + -1 + local_2b8;
        if ((int)uVar24 < (int)uVar26) {
          uVar26 = uVar24;
        }
        uVar22 = (ulonglong)uVar26;
      }
LAB_145e64b2e:
      local_2d8 = &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles;
      local_2c8 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements.
                   field_0x10;
      uStack_2c0 = 0xffffffff;
      uStack_2bc = (uint)uVar22;
      uStack_2b4 = local_1bc;
      TStack_270._padding_ = CONCAT44(uStack_2cc,uVar17);
      TStack_270.CurrentBitIndex = uStack_2bc;
      TStack_270.UnvisitedBitMask = 0xffffffff;
      local_278 = &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles;
      TStack_270._28_4_ = local_1bc;
      TStack_270.BaseBitIndex = local_2b8;
      TStack_270.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements.field_0x10;
      uStack_2d0 = uVar17;
      if ((int)uStack_2bc < (int)uVar24) {
        do {
          UE::ShaderLibrary::Private::FNamedShaderLibrary::OnPakFileMounted
                    (local_310,
                     (FMountedPakFileInfo *)
                     ((longlong)(int)uVar22 * 0x30 + *(longlong *)&local_278->Elements),param_2);
          TStack_270.UnvisitedBitMask = TStack_270.UnvisitedBitMask & ~TStack_270._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_270);
          uVar22 = (ulonglong)(uint)TStack_270.CurrentBitIndex;
        } while (TStack_270.CurrentBitIndex < (TStack_270.Array)->NumBits);
      }
      LeaveCriticalSection
                ((LPCRITICAL_SECTION)
                 &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFilesAccessLock);
      pTVar12 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Difference
                          (&local_310->PresentChunks,&local_f8,&local_148);
      if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_198 != pTVar12) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_198,pTVar12);
      }
      local_f8.HashSize = 0;
      if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_f8.Elements);
      bVar29 = local_198._8_4_ != local_164;
      if (!bVar29) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          this_00 = FPlatformFileManager::Get();
          pIVar14 = FPlatformFileManager::FindPlatformFile(this_00,L"PakFile");
          bRunningWithPakFile = pIVar14 != (IPlatformFile *)0x0;
          _Init_thread_footer(&::_TSS0);
        }
        if ((bRunningWithPakFile == false) &&
           (bVar8 = UE::ShaderLibrary::Private::ShouldLookForLooseCookedChunks(), bVar8)) {
          if (3 < (byte)LogShaderLibrary._0_1_) {
            UE::Logging::Private::BasicLog<4>
                      (&`public:_bool___cdecl_FShaderLibrariesCollection::OpenLibrary(FString_const&___ptr64,FString_const&___ptr64,bool)___ptr64'
                        ::__l35::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
          }
          local_300 = (FString *)0x0;
          local_2f8 = 0;
          ::FString::PrintfImpl(&local_220,L"ShaderArchive-*%s*.ushaderbytecode");
          ::operator/(&local_288,param_2,&local_220);
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
          FVar20.Data = (FScriptContainerElement *)L"";
          if (local_288.Data.ArrayNum != 0) {
            FVar20.Data = local_288.Data.AllocatorInstance.Data;
          }
          pIVar13 = IFileManager::Get();
          (**(code **)((longlong)*pIVar13 + 0x80))(pIVar13,&local_300,FVar20.Data,1);
          if ((int)local_2f8 < 1) {
            if (3 < (byte)LogShaderLibrary._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&`public:_bool___cdecl_FShaderLibrariesCollection::OpenLibrary(FString_const&___ptr64,FString_const&___ptr64,bool)___ptr64'
                          ::__l86::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
            }
          }
          else {
            if (3 < (byte)LogShaderLibrary._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&`public:_bool___cdecl_FShaderLibrariesCollection::OpenLibrary(FString_const&___ptr64,FString_const&___ptr64,bool)___ptr64'
                          ::__l56::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
            }
            pFVar4 = local_2e8;
            iVar18 = (int)local_2f8;
            pFVar27 = local_300 + (int)local_2f8;
            this_01 = local_300;
            while( true ) {
              if ((int)local_2f8 != iVar18) {
                local_308 = 0;
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_308);
              }
              if (this_01 == pFVar27) break;
              iVar9 = ::FString::Find(this_01,L"_Chunk",6,IgnoreCase,FromEnd,-1);
              if (iVar9 != -1) {
                iVar2 = (this_01->Data).ArrayNum;
                iVar10 = iVar2 + -1;
                if (iVar2 == 0) {
                  iVar10 = 0;
                }
                if (iVar9 + 6 < iVar10) {
                  _Str = ::FString::operator[](this_01,iVar9 + 6);
                  iVar9 = _wtoi(_Str);
                  if (-1 < iVar9) {
                    ::FString::FString(&local_200.PakFilename,L"Fake");
                    ::FString::FString(&local_200.MountPoint,pFVar4);
                    local_200.ChunkId = iVar9;
                    UE::ShaderLibrary::Private::FNamedShaderLibrary::OnPakFileMounted
                              (local_310,&local_200,pFVar4);
                    if (local_200.MountPoint.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_200.MountPoint.Data.AllocatorInstance.Data);
                    }
                    if (local_200.PakFilename.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_200.PakFilename.Data.AllocatorInstance.Data);
                    }
                  }
                }
              }
              this_01 = this_01 + 1;
            }
            pTVar12 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Difference
                                (&local_310->PresentChunks,&local_a8,&local_148);
            param_1 = (FString *)local_2a4._12_8_;
            if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_198 != pTVar12) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
              Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_198,pTVar12)
              ;
            }
            local_a8.HashSize = 0;
            if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_a8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_a8.Elements);
            bVar29 = local_198._8_4_ != local_164;
          }
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          DestructItems<FString,int>(local_300,(int)local_2f8);
          if (local_300 != (FString *)0x0) {
            FMemory::Free(local_300);
          }
        }
      }
      local_148.HashSize = 0;
      if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_148.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_148.Elements);
      if (bVar29 != false) {
        bVar8 = false;
        goto LAB_145e64f24;
      }
    }
    if (bVar6) {
      if (5 < (byte)LogShaderLibrary._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&`public:_bool___cdecl_FShaderLibrariesCollection::OpenLibrary(FString_const&___ptr64,FString_const&___ptr64,bool)___ptr64'
                    ::__l188::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
      }
      if (((local_310->Components).ArrayNum != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Library->GetNumComponents() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                             ,0xca7,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      if (local_310 != (FNamedShaderLibrary *)0x0) {
        UE::ShaderLibrary::Private::FNamedShaderLibrary::_scalar_deleting_destructor_(local_310,1);
      }
      local_310 = (FNamedShaderLibrary *)0x0;
    }
    else if (3 < (byte)LogShaderLibrary._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:_bool___cdecl_FShaderLibrariesCollection::OpenLibrary(FString_const&___ptr64,FString_const&___ptr64,bool)___ptr64'
                  ::__l215::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
    }
    goto LAB_145e65389;
  }
  bVar29 = true;
  bVar8 = true;
LAB_145e64f24:
  pFVar25 = local_2e0;
  if (bVar6) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_2e0->NamedLibrariesMutex);
    pTVar11 = TMapBase<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
              ::Find((TMapBase<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>_>
                      *)&pFVar25->NamedLibrariesStack,param_1);
    if (pTVar11 ==
        (TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
         *)0x0) {
      if (bVar8) {
        if (3 < (byte)LogShaderLibrary._0_1_) {
          if ((param_1->Data).ArrayNum == 0) {
            pFVar15 = &`public:_bool___cdecl_FShaderLibrariesCollection::OpenLibrary(FString_const&___ptr64,FString_const&___ptr64,bool)___ptr64'
                       ::__l116::LOG_Static;
          }
          else {
            pFVar15 = &`public:_bool___cdecl_FShaderLibrariesCollection::OpenLibrary(FString_const&___ptr64,FString_const&___ptr64,bool)___ptr64'
                       ::__l116::LOG_Static;
          }
LAB_145e64fab:
          UE::Logging::Private::BasicLog<4>(pFVar15,(FLogCategoryBase *)&LogShaderLibrary);
        }
      }
      else if (3 < (byte)LogShaderLibrary._0_1_) {
        pFVar15 = (FStaticBasicLogRecord *)
                  &`public:_bool___cdecl_FShaderLibrariesCollection::OpenLibrary(FString_const&___ptr64,FString_const&___ptr64,bool)___ptr64'
                   ::I::LOG_Static;
        goto LAB_145e64fab;
      }
      local_208 = &local_310;
      local_210 = param_1;
      TSet<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,UE::ShaderLibrary::Private::FNamedShaderLibrary_*_&>_>
                ((TSet<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>,0>,FDefaultSetAllocator>
                  *)&pFVar25->NamedLibrariesStack,
                 (TPairInitializer<FString_const_&,UE::ShaderLibrary::Private::FNamedShaderLibrary_*_&>
                  *)local_2a4,(bool *)&local_210);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar25->NamedLibrariesMutex);
    }
    else {
      if (local_310 != (FNamedShaderLibrary *)0x0) {
        UE::ShaderLibrary::Private::FNamedShaderLibrary::_scalar_deleting_destructor_(local_310,1);
      }
      local_310 = (FNamedShaderLibrary *)0x0;
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar25->NamedLibrariesMutex);
    }
  }
  else if (3 < (byte)LogShaderLibrary._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`public:_bool___cdecl_FShaderLibrariesCollection::OpenLibrary(FString_const&___ptr64,FString_const&___ptr64,bool)___ptr64'
                ::__l158::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
    pFVar25 = local_2e0;
  }
  if (local_310 != (FNamedShaderLibrary *)0x0) {
    FShaderPipelineCache::ShaderLibraryStateChanged(Opened,pFVar25->ShaderPlatform,param_1,-1);
    uVar17 = local_170;
    uStack_2d0 = 0;
    uStack_2cc = 1;
    local_2b8 = 0;
    uStack_2bc = 0;
    if (local_170 != 0) {
      puVar21 = (uint *)(local_198 + 0x10);
      if (local_178 != (uint *)0x0) {
        puVar21 = local_178;
      }
      uVar24 = *puVar21;
      local_2b8 = 0;
      while (uVar24 == 0) {
        lVar16 = (longlong)(int)uStack_2d0;
        local_2b8 = local_2b8 + 0x20;
        uStack_2d0 = uStack_2d0 + 1;
        uStack_2bc = local_170;
        if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2d0)
        goto LAB_145e65110;
        uVar24 = (puVar21 + 1)[lVar16];
      }
      uStack_2cc = -uVar24 & uVar24;
      uVar19 = (ulonglong)uStack_2cc * 2 + 1;
      lVar16 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_2a4._4_4_ = (undefined4)lVar16;
      uStack_2bc = (local_2b8 - 1) + local_2a4._4_4_;
      if ((int)local_170 < (int)uStack_2bc) {
        uStack_2bc = local_170;
      }
    }
LAB_145e65110:
    local_2d8 = (TSet<UE::ShaderLibrary::Private::FMountedPakFileInfo,DefaultKeyFuncs<UE::ShaderLibrary::Private::FMountedPakFileInfo,0>,FDefaultSetAllocator>
                 *)local_198;
    uStack_2b4 = local_19c;
    local_2c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
    uVar26 = local_170 & 0xffffffe0;
    iStack_2b0 = local_198._8_4_ - local_164;
    uStack_2c0 = 0xffffffff;
    TStack_248.CurrentBitIndex = uStack_2bc;
    TStack_248.UnvisitedBitMask = 0xffffffff;
    uVar24 = -1 << ((byte)local_170 & 0x1f);
    TStack_248._padding_ = CONCAT44(uStack_2cc,uStack_2d0);
    iVar18 = (int)local_170 >> 5;
    local_2e8 = (FString *)CONCAT44(local_2e8._4_4_,uVar24);
    TStack_248._28_4_ = local_19c;
    TStack_248.BaseBitIndex = local_2b8;
    uStack_228 = CONCAT44(uStack_2ac,iStack_2b0);
    local_250 = local_2d8;
    TStack_248.Array = local_2c8;
    if ((int)local_170 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      uVar24 = (uint)local_2e8;
    }
    pFVar25 = local_2e0;
    if (uVar17 != local_170) {
      puVar21 = (uint *)(local_198 + 0x10);
      if (local_178 != (uint *)0x0) {
        puVar21 = local_178;
      }
      uVar24 = uVar24 & puVar21[iVar18];
      while (uVar24 == 0) {
        lVar16 = (longlong)iVar18;
        uVar26 = uVar26 + 0x20;
        iVar18 = iVar18 + 1;
        uVar17 = local_170;
        if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_145e65234;
        uVar24 = (puVar21 + 1)[lVar16];
      }
      uVar19 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar17 = (uVar26 - 1) + (int)lVar16;
      if ((int)local_170 < (int)uVar17) {
        uVar17 = local_170;
      }
    }
LAB_145e65234:
    while( true ) {
      pTVar5 = local_250;
      if (*(int *)&(local_250->Elements).field_0x8 - *(int *)&(local_250->Elements).field_0x34 !=
          (int)uStack_228) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_307);
      }
      if (((TStack_248.CurrentBitIndex == uVar17) &&
          (TStack_248.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10))) &&
         (pTVar5 == (TSet<UE::ShaderLibrary::Private::FMountedPakFileInfo,DefaultKeyFuncs<UE::ShaderLibrary::Private::FMountedPakFileInfo,0>,FDefaultSetAllocator>
                     *)local_198)) break;
      FShaderPipelineCache::ShaderLibraryStateChanged
                (OpenedComponent,pFVar25->ShaderPlatform,param_1,
                 *(int *)(*(longlong *)&pTVar5->Elements +
                         (longlong)TStack_248.CurrentBitIndex * 0xc));
      TStack_248.UnvisitedBitMask = TStack_248.UnvisitedBitMask & ~TStack_248._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_248);
    }
  }
LAB_145e65389:
  FMemScope::~FMemScope(&local_290);
  FLLMScope::~FLLMScope(local_2f0);
  local_150 = 0;
  if (local_158 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_158);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_198);
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar29;
}

// PreloadPackageShaderMapsDelegate @ 145e67740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderLibrariesCollection::PreloadPackageShaderMapsDelegate
          (FShaderLibrariesCollection *this,TArrayView<FSHAHash_const_,int> *param_1,
          TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)> *param_2
          )

{
  FSHAHash *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FRHIShaderLibrary *pFVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  FShaderLibraryInstance *pFVar12;
  FShaderMapResource_SharedCode *this_00;
  FShaderMapResource_SharedCode *pFVar13;
  longlong lVar14;
  FSHAHash *pFVar15;
  FLLMScope local_res10 [2];
  TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)> *local_res18;
  uint local_res20 [2];
  FMemScope local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_res18 = param_2;
  FLLMScope::FLLMScope(local_res10,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_68,Shaders,true);
  pFVar15 = param_1->DataPtr;
  pFVar1 = pFVar15 + param_1->ArrayNum;
  do {
    if (pFVar15 == pFVar1) {
      FMemScope::~FMemScope(&local_68);
      FLLMScope::~FLLMScope(local_res10);
      return;
    }
    pFVar12 = FindShaderLibraryForShaderMap(this,pFVar15,(int *)local_res20);
    uVar8 = local_res20[0];
    if (pFVar12 != (FShaderLibraryInstance *)0x0) {
      uVar3 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)&param_2->field_0x8;
      lVar14 = (longlong)(int)local_res20[0];
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar12->ResourceLock);
      uVar11 = 0;
      if ((int)uVar8 < (pFVar12->Resources).ArrayNum) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (pFVar12->Resources).AllocatorInstance.Data;
      pFVar2 = pFVar5 + lVar14 * 8;
      if (*(longlong *)(pFVar5 + lVar14 * 8) == 0) {
        this_00 = ::operator_new(0x88);
        pFVar13 = (FShaderMapResource_SharedCode *)0x0;
        if (this_00 != (FShaderMapResource_SharedCode *)0x0) {
          pFVar13 = FShaderMapResource_SharedCode::FShaderMapResource_SharedCode
                              (this_00,pFVar12,uVar8);
        }
        *(FShaderMapResource_SharedCode **)pFVar2 = pFVar13;
        if (GPreloadShaderMaps != 0) {
          pFVar6 = (pFVar12->Library).Reference;
          local_60 = uVar3;
          local_58 = uVar4;
          uVar10 = (**(code **)(pFVar6->_padding_ + 0x80))(pFVar6,uVar8,&local_60);
          *(undefined1 *)(*(longlong *)pFVar2 + 0x84) = uVar10;
        }
        BeginInitResource(*(FRenderResource **)pFVar2,(FRenderCommandPipe *)0x0);
      }
      FShaderMapResource::AddRef(*(FShaderMapResource **)pFVar2);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar12->ResourceLock);
      param_2 = local_res18;
    }
    pFVar15 = pFVar15 + 1;
  } while( true );
}

// ReleasePreloadedPackageShaderMapsDelegate @ 145e6a470

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderLibrariesCollection::ReleasePreloadedPackageShaderMapsDelegate
          (FShaderLibrariesCollection *this,TArrayView<FSHAHash_const_,int> *param_1)

{
  FSHAHash *pFVar1;
  FShaderMapResource *this_00;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  FShaderLibraryInstance *pFVar6;
  FSHAHash *pFVar7;
  longlong lVar8;
  uint local_res10 [2];
  
  pFVar7 = param_1->DataPtr;
  pFVar1 = pFVar7 + param_1->ArrayNum;
  do {
    if (pFVar7 == pFVar1) {
      return;
    }
    pFVar6 = FindShaderLibraryForShaderMap(this,pFVar7,(int *)local_res10);
    uVar3 = local_res10[0];
    if (pFVar6 != (FShaderLibraryInstance *)0x0) {
      lVar8 = (longlong)(int)local_res10[0];
      AcquireSRWLockExclusive((PSRWLOCK)&pFVar6->ResourceLock);
      uVar5 = 0;
      if ((int)uVar3 < (pFVar6->Resources).ArrayNum) {
        uVar5 = ~uVar3 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(FShaderMapResource **)((pFVar6->Resources).AllocatorInstance.Data + lVar8 * 8);
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar6->ResourceLock);
      if (this_00 != (FShaderMapResource *)0x0) {
        FShaderMapResource::Release(this_00);
      }
    }
    pFVar7 = pFVar7 + 1;
  } while( true );
}

